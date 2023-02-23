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
    ABSTRACT = 258,                /* ABSTRACT  */
    CONTINUE = 259,                /* CONTINUE  */
    FOR = 260,                     /* FOR  */
    SWITCH = 261,                  /* SWITCH  */
    ASSERT = 262,                  /* ASSERT  */
    DEFAULT = 263,                 /* DEFAULT  */
    IF = 264,                      /* IF  */
    PACKAGE = 265,                 /* PACKAGE  */
    SYNCHRONIZED = 266,            /* SYNCHRONIZED  */
    BOOLEAN = 267,                 /* BOOLEAN  */
    DO = 268,                      /* DO  */
    GOTO = 269,                    /* GOTO  */
    PRIVATE = 270,                 /* PRIVATE  */
    THIS = 271,                    /* THIS  */
    BREAK = 272,                   /* BREAK  */
    DOUBLE = 273,                  /* DOUBLE  */
    IMPLEMENTS = 274,              /* IMPLEMENTS  */
    PROTECTED = 275,               /* PROTECTED  */
    THROW = 276,                   /* THROW  */
    BYTE = 277,                    /* BYTE  */
    ELSE = 278,                    /* ELSE  */
    IMPORT = 279,                  /* IMPORT  */
    PUBLIC = 280,                  /* PUBLIC  */
    THROWS = 281,                  /* THROWS  */
    CASE = 282,                    /* CASE  */
    ENUM = 283,                    /* ENUM  */
    RETURN = 284,                  /* RETURN  */
    TRANSIENT = 285,               /* TRANSIENT  */
    CATCH = 286,                   /* CATCH  */
    EXTENDS = 287,                 /* EXTENDS  */
    INT = 288,                     /* INT  */
    SHORT = 289,                   /* SHORT  */
    TRY = 290,                     /* TRY  */
    CHAR = 291,                    /* CHAR  */
    FINAL = 292,                   /* FINAL  */
    INTERFACE = 293,               /* INTERFACE  */
    STATIC = 294,                  /* STATIC  */
    VOID = 295,                    /* VOID  */
    CLASS = 296,                   /* CLASS  */
    FINALLY = 297,                 /* FINALLY  */
    LONG = 298,                    /* LONG  */
    STRICTFP = 299,                /* STRICTFP  */
    VOLATILE = 300,                /* VOLATILE  */
    CONST = 301,                   /* CONST  */
    FLOAT = 302,                   /* FLOAT  */
    NATIVE = 303,                  /* NATIVE  */
    SUPER = 304,                   /* SUPER  */
    WHILE = 305,                   /* WHILE  */
    LITERAL = 306,                 /* LITERAL  */
    IDENTIFIER = 307,              /* IDENTIFIER  */
    ADD_ASSIGN = 308,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 309,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 310,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 311,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 312,              /* MOD_ASSIGN  */
    AND_ASSIGN = 313,              /* AND_ASSIGN  */
    OR_ASSIGN = 314,               /* OR_ASSIGN  */
    XOR_ASSIGN = 315,              /* XOR_ASSIGN  */
    LEFT_ASSIGN = 316,             /* LEFT_ASSIGN  */
    RIGHT_ASSIGN = 317,            /* RIGHT_ASSIGN  */
    UNSIGNED_RIGHT_ASSIGN = 318,   /* UNSIGNED_RIGHT_ASSIGN  */
    OR_OP = 319,                   /* OR_OP  */
    AND_OP = 320,                  /* AND_OP  */
    NE_OP = 321,                   /* NE_OP  */
    EQ_OP = 322,                   /* EQ_OP  */
    GE_OP = 323,                   /* GE_OP  */
    LE_OP = 324,                   /* LE_OP  */
    INSTANCEOF = 325,              /* INSTANCEOF  */
    LEFT_OP = 326,                 /* LEFT_OP  */
    RIGHT_OP = 327,                /* RIGHT_OP  */
    UNSIGNED_RIGHT_OP = 328,       /* UNSIGNED_RIGHT_OP  */
    NEW = 329,                     /* NEW  */
    INC_OP = 330,                  /* INC_OP  */
    DEC_OP = 331,                  /* DEC_OP  */
    ELLIPSIS = 332,                /* ELLIPSIS  */
    PROPORTION = 333,              /* PROPORTION  */
    PTR_OP = 334                   /* PTR_OP  */
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

#line 148 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
