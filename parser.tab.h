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
    IF = 260,                      /* IF  */
    PACKAGE = 261,                 /* PACKAGE  */
    BOOLEAN = 262,                 /* BOOLEAN  */
    PRIVATE = 263,                 /* PRIVATE  */
    THIS = 264,                    /* THIS  */
    BREAK = 265,                   /* BREAK  */
    DOUBLE = 266,                  /* DOUBLE  */
    BYTE = 267,                    /* BYTE  */
    ELSE = 268,                    /* ELSE  */
    PUBLIC = 269,                  /* PUBLIC  */
    RETURN = 270,                  /* RETURN  */
    INT = 271,                     /* INT  */
    SHORT = 272,                   /* SHORT  */
    CHAR = 273,                    /* CHAR  */
    FINAL = 274,                   /* FINAL  */
    STATIC = 275,                  /* STATIC  */
    VOID = 276,                    /* VOID  */
    CLASS = 277,                   /* CLASS  */
    LONG = 278,                    /* LONG  */
    CONST = 279,                   /* CONST  */
    FLOAT = 280,                   /* FLOAT  */
    WHILE = 281,                   /* WHILE  */
    LITERAL = 282,                 /* LITERAL  */
    IDENTIFIER = 283,              /* IDENTIFIER  */
    ADD_ASSIGN = 284,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 285,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 286,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 287,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 288,              /* MOD_ASSIGN  */
    AND_ASSIGN = 289,              /* AND_ASSIGN  */
    OR_ASSIGN = 290,               /* OR_ASSIGN  */
    XOR_ASSIGN = 291,              /* XOR_ASSIGN  */
    LEFT_ASSIGN = 292,             /* LEFT_ASSIGN  */
    RIGHT_ASSIGN = 293,            /* RIGHT_ASSIGN  */
    UNSIGNED_RIGHT_ASSIGN = 294,   /* UNSIGNED_RIGHT_ASSIGN  */
    OR_OP = 295,                   /* OR_OP  */
    AND_OP = 296,                  /* AND_OP  */
    NE_OP = 297,                   /* NE_OP  */
    EQ_OP = 298,                   /* EQ_OP  */
    GE_OP = 299,                   /* GE_OP  */
    LE_OP = 300,                   /* LE_OP  */
    INSTANCEOF = 301,              /* INSTANCEOF  */
    LEFT_OP = 302,                 /* LEFT_OP  */
    RIGHT_OP = 303,                /* RIGHT_OP  */
    UNSIGNED_RIGHT_OP = 304,       /* UNSIGNED_RIGHT_OP  */
    NEW = 305,                     /* NEW  */
    INC_OP = 306,                  /* INC_OP  */
    DEC_OP = 307,                  /* DEC_OP  */
    ELLIPSIS = 308,                /* ELLIPSIS  */
    PROPORTION = 309,              /* PROPORTION  */
    PTR_OP = 310                   /* PTR_OP  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 27 "parser.y"

    char *str;
    Node *node;

#line 124 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
