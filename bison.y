%{
#include <stdio.h>
#include <stdlib.h>
extern FILE *yyin;
extern int yylex();
int yyparse();
int yyerror(const char *s);
unsigned int line = 1;
%}
%error-verbose;
%token INCLUDE NAME_FILE_HEADER ENDL TYPE TEXT NUM STRUCT IF ELSE WHILE DO FOR ELIF   ';' 

%start programm

%left ELSE
%left ELIF
%%


programm:
	 begin_next  {printf ("begin nexttttt");}	
	// | begin {printf ("begin nexttttt");}			
	;

begin:
	include
	| func ';' 			
	| func '{' '}' ';'		
	| func '{'body_func'}' 		
	| definition {printf ("iiiiiiiiii");}
	| operator // s // убрали ;

	;
/*operators:
	operator
	| operators operator
	; */

operator:
	assigment_operators
	| conditional_operator 
	;
assigment_operators:
	id '=' '"' TEXT '"' ';'
	| id '=' NUM ';'
	| id '=' id ';'
	;

begin_next: 
	begin				 
	| begin_next  begin 		
	;


/*
definitions:
	definition  ';'
	| definitions  definition ';'*/

definition:
	initialize ';'
	| desc_array
	| desc_struct
	;

Allinitialize:
	id_list  initialize
	| id_list 
	| id_list '=' '"' TEXT '"' 
	| id_list '=' NUM 
	// | begin
	;

initialize:
   type Allinitialize 
   |  Allinitialize
   ; 

/*variable: 
	type id_list
	;*/

id_list:
	id
	| id ',' id_list
//	|begin //удалить?
	;

type:
	TYPE
	| TYPE star
	;
id:	
	TEXT
	| TEXT id_next ' '
	
	;

id_next:
	TEXT
	| NUM
	| TEXT id_next
	| NUM id_next
	;
	
star:
	'*'
	| '*' star
	;	

conditional_operator:   //условный оператор
	IF '(' condition ')' statement_block
	| IF '(' condition ')' statement_block  ELSE  statement_block
    | IF '(' condition ')' statement_block mnogoELSE  statement_block
	;


	
	mnogoELSE:
	ELIF '(' condition ')' statement_block
	| mnogoELSE ELIF '(' condition ')' statement_block




statement_block:
    '{' statement '}'
    | statement
	
	;

statement:
	begin_next
	
	;

condition:
	initialize 
	| id '=' id
	| id '=' NUM
	| type id '=' id
	;


desc_array:
	type id square_brackets  {printf("\n");}
	| type id square_brackets '='  {printf("\n");}
	;
square_brackets:
	'[' ']'
	| '[' ']' square_brackets
	|'['id']'
	| '['id']' square_brackets
	|'['NUM']'
	| '['NUM']' square_brackets
	;

desc_struct:
	STRUCT id '{'  '}' ';' 			{printf("\n");}
	| STRUCT id '{' definition_in_struct '}' ';' 	{printf("\n");}
	;

definition_in_struct:
	definition
	| definition definition_in_struct
	;
	

include:
	'#' INCLUDE header 			
	;
	
header:
	'<' NAME_FILE_HEADER '>' 	
	|'"' NAME_FILE_HEADER '"' 	
	;
	
func:
	type arg_func_with_staples			
	| type TEXT arg_func_with_staples	
	| 
	;
	

arg_func_with_staples:
	'(' arg_func ')' 
	| '(' ')'
	;
	
arg_func:
	variable_func				
	| variable_func ',' arg_func		
	;
	
variable_func:
	type TEXT				
	| type TEXT '=' TEXT			
	;
	
body_func:
	begin_next
	;
%%

int main(int argc, char **argv) {
    if (argc > 1) {
        // Открываем файл, переданный в аргументах
        FILE *file = fopen(argv[1], "r");
        if (!file) {
            perror("Could not open file");
            return 1;
        }
        yyin = file;  // Устанавливаем файл как входной поток для лексера
    }

    	yyparse();  // Запуск парсера
	printf("success: Analysis completed! Syntax is CORRECT\n");
    if (argc > 1) {
        fclose(yyin);  // Закрываем файл после завершения анализа
    }

    return 0;
}

int yyerror(const char *s) {
    printf("yyerror %s line: %d \n", s, line);
    exit(0);
}

/*
int yyerror(const char *s) {
    printf("yyerror line: %d \n", line);
    exit(0);
}
*/
