
all: lex bison gcc

lex:
	lex lex.l
	
bison:
	bison -d -Wcounterexamples -o y.tab.c bison.y

gcc:
	gcc lex.yy.c y.tab.c -o app -ll

