%{
#include "y.tab.h"
extern int yyerror(const char *);
extern char* name_file;  // Для использования токенов из bison
extern FILE *yyin;       // Объявляем yyin для использования файла как входного потока
extern unsigned int line;
%}



%%
[a-zA-Z0-9_-]+\.(h|c) 	                                    {printf("NAME_FILE_HEADER ");return NAME_FILE_HEADER; }
("int"|"void"|"char"|"bool"|"float"|"unsigned char")         {printf("%s", yytext); return TYPE;}
"\""			{printf("\" ");return '"';}
"="         		{printf("= ");return '=';}
"<"         		{printf("< ");return '<';}
">"         		{printf("> ");return '>';}
"*"         		{printf("* ");return '*';}
"("         		{printf("( ");return '(';}
")"         		{printf(") ");return ')';}
"{"         		{printf("{ ");return '{';}
"}"         		{printf("} ");return '}';}
"["         		{printf("[ ");return '[';}
"]"         		{printf("] ");return ']';}
","         		{printf(", ");return ',';}
";"         		{printf("; ");return ';';}
"#"         		{printf("# ");return '#';}
"include"		                                                {printf("include ");return INCLUDE;}   // Токен для директивы #include
"struct"		{printf("STRUCT "); return STRUCT;}
"if"                {printf("%s ",yytext); return IF;}
"else"               {printf("%s ",yytext); return ELSE;}
"while"             {printf("%s ",yytext); return WHILE;}
"do"                {printf("%s ",yytext); return DO;}
"for"               {printf("%s ",yytext); return FOR;}
"else if"           {printf("%s ",yytext); return ELIF;} //не смейся(((((((((((((((()
[a-zA-Z]+		{printf("%s ",yytext); return TEXT;}
[0-9]+			{printf("%s ",yytext); return NUM;}
[ \t]*\n    		{printf("probel ");line++;}
[ \t]+                  {printf("%s", yytext);}
.			{printf("Unknown symb!");}

%%

int yywrap(void) {
    return 1;
}

