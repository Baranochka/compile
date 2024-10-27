/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INCLUDE = 258,                 /* INCLUDE  */
    NAME_FILE_HEADER = 259,        /* NAME_FILE_HEADER  */
    ENDL = 260,                    /* ENDL  */
    TYPE = 261,                    /* TYPE  */
    TEXT = 262,                    /* TEXT  */
    NUM = 263,                     /* NUM  */
    STRUCT = 264,                  /* STRUCT  */
    DEFINE = 265,                  /* DEFINE  */
    RETURN = 266,                  /* RETURN  */
    IF = 267,                      /* IF  */
    ELSE = 268,                    /* ELSE  */
    ELIF = 269,                    /* ELIF  */
    WHILE = 270,                   /* WHILE  */
    DO = 271,                      /* DO  */
    FOR = 272,                     /* FOR  */
    SWITCH = 273,                  /* SWITCH  */
    CASE = 274,                    /* CASE  */
    BREAK = 275,                   /* BREAK  */
    DEFAULT = 276,                 /* DEFAULT  */
    LETTER = 277,                  /* LETTER  */
    DIGIT = 278,                   /* DIGIT  */
    NAME = 279,                    /* NAME  */
    STRING = 280,                  /* STRING  */
    ASSIGN = 281,                  /* ASSIGN  */
    INCR = 282,                    /* INCR  */
    DICR = 283,                    /* DICR  */
    ADD_EQ = 284,                  /* ADD_EQ  */
    MINUS_EQ = 285,                /* MINUS_EQ  */
    EQ_MINUS = 286,                /* EQ_MINUS  */
    MULTI_EQ = 287,                /* MULTI_EQ  */
    DIV_EQ = 288,                  /* DIV_EQ  */
    DIV2_EQ = 289,                 /* DIV2_EQ  */
    UMINUS = 290,                  /* UMINUS  */
    FOR_INC_DEC = 291,             /* FOR_INC_DEC  */
    LOR = 292,                     /* LOR  */
    LAND = 293,                    /* LAND  */
    EQ = 294,                      /* EQ  */
    NEQ = 295,                     /* NEQ  */
    LE_EQ = 296,                   /* LE_EQ  */
    GR_EQ = 297                    /* GR_EQ  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
