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
"if"                                                  	{printf("%s ", yytext); return IF;}
"else"                                                  {printf("%s ", yytext); return ELSE;}
"else[ \t\n]+if"                                        {printf("%s ", yytext); return ELIF;}
"define"						{printf("define ");return DEFINE;}
"include"						{printf("include ");return INCLUDE;}   
"return"						{printf("return ");return RETURN;}
("int"|"char"|"short"|"long"|"float"|"double"|"void")	{printf("%s ",yytext); return TYPE;}
signed[ \t]+int						{printf("%s ",yytext); return TYPE;}
"signed"						{printf("%s ",yytext); return TYPE;}
unsigned[ \t]+int					{printf("%s ",yytext); return TYPE;}
"unsigned"						{printf("%s ",yytext); return TYPE;}
signed[ \t]+char					{printf("%s ",yytext); return TYPE;}
unsigned[ \t]+char					{printf("%s ",yytext); return TYPE;}
signed[ \t]+short					{printf("%s ",yytext); return TYPE;}
short[ \t]+int						{printf("%s ",yytext); return TYPE;}
signed[ \t]+short[ \t]+int				{printf("%s ",yytext); return TYPE;}
unsigned[ \t]+short					{printf("%s ",yytext); return TYPE;}
unsigned[ \t]+short[ \t]+int				{printf("%s ",yytext); return TYPE;}
signed[ \t]+long					{printf("%s ",yytext); return TYPE;}
signed[ \t]+long[ \t]+int				{printf("%s ",yytext); return TYPE;}
long[ \t]+int						{printf("%s ",yytext); return TYPE;}
unsigned[ \t]+long					{printf("%s ",yytext); return TYPE;}
unsigned[ \t]+long[ \t]+int				{printf("%s ",yytext); return TYPE;}
long[ \t]+long						{printf("%s ",yytext); return TYPE;}
long[ \t]+long[ \t]+int					{printf("%s ",yytext); return TYPE;}
signed[ \t]+long[ \t]+long[ \t]+int			{printf("%s ",yytext); return TYPE;}
signed[ \t]+long[ \t]+long				{printf("%s ",yytext); return TYPE;}
unsigned[ \t]+long[ \t]+long				{printf("%s ",yytext); return TYPE;}
unsigned[ \t]+long[ \t]+long[ \t]+int			{printf("%s ",yytext); return TYPE;}
"struct"		{printf("struct "); return STRUCT;}
[a-zA-Z]+		{printf("%s ",yytext); return TEXT;}
[0-9]+			{printf("%s ",yytext); return NUM;}
[ \t]*\n    		{printf("\n ");line++;}
.			{}

%%

int yywrap(void) {
    return 1;
}

