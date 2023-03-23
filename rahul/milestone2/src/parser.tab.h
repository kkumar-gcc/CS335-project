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

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    IFX = 258,                     /* IFX  */
    CONTINUE = 259,                /* CONTINUE  */
    FOR = 260,                     /* FOR  */
    CHAR = 261,                    /* CHAR  */
    FINAL = 262,                   /* FINAL  */
    STATIC = 263,                  /* STATIC  */
    VOID = 264,                    /* VOID  */
    CLASS = 265,                   /* CLASS  */
    LONG = 266,                    /* LONG  */
    CONST = 267,                   /* CONST  */
    FLOAT = 268,                   /* FLOAT  */
    WHILE = 269,                   /* WHILE  */
    FLOATINGPOINTLITERAL = 270,    /* FLOATINGPOINTLITERAL  */
    TRUELITERAL = 271,             /* TRUELITERAL  */
    FALSELITERAL = 272,            /* FALSELITERAL  */
    NULLLITERAL = 273,             /* NULLLITERAL  */
    CHARACTERLITERAL = 274,        /* CHARACTERLITERAL  */
    IDENTIFIER = 275,              /* IDENTIFIER  */
    STRINGLITERAL = 276,           /* STRINGLITERAL  */
    BOOLEAN = 277,                 /* BOOLEAN  */
    PRIVATE = 278,                 /* PRIVATE  */
    IF = 279,                      /* IF  */
    PACKAGE = 280,                 /* PACKAGE  */
    THIS = 281,                    /* THIS  */
    BREAK = 282,                   /* BREAK  */
    DOUBLE = 283,                  /* DOUBLE  */
    BYTE = 284,                    /* BYTE  */
    ELSE = 285,                    /* ELSE  */
    PUBLIC = 286,                  /* PUBLIC  */
    RETURN = 287,                  /* RETURN  */
    INT = 288,                     /* INT  */
    SHORT = 289,                   /* SHORT  */
    ABSTRACT = 290,                /* ABSTRACT  */
    INTEGERLITERAL = 291,          /* INTEGERLITERAL  */
    ADD_ASSIGN = 292,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 293,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 294,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 295,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 296,              /* MOD_ASSIGN  */
    AND_ASSIGN = 297,              /* AND_ASSIGN  */
    OR_ASSIGN = 298,               /* OR_ASSIGN  */
    XOR_ASSIGN = 299,              /* XOR_ASSIGN  */
    LEFT_ASSIGN = 300,             /* LEFT_ASSIGN  */
    RIGHT_ASSIGN = 301,            /* RIGHT_ASSIGN  */
    UNSIGNED_RIGHT_ASSIGN = 302,   /* UNSIGNED_RIGHT_ASSIGN  */
    OR_OP = 303,                   /* OR_OP  */
    AND_OP = 304,                  /* AND_OP  */
    NE_OP = 305,                   /* NE_OP  */
    EQ_OP = 306,                   /* EQ_OP  */
    LEFT_OP = 307,                 /* LEFT_OP  */
    RIGHT_OP = 308,                /* RIGHT_OP  */
    UNSIGNED_RIGHT_OP = 309,       /* UNSIGNED_RIGHT_OP  */
    GE_OP = 310,                   /* GE_OP  */
    LE_OP = 311,                   /* LE_OP  */
    INSTANCEOF = 312,              /* INSTANCEOF  */
    NEW = 313,                     /* NEW  */
    INC_OP = 314,                  /* INC_OP  */
    DEC_OP = 315,                  /* DEC_OP  */
    PROPORTION = 316,              /* PROPORTION  */
    PTR_OP = 317                   /* PTR_OP  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 30 "parser.y"

    char *str;
    int ival;
    class genNode *node;

#line 132 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
