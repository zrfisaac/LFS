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
#line 18 "../src/preproc/eqn/eqn.ypp"

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "lib.h"
#include "box.h"
extern int non_empty_flag;
int yylex();
void yyerror(const char *);

#line 87 "src/preproc/eqn/eqn.cpp"

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
#ifndef YY_YY_SRC_PREPROC_EQN_EQN_HPP_INCLUDED
# define YY_YY_SRC_PREPROC_EQN_EQN_HPP_INCLUDED
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
    OVER = 258,                    /* OVER  */
    SMALLOVER = 259,               /* SMALLOVER  */
    SQRT = 260,                    /* SQRT  */
    SUB = 261,                     /* SUB  */
    SUP = 262,                     /* SUP  */
    LPILE = 263,                   /* LPILE  */
    RPILE = 264,                   /* RPILE  */
    CPILE = 265,                   /* CPILE  */
    PILE = 266,                    /* PILE  */
    LEFT = 267,                    /* LEFT  */
    RIGHT = 268,                   /* RIGHT  */
    TO = 269,                      /* TO  */
    FROM = 270,                    /* FROM  */
    SIZE = 271,                    /* SIZE  */
    FONT = 272,                    /* FONT  */
    ROMAN = 273,                   /* ROMAN  */
    BOLD = 274,                    /* BOLD  */
    ITALIC = 275,                  /* ITALIC  */
    FAT = 276,                     /* FAT  */
    ACCENT = 277,                  /* ACCENT  */
    BAR = 278,                     /* BAR  */
    UNDER = 279,                   /* UNDER  */
    ABOVE = 280,                   /* ABOVE  */
    TEXT = 281,                    /* TEXT  */
    QUOTED_TEXT = 282,             /* QUOTED_TEXT  */
    FWD = 283,                     /* FWD  */
    BACK = 284,                    /* BACK  */
    DOWN = 285,                    /* DOWN  */
    UP = 286,                      /* UP  */
    MATRIX = 287,                  /* MATRIX  */
    COL = 288,                     /* COL  */
    LCOL = 289,                    /* LCOL  */
    RCOL = 290,                    /* RCOL  */
    CCOL = 291,                    /* CCOL  */
    MARK = 292,                    /* MARK  */
    LINEUP = 293,                  /* LINEUP  */
    TYPE = 294,                    /* TYPE  */
    VCENTER = 295,                 /* VCENTER  */
    PRIME = 296,                   /* PRIME  */
    SPLIT = 297,                   /* SPLIT  */
    NOSPLIT = 298,                 /* NOSPLIT  */
    UACCENT = 299,                 /* UACCENT  */
    SPECIAL = 300,                 /* SPECIAL  */
    SPACE = 301,                   /* SPACE  */
    GFONT = 302,                   /* GFONT  */
    GSIZE = 303,                   /* GSIZE  */
    DEFINE = 304,                  /* DEFINE  */
    NDEFINE = 305,                 /* NDEFINE  */
    TDEFINE = 306,                 /* TDEFINE  */
    SDEFINE = 307,                 /* SDEFINE  */
    UNDEF = 308,                   /* UNDEF  */
    IFDEF = 309,                   /* IFDEF  */
    INCLUDE = 310,                 /* INCLUDE  */
    DELIM = 311,                   /* DELIM  */
    CHARTYPE = 312,                /* CHARTYPE  */
    SET = 313,                     /* SET  */
    GRFONT = 314,                  /* GRFONT  */
    GBFONT = 315                   /* GBFONT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define OVER 258
#define SMALLOVER 259
#define SQRT 260
#define SUB 261
#define SUP 262
#define LPILE 263
#define RPILE 264
#define CPILE 265
#define PILE 266
#define LEFT 267
#define RIGHT 268
#define TO 269
#define FROM 270
#define SIZE 271
#define FONT 272
#define ROMAN 273
#define BOLD 274
#define ITALIC 275
#define FAT 276
#define ACCENT 277
#define BAR 278
#define UNDER 279
#define ABOVE 280
#define TEXT 281
#define QUOTED_TEXT 282
#define FWD 283
#define BACK 284
#define DOWN 285
#define UP 286
#define MATRIX 287
#define COL 288
#define LCOL 289
#define RCOL 290
#define CCOL 291
#define MARK 292
#define LINEUP 293
#define TYPE 294
#define VCENTER 295
#define PRIME 296
#define SPLIT 297
#define NOSPLIT 298
#define UACCENT 299
#define SPECIAL 300
#define SPACE 301
#define GFONT 302
#define GSIZE 303
#define DEFINE 304
#define NDEFINE 305
#define TDEFINE 306
#define SDEFINE 307
#define UNDEF 308
#define IFDEF 309
#define INCLUDE 310
#define DELIM 311
#define CHARTYPE 312
#define SET 313
#define GRFONT 314
#define GBFONT 315

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 34 "../src/preproc/eqn/eqn.ypp"

	char *str;
	box *b;
	pile_box *pb;
	matrix_box *mb;
	int n;
	column *col;

#line 269 "src/preproc/eqn/eqn.cpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SRC_PREPROC_EQN_EQN_HPP_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_OVER = 3,                       /* OVER  */
  YYSYMBOL_SMALLOVER = 4,                  /* SMALLOVER  */
  YYSYMBOL_SQRT = 5,                       /* SQRT  */
  YYSYMBOL_SUB = 6,                        /* SUB  */
  YYSYMBOL_SUP = 7,                        /* SUP  */
  YYSYMBOL_LPILE = 8,                      /* LPILE  */
  YYSYMBOL_RPILE = 9,                      /* RPILE  */
  YYSYMBOL_CPILE = 10,                     /* CPILE  */
  YYSYMBOL_PILE = 11,                      /* PILE  */
  YYSYMBOL_LEFT = 12,                      /* LEFT  */
  YYSYMBOL_RIGHT = 13,                     /* RIGHT  */
  YYSYMBOL_TO = 14,                        /* TO  */
  YYSYMBOL_FROM = 15,                      /* FROM  */
  YYSYMBOL_SIZE = 16,                      /* SIZE  */
  YYSYMBOL_FONT = 17,                      /* FONT  */
  YYSYMBOL_ROMAN = 18,                     /* ROMAN  */
  YYSYMBOL_BOLD = 19,                      /* BOLD  */
  YYSYMBOL_ITALIC = 20,                    /* ITALIC  */
  YYSYMBOL_FAT = 21,                       /* FAT  */
  YYSYMBOL_ACCENT = 22,                    /* ACCENT  */
  YYSYMBOL_BAR = 23,                       /* BAR  */
  YYSYMBOL_UNDER = 24,                     /* UNDER  */
  YYSYMBOL_ABOVE = 25,                     /* ABOVE  */
  YYSYMBOL_TEXT = 26,                      /* TEXT  */
  YYSYMBOL_QUOTED_TEXT = 27,               /* QUOTED_TEXT  */
  YYSYMBOL_FWD = 28,                       /* FWD  */
  YYSYMBOL_BACK = 29,                      /* BACK  */
  YYSYMBOL_DOWN = 30,                      /* DOWN  */
  YYSYMBOL_UP = 31,                        /* UP  */
  YYSYMBOL_MATRIX = 32,                    /* MATRIX  */
  YYSYMBOL_COL = 33,                       /* COL  */
  YYSYMBOL_LCOL = 34,                      /* LCOL  */
  YYSYMBOL_RCOL = 35,                      /* RCOL  */
  YYSYMBOL_CCOL = 36,                      /* CCOL  */
  YYSYMBOL_MARK = 37,                      /* MARK  */
  YYSYMBOL_LINEUP = 38,                    /* LINEUP  */
  YYSYMBOL_TYPE = 39,                      /* TYPE  */
  YYSYMBOL_VCENTER = 40,                   /* VCENTER  */
  YYSYMBOL_PRIME = 41,                     /* PRIME  */
  YYSYMBOL_SPLIT = 42,                     /* SPLIT  */
  YYSYMBOL_NOSPLIT = 43,                   /* NOSPLIT  */
  YYSYMBOL_UACCENT = 44,                   /* UACCENT  */
  YYSYMBOL_SPECIAL = 45,                   /* SPECIAL  */
  YYSYMBOL_SPACE = 46,                     /* SPACE  */
  YYSYMBOL_GFONT = 47,                     /* GFONT  */
  YYSYMBOL_GSIZE = 48,                     /* GSIZE  */
  YYSYMBOL_DEFINE = 49,                    /* DEFINE  */
  YYSYMBOL_NDEFINE = 50,                   /* NDEFINE  */
  YYSYMBOL_TDEFINE = 51,                   /* TDEFINE  */
  YYSYMBOL_SDEFINE = 52,                   /* SDEFINE  */
  YYSYMBOL_UNDEF = 53,                     /* UNDEF  */
  YYSYMBOL_IFDEF = 54,                     /* IFDEF  */
  YYSYMBOL_INCLUDE = 55,                   /* INCLUDE  */
  YYSYMBOL_DELIM = 56,                     /* DELIM  */
  YYSYMBOL_CHARTYPE = 57,                  /* CHARTYPE  */
  YYSYMBOL_SET = 58,                       /* SET  */
  YYSYMBOL_GRFONT = 59,                    /* GRFONT  */
  YYSYMBOL_GBFONT = 60,                    /* GBFONT  */
  YYSYMBOL_61_ = 61,                       /* '^'  */
  YYSYMBOL_62_ = 62,                       /* '~'  */
  YYSYMBOL_63_t_ = 63,                     /* '\t'  */
  YYSYMBOL_64_ = 64,                       /* '{'  */
  YYSYMBOL_65_ = 65,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 66,                  /* $accept  */
  YYSYMBOL_top = 67,                       /* top  */
  YYSYMBOL_equation = 68,                  /* equation  */
  YYSYMBOL_mark = 69,                      /* mark  */
  YYSYMBOL_from_to = 70,                   /* from_to  */
  YYSYMBOL_sqrt_over = 71,                 /* sqrt_over  */
  YYSYMBOL_script = 72,                    /* script  */
  YYSYMBOL_nonsup = 73,                    /* nonsup  */
  YYSYMBOL_simple = 74,                    /* simple  */
  YYSYMBOL_number = 75,                    /* number  */
  YYSYMBOL_pile_element_list = 76,         /* pile_element_list  */
  YYSYMBOL_pile_arg = 77,                  /* pile_arg  */
  YYSYMBOL_column_list = 78,               /* column_list  */
  YYSYMBOL_column_element_list = 79,       /* column_element_list  */
  YYSYMBOL_column_arg = 80,                /* column_arg  */
  YYSYMBOL_column = 81,                    /* column  */
  YYSYMBOL_text = 82,                      /* text  */
  YYSYMBOL_delim = 83                      /* delim  */
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
typedef yytype_uint8 yy_state_t;

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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  72
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   379

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  75
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  142

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   315


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
       0,     2,     2,     2,     2,     2,     2,     2,     2,    63,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    61,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    64,     2,    65,    62,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   125,   125,   127,   132,   134,   145,   147,   149,   154,
     156,   158,   160,   162,   167,   169,   171,   173,   178,   180,
     185,   187,   189,   194,   196,   198,   200,   202,   204,   206,
     208,   210,   212,   214,   216,   218,   220,   222,   224,   226,
     228,   230,   232,   234,   236,   238,   240,   242,   244,   246,
     248,   250,   252,   254,   256,   258,   263,   273,   275,   280,
     282,   287,   289,   294,   296,   301,   303,   308,   310,   312,
     314,   318,   320,   325,   327,   329
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "OVER", "SMALLOVER",
  "SQRT", "SUB", "SUP", "LPILE", "RPILE", "CPILE", "PILE", "LEFT", "RIGHT",
  "TO", "FROM", "SIZE", "FONT", "ROMAN", "BOLD", "ITALIC", "FAT", "ACCENT",
  "BAR", "UNDER", "ABOVE", "TEXT", "QUOTED_TEXT", "FWD", "BACK", "DOWN",
  "UP", "MATRIX", "COL", "LCOL", "RCOL", "CCOL", "MARK", "LINEUP", "TYPE",
  "VCENTER", "PRIME", "SPLIT", "NOSPLIT", "UACCENT", "SPECIAL", "SPACE",
  "GFONT", "GSIZE", "DEFINE", "NDEFINE", "TDEFINE", "SDEFINE", "UNDEF",
  "IFDEF", "INCLUDE", "DELIM", "CHARTYPE", "SET", "GRFONT", "GBFONT",
  "'^'", "'~'", "'\\t'", "'{'", "'}'", "$accept", "top", "equation",
  "mark", "from_to", "sqrt_over", "script", "nonsup", "simple", "number",
  "pile_element_list", "pile_arg", "column_list", "column_element_list",
  "column_arg", "column", "text", "delim", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-76)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     230,   269,     6,     6,     6,     6,     2,    14,    14,   308,
     308,   308,   308,   -76,   -76,    14,    14,    14,    14,   -50,
     230,   230,    14,   308,     4,    23,    14,   -76,   -76,   -76,
     230,    24,   230,   -76,   -76,    70,   -76,   -76,    20,   -76,
     -76,   -76,   230,   -44,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   230,   308,   308,    57,    57,    57,    57,   308,
     308,   308,   308,     3,   -76,   -76,   308,    57,   -76,   -76,
     308,   130,   -76,   -76,   269,   269,   269,   269,   308,   308,
     308,   -76,   -76,   -76,   308,   230,   -12,   230,   191,    57,
      57,    57,    57,    57,    57,     8,     8,     8,     8,    12,
     -76,    57,    57,   -76,   -76,   -76,   -76,    79,   -76,   335,
     -76,   -76,   -76,   230,   -76,    -6,     2,   230,    28,   -76,
     -76,   -76,   -76,   -76,   -76,   269,   269,   308,   230,   -76,
     -76,   230,    -3,   230,   -76,   -76,   -76,   230,   -76,    -2,
     230,   -76
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    23,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,    28,    29,
       0,     0,     3,     4,     6,     9,    14,    18,    20,    15,
      71,    72,     0,     0,    32,    56,    33,    34,    31,    74,
      75,    73,     0,     0,     0,    43,    44,    45,    46,     0,
       0,     0,     0,     0,     7,     8,     0,    54,    25,    26,
       0,     0,     1,     5,     0,     0,     0,     0,     0,     0,
       0,    38,    39,    40,     0,    57,     0,     0,    37,    48,
      47,    49,    50,    52,    51,     0,     0,     0,     0,     0,
      61,    53,    55,    30,    16,    17,    10,    11,    21,    20,
      19,    41,    42,     0,    59,     0,     0,     0,     0,    67,
      68,    69,    70,    35,    62,     0,     0,     0,    58,    60,
      36,    63,     0,     0,    12,    13,    22,     0,    65,     0,
      64,    66
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -76,   -76,     0,   -17,   -75,     1,   -67,   -13,    46,    -7,
       9,    13,   -76,   -47,    22,    -4,    -1,   -29
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    31,    85,    33,    34,    35,    36,    37,    38,    43,
      86,    44,    99,   132,   119,   100,    45,    52
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      32,   106,    39,    64,    65,    51,    53,    54,    59,    60,
      61,    62,   110,   113,    63,    73,    46,    47,    48,   113,
      87,    66,   137,   137,    72,    70,    78,    79,    40,    41,
      71,    68,    40,    41,    40,    41,    95,    96,    97,    98,
      40,    41,    80,    81,    82,    95,    96,    97,    98,    69,
     134,   135,    88,   114,    73,    55,    56,    57,    58,   129,
     136,    83,   138,   141,    84,   108,    49,    50,    73,    67,
      42,    73,   117,    74,    75,   104,   105,   123,   107,    80,
      81,    82,    74,    75,    76,    77,   139,   130,   118,   118,
     118,   118,   133,   125,   126,   124,   115,     0,    83,    89,
      90,    84,     0,     0,     0,    91,    92,    93,    94,     0,
       0,    73,   101,   128,    73,    51,   102,   131,   120,   121,
     122,     0,     0,    73,   109,     0,   111,     0,     0,     0,
     112,     0,     0,   131,     0,     1,     0,   140,     2,     3,
       4,     5,     6,     0,     0,     0,     7,     8,     9,    10,
      11,    12,     0,     0,     0,     0,    13,    14,    15,    16,
      17,    18,    19,     0,     0,     0,     0,    20,    21,    22,
      23,     0,    24,    25,     0,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,    28,    29,    30,   103,     1,     0,     0,     2,
       3,     4,     5,     6,   116,     0,     0,     7,     8,     9,
      10,    11,    12,     0,     0,     0,     0,    13,    14,    15,
      16,    17,    18,    19,     0,     0,     0,     0,    20,    21,
      22,    23,     0,    24,    25,     1,    26,     0,     2,     3,
       4,     5,     6,     0,     0,     0,     7,     8,     9,    10,
      11,    12,    27,    28,    29,    30,    13,    14,    15,    16,
      17,    18,    19,     0,     0,     0,     0,    20,    21,    22,
      23,     0,    24,    25,     1,    26,     0,     2,     3,     4,
       5,     6,     0,     0,     0,     7,     8,     9,    10,    11,
      12,    27,    28,    29,    30,    13,    14,    15,    16,    17,
      18,    19,     0,     0,     0,     0,     0,     0,    22,    23,
       0,    24,    25,     0,    26,     0,     2,     3,     4,     5,
       6,     0,     0,     0,     7,     8,     9,    10,    11,    12,
      27,    28,    29,    30,    13,    14,    15,    16,    17,    18,
      19,    78,   127,     0,     0,     0,     0,    22,    23,     0,
      24,    25,     0,    26,     0,     0,     0,    80,    81,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
      28,    29,    30,     0,     0,     0,    83,     0,     0,    84
};

static const yytype_int16 yycheck[] =
{
       0,    76,     1,    20,    21,     6,     7,     8,    15,    16,
      17,    18,    79,    25,    64,    32,     3,     4,     5,    25,
      64,    22,    25,    25,     0,    26,     6,     7,    26,    27,
      30,    27,    26,    27,    26,    27,    33,    34,    35,    36,
      26,    27,    22,    23,    24,    33,    34,    35,    36,    26,
     125,   126,    52,    65,    71,     9,    10,    11,    12,    65,
     127,    41,    65,    65,    44,    78,    64,    65,    85,    23,
      64,    88,    64,     3,     4,    74,    75,    65,    77,    22,
      23,    24,     3,     4,    14,    15,   133,   116,    95,    96,
      97,    98,    64,    14,    15,    99,    87,    -1,    41,    53,
      54,    44,    -1,    -1,    -1,    59,    60,    61,    62,    -1,
      -1,   128,    66,   113,   131,   116,    70,   117,    96,    97,
      98,    -1,    -1,   140,    78,    -1,    80,    -1,    -1,    -1,
      84,    -1,    -1,   133,    -1,     5,    -1,   137,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    37,    38,    39,
      40,    -1,    42,    43,    -1,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    63,    64,    65,     5,    -1,    -1,     8,
       9,    10,    11,    12,    13,    -1,    -1,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    37,    38,
      39,    40,    -1,    42,    43,     5,    45,    -1,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    16,    17,    18,    19,
      20,    21,    61,    62,    63,    64,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    37,    38,    39,
      40,    -1,    42,    43,     5,    45,    -1,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    16,    17,    18,    19,    20,
      21,    61,    62,    63,    64,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      -1,    42,    43,    -1,    45,    -1,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    16,    17,    18,    19,    20,    21,
      61,    62,    63,    64,    26,    27,    28,    29,    30,    31,
      32,     6,     7,    -1,    -1,    -1,    -1,    39,    40,    -1,
      42,    43,    -1,    45,    -1,    -1,    -1,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    -1,    -1,    -1,    41,    -1,    -1,    44
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,     8,     9,    10,    11,    12,    16,    17,    18,
      19,    20,    21,    26,    27,    28,    29,    30,    31,    32,
      37,    38,    39,    40,    42,    43,    45,    61,    62,    63,
      64,    67,    68,    69,    70,    71,    72,    73,    74,    71,
      26,    27,    64,    75,    77,    82,    77,    77,    77,    64,
      65,    82,    83,    82,    82,    74,    74,    74,    74,    75,
      75,    75,    75,    64,    69,    69,    82,    74,    27,    26,
      82,    68,     0,    69,     3,     4,    14,    15,     6,     7,
      22,    23,    24,    41,    44,    68,    76,    64,    68,    74,
      74,    74,    74,    74,    74,    33,    34,    35,    36,    78,
      81,    74,    74,    65,    71,    71,    70,    71,    73,    74,
      72,    74,    74,    25,    65,    76,    13,    64,    75,    80,
      80,    80,    80,    65,    81,    14,    15,     7,    68,    65,
      83,    68,    79,    64,    70,    70,    72,    25,    65,    79,
      68,    65
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    66,    67,    67,    68,    68,    69,    69,    69,    70,
      70,    70,    70,    70,    71,    71,    71,    71,    72,    72,
      73,    73,    73,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    75,    76,    76,    77,
      77,    78,    78,    79,    79,    80,    80,    81,    81,    81,
      81,    82,    82,    83,    83,    83
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     1,     2,     1,     2,     2,     1,
       3,     3,     5,     5,     1,     2,     3,     3,     1,     3,
       1,     3,     5,     1,     1,     2,     2,     1,     1,     1,
       3,     2,     2,     2,     2,     4,     5,     3,     2,     2,
       2,     3,     3,     2,     2,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     2,     3,     1,     1,     3,     3,
       4,     1,     2,     1,     3,     3,     4,     2,     2,     2,
       2,     1,     1,     1,     1,     1
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
  case 3: /* top: equation  */
#line 128 "../src/preproc/eqn/eqn.ypp"
                { (yyvsp[0].b)->top_level(); non_empty_flag = 1; }
#line 1472 "src/preproc/eqn/eqn.cpp"
    break;

  case 4: /* equation: mark  */
#line 133 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = (yyvsp[0].b); }
#line 1478 "src/preproc/eqn/eqn.cpp"
    break;

  case 5: /* equation: equation mark  */
#line 135 "../src/preproc/eqn/eqn.ypp"
                {
		  list_box *lb = (yyvsp[-1].b)->to_list_box();
		  if (!lb)
		    lb = new list_box((yyvsp[-1].b));
		  lb->append((yyvsp[0].b));
		  (yyval.b) = lb;
		}
#line 1490 "src/preproc/eqn/eqn.cpp"
    break;

  case 6: /* mark: from_to  */
#line 146 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = (yyvsp[0].b); }
#line 1496 "src/preproc/eqn/eqn.cpp"
    break;

  case 7: /* mark: MARK mark  */
#line 148 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = make_mark_box((yyvsp[0].b)); }
#line 1502 "src/preproc/eqn/eqn.cpp"
    break;

  case 8: /* mark: LINEUP mark  */
#line 150 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = make_lineup_box((yyvsp[0].b)); }
#line 1508 "src/preproc/eqn/eqn.cpp"
    break;

  case 9: /* from_to: sqrt_over  */
#line 155 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = (yyvsp[0].b); }
#line 1514 "src/preproc/eqn/eqn.cpp"
    break;

  case 10: /* from_to: sqrt_over TO from_to  */
#line 157 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = make_limit_box((yyvsp[-2].b), 0, (yyvsp[0].b)); }
#line 1520 "src/preproc/eqn/eqn.cpp"
    break;

  case 11: /* from_to: sqrt_over FROM sqrt_over  */
#line 159 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = make_limit_box((yyvsp[-2].b), (yyvsp[0].b), 0); }
#line 1526 "src/preproc/eqn/eqn.cpp"
    break;

  case 12: /* from_to: sqrt_over FROM sqrt_over TO from_to  */
#line 161 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = make_limit_box((yyvsp[-4].b), (yyvsp[-2].b), (yyvsp[0].b)); }
#line 1532 "src/preproc/eqn/eqn.cpp"
    break;

  case 13: /* from_to: sqrt_over FROM sqrt_over FROM from_to  */
#line 163 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = make_limit_box((yyvsp[-4].b), make_limit_box((yyvsp[-2].b), (yyvsp[0].b), 0), 0); }
#line 1538 "src/preproc/eqn/eqn.cpp"
    break;

  case 14: /* sqrt_over: script  */
#line 168 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = (yyvsp[0].b); }
#line 1544 "src/preproc/eqn/eqn.cpp"
    break;

  case 15: /* sqrt_over: SQRT sqrt_over  */
#line 170 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = make_sqrt_box((yyvsp[0].b)); }
#line 1550 "src/preproc/eqn/eqn.cpp"
    break;

  case 16: /* sqrt_over: sqrt_over OVER sqrt_over  */
#line 172 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = make_over_box((yyvsp[-2].b), (yyvsp[0].b)); }
#line 1556 "src/preproc/eqn/eqn.cpp"
    break;

  case 17: /* sqrt_over: sqrt_over SMALLOVER sqrt_over  */
#line 174 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = make_small_over_box((yyvsp[-2].b), (yyvsp[0].b)); }
#line 1562 "src/preproc/eqn/eqn.cpp"
    break;

  case 18: /* script: nonsup  */
#line 179 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = (yyvsp[0].b); }
#line 1568 "src/preproc/eqn/eqn.cpp"
    break;

  case 19: /* script: simple SUP script  */
#line 181 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = make_script_box((yyvsp[-2].b), 0, (yyvsp[0].b)); }
#line 1574 "src/preproc/eqn/eqn.cpp"
    break;

  case 20: /* nonsup: simple  */
#line 186 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = (yyvsp[0].b); }
#line 1580 "src/preproc/eqn/eqn.cpp"
    break;

  case 21: /* nonsup: simple SUB nonsup  */
#line 188 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = make_script_box((yyvsp[-2].b), (yyvsp[0].b), 0); }
#line 1586 "src/preproc/eqn/eqn.cpp"
    break;

  case 22: /* nonsup: simple SUB simple SUP script  */
#line 190 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = make_script_box((yyvsp[-4].b), (yyvsp[-2].b), (yyvsp[0].b)); }
#line 1592 "src/preproc/eqn/eqn.cpp"
    break;

  case 23: /* simple: TEXT  */
#line 195 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = split_text((yyvsp[0].str)); }
#line 1598 "src/preproc/eqn/eqn.cpp"
    break;

  case 24: /* simple: QUOTED_TEXT  */
#line 197 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = new quoted_text_box((yyvsp[0].str)); }
#line 1604 "src/preproc/eqn/eqn.cpp"
    break;

  case 25: /* simple: SPLIT QUOTED_TEXT  */
#line 199 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = split_text((yyvsp[0].str)); }
#line 1610 "src/preproc/eqn/eqn.cpp"
    break;

  case 26: /* simple: NOSPLIT TEXT  */
#line 201 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = new quoted_text_box((yyvsp[0].str)); }
#line 1616 "src/preproc/eqn/eqn.cpp"
    break;

  case 27: /* simple: '^'  */
#line 203 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = new half_space_box; }
#line 1622 "src/preproc/eqn/eqn.cpp"
    break;

  case 28: /* simple: '~'  */
#line 205 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = new space_box; }
#line 1628 "src/preproc/eqn/eqn.cpp"
    break;

  case 29: /* simple: '\t'  */
#line 207 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = new tab_box; }
#line 1634 "src/preproc/eqn/eqn.cpp"
    break;

  case 30: /* simple: '{' equation '}'  */
#line 209 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = (yyvsp[-1].b); }
#line 1640 "src/preproc/eqn/eqn.cpp"
    break;

  case 31: /* simple: PILE pile_arg  */
#line 211 "../src/preproc/eqn/eqn.ypp"
                { (yyvsp[0].pb)->set_alignment(CENTER_ALIGN); (yyval.b) = (yyvsp[0].pb); }
#line 1646 "src/preproc/eqn/eqn.cpp"
    break;

  case 32: /* simple: LPILE pile_arg  */
#line 213 "../src/preproc/eqn/eqn.ypp"
                { (yyvsp[0].pb)->set_alignment(LEFT_ALIGN); (yyval.b) = (yyvsp[0].pb); }
#line 1652 "src/preproc/eqn/eqn.cpp"
    break;

  case 33: /* simple: RPILE pile_arg  */
#line 215 "../src/preproc/eqn/eqn.ypp"
                { (yyvsp[0].pb)->set_alignment(RIGHT_ALIGN); (yyval.b) = (yyvsp[0].pb); }
#line 1658 "src/preproc/eqn/eqn.cpp"
    break;

  case 34: /* simple: CPILE pile_arg  */
#line 217 "../src/preproc/eqn/eqn.ypp"
                { (yyvsp[0].pb)->set_alignment(CENTER_ALIGN); (yyval.b) = (yyvsp[0].pb); }
#line 1664 "src/preproc/eqn/eqn.cpp"
    break;

  case 35: /* simple: MATRIX '{' column_list '}'  */
#line 219 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = (yyvsp[-1].mb); }
#line 1670 "src/preproc/eqn/eqn.cpp"
    break;

  case 36: /* simple: LEFT delim equation RIGHT delim  */
#line 221 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = make_delim_box((yyvsp[-3].str), (yyvsp[-2].b), (yyvsp[0].str)); }
#line 1676 "src/preproc/eqn/eqn.cpp"
    break;

  case 37: /* simple: LEFT delim equation  */
#line 223 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = make_delim_box((yyvsp[-1].str), (yyvsp[0].b), 0); }
#line 1682 "src/preproc/eqn/eqn.cpp"
    break;

  case 38: /* simple: simple BAR  */
#line 225 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = make_overline_box((yyvsp[-1].b)); }
#line 1688 "src/preproc/eqn/eqn.cpp"
    break;

  case 39: /* simple: simple UNDER  */
#line 227 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = make_underline_box((yyvsp[-1].b)); }
#line 1694 "src/preproc/eqn/eqn.cpp"
    break;

  case 40: /* simple: simple PRIME  */
#line 229 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = make_prime_box((yyvsp[-1].b)); }
#line 1700 "src/preproc/eqn/eqn.cpp"
    break;

  case 41: /* simple: simple ACCENT simple  */
#line 231 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = make_accent_box((yyvsp[-2].b), (yyvsp[0].b)); }
#line 1706 "src/preproc/eqn/eqn.cpp"
    break;

  case 42: /* simple: simple UACCENT simple  */
#line 233 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = make_uaccent_box((yyvsp[-2].b), (yyvsp[0].b)); }
#line 1712 "src/preproc/eqn/eqn.cpp"
    break;

  case 43: /* simple: ROMAN simple  */
#line 235 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = new font_box(strsave(get_grfont()), (yyvsp[0].b)); }
#line 1718 "src/preproc/eqn/eqn.cpp"
    break;

  case 44: /* simple: BOLD simple  */
#line 237 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = new font_box(strsave(get_gbfont()), (yyvsp[0].b)); }
#line 1724 "src/preproc/eqn/eqn.cpp"
    break;

  case 45: /* simple: ITALIC simple  */
#line 239 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = new font_box(strsave(get_gfont()), (yyvsp[0].b)); }
#line 1730 "src/preproc/eqn/eqn.cpp"
    break;

  case 46: /* simple: FAT simple  */
#line 241 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = new fat_box((yyvsp[0].b)); }
#line 1736 "src/preproc/eqn/eqn.cpp"
    break;

  case 47: /* simple: FONT text simple  */
#line 243 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = new font_box((yyvsp[-1].str), (yyvsp[0].b)); }
#line 1742 "src/preproc/eqn/eqn.cpp"
    break;

  case 48: /* simple: SIZE text simple  */
#line 245 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = new size_box((yyvsp[-1].str), (yyvsp[0].b)); }
#line 1748 "src/preproc/eqn/eqn.cpp"
    break;

  case 49: /* simple: FWD number simple  */
#line 247 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = new hmotion_box((yyvsp[-1].n), (yyvsp[0].b)); }
#line 1754 "src/preproc/eqn/eqn.cpp"
    break;

  case 50: /* simple: BACK number simple  */
#line 249 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = new hmotion_box(-(yyvsp[-1].n), (yyvsp[0].b)); }
#line 1760 "src/preproc/eqn/eqn.cpp"
    break;

  case 51: /* simple: UP number simple  */
#line 251 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = new vmotion_box((yyvsp[-1].n), (yyvsp[0].b)); }
#line 1766 "src/preproc/eqn/eqn.cpp"
    break;

  case 52: /* simple: DOWN number simple  */
#line 253 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = new vmotion_box(-(yyvsp[-1].n), (yyvsp[0].b)); }
#line 1772 "src/preproc/eqn/eqn.cpp"
    break;

  case 53: /* simple: TYPE text simple  */
#line 255 "../src/preproc/eqn/eqn.ypp"
                { (yyvsp[0].b)->set_spacing_type((yyvsp[-1].str)); (yyval.b) = (yyvsp[0].b); }
#line 1778 "src/preproc/eqn/eqn.cpp"
    break;

  case 54: /* simple: VCENTER simple  */
#line 257 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = new vcenter_box((yyvsp[0].b)); }
#line 1784 "src/preproc/eqn/eqn.cpp"
    break;

  case 55: /* simple: SPECIAL text simple  */
#line 259 "../src/preproc/eqn/eqn.ypp"
                { (yyval.b) = make_special_box((yyvsp[-1].str), (yyvsp[0].b)); }
#line 1790 "src/preproc/eqn/eqn.cpp"
    break;

  case 56: /* number: text  */
#line 264 "../src/preproc/eqn/eqn.ypp"
                {
		  int n;
		  if (sscanf((yyvsp[0].str), "%d", &n) == 1)
		    (yyval.n) = n;
		  delete[] (yyvsp[0].str);
		}
#line 1801 "src/preproc/eqn/eqn.cpp"
    break;

  case 57: /* pile_element_list: equation  */
#line 274 "../src/preproc/eqn/eqn.ypp"
                { (yyval.pb) = new pile_box((yyvsp[0].b)); }
#line 1807 "src/preproc/eqn/eqn.cpp"
    break;

  case 58: /* pile_element_list: pile_element_list ABOVE equation  */
#line 276 "../src/preproc/eqn/eqn.ypp"
                { (yyvsp[-2].pb)->append((yyvsp[0].b)); (yyval.pb) = (yyvsp[-2].pb); }
#line 1813 "src/preproc/eqn/eqn.cpp"
    break;

  case 59: /* pile_arg: '{' pile_element_list '}'  */
#line 281 "../src/preproc/eqn/eqn.ypp"
                { (yyval.pb) = (yyvsp[-1].pb); }
#line 1819 "src/preproc/eqn/eqn.cpp"
    break;

  case 60: /* pile_arg: number '{' pile_element_list '}'  */
#line 283 "../src/preproc/eqn/eqn.ypp"
                { (yyvsp[-1].pb)->set_space((yyvsp[-3].n)); (yyval.pb) = (yyvsp[-1].pb); }
#line 1825 "src/preproc/eqn/eqn.cpp"
    break;

  case 61: /* column_list: column  */
#line 288 "../src/preproc/eqn/eqn.ypp"
                { (yyval.mb) = new matrix_box((yyvsp[0].col)); }
#line 1831 "src/preproc/eqn/eqn.cpp"
    break;

  case 62: /* column_list: column_list column  */
#line 290 "../src/preproc/eqn/eqn.ypp"
                { (yyvsp[-1].mb)->append((yyvsp[0].col)); (yyval.mb) = (yyvsp[-1].mb); }
#line 1837 "src/preproc/eqn/eqn.cpp"
    break;

  case 63: /* column_element_list: equation  */
#line 295 "../src/preproc/eqn/eqn.ypp"
                { (yyval.col) = new column((yyvsp[0].b)); }
#line 1843 "src/preproc/eqn/eqn.cpp"
    break;

  case 64: /* column_element_list: column_element_list ABOVE equation  */
#line 297 "../src/preproc/eqn/eqn.ypp"
                { (yyvsp[-2].col)->append((yyvsp[0].b)); (yyval.col) = (yyvsp[-2].col); }
#line 1849 "src/preproc/eqn/eqn.cpp"
    break;

  case 65: /* column_arg: '{' column_element_list '}'  */
#line 302 "../src/preproc/eqn/eqn.ypp"
                { (yyval.col) = (yyvsp[-1].col); }
#line 1855 "src/preproc/eqn/eqn.cpp"
    break;

  case 66: /* column_arg: number '{' column_element_list '}'  */
#line 304 "../src/preproc/eqn/eqn.ypp"
                { (yyvsp[-1].col)->set_space((yyvsp[-3].n)); (yyval.col) = (yyvsp[-1].col); }
#line 1861 "src/preproc/eqn/eqn.cpp"
    break;

  case 67: /* column: COL column_arg  */
#line 309 "../src/preproc/eqn/eqn.ypp"
                { (yyvsp[0].col)->set_alignment(CENTER_ALIGN); (yyval.col) = (yyvsp[0].col); }
#line 1867 "src/preproc/eqn/eqn.cpp"
    break;

  case 68: /* column: LCOL column_arg  */
#line 311 "../src/preproc/eqn/eqn.ypp"
                { (yyvsp[0].col)->set_alignment(LEFT_ALIGN); (yyval.col) = (yyvsp[0].col); }
#line 1873 "src/preproc/eqn/eqn.cpp"
    break;

  case 69: /* column: RCOL column_arg  */
#line 313 "../src/preproc/eqn/eqn.ypp"
                { (yyvsp[0].col)->set_alignment(RIGHT_ALIGN); (yyval.col) = (yyvsp[0].col); }
#line 1879 "src/preproc/eqn/eqn.cpp"
    break;

  case 70: /* column: CCOL column_arg  */
#line 315 "../src/preproc/eqn/eqn.ypp"
                { (yyvsp[0].col)->set_alignment(CENTER_ALIGN); (yyval.col) = (yyvsp[0].col); }
#line 1885 "src/preproc/eqn/eqn.cpp"
    break;

  case 71: /* text: TEXT  */
#line 319 "../src/preproc/eqn/eqn.ypp"
                { (yyval.str) = (yyvsp[0].str); }
#line 1891 "src/preproc/eqn/eqn.cpp"
    break;

  case 72: /* text: QUOTED_TEXT  */
#line 321 "../src/preproc/eqn/eqn.ypp"
                { (yyval.str) = (yyvsp[0].str); }
#line 1897 "src/preproc/eqn/eqn.cpp"
    break;

  case 73: /* delim: text  */
#line 326 "../src/preproc/eqn/eqn.ypp"
                { (yyval.str) = (yyvsp[0].str); }
#line 1903 "src/preproc/eqn/eqn.cpp"
    break;

  case 74: /* delim: '{'  */
#line 328 "../src/preproc/eqn/eqn.ypp"
                { (yyval.str) = strsave("{"); }
#line 1909 "src/preproc/eqn/eqn.cpp"
    break;

  case 75: /* delim: '}'  */
#line 330 "../src/preproc/eqn/eqn.ypp"
                { (yyval.str) = strsave("}"); }
#line 1915 "src/preproc/eqn/eqn.cpp"
    break;


#line 1919 "src/preproc/eqn/eqn.cpp"

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
      yyerror (YY_("syntax error"));
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

  return yyresult;
}

#line 333 "../src/preproc/eqn/eqn.ypp"

