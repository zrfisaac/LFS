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
#line 19 "../src/preproc/pic/pic.ypp"

#include "pic.h"
#include "ptable.h"
#include "object.h"

extern int delim_flag;
extern void copy_rest_thru(const char *, const char *);
extern void copy_file_thru(const char *, const char *, const char *);
extern void push_body(const char *);
extern void do_for(char *var, double from, double to,
		   int by_is_multiplicative, double by, char *body);
extern void do_lookahead();

/* Maximum number of characters produced by printf("%g") */
#define GDIGITS 14

int yylex();
void yyerror(const char *);

void reset(const char *nm);
void reset_all();

place *lookup_label(const char *);
void define_label(const char *label, const place *pl);

direction current_direction;
position current_position;

implement_ptable(place)

PTABLE(place) top_table;

PTABLE(place) *current_table = &top_table;
saved_state *current_saved_state = 0;

object_list olist;

const char *ordinal_postfix(int n);
const char *object_type_name(object_type type);
char *format_number(const char *fmt, double n);
char *do_sprintf(const char *fmt, const double *v, int nv);


#line 115 "src/preproc/pic/pic.cpp"

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
#ifndef YY_YY_SRC_PREPROC_PIC_PIC_HPP_INCLUDED
# define YY_YY_SRC_PREPROC_PIC_PIC_HPP_INCLUDED
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
    LABEL = 258,                   /* LABEL  */
    VARIABLE = 259,                /* VARIABLE  */
    NUMBER = 260,                  /* NUMBER  */
    TEXT = 261,                    /* TEXT  */
    COMMAND_LINE = 262,            /* COMMAND_LINE  */
    DELIMITED = 263,               /* DELIMITED  */
    ORDINAL = 264,                 /* ORDINAL  */
    TH = 265,                      /* TH  */
    LEFT_ARROW_HEAD = 266,         /* LEFT_ARROW_HEAD  */
    RIGHT_ARROW_HEAD = 267,        /* RIGHT_ARROW_HEAD  */
    DOUBLE_ARROW_HEAD = 268,       /* DOUBLE_ARROW_HEAD  */
    LAST = 269,                    /* LAST  */
    BOX = 270,                     /* BOX  */
    CIRCLE = 271,                  /* CIRCLE  */
    ELLIPSE = 272,                 /* ELLIPSE  */
    ARC = 273,                     /* ARC  */
    LINE = 274,                    /* LINE  */
    ARROW = 275,                   /* ARROW  */
    MOVE = 276,                    /* MOVE  */
    SPLINE = 277,                  /* SPLINE  */
    HEIGHT = 278,                  /* HEIGHT  */
    RADIUS = 279,                  /* RADIUS  */
    FIGNAME = 280,                 /* FIGNAME  */
    WIDTH = 281,                   /* WIDTH  */
    DIAMETER = 282,                /* DIAMETER  */
    UP = 283,                      /* UP  */
    DOWN = 284,                    /* DOWN  */
    RIGHT = 285,                   /* RIGHT  */
    LEFT = 286,                    /* LEFT  */
    FROM = 287,                    /* FROM  */
    TO = 288,                      /* TO  */
    AT = 289,                      /* AT  */
    WITH = 290,                    /* WITH  */
    BY = 291,                      /* BY  */
    THEN = 292,                    /* THEN  */
    SOLID = 293,                   /* SOLID  */
    DOTTED = 294,                  /* DOTTED  */
    DASHED = 295,                  /* DASHED  */
    CHOP = 296,                    /* CHOP  */
    SAME = 297,                    /* SAME  */
    INVISIBLE = 298,               /* INVISIBLE  */
    LJUST = 299,                   /* LJUST  */
    RJUST = 300,                   /* RJUST  */
    ABOVE = 301,                   /* ABOVE  */
    BELOW = 302,                   /* BELOW  */
    OF = 303,                      /* OF  */
    THE = 304,                     /* THE  */
    WAY = 305,                     /* WAY  */
    BETWEEN = 306,                 /* BETWEEN  */
    AND = 307,                     /* AND  */
    HERE = 308,                    /* HERE  */
    DOT_N = 309,                   /* DOT_N  */
    DOT_E = 310,                   /* DOT_E  */
    DOT_W = 311,                   /* DOT_W  */
    DOT_S = 312,                   /* DOT_S  */
    DOT_NE = 313,                  /* DOT_NE  */
    DOT_SE = 314,                  /* DOT_SE  */
    DOT_NW = 315,                  /* DOT_NW  */
    DOT_SW = 316,                  /* DOT_SW  */
    DOT_C = 317,                   /* DOT_C  */
    DOT_START = 318,               /* DOT_START  */
    DOT_END = 319,                 /* DOT_END  */
    DOT_X = 320,                   /* DOT_X  */
    DOT_Y = 321,                   /* DOT_Y  */
    DOT_HT = 322,                  /* DOT_HT  */
    DOT_WID = 323,                 /* DOT_WID  */
    DOT_RAD = 324,                 /* DOT_RAD  */
    SIN = 325,                     /* SIN  */
    COS = 326,                     /* COS  */
    ATAN2 = 327,                   /* ATAN2  */
    LOG = 328,                     /* LOG  */
    EXP = 329,                     /* EXP  */
    SQRT = 330,                    /* SQRT  */
    K_MAX = 331,                   /* K_MAX  */
    K_MIN = 332,                   /* K_MIN  */
    INT = 333,                     /* INT  */
    RAND = 334,                    /* RAND  */
    SRAND = 335,                   /* SRAND  */
    COPY = 336,                    /* COPY  */
    THRU = 337,                    /* THRU  */
    TOP = 338,                     /* TOP  */
    BOTTOM = 339,                  /* BOTTOM  */
    UPPER = 340,                   /* UPPER  */
    LOWER = 341,                   /* LOWER  */
    SH = 342,                      /* SH  */
    PRINT = 343,                   /* PRINT  */
    CW = 344,                      /* CW  */
    CCW = 345,                     /* CCW  */
    FOR = 346,                     /* FOR  */
    DO = 347,                      /* DO  */
    IF = 348,                      /* IF  */
    ELSE = 349,                    /* ELSE  */
    ANDAND = 350,                  /* ANDAND  */
    OROR = 351,                    /* OROR  */
    NOTEQUAL = 352,                /* NOTEQUAL  */
    EQUALEQUAL = 353,              /* EQUALEQUAL  */
    LESSEQUAL = 354,               /* LESSEQUAL  */
    GREATEREQUAL = 355,            /* GREATEREQUAL  */
    LEFT_CORNER = 356,             /* LEFT_CORNER  */
    RIGHT_CORNER = 357,            /* RIGHT_CORNER  */
    NORTH = 358,                   /* NORTH  */
    SOUTH = 359,                   /* SOUTH  */
    EAST = 360,                    /* EAST  */
    WEST = 361,                    /* WEST  */
    CENTER = 362,                  /* CENTER  */
    END = 363,                     /* END  */
    START = 364,                   /* START  */
    RESET = 365,                   /* RESET  */
    UNTIL = 366,                   /* UNTIL  */
    PLOT = 367,                    /* PLOT  */
    THICKNESS = 368,               /* THICKNESS  */
    FILL = 369,                    /* FILL  */
    COLORED = 370,                 /* COLORED  */
    OUTLINED = 371,                /* OUTLINED  */
    SHADED = 372,                  /* SHADED  */
    XSLANTED = 373,                /* XSLANTED  */
    YSLANTED = 374,                /* YSLANTED  */
    ALIGNED = 375,                 /* ALIGNED  */
    SPRINTF = 376,                 /* SPRINTF  */
    COMMAND = 377,                 /* COMMAND  */
    DEFINE = 378,                  /* DEFINE  */
    UNDEF = 379                    /* UNDEF  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define LABEL 258
#define VARIABLE 259
#define NUMBER 260
#define TEXT 261
#define COMMAND_LINE 262
#define DELIMITED 263
#define ORDINAL 264
#define TH 265
#define LEFT_ARROW_HEAD 266
#define RIGHT_ARROW_HEAD 267
#define DOUBLE_ARROW_HEAD 268
#define LAST 269
#define BOX 270
#define CIRCLE 271
#define ELLIPSE 272
#define ARC 273
#define LINE 274
#define ARROW 275
#define MOVE 276
#define SPLINE 277
#define HEIGHT 278
#define RADIUS 279
#define FIGNAME 280
#define WIDTH 281
#define DIAMETER 282
#define UP 283
#define DOWN 284
#define RIGHT 285
#define LEFT 286
#define FROM 287
#define TO 288
#define AT 289
#define WITH 290
#define BY 291
#define THEN 292
#define SOLID 293
#define DOTTED 294
#define DASHED 295
#define CHOP 296
#define SAME 297
#define INVISIBLE 298
#define LJUST 299
#define RJUST 300
#define ABOVE 301
#define BELOW 302
#define OF 303
#define THE 304
#define WAY 305
#define BETWEEN 306
#define AND 307
#define HERE 308
#define DOT_N 309
#define DOT_E 310
#define DOT_W 311
#define DOT_S 312
#define DOT_NE 313
#define DOT_SE 314
#define DOT_NW 315
#define DOT_SW 316
#define DOT_C 317
#define DOT_START 318
#define DOT_END 319
#define DOT_X 320
#define DOT_Y 321
#define DOT_HT 322
#define DOT_WID 323
#define DOT_RAD 324
#define SIN 325
#define COS 326
#define ATAN2 327
#define LOG 328
#define EXP 329
#define SQRT 330
#define K_MAX 331
#define K_MIN 332
#define INT 333
#define RAND 334
#define SRAND 335
#define COPY 336
#define THRU 337
#define TOP 338
#define BOTTOM 339
#define UPPER 340
#define LOWER 341
#define SH 342
#define PRINT 343
#define CW 344
#define CCW 345
#define FOR 346
#define DO 347
#define IF 348
#define ELSE 349
#define ANDAND 350
#define OROR 351
#define NOTEQUAL 352
#define EQUALEQUAL 353
#define LESSEQUAL 354
#define GREATEREQUAL 355
#define LEFT_CORNER 356
#define RIGHT_CORNER 357
#define NORTH 358
#define SOUTH 359
#define EAST 360
#define WEST 361
#define CENTER 362
#define END 363
#define START 364
#define RESET 365
#define UNTIL 366
#define PLOT 367
#define THICKNESS 368
#define FILL 369
#define COLORED 370
#define OUTLINED 371
#define SHADED 372
#define XSLANTED 373
#define YSLANTED 374
#define ALIGNED 375
#define SPRINTF 376
#define COMMAND 377
#define DEFINE 378
#define UNDEF 379

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 65 "../src/preproc/pic/pic.ypp"

	char *str;
	int n;
	double x;
	struct { double x, y; } pair;
	struct { double x; char *body; } if_data;
	struct { char *str; const char *filename; int lineno; } lstr;
	struct { double *v; int nv; int maxv; } dv;
	struct { double val; int is_multiplicative; } by;
	place pl;
	object *obj;
	corner crn;
	path *pth;
	object_spec *spec;
	saved_state *pstate;
	graphics_state state;
	object_type obtype;

#line 435 "src/preproc/pic/pic.cpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SRC_PREPROC_PIC_PIC_HPP_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_LABEL = 3,                      /* LABEL  */
  YYSYMBOL_VARIABLE = 4,                   /* VARIABLE  */
  YYSYMBOL_NUMBER = 5,                     /* NUMBER  */
  YYSYMBOL_TEXT = 6,                       /* TEXT  */
  YYSYMBOL_COMMAND_LINE = 7,               /* COMMAND_LINE  */
  YYSYMBOL_DELIMITED = 8,                  /* DELIMITED  */
  YYSYMBOL_ORDINAL = 9,                    /* ORDINAL  */
  YYSYMBOL_TH = 10,                        /* TH  */
  YYSYMBOL_LEFT_ARROW_HEAD = 11,           /* LEFT_ARROW_HEAD  */
  YYSYMBOL_RIGHT_ARROW_HEAD = 12,          /* RIGHT_ARROW_HEAD  */
  YYSYMBOL_DOUBLE_ARROW_HEAD = 13,         /* DOUBLE_ARROW_HEAD  */
  YYSYMBOL_LAST = 14,                      /* LAST  */
  YYSYMBOL_BOX = 15,                       /* BOX  */
  YYSYMBOL_CIRCLE = 16,                    /* CIRCLE  */
  YYSYMBOL_ELLIPSE = 17,                   /* ELLIPSE  */
  YYSYMBOL_ARC = 18,                       /* ARC  */
  YYSYMBOL_LINE = 19,                      /* LINE  */
  YYSYMBOL_ARROW = 20,                     /* ARROW  */
  YYSYMBOL_MOVE = 21,                      /* MOVE  */
  YYSYMBOL_SPLINE = 22,                    /* SPLINE  */
  YYSYMBOL_HEIGHT = 23,                    /* HEIGHT  */
  YYSYMBOL_RADIUS = 24,                    /* RADIUS  */
  YYSYMBOL_FIGNAME = 25,                   /* FIGNAME  */
  YYSYMBOL_WIDTH = 26,                     /* WIDTH  */
  YYSYMBOL_DIAMETER = 27,                  /* DIAMETER  */
  YYSYMBOL_UP = 28,                        /* UP  */
  YYSYMBOL_DOWN = 29,                      /* DOWN  */
  YYSYMBOL_RIGHT = 30,                     /* RIGHT  */
  YYSYMBOL_LEFT = 31,                      /* LEFT  */
  YYSYMBOL_FROM = 32,                      /* FROM  */
  YYSYMBOL_TO = 33,                        /* TO  */
  YYSYMBOL_AT = 34,                        /* AT  */
  YYSYMBOL_WITH = 35,                      /* WITH  */
  YYSYMBOL_BY = 36,                        /* BY  */
  YYSYMBOL_THEN = 37,                      /* THEN  */
  YYSYMBOL_SOLID = 38,                     /* SOLID  */
  YYSYMBOL_DOTTED = 39,                    /* DOTTED  */
  YYSYMBOL_DASHED = 40,                    /* DASHED  */
  YYSYMBOL_CHOP = 41,                      /* CHOP  */
  YYSYMBOL_SAME = 42,                      /* SAME  */
  YYSYMBOL_INVISIBLE = 43,                 /* INVISIBLE  */
  YYSYMBOL_LJUST = 44,                     /* LJUST  */
  YYSYMBOL_RJUST = 45,                     /* RJUST  */
  YYSYMBOL_ABOVE = 46,                     /* ABOVE  */
  YYSYMBOL_BELOW = 47,                     /* BELOW  */
  YYSYMBOL_OF = 48,                        /* OF  */
  YYSYMBOL_THE = 49,                       /* THE  */
  YYSYMBOL_WAY = 50,                       /* WAY  */
  YYSYMBOL_BETWEEN = 51,                   /* BETWEEN  */
  YYSYMBOL_AND = 52,                       /* AND  */
  YYSYMBOL_HERE = 53,                      /* HERE  */
  YYSYMBOL_DOT_N = 54,                     /* DOT_N  */
  YYSYMBOL_DOT_E = 55,                     /* DOT_E  */
  YYSYMBOL_DOT_W = 56,                     /* DOT_W  */
  YYSYMBOL_DOT_S = 57,                     /* DOT_S  */
  YYSYMBOL_DOT_NE = 58,                    /* DOT_NE  */
  YYSYMBOL_DOT_SE = 59,                    /* DOT_SE  */
  YYSYMBOL_DOT_NW = 60,                    /* DOT_NW  */
  YYSYMBOL_DOT_SW = 61,                    /* DOT_SW  */
  YYSYMBOL_DOT_C = 62,                     /* DOT_C  */
  YYSYMBOL_DOT_START = 63,                 /* DOT_START  */
  YYSYMBOL_DOT_END = 64,                   /* DOT_END  */
  YYSYMBOL_DOT_X = 65,                     /* DOT_X  */
  YYSYMBOL_DOT_Y = 66,                     /* DOT_Y  */
  YYSYMBOL_DOT_HT = 67,                    /* DOT_HT  */
  YYSYMBOL_DOT_WID = 68,                   /* DOT_WID  */
  YYSYMBOL_DOT_RAD = 69,                   /* DOT_RAD  */
  YYSYMBOL_SIN = 70,                       /* SIN  */
  YYSYMBOL_COS = 71,                       /* COS  */
  YYSYMBOL_ATAN2 = 72,                     /* ATAN2  */
  YYSYMBOL_LOG = 73,                       /* LOG  */
  YYSYMBOL_EXP = 74,                       /* EXP  */
  YYSYMBOL_SQRT = 75,                      /* SQRT  */
  YYSYMBOL_K_MAX = 76,                     /* K_MAX  */
  YYSYMBOL_K_MIN = 77,                     /* K_MIN  */
  YYSYMBOL_INT = 78,                       /* INT  */
  YYSYMBOL_RAND = 79,                      /* RAND  */
  YYSYMBOL_SRAND = 80,                     /* SRAND  */
  YYSYMBOL_COPY = 81,                      /* COPY  */
  YYSYMBOL_THRU = 82,                      /* THRU  */
  YYSYMBOL_TOP = 83,                       /* TOP  */
  YYSYMBOL_BOTTOM = 84,                    /* BOTTOM  */
  YYSYMBOL_UPPER = 85,                     /* UPPER  */
  YYSYMBOL_LOWER = 86,                     /* LOWER  */
  YYSYMBOL_SH = 87,                        /* SH  */
  YYSYMBOL_PRINT = 88,                     /* PRINT  */
  YYSYMBOL_CW = 89,                        /* CW  */
  YYSYMBOL_CCW = 90,                       /* CCW  */
  YYSYMBOL_FOR = 91,                       /* FOR  */
  YYSYMBOL_DO = 92,                        /* DO  */
  YYSYMBOL_IF = 93,                        /* IF  */
  YYSYMBOL_ELSE = 94,                      /* ELSE  */
  YYSYMBOL_ANDAND = 95,                    /* ANDAND  */
  YYSYMBOL_OROR = 96,                      /* OROR  */
  YYSYMBOL_NOTEQUAL = 97,                  /* NOTEQUAL  */
  YYSYMBOL_EQUALEQUAL = 98,                /* EQUALEQUAL  */
  YYSYMBOL_LESSEQUAL = 99,                 /* LESSEQUAL  */
  YYSYMBOL_GREATEREQUAL = 100,             /* GREATEREQUAL  */
  YYSYMBOL_LEFT_CORNER = 101,              /* LEFT_CORNER  */
  YYSYMBOL_RIGHT_CORNER = 102,             /* RIGHT_CORNER  */
  YYSYMBOL_NORTH = 103,                    /* NORTH  */
  YYSYMBOL_SOUTH = 104,                    /* SOUTH  */
  YYSYMBOL_EAST = 105,                     /* EAST  */
  YYSYMBOL_WEST = 106,                     /* WEST  */
  YYSYMBOL_CENTER = 107,                   /* CENTER  */
  YYSYMBOL_END = 108,                      /* END  */
  YYSYMBOL_START = 109,                    /* START  */
  YYSYMBOL_RESET = 110,                    /* RESET  */
  YYSYMBOL_UNTIL = 111,                    /* UNTIL  */
  YYSYMBOL_PLOT = 112,                     /* PLOT  */
  YYSYMBOL_THICKNESS = 113,                /* THICKNESS  */
  YYSYMBOL_FILL = 114,                     /* FILL  */
  YYSYMBOL_COLORED = 115,                  /* COLORED  */
  YYSYMBOL_OUTLINED = 116,                 /* OUTLINED  */
  YYSYMBOL_SHADED = 117,                   /* SHADED  */
  YYSYMBOL_XSLANTED = 118,                 /* XSLANTED  */
  YYSYMBOL_YSLANTED = 119,                 /* YSLANTED  */
  YYSYMBOL_ALIGNED = 120,                  /* ALIGNED  */
  YYSYMBOL_SPRINTF = 121,                  /* SPRINTF  */
  YYSYMBOL_COMMAND = 122,                  /* COMMAND  */
  YYSYMBOL_DEFINE = 123,                   /* DEFINE  */
  YYSYMBOL_UNDEF = 124,                    /* UNDEF  */
  YYSYMBOL_125_ = 125,                     /* '.'  */
  YYSYMBOL_126_ = 126,                     /* '('  */
  YYSYMBOL_127_ = 127,                     /* '`'  */
  YYSYMBOL_128_ = 128,                     /* '['  */
  YYSYMBOL_129_ = 129,                     /* ','  */
  YYSYMBOL_130_ = 130,                     /* '<'  */
  YYSYMBOL_131_ = 131,                     /* '>'  */
  YYSYMBOL_132_ = 132,                     /* '+'  */
  YYSYMBOL_133_ = 133,                     /* '-'  */
  YYSYMBOL_134_ = 134,                     /* '*'  */
  YYSYMBOL_135_ = 135,                     /* '/'  */
  YYSYMBOL_136_ = 136,                     /* '%'  */
  YYSYMBOL_137_ = 137,                     /* '!'  */
  YYSYMBOL_138_ = 138,                     /* '^'  */
  YYSYMBOL_139_ = 139,                     /* ';'  */
  YYSYMBOL_140_ = 140,                     /* '='  */
  YYSYMBOL_141_ = 141,                     /* ':'  */
  YYSYMBOL_142_ = 142,                     /* '{'  */
  YYSYMBOL_143_ = 143,                     /* '}'  */
  YYSYMBOL_144_ = 144,                     /* ']'  */
  YYSYMBOL_145_ = 145,                     /* ')'  */
  YYSYMBOL_YYACCEPT = 146,                 /* $accept  */
  YYSYMBOL_top = 147,                      /* top  */
  YYSYMBOL_element_list = 148,             /* element_list  */
  YYSYMBOL_middle_element_list = 149,      /* middle_element_list  */
  YYSYMBOL_optional_separator = 150,       /* optional_separator  */
  YYSYMBOL_separator = 151,                /* separator  */
  YYSYMBOL_placeless_element = 152,        /* placeless_element  */
  YYSYMBOL_153_1 = 153,                    /* $@1  */
  YYSYMBOL_154_2 = 154,                    /* $@2  */
  YYSYMBOL_155_3 = 155,                    /* $@3  */
  YYSYMBOL_156_4 = 156,                    /* $@4  */
  YYSYMBOL_157_5 = 157,                    /* $@5  */
  YYSYMBOL_158_6 = 158,                    /* $@6  */
  YYSYMBOL_159_7 = 159,                    /* $@7  */
  YYSYMBOL_macro_name = 160,               /* macro_name  */
  YYSYMBOL_reset_variables = 161,          /* reset_variables  */
  YYSYMBOL_print_args = 162,               /* print_args  */
  YYSYMBOL_print_arg = 163,                /* print_arg  */
  YYSYMBOL_simple_if = 164,                /* simple_if  */
  YYSYMBOL_165_8 = 165,                    /* $@8  */
  YYSYMBOL_until = 166,                    /* until  */
  YYSYMBOL_any_expr = 167,                 /* any_expr  */
  YYSYMBOL_text_expr = 168,                /* text_expr  */
  YYSYMBOL_optional_by = 169,              /* optional_by  */
  YYSYMBOL_element = 170,                  /* element  */
  YYSYMBOL_171_9 = 171,                    /* @9  */
  YYSYMBOL_172_10 = 172,                   /* $@10  */
  YYSYMBOL_optional_element = 173,         /* optional_element  */
  YYSYMBOL_object_spec = 174,              /* object_spec  */
  YYSYMBOL_175_11 = 175,                   /* @11  */
  YYSYMBOL_text = 176,                     /* text  */
  YYSYMBOL_sprintf_args = 177,             /* sprintf_args  */
  YYSYMBOL_position = 178,                 /* position  */
  YYSYMBOL_position_not_place = 179,       /* position_not_place  */
  YYSYMBOL_between = 180,                  /* between  */
  YYSYMBOL_expr_pair = 181,                /* expr_pair  */
  YYSYMBOL_place = 182,                    /* place  */
  YYSYMBOL_label = 183,                    /* label  */
  YYSYMBOL_ordinal = 184,                  /* ordinal  */
  YYSYMBOL_optional_ordinal_last = 185,    /* optional_ordinal_last  */
  YYSYMBOL_nth_primitive = 186,            /* nth_primitive  */
  YYSYMBOL_object_type = 187,              /* object_type  */
  YYSYMBOL_label_path = 188,               /* label_path  */
  YYSYMBOL_relative_path = 189,            /* relative_path  */
  YYSYMBOL_path = 190,                     /* path  */
  YYSYMBOL_corner = 191,                   /* corner  */
  YYSYMBOL_expr = 192,                     /* expr  */
  YYSYMBOL_expr_lower_than = 193,          /* expr_lower_than  */
  YYSYMBOL_expr_not_lower_than = 194       /* expr_not_lower_than  */
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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2438

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  146
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  260
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  454

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   379


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   137,     2,     2,     2,   136,     2,     2,
     126,   145,   134,   132,   129,   133,   125,   135,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   141,   139,
     130,   140,   131,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   128,     2,   144,   138,     2,   127,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   142,     2,   143,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   275,   275,   276,   285,   290,   292,   296,   298,   302,
     303,   307,   315,   320,   332,   334,   336,   338,   340,   345,
     350,   357,   356,   372,   380,   382,   379,   393,   395,   392,
     405,   404,   413,   422,   421,   435,   436,   441,   442,   446,
     451,   456,   464,   466,   485,   492,   494,   505,   504,   516,
     517,   522,   524,   529,   535,   541,   543,   545,   547,   549,
     551,   553,   560,   564,   569,   577,   591,   597,   605,   612,
     618,   611,   627,   637,   638,   643,   645,   647,   649,   654,
     661,   668,   675,   682,   687,   694,   702,   701,   728,   734,
     740,   746,   752,   771,   778,   785,   792,   799,   806,   813,
     820,   827,   834,   849,   861,   867,   876,   883,   908,   912,
     918,   924,   930,   936,   941,   947,   953,   959,   966,   975,
     982,   998,  1015,  1020,  1025,  1030,  1035,  1040,  1045,  1050,
    1058,  1068,  1078,  1088,  1098,  1104,  1112,  1114,  1126,  1131,
    1161,  1163,  1169,  1178,  1180,  1185,  1190,  1195,  1200,  1205,
    1210,  1216,  1221,  1229,  1230,  1234,  1239,  1245,  1247,  1253,
    1259,  1265,  1274,  1284,  1286,  1295,  1297,  1305,  1307,  1312,
    1327,  1345,  1347,  1349,  1351,  1353,  1355,  1357,  1359,  1361,
    1366,  1368,  1376,  1380,  1382,  1390,  1392,  1398,  1404,  1410,
    1416,  1425,  1427,  1429,  1431,  1433,  1435,  1437,  1439,  1441,
    1443,  1445,  1447,  1449,  1451,  1453,  1455,  1457,  1459,  1461,
    1463,  1465,  1467,  1469,  1471,  1473,  1475,  1477,  1479,  1481,
    1483,  1485,  1487,  1492,  1494,  1499,  1504,  1512,  1514,  1521,
    1528,  1535,  1542,  1549,  1551,  1553,  1555,  1563,  1571,  1584,
    1586,  1588,  1597,  1606,  1619,  1628,  1637,  1646,  1648,  1650,
    1652,  1659,  1665,  1670,  1672,  1674,  1676,  1678,  1680,  1682,
    1684
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
  "\"end of file\"", "error", "\"invalid token\"", "LABEL", "VARIABLE",
  "NUMBER", "TEXT", "COMMAND_LINE", "DELIMITED", "ORDINAL", "TH",
  "LEFT_ARROW_HEAD", "RIGHT_ARROW_HEAD", "DOUBLE_ARROW_HEAD", "LAST",
  "BOX", "CIRCLE", "ELLIPSE", "ARC", "LINE", "ARROW", "MOVE", "SPLINE",
  "HEIGHT", "RADIUS", "FIGNAME", "WIDTH", "DIAMETER", "UP", "DOWN",
  "RIGHT", "LEFT", "FROM", "TO", "AT", "WITH", "BY", "THEN", "SOLID",
  "DOTTED", "DASHED", "CHOP", "SAME", "INVISIBLE", "LJUST", "RJUST",
  "ABOVE", "BELOW", "OF", "THE", "WAY", "BETWEEN", "AND", "HERE", "DOT_N",
  "DOT_E", "DOT_W", "DOT_S", "DOT_NE", "DOT_SE", "DOT_NW", "DOT_SW",
  "DOT_C", "DOT_START", "DOT_END", "DOT_X", "DOT_Y", "DOT_HT", "DOT_WID",
  "DOT_RAD", "SIN", "COS", "ATAN2", "LOG", "EXP", "SQRT", "K_MAX", "K_MIN",
  "INT", "RAND", "SRAND", "COPY", "THRU", "TOP", "BOTTOM", "UPPER",
  "LOWER", "SH", "PRINT", "CW", "CCW", "FOR", "DO", "IF", "ELSE", "ANDAND",
  "OROR", "NOTEQUAL", "EQUALEQUAL", "LESSEQUAL", "GREATEREQUAL",
  "LEFT_CORNER", "RIGHT_CORNER", "NORTH", "SOUTH", "EAST", "WEST",
  "CENTER", "END", "START", "RESET", "UNTIL", "PLOT", "THICKNESS", "FILL",
  "COLORED", "OUTLINED", "SHADED", "XSLANTED", "YSLANTED", "ALIGNED",
  "SPRINTF", "COMMAND", "DEFINE", "UNDEF", "'.'", "'('", "'`'", "'['",
  "','", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "'^'",
  "';'", "'='", "':'", "'{'", "'}'", "']'", "')'", "$accept", "top",
  "element_list", "middle_element_list", "optional_separator", "separator",
  "placeless_element", "$@1", "$@2", "$@3", "$@4", "$@5", "$@6", "$@7",
  "macro_name", "reset_variables", "print_args", "print_arg", "simple_if",
  "$@8", "until", "any_expr", "text_expr", "optional_by", "element", "@9",
  "$@10", "optional_element", "object_spec", "@11", "text", "sprintf_args",
  "position", "position_not_place", "between", "expr_pair", "place",
  "label", "ordinal", "optional_ordinal_last", "nth_primitive",
  "object_type", "label_path", "relative_path", "path", "corner", "expr",
  "expr_lower_than", "expr_not_lower_than", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-240)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-206)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -114,  -240,    20,  -240,   757,  -107,  -240,   -98,  -123,  -240,
    -240,  -240,  -240,  -240,  -240,  -240,  -240,  -240,  -240,  -106,
    -240,  -240,  -240,  -240,     9,  -240,  1087,    46,  1172,    49,
    1597,   -70,  1087,  -240,  -240,  -114,  -240,     3,   -33,  -240,
     877,  -240,  -240,  -114,  1172,   -60,    36,   -14,  -240,    74,
    -240,  -240,  -240,  -240,  -240,  -240,  -240,  -240,  -240,  -240,
    -240,  -240,  -240,  -240,  -240,  -240,  -240,  -240,  -240,   -34,
     -18,     8,    38,    47,    51,    65,   101,   102,   112,   122,
    -240,  -240,    21,   150,  -240,  -240,  -240,  -240,  -240,  -240,
    -240,  -240,  -240,  1257,  1172,  1597,  1597,  1087,  -240,  -240,
     -43,  -240,  -240,   357,  2242,    59,   258,  -240,    10,  2147,
    -240,     1,     6,  1172,  1172,   145,    -1,     2,   357,  2273,
    -240,  -240,   220,   249,  1087,  -114,  -114,  -240,   721,  -240,
     252,  -240,  -240,  -240,  -240,  1597,  1597,  1597,  1597,  2024,
    2024,  1853,  1939,  1682,  1682,  1682,  1427,  1767,  -240,  -240,
    2024,  2024,  2024,  -240,  -240,  -240,  -240,  -240,  -240,  -240,
    -240,  1597,  2024,    23,    23,    23,  1597,  1597,  -240,  -240,
    2282,   593,  -240,  1172,  -240,  -240,  -240,  -240,   250,  -240,
    1172,  1172,  1172,  1172,  1172,  1172,  1172,  1172,  1172,   458,
    1172,  -240,  -240,  -240,  -240,  -240,  -240,  -240,  -240,   121,
     107,   123,   256,  2157,   137,   261,   134,   134,  -240,  1767,
    1767,  -240,  -240,  -240,  -240,  -240,   276,  -240,  -240,  -240,
    -240,  -240,  -240,  -240,  -240,  -240,  -240,   138,  -240,  -240,
      24,   156,   235,  -240,  1597,  1597,  1597,  1597,  1597,  1597,
    1597,  1597,  1597,  1597,  1597,  1597,  1597,  1597,  1597,  1682,
    1682,  1597,  -240,   134,  -240,  1172,  1172,    23,    23,  1172,
    1172,  -240,  -240,   143,   757,   153,  -240,  -240,   280,  2282,
    2282,  2282,  2282,  2282,  2282,  2282,  2282,   -43,  2147,   -43,
     -43,  2253,   275,   275,   295,  1002,   -43,  2081,  -240,  -240,
      10,  1342,  -240,   694,  2282,  2282,  2282,  2282,  2282,  -240,
    -240,  -240,  2282,  2282,   -98,  -123,    16,    28,  -240,   -43,
      56,   302,  -240,   291,  -240,   155,   160,   172,   161,   164,
     167,   184,   185,   181,  -240,   186,   188,  -240,  1682,  1767,
    1767,  -240,  -240,  1682,  1682,  -240,  -240,  -240,  -240,  -240,
     156,   279,   314,  2291,   440,   440,   413,   413,  2282,   413,
     413,   -72,   -72,   134,   134,   134,   134,   -49,   117,   343,
     322,  -240,   314,   239,  2300,  -240,  -240,  -240,   314,   239,
    2300,  -119,  -240,  -240,  -240,  -240,  -240,  2116,  2116,  -240,
     206,   333,  -240,   123,  2131,  -240,   228,  -240,  -240,  1172,
    -240,  -240,  -240,  1172,  1172,  -240,  -240,  -240,  -110,   195,
     197,   -47,   128,   292,  1682,  1682,  1597,  -240,  1597,  -240,
     757,  -240,  -240,  2116,  -240,   228,   338,  -240,   200,   202,
     212,  -240,  -240,  -240,  1682,  1682,  -240,   -43,   -27,   360,
    2282,  -240,  -240,   214,  -240,  -240,  -240,  -240,  -240,   -73,
      30,  -240,  1512,   268,  -240,  -240,   216,  1597,  2282,  -240,
    -240,  2282,   354,  -240
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       7,     9,     0,     3,     2,     8,     1,     0,     0,   136,
      18,    75,    76,    77,    78,    79,    80,    81,    82,     0,
      14,    15,    17,    16,     0,    21,     0,     0,     0,    36,
       0,     0,     0,    86,    69,     7,    72,    35,    32,     5,
      65,    83,    10,     7,     0,     0,     0,    23,    27,     0,
     162,   226,   227,   165,   167,   205,   204,   161,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     202,   203,     0,     0,   210,   211,   216,   217,   218,   219,
     220,   222,   221,     0,     0,     0,     0,    20,    42,    45,
      46,   140,   143,   141,   157,     0,     0,   163,     0,    44,
     223,   224,     0,     0,     0,     0,    52,     0,     0,    51,
     224,    39,    84,     0,    19,     7,     7,     4,     8,    40,
       0,    33,   124,   125,   126,     0,     0,     0,     0,    93,
      95,    97,    99,     0,     0,     0,     0,     0,   107,   108,
     109,   111,   120,   122,   123,   130,   131,   132,   133,   127,
     128,     0,   113,     0,     0,     0,     0,     0,   135,   129,
      92,     0,    12,     0,    38,    37,    11,    24,     0,    22,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   208,   206,   212,   214,   209,   207,   213,   215,     0,
       0,   143,   141,    51,   224,     0,   239,   260,    43,     0,
       0,   228,   229,   230,   231,   232,     0,   158,   179,   168,
     171,   172,   173,   174,   175,   176,   177,     0,   169,   170,
       0,   159,     0,   153,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    61,   260,    47,     0,     0,     0,     0,     0,
       0,    85,   138,     0,     0,     0,     6,    41,     0,    88,
      89,    90,    91,    94,    96,    98,   100,   101,     0,   102,
     103,   162,   165,   167,     0,     0,   105,   183,   185,   104,
     182,     0,   106,     0,   110,   112,   121,   134,   114,   118,
     119,   117,   115,   116,   162,   226,   205,   204,    66,     0,
      67,    68,    13,     0,    28,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   251,     0,     0,   240,     0,     0,
       0,   156,   142,     0,     0,   166,   144,   146,   164,   178,
     160,     0,   258,   259,   257,   256,   253,   255,   155,   225,
     254,   233,   234,   235,   236,   237,   238,     0,     0,     0,
       0,    55,    56,    58,    59,    54,    53,    57,   258,    60,
     259,     0,    87,    70,    34,   190,   182,     0,     0,   180,
       0,     0,   184,     0,    51,    25,    49,   241,   242,     0,
     244,   245,   246,     0,     0,   249,   250,   252,     0,   144,
     146,     0,     0,     0,     0,     0,     0,    48,     0,   137,
      73,   189,   188,     0,   181,    49,     0,    29,     0,     0,
       0,   148,   145,   147,     0,     0,   154,   149,     0,    62,
     139,    74,    71,     0,    26,    50,   243,   247,   248,   149,
       0,   151,     0,     0,   186,   150,   151,     0,    63,    30,
     152,    64,     0,    31
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -240,  -240,    17,  -240,    12,   329,  -240,  -240,  -240,  -240,
    -240,  -240,  -240,  -240,  -240,  -240,   334,   -76,  -240,  -240,
     -42,    13,  -103,  -240,  -127,  -240,  -240,  -240,  -240,  -240,
       5,  -240,    99,   194,   169,   -44,     4,  -100,  -240,  -240,
    -240,  -104,  -240,  -239,  -240,   -50,   -26,  -240,    61
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,    35,   264,     5,    36,    49,   313,   415,
     178,   386,   452,   268,   176,    37,    97,    98,    38,   360,
     417,   199,   116,   443,    39,   126,   410,   432,    40,   125,
     117,   371,   100,   101,   249,   102,   118,   104,   105,   106,
     107,   228,   287,   288,   289,   108,   119,   110,   120
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     109,   266,   229,   404,   122,   424,   109,   129,   231,    41,
     408,   252,     4,    50,   170,    47,   -17,    44,    45,    53,
       6,   208,   209,   210,    54,     1,   409,    50,   -16,     9,
     103,    99,    42,    53,    46,   421,   103,    99,    54,   174,
     175,   115,   375,    43,   308,   169,   380,   127,   208,   201,
     112,   191,   192,   121,   217,   171,   123,   172,   230,   209,
     210,   131,   245,   246,   247,   218,   248,   203,   177,   206,
     207,   109,   445,   219,   220,   221,   222,   223,   224,   225,
     173,   226,   179,   209,   210,   209,   210,   111,   253,   209,
     210,    48,   180,   111,   255,   256,   290,   202,   109,   257,
     258,   103,    99,   292,   441,   209,   210,   205,   181,   269,
     270,   271,   272,   273,   274,   275,   276,   278,   278,   278,
     278,   293,   193,   194,   294,   295,   296,   261,   103,    99,
     340,   250,   130,    41,   182,   297,   298,    94,   411,   412,
     302,   303,   263,   265,    31,   278,   251,   103,   103,   103,
     103,    94,   361,   363,   204,   -17,   367,   369,   111,   -17,
     -17,   446,   209,   210,   183,   336,   337,   -16,   299,   300,
     301,   -16,   -16,   184,   433,   311,    41,   185,   377,   378,
     195,   196,   254,   293,   293,   111,   312,   227,  -140,  -140,
     231,   186,   200,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   325,   326,   111,   111,   111,   111,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   278,   278,   359,     9,   187,   188,   362,
     364,   376,   111,   368,   370,   290,   328,   382,   189,   329,
     330,   201,   277,   279,   280,   286,   405,   383,   190,   209,
     210,   197,   198,   103,   103,   262,   267,   425,   314,   203,
     209,   210,   365,   366,   218,   384,   327,   334,   331,    41,
     309,   335,   248,   220,   221,   222,   223,   224,   225,   338,
     226,   216,   339,   431,   341,   399,   400,   372,   374,   202,
     220,   221,   222,   223,   224,   225,   373,   226,   379,   385,
     387,   389,   278,   293,   293,   388,   390,   278,   278,   391,
     111,   111,   392,   393,   394,   234,   235,   236,   237,   238,
     239,   211,   212,   213,   214,   215,   395,   376,   376,   403,
     407,   396,   103,   397,   255,   413,   414,   103,   103,   416,
     422,    31,   423,   426,   435,   436,   204,   437,   357,   358,
     241,   242,   243,   244,   245,   246,   247,   438,   248,   444,
     449,   450,   453,   376,   128,   310,   124,   211,   212,   213,
     214,   215,   333,   434,     0,     0,   406,     0,   278,   278,
     429,     0,   430,     0,   200,     0,   227,     0,     0,   111,
       0,     0,     0,     0,   111,   111,   442,     0,   278,   278,
       0,   332,   418,   227,     0,     0,   419,   420,   103,   103,
       0,   236,   237,   238,   239,    41,   448,     0,     0,     0,
       0,   451,   211,   212,   213,   214,   215,   398,   103,   103,
       0,     0,   401,   402,  -141,  -141,     0,     0,   234,   235,
     236,   237,   238,   239,   241,   242,   243,   244,   245,   246,
     247,     0,   248,     0,     0,   234,   235,   236,   237,   238,
     239,    50,    51,    52,     9,   111,   111,    53,     0,     0,
       0,     0,    54,   241,   242,   243,   244,   245,   246,   247,
       0,   248,     0,     0,     0,   111,   111,     0,    55,    56,
     241,   242,   243,   244,   245,   246,   247,     0,   248,     0,
       0,     0,     0,   427,   428,     0,     0,     0,     0,     0,
       0,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,   439,   440,     0,     0,     0,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,   238,
     239,    80,    81,    82,    83,   243,   244,   245,   246,   247,
       0,   248,     0,     0,     0,     0,     0,     0,     0,    84,
      85,    86,    87,    88,    89,    90,    91,    92,     0,     0,
     241,   242,   243,   244,   245,   246,   247,     0,   248,    31,
       0,     0,     0,     0,   113,    94,     0,     0,     0,     0,
       0,    95,     0,     0,     0,   114,   304,   305,    52,     9,
      10,     0,    53,   324,     0,     0,     0,    54,    11,    12,
      13,    14,    15,    16,    17,    18,     0,     0,    19,     0,
       0,    20,    21,   306,   307,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,     0,     0,
       0,     0,     0,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    24,     0,    80,    81,    82,    83,
      25,    26,     0,     0,    27,     0,    28,     0,     0,     0,
       0,     0,     0,     0,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    29,     0,    30,     0,     0,     0,     0,
       0,     0,     0,     0,    31,    32,     0,     0,     0,    93,
      94,    33,     0,     0,     7,     8,    95,     9,    10,     0,
      96,     0,     0,     0,     0,    34,    11,    12,    13,    14,
      15,    16,    17,    18,     0,     0,    19,     0,     0,    20,
      21,    22,    23,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     0,     9,    10,     0,     0,     0,     0,     0,
       0,     0,    11,    12,    13,    14,    15,    16,    17,    18,
       0,     0,    19,     0,     0,    20,    21,    22,    23,   234,
     235,   236,   237,   238,   239,     0,     0,     0,     0,     0,
       0,     0,    24,     0,     0,     0,     0,     0,    25,    26,
       0,     0,    27,     0,    28,     0,     0,     0,     0,     0,
       0,     0,     0,   240,   241,   242,   243,   244,   245,   246,
     247,    29,   248,    30,     0,     0,     0,     0,    24,     0,
       0,     0,    31,    32,    25,    26,     0,     0,    27,    33,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      42,     0,     0,    34,     0,     0,     0,    29,     0,    30,
       0,     0,     0,     0,     0,     0,     0,     0,    31,    32,
      50,    51,    52,     9,     0,    33,    53,     0,   132,   133,
     134,    54,     0,     0,     0,     0,     0,     0,     0,    34,
     135,   136,     0,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,     0,     0,     0,     0,     0,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,     0,     0,     0,     0,     0,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,     0,     0,
      80,    81,    82,    83,     0,     0,   159,   160,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,    85,
      86,    87,    88,    89,    90,    91,    92,     0,     0,     0,
     161,   162,   163,   164,   165,   166,   167,   168,    31,     0,
       0,     0,     0,   113,    94,    50,    51,    52,     9,     0,
      95,    53,     0,     0,    96,     0,    54,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,    56,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,     0,     0,     0,
       0,     0,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,     0,     0,    80,    81,    82,    83,     0,
      50,    51,    52,     9,     0,     0,    53,     0,     0,     0,
       0,    54,     0,    84,    85,    86,    87,    88,    89,    90,
      91,    92,     0,     0,     0,     0,     0,    55,    56,     0,
       0,     0,     0,    31,     0,     0,     0,   284,    93,    94,
       0,     0,     0,     0,     0,    95,     0,     0,     0,   114,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,     0,     0,     0,     0,     0,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,     0,     0,
      80,    81,    82,    83,     0,    50,    51,    52,     9,     0,
       0,    53,     0,     0,     0,     0,    54,     0,    84,    85,
      86,    87,    88,    89,    90,    91,    92,     0,     0,     0,
       0,     0,    55,    56,     0,     0,     0,     0,    31,     0,
       0,     0,     0,    93,    94,     0,     0,     0,     0,     0,
      95,     0,     0,     0,    96,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,     0,     0,     0,
       0,     0,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,     0,     0,    80,    81,    82,    83,     0,
      50,    51,    52,     9,     0,     0,    53,     0,     0,     0,
       0,    54,     0,    84,    85,    86,    87,    88,    89,    90,
      91,    92,     0,     0,     0,     0,     0,    55,    56,     0,
       0,     0,     0,    31,     0,     0,     0,     0,   113,    94,
       0,     0,     0,     0,     0,    95,     0,     0,     0,   114,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,     0,     0,     0,     0,     0,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,     0,     0,
      80,    81,    82,    83,     0,    50,    51,    52,     9,     0,
       0,    53,     0,     0,     0,     0,    54,     0,    84,    85,
      86,    87,    88,    89,    90,    91,    92,     0,     0,     0,
       0,     0,    55,    56,     0,     0,     0,     0,    31,     0,
       0,     0,     0,    93,    94,     0,     0,     0,     0,     0,
      95,     0,     0,     0,   114,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,     0,     0,     0,
       0,     0,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,     0,     0,    80,    81,    82,    83,     0,
     281,    51,    52,     0,     0,     0,   282,     0,     0,     0,
       0,   283,     0,    84,    85,    86,    87,    88,    89,    90,
      91,    92,     0,     0,     0,     0,     0,    55,    56,     0,
       0,     0,     0,    31,     0,     0,     0,     0,   291,    94,
       0,     0,     0,     0,     0,    95,     0,     0,     0,   114,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,     0,     0,     0,     0,     0,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,     0,     0,
      80,    81,    82,    83,     0,    50,    51,    52,     0,     0,
       0,    53,     0,     0,     0,     0,    54,     0,    84,    85,
      86,    87,    88,    89,    90,    91,    92,     0,     0,     0,
       0,     0,    55,    56,     0,     0,     0,     0,     0,     0,
       0,     0,   284,   285,    94,     0,     0,     0,     0,     0,
      95,     0,     0,     0,    96,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,     0,     0,     0,
       0,     0,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,     0,     0,    80,    81,    82,    83,     0,
      50,    51,    52,     0,     0,     0,    53,     0,     0,     0,
       0,    54,     0,    84,    85,    86,    87,    88,    89,    90,
      91,    92,     0,     0,     0,     0,     0,    55,    56,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   113,    94,
       0,     0,     0,     0,     0,    95,   447,     0,     0,    96,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,     0,     0,     0,     0,     0,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,     0,     0,
      80,    81,    82,    83,     0,    50,    51,    52,     0,     0,
       0,    53,     0,     0,     0,     0,    54,     0,    84,    85,
      86,    87,    88,    89,    90,    91,    92,     0,     0,     0,
       0,     0,    55,    56,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,    94,     0,     0,     0,     0,     0,
      95,     0,     0,     0,    96,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,     0,     0,     0,
       0,     0,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,     0,     0,    80,    81,    82,    83,     0,
      50,    51,    52,     0,     0,     0,    53,     0,     0,     0,
       0,    54,     0,    84,    85,    86,    87,    88,    89,    90,
      91,    92,     0,     0,     0,     0,     0,    55,    56,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    93,    94,
       0,     0,     0,     0,     0,    95,     0,     0,     0,    96,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,     0,     0,     0,     0,     0,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,     0,     0,
      80,    81,    82,    83,     0,     0,    50,    51,    52,     0,
       0,     0,    53,     0,     0,     0,     0,    54,    84,    85,
      86,    87,    88,    89,    90,    91,    92,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   291,    94,     0,     0,     0,     0,     0,
      95,  -205,     0,     0,    96,     0,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,     0,     0,
       0,     0,     0,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     0,     0,    80,    81,    82,    83,
       0,     0,    50,    51,    52,     0,     0,     0,    53,     0,
       0,     0,     0,    54,    84,    85,    86,    87,    88,    89,
      90,    91,    92,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
      94,     0,     0,     0,     0,     0,    95,  -204,     0,     0,
      96,     0,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,     0,     0,     0,     0,     0,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
       0,     0,    80,    81,    82,    83,     0,    50,    51,    52,
       0,     0,     0,    53,     0,     0,     0,     0,    54,     0,
      84,    85,    86,    87,    88,    89,    90,    91,    92,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,    94,     0,     0,     0,
       0,     0,    95,     0,     0,     0,    96,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,     0,
       0,     0,     0,     0,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,     0,     0,    80,    81,    82,
      83,    55,    56,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    84,    85,    86,    87,    88,
      89,    90,    91,    92,     0,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    55,    56,     0,     0,
     113,    94,     0,     0,     0,     0,     0,    95,     0,     0,
       0,    96,     0,     0,    80,    81,    82,    83,     0,     0,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,     0,    84,    85,    86,    87,    88,    89,    90,    91,
      92,     0,     0,     0,     0,   232,     0,     0,   233,    80,
      81,    82,    83,     0,     0,   232,   381,     0,   233,     0,
       0,     0,     0,     0,     0,     0,     0,    84,    85,    86,
      87,    88,    89,    90,    91,    92,   259,   260,   236,   237,
     238,   239,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   284,   234,   235,   236,   237,   238,   239,     0,     0,
       0,     0,   259,   260,   236,   237,   238,   239,     0,     0,
     240,   241,   242,   243,   244,   245,   246,   247,     0,   248,
       0,     0,     0,     0,     0,     0,   240,   241,   242,   243,
     244,   245,   246,   247,     0,   248,   240,   241,   242,   243,
     244,   245,   246,   247,     0,   248,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,     0,     0,
       0,     0,     0,     0,     0,    80,    81,    82,    83,     0,
       0,     0,     0,     0,     0,     0,    80,    81,    82,    83,
       0,     0,     0,    84,    85,    86,    87,    88,    89,    90,
      91,    92,     0,     0,    84,    85,    86,    87,    88,    89,
      90,    91,    92,     0,     0,     0,     0,   216,   259,   260,
     236,   237,   238,   239,     0,     0,     0,   234,   235,   236,
     237,   238,   239,     0,     0,     0,   234,     0,   236,   237,
     238,   239,     0,     0,     0,   259,     0,   236,   237,   238,
     239,     0,     0,   241,   242,   243,   244,   245,   246,   247,
       0,   248,   241,   242,   243,   244,   245,   246,   247,     0,
     248,   241,   242,   243,   244,   245,   246,   247,     0,   248,
     241,   242,   243,   244,   245,   246,   247,     0,   248
};

static const yytype_int16 yycheck[] =
{
      26,   128,   106,    52,    30,    52,    32,     4,   108,     4,
     129,   114,     0,     3,    40,     6,     0,   140,   141,     9,
       0,    97,   132,   133,    14,   139,   145,     3,     0,     6,
      26,    26,   139,     9,   140,   145,    32,    32,    14,     3,
       4,    28,   281,   141,   171,    40,   285,    35,   124,    93,
       4,    30,    31,     4,   104,    43,   126,    44,    48,   132,
     133,    94,   134,   135,   136,     6,   138,    93,    82,    95,
      96,    97,   145,    14,    15,    16,    17,    18,    19,    20,
     140,    22,     8,   132,   133,   132,   133,    26,   114,   132,
     133,    82,   126,    32,    95,    96,   146,    93,   124,    97,
      98,    97,    97,   147,   131,   132,   133,    94,   126,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   101,   102,   150,   151,   152,   122,   124,   124,
     230,   130,   129,   128,   126,   161,   162,   127,   377,   378,
     166,   167,   125,   126,   121,   171,   140,   143,   144,   145,
     146,   127,   255,   256,    93,   139,   259,   260,    97,   143,
     144,   131,   132,   133,   126,   209,   210,   139,   163,   164,
     165,   143,   144,   126,   413,   171,   171,   126,   282,   283,
      30,    31,    37,   209,   210,   124,   173,   128,   132,   133,
     290,   126,    93,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   143,   144,   145,   146,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,     6,   126,   126,   255,
     256,   281,   171,   259,   260,   285,   129,   287,   126,   132,
     133,   285,   143,   144,   145,   146,   129,   291,   126,   132,
     133,   101,   102,   249,   250,     6,     4,   129,     8,   285,
     132,   133,   257,   258,     6,   291,   145,   130,   145,   264,
     171,    10,   138,    15,    16,    17,    18,    19,    20,     3,
      22,   125,   144,   410,    49,   329,   330,   144,     8,   285,
      15,    16,    17,    18,    19,    20,   143,    22,     3,     8,
     145,   129,   328,   329,   330,   145,   145,   333,   334,   145,
     249,   250,   145,   129,   129,    95,    96,    97,    98,    99,
     100,    65,    66,    67,    68,    69,   145,   377,   378,    50,
       8,   145,   328,   145,    95,   129,     3,   333,   334,   111,
     145,   121,   145,    51,     6,   145,   285,   145,   249,   250,
     130,   131,   132,   133,   134,   135,   136,   145,   138,   145,
      92,   145,     8,   413,    35,   171,    32,    65,    66,    67,
      68,    69,   203,   415,    -1,    -1,    33,    -1,   404,   405,
     406,    -1,   408,    -1,   285,    -1,   128,    -1,    -1,   328,
      -1,    -1,    -1,    -1,   333,   334,    36,    -1,   424,   425,
      -1,   145,   389,   128,    -1,    -1,   393,   394,   404,   405,
      -1,    97,    98,    99,   100,   410,   442,    -1,    -1,    -1,
      -1,   447,    65,    66,    67,    68,    69,   328,   424,   425,
      -1,    -1,   333,   334,   132,   133,    -1,    -1,    95,    96,
      97,    98,    99,   100,   130,   131,   132,   133,   134,   135,
     136,    -1,   138,    -1,    -1,    95,    96,    97,    98,    99,
     100,     3,     4,     5,     6,   404,   405,     9,    -1,    -1,
      -1,    -1,    14,   130,   131,   132,   133,   134,   135,   136,
      -1,   138,    -1,    -1,    -1,   424,   425,    -1,    30,    31,
     130,   131,   132,   133,   134,   135,   136,    -1,   138,    -1,
      -1,    -1,    -1,   404,   405,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,   424,   425,    -1,    -1,    -1,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    99,
     100,    83,    84,    85,    86,   132,   133,   134,   135,   136,
      -1,   138,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    -1,    -1,
     130,   131,   132,   133,   134,   135,   136,    -1,   138,   121,
      -1,    -1,    -1,    -1,   126,   127,    -1,    -1,    -1,    -1,
      -1,   133,    -1,    -1,    -1,   137,     3,     4,     5,     6,
       7,    -1,     9,   145,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    25,    -1,
      -1,    28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    -1,    83,    84,    85,    86,
      87,    88,    -1,    -1,    91,    -1,    93,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,    -1,   112,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   121,   122,    -1,    -1,    -1,   126,
     127,   128,    -1,    -1,     3,     4,   133,     6,     7,    -1,
     137,    -1,    -1,    -1,    -1,   142,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    25,    -1,    -1,    28,
      29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,    -1,     6,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    25,    -1,    -1,    28,    29,    30,    31,    95,
      96,    97,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    88,
      -1,    -1,    91,    -1,    93,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   129,   130,   131,   132,   133,   134,   135,
     136,   110,   138,   112,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,   121,   122,    87,    88,    -1,    -1,    91,   128,
      93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,    -1,    -1,   142,    -1,    -1,    -1,   110,    -1,   112,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,
       3,     4,     5,     6,    -1,   128,     9,    -1,    11,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
      23,    24,    -1,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    -1,
      83,    84,    85,    86,    -1,    -1,    89,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,   102,
     103,   104,   105,   106,   107,   108,   109,    -1,    -1,    -1,
     113,   114,   115,   116,   117,   118,   119,   120,   121,    -1,
      -1,    -1,    -1,   126,   127,     3,     4,     5,     6,    -1,
     133,     9,    -1,    -1,   137,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    -1,    83,    84,    85,    86,    -1,
       3,     4,     5,     6,    -1,    -1,     9,    -1,    -1,    -1,
      -1,    14,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    -1,    -1,   121,    -1,    -1,    -1,   125,   126,   127,
      -1,    -1,    -1,    -1,    -1,   133,    -1,    -1,    -1,   137,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    -1,
      83,    84,    85,    86,    -1,     3,     4,     5,     6,    -1,
      -1,     9,    -1,    -1,    -1,    -1,    14,    -1,   101,   102,
     103,   104,   105,   106,   107,   108,   109,    -1,    -1,    -1,
      -1,    -1,    30,    31,    -1,    -1,    -1,    -1,   121,    -1,
      -1,    -1,    -1,   126,   127,    -1,    -1,    -1,    -1,    -1,
     133,    -1,    -1,    -1,   137,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    -1,    83,    84,    85,    86,    -1,
       3,     4,     5,     6,    -1,    -1,     9,    -1,    -1,    -1,
      -1,    14,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    -1,    -1,   121,    -1,    -1,    -1,    -1,   126,   127,
      -1,    -1,    -1,    -1,    -1,   133,    -1,    -1,    -1,   137,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    -1,
      83,    84,    85,    86,    -1,     3,     4,     5,     6,    -1,
      -1,     9,    -1,    -1,    -1,    -1,    14,    -1,   101,   102,
     103,   104,   105,   106,   107,   108,   109,    -1,    -1,    -1,
      -1,    -1,    30,    31,    -1,    -1,    -1,    -1,   121,    -1,
      -1,    -1,    -1,   126,   127,    -1,    -1,    -1,    -1,    -1,
     133,    -1,    -1,    -1,   137,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    -1,    83,    84,    85,    86,    -1,
       3,     4,     5,    -1,    -1,    -1,     9,    -1,    -1,    -1,
      -1,    14,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    -1,    -1,   121,    -1,    -1,    -1,    -1,   126,   127,
      -1,    -1,    -1,    -1,    -1,   133,    -1,    -1,    -1,   137,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    -1,
      83,    84,    85,    86,    -1,     3,     4,     5,    -1,    -1,
      -1,     9,    -1,    -1,    -1,    -1,    14,    -1,   101,   102,
     103,   104,   105,   106,   107,   108,   109,    -1,    -1,    -1,
      -1,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   125,   126,   127,    -1,    -1,    -1,    -1,    -1,
     133,    -1,    -1,    -1,   137,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    -1,    83,    84,    85,    86,    -1,
       3,     4,     5,    -1,    -1,    -1,     9,    -1,    -1,    -1,
      -1,    14,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,   127,
      -1,    -1,    -1,    -1,    -1,   133,   134,    -1,    -1,   137,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    -1,
      83,    84,    85,    86,    -1,     3,     4,     5,    -1,    -1,
      -1,     9,    -1,    -1,    -1,    -1,    14,    -1,   101,   102,
     103,   104,   105,   106,   107,   108,   109,    -1,    -1,    -1,
      -1,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   126,   127,    -1,    -1,    -1,    -1,    -1,
     133,    -1,    -1,    -1,   137,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    -1,    83,    84,    85,    86,    -1,
       3,     4,     5,    -1,    -1,    -1,     9,    -1,    -1,    -1,
      -1,    14,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,   127,
      -1,    -1,    -1,    -1,    -1,   133,    -1,    -1,    -1,   137,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    -1,
      83,    84,    85,    86,    -1,    -1,     3,     4,     5,    -1,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    14,   101,   102,
     103,   104,   105,   106,   107,   108,   109,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   126,   127,    -1,    -1,    -1,    -1,    -1,
     133,    48,    -1,    -1,   137,    -1,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    -1,    -1,    83,    84,    85,    86,
      -1,    -1,     3,     4,     5,    -1,    -1,    -1,     9,    -1,
      -1,    -1,    -1,    14,   101,   102,   103,   104,   105,   106,
     107,   108,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,
     127,    -1,    -1,    -1,    -1,    -1,   133,    48,    -1,    -1,
     137,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      -1,    -1,    83,    84,    85,    86,    -1,     3,     4,     5,
      -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,    14,    -1,
     101,   102,   103,   104,   105,   106,   107,   108,   109,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   126,   127,    -1,    -1,    -1,
      -1,    -1,   133,    -1,    -1,    -1,   137,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    -1,    83,    84,    85,
      86,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,   102,   103,   104,   105,
     106,   107,   108,   109,    -1,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    30,    31,    -1,    -1,
     126,   127,    -1,    -1,    -1,    -1,    -1,   133,    -1,    -1,
      -1,   137,    -1,    -1,    83,    84,    85,    86,    -1,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,   101,   102,   103,   104,   105,   106,   107,   108,
     109,    -1,    -1,    -1,    -1,    48,    -1,    -1,    51,    83,
      84,    85,    86,    -1,    -1,    48,   125,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,   102,   103,
     104,   105,   106,   107,   108,   109,    95,    96,    97,    98,
      99,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   125,    95,    96,    97,    98,    99,   100,    -1,    -1,
      -1,    -1,    95,    96,    97,    98,    99,   100,    -1,    -1,
     129,   130,   131,   132,   133,   134,   135,   136,    -1,   138,
      -1,    -1,    -1,    -1,    -1,    -1,   129,   130,   131,   132,
     133,   134,   135,   136,    -1,   138,   129,   130,   131,   132,
     133,   134,   135,   136,    -1,   138,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,
      -1,    -1,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,    -1,   101,   102,   103,   104,   105,   106,
     107,   108,   109,    -1,    -1,    -1,    -1,   125,    95,    96,
      97,    98,    99,   100,    -1,    -1,    -1,    95,    96,    97,
      98,    99,   100,    -1,    -1,    -1,    95,    -1,    97,    98,
      99,   100,    -1,    -1,    -1,    95,    -1,    97,    98,    99,
     100,    -1,    -1,   130,   131,   132,   133,   134,   135,   136,
      -1,   138,   130,   131,   132,   133,   134,   135,   136,    -1,
     138,   130,   131,   132,   133,   134,   135,   136,    -1,   138,
     130,   131,   132,   133,   134,   135,   136,    -1,   138
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   139,   147,   148,   150,   151,     0,     3,     4,     6,
       7,    15,    16,    17,    18,    19,    20,    21,    22,    25,
      28,    29,    30,    31,    81,    87,    88,    91,    93,   110,
     112,   121,   122,   128,   142,   149,   152,   161,   164,   170,
     174,   176,   139,   141,   140,   141,   140,     6,    82,   153,
       3,     4,     5,     9,    14,    30,    31,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      83,    84,    85,    86,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   126,   127,   133,   137,   162,   163,   176,
     178,   179,   181,   182,   183,   184,   185,   186,   191,   192,
     193,   194,     4,   126,   137,   167,   168,   176,   182,   192,
     194,     4,   192,   126,   162,   175,   171,   150,   151,     4,
     129,    94,    11,    12,    13,    23,    24,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    89,
      90,   113,   114,   115,   116,   117,   118,   119,   120,   176,
     192,   150,   167,   140,     3,     4,   160,    82,   156,     8,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,    30,    31,   101,   102,    30,    31,   101,   102,   167,
     178,   181,   182,   192,   194,   167,   192,   192,   163,   132,
     133,    65,    66,    67,    68,    69,   125,   191,     6,    14,
      15,    16,    17,    18,    19,    20,    22,   128,   187,   187,
      48,   183,    48,    51,    95,    96,    97,    98,    99,   100,
     129,   130,   131,   132,   133,   134,   135,   136,   138,   180,
     130,   140,   168,   192,    37,    95,    96,    97,    98,    95,
      96,   176,     6,   148,   150,   148,   170,     4,   159,   192,
     192,   192,   192,   192,   192,   192,   192,   178,   192,   178,
     178,     3,     9,    14,   125,   126,   178,   188,   189,   190,
     191,   126,   181,   192,   192,   192,   192,   192,   192,   176,
     176,   176,   192,   192,     3,     4,    30,    31,   170,   178,
     179,   182,   167,   154,     8,   167,   167,   167,   167,   167,
     167,   167,   167,   167,   145,   167,   167,   145,   129,   132,
     133,   145,   145,   180,   130,    10,   181,   181,     3,   144,
     183,    49,   192,   192,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   192,   192,   192,   192,   178,   178,   192,
     165,   168,   192,   168,   192,   176,   176,   168,   192,   168,
     192,   177,   144,   143,     8,   189,   191,   187,   187,     3,
     189,   125,   191,   181,   192,     8,   157,   145,   145,   129,
     145,   145,   145,   129,   129,   145,   145,   145,   178,   181,
     181,   178,   178,    50,    52,   129,    33,     8,   129,   145,
     172,   189,   189,   129,     3,   155,   111,   166,   167,   167,
     167,   145,   145,   145,    52,   129,    51,   178,   178,   192,
     192,   170,   173,   189,   166,     6,   145,   145,   145,   178,
     178,   131,    36,   169,   145,   145,   131,   134,   192,    92,
     145,   192,   158,     8
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   146,   147,   147,   148,   149,   149,   150,   150,   151,
     151,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   153,   152,   152,   154,   155,   152,   156,   157,   152,
     158,   152,   152,   159,   152,   152,   152,   160,   160,   161,
     161,   161,   162,   162,   163,   163,   163,   165,   164,   166,
     166,   167,   167,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   169,   169,   169,   170,   170,   170,   170,   171,
     172,   170,   170,   173,   173,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   175,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   176,   176,   177,   177,
     178,   178,   178,   179,   179,   179,   179,   179,   179,   179,
     179,   179,   179,   180,   180,   181,   181,   182,   182,   182,
     182,   182,   183,   183,   183,   184,   184,   185,   185,   186,
     186,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     188,   188,   189,   189,   189,   190,   190,   190,   190,   190,
     190,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   192,   192,   193,   194,   194,   194,   194,
     194,   194,   194,   194,   194,   194,   194,   194,   194,   194,
     194,   194,   194,   194,   194,   194,   194,   194,   194,   194,
     194,   194,   194,   194,   194,   194,   194,   194,   194,   194,
     194
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     3,     1,     3,     0,     1,     1,
       2,     3,     3,     4,     1,     1,     1,     1,     1,     2,
       2,     0,     3,     2,     0,     0,     7,     0,     0,     6,
       0,    10,     1,     0,     4,     1,     1,     1,     1,     2,
       2,     3,     1,     2,     1,     1,     1,     0,     5,     0,
       2,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     0,     2,     3,     1,     4,     4,     4,     0,
       0,     6,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     0,     4,     3,     3,
       3,     3,     2,     2,     3,     2,     3,     2,     3,     2,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       3,     2,     3,     2,     3,     3,     3,     3,     3,     3,
       2,     3,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     3,     2,     1,     5,     0,     3,
       1,     1,     3,     1,     3,     5,     3,     5,     5,     5,
       7,     6,     8,     1,     4,     3,     3,     1,     2,     2,
       3,     1,     1,     1,     3,     1,     3,     1,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       2,     3,     1,     1,     2,     1,     5,     4,     3,     3,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       1,     1,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     2,     2,
       2,     2,     2,     3,     3,     3,     3,     3,     3,     2,
       3,     4,     4,     6,     4,     4,     4,     6,     6,     4,
       4,     3,     4,     3,     3,     3,     3,     3,     3,     3,
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
  case 3: /* top: element_list  */
#line 277 "../src/preproc/pic/pic.ypp"
                {
		  if (olist.head)
		    print_picture(olist.head);
		}
#line 2343 "src/preproc/pic/pic.cpp"
    break;

  case 4: /* element_list: optional_separator middle_element_list optional_separator  */
#line 286 "../src/preproc/pic/pic.ypp"
                { (yyval.pl) = (yyvsp[-1].pl); }
#line 2349 "src/preproc/pic/pic.cpp"
    break;

  case 5: /* middle_element_list: element  */
#line 291 "../src/preproc/pic/pic.ypp"
                { (yyval.pl) = (yyvsp[0].pl); }
#line 2355 "src/preproc/pic/pic.cpp"
    break;

  case 6: /* middle_element_list: middle_element_list separator element  */
#line 293 "../src/preproc/pic/pic.ypp"
                { (yyval.pl) = (yyvsp[-2].pl); }
#line 2361 "src/preproc/pic/pic.cpp"
    break;

  case 11: /* placeless_element: FIGNAME '=' macro_name  */
#line 308 "../src/preproc/pic/pic.ypp"
                {
		  delete[] graphname;
		  graphname = new char[strlen((yyvsp[0].str)) + 1];
		  strcpy(graphname, (yyvsp[0].str));
		  delete[] (yyvsp[0].str);
		}
#line 2372 "src/preproc/pic/pic.cpp"
    break;

  case 12: /* placeless_element: VARIABLE '=' any_expr  */
#line 316 "../src/preproc/pic/pic.ypp"
                {
		  define_variable((yyvsp[-2].str), (yyvsp[0].x));
		  free((yyvsp[-2].str));
		}
#line 2381 "src/preproc/pic/pic.cpp"
    break;

  case 13: /* placeless_element: VARIABLE ':' '=' any_expr  */
#line 321 "../src/preproc/pic/pic.ypp"
                {
		  place *p = lookup_label((yyvsp[-3].str));
		  if (!p) {
		    lex_error("variable '%1' not defined", (yyvsp[-3].str));
		    YYABORT;
		  }
		  p->obj = 0;
		  p->x = (yyvsp[0].x);
		  p->y = 0.0;
		  free((yyvsp[-3].str));
		}
#line 2397 "src/preproc/pic/pic.cpp"
    break;

  case 14: /* placeless_element: UP  */
#line 333 "../src/preproc/pic/pic.ypp"
                { current_direction = UP_DIRECTION; }
#line 2403 "src/preproc/pic/pic.cpp"
    break;

  case 15: /* placeless_element: DOWN  */
#line 335 "../src/preproc/pic/pic.ypp"
                { current_direction = DOWN_DIRECTION; }
#line 2409 "src/preproc/pic/pic.cpp"
    break;

  case 16: /* placeless_element: LEFT  */
#line 337 "../src/preproc/pic/pic.ypp"
                { current_direction = LEFT_DIRECTION; }
#line 2415 "src/preproc/pic/pic.cpp"
    break;

  case 17: /* placeless_element: RIGHT  */
#line 339 "../src/preproc/pic/pic.ypp"
                { current_direction = RIGHT_DIRECTION; }
#line 2421 "src/preproc/pic/pic.cpp"
    break;

  case 18: /* placeless_element: COMMAND_LINE  */
#line 341 "../src/preproc/pic/pic.ypp"
                {
		  olist.append(make_command_object((yyvsp[0].lstr).str, (yyvsp[0].lstr).filename,
						   (yyvsp[0].lstr).lineno));
		}
#line 2430 "src/preproc/pic/pic.cpp"
    break;

  case 19: /* placeless_element: COMMAND print_args  */
#line 346 "../src/preproc/pic/pic.ypp"
                {
		  olist.append(make_command_object((yyvsp[0].lstr).str, (yyvsp[0].lstr).filename,
						   (yyvsp[0].lstr).lineno));
		}
#line 2439 "src/preproc/pic/pic.cpp"
    break;

  case 20: /* placeless_element: PRINT print_args  */
#line 351 "../src/preproc/pic/pic.ypp"
                {
		  fprintf(stderr, "%s\n", (yyvsp[0].lstr).str);
		  delete[] (yyvsp[0].lstr).str;
		  fflush(stderr);
		}
#line 2449 "src/preproc/pic/pic.cpp"
    break;

  case 21: /* $@1: %empty  */
#line 357 "../src/preproc/pic/pic.ypp"
                { delim_flag = 1; }
#line 2455 "src/preproc/pic/pic.cpp"
    break;

  case 22: /* placeless_element: SH $@1 DELIMITED  */
#line 359 "../src/preproc/pic/pic.ypp"
                {
		  delim_flag = 0;
		  if (safer_flag)
		    lex_error("unsafe to run command '%1'; ignoring",
			      (yyvsp[0].str));
		  else {
		    int retval = system((yyvsp[0].str));
		    if (retval < 0)
		      lex_error("error running command '%1': system()"
			" returned %2", (yyvsp[0].str), retval);
		  }
		  delete[] (yyvsp[0].str);
		}
#line 2473 "src/preproc/pic/pic.cpp"
    break;

  case 23: /* placeless_element: COPY TEXT  */
#line 373 "../src/preproc/pic/pic.ypp"
                {
		  if (yychar < 0)
		    do_lookahead();
		  do_copy((yyvsp[0].lstr).str);
		  // do not delete the filename
		}
#line 2484 "src/preproc/pic/pic.cpp"
    break;

  case 24: /* $@2: %empty  */
#line 380 "../src/preproc/pic/pic.ypp"
                { delim_flag = 2; }
#line 2490 "src/preproc/pic/pic.cpp"
    break;

  case 25: /* $@3: %empty  */
#line 382 "../src/preproc/pic/pic.ypp"
                { delim_flag = 0; }
#line 2496 "src/preproc/pic/pic.cpp"
    break;

  case 26: /* placeless_element: COPY TEXT THRU $@2 DELIMITED $@3 until  */
#line 384 "../src/preproc/pic/pic.ypp"
                {
		  if (yychar < 0)
		    do_lookahead();
		  copy_file_thru((yyvsp[-5].lstr).str, (yyvsp[-2].str), (yyvsp[0].str));
		  // do not delete the filename
		  delete[] (yyvsp[-2].str);
		  delete[] (yyvsp[0].str);
		}
#line 2509 "src/preproc/pic/pic.cpp"
    break;

  case 27: /* $@4: %empty  */
#line 393 "../src/preproc/pic/pic.ypp"
                { delim_flag = 2; }
#line 2515 "src/preproc/pic/pic.cpp"
    break;

  case 28: /* $@5: %empty  */
#line 395 "../src/preproc/pic/pic.ypp"
                { delim_flag = 0; }
#line 2521 "src/preproc/pic/pic.cpp"
    break;

  case 29: /* placeless_element: COPY THRU $@4 DELIMITED $@5 until  */
#line 397 "../src/preproc/pic/pic.ypp"
                {
		  if (yychar < 0)
		    do_lookahead();
		  copy_rest_thru((yyvsp[-2].str), (yyvsp[0].str));
		  delete[] (yyvsp[-2].str);
		  delete[] (yyvsp[0].str);
		}
#line 2533 "src/preproc/pic/pic.cpp"
    break;

  case 30: /* $@6: %empty  */
#line 405 "../src/preproc/pic/pic.ypp"
                { delim_flag = 1; }
#line 2539 "src/preproc/pic/pic.cpp"
    break;

  case 31: /* placeless_element: FOR VARIABLE '=' expr TO expr optional_by DO $@6 DELIMITED  */
#line 407 "../src/preproc/pic/pic.ypp"
                {
		  delim_flag = 0;
		  if (yychar < 0)
		    do_lookahead();
		  do_for((yyvsp[-8].str), (yyvsp[-6].x), (yyvsp[-4].x), (yyvsp[-3].by).is_multiplicative, (yyvsp[-3].by).val, (yyvsp[0].str)); 
		}
#line 2550 "src/preproc/pic/pic.cpp"
    break;

  case 32: /* placeless_element: simple_if  */
#line 414 "../src/preproc/pic/pic.ypp"
                {
		  if (yychar < 0)
		    do_lookahead();
		  if ((yyvsp[0].if_data).x != 0.0)
		    push_body((yyvsp[0].if_data).body);
		  delete[] (yyvsp[0].if_data).body;
		}
#line 2562 "src/preproc/pic/pic.cpp"
    break;

  case 33: /* $@7: %empty  */
#line 422 "../src/preproc/pic/pic.ypp"
                { delim_flag = 1; }
#line 2568 "src/preproc/pic/pic.cpp"
    break;

  case 34: /* placeless_element: simple_if ELSE $@7 DELIMITED  */
#line 424 "../src/preproc/pic/pic.ypp"
                {
		  delim_flag = 0;
		  if (yychar < 0)
		    do_lookahead();
		  if ((yyvsp[-3].if_data).x != 0.0)
		    push_body((yyvsp[-3].if_data).body);
		  else
		    push_body((yyvsp[0].str));
		  free((yyvsp[-3].if_data).body);
		  free((yyvsp[0].str));
		}
#line 2584 "src/preproc/pic/pic.cpp"
    break;

  case 36: /* placeless_element: RESET  */
#line 437 "../src/preproc/pic/pic.ypp"
                { define_variable("scale", 1.0); }
#line 2590 "src/preproc/pic/pic.cpp"
    break;

  case 39: /* reset_variables: RESET VARIABLE  */
#line 447 "../src/preproc/pic/pic.ypp"
                {
		  reset((yyvsp[0].str));
		  delete[] (yyvsp[0].str);
		}
#line 2599 "src/preproc/pic/pic.cpp"
    break;

  case 40: /* reset_variables: reset_variables VARIABLE  */
#line 452 "../src/preproc/pic/pic.ypp"
                {
		  reset((yyvsp[0].str));
		  delete[] (yyvsp[0].str);
		}
#line 2608 "src/preproc/pic/pic.cpp"
    break;

  case 41: /* reset_variables: reset_variables ',' VARIABLE  */
#line 457 "../src/preproc/pic/pic.ypp"
                {
		  reset((yyvsp[0].str));
		  delete[] (yyvsp[0].str);
		}
#line 2617 "src/preproc/pic/pic.cpp"
    break;

  case 42: /* print_args: print_arg  */
#line 465 "../src/preproc/pic/pic.ypp"
                { (yyval.lstr) = (yyvsp[0].lstr); }
#line 2623 "src/preproc/pic/pic.cpp"
    break;

  case 43: /* print_args: print_args print_arg  */
#line 467 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.lstr).str = new char[strlen((yyvsp[-1].lstr).str) + strlen((yyvsp[0].lstr).str) + 1];
		  strcpy((yyval.lstr).str, (yyvsp[-1].lstr).str);
		  strcat((yyval.lstr).str, (yyvsp[0].lstr).str);
		  delete[] (yyvsp[-1].lstr).str;
		  delete[] (yyvsp[0].lstr).str;
		  if ((yyvsp[-1].lstr).filename) {
		    (yyval.lstr).filename = (yyvsp[-1].lstr).filename;
		    (yyval.lstr).lineno = (yyvsp[-1].lstr).lineno;
		  }
		  else if ((yyvsp[0].lstr).filename) {
		    (yyval.lstr).filename = (yyvsp[0].lstr).filename;
		    (yyval.lstr).lineno = (yyvsp[0].lstr).lineno;
		  }
		}
#line 2643 "src/preproc/pic/pic.cpp"
    break;

  case 44: /* print_arg: expr  */
#line 486 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.lstr).str = new char[GDIGITS + 1];
		  sprintf((yyval.lstr).str, "%g", (yyvsp[0].x));
		  (yyval.lstr).filename = 0;
		  (yyval.lstr).lineno = 0;
		}
#line 2654 "src/preproc/pic/pic.cpp"
    break;

  case 45: /* print_arg: text  */
#line 493 "../src/preproc/pic/pic.ypp"
                { (yyval.lstr) = (yyvsp[0].lstr); }
#line 2660 "src/preproc/pic/pic.cpp"
    break;

  case 46: /* print_arg: position  */
#line 495 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.lstr).str = new char[GDIGITS + 2 + GDIGITS + 1];
		  sprintf((yyval.lstr).str, "%g, %g", (yyvsp[0].pair).x, (yyvsp[0].pair).y);
		  (yyval.lstr).filename = 0;
		  (yyval.lstr).lineno = 0;
		}
#line 2671 "src/preproc/pic/pic.cpp"
    break;

  case 47: /* $@8: %empty  */
#line 505 "../src/preproc/pic/pic.ypp"
                { delim_flag = 1; }
#line 2677 "src/preproc/pic/pic.cpp"
    break;

  case 48: /* simple_if: IF any_expr THEN $@8 DELIMITED  */
#line 507 "../src/preproc/pic/pic.ypp"
                {
		  delim_flag = 0;
		  (yyval.if_data).x = (yyvsp[-3].x);
		  (yyval.if_data).body = (yyvsp[0].str);
		}
#line 2687 "src/preproc/pic/pic.cpp"
    break;

  case 49: /* until: %empty  */
#line 516 "../src/preproc/pic/pic.ypp"
                { (yyval.str) = 0; }
#line 2693 "src/preproc/pic/pic.cpp"
    break;

  case 50: /* until: UNTIL TEXT  */
#line 518 "../src/preproc/pic/pic.ypp"
                { (yyval.str) = (yyvsp[0].lstr).str; }
#line 2699 "src/preproc/pic/pic.cpp"
    break;

  case 51: /* any_expr: expr  */
#line 523 "../src/preproc/pic/pic.ypp"
                { (yyval.x) = (yyvsp[0].x); }
#line 2705 "src/preproc/pic/pic.cpp"
    break;

  case 52: /* any_expr: text_expr  */
#line 525 "../src/preproc/pic/pic.ypp"
                { (yyval.x) = (yyvsp[0].x); }
#line 2711 "src/preproc/pic/pic.cpp"
    break;

  case 53: /* text_expr: text EQUALEQUAL text  */
#line 530 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.x) = strcmp((yyvsp[-2].lstr).str, (yyvsp[0].lstr).str) == 0;
		  delete[] (yyvsp[-2].lstr).str;
		  delete[] (yyvsp[0].lstr).str;
		}
#line 2721 "src/preproc/pic/pic.cpp"
    break;

  case 54: /* text_expr: text NOTEQUAL text  */
#line 536 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.x) = strcmp((yyvsp[-2].lstr).str, (yyvsp[0].lstr).str) != 0;
		  delete[] (yyvsp[-2].lstr).str;
		  delete[] (yyvsp[0].lstr).str;
		}
#line 2731 "src/preproc/pic/pic.cpp"
    break;

  case 55: /* text_expr: text_expr ANDAND text_expr  */
#line 542 "../src/preproc/pic/pic.ypp"
                { (yyval.x) = ((yyvsp[-2].x) != 0.0 && (yyvsp[0].x) != 0.0); }
#line 2737 "src/preproc/pic/pic.cpp"
    break;

  case 56: /* text_expr: text_expr ANDAND expr  */
#line 544 "../src/preproc/pic/pic.ypp"
                { (yyval.x) = ((yyvsp[-2].x) != 0.0 && (yyvsp[0].x) != 0.0); }
#line 2743 "src/preproc/pic/pic.cpp"
    break;

  case 57: /* text_expr: expr ANDAND text_expr  */
#line 546 "../src/preproc/pic/pic.ypp"
                { (yyval.x) = ((yyvsp[-2].x) != 0.0 && (yyvsp[0].x) != 0.0); }
#line 2749 "src/preproc/pic/pic.cpp"
    break;

  case 58: /* text_expr: text_expr OROR text_expr  */
#line 548 "../src/preproc/pic/pic.ypp"
                { (yyval.x) = ((yyvsp[-2].x) != 0.0 || (yyvsp[0].x) != 0.0); }
#line 2755 "src/preproc/pic/pic.cpp"
    break;

  case 59: /* text_expr: text_expr OROR expr  */
#line 550 "../src/preproc/pic/pic.ypp"
                { (yyval.x) = ((yyvsp[-2].x) != 0.0 || (yyvsp[0].x) != 0.0); }
#line 2761 "src/preproc/pic/pic.cpp"
    break;

  case 60: /* text_expr: expr OROR text_expr  */
#line 552 "../src/preproc/pic/pic.ypp"
                { (yyval.x) = ((yyvsp[-2].x) != 0.0 || (yyvsp[0].x) != 0.0); }
#line 2767 "src/preproc/pic/pic.cpp"
    break;

  case 61: /* text_expr: '!' text_expr  */
#line 554 "../src/preproc/pic/pic.ypp"
                { (yyval.x) = ((yyvsp[0].x) == 0.0); }
#line 2773 "src/preproc/pic/pic.cpp"
    break;

  case 62: /* optional_by: %empty  */
#line 560 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.by).val = 1.0;
		  (yyval.by).is_multiplicative = 0;
		}
#line 2782 "src/preproc/pic/pic.cpp"
    break;

  case 63: /* optional_by: BY expr  */
#line 565 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.by).val = (yyvsp[0].x);
		  (yyval.by).is_multiplicative = 0;
		}
#line 2791 "src/preproc/pic/pic.cpp"
    break;

  case 64: /* optional_by: BY '*' expr  */
#line 570 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.by).val = (yyvsp[0].x);
		  (yyval.by).is_multiplicative = 1;
		}
#line 2800 "src/preproc/pic/pic.cpp"
    break;

  case 65: /* element: object_spec  */
#line 578 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.pl).obj = (yyvsp[0].spec)->make_object(&current_position,
					   &current_direction);
		  if ((yyval.pl).obj == 0)
		    YYABORT;
		  delete (yyvsp[0].spec);
		  if ((yyval.pl).obj)
		    olist.append((yyval.pl).obj);
		  else {
		    (yyval.pl).x = current_position.x;
		    (yyval.pl).y = current_position.y;
		  }
		}
#line 2818 "src/preproc/pic/pic.cpp"
    break;

  case 66: /* element: LABEL ':' optional_separator element  */
#line 592 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.pl) = (yyvsp[0].pl);
		  define_label((yyvsp[-3].str), & (yyval.pl));
		  free((yyvsp[-3].str));
		}
#line 2828 "src/preproc/pic/pic.cpp"
    break;

  case 67: /* element: LABEL ':' optional_separator position_not_place  */
#line 598 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.pl).obj = 0;
		  (yyval.pl).x = (yyvsp[0].pair).x;
		  (yyval.pl).y = (yyvsp[0].pair).y;
		  define_label((yyvsp[-3].str), & (yyval.pl));
		  free((yyvsp[-3].str));
		}
#line 2840 "src/preproc/pic/pic.cpp"
    break;

  case 68: /* element: LABEL ':' optional_separator place  */
#line 606 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.pl) = (yyvsp[0].pl);
		  define_label((yyvsp[-3].str), & (yyval.pl));
		  free((yyvsp[-3].str));
		}
#line 2850 "src/preproc/pic/pic.cpp"
    break;

  case 69: /* @9: %empty  */
#line 612 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.state).x = current_position.x;
		  (yyval.state).y = current_position.y;
		  (yyval.state).dir = current_direction;
		}
#line 2860 "src/preproc/pic/pic.cpp"
    break;

  case 70: /* $@10: %empty  */
#line 618 "../src/preproc/pic/pic.ypp"
                {
		  current_position.x = (yyvsp[-2].state).x;
		  current_position.y = (yyvsp[-2].state).y;
		  current_direction = (yyvsp[-2].state).dir;
		}
#line 2870 "src/preproc/pic/pic.cpp"
    break;

  case 71: /* element: '{' @9 element_list '}' $@10 optional_element  */
#line 624 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.pl) = (yyvsp[-3].pl);
		}
#line 2878 "src/preproc/pic/pic.cpp"
    break;

  case 72: /* element: placeless_element  */
#line 628 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.pl).obj = 0;
		  (yyval.pl).x = current_position.x;
		  (yyval.pl).y = current_position.y;
		}
#line 2888 "src/preproc/pic/pic.cpp"
    break;

  case 73: /* optional_element: %empty  */
#line 637 "../src/preproc/pic/pic.ypp"
                {}
#line 2894 "src/preproc/pic/pic.cpp"
    break;

  case 74: /* optional_element: element  */
#line 639 "../src/preproc/pic/pic.ypp"
                {}
#line 2900 "src/preproc/pic/pic.cpp"
    break;

  case 75: /* object_spec: BOX  */
#line 644 "../src/preproc/pic/pic.ypp"
                { (yyval.spec) = new object_spec(BOX_OBJECT); }
#line 2906 "src/preproc/pic/pic.cpp"
    break;

  case 76: /* object_spec: CIRCLE  */
#line 646 "../src/preproc/pic/pic.ypp"
                { (yyval.spec) = new object_spec(CIRCLE_OBJECT); }
#line 2912 "src/preproc/pic/pic.cpp"
    break;

  case 77: /* object_spec: ELLIPSE  */
#line 648 "../src/preproc/pic/pic.ypp"
                { (yyval.spec) = new object_spec(ELLIPSE_OBJECT); }
#line 2918 "src/preproc/pic/pic.cpp"
    break;

  case 78: /* object_spec: ARC  */
#line 650 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = new object_spec(ARC_OBJECT);
		  (yyval.spec)->dir = current_direction;
		}
#line 2927 "src/preproc/pic/pic.cpp"
    break;

  case 79: /* object_spec: LINE  */
#line 655 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = new object_spec(LINE_OBJECT);
		  lookup_variable("lineht", & (yyval.spec)->segment_height);
		  lookup_variable("linewid", & (yyval.spec)->segment_width);
		  (yyval.spec)->dir = current_direction;
		}
#line 2938 "src/preproc/pic/pic.cpp"
    break;

  case 80: /* object_spec: ARROW  */
#line 662 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = new object_spec(ARROW_OBJECT);
		  lookup_variable("lineht", & (yyval.spec)->segment_height);
		  lookup_variable("linewid", & (yyval.spec)->segment_width);
		  (yyval.spec)->dir = current_direction;
		}
#line 2949 "src/preproc/pic/pic.cpp"
    break;

  case 81: /* object_spec: MOVE  */
#line 669 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = new object_spec(MOVE_OBJECT);
		  lookup_variable("moveht", & (yyval.spec)->segment_height);
		  lookup_variable("movewid", & (yyval.spec)->segment_width);
		  (yyval.spec)->dir = current_direction;
		}
#line 2960 "src/preproc/pic/pic.cpp"
    break;

  case 82: /* object_spec: SPLINE  */
#line 676 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = new object_spec(SPLINE_OBJECT);
		  lookup_variable("lineht", & (yyval.spec)->segment_height);
		  lookup_variable("linewid", & (yyval.spec)->segment_width);
		  (yyval.spec)->dir = current_direction;
		}
#line 2971 "src/preproc/pic/pic.cpp"
    break;

  case 83: /* object_spec: text  */
#line 683 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = new object_spec(TEXT_OBJECT);
		  (yyval.spec)->text = new text_item((yyvsp[0].lstr).str, (yyvsp[0].lstr).filename, (yyvsp[0].lstr).lineno);
		}
#line 2980 "src/preproc/pic/pic.cpp"
    break;

  case 84: /* object_spec: PLOT expr  */
#line 688 "../src/preproc/pic/pic.ypp"
                {
		  lex_warning("'plot' is deprecated; use 'sprintf'"
			      " instead");
		  (yyval.spec) = new object_spec(TEXT_OBJECT);
		  (yyval.spec)->text = new text_item(format_number(0, (yyvsp[0].x)), 0, -1);
		}
#line 2991 "src/preproc/pic/pic.cpp"
    break;

  case 85: /* object_spec: PLOT expr text  */
#line 695 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = new object_spec(TEXT_OBJECT);
		  (yyval.spec)->text = new text_item(format_number((yyvsp[0].lstr).str, (yyvsp[-1].x)),
					   (yyvsp[0].lstr).filename, (yyvsp[0].lstr).lineno);
		  delete[] (yyvsp[0].lstr).str;
		}
#line 3002 "src/preproc/pic/pic.cpp"
    break;

  case 86: /* @11: %empty  */
#line 702 "../src/preproc/pic/pic.ypp"
                {
		  saved_state *p = new saved_state;
		  (yyval.pstate) = p;
		  p->x = current_position.x;
		  p->y = current_position.y;
		  p->dir = current_direction;
		  p->tbl = current_table;
		  p->prev = current_saved_state;
		  current_position.x = 0.0;
		  current_position.y = 0.0;
		  current_table = new PTABLE(place);
		  current_saved_state = p;
		  olist.append(make_mark_object());
		}
#line 3021 "src/preproc/pic/pic.cpp"
    break;

  case 87: /* object_spec: '[' @11 element_list ']'  */
#line 717 "../src/preproc/pic/pic.ypp"
                {
		  current_position.x = (yyvsp[-2].pstate)->x;
		  current_position.y = (yyvsp[-2].pstate)->y;
		  current_direction = (yyvsp[-2].pstate)->dir;
		  (yyval.spec) = new object_spec(BLOCK_OBJECT);
		  olist.wrap_up_block(& (yyval.spec)->oblist);
		  (yyval.spec)->tbl = current_table;
		  current_table = (yyvsp[-2].pstate)->tbl;
		  current_saved_state = (yyvsp[-2].pstate)->prev;
		  delete (yyvsp[-2].pstate);
		}
#line 3037 "src/preproc/pic/pic.cpp"
    break;

  case 88: /* object_spec: object_spec HEIGHT expr  */
#line 729 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-2].spec);
		  (yyval.spec)->height = (yyvsp[0].x);
		  (yyval.spec)->flags |= HAS_HEIGHT;
		}
#line 3047 "src/preproc/pic/pic.cpp"
    break;

  case 89: /* object_spec: object_spec RADIUS expr  */
#line 735 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-2].spec);
		  (yyval.spec)->radius = (yyvsp[0].x);
		  (yyval.spec)->flags |= HAS_RADIUS;
		}
#line 3057 "src/preproc/pic/pic.cpp"
    break;

  case 90: /* object_spec: object_spec WIDTH expr  */
#line 741 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-2].spec);
		  (yyval.spec)->width = (yyvsp[0].x);
		  (yyval.spec)->flags |= HAS_WIDTH;
		}
#line 3067 "src/preproc/pic/pic.cpp"
    break;

  case 91: /* object_spec: object_spec DIAMETER expr  */
#line 747 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-2].spec);
		  (yyval.spec)->radius = (yyvsp[0].x)/2.0;
		  (yyval.spec)->flags |= HAS_RADIUS;
		}
#line 3077 "src/preproc/pic/pic.cpp"
    break;

  case 92: /* object_spec: object_spec expr  */
#line 753 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-1].spec);
		  (yyval.spec)->flags |= HAS_SEGMENT;
		  switch ((yyval.spec)->dir) {
		  case UP_DIRECTION:
		    (yyval.spec)->segment_pos.y += (yyvsp[0].x);
		    break;
		  case DOWN_DIRECTION:
		    (yyval.spec)->segment_pos.y -= (yyvsp[0].x);
		    break;
		  case RIGHT_DIRECTION:
		    (yyval.spec)->segment_pos.x += (yyvsp[0].x);
		    break;
		  case LEFT_DIRECTION:
		    (yyval.spec)->segment_pos.x -= (yyvsp[0].x);
		    break;
		  }
		}
#line 3100 "src/preproc/pic/pic.cpp"
    break;

  case 93: /* object_spec: object_spec UP  */
#line 772 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-1].spec);
		  (yyval.spec)->dir = UP_DIRECTION;
		  (yyval.spec)->flags |= HAS_SEGMENT;
		  (yyval.spec)->segment_pos.y += (yyval.spec)->segment_height;
		}
#line 3111 "src/preproc/pic/pic.cpp"
    break;

  case 94: /* object_spec: object_spec UP expr  */
#line 779 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-2].spec);
		  (yyval.spec)->dir = UP_DIRECTION;
		  (yyval.spec)->flags |= HAS_SEGMENT;
		  (yyval.spec)->segment_pos.y += (yyvsp[0].x);
		}
#line 3122 "src/preproc/pic/pic.cpp"
    break;

  case 95: /* object_spec: object_spec DOWN  */
#line 786 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-1].spec);
		  (yyval.spec)->dir = DOWN_DIRECTION;
		  (yyval.spec)->flags |= HAS_SEGMENT;
		  (yyval.spec)->segment_pos.y -= (yyval.spec)->segment_height;
		}
#line 3133 "src/preproc/pic/pic.cpp"
    break;

  case 96: /* object_spec: object_spec DOWN expr  */
#line 793 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-2].spec);
		  (yyval.spec)->dir = DOWN_DIRECTION;
		  (yyval.spec)->flags |= HAS_SEGMENT;
		  (yyval.spec)->segment_pos.y -= (yyvsp[0].x);
		}
#line 3144 "src/preproc/pic/pic.cpp"
    break;

  case 97: /* object_spec: object_spec RIGHT  */
#line 800 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-1].spec);
		  (yyval.spec)->dir = RIGHT_DIRECTION;
		  (yyval.spec)->flags |= HAS_SEGMENT;
		  (yyval.spec)->segment_pos.x += (yyval.spec)->segment_width;
		}
#line 3155 "src/preproc/pic/pic.cpp"
    break;

  case 98: /* object_spec: object_spec RIGHT expr  */
#line 807 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-2].spec);
		  (yyval.spec)->dir = RIGHT_DIRECTION;
		  (yyval.spec)->flags |= HAS_SEGMENT;
		  (yyval.spec)->segment_pos.x += (yyvsp[0].x);
		}
#line 3166 "src/preproc/pic/pic.cpp"
    break;

  case 99: /* object_spec: object_spec LEFT  */
#line 814 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-1].spec);
		  (yyval.spec)->dir = LEFT_DIRECTION;
		  (yyval.spec)->flags |= HAS_SEGMENT;
		  (yyval.spec)->segment_pos.x -= (yyval.spec)->segment_width;
		}
#line 3177 "src/preproc/pic/pic.cpp"
    break;

  case 100: /* object_spec: object_spec LEFT expr  */
#line 821 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-2].spec);
		  (yyval.spec)->dir = LEFT_DIRECTION;
		  (yyval.spec)->flags |= HAS_SEGMENT;
		  (yyval.spec)->segment_pos.x -= (yyvsp[0].x);
		}
#line 3188 "src/preproc/pic/pic.cpp"
    break;

  case 101: /* object_spec: object_spec FROM position  */
#line 828 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-2].spec);
		  (yyval.spec)->flags |= HAS_FROM;
		  (yyval.spec)->from.x = (yyvsp[0].pair).x;
		  (yyval.spec)->from.y = (yyvsp[0].pair).y;
		}
#line 3199 "src/preproc/pic/pic.cpp"
    break;

  case 102: /* object_spec: object_spec TO position  */
#line 835 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-2].spec);
		  if ((yyval.spec)->flags & HAS_SEGMENT)
		    (yyval.spec)->segment_list = new segment((yyval.spec)->segment_pos,
						   (yyval.spec)->segment_is_absolute,
						   (yyval.spec)->segment_list);
		  (yyval.spec)->flags |= HAS_SEGMENT;
		  (yyval.spec)->segment_pos.x = (yyvsp[0].pair).x;
		  (yyval.spec)->segment_pos.y = (yyvsp[0].pair).y;
		  (yyval.spec)->segment_is_absolute = 1;
		  (yyval.spec)->flags |= HAS_TO;
		  (yyval.spec)->to.x = (yyvsp[0].pair).x;
		  (yyval.spec)->to.y = (yyvsp[0].pair).y;
		}
#line 3218 "src/preproc/pic/pic.cpp"
    break;

  case 103: /* object_spec: object_spec AT position  */
#line 850 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-2].spec);
		  (yyval.spec)->flags |= HAS_AT;
		  (yyval.spec)->at.x = (yyvsp[0].pair).x;
		  (yyval.spec)->at.y = (yyvsp[0].pair).y;
		  if ((yyval.spec)->type != ARC_OBJECT) {
		    (yyval.spec)->flags |= HAS_FROM;
		    (yyval.spec)->from.x = (yyvsp[0].pair).x;
		    (yyval.spec)->from.y = (yyvsp[0].pair).y;
		  }
		}
#line 3234 "src/preproc/pic/pic.cpp"
    break;

  case 104: /* object_spec: object_spec WITH path  */
#line 862 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-2].spec);
		  (yyval.spec)->flags |= HAS_WITH;
		  (yyval.spec)->with = (yyvsp[0].pth);
		}
#line 3244 "src/preproc/pic/pic.cpp"
    break;

  case 105: /* object_spec: object_spec WITH position  */
#line 868 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-2].spec);
		  (yyval.spec)->flags |= HAS_WITH;
		  position pos;
		  pos.x = (yyvsp[0].pair).x;
		  pos.y = (yyvsp[0].pair).y;
		  (yyval.spec)->with = new path(pos);
		}
#line 3257 "src/preproc/pic/pic.cpp"
    break;

  case 106: /* object_spec: object_spec BY expr_pair  */
#line 877 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-2].spec);
		  (yyval.spec)->flags |= HAS_SEGMENT;
		  (yyval.spec)->segment_pos.x += (yyvsp[0].pair).x;
		  (yyval.spec)->segment_pos.y += (yyvsp[0].pair).y;
		}
#line 3268 "src/preproc/pic/pic.cpp"
    break;

  case 107: /* object_spec: object_spec THEN  */
#line 884 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-1].spec);
		  if (!((yyval.spec)->flags & HAS_SEGMENT))
		    switch ((yyval.spec)->dir) {
		    case UP_DIRECTION:
		      (yyval.spec)->segment_pos.y += (yyval.spec)->segment_width;
		      break;
		    case DOWN_DIRECTION:
		      (yyval.spec)->segment_pos.y -= (yyval.spec)->segment_width;
		      break;
		    case RIGHT_DIRECTION:
		      (yyval.spec)->segment_pos.x += (yyval.spec)->segment_width;
		      break;
		    case LEFT_DIRECTION:
		      (yyval.spec)->segment_pos.x -= (yyval.spec)->segment_width;
		      break;
		    }
		  (yyval.spec)->segment_list = new segment((yyval.spec)->segment_pos,
						 (yyval.spec)->segment_is_absolute,
						 (yyval.spec)->segment_list);
		  (yyval.spec)->flags &= ~HAS_SEGMENT;
		  (yyval.spec)->segment_pos.x = (yyval.spec)->segment_pos.y = 0.0;
		  (yyval.spec)->segment_is_absolute = 0;
		}
#line 3297 "src/preproc/pic/pic.cpp"
    break;

  case 108: /* object_spec: object_spec SOLID  */
#line 909 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-1].spec);	// nothing
		}
#line 3305 "src/preproc/pic/pic.cpp"
    break;

  case 109: /* object_spec: object_spec DOTTED  */
#line 913 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-1].spec);
		  (yyval.spec)->flags |= IS_DOTTED;
		  lookup_variable("dashwid", & (yyval.spec)->dash_width);
		}
#line 3315 "src/preproc/pic/pic.cpp"
    break;

  case 110: /* object_spec: object_spec DOTTED expr  */
#line 919 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-2].spec);
		  (yyval.spec)->flags |= IS_DOTTED;
		  (yyval.spec)->dash_width = (yyvsp[0].x);
		}
#line 3325 "src/preproc/pic/pic.cpp"
    break;

  case 111: /* object_spec: object_spec DASHED  */
#line 925 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-1].spec);
		  (yyval.spec)->flags |= IS_DASHED;
		  lookup_variable("dashwid", & (yyval.spec)->dash_width);
		}
#line 3335 "src/preproc/pic/pic.cpp"
    break;

  case 112: /* object_spec: object_spec DASHED expr  */
#line 931 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-2].spec);
		  (yyval.spec)->flags |= IS_DASHED;
		  (yyval.spec)->dash_width = (yyvsp[0].x);
		}
#line 3345 "src/preproc/pic/pic.cpp"
    break;

  case 113: /* object_spec: object_spec FILL  */
#line 937 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-1].spec);
		  (yyval.spec)->flags |= IS_DEFAULT_FILLED;
		}
#line 3354 "src/preproc/pic/pic.cpp"
    break;

  case 114: /* object_spec: object_spec FILL expr  */
#line 942 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-2].spec);
		  (yyval.spec)->flags |= IS_FILLED;
		  (yyval.spec)->fill = (yyvsp[0].x);
		}
#line 3364 "src/preproc/pic/pic.cpp"
    break;

  case 115: /* object_spec: object_spec XSLANTED expr  */
#line 948 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-2].spec);
		  (yyval.spec)->flags |= IS_XSLANTED;
		  (yyval.spec)->xslanted = (yyvsp[0].x);
		}
#line 3374 "src/preproc/pic/pic.cpp"
    break;

  case 116: /* object_spec: object_spec YSLANTED expr  */
#line 954 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-2].spec);
		  (yyval.spec)->flags |= IS_YSLANTED;
		  (yyval.spec)->yslanted = (yyvsp[0].x);
		}
#line 3384 "src/preproc/pic/pic.cpp"
    break;

  case 117: /* object_spec: object_spec SHADED text  */
#line 960 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-2].spec);
		  (yyval.spec)->flags |= (IS_SHADED | IS_FILLED);
		  (yyval.spec)->shaded = new char[strlen((yyvsp[0].lstr).str)+1];
		  strcpy((yyval.spec)->shaded, (yyvsp[0].lstr).str);
		}
#line 3395 "src/preproc/pic/pic.cpp"
    break;

  case 118: /* object_spec: object_spec COLORED text  */
#line 967 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-2].spec);
		  (yyval.spec)->flags |= (IS_SHADED | IS_OUTLINED | IS_FILLED);
		  (yyval.spec)->shaded = new char[strlen((yyvsp[0].lstr).str)+1];
		  strcpy((yyval.spec)->shaded, (yyvsp[0].lstr).str);
		  (yyval.spec)->outlined = new char[strlen((yyvsp[0].lstr).str)+1];
		  strcpy((yyval.spec)->outlined, (yyvsp[0].lstr).str);
		}
#line 3408 "src/preproc/pic/pic.cpp"
    break;

  case 119: /* object_spec: object_spec OUTLINED text  */
#line 976 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-2].spec);
		  (yyval.spec)->flags |= IS_OUTLINED;
		  (yyval.spec)->outlined = new char[strlen((yyvsp[0].lstr).str)+1];
		  strcpy((yyval.spec)->outlined, (yyvsp[0].lstr).str);
		}
#line 3419 "src/preproc/pic/pic.cpp"
    break;

  case 120: /* object_spec: object_spec CHOP  */
#line 983 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-1].spec);
		  // line chop chop means line chop 0 chop 0
		  if ((yyval.spec)->flags & IS_DEFAULT_CHOPPED) {
		    (yyval.spec)->flags |= IS_CHOPPED;
		    (yyval.spec)->flags &= ~IS_DEFAULT_CHOPPED;
		    (yyval.spec)->start_chop = (yyval.spec)->end_chop = 0.0;
		  }
		  else if ((yyval.spec)->flags & IS_CHOPPED) {
		    (yyval.spec)->end_chop = 0.0;
		  }
		  else {
		    (yyval.spec)->flags |= IS_DEFAULT_CHOPPED;
		  }
		}
#line 3439 "src/preproc/pic/pic.cpp"
    break;

  case 121: /* object_spec: object_spec CHOP expr  */
#line 999 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-2].spec);
		  if ((yyval.spec)->flags & IS_DEFAULT_CHOPPED) {
		    (yyval.spec)->flags |= IS_CHOPPED;
		    (yyval.spec)->flags &= ~IS_DEFAULT_CHOPPED;
		    (yyval.spec)->start_chop = 0.0;
		    (yyval.spec)->end_chop = (yyvsp[0].x);
		  }
		  else if ((yyval.spec)->flags & IS_CHOPPED) {
		    (yyval.spec)->end_chop = (yyvsp[0].x);
		  }
		  else {
		    (yyval.spec)->start_chop = (yyval.spec)->end_chop = (yyvsp[0].x);
		    (yyval.spec)->flags |= IS_CHOPPED;
		  }
		}
#line 3460 "src/preproc/pic/pic.cpp"
    break;

  case 122: /* object_spec: object_spec SAME  */
#line 1016 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-1].spec);
		  (yyval.spec)->flags |= IS_SAME;
		}
#line 3469 "src/preproc/pic/pic.cpp"
    break;

  case 123: /* object_spec: object_spec INVISIBLE  */
#line 1021 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-1].spec);
		  (yyval.spec)->flags |= IS_INVISIBLE;
		}
#line 3478 "src/preproc/pic/pic.cpp"
    break;

  case 124: /* object_spec: object_spec LEFT_ARROW_HEAD  */
#line 1026 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-1].spec);
		  (yyval.spec)->flags |= HAS_LEFT_ARROW_HEAD;
		}
#line 3487 "src/preproc/pic/pic.cpp"
    break;

  case 125: /* object_spec: object_spec RIGHT_ARROW_HEAD  */
#line 1031 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-1].spec);
		  (yyval.spec)->flags |= HAS_RIGHT_ARROW_HEAD;
		}
#line 3496 "src/preproc/pic/pic.cpp"
    break;

  case 126: /* object_spec: object_spec DOUBLE_ARROW_HEAD  */
#line 1036 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-1].spec);
		  (yyval.spec)->flags |= (HAS_LEFT_ARROW_HEAD|HAS_RIGHT_ARROW_HEAD);
		}
#line 3505 "src/preproc/pic/pic.cpp"
    break;

  case 127: /* object_spec: object_spec CW  */
#line 1041 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-1].spec);
		  (yyval.spec)->flags |= IS_CLOCKWISE;
		}
#line 3514 "src/preproc/pic/pic.cpp"
    break;

  case 128: /* object_spec: object_spec CCW  */
#line 1046 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-1].spec);
		  (yyval.spec)->flags &= ~IS_CLOCKWISE;
		}
#line 3523 "src/preproc/pic/pic.cpp"
    break;

  case 129: /* object_spec: object_spec text  */
#line 1051 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-1].spec);
		  text_item **p;
		  for (p = & (yyval.spec)->text; *p; p = &(*p)->next)
		    ;
		  *p = new text_item((yyvsp[0].lstr).str, (yyvsp[0].lstr).filename, (yyvsp[0].lstr).lineno);
		}
#line 3535 "src/preproc/pic/pic.cpp"
    break;

  case 130: /* object_spec: object_spec LJUST  */
#line 1059 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-1].spec);
		  if ((yyval.spec)->text) {
		    text_item *p;
		    for (p = (yyval.spec)->text; p->next; p = p->next)
		      ;
		    p->adj.h = LEFT_ADJUST;
		  }
		}
#line 3549 "src/preproc/pic/pic.cpp"
    break;

  case 131: /* object_spec: object_spec RJUST  */
#line 1069 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-1].spec);
		  if ((yyval.spec)->text) {
		    text_item *p;
		    for (p = (yyval.spec)->text; p->next; p = p->next)
		      ;
		    p->adj.h = RIGHT_ADJUST;
		  }
		}
#line 3563 "src/preproc/pic/pic.cpp"
    break;

  case 132: /* object_spec: object_spec ABOVE  */
#line 1079 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-1].spec);
		  if ((yyval.spec)->text) {
		    text_item *p;
		    for (p = (yyval.spec)->text; p->next; p = p->next)
		      ;
		    p->adj.v = ABOVE_ADJUST;
		  }
		}
#line 3577 "src/preproc/pic/pic.cpp"
    break;

  case 133: /* object_spec: object_spec BELOW  */
#line 1089 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-1].spec);
		  if ((yyval.spec)->text) {
		    text_item *p;
		    for (p = (yyval.spec)->text; p->next; p = p->next)
		      ;
		    p->adj.v = BELOW_ADJUST;
		  }
		}
#line 3591 "src/preproc/pic/pic.cpp"
    break;

  case 134: /* object_spec: object_spec THICKNESS expr  */
#line 1099 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-2].spec);
		  (yyval.spec)->flags |= HAS_THICKNESS;
		  (yyval.spec)->thickness = (yyvsp[0].x);
		}
#line 3601 "src/preproc/pic/pic.cpp"
    break;

  case 135: /* object_spec: object_spec ALIGNED  */
#line 1105 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.spec) = (yyvsp[-1].spec);
		  (yyval.spec)->flags |= IS_ALIGNED;
		}
#line 3610 "src/preproc/pic/pic.cpp"
    break;

  case 136: /* text: TEXT  */
#line 1113 "../src/preproc/pic/pic.ypp"
                { (yyval.lstr) = (yyvsp[0].lstr); }
#line 3616 "src/preproc/pic/pic.cpp"
    break;

  case 137: /* text: SPRINTF '(' TEXT sprintf_args ')'  */
#line 1115 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.lstr).filename = (yyvsp[-2].lstr).filename;
		  (yyval.lstr).lineno = (yyvsp[-2].lstr).lineno;
		  (yyval.lstr).str = do_sprintf((yyvsp[-2].lstr).str, (yyvsp[-1].dv).v, (yyvsp[-1].dv).nv);
		  delete[] (yyvsp[-1].dv).v;
		  free((yyvsp[-2].lstr).str);
		}
#line 3628 "src/preproc/pic/pic.cpp"
    break;

  case 138: /* sprintf_args: %empty  */
#line 1126 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.dv).v = 0;
		  (yyval.dv).nv = 0;
		  (yyval.dv).maxv = 0;
		}
#line 3638 "src/preproc/pic/pic.cpp"
    break;

  case 139: /* sprintf_args: sprintf_args ',' expr  */
#line 1132 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.dv) = (yyvsp[-2].dv);
		  if ((yyval.dv).nv >= (yyval.dv).maxv) {
		    if ((yyval.dv).nv == 0) {
		      (yyval.dv).v = new double[4];
		      (yyval.dv).maxv = 4;
		    }
		    else {
		      double *oldv = (yyval.dv).v;
		      (yyval.dv).maxv *= 2;
#if 0
		      (yyval.dv).v = new double[(yyval.dv).maxv];
		      memcpy((yyval.dv).v, oldv, (yyval.dv).nv*sizeof(double));
#else
		      // workaround for bug in Compaq C++ V6.5-033
		      // for Compaq Tru64 UNIX V5.1A (Rev. 1885)
		      double *foo = new double[(yyval.dv).maxv];
		      memcpy(foo, oldv, (yyval.dv).nv*sizeof(double));
		      (yyval.dv).v = foo;
#endif
		      delete[] oldv;
		    }
		  }
		  (yyval.dv).v[(yyval.dv).nv] = (yyvsp[0].x);
		  (yyval.dv).nv += 1;
		}
#line 3669 "src/preproc/pic/pic.cpp"
    break;

  case 140: /* position: position_not_place  */
#line 1162 "../src/preproc/pic/pic.ypp"
                { (yyval.pair) = (yyvsp[0].pair); }
#line 3675 "src/preproc/pic/pic.cpp"
    break;

  case 141: /* position: place  */
#line 1164 "../src/preproc/pic/pic.ypp"
                {
		  position pos = (yyvsp[0].pl);
		  (yyval.pair).x = pos.x;
		  (yyval.pair).y = pos.y;
		}
#line 3685 "src/preproc/pic/pic.cpp"
    break;

  case 142: /* position: '(' place ')'  */
#line 1170 "../src/preproc/pic/pic.ypp"
                {
		  position pos = (yyvsp[-1].pl);
		  (yyval.pair).x = pos.x;
		  (yyval.pair).y = pos.y;
		}
#line 3695 "src/preproc/pic/pic.cpp"
    break;

  case 143: /* position_not_place: expr_pair  */
#line 1179 "../src/preproc/pic/pic.ypp"
                { (yyval.pair) = (yyvsp[0].pair); }
#line 3701 "src/preproc/pic/pic.cpp"
    break;

  case 144: /* position_not_place: position '+' expr_pair  */
#line 1181 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.pair).x = (yyvsp[-2].pair).x + (yyvsp[0].pair).x;
		  (yyval.pair).y = (yyvsp[-2].pair).y + (yyvsp[0].pair).y;
		}
#line 3710 "src/preproc/pic/pic.cpp"
    break;

  case 145: /* position_not_place: '(' position '+' expr_pair ')'  */
#line 1186 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.pair).x = (yyvsp[-3].pair).x + (yyvsp[-1].pair).x;
		  (yyval.pair).y = (yyvsp[-3].pair).y + (yyvsp[-1].pair).y;
		}
#line 3719 "src/preproc/pic/pic.cpp"
    break;

  case 146: /* position_not_place: position '-' expr_pair  */
#line 1191 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.pair).x = (yyvsp[-2].pair).x - (yyvsp[0].pair).x;
		  (yyval.pair).y = (yyvsp[-2].pair).y - (yyvsp[0].pair).y;
		}
#line 3728 "src/preproc/pic/pic.cpp"
    break;

  case 147: /* position_not_place: '(' position '-' expr_pair ')'  */
#line 1196 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.pair).x = (yyvsp[-3].pair).x - (yyvsp[-1].pair).x;
		  (yyval.pair).y = (yyvsp[-3].pair).y - (yyvsp[-1].pair).y;
		}
#line 3737 "src/preproc/pic/pic.cpp"
    break;

  case 148: /* position_not_place: '(' position ',' position ')'  */
#line 1201 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.pair).x = (yyvsp[-3].pair).x;
		  (yyval.pair).y = (yyvsp[-1].pair).y;
		}
#line 3746 "src/preproc/pic/pic.cpp"
    break;

  case 149: /* position_not_place: expr between position AND position  */
#line 1206 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.pair).x = (1.0 - (yyvsp[-4].x))*(yyvsp[-2].pair).x + (yyvsp[-4].x)*(yyvsp[0].pair).x;
		  (yyval.pair).y = (1.0 - (yyvsp[-4].x))*(yyvsp[-2].pair).y + (yyvsp[-4].x)*(yyvsp[0].pair).y;
		}
#line 3755 "src/preproc/pic/pic.cpp"
    break;

  case 150: /* position_not_place: '(' expr between position AND position ')'  */
#line 1211 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.pair).x = (1.0 - (yyvsp[-5].x))*(yyvsp[-3].pair).x + (yyvsp[-5].x)*(yyvsp[-1].pair).x;
		  (yyval.pair).y = (1.0 - (yyvsp[-5].x))*(yyvsp[-3].pair).y + (yyvsp[-5].x)*(yyvsp[-1].pair).y;
		}
#line 3764 "src/preproc/pic/pic.cpp"
    break;

  case 151: /* position_not_place: expr_not_lower_than '<' position ',' position '>'  */
#line 1217 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.pair).x = (1.0 - (yyvsp[-5].x))*(yyvsp[-3].pair).x + (yyvsp[-5].x)*(yyvsp[-1].pair).x;
		  (yyval.pair).y = (1.0 - (yyvsp[-5].x))*(yyvsp[-3].pair).y + (yyvsp[-5].x)*(yyvsp[-1].pair).y;
		}
#line 3773 "src/preproc/pic/pic.cpp"
    break;

  case 152: /* position_not_place: '(' expr_not_lower_than '<' position ',' position '>' ')'  */
#line 1222 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.pair).x = (1.0 - (yyvsp[-6].x))*(yyvsp[-4].pair).x + (yyvsp[-6].x)*(yyvsp[-2].pair).x;
		  (yyval.pair).y = (1.0 - (yyvsp[-6].x))*(yyvsp[-4].pair).y + (yyvsp[-6].x)*(yyvsp[-2].pair).y;
		}
#line 3782 "src/preproc/pic/pic.cpp"
    break;

  case 155: /* expr_pair: expr ',' expr  */
#line 1235 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.pair).x = (yyvsp[-2].x);
		  (yyval.pair).y = (yyvsp[0].x);
		}
#line 3791 "src/preproc/pic/pic.cpp"
    break;

  case 156: /* expr_pair: '(' expr_pair ')'  */
#line 1240 "../src/preproc/pic/pic.ypp"
                { (yyval.pair) = (yyvsp[-1].pair); }
#line 3797 "src/preproc/pic/pic.cpp"
    break;

  case 157: /* place: label  */
#line 1246 "../src/preproc/pic/pic.ypp"
                { (yyval.pl) = (yyvsp[0].pl); }
#line 3803 "src/preproc/pic/pic.cpp"
    break;

  case 158: /* place: label corner  */
#line 1248 "../src/preproc/pic/pic.ypp"
                {
		  path pth((yyvsp[0].crn));
		  if (!pth.follow((yyvsp[-1].pl), & (yyval.pl)))
		    YYABORT;
		}
#line 3813 "src/preproc/pic/pic.cpp"
    break;

  case 159: /* place: corner label  */
#line 1254 "../src/preproc/pic/pic.ypp"
                {
		  path pth((yyvsp[-1].crn));
		  if (!pth.follow((yyvsp[0].pl), & (yyval.pl)))
		    YYABORT;
		}
#line 3823 "src/preproc/pic/pic.cpp"
    break;

  case 160: /* place: corner OF label  */
#line 1260 "../src/preproc/pic/pic.ypp"
                {
		  path pth((yyvsp[-2].crn));
		  if (!pth.follow((yyvsp[0].pl), & (yyval.pl)))
		    YYABORT;
		}
#line 3833 "src/preproc/pic/pic.cpp"
    break;

  case 161: /* place: HERE  */
#line 1266 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.pl).x = current_position.x;
		  (yyval.pl).y = current_position.y;
		  (yyval.pl).obj = 0;
		}
#line 3843 "src/preproc/pic/pic.cpp"
    break;

  case 162: /* label: LABEL  */
#line 1275 "../src/preproc/pic/pic.ypp"
                {
		  place *p = lookup_label((yyvsp[0].str));
		  if (!p) {
		    lex_error("there is no place '%1'", (yyvsp[0].str));
		    YYABORT;
		  }
		  (yyval.pl) = *p;
		  free((yyvsp[0].str));
		}
#line 3857 "src/preproc/pic/pic.cpp"
    break;

  case 163: /* label: nth_primitive  */
#line 1285 "../src/preproc/pic/pic.ypp"
                { (yyval.pl).obj = (yyvsp[0].obj); }
#line 3863 "src/preproc/pic/pic.cpp"
    break;

  case 164: /* label: label '.' LABEL  */
#line 1287 "../src/preproc/pic/pic.ypp"
                {
		  path pth((yyvsp[0].str));
		  if (!pth.follow((yyvsp[-2].pl), & (yyval.pl)))
		    YYABORT;
		}
#line 3873 "src/preproc/pic/pic.cpp"
    break;

  case 165: /* ordinal: ORDINAL  */
#line 1296 "../src/preproc/pic/pic.ypp"
                { (yyval.n) = (yyvsp[0].n); }
#line 3879 "src/preproc/pic/pic.cpp"
    break;

  case 166: /* ordinal: '`' any_expr TH  */
#line 1298 "../src/preproc/pic/pic.ypp"
                {
		  // XXX Check for overflow (and non-integers?).
		  (yyval.n) = (int)(yyvsp[-1].x);
		}
#line 3888 "src/preproc/pic/pic.cpp"
    break;

  case 167: /* optional_ordinal_last: LAST  */
#line 1306 "../src/preproc/pic/pic.ypp"
                { (yyval.n) = 1; }
#line 3894 "src/preproc/pic/pic.cpp"
    break;

  case 168: /* optional_ordinal_last: ordinal LAST  */
#line 1308 "../src/preproc/pic/pic.ypp"
                { (yyval.n) = (yyvsp[-1].n); }
#line 3900 "src/preproc/pic/pic.cpp"
    break;

  case 169: /* nth_primitive: ordinal object_type  */
#line 1313 "../src/preproc/pic/pic.ypp"
                {
		  int count = 0;
		  object *p;
		  for (p = olist.head; p != 0; p = p->next)
		    if (p->type() == (yyvsp[0].obtype) && ++count == (yyvsp[-1].n)) {
		      (yyval.obj) = p;
		      break;
		    }
		  if (p == 0) {
		    lex_error("there is no %1%2 %3", (yyvsp[-1].n), ordinal_postfix((yyvsp[-1].n)),
			      object_type_name((yyvsp[0].obtype)));
		    YYABORT;
		  }
		}
#line 3919 "src/preproc/pic/pic.cpp"
    break;

  case 170: /* nth_primitive: optional_ordinal_last object_type  */
#line 1328 "../src/preproc/pic/pic.ypp"
                {
		  int count = 0;
		  object *p;
		  for (p = olist.tail; p != 0; p = p->prev)
		    if (p->type() == (yyvsp[0].obtype) && ++count == (yyvsp[-1].n)) {
		      (yyval.obj) = p;
		      break;
		    }
		  if (p == 0) {
		    lex_error("there is no %1%2 last %3", (yyvsp[-1].n),
			      ordinal_postfix((yyvsp[-1].n)), object_type_name((yyvsp[0].obtype)));
		    YYABORT;
		  }
		}
#line 3938 "src/preproc/pic/pic.cpp"
    break;

  case 171: /* object_type: BOX  */
#line 1346 "../src/preproc/pic/pic.ypp"
                { (yyval.obtype) = BOX_OBJECT; }
#line 3944 "src/preproc/pic/pic.cpp"
    break;

  case 172: /* object_type: CIRCLE  */
#line 1348 "../src/preproc/pic/pic.ypp"
                { (yyval.obtype) = CIRCLE_OBJECT; }
#line 3950 "src/preproc/pic/pic.cpp"
    break;

  case 173: /* object_type: ELLIPSE  */
#line 1350 "../src/preproc/pic/pic.ypp"
                { (yyval.obtype) = ELLIPSE_OBJECT; }
#line 3956 "src/preproc/pic/pic.cpp"
    break;

  case 174: /* object_type: ARC  */
#line 1352 "../src/preproc/pic/pic.ypp"
                { (yyval.obtype) = ARC_OBJECT; }
#line 3962 "src/preproc/pic/pic.cpp"
    break;

  case 175: /* object_type: LINE  */
#line 1354 "../src/preproc/pic/pic.ypp"
                { (yyval.obtype) = LINE_OBJECT; }
#line 3968 "src/preproc/pic/pic.cpp"
    break;

  case 176: /* object_type: ARROW  */
#line 1356 "../src/preproc/pic/pic.ypp"
                { (yyval.obtype) = ARROW_OBJECT; }
#line 3974 "src/preproc/pic/pic.cpp"
    break;

  case 177: /* object_type: SPLINE  */
#line 1358 "../src/preproc/pic/pic.ypp"
                { (yyval.obtype) = SPLINE_OBJECT; }
#line 3980 "src/preproc/pic/pic.cpp"
    break;

  case 178: /* object_type: '[' ']'  */
#line 1360 "../src/preproc/pic/pic.ypp"
                { (yyval.obtype) = BLOCK_OBJECT; }
#line 3986 "src/preproc/pic/pic.cpp"
    break;

  case 179: /* object_type: TEXT  */
#line 1362 "../src/preproc/pic/pic.ypp"
                { (yyval.obtype) = TEXT_OBJECT; }
#line 3992 "src/preproc/pic/pic.cpp"
    break;

  case 180: /* label_path: '.' LABEL  */
#line 1367 "../src/preproc/pic/pic.ypp"
                { (yyval.pth) = new path((yyvsp[0].str)); }
#line 3998 "src/preproc/pic/pic.cpp"
    break;

  case 181: /* label_path: label_path '.' LABEL  */
#line 1369 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.pth) = (yyvsp[-2].pth);
		  (yyval.pth)->append((yyvsp[0].str));
		}
#line 4007 "src/preproc/pic/pic.cpp"
    break;

  case 182: /* relative_path: corner  */
#line 1377 "../src/preproc/pic/pic.ypp"
                { (yyval.pth) = new path((yyvsp[0].crn)); }
#line 4013 "src/preproc/pic/pic.cpp"
    break;

  case 183: /* relative_path: label_path  */
#line 1381 "../src/preproc/pic/pic.ypp"
                { (yyval.pth) = (yyvsp[0].pth); }
#line 4019 "src/preproc/pic/pic.cpp"
    break;

  case 184: /* relative_path: label_path corner  */
#line 1383 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.pth) = (yyvsp[-1].pth);
		  (yyval.pth)->append((yyvsp[0].crn));
		}
#line 4028 "src/preproc/pic/pic.cpp"
    break;

  case 185: /* path: relative_path  */
#line 1391 "../src/preproc/pic/pic.ypp"
                { (yyval.pth) = (yyvsp[0].pth); }
#line 4034 "src/preproc/pic/pic.cpp"
    break;

  case 186: /* path: '(' relative_path ',' relative_path ')'  */
#line 1393 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.pth) = (yyvsp[-3].pth);
		  (yyval.pth)->set_ypath((yyvsp[-1].pth));
		}
#line 4043 "src/preproc/pic/pic.cpp"
    break;

  case 187: /* path: ORDINAL LAST object_type relative_path  */
#line 1399 "../src/preproc/pic/pic.ypp"
                {
		  lex_warning("'%1%2 last %3' in 'with' argument ignored",
			      (yyvsp[-3].n), ordinal_postfix((yyvsp[-3].n)), object_type_name((yyvsp[-1].obtype)));
		  (yyval.pth) = (yyvsp[0].pth);
		}
#line 4053 "src/preproc/pic/pic.cpp"
    break;

  case 188: /* path: LAST object_type relative_path  */
#line 1405 "../src/preproc/pic/pic.ypp"
                {
		  lex_warning("'last %1' in 'with' argument ignored",
			      object_type_name((yyvsp[-1].obtype)));
		  (yyval.pth) = (yyvsp[0].pth);
		}
#line 4063 "src/preproc/pic/pic.cpp"
    break;

  case 189: /* path: ORDINAL object_type relative_path  */
#line 1411 "../src/preproc/pic/pic.ypp"
                {
		  lex_warning("'%1%2 %3' in 'with' argument ignored",
			      (yyvsp[-2].n), ordinal_postfix((yyvsp[-2].n)), object_type_name((yyvsp[-1].obtype)));
		  (yyval.pth) = (yyvsp[0].pth);
		}
#line 4073 "src/preproc/pic/pic.cpp"
    break;

  case 190: /* path: LABEL relative_path  */
#line 1417 "../src/preproc/pic/pic.ypp"
                {
		  lex_warning("initial '%1' in 'with' argument ignored", (yyvsp[-1].str));
		  delete[] (yyvsp[-1].str);
		  (yyval.pth) = (yyvsp[0].pth);
		}
#line 4083 "src/preproc/pic/pic.cpp"
    break;

  case 191: /* corner: DOT_N  */
#line 1426 "../src/preproc/pic/pic.ypp"
                { (yyval.crn) = &object::north; }
#line 4089 "src/preproc/pic/pic.cpp"
    break;

  case 192: /* corner: DOT_E  */
#line 1428 "../src/preproc/pic/pic.ypp"
                { (yyval.crn) = &object::east; }
#line 4095 "src/preproc/pic/pic.cpp"
    break;

  case 193: /* corner: DOT_W  */
#line 1430 "../src/preproc/pic/pic.ypp"
                { (yyval.crn) = &object::west; }
#line 4101 "src/preproc/pic/pic.cpp"
    break;

  case 194: /* corner: DOT_S  */
#line 1432 "../src/preproc/pic/pic.ypp"
                { (yyval.crn) = &object::south; }
#line 4107 "src/preproc/pic/pic.cpp"
    break;

  case 195: /* corner: DOT_NE  */
#line 1434 "../src/preproc/pic/pic.ypp"
                { (yyval.crn) = &object::north_east; }
#line 4113 "src/preproc/pic/pic.cpp"
    break;

  case 196: /* corner: DOT_SE  */
#line 1436 "../src/preproc/pic/pic.ypp"
                { (yyval.crn) = &object:: south_east; }
#line 4119 "src/preproc/pic/pic.cpp"
    break;

  case 197: /* corner: DOT_NW  */
#line 1438 "../src/preproc/pic/pic.ypp"
                { (yyval.crn) = &object::north_west; }
#line 4125 "src/preproc/pic/pic.cpp"
    break;

  case 198: /* corner: DOT_SW  */
#line 1440 "../src/preproc/pic/pic.ypp"
                { (yyval.crn) = &object::south_west; }
#line 4131 "src/preproc/pic/pic.cpp"
    break;

  case 199: /* corner: DOT_C  */
#line 1442 "../src/preproc/pic/pic.ypp"
                { (yyval.crn) = &object::center; }
#line 4137 "src/preproc/pic/pic.cpp"
    break;

  case 200: /* corner: DOT_START  */
#line 1444 "../src/preproc/pic/pic.ypp"
                { (yyval.crn) = &object::start; }
#line 4143 "src/preproc/pic/pic.cpp"
    break;

  case 201: /* corner: DOT_END  */
#line 1446 "../src/preproc/pic/pic.ypp"
                { (yyval.crn) = &object::end; }
#line 4149 "src/preproc/pic/pic.cpp"
    break;

  case 202: /* corner: TOP  */
#line 1448 "../src/preproc/pic/pic.ypp"
                { (yyval.crn) = &object::north; }
#line 4155 "src/preproc/pic/pic.cpp"
    break;

  case 203: /* corner: BOTTOM  */
#line 1450 "../src/preproc/pic/pic.ypp"
                { (yyval.crn) = &object::south; }
#line 4161 "src/preproc/pic/pic.cpp"
    break;

  case 204: /* corner: LEFT  */
#line 1452 "../src/preproc/pic/pic.ypp"
                { (yyval.crn) = &object::west; }
#line 4167 "src/preproc/pic/pic.cpp"
    break;

  case 205: /* corner: RIGHT  */
#line 1454 "../src/preproc/pic/pic.ypp"
                { (yyval.crn) = &object::east; }
#line 4173 "src/preproc/pic/pic.cpp"
    break;

  case 206: /* corner: UPPER LEFT  */
#line 1456 "../src/preproc/pic/pic.ypp"
                { (yyval.crn) = &object::north_west; }
#line 4179 "src/preproc/pic/pic.cpp"
    break;

  case 207: /* corner: LOWER LEFT  */
#line 1458 "../src/preproc/pic/pic.ypp"
                { (yyval.crn) = &object::south_west; }
#line 4185 "src/preproc/pic/pic.cpp"
    break;

  case 208: /* corner: UPPER RIGHT  */
#line 1460 "../src/preproc/pic/pic.ypp"
                { (yyval.crn) = &object::north_east; }
#line 4191 "src/preproc/pic/pic.cpp"
    break;

  case 209: /* corner: LOWER RIGHT  */
#line 1462 "../src/preproc/pic/pic.ypp"
                { (yyval.crn) = &object::south_east; }
#line 4197 "src/preproc/pic/pic.cpp"
    break;

  case 210: /* corner: LEFT_CORNER  */
#line 1464 "../src/preproc/pic/pic.ypp"
                { (yyval.crn) = &object::west; }
#line 4203 "src/preproc/pic/pic.cpp"
    break;

  case 211: /* corner: RIGHT_CORNER  */
#line 1466 "../src/preproc/pic/pic.ypp"
                { (yyval.crn) = &object::east; }
#line 4209 "src/preproc/pic/pic.cpp"
    break;

  case 212: /* corner: UPPER LEFT_CORNER  */
#line 1468 "../src/preproc/pic/pic.ypp"
                { (yyval.crn) = &object::north_west; }
#line 4215 "src/preproc/pic/pic.cpp"
    break;

  case 213: /* corner: LOWER LEFT_CORNER  */
#line 1470 "../src/preproc/pic/pic.ypp"
                { (yyval.crn) = &object::south_west; }
#line 4221 "src/preproc/pic/pic.cpp"
    break;

  case 214: /* corner: UPPER RIGHT_CORNER  */
#line 1472 "../src/preproc/pic/pic.ypp"
                { (yyval.crn) = &object::north_east; }
#line 4227 "src/preproc/pic/pic.cpp"
    break;

  case 215: /* corner: LOWER RIGHT_CORNER  */
#line 1474 "../src/preproc/pic/pic.ypp"
                { (yyval.crn) = &object::south_east; }
#line 4233 "src/preproc/pic/pic.cpp"
    break;

  case 216: /* corner: NORTH  */
#line 1476 "../src/preproc/pic/pic.ypp"
                { (yyval.crn) = &object::north; }
#line 4239 "src/preproc/pic/pic.cpp"
    break;

  case 217: /* corner: SOUTH  */
#line 1478 "../src/preproc/pic/pic.ypp"
                { (yyval.crn) = &object::south; }
#line 4245 "src/preproc/pic/pic.cpp"
    break;

  case 218: /* corner: EAST  */
#line 1480 "../src/preproc/pic/pic.ypp"
                { (yyval.crn) = &object::east; }
#line 4251 "src/preproc/pic/pic.cpp"
    break;

  case 219: /* corner: WEST  */
#line 1482 "../src/preproc/pic/pic.ypp"
                { (yyval.crn) = &object::west; }
#line 4257 "src/preproc/pic/pic.cpp"
    break;

  case 220: /* corner: CENTER  */
#line 1484 "../src/preproc/pic/pic.ypp"
                { (yyval.crn) = &object::center; }
#line 4263 "src/preproc/pic/pic.cpp"
    break;

  case 221: /* corner: START  */
#line 1486 "../src/preproc/pic/pic.ypp"
                { (yyval.crn) = &object::start; }
#line 4269 "src/preproc/pic/pic.cpp"
    break;

  case 222: /* corner: END  */
#line 1488 "../src/preproc/pic/pic.ypp"
                { (yyval.crn) = &object::end; }
#line 4275 "src/preproc/pic/pic.cpp"
    break;

  case 223: /* expr: expr_lower_than  */
#line 1493 "../src/preproc/pic/pic.ypp"
                { (yyval.x) = (yyvsp[0].x); }
#line 4281 "src/preproc/pic/pic.cpp"
    break;

  case 224: /* expr: expr_not_lower_than  */
#line 1495 "../src/preproc/pic/pic.ypp"
                { (yyval.x) = (yyvsp[0].x); }
#line 4287 "src/preproc/pic/pic.cpp"
    break;

  case 225: /* expr_lower_than: expr '<' expr  */
#line 1500 "../src/preproc/pic/pic.ypp"
                { (yyval.x) = ((yyvsp[-2].x) < (yyvsp[0].x)); }
#line 4293 "src/preproc/pic/pic.cpp"
    break;

  case 226: /* expr_not_lower_than: VARIABLE  */
#line 1505 "../src/preproc/pic/pic.ypp"
                {
		  if (!lookup_variable((yyvsp[0].str), & (yyval.x))) {
		    lex_error("there is no variable '%1'", (yyvsp[0].str));
		    YYABORT;
		  }
		  free((yyvsp[0].str));
		}
#line 4305 "src/preproc/pic/pic.cpp"
    break;

  case 227: /* expr_not_lower_than: NUMBER  */
#line 1513 "../src/preproc/pic/pic.ypp"
                { (yyval.x) = (yyvsp[0].x); }
#line 4311 "src/preproc/pic/pic.cpp"
    break;

  case 228: /* expr_not_lower_than: place DOT_X  */
#line 1515 "../src/preproc/pic/pic.ypp"
                {
		  if ((yyvsp[-1].pl).obj != 0)
		    (yyval.x) = (yyvsp[-1].pl).obj->origin().x;
		  else
		    (yyval.x) = (yyvsp[-1].pl).x;
		}
#line 4322 "src/preproc/pic/pic.cpp"
    break;

  case 229: /* expr_not_lower_than: place DOT_Y  */
#line 1522 "../src/preproc/pic/pic.ypp"
                {
		  if ((yyvsp[-1].pl).obj != 0)
		    (yyval.x) = (yyvsp[-1].pl).obj->origin().y;
		  else
		    (yyval.x) = (yyvsp[-1].pl).y;
		}
#line 4333 "src/preproc/pic/pic.cpp"
    break;

  case 230: /* expr_not_lower_than: place DOT_HT  */
#line 1529 "../src/preproc/pic/pic.ypp"
                {
		  if ((yyvsp[-1].pl).obj != 0)
		    (yyval.x) = (yyvsp[-1].pl).obj->height();
		  else
		    (yyval.x) = 0.0;
		}
#line 4344 "src/preproc/pic/pic.cpp"
    break;

  case 231: /* expr_not_lower_than: place DOT_WID  */
#line 1536 "../src/preproc/pic/pic.ypp"
                {
		  if ((yyvsp[-1].pl).obj != 0)
		    (yyval.x) = (yyvsp[-1].pl).obj->width();
		  else
		    (yyval.x) = 0.0;
		}
#line 4355 "src/preproc/pic/pic.cpp"
    break;

  case 232: /* expr_not_lower_than: place DOT_RAD  */
#line 1543 "../src/preproc/pic/pic.ypp"
                {
		  if ((yyvsp[-1].pl).obj != 0)
		    (yyval.x) = (yyvsp[-1].pl).obj->radius();
		  else
		    (yyval.x) = 0.0;
		}
#line 4366 "src/preproc/pic/pic.cpp"
    break;

  case 233: /* expr_not_lower_than: expr '+' expr  */
#line 1550 "../src/preproc/pic/pic.ypp"
                { (yyval.x) = (yyvsp[-2].x) + (yyvsp[0].x); }
#line 4372 "src/preproc/pic/pic.cpp"
    break;

  case 234: /* expr_not_lower_than: expr '-' expr  */
#line 1552 "../src/preproc/pic/pic.ypp"
                { (yyval.x) = (yyvsp[-2].x) - (yyvsp[0].x); }
#line 4378 "src/preproc/pic/pic.cpp"
    break;

  case 235: /* expr_not_lower_than: expr '*' expr  */
#line 1554 "../src/preproc/pic/pic.ypp"
                { (yyval.x) = (yyvsp[-2].x) * (yyvsp[0].x); }
#line 4384 "src/preproc/pic/pic.cpp"
    break;

  case 236: /* expr_not_lower_than: expr '/' expr  */
#line 1556 "../src/preproc/pic/pic.ypp"
                {
		  if ((yyvsp[0].x) == 0.0) {
		    lex_error("division by zero");
		    YYABORT;
		  }
		  (yyval.x) = (yyvsp[-2].x)/(yyvsp[0].x);
		}
#line 4396 "src/preproc/pic/pic.cpp"
    break;

  case 237: /* expr_not_lower_than: expr '%' expr  */
#line 1564 "../src/preproc/pic/pic.ypp"
                {
		  if ((yyvsp[0].x) == 0.0) {
		    lex_error("modulus by zero");
		    YYABORT;
		  }
		  (yyval.x) = fmod((yyvsp[-2].x), (yyvsp[0].x));
		}
#line 4408 "src/preproc/pic/pic.cpp"
    break;

  case 238: /* expr_not_lower_than: expr '^' expr  */
#line 1572 "../src/preproc/pic/pic.ypp"
                {
		  errno = 0;
		  (yyval.x) = pow((yyvsp[-2].x), (yyvsp[0].x));
		  if (errno == EDOM) {
		    lex_error("arguments to '^' operator out of domain");
		    YYABORT;
		  }
		  if (errno == ERANGE) {
		    lex_error("result of '^' operator out of range");
		    YYABORT;
		  }
		}
#line 4425 "src/preproc/pic/pic.cpp"
    break;

  case 239: /* expr_not_lower_than: '-' expr  */
#line 1585 "../src/preproc/pic/pic.ypp"
                { (yyval.x) = -(yyvsp[0].x); }
#line 4431 "src/preproc/pic/pic.cpp"
    break;

  case 240: /* expr_not_lower_than: '(' any_expr ')'  */
#line 1587 "../src/preproc/pic/pic.ypp"
                { (yyval.x) = (yyvsp[-1].x); }
#line 4437 "src/preproc/pic/pic.cpp"
    break;

  case 241: /* expr_not_lower_than: SIN '(' any_expr ')'  */
#line 1589 "../src/preproc/pic/pic.ypp"
                {
		  errno = 0;
		  (yyval.x) = sin((yyvsp[-1].x));
		  if (errno == ERANGE) {
		    lex_error("sin result out of range");
		    YYABORT;
		  }
		}
#line 4450 "src/preproc/pic/pic.cpp"
    break;

  case 242: /* expr_not_lower_than: COS '(' any_expr ')'  */
#line 1598 "../src/preproc/pic/pic.ypp"
                {
		  errno = 0;
		  (yyval.x) = cos((yyvsp[-1].x));
		  if (errno == ERANGE) {
		    lex_error("cos result out of range");
		    YYABORT;
		  }
		}
#line 4463 "src/preproc/pic/pic.cpp"
    break;

  case 243: /* expr_not_lower_than: ATAN2 '(' any_expr ',' any_expr ')'  */
#line 1607 "../src/preproc/pic/pic.ypp"
                {
		  errno = 0;
		  (yyval.x) = atan2((yyvsp[-3].x), (yyvsp[-1].x));
		  if (errno == EDOM) {
		    lex_error("atan2 argument out of domain");
		    YYABORT;
		  }
		  if (errno == ERANGE) {
		    lex_error("atan2 result out of range");
		    YYABORT;
		  }
		}
#line 4480 "src/preproc/pic/pic.cpp"
    break;

  case 244: /* expr_not_lower_than: LOG '(' any_expr ')'  */
#line 1620 "../src/preproc/pic/pic.ypp"
                {
		  errno = 0;
		  (yyval.x) = log10((yyvsp[-1].x));
		  if (errno == ERANGE) {
		    lex_error("log result out of range");
		    YYABORT;
		  }
		}
#line 4493 "src/preproc/pic/pic.cpp"
    break;

  case 245: /* expr_not_lower_than: EXP '(' any_expr ')'  */
#line 1629 "../src/preproc/pic/pic.ypp"
                {
		  errno = 0;
		  (yyval.x) = pow(10.0, (yyvsp[-1].x));
		  if (errno == ERANGE) {
		    lex_error("exp result out of range");
		    YYABORT;
		  }
		}
#line 4506 "src/preproc/pic/pic.cpp"
    break;

  case 246: /* expr_not_lower_than: SQRT '(' any_expr ')'  */
#line 1638 "../src/preproc/pic/pic.ypp"
                {
		  errno = 0;
		  (yyval.x) = sqrt((yyvsp[-1].x));
		  if (errno == EDOM) {
		    lex_error("sqrt argument out of domain");
		    YYABORT;
		  }
		}
#line 4519 "src/preproc/pic/pic.cpp"
    break;

  case 247: /* expr_not_lower_than: K_MAX '(' any_expr ',' any_expr ')'  */
#line 1647 "../src/preproc/pic/pic.ypp"
                { (yyval.x) = (yyvsp[-3].x) > (yyvsp[-1].x) ? (yyvsp[-3].x) : (yyvsp[-1].x); }
#line 4525 "src/preproc/pic/pic.cpp"
    break;

  case 248: /* expr_not_lower_than: K_MIN '(' any_expr ',' any_expr ')'  */
#line 1649 "../src/preproc/pic/pic.ypp"
                { (yyval.x) = (yyvsp[-3].x) < (yyvsp[-1].x) ? (yyvsp[-3].x) : (yyvsp[-1].x); }
#line 4531 "src/preproc/pic/pic.cpp"
    break;

  case 249: /* expr_not_lower_than: INT '(' any_expr ')'  */
#line 1651 "../src/preproc/pic/pic.ypp"
                { (yyval.x) = (yyvsp[-1].x) < 0 ? -floor(-(yyvsp[-1].x)) : floor((yyvsp[-1].x)); }
#line 4537 "src/preproc/pic/pic.cpp"
    break;

  case 250: /* expr_not_lower_than: RAND '(' any_expr ')'  */
#line 1653 "../src/preproc/pic/pic.ypp"
                {
		  lex_error("use of 'rand' with an argument is"
			    " deprecated; shift and scale 'rand()' with"
			    " arithmetic instead");
		  (yyval.x) = 1.0 + floor(((rand()&0x7fff)/double(0x7fff))*(yyvsp[-1].x));
		}
#line 4548 "src/preproc/pic/pic.cpp"
    break;

  case 251: /* expr_not_lower_than: RAND '(' ')'  */
#line 1660 "../src/preproc/pic/pic.ypp"
                {
		  /* return a random number in the range [0,1) */
		  /* portable, but not very random */
		  (yyval.x) = (rand() & 0x7fff) / double(0x8000);
		}
#line 4558 "src/preproc/pic/pic.cpp"
    break;

  case 252: /* expr_not_lower_than: SRAND '(' any_expr ')'  */
#line 1666 "../src/preproc/pic/pic.ypp"
                {
		  (yyval.x) = 0;
		  srand((unsigned int)(yyvsp[-1].x));
		}
#line 4567 "src/preproc/pic/pic.cpp"
    break;

  case 253: /* expr_not_lower_than: expr LESSEQUAL expr  */
#line 1671 "../src/preproc/pic/pic.ypp"
                { (yyval.x) = ((yyvsp[-2].x) <= (yyvsp[0].x)); }
#line 4573 "src/preproc/pic/pic.cpp"
    break;

  case 254: /* expr_not_lower_than: expr '>' expr  */
#line 1673 "../src/preproc/pic/pic.ypp"
                { (yyval.x) = ((yyvsp[-2].x) > (yyvsp[0].x)); }
#line 4579 "src/preproc/pic/pic.cpp"
    break;

  case 255: /* expr_not_lower_than: expr GREATEREQUAL expr  */
#line 1675 "../src/preproc/pic/pic.ypp"
                { (yyval.x) = ((yyvsp[-2].x) >= (yyvsp[0].x)); }
#line 4585 "src/preproc/pic/pic.cpp"
    break;

  case 256: /* expr_not_lower_than: expr EQUALEQUAL expr  */
#line 1677 "../src/preproc/pic/pic.ypp"
                { (yyval.x) = ((yyvsp[-2].x) == (yyvsp[0].x)); }
#line 4591 "src/preproc/pic/pic.cpp"
    break;

  case 257: /* expr_not_lower_than: expr NOTEQUAL expr  */
#line 1679 "../src/preproc/pic/pic.ypp"
                { (yyval.x) = ((yyvsp[-2].x) != (yyvsp[0].x)); }
#line 4597 "src/preproc/pic/pic.cpp"
    break;

  case 258: /* expr_not_lower_than: expr ANDAND expr  */
#line 1681 "../src/preproc/pic/pic.ypp"
                { (yyval.x) = ((yyvsp[-2].x) != 0.0 && (yyvsp[0].x) != 0.0); }
#line 4603 "src/preproc/pic/pic.cpp"
    break;

  case 259: /* expr_not_lower_than: expr OROR expr  */
#line 1683 "../src/preproc/pic/pic.ypp"
                { (yyval.x) = ((yyvsp[-2].x) != 0.0 || (yyvsp[0].x) != 0.0); }
#line 4609 "src/preproc/pic/pic.cpp"
    break;

  case 260: /* expr_not_lower_than: '!' expr  */
#line 1685 "../src/preproc/pic/pic.ypp"
                { (yyval.x) = ((yyvsp[0].x) == 0.0); }
#line 4615 "src/preproc/pic/pic.cpp"
    break;


#line 4619 "src/preproc/pic/pic.cpp"

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

#line 1689 "../src/preproc/pic/pic.ypp"


/* bison defines const to be empty unless __STDC__ is defined, which it
isn't under cfront */

#ifdef const
#undef const
#endif

static struct {
  const char *name;
  double val;
  int scaled;		     // non-zero if val should be multiplied by scale
} defaults_table[] = {
  { "arcrad", .25, 1 },
  { "arrowht", .1, 1 },
  { "arrowwid", .05, 1 },
  { "circlerad", .25, 1 },
  { "boxht", .5, 1 },
  { "boxwid", .75, 1 },
  { "boxrad", 0.0, 1 },
  { "dashwid", .05, 1 },
  { "ellipseht", .5, 1 },
  { "ellipsewid", .75, 1 },
  { "moveht", .5, 1 },
  { "movewid", .5, 1 },
  { "lineht", .5, 1 },
  { "linewid", .5, 1 },
  { "textht", 0.0, 1 },
  { "textwid", 0.0, 1 },
  { "scale", 1.0, 0 },
  { "linethick", -1.0, 0 },		// in points
  { "fillval", .5, 0 },
  { "arrowhead", 1.0, 0 },
  { "maxpswid", 8.5, 0 },
  { "maxpsht", 11.0, 0 },
};

place *lookup_label(const char *label)
{
  saved_state *state = current_saved_state;
  PTABLE(place) *tbl = current_table;
  for (;;) {
    place *pl = tbl->lookup(label);
    if (pl)
      return pl;
    if (!state)
      return 0;
    tbl = state->tbl;
    state = state->prev;
  }
}

void define_label(const char *label, const place *pl)
{
  place *p = new place[1];
  *p = *pl;
  current_table->define(label, p);
}

int lookup_variable(const char *name, double *val)
{
  place *pl = lookup_label(name);
  if (pl) {
    *val = pl->x;
    return 1;
  }
  return 0;
}

void define_variable(const char *name, double val)
{
  place *p = new place[1];
  p->obj = 0;
  p->x = val;
  p->y = 0.0;
  current_table->define(name, p);
  if (strcmp(name, "scale") == 0) {
    // When the scale changes, reset all scaled predefined variables to
    // their default values.
    for (unsigned int i = 0;
	 i < sizeof(defaults_table)/sizeof(defaults_table[0]); i++) 
      if (defaults_table[i].scaled)
	define_variable(defaults_table[i].name, val*defaults_table[i].val);
  }
}

// called once only (not once per parse)

void parse_init()
{
  current_direction = RIGHT_DIRECTION;
  current_position.x = 0.0;
  current_position.y = 0.0;
  // This resets everything to its default value.
  reset_all();
}

void reset(const char *nm)
{
  for (unsigned int i = 0;
       i < sizeof(defaults_table)/sizeof(defaults_table[0]); i++)
    if (strcmp(nm, defaults_table[i].name) == 0) {
      double val = defaults_table[i].val;
      if (defaults_table[i].scaled) {
	double scale;
	lookup_variable("scale", &scale);
	val *= scale;
      }
      define_variable(defaults_table[i].name, val);
      return;
    }
  lex_error("'%1' is not a predefined variable", nm);
}

void reset_all()
{
  // We only have to explicitly reset the predefined variables that
  // aren't scaled because 'scale' is not scaled, and changing the
  // value of 'scale' will reset all the predefined variables that
  // are scaled.
  for (unsigned int i = 0;
       i < sizeof(defaults_table)/sizeof(defaults_table[0]); i++)
    if (!defaults_table[i].scaled)
      define_variable(defaults_table[i].name, defaults_table[i].val);
}

// called after each parse

void parse_cleanup()
{
  while (current_saved_state != 0) {
    delete current_table;
    current_table = current_saved_state->tbl;
    saved_state *tem = current_saved_state;
    current_saved_state = current_saved_state->prev;
    delete tem;
  }
  assert(current_table == &top_table);
  PTABLE_ITERATOR(place) iter(current_table);
  const char *key;
  place *pl;
  while (iter.next(&key, &pl))
    if (pl->obj != 0) {
      position pos = pl->obj->origin();
      pl->obj = 0;
      pl->x = pos.x;
      pl->y = pos.y;
    }
  while (olist.head != 0) {
    object *tem = olist.head;
    olist.head = olist.head->next;
    delete tem;
  }
  olist.tail = 0;
  current_direction = RIGHT_DIRECTION;
  current_position.x = 0.0;
  current_position.y = 0.0;
}

const char *ordinal_postfix(int n)
{
  if (n < 10 || n > 20)
    switch (n % 10) {
    case 1:
      return "st";
    case 2:
      return "nd";
    case 3:
      return "rd";
    }
  return "th";
}

const char *object_type_name(object_type type)
{
  switch (type) {
  case BOX_OBJECT:
    return "box";
  case CIRCLE_OBJECT:
    return "circle";
  case ELLIPSE_OBJECT:
    return "ellipse";
  case ARC_OBJECT:
    return "arc";
  case SPLINE_OBJECT:
    return "spline";
  case LINE_OBJECT:
    return "line";
  case ARROW_OBJECT:
    return "arrow";
  case MOVE_OBJECT:
    return "move";
  case TEXT_OBJECT:
    return "\"\"";
  case BLOCK_OBJECT:
    return "[]";
  case OTHER_OBJECT:
  case MARK_OBJECT:
  default:
    break;
  }
  return "object";
}

static char sprintf_buf[1024];

char *format_number(const char *fmt, double n)
{
  if (0 /* nullptr */ == fmt)
    fmt = "%g";
  return do_sprintf(fmt, &n, 1);
}

char *do_sprintf(const char *fmt, const double *v, int nv)
{
  // Define valid conversion specifiers and modifiers.
  static const char spcs[] = "eEfgG%";
  static const char mods[] = "#-+ 0123456789.";
  string result;
  int i = 0;
  string one_format;
  while (*fmt) {
    if ('%' == *fmt) {
      one_format += *fmt++;
      for (; *fmt != '\0' && strchr(mods, *fmt) != 0; fmt++)
	one_format += *fmt;
      if ('\0' == *fmt || strchr(spcs, *fmt) == 0) {
	lex_error("invalid sprintf conversion specifier '%1'", *fmt);
	result += one_format;
	result += fmt;
	break;
      }
      if ('%' == *fmt) {
	fmt++;
	snprintf(sprintf_buf, sizeof(sprintf_buf), "%%");
      }
      else {
	if (i >= nv) {
	  lex_error("too few arguments to sprintf");
	  result += one_format;
	  result += fmt;
	  break;
	}
	one_format += *fmt++;
	one_format += '\0';
// We validated the format string above.  Most conversion specifiers are
// rejected, including `n`.
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wformat-nonliteral"
	snprintf(sprintf_buf, sizeof(sprintf_buf),
		 one_format.contents(), v[i++]);
#pragma GCC diagnostic pop
      }
      one_format.clear();
      result += sprintf_buf;
    }
    else
      result += *fmt++;
  }
  result += '\0';
  return strsave(result.contents());
}

// Local Variables:
// fill-column: 72
// mode: C++
// End:
// vim: set cindent noexpandtab shiftwidth=2 textwidth=72:
