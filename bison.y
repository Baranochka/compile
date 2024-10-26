%{
#include <stdio.h>
#include <stdlib.h>
extern FILE *yyin;
extern int yylex();
int yyparse();
int yyerror(const char *s);
unsigned int line = 1;
%}

<<<<<<< Updated upstream
%token INCLUDE NAME_FILE_HEADER ENDL TYPE TEXT NUM STRUCT  // Объявляем токены, которые будем использовать
=======
%token INCLUDE NAME_FILE_HEADER ENDL TYPE TEXT NUM STRUCT DEFINE // Объявляем токены, которые будем использовать
>>>>>>> Stashed changes

%%


Programm:
	begin
	| begin begin_next 			
	;

<<<<<<< Updated upstream
begin:
	include
	| func ';' 			
	| func '{''}'';'		
	| func '{'body_func'}'';' 			
	| definition
=======
begin:				//programm
	include					//complete
	| define				//complete
	| TYPE func ';'				//complete	
	| TYPE func '{''}'';'			//complete	
	| TYPE func '{'body_func'}'';' 			
	| definition 
>>>>>>> Stashed changes
	;
	
begin_next: 
	begin				
	| begin begin_next 		
	;


definition:
<<<<<<< Updated upstream
	variable ';'
	| desc_array ';'
	| desc_struct ';'
	;

variable: 
	type id 
	| ',' '*' id 
	| ',' id
	;
=======
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
    	//| decl_list_var ',' variable optional_variable
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
>>>>>>> Stashed changes
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

<<<<<<< Updated upstream

	
desc_array:
	type id square_brackets  {printf("\n");}
	| type id square_brackets '='  {printf("\n");}
	;
=======
decl_array: 
	decl_list_array 
	;
	
decl_list_array:
      	array optional_array
    	//| decl_list_array ',' array optional_array
    	;	
array:
      	star array_id square_brackets
    	| array_id square_brackets
    	;
>>>>>>> Stashed changes
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
<<<<<<< Updated upstream
definition_in_struct:
	definition
	| definition definition_in_struct
=======

decl_struct:
	STRUCT TEXT definition_struct
>>>>>>> Stashed changes
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
<<<<<<< Updated upstream
	type arg_func_with_staples			
	| type TEXT arg_func_with_staples		
=======
	TEXT arg_func_with_staples		
>>>>>>> Stashed changes
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
	
body_func:
	TEXT
<<<<<<< Updated upstream
=======
	| definition
>>>>>>> Stashed changes
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
<<<<<<< Updated upstream
    printf("yyerror line: %d \n", line);
=======
    printf("\n\nyyerror line: %d\n", line);
>>>>>>> Stashed changes
    exit(0);
}

