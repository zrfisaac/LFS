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

#line 334 "src/preproc/pic/pic.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SRC_PREPROC_PIC_PIC_HPP_INCLUDED  */
