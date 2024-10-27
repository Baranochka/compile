/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "bison.y"

#include <stdio.h>
#include <stdlib.h>
extern FILE *yyin;
extern int yylex();
int yyparse();
int yyerror(const char *s);
unsigned int line = 1;

#line 81 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INCLUDE = 3,                    /* INCLUDE  */
  YYSYMBOL_NAME_FILE_HEADER = 4,           /* NAME_FILE_HEADER  */
  YYSYMBOL_ENDL = 5,                       /* ENDL  */
  YYSYMBOL_TYPE = 6,                       /* TYPE  */
  YYSYMBOL_TEXT = 7,                       /* TEXT  */
  YYSYMBOL_NUM = 8,                        /* NUM  */
  YYSYMBOL_STRUCT = 9,                     /* STRUCT  */
  YYSYMBOL_DEFINE = 10,                    /* DEFINE  */
  YYSYMBOL_RETURN = 11,                    /* RETURN  */
  YYSYMBOL_IF = 12,                        /* IF  */
  YYSYMBOL_ELSE = 13,                      /* ELSE  */
  YYSYMBOL_ELIF = 14,                      /* ELIF  */
  YYSYMBOL_WHILE = 15,                     /* WHILE  */
  YYSYMBOL_DO = 16,                        /* DO  */
  YYSYMBOL_FOR = 17,                       /* FOR  */
  YYSYMBOL_SWITCH = 18,                    /* SWITCH  */
  YYSYMBOL_CASE = 19,                      /* CASE  */
  YYSYMBOL_BREAK = 20,                     /* BREAK  */
  YYSYMBOL_DEFAULT = 21,                   /* DEFAULT  */
  YYSYMBOL_LETTER = 22,                    /* LETTER  */
  YYSYMBOL_DIGIT = 23,                     /* DIGIT  */
  YYSYMBOL_NAME = 24,                      /* NAME  */
  YYSYMBOL_STRING = 25,                    /* STRING  */
  YYSYMBOL_26_ = 26,                       /* '+'  */
  YYSYMBOL_27_ = 27,                       /* '-'  */
  YYSYMBOL_28_ = 28,                       /* '*'  */
  YYSYMBOL_29_ = 29,                       /* '/'  */
  YYSYMBOL_30_ = 30,                       /* '%'  */
  YYSYMBOL_ASSIGN = 31,                    /* ASSIGN  */
  YYSYMBOL_INCR = 32,                      /* INCR  */
  YYSYMBOL_DICR = 33,                      /* DICR  */
  YYSYMBOL_ADD_EQ = 34,                    /* ADD_EQ  */
  YYSYMBOL_MINUS_EQ = 35,                  /* MINUS_EQ  */
  YYSYMBOL_EQ_MINUS = 36,                  /* EQ_MINUS  */
  YYSYMBOL_MULTI_EQ = 37,                  /* MULTI_EQ  */
  YYSYMBOL_DIV_EQ = 38,                    /* DIV_EQ  */
  YYSYMBOL_DIV2_EQ = 39,                   /* DIV2_EQ  */
  YYSYMBOL_UMINUS = 40,                    /* UMINUS  */
  YYSYMBOL_FOR_INC_DEC = 41,               /* FOR_INC_DEC  */
  YYSYMBOL_42_ = 42,                       /* '='  */
  YYSYMBOL_43_ = 43,                       /* '?'  */
  YYSYMBOL_44_ = 44,                       /* ':'  */
  YYSYMBOL_LOR = 45,                       /* LOR  */
  YYSYMBOL_LAND = 46,                      /* LAND  */
  YYSYMBOL_47_ = 47,                       /* '|'  */
  YYSYMBOL_48_ = 48,                       /* '^'  */
  YYSYMBOL_49_ = 49,                       /* '&'  */
  YYSYMBOL_EQ = 50,                        /* EQ  */
  YYSYMBOL_NEQ = 51,                       /* NEQ  */
  YYSYMBOL_52_ = 52,                       /* '<'  */
  YYSYMBOL_53_ = 53,                       /* '>'  */
  YYSYMBOL_LE_EQ = 54,                     /* LE_EQ  */
  YYSYMBOL_GR_EQ = 55,                     /* GR_EQ  */
  YYSYMBOL_56_ = 56,                       /* '!'  */
  YYSYMBOL_57_ = 57,                       /* ';'  */
  YYSYMBOL_58_ = 58,                       /* ','  */
  YYSYMBOL_59_ = 59,                       /* '['  */
  YYSYMBOL_60_ = 60,                       /* ']'  */
  YYSYMBOL_61_ = 61,                       /* '{'  */
  YYSYMBOL_62_ = 62,                       /* '}'  */
  YYSYMBOL_63_ = 63,                       /* '\''  */
  YYSYMBOL_64_ = 64,                       /* '#'  */
  YYSYMBOL_65_ = 65,                       /* '('  */
  YYSYMBOL_66_ = 66,                       /* ')'  */
  YYSYMBOL_67_ = 67,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 68,                  /* $accept  */
  YYSYMBOL_Programm = 69,                  /* Programm  */
  YYSYMBOL_begin = 70,                     /* begin  */
  YYSYMBOL_begin_next = 71,                /* begin_next  */
  YYSYMBOL_definition = 72,                /* definition  */
  YYSYMBOL_definition_var_arr = 73,        /* definition_var_arr  */
  YYSYMBOL_definition_var_arr_list = 74,   /* definition_var_arr_list  */
  YYSYMBOL_decl_variable = 75,             /* decl_variable  */
  YYSYMBOL_decl_list_var = 76,             /* decl_list_var  */
  YYSYMBOL_variable = 77,                  /* variable  */
  YYSYMBOL_optional_variable = 78,         /* optional_variable  */
  YYSYMBOL_id = 79,                        /* id  */
  YYSYMBOL_star = 80,                      /* star  */
  YYSYMBOL_decl_array = 81,                /* decl_array  */
  YYSYMBOL_decl_list_array = 82,           /* decl_list_array  */
  YYSYMBOL_array = 83,                     /* array  */
  YYSYMBOL_square_brackets = 84,           /* square_brackets  */
  YYSYMBOL_optional_array = 85,            /* optional_array  */
  YYSYMBOL_expression_array = 86,          /* expression_array  */
  YYSYMBOL_var_in_curly_braces = 87,       /* var_in_curly_braces  */
  YYSYMBOL_curly_braces_list = 88,         /* curly_braces_list  */
  YYSYMBOL_decl_struct = 89,               /* decl_struct  */
  YYSYMBOL_definition_struct = 90,         /* definition_struct  */
  YYSYMBOL_definition_in_struct_list = 91, /* definition_in_struct_list  */
  YYSYMBOL_include = 92,                   /* include  */
  YYSYMBOL_define = 93,                    /* define  */
  YYSYMBOL_header = 94,                    /* header  */
  YYSYMBOL_func = 95,                      /* func  */
  YYSYMBOL_decl_func = 96,                 /* decl_func  */
  YYSYMBOL_arg_func_with_staples = 97,     /* arg_func_with_staples  */
  YYSYMBOL_arg_func = 98,                  /* arg_func  */
  YYSYMBOL_variable_func = 99,             /* variable_func  */
  YYSYMBOL_body_func_list = 100,           /* body_func_list  */
  YYSYMBOL_body_func = 101,                /* body_func  */
  YYSYMBOL_loops_operators = 102,          /* loops_operators  */
  YYSYMBOL_while_operator = 103,           /* while_operator  */
  YYSYMBOL_decl_while = 104,               /* decl_while  */
  YYSYMBOL_do_operator = 105,              /* do_operator  */
  YYSYMBOL_statement_block = 106,          /* statement_block  */
  YYSYMBOL_function_call = 107,            /* function_call  */
  YYSYMBOL_for_operator = 108,             /* for_operator  */
  YYSYMBOL_for_op = 109,                   /* for_op  */
  YYSYMBOL_decl_for = 110,                 /* decl_for  */
  YYSYMBOL_counter_declaration = 111,      /* counter_declaration  */
  YYSYMBOL_modification = 112,             /* modification  */
  YYSYMBOL_switch_operator = 113,          /* switch_operator  */
  YYSYMBOL_case_block = 114,               /* case_block  */
  YYSYMBOL_case = 115,                     /* case  */
  YYSYMBOL_break = 116,                    /* break  */
  YYSYMBOL_default = 117,                  /* default  */
  YYSYMBOL_conditional_operator = 118,     /* conditional_operator  */
  YYSYMBOL_cond_scapes = 119,              /* cond_scapes  */
  YYSYMBOL_decl_else = 120,                /* decl_else  */
  YYSYMBOL_mnogoELSE = 121,                /* mnogoELSE  */
  YYSYMBOL_decl_if = 122,                  /* decl_if  */
  YYSYMBOL_body_if = 123,                  /* body_if  */
  YYSYMBOL_return = 124,                   /* return  */
  YYSYMBOL_condition = 125,                /* condition  */
  YYSYMBOL_expr = 126,                     /* expr  */
  YYSYMBOL_val = 127,                      /* val  */
  YYSYMBOL_args = 128,                     /* args  */
  YYSYMBOL_assigment_operators = 129,      /* assigment_operators  */
  YYSYMBOL_assigment_operators_list = 130, /* assigment_operators_list  */
  YYSYMBOL_incr_decr_operators = 131,      /* incr_decr_operators  */
  YYSYMBOL_incr_decr_operator = 132        /* incr_decr_operator  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  27
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   754

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  200
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  359

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   297


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,     2,    64,     2,    30,    49,    63,
      65,    66,    28,    26,    58,    27,    67,    29,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    44,    57,
      52,    42,    53,    43,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    59,     2,    60,    48,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    61,    47,    62,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    45,    46,    50,    51,    54,    55
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    32,    32,    33,    37,    38,    39,    40,    44,    45,
      49,    50,    53,    54,    57,    58,    61,    64,    69,    70,
      74,    75,    79,    80,    84,    85,    89,    93,    96,    97,
     101,   102,   103,   104,   105,   106,   110,   111,   117,   118,
     119,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   136,   137,   142,   147,   148,   149,   150,   151,   154,
     155,   160,   164,   165,   166,   167,   170,   171,   175,   179,
     180,   181,   182,   183,   187,   188,   192,   193,   197,   198,
     199,   200,   204,   205,   208,   209,   210,   211,   212,   213,
     214,   218,   219,   220,   223,   224,   225,   226,   229,   230,
     233,   234,   239,   240,   241,   246,   250,   253,   254,   255,
     256,   259,   260,   266,   270,   271,   272,   273,   274,   275,
     279,   283,   284,   287,   290,   291,   295,   296,   299,   300,
     301,   302,   303,   304,   309,   312,   313,   314,   315,   319,
     320,   321,   326,   327,   331,   332,   333,   337,   340,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   380,   382,
     383,   389,   390,   391,   392,   393,   395,   398,   399,   400,
     401,   402,   403,   407,   408,   409,   410,   411,   412,   413,
     414,   415,   416,   417,   418,   421,   422,   426,   427,   431,
     432
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INCLUDE",
  "NAME_FILE_HEADER", "ENDL", "TYPE", "TEXT", "NUM", "STRUCT", "DEFINE",
  "RETURN", "IF", "ELSE", "ELIF", "WHILE", "DO", "FOR", "SWITCH", "CASE",
  "BREAK", "DEFAULT", "LETTER", "DIGIT", "NAME", "STRING", "'+'", "'-'",
  "'*'", "'/'", "'%'", "ASSIGN", "INCR", "DICR", "ADD_EQ", "MINUS_EQ",
  "EQ_MINUS", "MULTI_EQ", "DIV_EQ", "DIV2_EQ", "UMINUS", "FOR_INC_DEC",
  "'='", "'?'", "':'", "LOR", "LAND", "'|'", "'^'", "'&'", "EQ", "NEQ",
  "'<'", "'>'", "LE_EQ", "GR_EQ", "'!'", "';'", "','", "'['", "']'", "'{'",
  "'}'", "'\\''", "'#'", "'('", "')'", "'.'", "$accept", "Programm",
  "begin", "begin_next", "definition", "definition_var_arr",
  "definition_var_arr_list", "decl_variable", "decl_list_var", "variable",
  "optional_variable", "id", "star", "decl_array", "decl_list_array",
  "array", "square_brackets", "optional_array", "expression_array",
  "var_in_curly_braces", "curly_braces_list", "decl_struct",
  "definition_struct", "definition_in_struct_list", "include", "define",
  "header", "func", "decl_func", "arg_func_with_staples", "arg_func",
  "variable_func", "body_func_list", "body_func", "loops_operators",
  "while_operator", "decl_while", "do_operator", "statement_block",
  "function_call", "for_operator", "for_op", "decl_for",
  "counter_declaration", "modification", "switch_operator", "case_block",
  "case", "break", "default", "conditional_operator", "cond_scapes",
  "decl_else", "mnogoELSE", "decl_if", "body_if", "return", "condition",
  "expr", "val", "args", "assigment_operators", "assigment_operators_list",
  "incr_decr_operators", "incr_decr_operator", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-213)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      17,   150,   119,    56,    31,    17,  -213,  -213,  -213,  -213,
    -213,  -213,    58,    46,     7,  -213,  -213,    52,   118,   119,
    -213,  -213,   102,    44,   123,    39,   119,  -213,    17,  -213,
    -213,   150,  -213,   183,  -213,    27,    11,  -213,  -213,   120,
      -4,  -213,  -213,   246,  -213,  -213,    13,  -213,  -213,   148,
    -213,   105,  -213,  -213,   120,  -213,   183,   183,   147,   183,
     136,   119,  -213,   635,  -213,   104,   120,   130,   150,   119,
    -213,   154,   164,  -213,  -213,    36,  -213,   150,   183,   160,
     160,   166,   165,   160,   186,  -213,   194,   103,   248,   182,
     715,  -213,   188,  -213,    93,  -213,    90,    49,   187,   197,
    -213,   190,   699,  -213,   196,   543,   132,   119,   120,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   120,  -213,   120,    52,
    -213,   150,  -213,   122,  -213,  -213,   245,    21,   131,   127,
     134,  -213,   573,   183,  -213,   110,   453,   362,   251,  -213,
     254,  -213,  -213,   204,  -213,   183,   183,   183,   183,   183,
    -213,  -213,   119,   183,   183,   183,   183,   183,   210,  -213,
    -213,  -213,    -5,  -213,  -213,   212,  -213,   101,  -213,   132,
    -213,  -213,  -213,   119,   635,   -19,  -213,  -213,   699,   699,
     699,   699,   699,   605,   442,   588,   290,   361,   241,   250,
     250,  -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,   119,
    -213,  -213,   142,   208,   209,    63,  -213,   215,  -213,  -213,
     207,   635,   160,  -213,   411,  -213,    23,  -213,  -213,  -213,
    -213,  -213,   220,  -213,   218,   160,   150,   224,   265,   665,
     665,   665,   665,   665,   258,   665,   665,   665,   665,   665,
    -213,  -213,  -213,   249,   144,  -213,   191,  -213,   183,  -213,
    -213,  -213,  -213,  -213,  -213,   299,   143,    21,  -213,  -213,
    -213,   255,     4,  -213,  -213,    28,  -213,  -213,   256,  -213,
     183,   183,   193,  -213,   183,  -213,  -213,  -213,   119,   635,
     650,  -213,   259,   260,   159,  -213,   160,   264,    12,  -213,
    -213,   267,   268,   282,  -213,   269,   665,  -213,  -213,  -213,
    -213,   266,  -213,   160,  -213,   183,   526,   526,  -213,  -213,
     266,   545,   263,   635,   253,  -213,   425,  -213,   310,   310,
    -213,   183,   183,   183,   183,   506,   119,  -213,   270,   276,
    -213,  -213,   635,   635,   635,   635,  -213,   439,  -213,  -213,
     279,   161,  -213,  -213,  -213,  -213,   285,  -213,  -213
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     2,     7,    11,     4,     5,
      23,    22,    24,    14,     0,    12,    16,    21,    19,     0,
      13,    26,    37,     0,     0,     0,     0,     1,     8,     3,
      25,     0,    10,     0,    17,     0,     0,    29,    68,    18,
       0,    27,    69,     0,     6,    54,     0,    53,    67,     0,
      61,    65,     9,    15,    19,   171,     0,     0,     0,     0,
     172,     0,   170,    20,   149,     0,    30,     0,     0,     0,
      75,     0,    76,    28,    38,     0,    36,     0,     0,   128,
       0,     0,     0,     0,    70,    84,     0,    19,     0,     0,
      82,    89,     0,   195,     0,   194,     0,    59,     0,     0,
      63,    62,   154,   168,     0,     0,     0,     0,   173,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    34,    31,    32,    21,
      79,     0,    74,     0,    41,    49,     0,     0,     0,     0,
       0,    86,     0,     0,    85,     0,     0,     0,     0,    92,
       0,    93,    90,     0,    72,     0,     0,     0,     0,     0,
     199,   200,     0,     0,     0,     0,     0,     0,    71,    83,
      88,    87,    19,   196,    55,     0,    60,     0,    66,     0,
     176,   169,   178,     0,   177,     0,   175,   174,   150,   151,
     152,   153,   155,     0,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,    35,    33,    78,    80,     0,
      77,    42,     0,     0,     0,     0,    39,     0,    40,   147,
       0,   148,   128,   129,     0,   144,   131,   130,   146,    95,
      94,    91,    96,    99,     0,     0,     0,     0,     0,   186,
     188,   190,   192,   183,     0,   187,   189,   191,   193,   184,
      73,    56,    57,     0,     0,   179,     0,   105,     0,    81,
      51,    45,    47,    44,    50,     0,     0,     0,   134,   145,
     143,     0,     0,   132,   133,   137,    97,    98,   100,   113,
       0,     0,   127,   121,     0,    58,    64,   182,     0,   180,
     156,    43,     0,     0,     0,   142,     0,   135,     0,   138,
     101,     0,     0,     0,   122,     0,   185,   181,    46,    48,
      52,     0,   136,     0,   141,     0,     0,     0,   120,   139,
       0,   172,     0,   114,   119,   197,     0,   104,   125,   125,
     140,     0,     0,     0,     0,     0,     0,   103,     0,     0,
     123,   126,   115,   116,   117,   118,   108,     0,   107,   106,
     109,     0,   198,   102,   124,   112,     0,   110,   111
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -213,  -213,   350,   341,    10,  -213,   -27,  -213,  -213,     1,
     243,    -1,     2,  -213,  -213,     6,   -26,  -213,  -213,  -125,
    -213,  -213,  -213,   273,  -213,  -213,  -213,  -213,  -213,  -213,
     252,  -213,   -37,  -137,  -213,  -213,   229,  -213,    59,   -38,
    -213,  -213,  -213,  -213,  -213,  -213,  -213,    99,    53,  -213,
     167,   -72,  -213,  -213,  -200,  -213,   238,   -47,   242,  -213,
     213,   294,  -213,  -213,  -212
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     4,    28,    29,    85,    13,    14,    15,    16,    86,
      34,    60,    61,    20,    21,    88,    37,    41,    76,   139,
     140,     7,    47,    98,     8,     9,    50,    23,    44,    38,
      71,    72,   327,    90,    91,   231,   148,   149,   328,    62,
     151,   349,   350,   237,   322,   152,   282,   283,   340,   305,
     144,   145,   274,   275,   226,   227,   141,   220,   221,    64,
     185,    93,    94,   324,    95
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      18,    24,    17,    19,    53,    92,    89,    22,   146,   230,
       6,   153,   212,    73,    30,     6,   296,    68,    39,    77,
      69,    74,     2,     1,   313,    51,     2,   160,   161,   134,
      54,    27,    17,    19,    67,    65,   272,    22,     6,   256,
     127,   298,    87,    48,   134,    19,   135,   257,   136,    10,
     101,    11,    92,   169,    35,    77,    97,    75,     2,    25,
     108,   135,   162,   136,    32,   224,    26,    54,   131,   129,
      19,   263,   297,   224,   130,    96,    54,    70,    17,    19,
     273,     3,   187,    22,   138,   299,    12,    66,   264,    87,
     265,    49,    19,   172,    33,   175,    19,   137,   314,   138,
     205,    42,   206,   325,    31,    43,   186,    97,    92,    92,
     234,   319,    10,   100,    11,    10,    77,    11,    55,     2,
     330,    12,   222,    10,   352,    11,   266,    10,    68,    11,
     208,    69,    10,   209,    11,   160,   161,    56,    12,   213,
      55,    10,   294,    11,    40,    87,    87,   174,    19,    19,
     171,   292,    99,   214,    10,   225,    11,   182,   252,    56,
      12,   244,    35,   278,   126,   293,    57,   223,   106,   104,
     162,   224,    10,    58,    11,    59,   253,    35,    12,    35,
      45,   183,   255,    36,    46,   215,    92,   271,    57,   216,
     128,    55,   217,   160,   161,    58,   218,    59,   348,    55,
     215,   106,   256,   107,   260,    10,   286,    11,   259,   279,
      56,    12,   281,    10,   303,    11,   287,   215,    56,    12,
     132,   310,   133,    87,   311,   143,    19,   147,   155,   156,
     150,   157,   158,   301,   302,    54,   159,    17,    19,    57,
     288,   320,    22,   154,   168,   170,    58,    57,    59,   177,
     178,   179,    77,   211,    58,     2,    59,    78,    79,   180,
     236,    80,    81,    82,    83,   238,   235,   250,    10,   251,
      11,   261,   262,   268,    12,    63,   267,   276,    92,    92,
     277,   280,   163,   164,   281,   165,   166,   307,    92,   338,
     167,   120,   121,   122,   123,   124,   125,    92,   102,   103,
     284,   105,   122,   123,   124,   125,   285,   291,    84,    92,
     356,   336,   316,   300,   321,    87,    87,   295,    19,    19,
     142,   312,   308,   309,   315,    87,   317,   224,    19,   335,
     339,   318,   353,   354,    87,   351,   357,    19,   118,   119,
     120,   121,   122,   123,   124,   125,    87,   358,   184,    19,
       5,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,    77,    52,
     176,     2,   207,    78,    79,   232,   329,    80,    81,    82,
      83,   304,   341,   228,    10,   210,    11,   142,   173,   269,
      12,     0,   254,     0,     0,     0,     0,   239,   240,   241,
     242,   243,     0,     0,     0,   245,   246,   247,   248,   249,
     119,   120,   121,   122,   123,   124,   125,    77,     0,     0,
       2,   184,    78,    79,   233,     0,    80,    81,    82,    83,
       0,    77,     0,    10,     2,    11,    78,    79,     0,    12,
      80,    81,    82,    83,     0,    77,     0,    10,     2,    11,
      78,    79,     0,    12,    80,    81,    82,    83,     0,    77,
       0,    10,     2,    11,    78,    79,     0,    12,    80,    81,
      82,    83,     0,   270,     0,    10,     0,    11,     0,     0,
       0,    12,     0,     0,     0,     0,     0,   337,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   289,     0,
     290,   355,     0,     0,     0,     0,     0,     0,     0,     0,
     229,     0,    77,     0,   147,     2,     0,    78,    79,     0,
       0,    80,    81,    82,    83,     0,   306,     0,    10,     0,
      11,     0,    77,     0,    12,     2,     0,    78,    79,     0,
       0,    80,    81,    82,    83,     0,     0,     0,    10,     0,
      11,     0,     0,     0,    12,     0,     0,   323,     0,     0,
       0,     0,     0,   346,     0,     0,     0,   347,     0,   109,
     110,   111,   112,   342,   343,   344,   345,   160,   161,   331,
     332,     0,   333,   334,     0,   113,   114,   326,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   109,
     110,   111,   112,     0,     0,     0,     0,     0,     0,   181,
     106,     0,   107,     0,     0,   113,   114,     0,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,     0,
     219,   109,   110,   111,   112,   117,   118,   119,   120,   121,
     122,   123,   124,   125,     0,     0,     0,   113,   114,   258,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   109,   110,   111,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   113,   114,     0,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   109,   110,   114,   112,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,     0,   113,   114,     0,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,    77,     0,     0,     2,     0,    78,    79,     0,     0,
      80,    81,    82,    83,     0,     0,     0,    10,     0,    11,
       0,   113,   114,    12,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125
};

static const yytype_int16 yycheck[] =
{
       1,     2,     1,     1,    31,    43,    43,     1,    80,   146,
       0,    83,   137,    39,    12,     5,    12,     6,    19,     6,
       9,    25,     9,     6,    12,    26,     9,    32,    33,     8,
      31,     0,    31,    31,    35,     8,    13,    31,    28,    58,
      66,    13,    43,     4,     8,    43,    25,    66,    27,    22,
      51,    24,    90,    90,    59,     6,    46,    61,     9,     3,
      61,    25,    67,    27,    57,    61,    10,    68,    69,    68,
      68,     8,   272,    61,    68,    62,    77,    66,    77,    77,
      57,    64,   108,    77,    63,    57,    28,    60,    25,    90,
      27,    52,    90,    94,    42,    96,    94,    61,   298,    63,
     126,    57,   128,   315,    58,    61,   107,    97,   146,   147,
     147,   311,    22,     8,    24,    22,     6,    24,     8,     9,
     320,    28,    12,    22,   336,    24,    63,    22,     6,    24,
     131,     9,    22,   131,    24,    32,    33,    27,    28,     8,
       8,    22,   267,    24,    42,   146,   147,    57,   146,   147,
      57,     8,     4,    22,    22,   145,    24,    25,    57,    27,
      28,   162,    59,   235,    60,    22,    56,    57,    65,    22,
      67,    61,    22,    63,    24,    65,   177,    59,    28,    59,
      57,    49,   183,    65,    61,    58,   224,   224,    56,    62,
      60,     8,    58,    32,    33,    63,    62,    65,   335,     8,
      58,    65,    58,    67,    62,    22,    62,    24,   209,   236,
      27,    28,    19,    22,    21,    24,    25,    58,    27,    28,
      66,    62,    58,   224,   296,    65,   224,    61,    34,    35,
      65,    37,    38,   280,   281,   236,    42,   236,   236,    56,
      49,   313,   236,    57,    62,    57,    63,    56,    65,    62,
      53,    61,     6,     8,    63,     9,    65,    11,    12,    63,
       6,    15,    16,    17,    18,    61,    15,    57,    22,    57,
      24,    63,    63,    66,    28,    33,    61,    57,   316,   317,
      62,    57,    34,    35,    19,    37,    38,   288,   326,   326,
      42,    50,    51,    52,    53,    54,    55,   335,    56,    57,
      42,    59,    52,    53,    54,    55,    57,     8,    62,   347,
     347,    58,    44,    57,   315,   316,   317,    62,   316,   317,
      78,    57,    63,    63,    57,   326,    44,    61,   326,    66,
      20,    62,    62,    57,   335,   336,    57,   335,    48,    49,
      50,    51,    52,    53,    54,    55,   347,    62,   106,   347,
       0,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,     6,    28,
      97,     9,   129,    11,    12,   146,   317,    15,    16,    17,
      18,   282,   329,   145,    22,   133,    24,   145,    94,   222,
      28,    -1,   179,    -1,    -1,    -1,    -1,   155,   156,   157,
     158,   159,    -1,    -1,    -1,   163,   164,   165,   166,   167,
      49,    50,    51,    52,    53,    54,    55,     6,    -1,    -1,
       9,   179,    11,    12,    62,    -1,    15,    16,    17,    18,
      -1,     6,    -1,    22,     9,    24,    11,    12,    -1,    28,
      15,    16,    17,    18,    -1,     6,    -1,    22,     9,    24,
      11,    12,    -1,    28,    15,    16,    17,    18,    -1,     6,
      -1,    22,     9,    24,    11,    12,    -1,    28,    15,    16,
      17,    18,    -1,    62,    -1,    22,    -1,    24,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    62,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,   256,    -1,
     258,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    -1,     6,    -1,    61,     9,    -1,    11,    12,    -1,
      -1,    15,    16,    17,    18,    -1,   284,    -1,    22,    -1,
      24,    -1,     6,    -1,    28,     9,    -1,    11,    12,    -1,
      -1,    15,    16,    17,    18,    -1,    -1,    -1,    22,    -1,
      24,    -1,    -1,    -1,    28,    -1,    -1,   315,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    -1,    61,    -1,    26,
      27,    28,    29,   331,   332,   333,   334,    32,    33,    34,
      35,    -1,    37,    38,    -1,    42,    43,    61,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      65,    -1,    67,    -1,    -1,    42,    43,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      57,    26,    27,    28,    29,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    26,    27,    43,    29,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    42,    43,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     6,    -1,    -1,     9,    -1,    11,    12,    -1,    -1,
      15,    16,    17,    18,    -1,    -1,    -1,    22,    -1,    24,
      -1,    42,    43,    28,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     9,    64,    69,    70,    72,    89,    92,    93,
      22,    24,    28,    73,    74,    75,    76,    77,    79,    80,
      81,    82,    83,    95,    79,     3,    10,     0,    70,    71,
      80,    58,    57,    42,    78,    59,    65,    84,    97,    79,
      42,    85,    57,    61,    96,    57,    61,    90,     4,    52,
      94,    79,    71,    74,    79,     8,    27,    56,    63,    65,
      79,    80,   107,   126,   127,     8,    60,    79,     6,     9,
      66,    98,    99,    84,    25,    61,    86,     6,    11,    12,
      15,    16,    17,    18,    62,    72,    77,    79,    83,   100,
     101,   102,   107,   129,   130,   132,    62,    72,    91,     4,
       8,    79,   126,   126,    22,   126,    65,    67,    79,    26,
      27,    28,    29,    42,    43,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    60,    84,    60,    77,
      83,    79,    66,    58,     8,    25,    27,    61,    63,    87,
      88,   124,   126,    65,   118,   119,   119,    61,   104,   105,
      65,   108,   113,   119,    57,    34,    35,    37,    38,    42,
      32,    33,    67,    34,    35,    37,    38,    42,    62,   100,
      57,    57,    79,   129,    57,    79,    91,    62,    53,    61,
      63,    66,    25,    49,   126,   128,    79,    84,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,    84,    84,    78,    79,    80,
      98,     8,    87,     8,    22,    58,    62,    58,    62,    57,
     125,   126,    12,    57,    61,    72,   122,   123,   124,    57,
     101,   103,   104,    62,   100,    15,     6,   111,    61,   126,
     126,   126,   126,   126,    79,   126,   126,   126,   126,   126,
      57,    57,    57,    79,   128,    79,    58,    66,    44,    79,
      62,    63,    63,     8,    25,    27,    63,    61,    66,   118,
      62,   100,    13,    57,   120,   121,    57,    62,   119,    74,
      57,    19,   114,   115,    42,    57,    62,    25,    49,   126,
     126,     8,     8,    22,    87,    62,    12,   122,    13,    57,
      57,   125,   125,    21,   115,   117,   126,    79,    63,    63,
      62,   119,    57,    12,   122,    57,    44,    44,    62,   122,
     119,    79,   112,   126,   131,   132,    61,   100,   106,   106,
     122,    34,    35,    37,    38,    66,    58,    62,   100,    20,
     116,   116,   126,   126,   126,   126,    57,    61,   101,   109,
     110,    79,   132,    62,    57,    62,   100,    57,    62
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    68,    69,    69,    70,    70,    70,    70,    71,    71,
      72,    72,    73,    73,    74,    74,    75,    76,    77,    77,
      78,    78,    79,    79,    80,    80,    81,    82,    83,    83,
      84,    84,    84,    84,    84,    84,    85,    85,    86,    86,
      86,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    88,    88,    89,    90,    90,    90,    90,    90,    91,
      91,    92,    93,    93,    93,    93,    94,    94,    95,    96,
      96,    96,    96,    96,    97,    97,    98,    98,    99,    99,
      99,    99,   100,   100,   101,   101,   101,   101,   101,   101,
     101,   102,   102,   102,   103,   103,   103,   103,   104,   104,
     105,   105,   106,   106,   106,   107,   108,   109,   109,   109,
     109,   110,   110,   111,   112,   112,   112,   112,   112,   112,
     113,   114,   114,   115,   116,   116,   117,   117,   118,   118,
     118,   118,   118,   118,   119,   120,   120,   120,   120,   121,
     121,   121,   122,   122,   123,   123,   123,   124,   125,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   127,   127,   127,   127,   127,   127,   128,   128,   128,
     128,   128,   128,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   130,   130,   131,   131,   132,
     132
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     3,     1,     1,     2,
       3,     1,     1,     1,     1,     3,     1,     2,     2,     1,
       2,     0,     1,     1,     1,     2,     1,     2,     3,     2,
       2,     3,     3,     4,     3,     4,     2,     0,     1,     3,
       3,     1,     2,     4,     3,     3,     5,     3,     5,     1,
       3,     3,     5,     3,     1,     3,     4,     4,     5,     1,
       2,     3,     4,     4,     7,     3,     3,     1,     2,     1,
       2,     3,     3,     4,     3,     2,     1,     3,     3,     2,
       3,     4,     1,     2,     1,     2,     2,     2,     2,     1,
       2,     3,     2,     2,     1,     1,     1,     2,     3,     2,
       3,     4,     3,     2,     1,     4,     8,     1,     1,     1,
       2,     3,     2,     2,     1,     3,     3,     3,     3,     1,
       5,     1,     2,     5,     2,     0,     4,     0,     0,     2,
       2,     2,     3,     3,     3,     2,     3,     1,     2,     4,
       5,     3,     3,     2,     1,     2,     1,     2,     1,     1,
       3,     3,     3,     3,     2,     3,     5,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     3,
       1,     1,     1,     2,     3,     3,     3,     1,     1,     2,
       3,     4,     3,     3,     3,     5,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     2,     1,     3,     2,
       2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {

#line 1886 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 435 "bison.y"


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

