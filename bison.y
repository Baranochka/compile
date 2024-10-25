%{
#include <stdio.h>
#include <stdlib.h>
extern FILE *yyin;
extern int yylex();
int yyparse();
int yyerror(const char *s);
unsigned int line = 1;
%}

%token INCLUDE NAME_FILE_HEADER ENDL TYPE TEXT NUM STRUCT  // Объявляем токены, которые будем использовать

%%


Programm:
	begin
	| begin begin_next 			
	;

begin:
	include
	| func ';' 			
	| func '{''}'';'		
	| func '{'body_func'}'';' 			
	| definition
	;
	
begin_next: 
	begin				
	| begin begin_next 		
	;


definition:
	variable ';'
	| desc_array ';'
	| desc_struct ';'
	;

variable: 
	type id 
	| ',' '*' id 
	| ',' id
	;
type:
	TYPE
	| TYPE star
	;
id:	
	TEXT
	| TEXT id_next
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
	TEXT
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
    printf("yyerror line: %d \n", line);
    exit(0);
}

