%{
#include <stdio.h>
#include <stdlib.h>
extern FILE *yyin;
extern int yylex();
int yyparse();
int yyerror(const char *s);
unsigned int line = 1;
%}

%define parse.error verbose
%token INCLUDE NAME_FILE_HEADER ENDL TYPE TEXT NUM STRUCT DEFINE RETURN IF ELSE ELIF// Объявляем токены, которые будем использовать


%%


Programm:
	begin
	| begin begin_next 			
	;


begin:						//programm
	include					//complete
	| define				//complete
	| TYPE func decl_func  			
	| definition 
	;
	
begin_next: 
	begin				
	| begin begin_next 		
	;


definition:
	TYPE definition_var_arr_list ';'
	| decl_struct 
	;
definition_var_arr: 
	decl_variable
	| decl_array
	;
definition_var_arr_list:
	definition_var_arr
	| definition_var_arr ',' definition_var_arr_list
	;
decl_variable: 
	decl_list_var 
	;
decl_list_var:
      	variable optional_variable
    	;	
variable:
      	star variable_id
    	| variable_id
    	;
    	
optional_variable:
      '=' expression
      |
    ;
    
variable_id:
      TEXT
    ;
expression:
      NUM
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

decl_array: 
	decl_list_array 
	;
	
decl_list_array:
      	array optional_array
    	;	
array:
      	star array_id square_brackets
    	| array_id square_brackets
    	;

square_brackets:
	'[' ']'
	| '[' ']' square_brackets
	| '['id']'
	| '['id']' square_brackets
	| '['NUM']'
	| '['NUM']' square_brackets
	;
    	
optional_array:
      '=' expression_array
      |
    ;
    
array_id:
      TEXT
    ;
    
expression_array:
	'"'TEXT'"'
	| '{'var_in_curly_braces'}'
	| '{'curly_braces_list'}'
    	;
    	
var_in_curly_braces:
	NUM
	| var_in_curly_braces ',' NUM 
    	|'\''NUM'\''
    	| var_in_curly_braces ',' '\''NUM'\''
    	| '\''TEXT'\''
    	| var_in_curly_braces ',' '\''TEXT'\''
    	;
    	
curly_braces_list:
	'{'var_in_curly_braces'}'
      	| curly_braces_list ',' '{'var_in_curly_braces'}'	
	;


decl_struct:
	STRUCT TEXT definition_struct

	;
	
definition_struct:
	';'
	| '{' '}' ';'
	| '{' '}' TEXT ';'
	| '{' definition_in_struct_list '}' ';'
	| '{' definition_in_struct_list '}' TEXT ';'
	;  
definition_in_struct_list:
	definition
	| definition definition_in_struct_list
	;


include:
	'#' INCLUDE header 				//complete		
	;
	
define:
	'#' DEFINE TEXT NUM				//complete
	;
	
header:
	'<' NAME_FILE_HEADER '>' 			//complete
	|'"' NAME_FILE_HEADER '"' 			//complete
	;
	
func:

	TEXT arg_func_with_staples 		
	;
	
decl_func:
	 ';'
	| '{''}'			//complete	
	| '{'body_func_list'}'		//complete	
	| '{''}'';'			//complete	
	| '{'body_func_list'}'';'	
	;
	
arg_func_with_staples:
	'(' arg_func ')' 
	| '(' ')'					//complete
	;
	
arg_func:
	variable_func				
	| variable_func ',' arg_func		
	;
	
variable_func:
	TYPE variable optional_variable
	| TYPE array
	| STRUCT TEXT TEXT
	| STRUCT TEXT star TEXT			
	;	

body_func_list:
	body_func
	| body_func body_func_list
	;
body_func:
	definition
	| IF conditional_operator
	| return
	| assigment_operators
	//| while
	//| for
	;

conditional_operator:   //условный оператор
	| cond_scapes';'
	| cond_scapes body_if
	| cond_scapes decl_if';'
	| cond_scapes decl_if decl_else

	;
	
cond_scapes:
	'(' condition ')'
	| NUM
	;
decl_else:
	ELSE decl_if
	| ELSE decl_if ';'
	| mnogoELSE 
	| mnogoELSE ';'
	;

mnogoELSE:
	ELSE IF '(' condition ')' decl_if
	| mnogoELSE ELSE IF '(' condition ')' decl_if
	| mnogoELSE ELSE decl_if
	;


decl_if:
	'{'body_func_list'}'
	|'{''}'
	;

body_if:
	definition
	| IF conditional_operator
	| return
	;	
	
return:
	RETURN	NUM ';'
	;
condition:
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
	printf("\n\nsuccess: Analysis completed! Syntax is CORRECT\n");
    if (argc > 1) {
        fclose(yyin);  // Закрываем файл после завершения анализа
    }

    return 0;
}

int yyerror(const char *s) {

    printf("yyerror %s line: %d \n", s, line);

    exit(0);
}

