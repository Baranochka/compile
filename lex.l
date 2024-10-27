%{
#include "y.tab.h"
extern int yyerror(const char *);
extern char* name_file;  // Для использования токенов из bison
extern FILE *yyin;       // Объявляем yyin для использования файла как входного потока
extern unsigned int line;
%}



%%
\"+[a-zA-Z0-9_-]+\.(h|c)+\"	{printf("NAME_FILE_HEADER ");return NAME_FILE_HEADER; }
[a-zA-Z0-9_-]+\.(h|c)	{printf("NAME_FILE_HEADER ");return NAME_FILE_HEADER; }
":"			{printf(": ");return ':';}
"\""			{printf("\" ");return '"';}
"\'"			{printf("\' ");return '\'';}
"="         		{printf("= ");return '=';}
"|"                                                    {printf("| "); return '|';}
"&"                                                    {printf("& "); return '&';}
"^"                                                    {printf("^ "); return '^';}
"||"                                                    {printf("||"); return LOR;}
"&&"                                                    {printf("&&"); return LAND;}
"!"                                                     {printf("! "); return '!';}
"<"                                                     {printf("%s ", yytext); return '<';}
">"                                                     {printf("%s ", yytext); return '>';}
">="                                                    {printf("%s ", yytext); return GR_EQ;}
"<="                                                    {printf("%s ", yytext); return LE_EQ;}
"=="                                                    {printf("%s ", yytext); return EQ;}
"!="                                                    {printf("%s ", yytext); return NEQ;}
"+="                                                    {printf("%s ", yytext); return ADD_EQ;}
"-="                                                    {printf("%s ", yytext); return MINUS_EQ;}
"=-"                                                	{printf("%s ", yytext); return EQ_MINUS;}
"*="                                                    {printf("%s ", yytext); return MULTI_EQ;}
"/="                                                    {printf("%s ", yytext); return DIV_EQ;}
"%="         						{printf("%s ", yytext); return DIV2_EQ;}
"++"                                                    {printf("%s ", yytext); return INCR;}
"--"                                                    {printf("%s ", yytext); return DICR;}
"%"         			{printf("% ");return '%';}
"/"         			{printf("/ ");return '/';}
"*"         			{printf("* ");return '*';}
"+"         			{printf("+ ");return '+';}
"-"         			{printf("- ");return '-';}
"("         			{printf("( ");return '(';}
")"         			{printf(") ");return ')';}
"{"         			{printf("{ ");return '{';}
"}"         			{printf("} ");return '}';}
"["         			{printf("[ ");return '[';}
"]"         			{printf("] ");return ']';}
","         			{printf(", ");return ',';}
"."         			{printf(". ");return '.';}
";"         			{printf("; ");return ';';}
"#"         			{printf("# ");return '#';}
"while"                                                 {printf("%s ", yytext); return WHILE;}
"do"                                                    {printf("%s ", yytext); return DO;}
"for"                                                   {printf("%s ", yytext); return FOR;}
"if"                                                  	{printf("%s ", yytext); return IF;}
"else"                                                  {printf("%s ", yytext); return ELSE;}
"else[ \t\n]+if"                                        {printf("%s ", yytext); return ELIF;}
"switch"                                                {printf("%s ", yytext); return SWITCH;}
"case"                                                {printf("%s ", yytext); return CASE;}
"break"                                                {printf("%s ", yytext); return BREAK;}
"default"                                                {printf("%s ", yytext); return DEFAULT;}
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
[a-zA-Z]		{printf("%s ",yytext); return LETTER;}
[0-9]*			{printf("%s ",yytext); return NUM;}
[a-zA-Z_][a-zA-Z0-9_]*	{printf("%s ",yytext); return NAME;}
\"([^\"\\]*(\\.[^\"\\]*)*)?\"		  {printf("%s ",yytext); return STRING;}
"//".*                      {printf("COMMENT");}
"/*"([^*]|\*+[^*/])*\*+"/" {printf("MULTI COMMENT");}
[ \t]*\n    		{printf("\n ");line++;}
.			{}

%%

int yywrap(void) {
    return 1;
}

