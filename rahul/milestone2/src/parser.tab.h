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
    CONTINUE = 258,                /* CONTINUE  */
    FOR = 259,                     /* FOR  */
    CHAR = 260,                    /* CHAR  */
    FINAL = 261,                   /* FINAL  */
    STATIC = 262,                  /* STATIC  */
    VOID = 263,                    /* VOID  */
    CLASS = 264,                   /* CLASS  */
    LONG = 265,                    /* LONG  */
    CONST = 266,                   /* CONST  */
    FLOAT = 267,                   /* FLOAT  */
    WHILE = 268,                   /* WHILE  */
    FLOATINGPOINTLITERAL = 269,    /* FLOATINGPOINTLITERAL  */
    TRUELITERAL = 270,             /* TRUELITERAL  */
    FALSELITERAL = 271,            /* FALSELITERAL  */
    NULLLITERAL = 272,             /* NULLLITERAL  */
    CHARACTERLITERAL = 273,        /* CHARACTERLITERAL  */
    IDENTIFIER = 274,              /* IDENTIFIER  */
    STRINGLITERAL = 275,           /* STRINGLITERAL  */
    BOOLEAN = 276,                 /* BOOLEAN  */
    PRIVATE = 277,                 /* PRIVATE  */
    IF = 278,                      /* IF  */
    PACKAGE = 279,                 /* PACKAGE  */
    THIS = 280,                    /* THIS  */
    BREAK = 281,                   /* BREAK  */
    DOUBLE = 282,                  /* DOUBLE  */
    BYTE = 283,                    /* BYTE  */
    ELSE = 284,                    /* ELSE  */
    PUBLIC = 285,                  /* PUBLIC  */
    RETURN = 286,                  /* RETURN  */
    INT = 287,                     /* INT  */
    SHORT = 288,                   /* SHORT  */
    ABSTRACT = 289,                /* ABSTRACT  */
    INTEGERLITERAL = 290,          /* INTEGERLITERAL  */
    ADD_ASSIGN = 291,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 292,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 293,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 294,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 295,              /* MOD_ASSIGN  */
    AND_ASSIGN = 296,              /* AND_ASSIGN  */
    OR_ASSIGN = 297,               /* OR_ASSIGN  */
    XOR_ASSIGN = 298,              /* XOR_ASSIGN  */
    LEFT_ASSIGN = 299,             /* LEFT_ASSIGN  */
    RIGHT_ASSIGN = 300,            /* RIGHT_ASSIGN  */
    UNSIGNED_RIGHT_ASSIGN = 301,   /* UNSIGNED_RIGHT_ASSIGN  */
    OR_OP = 302,                   /* OR_OP  */
    AND_OP = 303,                  /* AND_OP  */
    NE_OP = 304,                   /* NE_OP  */
    EQ_OP = 305,                   /* EQ_OP  */
    LEFT_OP = 306,                 /* LEFT_OP  */
    RIGHT_OP = 307,                /* RIGHT_OP  */
    UNSIGNED_RIGHT_OP = 308,       /* UNSIGNED_RIGHT_OP  */
    GE_OP = 309,                   /* GE_OP  */
    LE_OP = 310,                   /* LE_OP  */
    INSTANCEOF = 311,              /* INSTANCEOF  */
    NEW = 312,                     /* NEW  */
    INC_OP = 313,                  /* INC_OP  */
    DEC_OP = 314,                  /* DEC_OP  */
    PROPORTION = 315,              /* PROPORTION  */
    PTR_OP = 316                   /* PTR_OP  */
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

#line 131 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
