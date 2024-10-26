%{
#include "y.tab.h"
extern int yyerror(const char *);
extern char* name_file;  // Для использования токенов из bison
extern FILE *yyin;       // Объявляем yyin для использования файла как входного потока
extern unsigned int line;
%}



%%
[a-zA-Z0-9_-]+\.(h|c) 	{printf("NAME_FILE_HEADER ");return NAME_FILE_HEADER; }
"\""			{printf("\" ");return '"';}
"\'"			{printf("\' ");return '\'';}
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
<<<<<<< Updated upstream
=======
"define"		{printf("define ");return DEFINE;}
>>>>>>> Stashed changes
"include"		{printf("include ");return INCLUDE;}   // Токен для директивы #include
"int"			{printf("int "); return TYPE;}
"char"			{printf("char ");return TYPE;}
"unsigned char" 	{printf("unsigned char ");return TYPE;}
"struct"		{printf("struct "); return STRUCT;}
[a-zA-Z]+		{printf("%s ",yytext); return TEXT;}
[0-9]+			{printf("%s ",yytext); return NUM;}
[ \t]*\n    		{printf("probel ");line++;}
.			{}

%%

int yywrap(void) {
    return 1;
}

