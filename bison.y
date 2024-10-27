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
%token INCLUDE NAME_FILE_HEADER ENDL TYPE TEXT NUM STRUCT DEFINE RETURN IF ELSE ELIF WHILE DO FOR SWITCH CASE BREAK DEFAULT LETTER DIGIT NAME STRING
%left '+' '-' '*' '/' '%'
%right ASSIGN INCR DICR ADD_EQ MINUS_EQ EQ_MINUS MULTI_EQ DIV_EQ DIV2_EQ
%left UMINUS /* Унарный минус */
%left FOR_INC_DEC
%right '=' /* Присваивание справа налево */
%right '?' ':' /* Тернарный оператор */
%left LOR
%left LAND
%left '|'
%left '^'
%left '&'
%left EQ NEQ
%left '<' '>' LE_EQ GR_EQ
%nonassoc '!' /* Унарный логический НЕ */
//%right '~'    /* Побитовый НЕ */
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
      	star id
    	| id
    	;
    	
optional_variable:
      '=' expr
      |
    ;
    
id:
      NAME
      | LETTER
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
      	star id square_brackets
    	| id square_brackets
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
    

    
expression_array:
	STRING
	| '{'var_in_curly_braces'}'
	| '{'curly_braces_list'}'
    	;
    	
var_in_curly_braces:
	NUM
	| '-' NUM
	| var_in_curly_braces ',' '-'  NUM 
	| var_in_curly_braces ',' NUM 
    	|'\''NUM'\''
    	| var_in_curly_braces ',' '\''NUM'\''
    	| '\''LETTER'\''
    	| var_in_curly_braces ',' '\''LETTER'\''
    	| STRING
    	| var_in_curly_braces ',' STRING
    	;
    	
curly_braces_list:
	'{'var_in_curly_braces'}'
      	| curly_braces_list ',' '{'var_in_curly_braces'}'	
	;


decl_struct:
	STRUCT id definition_struct

	;
	
definition_struct:
	';'
	| '{' '}' ';'
	| '{' '}' id ';'
	| '{' definition_in_struct_list '}' ';'
	| '{' definition_in_struct_list '}' id ';'
	;  
definition_in_struct_list:
	definition
	| definition definition_in_struct_list
	;


include:
	'#' INCLUDE header 				//complete		
	;
	
define:
	'#' DEFINE id id 
	| '#' DEFINE id NUM  
	| '#' DEFINE id id '{' args '}' 
	| '#' DEFINE id  
	;
header:
	'<' NAME_FILE_HEADER '>' 			//complete
	| NAME_FILE_HEADER 			//complete
	;
	
func:
	id arg_func_with_staples 		
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
	| STRUCT id id
	| STRUCT id star id			
	;	

body_func_list:
	body_func
	| body_func body_func_list
	;
body_func:
	definition
	| IF conditional_operator
	| RETURN return
	| assigment_operators_list ';'
	| function_call';'
	| loops_operators
	| SWITCH switch_operator
	;

loops_operators:
	WHILE cond_scapes while_operator
	| DO do_operator
	| FOR for_operator	
	;
while_operator:									//WHILE
	body_func
	|  ';'
	|  decl_while
	|  decl_while';'
	;
decl_while:
	'{'body_func_list'}'
	|'{''}'
	;
do_operator:
	decl_while WHILE cond_scapes
	| decl_while WHILE cond_scapes ';'
	;

	
statement_block:
    	'{' body_func_list '}'
    	|'{''}'
    	| body_func_list

	;	
	
function_call:
	id '(' args ')' 
	;

for_operator:
	'(' counter_declaration ';' condition ';' modification ')' for_op
	;
for_op:									//WHILE
	body_func
	|  ';'
	| decl_for
	| decl_for';'
	;
decl_for:
	'{'body_func_list'}'
	|'{''}'
	;	
counter_declaration:
	//expr
	//id '=' expr
	//| TYPE id '=' expr
	TYPE definition_var_arr_list
	;

modification:
	expr
	| id ADD_EQ expr 
	| id MINUS_EQ expr 
	| id MULTI_EQ expr 
	| id DIV_EQ expr 
	| incr_decr_operators 
	;
	
switch_operator:
	 cond_scapes '{' case_block default '}'
	
	;
case_block:
	case
	| case_block case
	;
case: 
	CASE condition ':' statement_block break
	;
break:
	BREAK ';'
	|
	;

default:
	DEFAULT ':' statement_block break
	|
	;
	
conditional_operator:   //условный оператор
	| cond_scapes';'
	| cond_scapes body_if
	| cond_scapes decl_if
	| cond_scapes decl_if';'
	| cond_scapes decl_if decl_else

	;
	
cond_scapes:
	'(' condition ')'
	;
decl_else:
	ELSE decl_if
	| ELSE decl_if ';'
	| mnogoELSE 
	| mnogoELSE ';'
	;

mnogoELSE:
	ELSE IF cond_scapes decl_if
	| mnogoELSE ELSE IF cond_scapes decl_if
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
	expr ';'
	;
condition:
	expr
	;	
 /*expr:
	term
	|expr ADD term
	| expr '=' term
	| expr '<' term
	| expr '>' term
	| expr LE_EQ term
	| expr GR_EQ term
	| expr NEQ term
	| expr MINUS term
	| expr EQ term
	| expr LAND term
	| expr LOR term
	| LNOT term
	| MINUS term
	;*/
expr:
	val                       
	| expr '+' expr           /* Сложение */
	| expr '-' expr           /* Вычитание */
	| expr '*' expr           /* Умножение */
	| expr '/' expr           /* Деление */
	| '-' expr %prec UMINUS         /* Унарный минус */
	| expr '=' expr           /* Присваивание */
	| expr '?' expr ':' expr /* Тернарный оператор */
	| expr LOR expr            /* Логическое ИЛИ */
	| expr LAND expr           /* Логическое И */
	| expr '|' expr           /* Побитовое ИЛИ */
	| expr '^' expr           /* Побитовое XOR */
	| expr '&' expr           /* Побитовое И */
	| expr EQ expr            /* Равно */
	| expr NEQ expr            /* Не равно */
	| expr '<' expr           /* Меньше */
	| expr '>' expr           /* Больше */
	| expr LE_EQ expr            /* Меньше или равно */
	| expr GR_EQ expr            /* Больше или равно */
	//| expr LSHIFT expr        /* Сдвиг влево */
	//| expr RSHIFT expr        /* Сдвиг вправо */
	| '!' expr                      /* Логическое НЕ */
	//| '~' expr                      /* Побитовое НЕ */
	| '(' expr ')'                  /* Скобки для приоритета */
	| function_call
	//| incr_decr_operator
	;


val:
	NUM
	| id
	| star id 
	| star id square_brackets
	| id '.' id
	//| id '(' args ')'
	|  '\''LETTER'\''
	;	
args:
	expr
	| STRING
	| '&' id
	| args ',' expr
	| args ',' '&' id
	| args ',' STRING
	;

assigment_operators:
	variable '=' expr 
	| array '=' expr
	| id '.' id '=' expr
	| variable ADD_EQ expr 
	| array ADD_EQ expr 
	| variable MINUS_EQ expr 
	| array MINUS_EQ expr 
	| variable MULTI_EQ expr 
	| array MULTI_EQ expr 
	| variable DIV_EQ expr 
	| array DIV_EQ expr 
	| incr_decr_operator
	;
assigment_operators_list:
	assigment_operators
	| assigment_operators_list assigment_operators
	;
	
incr_decr_operators:
	incr_decr_operator
	| incr_decr_operators ',' incr_decr_operator
	;

incr_decr_operator:
	id INCR 
	| id DICR 
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

