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
#line 1 "parser.y"


#include <iostream>
#include <string>
#include <vector>
#include "cp.h"
using namespace std;

#define YYERROR_VERBOSE

void yyerror (const char *s);
extern "C" int yylex();
extern long long int line;

Node *root = NULL;

Node *createNode(string label, string value, vector <Node *> children) {

    Node *newNode = new Node();
    newNode->label = label;
    newNode->value = value;
    newNode->children = children;
    return newNode;
}

#line 97 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ABSTRACT = 3,                   /* ABSTRACT  */
  YYSYMBOL_CONTINUE = 4,                   /* CONTINUE  */
  YYSYMBOL_FOR = 5,                        /* FOR  */
  YYSYMBOL_SWITCH = 6,                     /* SWITCH  */
  YYSYMBOL_ASSERT = 7,                     /* ASSERT  */
  YYSYMBOL_DEFAULT = 8,                    /* DEFAULT  */
  YYSYMBOL_IF = 9,                         /* IF  */
  YYSYMBOL_PACKAGE = 10,                   /* PACKAGE  */
  YYSYMBOL_SYNCHRONIZED = 11,              /* SYNCHRONIZED  */
  YYSYMBOL_BOOLEAN = 12,                   /* BOOLEAN  */
  YYSYMBOL_DO = 13,                        /* DO  */
  YYSYMBOL_GOTO = 14,                      /* GOTO  */
  YYSYMBOL_PRIVATE = 15,                   /* PRIVATE  */
  YYSYMBOL_THIS = 16,                      /* THIS  */
  YYSYMBOL_BREAK = 17,                     /* BREAK  */
  YYSYMBOL_DOUBLE = 18,                    /* DOUBLE  */
  YYSYMBOL_IMPLEMENTS = 19,                /* IMPLEMENTS  */
  YYSYMBOL_PROTECTED = 20,                 /* PROTECTED  */
  YYSYMBOL_THROW = 21,                     /* THROW  */
  YYSYMBOL_BYTE = 22,                      /* BYTE  */
  YYSYMBOL_ELSE = 23,                      /* ELSE  */
  YYSYMBOL_IMPORT = 24,                    /* IMPORT  */
  YYSYMBOL_PUBLIC = 25,                    /* PUBLIC  */
  YYSYMBOL_THROWS = 26,                    /* THROWS  */
  YYSYMBOL_CASE = 27,                      /* CASE  */
  YYSYMBOL_ENUM = 28,                      /* ENUM  */
  YYSYMBOL_RETURN = 29,                    /* RETURN  */
  YYSYMBOL_TRANSIENT = 30,                 /* TRANSIENT  */
  YYSYMBOL_CATCH = 31,                     /* CATCH  */
  YYSYMBOL_EXTENDS = 32,                   /* EXTENDS  */
  YYSYMBOL_INT = 33,                       /* INT  */
  YYSYMBOL_SHORT = 34,                     /* SHORT  */
  YYSYMBOL_TRY = 35,                       /* TRY  */
  YYSYMBOL_CHAR = 36,                      /* CHAR  */
  YYSYMBOL_FINAL = 37,                     /* FINAL  */
  YYSYMBOL_INTERFACE = 38,                 /* INTERFACE  */
  YYSYMBOL_STATIC = 39,                    /* STATIC  */
  YYSYMBOL_VOID = 40,                      /* VOID  */
  YYSYMBOL_CLASS = 41,                     /* CLASS  */
  YYSYMBOL_FINALLY = 42,                   /* FINALLY  */
  YYSYMBOL_LONG = 43,                      /* LONG  */
  YYSYMBOL_STRICTFP = 44,                  /* STRICTFP  */
  YYSYMBOL_VOLATILE = 45,                  /* VOLATILE  */
  YYSYMBOL_CONST = 46,                     /* CONST  */
  YYSYMBOL_FLOAT = 47,                     /* FLOAT  */
  YYSYMBOL_NATIVE = 48,                    /* NATIVE  */
  YYSYMBOL_SUPER = 49,                     /* SUPER  */
  YYSYMBOL_WHILE = 50,                     /* WHILE  */
  YYSYMBOL_LITERAL = 51,                   /* LITERAL  */
  YYSYMBOL_IDENTIFIER = 52,                /* IDENTIFIER  */
  YYSYMBOL_53_ = 53,                       /* '='  */
  YYSYMBOL_ADD_ASSIGN = 54,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 55,                /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 56,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 57,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 58,                /* MOD_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 59,                /* AND_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 60,                 /* OR_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 61,                /* XOR_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 62,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 63,              /* RIGHT_ASSIGN  */
  YYSYMBOL_UNSIGNED_RIGHT_ASSIGN = 64,     /* UNSIGNED_RIGHT_ASSIGN  */
  YYSYMBOL_65_ = 65,                       /* '?'  */
  YYSYMBOL_66_ = 66,                       /* ':'  */
  YYSYMBOL_OR_OP = 67,                     /* OR_OP  */
  YYSYMBOL_AND_OP = 68,                    /* AND_OP  */
  YYSYMBOL_69_ = 69,                       /* '|'  */
  YYSYMBOL_70_ = 70,                       /* '^'  */
  YYSYMBOL_71_ = 71,                       /* '&'  */
  YYSYMBOL_NE_OP = 72,                     /* NE_OP  */
  YYSYMBOL_EQ_OP = 73,                     /* EQ_OP  */
  YYSYMBOL_74_ = 74,                       /* '<'  */
  YYSYMBOL_75_ = 75,                       /* '>'  */
  YYSYMBOL_GE_OP = 76,                     /* GE_OP  */
  YYSYMBOL_LE_OP = 77,                     /* LE_OP  */
  YYSYMBOL_INSTANCEOF = 78,                /* INSTANCEOF  */
  YYSYMBOL_LEFT_OP = 79,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 80,                  /* RIGHT_OP  */
  YYSYMBOL_UNSIGNED_RIGHT_OP = 81,         /* UNSIGNED_RIGHT_OP  */
  YYSYMBOL_82_ = 82,                       /* '+'  */
  YYSYMBOL_83_ = 83,                       /* '-'  */
  YYSYMBOL_84_ = 84,                       /* '*'  */
  YYSYMBOL_85_ = 85,                       /* '/'  */
  YYSYMBOL_86_ = 86,                       /* '%'  */
  YYSYMBOL_NEW = 87,                       /* NEW  */
  YYSYMBOL_INC_OP = 88,                    /* INC_OP  */
  YYSYMBOL_DEC_OP = 89,                    /* DEC_OP  */
  YYSYMBOL_90_ = 90,                       /* '!'  */
  YYSYMBOL_91_ = 91,                       /* '~'  */
  YYSYMBOL_92_ = 92,                       /* '('  */
  YYSYMBOL_93_ = 93,                       /* ')'  */
  YYSYMBOL_94_ = 94,                       /* '{'  */
  YYSYMBOL_95_ = 95,                       /* '}'  */
  YYSYMBOL_96_ = 96,                       /* '['  */
  YYSYMBOL_97_ = 97,                       /* ']'  */
  YYSYMBOL_98_ = 98,                       /* '.'  */
  YYSYMBOL_99_ = 99,                       /* ','  */
  YYSYMBOL_100_ = 100,                     /* ';'  */
  YYSYMBOL_ELLIPSIS = 101,                 /* ELLIPSIS  */
  YYSYMBOL_PROPORTION = 102,               /* PROPORTION  */
  YYSYMBOL_PTR_OP = 103,                   /* PTR_OP  */
  YYSYMBOL_YYACCEPT = 104,                 /* $accept  */
  YYSYMBOL_CompilationUnit = 105,          /* CompilationUnit  */
  YYSYMBOL_PackageDeclaration = 106,       /* PackageDeclaration  */
  YYSYMBOL_TypeDeclaration = 107,          /* TypeDeclaration  */
  YYSYMBOL_TypeName = 108,                 /* TypeName  */
  YYSYMBOL_Type = 109,                     /* Type  */
  YYSYMBOL_PrimitiveType = 110,            /* PrimitiveType  */
  YYSYMBOL_NumericType = 111,              /* NumericType  */
  YYSYMBOL_IntegralType = 112,             /* IntegralType  */
  YYSYMBOL_FloatingPointType = 113,        /* FloatingPointType  */
  YYSYMBOL_ReferenceType = 114,            /* ReferenceType  */
  YYSYMBOL_ArrayType = 115,                /* ArrayType  */
  YYSYMBOL_Dims = 116,                     /* Dims  */
  YYSYMBOL_ArrayInitializer = 117,         /* ArrayInitializer  */
  YYSYMBOL_VariableInitializerList = 118,  /* VariableInitializerList  */
  YYSYMBOL_ClassDeclaration = 119,         /* ClassDeclaration  */
  YYSYMBOL_NormalClassDeclaration = 120,   /* NormalClassDeclaration  */
  YYSYMBOL_ClassBody = 121,                /* ClassBody  */
  YYSYMBOL_ClassBodyDeclaration = 122,     /* ClassBodyDeclaration  */
  YYSYMBOL_ClassMemberDeclaration = 123,   /* ClassMemberDeclaration  */
  YYSYMBOL_FieldDeclaration = 124,         /* FieldDeclaration  */
  YYSYMBOL_ClassModifier = 125,            /* ClassModifier  */
  YYSYMBOL_VariableDeclaratorList = 126,   /* VariableDeclaratorList  */
  YYSYMBOL_VariableDeclarator = 127,       /* VariableDeclarator  */
  YYSYMBOL_VariableDeclaratorId = 128,     /* VariableDeclaratorId  */
  YYSYMBOL_VariableInitializer = 129,      /* VariableInitializer  */
  YYSYMBOL_MethodDeclaration = 130,        /* MethodDeclaration  */
  YYSYMBOL_MethodHeader = 131,             /* MethodHeader  */
  YYSYMBOL_MethodDeclarator = 132,         /* MethodDeclarator  */
  YYSYMBOL_FormalParameterList = 133,      /* FormalParameterList  */
  YYSYMBOL_FormalParameters = 134,         /* FormalParameters  */
  YYSYMBOL_FormalParameter = 135,          /* FormalParameter  */
  YYSYMBOL_LastFormalParameter = 136,      /* LastFormalParameter  */
  YYSYMBOL_ReceiverParameter = 137,        /* ReceiverParameter  */
  YYSYMBOL_MethodBody = 138,               /* MethodBody  */
  YYSYMBOL_StaticInitializer = 139,        /* StaticInitializer  */
  YYSYMBOL_ConstructorDeclaration = 140,   /* ConstructorDeclaration  */
  YYSYMBOL_ConstructorDeclarator = 141,    /* ConstructorDeclarator  */
  YYSYMBOL_ConstructorBody = 142,          /* ConstructorBody  */
  YYSYMBOL_ExplicitConstructorInvocation = 143, /* ExplicitConstructorInvocation  */
  YYSYMBOL_SINGLE_ArgumentList = 144,      /* SINGLE_ArgumentList  */
  YYSYMBOL_Block = 145,                    /* Block  */
  YYSYMBOL_BlockStatements = 146,          /* BlockStatements  */
  YYSYMBOL_BlockStatement = 147,           /* BlockStatement  */
  YYSYMBOL_LocalVariableDeclarationStatement = 148, /* LocalVariableDeclarationStatement  */
  YYSYMBOL_LocalVariableDeclaration = 149, /* LocalVariableDeclaration  */
  YYSYMBOL_Statement = 150,                /* Statement  */
  YYSYMBOL_StatementNoShortIf = 151,       /* StatementNoShortIf  */
  YYSYMBOL_StatementWithoutTrailingSubstatement = 152, /* StatementWithoutTrailingSubstatement  */
  YYSYMBOL_EmptyStatement = 153,           /* EmptyStatement  */
  YYSYMBOL_LabeledStatement = 154,         /* LabeledStatement  */
  YYSYMBOL_LabeledStatementNoShortIf = 155, /* LabeledStatementNoShortIf  */
  YYSYMBOL_ExpressionStatement = 156,      /* ExpressionStatement  */
  YYSYMBOL_StatementExpression = 157,      /* StatementExpression  */
  YYSYMBOL_IfThenStatement = 158,          /* IfThenStatement  */
  YYSYMBOL_IfThenElseStatement = 159,      /* IfThenElseStatement  */
  YYSYMBOL_IfThenElseStatementNoShortIf = 160, /* IfThenElseStatementNoShortIf  */
  YYSYMBOL_WhileStatement = 161,           /* WhileStatement  */
  YYSYMBOL_WhileStatementNoShortIf = 162,  /* WhileStatementNoShortIf  */
  YYSYMBOL_ForStatement = 163,             /* ForStatement  */
  YYSYMBOL_ForStatementNoShortIf = 164,    /* ForStatementNoShortIf  */
  YYSYMBOL_BasicForStatement = 165,        /* BasicForStatement  */
  YYSYMBOL_SINGLE_ForInit = 166,           /* SINGLE_ForInit  */
  YYSYMBOL_SINGLE_Expression = 167,        /* SINGLE_Expression  */
  YYSYMBOL_SINGLE_ForUpdate = 168,         /* SINGLE_ForUpdate  */
  YYSYMBOL_BasicForStatementNoShortIf = 169, /* BasicForStatementNoShortIf  */
  YYSYMBOL_ForInit = 170,                  /* ForInit  */
  YYSYMBOL_ForUpdate = 171,                /* ForUpdate  */
  YYSYMBOL_StatementExpressionList = 172,  /* StatementExpressionList  */
  YYSYMBOL_EnhancedForStatement = 173,     /* EnhancedForStatement  */
  YYSYMBOL_EnhancedForStatementNoShortIf = 174, /* EnhancedForStatementNoShortIf  */
  YYSYMBOL_BreakStatement = 175,           /* BreakStatement  */
  YYSYMBOL_ContinueStatement = 176,        /* ContinueStatement  */
  YYSYMBOL_ReturnStatement = 177,          /* ReturnStatement  */
  YYSYMBOL_Primary = 178,                  /* Primary  */
  YYSYMBOL_PrimaryNoNewArray = 179,        /* PrimaryNoNewArray  */
  YYSYMBOL_ClassLiteral = 180,             /* ClassLiteral  */
  YYSYMBOL_ClassInstanceCreationExpression = 181, /* ClassInstanceCreationExpression  */
  YYSYMBOL_UnqualifiedClassInstanceCreationExpression = 182, /* UnqualifiedClassInstanceCreationExpression  */
  YYSYMBOL_FieldAccess = 183,              /* FieldAccess  */
  YYSYMBOL_ArrayAccess = 184,              /* ArrayAccess  */
  YYSYMBOL_MethodInvocation = 185,         /* MethodInvocation  */
  YYSYMBOL_ArgumentList = 186,             /* ArgumentList  */
  YYSYMBOL_MethodReference = 187,          /* MethodReference  */
  YYSYMBOL_ArrayCreationExpression = 188,  /* ArrayCreationExpression  */
  YYSYMBOL_DimExprs = 189,                 /* DimExprs  */
  YYSYMBOL_DimExpr = 190,                  /* DimExpr  */
  YYSYMBOL_Expression = 191,               /* Expression  */
  YYSYMBOL_AssignmentExpression = 192,     /* AssignmentExpression  */
  YYSYMBOL_Assignment = 193,               /* Assignment  */
  YYSYMBOL_LeftHandSide = 194,             /* LeftHandSide  */
  YYSYMBOL_AssignmentOperator = 195,       /* AssignmentOperator  */
  YYSYMBOL_ConditionalExpression = 196,    /* ConditionalExpression  */
  YYSYMBOL_ConditionalOrExpression = 197,  /* ConditionalOrExpression  */
  YYSYMBOL_ConditionalAndExpression = 198, /* ConditionalAndExpression  */
  YYSYMBOL_InclusiveOrExpression = 199,    /* InclusiveOrExpression  */
  YYSYMBOL_ExclusiveOrExpression = 200,    /* ExclusiveOrExpression  */
  YYSYMBOL_AndExpression = 201,            /* AndExpression  */
  YYSYMBOL_EqualityExpression = 202,       /* EqualityExpression  */
  YYSYMBOL_RelationalExpression = 203,     /* RelationalExpression  */
  YYSYMBOL_ShiftExpression = 204,          /* ShiftExpression  */
  YYSYMBOL_AdditiveExpression = 205,       /* AdditiveExpression  */
  YYSYMBOL_MultiplicativeExpression = 206, /* MultiplicativeExpression  */
  YYSYMBOL_UnaryExpression = 207,          /* UnaryExpression  */
  YYSYMBOL_PreIncrementExpression = 208,   /* PreIncrementExpression  */
  YYSYMBOL_PreDecrementExpression = 209,   /* PreDecrementExpression  */
  YYSYMBOL_UnaryExpressionNotPlusMinus = 210, /* UnaryExpressionNotPlusMinus  */
  YYSYMBOL_PostfixExpression = 211,        /* PostfixExpression  */
  YYSYMBOL_PostIncrementExpression = 212,  /* PostIncrementExpression  */
  YYSYMBOL_PostDecrementExpression = 213,  /* PostDecrementExpression  */
  YYSYMBOL_CastExpression = 214            /* CastExpression  */
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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2062

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  104
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  111
/* YYNRULES -- Number of rules.  */
#define YYNRULES  276
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  463

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   334


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
       2,     2,     2,    90,     2,     2,     2,    86,    71,     2,
      92,    93,    84,    82,    99,    83,    98,    85,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    66,   100,
      74,    53,    75,    65,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    96,     2,    97,    70,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    94,    69,    95,    91,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    67,
      68,    72,    73,    76,    77,    78,    79,    80,    81,    87,
      88,    89,   101,   102,   103
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   104,   104,   105,   106,   107,   108,   111,   115,   116,
     120,   121,   127,   128,   129,   133,   134,   138,   139,   143,
     144,   145,   146,   147,   151,   152,   156,   157,   160,   161,
     164,   165,   170,   171,   172,   173,   177,   178,   185,   189,
     193,   194,   197,   198,   199,   203,   204,   205,   206,   212,
     213,   217,   218,   221,   222,   226,   227,   230,   231,   235,
     236,   241,   242,   246,   247,   251,   252,   253,   254,   258,
     259,   260,   264,   265,   266,   270,   271,   275,   279,   280,
     284,   285,   293,   297,   298,   302,   303,   307,   308,   309,
     314,   318,   319,   326,   331,   332,   336,   337,   338,   342,
     346,   350,   351,   352,   353,   354,   355,   359,   360,   361,
     362,   363,   367,   368,   369,   370,   371,   372,   376,   380,
     384,   388,   392,   393,   394,   395,   396,   397,   398,   402,
     406,   410,   414,   418,   422,   423,   427,   428,   432,   436,
     437,   441,   442,   446,   447,   451,   455,   456,   460,   464,
     465,   469,   473,   477,   478,   482,   483,   487,   488,   496,
     497,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   514,   516,   518,   520,   522,   528,   529,   530,   534,
     536,   538,   541,   547,   552,   553,   557,   559,   562,   565,
     569,   571,   576,   577,   581,   583,   585,   587,   589,   594,
     596,   598,   600,   602,   604,   609,   610,   614,   618,   622,
     623,   627,   628,   632,   633,   637,   638,   639,   640,   641,
     642,   643,   644,   645,   646,   647,   648,   652,   653,   657,
     658,   662,   663,   667,   668,   672,   673,   677,   678,   682,
     683,   684,   688,   689,   690,   691,   692,   693,   697,   698,
     699,   700,   704,   705,   706,   710,   711,   712,   713,   717,
     718,   719,   721,   723,   727,   732,   737,   738,   740,   742,
     746,   747,   748,   749,   753,   758,   763
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
  "\"end of file\"", "error", "\"invalid token\"", "ABSTRACT", "CONTINUE",
  "FOR", "SWITCH", "ASSERT", "DEFAULT", "IF", "PACKAGE", "SYNCHRONIZED",
  "BOOLEAN", "DO", "GOTO", "PRIVATE", "THIS", "BREAK", "DOUBLE",
  "IMPLEMENTS", "PROTECTED", "THROW", "BYTE", "ELSE", "IMPORT", "PUBLIC",
  "THROWS", "CASE", "ENUM", "RETURN", "TRANSIENT", "CATCH", "EXTENDS",
  "INT", "SHORT", "TRY", "CHAR", "FINAL", "INTERFACE", "STATIC", "VOID",
  "CLASS", "FINALLY", "LONG", "STRICTFP", "VOLATILE", "CONST", "FLOAT",
  "NATIVE", "SUPER", "WHILE", "LITERAL", "IDENTIFIER", "'='", "ADD_ASSIGN",
  "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "AND_ASSIGN",
  "OR_ASSIGN", "XOR_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "UNSIGNED_RIGHT_ASSIGN", "'?'", "':'", "OR_OP", "AND_OP", "'|'", "'^'",
  "'&'", "NE_OP", "EQ_OP", "'<'", "'>'", "GE_OP", "LE_OP", "INSTANCEOF",
  "LEFT_OP", "RIGHT_OP", "UNSIGNED_RIGHT_OP", "'+'", "'-'", "'*'", "'/'",
  "'%'", "NEW", "INC_OP", "DEC_OP", "'!'", "'~'", "'('", "')'", "'{'",
  "'}'", "'['", "']'", "'.'", "','", "';'", "ELLIPSIS", "PROPORTION",
  "PTR_OP", "$accept", "CompilationUnit", "PackageDeclaration",
  "TypeDeclaration", "TypeName", "Type", "PrimitiveType", "NumericType",
  "IntegralType", "FloatingPointType", "ReferenceType", "ArrayType",
  "Dims", "ArrayInitializer", "VariableInitializerList",
  "ClassDeclaration", "NormalClassDeclaration", "ClassBody",
  "ClassBodyDeclaration", "ClassMemberDeclaration", "FieldDeclaration",
  "ClassModifier", "VariableDeclaratorList", "VariableDeclarator",
  "VariableDeclaratorId", "VariableInitializer", "MethodDeclaration",
  "MethodHeader", "MethodDeclarator", "FormalParameterList",
  "FormalParameters", "FormalParameter", "LastFormalParameter",
  "ReceiverParameter", "MethodBody", "StaticInitializer",
  "ConstructorDeclaration", "ConstructorDeclarator", "ConstructorBody",
  "ExplicitConstructorInvocation", "SINGLE_ArgumentList", "Block",
  "BlockStatements", "BlockStatement", "LocalVariableDeclarationStatement",
  "LocalVariableDeclaration", "Statement", "StatementNoShortIf",
  "StatementWithoutTrailingSubstatement", "EmptyStatement",
  "LabeledStatement", "LabeledStatementNoShortIf", "ExpressionStatement",
  "StatementExpression", "IfThenStatement", "IfThenElseStatement",
  "IfThenElseStatementNoShortIf", "WhileStatement",
  "WhileStatementNoShortIf", "ForStatement", "ForStatementNoShortIf",
  "BasicForStatement", "SINGLE_ForInit", "SINGLE_Expression",
  "SINGLE_ForUpdate", "BasicForStatementNoShortIf", "ForInit", "ForUpdate",
  "StatementExpressionList", "EnhancedForStatement",
  "EnhancedForStatementNoShortIf", "BreakStatement", "ContinueStatement",
  "ReturnStatement", "Primary", "PrimaryNoNewArray", "ClassLiteral",
  "ClassInstanceCreationExpression",
  "UnqualifiedClassInstanceCreationExpression", "FieldAccess",
  "ArrayAccess", "MethodInvocation", "ArgumentList", "MethodReference",
  "ArrayCreationExpression", "DimExprs", "DimExpr", "Expression",
  "AssignmentExpression", "Assignment", "LeftHandSide",
  "AssignmentOperator", "ConditionalExpression", "ConditionalOrExpression",
  "ConditionalAndExpression", "InclusiveOrExpression",
  "ExclusiveOrExpression", "AndExpression", "EqualityExpression",
  "RelationalExpression", "ShiftExpression", "AdditiveExpression",
  "MultiplicativeExpression", "UnaryExpression", "PreIncrementExpression",
  "PreDecrementExpression", "UnaryExpressionNotPlusMinus",
  "PostfixExpression", "PostIncrementExpression",
  "PostDecrementExpression", "CastExpression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-410)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-274)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -9,   -21,    40,  -410,    52,   -33,  -410,  -410,  -410,  -410,
     -11,   -15,  -410,  -410,    59,  -410,   423,  -410,  -410,  -410,
    -410,  -410,  -410,  -410,  -410,  -410,  -410,    37,    91,  -410,
    -410,     7,  -410,    20,   102,    94,  -410,  -410,  -410,  -410,
    -410,  -410,    71,  -410,  -410,   199,  -410,   -59,  -410,  -410,
      81,  1271,  -410,    95,  -410,    76,   108,   113,     5,   160,
    -410,   163,  -410,   113,  -410,   102,   -59,    81,  -410,  -410,
    -410,  1333,  -410,   -41,   121,   135,  -410,   -40,  1480,   133,
     142,  -410,    -2,   805,  1908,  1908,  1908,  -410,   610,   188,
      44,   143,  -410,  -410,   999,  -410,  -410,   204,  -410,  -410,
    -410,  -410,  -410,   207,  -410,  -410,  -410,  -410,  -410,  -410,
    -410,  -410,  -410,    90,   218,  -410,    15,  -410,   902,  1002,
      27,  -410,  -410,  -410,  1068,  -410,  -410,    84,   175,   179,
     490,   805,  -410,    -7,   229,   228,   238,  -410,   240,  -410,
     243,   113,   188,  -410,  1653,   201,  -410,  -410,   245,  1067,
    1135,   242,  -410,  1970,  1908,   250,  -410,   260,  1908,  1908,
    1908,  1908,  1908,  -410,  1334,    44,   143,  -410,  -410,   253,
    -410,  -410,  -410,    86,   286,   287,   285,   288,   224,   125,
     116,   236,   134,  -410,  -410,  -410,  -410,    84,  -410,  -410,
    -410,   316,  1908,  1395,  1715,     4,   262,    39,  -410,  -410,
    -410,  -410,   267,  -410,  -410,  -410,  -410,  -410,  -410,  -410,
    -410,  -410,  -410,  -410,  -410,  1565,   -12,   -36,   114,  1908,
      94,   263,   320,   132,   -32,  -410,  -410,  -410,  -410,   -31,
     312,  1908,  1908,  -410,  -410,    94,   274,   188,  -410,   152,
    -410,  -410,   593,  -410,  -410,  1542,  -410,  -410,  -410,  -410,
    1738,  -410,  -410,  1203,  -410,  -410,   188,  -410,  -410,   268,
    -410,   271,   278,  -410,  -410,  -410,  -410,  -410,    93,  -410,
    1908,  1908,  1908,  1908,  1908,  1908,  1908,  1908,  1908,  1908,
    1908,  1908,   805,  1908,  1908,  1908,  1908,  1908,  1908,  1908,
    1908,  -410,   279,  -410,  -410,   -25,  -410,  1800,  1565,   197,
     262,  -410,   197,   262,  -410,   276,  -410,  -410,   282,   -21,
    -410,  -410,  -410,   334,  -410,  -410,   335,  -410,  -410,   291,
    -410,  -410,   283,  -410,   113,    94,  -410,   363,   188,   238,
    -410,  -410,   289,    79,  -410,   290,    46,  -410,   -29,  1908,
    1970,  1457,  1908,   319,   286,   287,   285,   288,   224,   125,
     125,   116,   116,   116,   116,    94,  -410,  -410,   236,   236,
     236,   134,   134,  -410,  -410,  -410,  1395,  -410,  1908,   -15,
      57,   294,  -410,   113,  -410,  -410,   113,  -410,  1823,    70,
    -410,  -410,  1885,  -410,   113,  -410,  -410,  -410,  1627,  -410,
     292,  1908,   293,  -410,  -410,   296,   302,   305,     3,  -410,
     380,   381,  -410,  -410,  -410,  -410,  -410,  -410,  -410,  1908,
    -410,  -410,  -410,   -15,  -410,  -410,    77,  -410,    78,  -410,
    -410,  -410,   314,  1970,  1970,  1908,  1908,  1457,  1395,  -410,
    -410,  -410,  -410,  1395,   324,  -410,   271,   188,   330,   325,
     331,  -410,  -410,  -410,  1395,   -27,  1908,  1457,  1457,  -410,
    1908,   332,   408,  -410,   341,  1970,  1457,  1457,   343,  -410,
    -410,  1457,  -410
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       2,     0,     0,     9,     0,     5,     4,     8,    38,    10,
       0,     0,     1,     3,     0,     7,     0,    39,    11,    16,
      52,    25,    19,    51,    21,    20,    23,     0,     0,    22,
      24,    10,    41,    26,     0,    12,    15,    17,    18,    13,
      14,    47,     0,    42,    45,     0,    46,     0,    43,    44,
       0,     0,    82,     0,    64,     0,     0,    29,    58,     0,
      54,    56,    63,    28,    40,     0,     0,     0,    81,    62,
      80,     0,    84,     0,     0,     0,   163,     0,     0,     0,
       0,   161,    10,     0,     0,     0,     0,   118,   271,     0,
      12,    14,    97,   112,     0,    94,    96,     0,    98,   101,
     113,   102,   114,     0,   103,   104,   105,   106,   134,   135,
     115,   116,   117,   270,   159,   162,   166,   176,   167,   168,
     169,   170,   160,   122,     0,   123,   124,     0,   125,   126,
       0,     0,    86,     0,     0,     0,    73,    71,    69,    31,
       0,    57,     0,    50,     0,     0,    61,    83,   163,     0,
       0,     0,   156,   139,     0,     0,   154,    10,     0,     0,
       0,     0,     0,   158,   271,     0,     0,   166,   169,     0,
     208,   210,   209,   227,   229,   231,   233,   235,   237,   239,
     242,   248,   252,   255,   259,   260,   263,   266,   272,   273,
     269,     0,     0,     0,     0,     0,     0,   271,   167,   168,
     264,   265,     0,   215,   219,   220,   216,   217,   218,   224,
     226,   225,   221,   222,   223,     0,     0,     0,    29,     0,
      58,   100,     0,    28,     0,    93,    95,    99,   121,     0,
       0,     0,     0,   274,   275,    66,     0,     0,    78,    58,
      76,    85,     0,    30,    53,     0,    60,    55,    59,    49,
       0,    90,    89,     0,    88,   155,     0,   147,   149,     0,
     140,   146,     0,   153,   261,   262,   268,   267,     0,   157,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   175,     0,   119,   187,     0,   193,     0,     0,     0,
     202,   205,     0,   200,   165,     0,   164,   172,    11,     0,
     177,   194,   197,     0,   212,   174,     0,   195,   198,   183,
     178,   196,     0,   211,    68,    65,    75,     0,     0,    72,
      70,    35,     0,     0,    36,     0,     0,    87,    56,   141,
       0,     0,     0,     0,   230,   232,   234,   236,   238,   241,
     240,   243,   244,   246,   245,     0,   247,    27,   249,   250,
     251,   253,   254,   256,   257,   258,     0,   186,     0,   182,
       0,     0,   204,   201,   206,   203,   199,   184,     0,     0,
     171,   173,     0,   185,    67,    79,    34,    33,     0,    91,
       0,     0,     0,   142,   150,     0,     0,     0,    10,   129,
       0,   101,   108,   109,   110,   111,   136,   137,   276,     0,
     132,   192,   181,   179,   207,   189,     0,   191,     0,    32,
      37,    92,     0,   143,   139,     0,     0,     0,     0,   228,
     180,   188,   190,     0,     0,   144,   148,     0,     0,     0,
       0,   120,   130,   151,     0,    56,   141,     0,     0,   138,
       0,     0,     0,   133,     0,   143,     0,     0,     0,   131,
     152,     0,   145
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -410,  -410,  -410,   432,    -1,     2,   548,  -410,  -410,  -410,
     104,   198,   699,  -266,  -410,    22,  -410,  -352,  -410,  -410,
    -410,  -410,     0,   300,  -120,  -242,  -410,   399,   415,   317,
    -410,   208,   212,  -410,   389,  -410,  -410,   401,   391,  -410,
    -410,   -17,   -64,   -92,  -410,  -134,  -112,  -385,  -263,  -410,
    -410,  -410,  -410,  -125,  -410,  -410,  -410,  -410,  -410,  -410,
    -410,  -410,    36,    26,     6,  -410,  -410,  -410,  -409,  -410,
    -410,  -410,  -410,  -410,  -410,  -410,  -410,   -46,  -143,   598,
     638,   -28,  -244,  -410,  -410,   277,  -223,   563,  -410,    73,
    -410,   350,    67,  -410,   206,   209,   210,   205,   211,    48,
     -23,   -47,    47,    21,   112,   153,  -410,   272,   318,   398,
    -410
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     4,     5,     6,   164,    89,   165,    36,    37,    38,
      39,   166,   141,   246,   333,    92,     8,    17,    42,    43,
      44,    45,   221,    60,    61,   247,    46,    47,    62,   134,
     135,   136,   137,   138,    69,    48,    49,    50,    72,   149,
     251,    93,    94,    95,    96,    97,    98,   400,    99,   100,
     101,   402,   102,   103,   104,   105,   403,   106,   404,   107,
     405,   108,   259,   392,   434,   406,   260,   435,   261,   109,
     407,   110,   111,   112,   113,   114,   115,   167,   117,   118,
     119,   168,   295,   121,   122,   300,   301,   296,   170,   171,
     124,   219,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,     1,   226,   334,   306,   116,   336,   150,     2,   238,
      52,   151,   155,   240,   436,    33,   311,   412,    34,   257,
     317,   319,     7,   120,   144,   116,   144,     7,   258,   307,
      70,     9,     2,   372,    59,    51,   375,   391,    41,   450,
     308,    68,   441,   120,    33,   239,   436,    65,   116,    70,
      88,   312,    12,   370,    33,   318,   309,   133,   226,   152,
     156,   430,   452,   453,   193,   145,   120,     3,   367,   427,
      88,   459,   460,   310,   368,   309,   462,   374,   401,    16,
     374,   293,   195,   197,   197,   253,   320,    14,    19,    15,
     194,     3,    11,    88,    21,   194,   297,   130,    22,    55,
     298,    56,    14,   116,   116,   200,   201,   116,  -128,    24,
      25,    18,    26,   131,  -128,  -128,    56,   326,    14,    29,
    -127,   120,   120,    30,   123,   120,  -127,  -127,     9,    33,
      33,    51,   133,   237,   416,   215,   338,   216,   418,   390,
      56,   217,   222,    53,   123,   368,   420,   116,    88,    88,
     413,   270,    88,   271,    58,   256,   368,   197,   197,   197,
     197,   226,   297,   125,   401,   120,    64,   123,    14,   132,
     431,   432,   233,   234,   387,    71,   368,   368,   388,   264,
     265,   266,   267,   125,   401,   401,   342,   130,   229,    56,
      56,   222,   230,   401,   401,   283,   284,   285,   401,   278,
     279,   280,   281,   282,   126,   139,   125,   116,   240,   140,
     140,    19,   313,   153,    40,   394,   144,    21,   288,   289,
     290,    22,   123,   123,   126,   120,   123,   154,   140,   399,
     316,   191,    24,    25,   192,    26,   358,   359,   360,    28,
     220,    33,    29,    40,   328,   224,    30,   126,    56,    91,
     327,    31,    88,    40,   410,   351,   352,   353,   354,   142,
     143,   125,   125,  -272,  -272,   125,   123,  -273,  -273,    91,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,    33,   197,   197,   197,   197,   197,   197,   197,   197,
     257,   245,    91,   140,   116,   116,   276,   277,   258,   258,
     142,   249,   126,   126,   227,   125,   126,   228,   379,   363,
     364,   365,   120,   120,   231,   293,   442,   445,   286,   287,
     116,   443,   241,   127,   349,   350,   123,   242,    40,    40,
     258,   -77,   449,   361,   362,   399,   410,   250,   120,   -74,
     243,   197,   255,   127,   442,   443,   126,    91,    91,   449,
     263,    91,   194,   269,   272,   274,   273,   291,   298,   275,
     304,   315,   142,   408,   321,   125,   127,   325,   339,   128,
     340,   341,   366,   377,   378,   380,   381,   116,   116,   385,
     383,   116,   116,   382,   386,   409,   356,   116,   424,   128,
     389,   414,   421,   423,   425,   120,   120,   426,   116,   120,
     120,   116,   116,   428,  -107,   120,   126,   433,   197,   116,
     116,   116,   128,   123,   123,   116,   120,   444,   447,   120,
     120,   127,   127,    88,   448,   127,   437,   120,   120,   120,
     446,   456,   455,   120,   457,    19,   461,    13,    20,   123,
      40,    21,   244,    54,    66,    22,    67,   236,    23,   129,
     329,    91,   125,   125,   330,   146,    24,    25,   147,    26,
     438,   458,    27,    28,     2,   127,    29,   128,   128,   129,
      30,   128,   451,   303,   232,    31,   429,   344,   125,   347,
     357,   345,     0,   346,     0,     0,   348,     0,     0,     0,
       0,     0,   129,   126,   126,     0,   123,   123,     0,     0,
     123,   123,    19,     0,     0,     0,   123,     0,    21,     0,
       0,   128,    22,     0,     0,     0,     0,   123,    32,   126,
     123,   123,     0,    24,    25,   127,    26,   131,   123,   123,
     123,     0,     0,    29,   123,   125,   125,    30,     0,   125,
     125,     0,     9,     0,     0,   125,     0,   129,   129,     0,
       0,   129,     0,     0,     0,     0,   125,     0,     0,   125,
     125,     0,     0,     0,    35,     0,     0,   125,   125,   125,
       0,   128,     0,   125,     0,     0,   126,   126,     0,     0,
     126,   126,     0,   235,     0,     0,   126,     0,     0,     0,
       0,   129,     0,    35,     0,     0,     0,   126,     0,    90,
     126,   126,     0,    35,     0,    19,     0,     0,   126,   126,
     126,    21,   127,   127,   126,    22,     0,     0,     0,    90,
       0,     0,    91,     0,     0,     0,    24,    25,     0,    26,
     131,   196,     0,     0,     0,     0,    29,     0,   127,     0,
      30,   169,    90,     0,     0,     9,     0,     0,     0,   202,
       0,   129,     0,     0,     0,     0,     0,     0,   128,   128,
       0,     0,   -26,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,     0,     0,     0,    35,    35,
       0,     0,   198,   198,   128,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   127,   127,    90,    90,   127,
     127,    90,     0,     0,     0,   127,   215,   248,   216,     0,
     268,     0,   217,     0,     0,     0,   127,   262,     0,   127,
     127,     0,   199,   199,     0,   202,     0,   127,   127,   127,
       0,     0,    57,   127,    63,     0,     0,     0,   129,   129,
       0,   128,   128,     0,     0,   128,   128,     0,     0,     0,
       0,   128,     0,     0,     0,   292,   198,   198,   198,   198,
       0,     0,   128,     0,   129,   128,   128,     0,     0,     0,
       0,     0,     0,   128,   128,   128,     0,     0,   305,   128,
       0,     0,   314,     0,     0,     0,     0,   218,     0,   223,
      35,     0,     0,     0,   322,   323,   199,   199,   199,   199,
       0,    90,     0,     0,     0,     0,     0,     0,   248,     0,
       0,     0,     0,     0,     0,     0,     0,    19,     0,     0,
       0,   129,   129,    21,     0,   129,   129,    22,     0,     0,
     355,   129,     0,   343,     0,     0,     0,     0,    24,    25,
       0,    26,   129,     0,     0,   129,   129,     0,    29,     0,
       0,     0,    30,   129,   129,   129,     0,     9,     0,   129,
       0,   371,     0,   218,   223,     0,     0,     0,     0,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
       0,   198,   198,   198,   198,   198,   198,   198,   198,     0,
       0,     0,     0,     0,   299,   302,   218,     0,     0,     0,
       0,     0,   393,     0,     0,     0,     0,     0,     0,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
       0,   199,   199,   199,   199,   199,   199,   199,   199,     0,
       0,   411,     0,     0,   324,     0,     0,     0,     0,     0,
     198,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   248,     0,     0,   422,  -213,  -213,  -213,  -213,  -213,
    -213,  -213,  -213,  -213,  -213,  -213,  -213,   223,     0,     0,
       0,     0,    90,     0,     0,     0,     0,     0,     0,     0,
     199,     0,     0,     0,     0,     0,     0,     0,   439,   440,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   373,
       0,     0,   376,    73,    74,     0,     0,   198,    75,   393,
       0,    19,     0,   454,     0,    76,    77,    21,     0,     0,
       0,    22,     0,     0,   384,     0,     0,     0,    78,     0,
       0,     0,    24,    25,     0,    26,     0,     0,     0,    79,
       2,     0,    29,     0,     0,     0,    30,   199,     0,    80,
      81,    82,     0,     0,    63,  -214,  -214,  -214,  -214,  -214,
    -214,  -214,  -214,  -214,  -214,  -214,  -214,     0,     0,     0,
       0,    73,    74,     0,     0,     0,    75,     0,     0,    19,
       0,     0,     0,    76,    77,    21,    83,    84,    85,    22,
       0,    86,     0,    51,   225,     0,    78,     0,     0,    87,
      24,    25,     0,    26,     0,     0,     0,    79,     2,     0,
      29,     0,     0,     0,    30,     0,     0,    80,    81,    82,
       0,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,     0,     0,     0,     0,     0,     0,    73,
      74,     0,     0,     0,    75,     0,     0,    19,     0,     0,
       0,    76,    77,    21,    83,    84,    85,    22,     0,    86,
       0,    51,   252,     0,    78,     0,     0,    87,    24,    25,
       0,    26,     0,     0,     0,    79,     2,     0,    29,     0,
       0,     0,    30,     0,     0,    80,    81,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,    74,     0,
       0,     0,    75,     0,     0,    19,     0,     0,     0,    76,
      77,    21,    83,    84,    85,    22,     0,    86,     0,    51,
     254,     0,    78,     0,     0,    87,    24,    25,     0,    26,
       0,     0,     0,    79,     2,     0,    29,     0,     0,     0,
      30,     0,     0,    80,    81,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,    74,     0,     0,     0,
      75,     0,     0,    19,     0,     0,     0,    76,    77,    21,
      83,    84,    85,    22,     0,    86,     0,    51,   337,     0,
      78,     0,     0,    87,    24,    25,     0,    26,     0,     0,
       0,    79,     2,     0,    29,     0,     0,     0,    30,     0,
       0,    80,    81,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,    74,     0,
       0,     0,    75,     0,     0,    19,     0,     0,     0,   148,
      77,    21,     0,     0,     0,    22,     0,     0,    83,    84,
      85,     0,    78,    86,     0,    51,    24,    25,     0,    26,
       0,    87,     0,    79,     2,     0,    29,     0,     0,     0,
      30,     0,     0,    80,    81,    82,     0,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,    73,
      74,     0,     0,     0,    75,     0,     0,    19,     0,     0,
       0,    76,    77,    21,     0,     0,     0,    22,     0,     0,
      83,    84,    85,     0,    78,    86,     0,    51,    24,    25,
     215,    26,   216,    87,     0,    79,   217,     0,    29,     0,
       0,     0,    30,     0,     0,    80,    81,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,   395,     0,     0,     0,   396,     0,     0,    19,
       0,     0,     0,    76,    77,    21,     0,     0,     0,    22,
       0,     0,    83,    84,    85,     0,    78,    86,     0,    51,
      24,    25,    19,    26,     0,    87,    76,    79,    21,     0,
      29,     0,    22,     0,    30,     0,     0,   397,    81,   398,
       0,     0,     0,    24,    25,     0,    26,     0,     0,     0,
      79,     0,     0,    29,     0,     0,     0,    30,     0,     0,
       0,    81,   157,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    83,    84,    85,     0,     0,    86,
       0,    51,     0,     0,    19,     0,     0,    87,    76,     0,
      21,     0,   158,   159,    22,     0,     0,    83,    84,    85,
     160,   161,   162,     0,     0,    24,    25,    19,    26,     0,
     163,    76,    79,    21,     0,    29,     0,    22,     0,    30,
       0,     0,     0,    81,   157,     0,     0,     0,    24,    25,
       0,    26,     0,     0,     0,    79,     0,     0,    29,     0,
       0,     0,    30,     0,     0,     0,    81,   157,     0,     0,
       0,     0,     0,     0,   158,   159,     0,     0,     0,    83,
      84,    85,   160,   161,   162,     0,   245,   331,     0,    19,
       0,   332,     0,    76,     0,    21,     0,   158,   159,    22,
       0,     0,    83,    84,    85,   160,   161,   162,     0,     0,
      24,    25,   139,    26,     0,    19,     0,    79,     0,    76,
      29,    21,     0,     0,    30,    22,     0,     0,    81,   157,
       0,     0,     0,     0,     0,     0,    24,    25,     0,    26,
       0,     0,     0,    79,     0,     0,    29,     0,     0,     0,
      30,     0,     0,     0,    81,   157,     0,     0,     0,   158,
     159,     0,     0,     0,    83,    84,    85,   160,   161,   162,
       0,   245,   419,     0,     0,     0,     0,    19,     0,     0,
       0,    76,     0,    21,     0,   158,   159,    22,     0,     0,
      83,    84,    85,   160,   161,   162,     0,   245,    24,    25,
      19,    26,     0,     0,    76,    79,    21,     0,    29,     0,
      22,     0,    30,     0,     0,     0,    81,   157,     0,     0,
       0,    24,    25,     0,    26,     0,     0,     0,    79,     0,
       0,    29,     0,     0,     0,    30,     0,     0,     0,    81,
     157,     0,     0,     0,     0,     0,     0,   158,   159,     0,
       0,     0,    83,    84,    85,   160,   161,   162,   294,     0,
       0,     0,    19,     0,     0,     0,    76,     0,    21,     0,
     158,   159,    22,     0,     0,    83,    84,    85,   160,   161,
     162,   335,     0,    24,    25,    19,    26,     0,     0,    76,
      79,    21,     0,    29,     0,    22,     0,    30,     0,     0,
       0,    81,   157,     0,     0,     0,    24,    25,     0,    26,
       0,     0,     0,    79,     0,     0,    29,     0,     0,     0,
      30,     0,     0,     0,    81,   157,     0,     0,     0,     0,
       0,     0,   158,   159,     0,     0,     0,    83,    84,    85,
     160,   161,   162,   369,     0,     0,     0,    19,     0,     0,
       0,    76,     0,    21,     0,   158,   159,    22,     0,     0,
      83,    84,    85,   160,   161,   162,   415,     0,    24,    25,
      19,    26,     0,     0,    76,    79,    21,     0,    29,     0,
      22,     0,    30,     0,     0,     0,    81,   157,     0,     0,
       0,    24,    25,     0,    26,     0,     0,     0,    79,     0,
       0,    29,     0,     0,     0,    30,     0,     0,     0,    81,
     157,     0,     0,     0,     0,     0,     0,   158,   159,     0,
       0,     0,    83,    84,    85,   160,   161,   162,   417,     0,
       0,     0,    19,     0,     0,     0,    76,     0,    21,     0,
     158,   159,    22,     0,     0,    83,    84,    85,   160,   161,
     162,     0,     0,    24,    25,     0,    26,     0,     0,     0,
      79,     0,     0,    29,     0,     0,     0,    30,     0,     0,
       0,    81,   157,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,    84,    85,
       0,     0,    86
};

static const yytype_int16 yycheck[] =
{
       1,    10,    94,   245,    16,    51,   250,    71,    41,    16,
      27,    52,    52,   133,   423,    16,    52,   369,    16,   153,
      52,    52,     0,    51,    53,    71,    53,     5,   153,    41,
      47,    52,    41,   299,    34,    94,   302,    66,    16,    66,
      52,   100,   427,    71,    45,    52,   455,    45,    94,    66,
      51,    87,     0,   297,    55,    87,    87,    55,   150,   100,
     100,   413,   447,   448,    66,    65,    94,   100,    93,    66,
      71,   456,   457,   216,    99,    87,   461,   300,   341,    94,
     303,   193,    83,    84,    85,   149,   229,    98,    12,   100,
      92,   100,    52,    94,    18,    92,    92,    92,    22,    92,
      96,    96,    98,   149,   150,    84,    85,   153,    93,    33,
      34,    52,    36,    37,    99,   100,    96,   237,    98,    43,
      93,   149,   150,    47,    51,   153,    99,   100,    52,   130,
     131,    94,   130,   131,   378,    96,   256,    98,   382,    93,
      96,   102,    98,    52,    71,    99,   388,   193,   149,   150,
      93,    65,   153,    67,    52,   153,    99,   158,   159,   160,
     161,   253,    92,    51,   427,   193,    95,    94,    98,    93,
      93,    93,    88,    89,    95,    94,    99,    99,    99,   158,
     159,   160,   161,    71,   447,   448,    93,    92,    98,    96,
      96,    98,   102,   456,   457,    79,    80,    81,   461,    74,
      75,    76,    77,    78,    51,    97,    94,   253,   328,    96,
      96,    12,    98,    92,    16,   340,    53,    18,    84,    85,
      86,    22,   149,   150,    71,   253,   153,    92,    96,   341,
      98,    98,    33,    34,    92,    36,   283,   284,   285,    40,
      52,   242,    43,    45,   242,   102,    47,    94,    96,    51,
      98,    52,   253,    55,   366,   278,   279,   280,   281,    99,
     100,   149,   150,    88,    89,   153,   193,    88,    89,    71,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     424,    94,    94,    96,   340,   341,    72,    73,   423,   424,
      99,   100,   149,   150,   100,   193,   153,   100,   309,   288,
     289,   290,   340,   341,    96,   427,   428,   437,    82,    83,
     366,   433,    93,    51,   276,   277,   253,    99,   130,   131,
     455,    93,   444,   286,   287,   447,   448,    92,   366,    99,
      97,   342,   100,    71,   456,   457,   193,   149,   150,   461,
     100,   153,    92,   100,    68,    70,    69,    41,    96,    71,
      93,    41,    99,   342,    52,   253,    94,    93,   100,    51,
      99,    93,    93,    97,    92,    41,    41,   423,   424,    16,
      97,   427,   428,    92,    95,    66,   282,   433,    92,    71,
     100,    97,   100,   100,    92,   423,   424,    92,   444,   427,
     428,   447,   448,    23,    23,   433,   253,    93,   409,   455,
     456,   457,    94,   340,   341,   461,   444,    93,    93,   447,
     448,   149,   150,   424,    93,   153,   424,   455,   456,   457,
     100,    23,   100,   461,    93,    12,    93,     5,    15,   366,
     242,    18,   142,    28,    45,    22,    45,   130,    25,    51,
     242,   253,   340,   341,   242,    66,    33,    34,    67,    36,
     424,   455,    39,    40,    41,   193,    43,   149,   150,    71,
      47,   153,   446,   196,   124,    52,   409,   271,   366,   274,
     282,   272,    -1,   273,    -1,    -1,   275,    -1,    -1,    -1,
      -1,    -1,    94,   340,   341,    -1,   423,   424,    -1,    -1,
     427,   428,    12,    -1,    -1,    -1,   433,    -1,    18,    -1,
      -1,   193,    22,    -1,    -1,    -1,    -1,   444,    95,   366,
     447,   448,    -1,    33,    34,   253,    36,    37,   455,   456,
     457,    -1,    -1,    43,   461,   423,   424,    47,    -1,   427,
     428,    -1,    52,    -1,    -1,   433,    -1,   149,   150,    -1,
      -1,   153,    -1,    -1,    -1,    -1,   444,    -1,    -1,   447,
     448,    -1,    -1,    -1,    16,    -1,    -1,   455,   456,   457,
      -1,   253,    -1,   461,    -1,    -1,   423,   424,    -1,    -1,
     427,   428,    -1,    93,    -1,    -1,   433,    -1,    -1,    -1,
      -1,   193,    -1,    45,    -1,    -1,    -1,   444,    -1,    51,
     447,   448,    -1,    55,    -1,    12,    -1,    -1,   455,   456,
     457,    18,   340,   341,   461,    22,    -1,    -1,    -1,    71,
      -1,    -1,   424,    -1,    -1,    -1,    33,    34,    -1,    36,
      37,    83,    -1,    -1,    -1,    -1,    43,    -1,   366,    -1,
      47,    78,    94,    -1,    -1,    52,    -1,    -1,    -1,    86,
      -1,   253,    -1,    -1,    -1,    -1,    -1,    -1,   340,   341,
      -1,    -1,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    -1,    -1,   130,   131,
      -1,    -1,    84,    85,   366,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   423,   424,   149,   150,   427,
     428,   153,    -1,    -1,    -1,   433,    96,   144,    98,    -1,
     162,    -1,   102,    -1,    -1,    -1,   444,   154,    -1,   447,
     448,    -1,    84,    85,    -1,   162,    -1,   455,   456,   457,
      -1,    -1,    33,   461,    35,    -1,    -1,    -1,   340,   341,
      -1,   423,   424,    -1,    -1,   427,   428,    -1,    -1,    -1,
      -1,   433,    -1,    -1,    -1,   192,   158,   159,   160,   161,
      -1,    -1,   444,    -1,   366,   447,   448,    -1,    -1,    -1,
      -1,    -1,    -1,   455,   456,   457,    -1,    -1,   215,   461,
      -1,    -1,   219,    -1,    -1,    -1,    -1,    88,    -1,    90,
     242,    -1,    -1,    -1,   231,   232,   158,   159,   160,   161,
      -1,   253,    -1,    -1,    -1,    -1,    -1,    -1,   245,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,   423,   424,    18,    -1,   427,   428,    22,    -1,    -1,
     282,   433,    -1,   270,    -1,    -1,    -1,    -1,    33,    34,
      -1,    36,   444,    -1,    -1,   447,   448,    -1,    43,    -1,
      -1,    -1,    47,   455,   456,   457,    -1,    52,    -1,   461,
      -1,   298,    -1,   164,   165,    -1,    -1,    -1,    -1,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
      -1,   283,   284,   285,   286,   287,   288,   289,   290,    -1,
      -1,    -1,    -1,    -1,   195,   196,   197,    -1,    -1,    -1,
      -1,    -1,   339,    -1,    -1,    -1,    -1,    -1,    -1,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
      -1,   283,   284,   285,   286,   287,   288,   289,   290,    -1,
      -1,   368,    -1,    -1,   235,    -1,    -1,    -1,    -1,    -1,
     342,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   388,    -1,    -1,   391,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,   268,    -1,    -1,
      -1,    -1,   424,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     342,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   425,   426,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   300,
      -1,    -1,   303,     4,     5,    -1,    -1,   409,     9,   446,
      -1,    12,    -1,   450,    -1,    16,    17,    18,    -1,    -1,
      -1,    22,    -1,    -1,   325,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    33,    34,    -1,    36,    -1,    -1,    -1,    40,
      41,    -1,    43,    -1,    -1,    -1,    47,   409,    -1,    50,
      51,    52,    -1,    -1,   355,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,     4,     5,    -1,    -1,    -1,     9,    -1,    -1,    12,
      -1,    -1,    -1,    16,    17,    18,    87,    88,    89,    22,
      -1,    92,    -1,    94,    95,    -1,    29,    -1,    -1,   100,
      33,    34,    -1,    36,    -1,    -1,    -1,    40,    41,    -1,
      43,    -1,    -1,    -1,    47,    -1,    -1,    50,    51,    52,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,     4,
       5,    -1,    -1,    -1,     9,    -1,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    87,    88,    89,    22,    -1,    92,
      -1,    94,    95,    -1,    29,    -1,    -1,   100,    33,    34,
      -1,    36,    -1,    -1,    -1,    40,    41,    -1,    43,    -1,
      -1,    -1,    47,    -1,    -1,    50,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,     5,    -1,
      -1,    -1,     9,    -1,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    87,    88,    89,    22,    -1,    92,    -1,    94,
      95,    -1,    29,    -1,    -1,   100,    33,    34,    -1,    36,
      -1,    -1,    -1,    40,    41,    -1,    43,    -1,    -1,    -1,
      47,    -1,    -1,    50,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     4,     5,    -1,    -1,    -1,
       9,    -1,    -1,    12,    -1,    -1,    -1,    16,    17,    18,
      87,    88,    89,    22,    -1,    92,    -1,    94,    95,    -1,
      29,    -1,    -1,   100,    33,    34,    -1,    36,    -1,    -1,
      -1,    40,    41,    -1,    43,    -1,    -1,    -1,    47,    -1,
      -1,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,     5,    -1,
      -1,    -1,     9,    -1,    -1,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    -1,    -1,    22,    -1,    -1,    87,    88,
      89,    -1,    29,    92,    -1,    94,    33,    34,    -1,    36,
      -1,   100,    -1,    40,    41,    -1,    43,    -1,    -1,    -1,
      47,    -1,    -1,    50,    51,    52,    -1,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,     4,
       5,    -1,    -1,    -1,     9,    -1,    -1,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    -1,    -1,    22,    -1,    -1,
      87,    88,    89,    -1,    29,    92,    -1,    94,    33,    34,
      96,    36,    98,   100,    -1,    40,   102,    -1,    43,    -1,
      -1,    -1,    47,    -1,    -1,    50,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     4,     5,    -1,    -1,    -1,     9,    -1,    -1,    12,
      -1,    -1,    -1,    16,    17,    18,    -1,    -1,    -1,    22,
      -1,    -1,    87,    88,    89,    -1,    29,    92,    -1,    94,
      33,    34,    12,    36,    -1,   100,    16,    40,    18,    -1,
      43,    -1,    22,    -1,    47,    -1,    -1,    50,    51,    52,
      -1,    -1,    -1,    33,    34,    -1,    36,    -1,    -1,    -1,
      40,    -1,    -1,    43,    -1,    -1,    -1,    47,    -1,    -1,
      -1,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    88,    89,    -1,    -1,    92,
      -1,    94,    -1,    -1,    12,    -1,    -1,   100,    16,    -1,
      18,    -1,    82,    83,    22,    -1,    -1,    87,    88,    89,
      90,    91,    92,    -1,    -1,    33,    34,    12,    36,    -1,
     100,    16,    40,    18,    -1,    43,    -1,    22,    -1,    47,
      -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    33,    34,
      -1,    36,    -1,    -1,    -1,    40,    -1,    -1,    43,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    83,    -1,    -1,    -1,    87,
      88,    89,    90,    91,    92,    -1,    94,    95,    -1,    12,
      -1,    99,    -1,    16,    -1,    18,    -1,    82,    83,    22,
      -1,    -1,    87,    88,    89,    90,    91,    92,    -1,    -1,
      33,    34,    97,    36,    -1,    12,    -1,    40,    -1,    16,
      43,    18,    -1,    -1,    47,    22,    -1,    -1,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    -1,    36,
      -1,    -1,    -1,    40,    -1,    -1,    43,    -1,    -1,    -1,
      47,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    82,
      83,    -1,    -1,    -1,    87,    88,    89,    90,    91,    92,
      -1,    94,    95,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    16,    -1,    18,    -1,    82,    83,    22,    -1,    -1,
      87,    88,    89,    90,    91,    92,    -1,    94,    33,    34,
      12,    36,    -1,    -1,    16,    40,    18,    -1,    43,    -1,
      22,    -1,    47,    -1,    -1,    -1,    51,    52,    -1,    -1,
      -1,    33,    34,    -1,    36,    -1,    -1,    -1,    40,    -1,
      -1,    43,    -1,    -1,    -1,    47,    -1,    -1,    -1,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,    -1,
      -1,    -1,    87,    88,    89,    90,    91,    92,    93,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    16,    -1,    18,    -1,
      82,    83,    22,    -1,    -1,    87,    88,    89,    90,    91,
      92,    93,    -1,    33,    34,    12,    36,    -1,    -1,    16,
      40,    18,    -1,    43,    -1,    22,    -1,    47,    -1,    -1,
      -1,    51,    52,    -1,    -1,    -1,    33,    34,    -1,    36,
      -1,    -1,    -1,    40,    -1,    -1,    43,    -1,    -1,    -1,
      47,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    83,    -1,    -1,    -1,    87,    88,    89,
      90,    91,    92,    93,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    16,    -1,    18,    -1,    82,    83,    22,    -1,    -1,
      87,    88,    89,    90,    91,    92,    93,    -1,    33,    34,
      12,    36,    -1,    -1,    16,    40,    18,    -1,    43,    -1,
      22,    -1,    47,    -1,    -1,    -1,    51,    52,    -1,    -1,
      -1,    33,    34,    -1,    36,    -1,    -1,    -1,    40,    -1,
      -1,    43,    -1,    -1,    -1,    47,    -1,    -1,    -1,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,    -1,
      -1,    -1,    87,    88,    89,    90,    91,    92,    93,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    16,    -1,    18,    -1,
      82,    83,    22,    -1,    -1,    87,    88,    89,    90,    91,
      92,    -1,    -1,    33,    34,    -1,    36,    -1,    -1,    -1,
      40,    -1,    -1,    43,    -1,    -1,    -1,    47,    -1,    -1,
      -1,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,
      -1,    -1,    92
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    41,   100,   105,   106,   107,   119,   120,    52,
     108,    52,     0,   107,    98,   100,    94,   121,    52,    12,
      15,    18,    22,    25,    33,    34,    36,    39,    40,    43,
      47,    52,    95,   108,   109,   110,   111,   112,   113,   114,
     115,   119,   122,   123,   124,   125,   130,   131,   139,   140,
     141,    94,   145,    52,   132,    92,    96,   116,    52,   126,
     127,   128,   132,   116,    95,   109,   131,   141,   100,   138,
     145,    94,   142,     4,     5,     9,    16,    17,    29,    40,
      50,    51,    52,    87,    88,    89,    92,   100,   108,   109,
     110,   115,   119,   145,   146,   147,   148,   149,   150,   152,
     153,   154,   156,   157,   158,   159,   161,   163,   165,   173,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   187,   188,   193,   194,   208,   209,   211,   212,   213,
      92,    37,    93,   109,   133,   134,   135,   136,   137,    97,
      96,   116,    99,   100,    53,   126,   138,   142,    16,   143,
     146,    52,   100,    92,    92,    52,   100,    52,    82,    83,
      90,    91,    92,   100,   108,   110,   115,   181,   185,   191,
     192,   193,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,    98,    92,    66,    92,   108,   110,   108,   183,   184,
     207,   207,   191,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    96,    98,   102,   116,   195,
      52,   126,    98,   116,   102,    95,   147,   100,   100,    98,
     102,    96,   195,    88,    89,    93,   133,   109,    16,    52,
     128,    93,    99,    97,   127,    94,   117,   129,   191,   100,
      92,   144,    95,   146,    95,   100,   109,   149,   157,   166,
     170,   172,   191,   100,   207,   207,   207,   207,   110,   100,
      65,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    41,   191,   150,    93,   186,   191,    92,    96,   116,
     189,   190,   116,   189,    93,   191,    16,    41,    52,    87,
     182,    52,    87,    98,   191,    41,    98,    52,    87,    52,
     182,    52,   191,   191,   116,    93,   128,    98,   109,   135,
     136,    95,    99,   118,   129,    93,   186,    95,   128,   100,
      99,    93,    93,   191,   198,   199,   200,   201,   202,   203,
     203,   204,   204,   204,   204,   110,   114,   115,   205,   205,
     205,   206,   206,   207,   207,   207,    93,    93,    99,    93,
     186,   191,   117,   116,   190,   117,   116,    97,    92,   108,
      41,    41,    92,    97,   116,    16,    95,    95,    99,   100,
      93,    66,   167,   191,   157,     5,     9,    50,    52,   150,
     151,   152,   155,   160,   162,   164,   169,   174,   207,    66,
     150,   191,   121,    93,    97,    93,   186,    93,   186,    95,
     129,   100,   191,   100,    92,    92,    92,    66,    23,   196,
     121,    93,    93,    93,   168,   171,   172,   109,   166,   191,
     191,   151,   150,   150,    93,   128,   100,    93,    93,   150,
      66,   167,   151,   151,   191,   100,    23,    93,   168,   151,
     151,    93,   151
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   104,   105,   105,   105,   105,   105,   106,   107,   107,
     108,   108,   109,   109,   109,   110,   110,   111,   111,   112,
     112,   112,   112,   112,   113,   113,   114,   114,   115,   115,
     116,   116,   117,   117,   117,   117,   118,   118,   119,   120,
     121,   121,   122,   122,   122,   123,   123,   123,   123,   124,
     124,   125,   125,   126,   126,   127,   127,   128,   128,   129,
     129,   130,   130,   131,   131,   132,   132,   132,   132,   133,
     133,   133,   134,   134,   134,   135,   135,   136,   137,   137,
     138,   138,   139,   140,   140,   141,   141,   142,   142,   142,
     143,   144,   144,   145,   146,   146,   147,   147,   147,   148,
     149,   150,   150,   150,   150,   150,   150,   151,   151,   151,
     151,   151,   152,   152,   152,   152,   152,   152,   153,   154,
     155,   156,   157,   157,   157,   157,   157,   157,   157,   158,
     159,   160,   161,   162,   163,   163,   164,   164,   165,   166,
     166,   167,   167,   168,   168,   169,   170,   170,   171,   172,
     172,   173,   174,   175,   175,   176,   176,   177,   177,   178,
     178,   179,   179,   179,   179,   179,   179,   179,   179,   179,
     179,   180,   180,   180,   180,   180,   181,   181,   181,   182,
     182,   182,   182,   183,   184,   184,   185,   185,   185,   185,
     185,   185,   186,   186,   187,   187,   187,   187,   187,   188,
     188,   188,   188,   188,   188,   189,   189,   190,   191,   192,
     192,   193,   193,   194,   194,   195,   195,   195,   195,   195,
     195,   195,   195,   195,   195,   195,   195,   196,   196,   197,
     197,   198,   198,   199,   199,   200,   200,   201,   201,   202,
     202,   202,   203,   203,   203,   203,   203,   203,   204,   204,
     204,   204,   205,   205,   205,   206,   206,   206,   206,   207,
     207,   207,   207,   207,   208,   209,   210,   210,   210,   210,
     211,   211,   211,   211,   212,   213,   214
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     0,     3,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       3,     2,     4,     3,     3,     2,     1,     3,     1,     3,
       3,     2,     1,     1,     1,     1,     1,     1,     0,     4,
       3,     1,     1,     3,     1,     3,     1,     2,     1,     1,
       1,     3,     2,     2,     2,     4,     3,     5,     4,     1,
       3,     1,     3,     1,     1,     3,     2,     1,     2,     4,
       1,     1,     2,     3,     2,     4,     3,     4,     3,     3,
       2,     3,     4,     3,     1,     2,     1,     1,     1,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     2,     1,     1,     1,     1,     1,     1,     1,     5,
       7,     7,     5,     5,     1,     1,     1,     1,     9,     0,
       1,     0,     1,     0,     1,     9,     1,     1,     1,     1,
       3,     8,     8,     3,     2,     3,     2,     3,     2,     1,
       1,     1,     1,     1,     3,     3,     1,     1,     1,     1,
       1,     4,     3,     4,     3,     3,     1,     3,     3,     5,
       6,     5,     4,     3,     4,     4,     4,     3,     6,     5,
       6,     5,     3,     1,     3,     3,     3,     3,     3,     4,
       3,     4,     3,     4,     4,     1,     2,     3,     1,     1,
       1,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     3,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       1,     2,     2,     1,     2,     2,     1,     2,     2,     1,
       1,     1,     1,     1,     2,     2,     4
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
  case 3: /* CompilationUnit: PackageDeclaration TypeDeclaration  */
#line 105 "parser.y"
                                              {Node * temp=createNode("EOF","<EOF>",{}); root =createNode("compilationUnit","",{(yyvsp[-1].node),(yyvsp[0].node),temp});}
#line 1996 "parser.tab.c"
    break;

  case 4: /* CompilationUnit: TypeDeclaration  */
#line 106 "parser.y"
                           {Node * temp=createNode("EOF","<EOF>",{}); root =createNode("compilationUnit","",{(yyvsp[0].node),temp});}
#line 2002 "parser.tab.c"
    break;

  case 5: /* CompilationUnit: PackageDeclaration  */
#line 107 "parser.y"
                              {Node * temp=createNode("EOF","<EOF>",{}); root =createNode("compilationUnit","",{(yyvsp[0].node),temp});}
#line 2008 "parser.tab.c"
    break;

  case 6: /* CompilationUnit: %empty  */
#line 108 "parser.y"
                   {Node * temp=createNode("EOF","<EOF>",{}); root =createNode("compilationUnit","",{temp});}
#line 2014 "parser.tab.c"
    break;

  case 7: /* PackageDeclaration: PACKAGE TypeName ';'  */
#line 111 "parser.y"
                               { Node *temp1=createNode("PACKAGE",(yyvsp[-2].str),{});Node *temp3=createNode("Separator",(yyvsp[0].str),{}); (yyval.node)=createNode("PackageDeclaration","",{temp1,(yyvsp[-1].node),temp3}); }
#line 2020 "parser.tab.c"
    break;

  case 8: /* TypeDeclaration: ClassDeclaration  */
#line 115 "parser.y"
                       {(yyval.node) = (yyvsp[0].node);}
#line 2026 "parser.tab.c"
    break;

  case 10: /* TypeName: IDENTIFIER  */
#line 120 "parser.y"
                                       { (yyval.node) = createNode("Identifier",(yyvsp[0].str), {}); }
#line 2032 "parser.tab.c"
    break;

  case 11: /* TypeName: TypeName '.' IDENTIFIER  */
#line 121 "parser.y"
                                       { Node* l = createNode("ID", (yyvsp[0].str), {}); Node* temp = createNode("Separator", (yyvsp[-1].str), {}); (yyvsp[-2].node)->children.push_back(l); (yyvsp[-2].node)->children.push_back(temp); (yyval.node) = (yyvsp[-2].node); }
#line 2038 "parser.tab.c"
    break;

  case 12: /* Type: PrimitiveType  */
#line 127 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2044 "parser.tab.c"
    break;

  case 13: /* Type: ReferenceType  */
#line 128 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2050 "parser.tab.c"
    break;

  case 14: /* Type: ArrayType  */
#line 129 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2056 "parser.tab.c"
    break;

  case 15: /* PrimitiveType: NumericType  */
#line 133 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2062 "parser.tab.c"
    break;

  case 16: /* PrimitiveType: BOOLEAN  */
#line 134 "parser.y"
                                { (yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2068 "parser.tab.c"
    break;

  case 17: /* NumericType: IntegralType  */
#line 138 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2074 "parser.tab.c"
    break;

  case 18: /* NumericType: FloatingPointType  */
#line 139 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2080 "parser.tab.c"
    break;

  case 19: /* IntegralType: BYTE  */
#line 143 "parser.y"
                                { (yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2086 "parser.tab.c"
    break;

  case 20: /* IntegralType: SHORT  */
#line 144 "parser.y"
                                { (yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2092 "parser.tab.c"
    break;

  case 21: /* IntegralType: INT  */
#line 145 "parser.y"
                                { (yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2098 "parser.tab.c"
    break;

  case 22: /* IntegralType: LONG  */
#line 146 "parser.y"
                                { (yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2104 "parser.tab.c"
    break;

  case 23: /* IntegralType: CHAR  */
#line 147 "parser.y"
                                { (yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2110 "parser.tab.c"
    break;

  case 24: /* FloatingPointType: FLOAT  */
#line 151 "parser.y"
                                { (yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2116 "parser.tab.c"
    break;

  case 25: /* FloatingPointType: DOUBLE  */
#line 152 "parser.y"
                                { (yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2122 "parser.tab.c"
    break;

  case 26: /* ReferenceType: TypeName  */
#line 156 "parser.y"
                { (yyval.node) = (yyvsp[0].node); }
#line 2128 "parser.tab.c"
    break;

  case 27: /* ReferenceType: ArrayType  */
#line 157 "parser.y"
                { (yyval.node) = (yyvsp[0].node); }
#line 2134 "parser.tab.c"
    break;

  case 28: /* ArrayType: PrimitiveType Dims  */
#line 160 "parser.y"
                        { (yyval.node) = createNode("ArrayType","",{(yyvsp[-1].node),(yyvsp[0].node)});}
#line 2140 "parser.tab.c"
    break;

  case 29: /* ArrayType: TypeName Dims  */
#line 161 "parser.y"
                     { (yyval.node) = createNode("ArrayType","",{(yyvsp[-1].node),(yyvsp[0].node)});}
#line 2146 "parser.tab.c"
    break;

  case 30: /* Dims: Dims '[' ']'  */
#line 164 "parser.y"
                  { (yyval.node) = (yyvsp[-2].node);Node *temp1 = createNode("Separator",(yyvsp[-1].str),{});Node *temp3 = createNode("Separator",(yyvsp[0].str),{}); (yyval.node)->children.push_back(temp1);(yyval.node)->children.push_back(temp3);}
#line 2152 "parser.tab.c"
    break;

  case 31: /* Dims: '[' ']'  */
#line 165 "parser.y"
                   {Node *temp1 = createNode("Separator",(yyvsp[-1].str),{}); Node *temp3 = createNode("Separator",(yyvsp[0].str),{});  ;(yyval.node) = createNode("DIMS","",{temp1,temp3}); }
#line 2158 "parser.tab.c"
    break;

  case 32: /* ArrayInitializer: '{' VariableInitializerList ',' '}'  */
#line 170 "parser.y"
                                                           { Node *temp1=createNode("Separator",(yyvsp[-3].str),{});Node *temp3=createNode("Separator",(yyvsp[-1].str),{});Node *temp4=createNode("Separator",(yyvsp[0].str),{}); (yyval.node)=createNode("ArrayInitializer","",{temp1,(yyvsp[-2].node),temp3,temp4}); }
#line 2164 "parser.tab.c"
    break;

  case 33: /* ArrayInitializer: '{' VariableInitializerList '}'  */
#line 171 "parser.y"
                                                           { Node *temp1=createNode("Separator",(yyvsp[-2].str),{});Node *temp3=createNode("Separator",(yyvsp[0].str),{}); (yyval.node)=createNode("ArrayInitializer","",{temp1,(yyvsp[-1].node),temp3}); }
#line 2170 "parser.tab.c"
    break;

  case 34: /* ArrayInitializer: '{' ',' '}'  */
#line 172 "parser.y"
                                                            { Node *temp1=createNode("Separator",(yyvsp[-2].str),{});Node *temp3=createNode("Separator",(yyvsp[-1].str),{});Node *temp4=createNode("Separator",(yyvsp[0].str),{}); (yyval.node)=createNode("ArrayInitializer","",{temp1,temp3,temp4}); }
#line 2176 "parser.tab.c"
    break;

  case 35: /* ArrayInitializer: '{' '}'  */
#line 173 "parser.y"
                                                           { Node *temp1=createNode("Separator",(yyvsp[-1].str),{});Node *temp2=createNode("Separator",(yyvsp[0].str),{});(yyval.node) = createNode("ArrayInitializer_EMP", "", {temp1,temp2}); }
#line 2182 "parser.tab.c"
    break;

  case 36: /* VariableInitializerList: VariableInitializer  */
#line 177 "parser.y"
                                                           { (yyval.node) = createNode("VariableInitializerList", "", {(yyvsp[0].node)}); }
#line 2188 "parser.tab.c"
    break;

  case 37: /* VariableInitializerList: VariableInitializerList ',' VariableInitializer  */
#line 178 "parser.y"
                                                           { (yyval.node) = (yyvsp[-2].node); (yyval.node)->children.push_back((yyvsp[0].node));Node *temp1=createNode("Separator",(yyvsp[-1].str),{});(yyval.node)->children.push_back(temp1); }
#line 2194 "parser.tab.c"
    break;

  case 38: /* ClassDeclaration: NormalClassDeclaration  */
#line 185 "parser.y"
                             { (yyval.node) = (yyvsp[0].node); }
#line 2200 "parser.tab.c"
    break;

  case 39: /* NormalClassDeclaration: CLASS IDENTIFIER ClassBody  */
#line 189 "parser.y"
                                  {Node *temp1=createNode("Keyword",(yyvsp[-2].str),{});Node *temp2=createNode("Identifier",(yyvsp[-1].str),{});(yyval.node)=createNode("normalClassDeclaration","",{temp1,temp2,(yyvsp[0].node)});}
#line 2206 "parser.tab.c"
    break;

  case 40: /* ClassBody: '{' ClassBodyDeclaration '}'  */
#line 193 "parser.y"
                                     {Node *temp1=createNode("Separator",(yyvsp[-2].str),{});Node *temp3=createNode("Separator",(yyvsp[0].str),{}); (yyval.node)=createNode("classBody","",{temp1,(yyvsp[-1].node),temp3});}
#line 2212 "parser.tab.c"
    break;

  case 41: /* ClassBody: '{' '}'  */
#line 194 "parser.y"
                 {Node *temp1=createNode("Separator",(yyvsp[-1].str),{});Node *temp2=createNode("Separator",(yyvsp[0].str),{}); Node *temp3=createNode("fieldDeclaration","",{});(yyval.node)=createNode("classBody","",{temp1,temp2});}
#line 2218 "parser.tab.c"
    break;

  case 42: /* ClassBodyDeclaration: ClassMemberDeclaration  */
#line 197 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2224 "parser.tab.c"
    break;

  case 43: /* ClassBodyDeclaration: StaticInitializer  */
#line 198 "parser.y"
                                 { (yyval.node) = (yyvsp[0].node); }
#line 2230 "parser.tab.c"
    break;

  case 44: /* ClassBodyDeclaration: ConstructorDeclaration  */
#line 199 "parser.y"
                                 { (yyval.node) = (yyvsp[0].node); }
#line 2236 "parser.tab.c"
    break;

  case 45: /* ClassMemberDeclaration: FieldDeclaration  */
#line 203 "parser.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2242 "parser.tab.c"
    break;

  case 46: /* ClassMemberDeclaration: MethodDeclaration  */
#line 204 "parser.y"
                           { (yyval.node) = (yyvsp[0].node); }
#line 2248 "parser.tab.c"
    break;

  case 47: /* ClassMemberDeclaration: ClassDeclaration  */
#line 205 "parser.y"
                           { (yyval.node) = (yyvsp[0].node); }
#line 2254 "parser.tab.c"
    break;

  case 49: /* FieldDeclaration: ClassModifier Type VariableDeclaratorList ';'  */
#line 212 "parser.y"
                                                    {Node * temp4 =createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("fieldDeclaration","",{(yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[-1].node),temp4});}
#line 2260 "parser.tab.c"
    break;

  case 50: /* FieldDeclaration: Type VariableDeclaratorList ';'  */
#line 213 "parser.y"
                                      {Node * temp3 =createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("fieldDeclaration","",{(yyvsp[-2].node),(yyvsp[-1].node),temp3});}
#line 2266 "parser.tab.c"
    break;

  case 51: /* ClassModifier: PUBLIC  */
#line 217 "parser.y"
             { (yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2272 "parser.tab.c"
    break;

  case 52: /* ClassModifier: PRIVATE  */
#line 218 "parser.y"
              { (yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2278 "parser.tab.c"
    break;

  case 53: /* VariableDeclaratorList: VariableDeclaratorList ',' VariableDeclarator  */
#line 221 "parser.y"
                                                     {(yyval.node) = (yyvsp[-2].node);(yyval.node)->children.push_back((yyvsp[0].node));Node * temp2 = createNode("Separator",(yyvsp[-1].str),{}); (yyval.node)->children.push_back(temp2); }
#line 2284 "parser.tab.c"
    break;

  case 54: /* VariableDeclaratorList: VariableDeclarator  */
#line 222 "parser.y"
                         {(yyval.node)=(yyvsp[0].node);}
#line 2290 "parser.tab.c"
    break;

  case 55: /* VariableDeclarator: VariableDeclaratorId '=' VariableInitializer  */
#line 226 "parser.y"
                                                   {Node * temp2 = createNode("=","",{});(yyval.node)->children.push_back((yyvsp[0].node)); (yyval.node)=createNode("VariableDeclarator","",{(yyvsp[-2].node),temp2,(yyvsp[0].node)});}
#line 2296 "parser.tab.c"
    break;

  case 56: /* VariableDeclarator: VariableDeclaratorId  */
#line 227 "parser.y"
                           {(yyval.node)=(yyvsp[0].node);}
#line 2302 "parser.tab.c"
    break;

  case 57: /* VariableDeclaratorId: IDENTIFIER Dims  */
#line 230 "parser.y"
                      {Node * temp2 = createNode("Identifier",(yyvsp[-1].str),{}); (yyval.node)=createNode("VariableDeclaratorId","",{temp2,(yyvsp[0].node)});}
#line 2308 "parser.tab.c"
    break;

  case 58: /* VariableDeclaratorId: IDENTIFIER  */
#line 231 "parser.y"
                  {(yyval.node)=createNode("Identifier",(yyvsp[0].str),{});}
#line 2314 "parser.tab.c"
    break;

  case 59: /* VariableInitializer: Expression  */
#line 235 "parser.y"
                { (yyval.node)=(yyvsp[0].node);}
#line 2320 "parser.tab.c"
    break;

  case 60: /* VariableInitializer: ArrayInitializer  */
#line 236 "parser.y"
                      { (yyval.node)=(yyvsp[0].node);}
#line 2326 "parser.tab.c"
    break;

  case 61: /* MethodDeclaration: ClassModifier MethodHeader MethodBody  */
#line 241 "parser.y"
                                                {(yyval.node)=createNode("MethodDeclaration","",{(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 2332 "parser.tab.c"
    break;

  case 62: /* MethodDeclaration: MethodHeader MethodBody  */
#line 242 "parser.y"
                                                    {(yyval.node)=createNode("MethodDeclaration","",{(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 2338 "parser.tab.c"
    break;

  case 63: /* MethodHeader: Type MethodDeclarator  */
#line 246 "parser.y"
                                             {(yyval.node)=createNode("MethodHeader","",{(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 2344 "parser.tab.c"
    break;

  case 64: /* MethodHeader: VOID MethodDeclarator  */
#line 247 "parser.y"
                                             { Node *temp = createNode("TYPE", (yyvsp[-1].str), {}); (yyval.node) = createNode("MethodHeader","",{temp,(yyvsp[0].node)}); }
#line 2350 "parser.tab.c"
    break;

  case 65: /* MethodDeclarator: IDENTIFIER '(' FormalParameterList ')'  */
#line 251 "parser.y"
                                                     { Node *temp1=createNode("Identifier",(yyvsp[-3].str),{});Node *temp2=createNode("Separator",(yyvsp[-2].str),{});Node *temp4=createNode("Separator",(yyvsp[0].str),{});(yyval.node) = createNode("MethodDeclarator", "", {temp1,temp2,(yyvsp[-1].node),temp4}); }
#line 2356 "parser.tab.c"
    break;

  case 66: /* MethodDeclarator: IDENTIFIER '(' ')'  */
#line 252 "parser.y"
                                                     { Node *temp1=createNode("Identifier",(yyvsp[-2].str),{});Node *temp2=createNode("Separator",(yyvsp[-1].str),{});Node *temp4=createNode("Separator",(yyvsp[0].str),{});(yyval.node) = createNode("MethodDeclarator", "", {temp1,temp2,temp4}); }
#line 2362 "parser.tab.c"
    break;

  case 67: /* MethodDeclarator: IDENTIFIER '(' FormalParameterList ')' Dims  */
#line 253 "parser.y"
                                                     { Node *temp1=createNode("Identifier",(yyvsp[-4].str),{});Node *temp2=createNode("Separator",(yyvsp[-3].str),{});Node *temp4=createNode("Separator",(yyvsp[-1].str),{});(yyval.node) = createNode("MethodDeclarator", "", {temp1,temp2,(yyvsp[-2].node),temp4,(yyvsp[0].node)}); }
#line 2368 "parser.tab.c"
    break;

  case 68: /* MethodDeclarator: IDENTIFIER '(' ')' Dims  */
#line 254 "parser.y"
                                                     { Node *temp1=createNode("Identifier",(yyvsp[-3].str),{});Node *temp2=createNode("Separator",(yyvsp[-2].str),{});Node *temp4=createNode("Separator",(yyvsp[-1].str),{});(yyval.node) = createNode("MethodDeclarator", "", {temp1,temp2,(yyvsp[0].node),temp4}); }
#line 2374 "parser.tab.c"
    break;

  case 69: /* FormalParameterList: ReceiverParameter  */
#line 258 "parser.y"
                                                     { (yyval.node) = createNode("Parameters", "", {(yyvsp[0].node)}); }
#line 2380 "parser.tab.c"
    break;

  case 70: /* FormalParameterList: FormalParameters ',' LastFormalParameter  */
#line 259 "parser.y"
                                                     { Node *temp2=createNode("Separator",(yyvsp[-1].str),{}); (yyval.node)=createNode("FormalParameterList","",{(yyvsp[-2].node),temp2,(yyvsp[0].node)}); }
#line 2386 "parser.tab.c"
    break;

  case 71: /* FormalParameterList: LastFormalParameter  */
#line 260 "parser.y"
                                                     { (yyval.node) = createNode("Parameters", "", {(yyvsp[0].node)}); }
#line 2392 "parser.tab.c"
    break;

  case 72: /* FormalParameters: FormalParameters ',' FormalParameter  */
#line 264 "parser.y"
                                                     { (yyval.node) = (yyvsp[-2].node); (yyval.node)->children.push_back((yyvsp[0].node));Node *temp=createNode("Separator",(yyvsp[-1].str),{}); (yyval.node)->children.push_back(temp); }
#line 2398 "parser.tab.c"
    break;

  case 73: /* FormalParameters: FormalParameter  */
#line 265 "parser.y"
                                                     { (yyval.node) = createNode("Parameters", "", {(yyvsp[0].node)}); }
#line 2404 "parser.tab.c"
    break;

  case 74: /* FormalParameters: ReceiverParameter  */
#line 266 "parser.y"
                                                     { (yyval.node) = createNode("Parameters", "", {(yyvsp[0].node)}); }
#line 2410 "parser.tab.c"
    break;

  case 75: /* FormalParameter: FINAL Type VariableDeclaratorId  */
#line 270 "parser.y"
                                                    { Node *temp = createNode("MODIFIER", (yyvsp[-2].str), {}); (yyval.node) = createNode("FormalParameter", "", {temp, (yyvsp[-1].node), (yyvsp[0].node)}); }
#line 2416 "parser.tab.c"
    break;

  case 76: /* FormalParameter: Type VariableDeclaratorId  */
#line 271 "parser.y"
                                                    { (yyval.node) = createNode("FormalParameter", "", {(yyvsp[-1].node), (yyvsp[0].node)}); }
#line 2422 "parser.tab.c"
    break;

  case 77: /* LastFormalParameter: FormalParameter  */
#line 275 "parser.y"
                                                    { (yyval.node) = (yyvsp[0].node); }
#line 2428 "parser.tab.c"
    break;

  case 78: /* ReceiverParameter: Type THIS  */
#line 279 "parser.y"
                                                    { Node *n1 = createNode("THIS", (yyvsp[0].str), {}); (yyval.node) = createNode("ReceiverParameter", "", {(yyvsp[-1].node), n1}); }
#line 2434 "parser.tab.c"
    break;

  case 79: /* ReceiverParameter: Type IDENTIFIER '.' THIS  */
#line 280 "parser.y"
                                                    { Node *n1 = createNode("THIS", (yyvsp[0].str), {}); Node *n3 = createNode("Separator", (yyvsp[-1].str), {}); Node *n2 = createNode("ID", (yyvsp[-2].str), {}); (yyval.node) = createNode("ReceiverParameter", "", {(yyvsp[-3].node), n2, n1,n3}); }
#line 2440 "parser.tab.c"
    break;

  case 80: /* MethodBody: Block  */
#line 284 "parser.y"
                                                    {(yyval.node) = (yyvsp[0].node); }
#line 2446 "parser.tab.c"
    break;

  case 81: /* MethodBody: ';'  */
#line 285 "parser.y"
                                                    {(yyval.node) = createNode("EMP", "", {}); }
#line 2452 "parser.tab.c"
    break;

  case 82: /* StaticInitializer: STATIC Block  */
#line 293 "parser.y"
                                                    { Node * n1 = createNode("KEYWORD", (yyvsp[-1].str), {});(yyval.node) = createNode("StaticInitializer","", {n1,(yyvsp[0].node)}); }
#line 2458 "parser.tab.c"
    break;

  case 83: /* ConstructorDeclaration: ClassModifier ConstructorDeclarator ConstructorBody  */
#line 297 "parser.y"
                                                                     { (yyval.node) = (yyvsp[-1].node); (yyval.node)->children.push_back((yyvsp[-2].node)); (yyval.node)->children.push_back((yyvsp[0].node));  }
#line 2464 "parser.tab.c"
    break;

  case 84: /* ConstructorDeclaration: ConstructorDeclarator ConstructorBody  */
#line 298 "parser.y"
                                                                           { (yyval.node) = (yyvsp[-1].node); (yyval.node)->children.push_back((yyvsp[0].node)); }
#line 2470 "parser.tab.c"
    break;

  case 85: /* ConstructorDeclarator: IDENTIFIER '(' FormalParameterList ')'  */
#line 302 "parser.y"
                                                                            { Node *n1 = createNode("Identifier", (yyvsp[-3].str), {});Node *n2= createNode("Separator", (yyvsp[-2].str), {});Node *n3= createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("ConstructorDeclarator","",{n1,n2,n3,(yyvsp[-1].node)}); }
#line 2476 "parser.tab.c"
    break;

  case 86: /* ConstructorDeclarator: IDENTIFIER '(' ')'  */
#line 303 "parser.y"
                                                                           { Node *n3 = createNode("Identifier", (yyvsp[-2].str), {});Node *n1 = createNode("Separator", (yyvsp[-1].str), {});Node *n2 = createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("ConstructorDeclarator","",{n1,n2,n3}); }
#line 2482 "parser.tab.c"
    break;

  case 87: /* ConstructorBody: '{' ExplicitConstructorInvocation BlockStatements '}'  */
#line 307 "parser.y"
                                                                           { Node *n1 = createNode("Separator", (yyvsp[-3].str), {});Node *n4= createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("ConstructorBody","",{n1,n4,(yyvsp[-2].node),(yyvsp[-1].node)}); }
#line 2488 "parser.tab.c"
    break;

  case 88: /* ConstructorBody: '{' BlockStatements '}'  */
#line 308 "parser.y"
                                                                           { Node *n1 = createNode("Separator", (yyvsp[-2].str), {});Node *n4= createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("ConstructorBody","",{n1,n4,(yyvsp[-1].node)}); }
#line 2494 "parser.tab.c"
    break;

  case 89: /* ConstructorBody: '{' ExplicitConstructorInvocation '}'  */
#line 309 "parser.y"
                                                                           { Node *n1 = createNode("Separator", (yyvsp[-2].str), {});Node *n3= createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("ConstructorBody","",{n1,n3,(yyvsp[-1].node)}); }
#line 2500 "parser.tab.c"
    break;

  case 90: /* ExplicitConstructorInvocation: THIS SINGLE_ArgumentList  */
#line 314 "parser.y"
                                                                           { Node * n1 = createNode("KEYWORD", (yyvsp[-1].str), {});(yyval.node) = createNode("ExplicitConstructorInvocation","", {n1,(yyvsp[0].node)}); }
#line 2506 "parser.tab.c"
    break;

  case 91: /* SINGLE_ArgumentList: '(' ')' ';'  */
#line 318 "parser.y"
                                                       { Node *n1 = createNode("Separator", (yyvsp[-2].str), {});Node *n2 = createNode("Separator", (yyvsp[-1].str), {});Node *n3 = createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("SINGLE_ArgumentList","",{n1,n2,n3});  }
#line 2512 "parser.tab.c"
    break;

  case 92: /* SINGLE_ArgumentList: '(' ArgumentList ')' ';'  */
#line 319 "parser.y"
                                                       { Node *n1 = createNode("Separator", (yyvsp[-3].str), {});Node *n2 = createNode("Separator", (yyvsp[-1].str), {});Node *n3 = createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("SINGLE_ArgumentList","",{n1,n2,n3,(yyvsp[-2].node)});  }
#line 2518 "parser.tab.c"
    break;

  case 93: /* Block: '{' BlockStatements '}'  */
#line 326 "parser.y"
                                             { Node *n1 = createNode("Separator", (yyvsp[-2].str), {});Node *n4= createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("Block","",{n1,n4,(yyvsp[-1].node)}); }
#line 2524 "parser.tab.c"
    break;

  case 94: /* BlockStatements: BlockStatement  */
#line 331 "parser.y"
                                             { (yyval.node) = createNode("BlockStatements", "", {(yyvsp[0].node)}); }
#line 2530 "parser.tab.c"
    break;

  case 95: /* BlockStatements: BlockStatements BlockStatement  */
#line 332 "parser.y"
                                             { (yyval.node) = (yyvsp[-1].node); (yyval.node)->children.push_back((yyvsp[0].node)); }
#line 2536 "parser.tab.c"
    break;

  case 96: /* BlockStatement: LocalVariableDeclarationStatement  */
#line 336 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2542 "parser.tab.c"
    break;

  case 97: /* BlockStatement: ClassDeclaration  */
#line 337 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2548 "parser.tab.c"
    break;

  case 98: /* BlockStatement: Statement  */
#line 338 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2554 "parser.tab.c"
    break;

  case 99: /* LocalVariableDeclarationStatement: LocalVariableDeclaration ';'  */
#line 342 "parser.y"
                                             { Node *n1 = createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("LocalVariableDeclarationStatement","",{n1,(yyvsp[-1].node)}); }
#line 2560 "parser.tab.c"
    break;

  case 100: /* LocalVariableDeclaration: Type VariableDeclaratorList  */
#line 346 "parser.y"
                                             { (yyval.node) = createNode("LocalVariableDeclaration", "", {(yyvsp[-1].node), (yyvsp[0].node)}); }
#line 2566 "parser.tab.c"
    break;

  case 101: /* Statement: StatementWithoutTrailingSubstatement  */
#line 350 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2572 "parser.tab.c"
    break;

  case 102: /* Statement: LabeledStatement  */
#line 351 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2578 "parser.tab.c"
    break;

  case 103: /* Statement: IfThenStatement  */
#line 352 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2584 "parser.tab.c"
    break;

  case 104: /* Statement: IfThenElseStatement  */
#line 353 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2590 "parser.tab.c"
    break;

  case 105: /* Statement: WhileStatement  */
#line 354 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2596 "parser.tab.c"
    break;

  case 106: /* Statement: ForStatement  */
#line 355 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2602 "parser.tab.c"
    break;

  case 107: /* StatementNoShortIf: StatementWithoutTrailingSubstatement  */
#line 359 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2608 "parser.tab.c"
    break;

  case 108: /* StatementNoShortIf: LabeledStatementNoShortIf  */
#line 360 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2614 "parser.tab.c"
    break;

  case 109: /* StatementNoShortIf: IfThenElseStatementNoShortIf  */
#line 361 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2620 "parser.tab.c"
    break;

  case 110: /* StatementNoShortIf: WhileStatementNoShortIf  */
#line 362 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2626 "parser.tab.c"
    break;

  case 111: /* StatementNoShortIf: ForStatementNoShortIf  */
#line 363 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2632 "parser.tab.c"
    break;

  case 112: /* StatementWithoutTrailingSubstatement: Block  */
#line 367 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2638 "parser.tab.c"
    break;

  case 113: /* StatementWithoutTrailingSubstatement: EmptyStatement  */
#line 368 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2644 "parser.tab.c"
    break;

  case 114: /* StatementWithoutTrailingSubstatement: ExpressionStatement  */
#line 369 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2650 "parser.tab.c"
    break;

  case 115: /* StatementWithoutTrailingSubstatement: BreakStatement  */
#line 370 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2656 "parser.tab.c"
    break;

  case 116: /* StatementWithoutTrailingSubstatement: ContinueStatement  */
#line 371 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2662 "parser.tab.c"
    break;

  case 117: /* StatementWithoutTrailingSubstatement: ReturnStatement  */
#line 372 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2668 "parser.tab.c"
    break;

  case 118: /* EmptyStatement: ';'  */
#line 376 "parser.y"
                                             { (yyval.node) = createNode("Separator", (yyvsp[0].str), {}); }
#line 2674 "parser.tab.c"
    break;

  case 119: /* LabeledStatement: IDENTIFIER ':' Statement  */
#line 380 "parser.y"
                                             {  Node *n1 = createNode("Identifier", (yyvsp[-2].str), {});Node *n2 = createNode("Separator", (yyvsp[-1].str), {}); (yyval.node) = createNode("LabeledStatement","", {n1,n2,(yyvsp[0].node)});}
#line 2680 "parser.tab.c"
    break;

  case 120: /* LabeledStatementNoShortIf: IDENTIFIER ':' StatementNoShortIf  */
#line 384 "parser.y"
                                              { Node *n1 = createNode("Identifier", (yyvsp[-2].str), {});Node *n2 = createNode("Separator", (yyvsp[-1].str), {}); (yyval.node) = createNode("LabeledStatementNoShortIf","", {n1,n2,(yyvsp[0].node)}); }
#line 2686 "parser.tab.c"
    break;

  case 121: /* ExpressionStatement: StatementExpression ';'  */
#line 388 "parser.y"
                                              { Node *n1 = createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("ExpressionStatement","",{n1,(yyvsp[-1].node)}); }
#line 2692 "parser.tab.c"
    break;

  case 122: /* StatementExpression: Assignment  */
#line 392 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2698 "parser.tab.c"
    break;

  case 123: /* StatementExpression: PreIncrementExpression  */
#line 393 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2704 "parser.tab.c"
    break;

  case 124: /* StatementExpression: PreDecrementExpression  */
#line 394 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2710 "parser.tab.c"
    break;

  case 125: /* StatementExpression: PostIncrementExpression  */
#line 395 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2716 "parser.tab.c"
    break;

  case 126: /* StatementExpression: PostDecrementExpression  */
#line 396 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2722 "parser.tab.c"
    break;

  case 127: /* StatementExpression: MethodInvocation  */
#line 397 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2728 "parser.tab.c"
    break;

  case 128: /* StatementExpression: ClassInstanceCreationExpression  */
#line 398 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2734 "parser.tab.c"
    break;

  case 129: /* IfThenStatement: IF '(' Expression ')' Statement  */
#line 402 "parser.y"
                                          { Node *n1 = createNode("KEYWORD", (yyvsp[-4].str), {}); Node *n2 = createNode("Separator", (yyvsp[-3].str), {}); Node *n3 = createNode("Separator", (yyvsp[-1].str), {}); (yyval.node)=createNode("IfThenStatement","",{n1,n2,n3,(yyvsp[-2].node),(yyvsp[0].node)});}
#line 2740 "parser.tab.c"
    break;

  case 130: /* IfThenElseStatement: IF '(' Expression ')' StatementNoShortIf ELSE Statement  */
#line 406 "parser.y"
                                                               { Node *n1 = createNode("KEYWORD", (yyvsp[-6].str), {}); Node *n2 = createNode("Separator", (yyvsp[-5].str), {}); Node *n3 = createNode("Separator", (yyvsp[-3].str), {}); Node *n4 = createNode("KEYWORD", (yyvsp[-1].str), {}); (yyval.node)=createNode("IfThenELseStatement","",{n1,n2,n3,n4,(yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node)});}
#line 2746 "parser.tab.c"
    break;

  case 131: /* IfThenElseStatementNoShortIf: IF '(' Expression ')' StatementNoShortIf ELSE StatementNoShortIf  */
#line 410 "parser.y"
                                                                          { Node *n1 = createNode("KEYWORD", (yyvsp[-6].str), {}); Node *n2 = createNode("Separator", (yyvsp[-5].str), {}); Node *n3 = createNode("Separator", (yyvsp[-3].str), {}); Node *n4 = createNode("KEYWORD", (yyvsp[-1].str), {}); (yyval.node)=createNode("IfThenElseStatementNoShortIf","",{n1,n2,n3,n4,(yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node)});}
#line 2752 "parser.tab.c"
    break;

  case 132: /* WhileStatement: WHILE '(' Expression ')' Statement  */
#line 414 "parser.y"
                                                {Node *n1 = createNode("KEYWORD", (yyvsp[-4].str), {}); Node *n2 = createNode("Separator", (yyvsp[-3].str), {}); Node *n3 = createNode("Separator", (yyvsp[-1].str), {}); (yyval.node)=createNode("WhileStatement","",{n1,n2,n3,(yyvsp[-2].node),(yyvsp[0].node)});}
#line 2758 "parser.tab.c"
    break;

  case 133: /* WhileStatementNoShortIf: WHILE '(' Expression ')' StatementNoShortIf  */
#line 418 "parser.y"
                                                                 {Node *n1 = createNode("KEYWORD", (yyvsp[-4].str), {}); Node *n2 = createNode("Separator", (yyvsp[-3].str), {}); Node *n3 = createNode("Separator", (yyvsp[-1].str), {}); (yyval.node)=createNode("WhileStatementNoShortIf","",{n1,n2,n3,(yyvsp[-2].node),(yyvsp[0].node)});}
#line 2764 "parser.tab.c"
    break;

  case 134: /* ForStatement: BasicForStatement  */
#line 422 "parser.y"
                                                 {(yyval.node)=(yyvsp[0].node);}
#line 2770 "parser.tab.c"
    break;

  case 135: /* ForStatement: EnhancedForStatement  */
#line 423 "parser.y"
                                                 {(yyval.node)=(yyvsp[0].node);}
#line 2776 "parser.tab.c"
    break;

  case 136: /* ForStatementNoShortIf: BasicForStatementNoShortIf  */
#line 427 "parser.y"
                                                 {(yyval.node)=(yyvsp[0].node);}
#line 2782 "parser.tab.c"
    break;

  case 137: /* ForStatementNoShortIf: EnhancedForStatementNoShortIf  */
#line 428 "parser.y"
                                                 {(yyval.node)=(yyvsp[0].node);}
#line 2788 "parser.tab.c"
    break;

  case 138: /* BasicForStatement: FOR '(' SINGLE_ForInit ';' SINGLE_Expression ';' SINGLE_ForUpdate ')' Statement  */
#line 432 "parser.y"
                                                                                        { Node *n1 = createNode("KEYWORD", (yyvsp[-8].str), {});Node *n2 = createNode("Separator", (yyvsp[-7].str), {});Node *n4 = createNode("Separator", (yyvsp[-5].str), {});Node *n6 = createNode("Separator", (yyvsp[-3].str), {});Node *n8 = createNode("Separator", (yyvsp[-1].str), {}); (yyval.node)=createNode("BasicForStatement","",{n1,n2,n4,n6,n8,(yyvsp[-6].node),(yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node)}); }
#line 2794 "parser.tab.c"
    break;

  case 139: /* SINGLE_ForInit: %empty  */
#line 436 "parser.y"
                           {(yyval.node)=createNode("SINGLE_ForInit","",{});}
#line 2800 "parser.tab.c"
    break;

  case 140: /* SINGLE_ForInit: ForInit  */
#line 437 "parser.y"
                           {(yyval.node)=(yyvsp[0].node);}
#line 2806 "parser.tab.c"
    break;

  case 141: /* SINGLE_Expression: %empty  */
#line 441 "parser.y"
                           {(yyval.node)=createNode("SINGLE_Expression","",{});}
#line 2812 "parser.tab.c"
    break;

  case 142: /* SINGLE_Expression: Expression  */
#line 442 "parser.y"
                           {(yyval.node)=(yyvsp[0].node);}
#line 2818 "parser.tab.c"
    break;

  case 143: /* SINGLE_ForUpdate: %empty  */
#line 446 "parser.y"
                           {(yyval.node)=createNode("SINGLE_ForUpdate","",{});}
#line 2824 "parser.tab.c"
    break;

  case 144: /* SINGLE_ForUpdate: ForUpdate  */
#line 447 "parser.y"
                           {(yyval.node)=(yyvsp[0].node);}
#line 2830 "parser.tab.c"
    break;

  case 145: /* BasicForStatementNoShortIf: FOR '(' SINGLE_ForInit ';' SINGLE_Expression ';' SINGLE_ForUpdate ')' StatementNoShortIf  */
#line 451 "parser.y"
                                                                                                  {Node *n1 = createNode("KEYWORD", (yyvsp[-8].str), {});Node *n2 = createNode("Separator", (yyvsp[-7].str), {});Node *n4 = createNode("Separator", (yyvsp[-5].str), {});Node *n6 = createNode("Separator", (yyvsp[-3].str), {});Node *n8 = createNode("Separator", (yyvsp[-1].str), {});  (yyval.node)=createNode("BasicForStatementNoShortIf","",{n1,n2,n4,n6,n8,(yyvsp[-6].node),(yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node)}); }
#line 2836 "parser.tab.c"
    break;

  case 146: /* ForInit: StatementExpressionList  */
#line 455 "parser.y"
                                       {(yyval.node)=(yyvsp[0].node);}
#line 2842 "parser.tab.c"
    break;

  case 147: /* ForInit: LocalVariableDeclaration  */
#line 456 "parser.y"
                                       {(yyval.node)=(yyvsp[0].node);}
#line 2848 "parser.tab.c"
    break;

  case 148: /* ForUpdate: StatementExpressionList  */
#line 460 "parser.y"
                                       {(yyval.node)=(yyvsp[0].node);}
#line 2854 "parser.tab.c"
    break;

  case 149: /* StatementExpressionList: StatementExpression  */
#line 464 "parser.y"
                                                        {(yyval.node)=createNode("StatementExpressionList", "", {(yyvsp[0].node)});}
#line 2860 "parser.tab.c"
    break;

  case 150: /* StatementExpressionList: StatementExpressionList ',' StatementExpression  */
#line 465 "parser.y"
                                                        {(yyval.node) = (yyvsp[-2].node); (yyval.node)->children.push_back((yyvsp[0].node));Node *temp1=createNode("Separator",(yyvsp[-1].str),{});(yyval.node)->children.push_back(temp1);}
#line 2866 "parser.tab.c"
    break;

  case 151: /* EnhancedForStatement: FOR '(' Type VariableDeclaratorId ':' Expression ')' Statement  */
#line 469 "parser.y"
                                                                              { Node *n1 = createNode("KEYWORD", (yyvsp[-7].str), {});Node *n2 = createNode("Separator", (yyvsp[-6].str), {});Node *n5 = createNode("Separator", (yyvsp[-3].str), {});Node *n7 = createNode("Separator", (yyvsp[-1].str), {}); (yyval.node)=createNode("EnhancedForStatement","",{n1,n2,(yyvsp[-4].node),n5,n7,(yyvsp[-5].node),(yyvsp[-2].node),(yyvsp[0].node)}); }
#line 2872 "parser.tab.c"
    break;

  case 152: /* EnhancedForStatementNoShortIf: FOR '(' Type VariableDeclaratorId ':' Expression ')' StatementNoShortIf  */
#line 473 "parser.y"
                                                                                    { Node *n1 = createNode("KEYWORD", (yyvsp[-7].str), {});Node *n2 = createNode("Separator", (yyvsp[-6].str), {});Node *n5 = createNode("Separator", (yyvsp[-3].str), {});Node *n7 = createNode("Separator", (yyvsp[-1].str), {});  (yyval.node)=createNode("EnhancedForStatementNoShortIf","",{n1,n2,(yyvsp[-4].node),n5,n7,(yyvsp[-5].node),(yyvsp[-2].node),(yyvsp[0].node)});}
#line 2878 "parser.tab.c"
    break;

  case 153: /* BreakStatement: BREAK IDENTIFIER ';'  */
#line 477 "parser.y"
                                  {Node* n1=createNode("Keyword",(yyvsp[-2].str),{});Node* n2=createNode("Identifier",(yyvsp[-1].str),{});Node* n3=createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("BreakStatement","",{n1,n2,n3});}
#line 2884 "parser.tab.c"
    break;

  case 154: /* BreakStatement: BREAK ';'  */
#line 478 "parser.y"
                                  {Node* n1=createNode("Keyword",(yyvsp[-1].str),{}); Node* n2=createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("BreakStatement","",{n1,n2});}
#line 2890 "parser.tab.c"
    break;

  case 155: /* ContinueStatement: CONTINUE IDENTIFIER ';'  */
#line 482 "parser.y"
                                  {Node* n1=createNode("Keyword",(yyvsp[-2].str),{});Node* n2=createNode("Identifier",(yyvsp[-1].str),{});Node* n3=createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("ContinueStatement","",{n1,n2,n3});}
#line 2896 "parser.tab.c"
    break;

  case 156: /* ContinueStatement: CONTINUE ';'  */
#line 483 "parser.y"
                                  {Node* n1=createNode("Keyword",(yyvsp[-1].str),{}); Node* n2=createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("ContinueStatement","",{n1,n2});}
#line 2902 "parser.tab.c"
    break;

  case 157: /* ReturnStatement: RETURN Expression ';'  */
#line 487 "parser.y"
                                  {Node* n1=createNode("Keyword",(yyvsp[-2].str),{});Node* n3=createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("BreakStatement","",{n1,(yyvsp[-1].node),n3});}
#line 2908 "parser.tab.c"
    break;

  case 158: /* ReturnStatement: RETURN ';'  */
#line 488 "parser.y"
                                  {Node* n1=createNode("Keyword",(yyvsp[-1].str),{}); Node* n2=createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("BreakStatement","",{n1,n2});}
#line 2914 "parser.tab.c"
    break;

  case 159: /* Primary: PrimaryNoNewArray  */
#line 496 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 2920 "parser.tab.c"
    break;

  case 160: /* Primary: ArrayCreationExpression  */
#line 497 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 2926 "parser.tab.c"
    break;

  case 161: /* PrimaryNoNewArray: LITERAL  */
#line 501 "parser.y"
                                                                                    {(yyval.node)=createNode("LITERAL",(yyvsp[0].str),{});}
#line 2932 "parser.tab.c"
    break;

  case 162: /* PrimaryNoNewArray: ClassLiteral  */
#line 502 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 2938 "parser.tab.c"
    break;

  case 163: /* PrimaryNoNewArray: THIS  */
#line 503 "parser.y"
                                                                                    {(yyval.node)=createNode("KEYWORD",(yyvsp[0].str),{});}
#line 2944 "parser.tab.c"
    break;

  case 164: /* PrimaryNoNewArray: TypeName '.' THIS  */
#line 504 "parser.y"
                                                                                    {Node *temp = createNode("KEYWORD",(yyvsp[0].str),{});Node *temp1 = createNode("Separator",(yyvsp[-1].str),{} ); (yyval.node)=createNode("PRIMARYNONEWARRAY","",{(yyvsp[-2].node),temp,temp1});}
#line 2950 "parser.tab.c"
    break;

  case 165: /* PrimaryNoNewArray: '(' Expression ')'  */
#line 505 "parser.y"
                                                                                    {Node *temp = createNode("Separator",(yyvsp[0].str),{});Node *temp1 = createNode("Separator",(yyvsp[-2].str),{} ); (yyval.node)=createNode("PRIMARYNONEWARRAY","",{(yyvsp[-1].node),temp,temp1});}
#line 2956 "parser.tab.c"
    break;

  case 166: /* PrimaryNoNewArray: ClassInstanceCreationExpression  */
#line 506 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 2962 "parser.tab.c"
    break;

  case 167: /* PrimaryNoNewArray: FieldAccess  */
#line 507 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 2968 "parser.tab.c"
    break;

  case 168: /* PrimaryNoNewArray: ArrayAccess  */
#line 508 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 2974 "parser.tab.c"
    break;

  case 169: /* PrimaryNoNewArray: MethodInvocation  */
#line 509 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 2980 "parser.tab.c"
    break;

  case 170: /* PrimaryNoNewArray: MethodReference  */
#line 510 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 2986 "parser.tab.c"
    break;

  case 171: /* ClassLiteral: TypeName Dims '.' CLASS  */
#line 514 "parser.y"
                                                                                    {Node *temp = createNode("KEYWORD",(yyvsp[0].str),{});Node *temp1 = createNode("Separator",(yyvsp[-1].str),{});
                                                                                      (yyval.node) = createNode("CLASS_LITERAL","",{(yyvsp[-3].node),(yyvsp[-2].node),temp,temp1});}
#line 2993 "parser.tab.c"
    break;

  case 172: /* ClassLiteral: TypeName '.' CLASS  */
#line 516 "parser.y"
                                                                                    {Node *temp = createNode("KEYWORD",(yyvsp[0].str),{});Node *temp1 = createNode("Separator",(yyvsp[-1].str),{});
                                                                                     (yyval.node) = createNode("CLASS_LITERAL","",{(yyvsp[-2].node),temp,temp1});}
#line 3000 "parser.tab.c"
    break;

  case 173: /* ClassLiteral: PrimitiveType Dims '.' CLASS  */
#line 518 "parser.y"
                                                                                    {Node *temp = createNode("KEYWORD",(yyvsp[0].str),{});Node *temp1 = createNode("Separator",(yyvsp[-1].str),{});
                                                                                     (yyval.node) = createNode("CLASS_LITERAL","",{(yyvsp[-3].node),(yyvsp[-2].node),temp,temp1});}
#line 3007 "parser.tab.c"
    break;

  case 174: /* ClassLiteral: PrimitiveType '.' CLASS  */
#line 520 "parser.y"
                                                                                {Node *temp = createNode("KEYWORD",(yyvsp[0].str),{});Node *temp1 = createNode("Separator",(yyvsp[-1].str),{});
                                                                                     (yyval.node) = createNode("CLASS_LITERAL","",{(yyvsp[-2].node),temp,temp1});}
#line 3014 "parser.tab.c"
    break;

  case 175: /* ClassLiteral: VOID '.' CLASS  */
#line 522 "parser.y"
                                                                                    {Node *temp = createNode("KEYWORD",(yyvsp[0].str),{});Node *temp2= createNode("Separator",(yyvsp[-1].str),{});
                                                                                     Node *temp1 = createNode("KEYWORD",(yyvsp[-2].str),{});
                                                                                     (yyval.node) = createNode("CLASS_LITERAL","",{temp1,temp,temp2});}
#line 3022 "parser.tab.c"
    break;

  case 176: /* ClassInstanceCreationExpression: UnqualifiedClassInstanceCreationExpression  */
#line 528 "parser.y"
                                                                                         {(yyval.node)=(yyvsp[0].node);}
#line 3028 "parser.tab.c"
    break;

  case 177: /* ClassInstanceCreationExpression: TypeName '.' UnqualifiedClassInstanceCreationExpression  */
#line 529 "parser.y"
                                                                             {Node *temp1 = createNode("Separator",(yyvsp[-1].str),{});(yyval.node)=createNode("CLASS_INSTANCE","",{(yyvsp[-2].node),(yyvsp[0].node),temp1});}
#line 3034 "parser.tab.c"
    break;

  case 178: /* ClassInstanceCreationExpression: Primary '.' UnqualifiedClassInstanceCreationExpression  */
#line 530 "parser.y"
                                                                                         {Node *temp1 = createNode("Separator",(yyvsp[-1].str),{});(yyval.node)=createNode("CLASS_INSTANCE","",{(yyvsp[-2].node),(yyvsp[0].node),temp1});}
#line 3040 "parser.tab.c"
    break;

  case 179: /* UnqualifiedClassInstanceCreationExpression: NEW TypeName '(' ArgumentList ')'  */
#line 534 "parser.y"
                                                                                        {Node *temp = createNode("KEYWORD",(yyvsp[-4].str),{});
                                                                                        Node *temp1 = createNode("Separator",(yyvsp[-2].str),{});Node *temp2 = createNode("Separator",(yyvsp[0].str),{});(yyval.node) = createNode("UNQUA_CLASS_INSTANCE","",{temp,(yyvsp[-3].node),(yyvsp[-1].node),temp1,temp2});}
#line 3047 "parser.tab.c"
    break;

  case 180: /* UnqualifiedClassInstanceCreationExpression: NEW TypeName '(' ArgumentList ')' ClassBody  */
#line 536 "parser.y"
                                                                                        {Node *temp = createNode("KEYWORD",(yyvsp[-5].str),{});Node *temp1 = createNode("Separator",(yyvsp[-3].str),{});Node *temp2= createNode("Separator",(yyvsp[-1].str),{});
                                                                                        (yyval.node) = createNode("UNQUA_CLASS_INSTANCE","",{temp,(yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node),temp1,temp2});}
#line 3054 "parser.tab.c"
    break;

  case 181: /* UnqualifiedClassInstanceCreationExpression: NEW TypeName '(' ')' ClassBody  */
#line 538 "parser.y"
                                                                                        {Node *temp = createNode("KEYWORD",(yyvsp[-4].str),{});Node *temp1 = createNode("Separator",(yyvsp[-2].str),{});Node *temp2 = createNode("Separator",(yyvsp[-1].str),{});
                            
                                                                                        (yyval.node) = createNode("UNQUA_CLASS_INSTANCE","",{temp,(yyvsp[-3].node),temp1,(yyvsp[0].node),temp2});}
#line 3062 "parser.tab.c"
    break;

  case 182: /* UnqualifiedClassInstanceCreationExpression: NEW TypeName '(' ')'  */
#line 541 "parser.y"
                                                                                        {Node *temp = createNode("KEYWORD",(yyvsp[-3].str),{});
                                                                                        Node *temp1 = createNode("Separator",(yyvsp[-1].str),{});Node *temp2 = createNode("Separator",(yyvsp[0].str),{});
                                                                                        (yyval.node) = createNode("UNQUA_CLASS_INSTANCE","",{temp,(yyvsp[-2].node),temp1,temp2});}
#line 3070 "parser.tab.c"
    break;

  case 183: /* FieldAccess: Primary '.' IDENTIFIER  */
#line 547 "parser.y"
                                                                                       {Node *temp = createNode("ID",(yyvsp[0].str),{});Node *temp1 = createNode("Separator",(yyvsp[-1].str),{});
                                                                                        (yyval.node) = createNode("FIELDACC","",{(yyvsp[-2].node),temp,temp1});}
#line 3077 "parser.tab.c"
    break;

  case 184: /* ArrayAccess: TypeName '[' Expression ']'  */
#line 552 "parser.y"
                                                           {Node *temp1 = createNode("Separator",(yyvsp[-2].str),{});Node *temp2 = createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("ARRAY","",{(yyvsp[-3].node),(yyvsp[-1].node),temp1,temp2});}
#line 3083 "parser.tab.c"
    break;

  case 185: /* ArrayAccess: PrimaryNoNewArray '[' Expression ']'  */
#line 553 "parser.y"
                                                                                       {Node *temp1 = createNode("Separator",(yyvsp[-2].str),{});Node *temp2 = createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("ARRAY","",{(yyvsp[-3].node),(yyvsp[-1].node),temp1,temp2});}
#line 3089 "parser.tab.c"
    break;

  case 186: /* MethodInvocation: IDENTIFIER '(' ArgumentList ')'  */
#line 557 "parser.y"
                                                                                       {Node *temp = createNode("Identifier",(yyvsp[-3].str),{});Node *temp1 = createNode("Separator",(yyvsp[-2].str),{});Node *temp2 = createNode("Separator",(yyvsp[0].str),{});
                                                                                        (yyval.node)=createNode("METHODINVOCATION","",{temp,(yyvsp[-1].node),temp1,temp2});}
#line 3096 "parser.tab.c"
    break;

  case 187: /* MethodInvocation: IDENTIFIER '(' ')'  */
#line 559 "parser.y"
                                                                                       {Node *temp = createNode("ID",(yyvsp[-2].str),{});Node *temp3 = createNode("Separator",(yyvsp[-1].str),{});Node *temp2 = createNode("Separator",(yyvsp[0].str),{});
                                                                                       
                                                                                        (yyval.node)=createNode("METHODINVOCATION","",{temp,temp2,temp3});}
#line 3104 "parser.tab.c"
    break;

  case 188: /* MethodInvocation: TypeName '.' IDENTIFIER '(' ArgumentList ')'  */
#line 563 "parser.y"
                                                                                       {Node *temp = createNode("Identifier",(yyvsp[-3].str),{});Node *temp1 = createNode("Separator",(yyvsp[-4].str),{});Node *temp2 = createNode("Separator",(yyvsp[-2].str),{});Node *temp3 = createNode("Separator",(yyvsp[0].str),{});
                                                                                        (yyval.node)=createNode("METHODINVOCATION","",{(yyvsp[-5].node),temp,(yyvsp[-1].node),temp1,temp2,temp3});}
#line 3111 "parser.tab.c"
    break;

  case 189: /* MethodInvocation: TypeName '.' IDENTIFIER '(' ')'  */
#line 566 "parser.y"
                                                                                        {Node *temp = createNode("Identifier",(yyvsp[-2].str),{});Node *temp3= createNode("Separator",(yyvsp[-3].str),{});Node *temp4= createNode("Separator",(yyvsp[-1].str),{});Node *temp5 = createNode("Separator",(yyvsp[0].str),{});
                                                                                        Node *temp1 = createNode("METHODINVOCATION","",{temp,temp3,temp4,(yyvsp[-4].node),temp5});
                                                                                        (yyval.node)=createNode("METHODINVOCATION","",{(yyvsp[-4].node),temp,temp1,temp3,temp4});}
#line 3119 "parser.tab.c"
    break;

  case 190: /* MethodInvocation: Primary '.' IDENTIFIER '(' ArgumentList ')'  */
#line 569 "parser.y"
                                                                                         {Node *temp = createNode("Identifier",(yyvsp[-3].str),{});Node *temp1 = createNode("Separator",(yyvsp[-4].str),{});Node *temp2 = createNode("Separator",(yyvsp[-2].str),{});Node *temp3 = createNode("Separator",(yyvsp[0].str),{});
                                                                                        (yyval.node)=createNode("METHODINVOCATION","",{(yyvsp[-5].node),temp,(yyvsp[-1].node),temp1,temp2,temp3});}
#line 3126 "parser.tab.c"
    break;

  case 191: /* MethodInvocation: Primary '.' IDENTIFIER '(' ')'  */
#line 571 "parser.y"
                                                                                        {Node *temp = createNode("Identifier",(yyvsp[-2].str),{});Node *temp3= createNode("Separator",(yyvsp[-3].str),{});Node *temp4= createNode("Separator",(yyvsp[-1].str),{});Node *temp5 = createNode("Separator",(yyvsp[0].str),{});
                                                                                        Node *temp1 = createNode("METHODINVOCATION","",{temp,temp3,temp4,temp5,(yyvsp[-4].node)});}
#line 3133 "parser.tab.c"
    break;

  case 192: /* ArgumentList: ArgumentList ',' Expression  */
#line 576 "parser.y"
                                                                                       {Node *temp = createNode("Separator",(yyvsp[-1].str),{}); (yyvsp[-2].node)->children.push_back((yyvsp[0].node)); (yyvsp[-2].node)->children.push_back(temp);(yyval.node) = (yyvsp[-2].node);}
#line 3139 "parser.tab.c"
    break;

  case 193: /* ArgumentList: Expression  */
#line 577 "parser.y"
                                                                                       {(yyval.node) = createNode("ARGLIST","", {(yyvsp[0].node)}); }
#line 3145 "parser.tab.c"
    break;

  case 194: /* MethodReference: TypeName PROPORTION IDENTIFIER  */
#line 581 "parser.y"
                                             {Node *temp = createNode("Identifier",(yyvsp[0].str),{});Node *temp1 = createNode("KEYWORD",(yyvsp[-1].str),{});
                                                                                         (yyval.node) = createNode("METHOD_REF","",{(yyvsp[-2].node),temp,temp1});}
#line 3152 "parser.tab.c"
    break;

  case 195: /* MethodReference: ArrayType PROPORTION IDENTIFIER  */
#line 583 "parser.y"
                                                                                        {Node *temp = createNode("ID",(yyvsp[0].str),{});Node *temp1 = createNode("KEYWORD",(yyvsp[-1].str),{});
                                                                                         (yyval.node) = createNode("METHOD_REF","",{(yyvsp[-2].node),temp,temp1});}
#line 3159 "parser.tab.c"
    break;

  case 196: /* MethodReference: Primary PROPORTION IDENTIFIER  */
#line 585 "parser.y"
                                                                                        {Node *temp = createNode("ID",(yyvsp[0].str),{});Node *temp1 = createNode("KEYWORD",(yyvsp[-1].str),{});
                                                                                         (yyval.node) = createNode("METHOD_REF","",{(yyvsp[-2].node),temp,temp1});}
#line 3166 "parser.tab.c"
    break;

  case 197: /* MethodReference: TypeName PROPORTION NEW  */
#line 587 "parser.y"
                                                                  {Node *temp = createNode("KEYWORD",(yyvsp[0].str),{});Node *temp1 = createNode("KEYWORD",(yyvsp[-1].str),{});
                                                                                         (yyval.node) = createNode("METHOD_REF","",{(yyvsp[-2].node),temp,temp1});}
#line 3173 "parser.tab.c"
    break;

  case 198: /* MethodReference: ArrayType PROPORTION NEW  */
#line 589 "parser.y"
                                                                                        {Node *temp = createNode("KEYWORD",(yyvsp[0].str),{});Node *temp1 = createNode("KEYWORD",(yyvsp[-1].str),{});
                                                                                         (yyval.node) = createNode("METHOD_REF","",{(yyvsp[-2].node),temp,temp1});}
#line 3180 "parser.tab.c"
    break;

  case 199: /* ArrayCreationExpression: NEW PrimitiveType DimExprs Dims  */
#line 594 "parser.y"
                                                                                        {Node *temp = createNode("KEYWORD",(yyvsp[-3].str),{});
                                                                                         (yyval.node) = createNode("ARRAY_CREATION","",{temp,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)});}
#line 3187 "parser.tab.c"
    break;

  case 200: /* ArrayCreationExpression: NEW PrimitiveType DimExprs  */
#line 596 "parser.y"
                                                                                        {Node *temp = createNode("KEYWORD",(yyvsp[-2].str),{});
                                                                                         (yyval.node) = createNode("ARRAY_CREATION","",{temp,(yyvsp[-1].node),(yyvsp[0].node)});}
#line 3194 "parser.tab.c"
    break;

  case 201: /* ArrayCreationExpression: NEW TypeName DimExprs Dims  */
#line 598 "parser.y"
                                                                 {Node *temp = createNode("KEYWORD",(yyvsp[-3].str),{});
                                                                                         (yyval.node) = createNode("ARRAY_CREATION","",{temp,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)});}
#line 3201 "parser.tab.c"
    break;

  case 202: /* ArrayCreationExpression: NEW TypeName DimExprs  */
#line 600 "parser.y"
                                                                 {Node *temp = createNode("KEYWORD",(yyvsp[-2].str),{});
                                                                                         (yyval.node) = createNode("ARRAY_CREATION","",{temp,(yyvsp[-1].node),(yyvsp[0].node)});}
#line 3208 "parser.tab.c"
    break;

  case 203: /* ArrayCreationExpression: NEW PrimitiveType Dims ArrayInitializer  */
#line 602 "parser.y"
                                                                                        {Node *temp = createNode("KEYWORD",(yyvsp[-3].str),{});
                                                                                         (yyval.node) = createNode("ARRAY_CREATION","",{temp,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)});}
#line 3215 "parser.tab.c"
    break;

  case 204: /* ArrayCreationExpression: NEW TypeName Dims ArrayInitializer  */
#line 604 "parser.y"
                                                                 {Node *temp = createNode("KEYWORD",(yyvsp[-3].str),{});
                                                                                         (yyval.node) = createNode("ARRAY_CREATION","",{temp,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)});}
#line 3222 "parser.tab.c"
    break;

  case 205: /* DimExprs: DimExpr  */
#line 609 "parser.y"
                                                                                        {(yyval.node) = createNode("DIMEXPR","", {(yyvsp[0].node)}); }
#line 3228 "parser.tab.c"
    break;

  case 206: /* DimExprs: DimExprs DimExpr  */
#line 610 "parser.y"
                                                                                        {(yyvsp[-1].node)->children.push_back((yyvsp[0].node)); (yyval.node) = (yyvsp[-1].node); }
#line 3234 "parser.tab.c"
    break;

  case 207: /* DimExpr: '[' Expression ']'  */
#line 614 "parser.y"
                                                                                        {Node *temp2=createNode("Separator",(yyvsp[-2].str),{});Node *temp1=createNode("Separator",(yyvsp[0].str),{});(yyval.node) = createNode("DimExpr","", {temp1,temp2,(yyvsp[-1].node)});}
#line 3240 "parser.tab.c"
    break;

  case 208: /* Expression: AssignmentExpression  */
#line 618 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3246 "parser.tab.c"
    break;

  case 209: /* AssignmentExpression: ConditionalExpression  */
#line 622 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3252 "parser.tab.c"
    break;

  case 210: /* AssignmentExpression: Assignment  */
#line 623 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3258 "parser.tab.c"
    break;

  case 211: /* Assignment: LeftHandSide AssignmentOperator Expression  */
#line 627 "parser.y"
                                                                                        {(yyvsp[-1].node)->children={(yyvsp[-2].node),(yyvsp[0].node)};(yyval.node)=(yyvsp[-1].node);}
#line 3264 "parser.tab.c"
    break;

  case 212: /* Assignment: TypeName AssignmentOperator Expression  */
#line 628 "parser.y"
                                                             {(yyvsp[-1].node)->children={(yyvsp[-2].node),(yyvsp[0].node)};(yyval.node)=(yyvsp[-1].node);}
#line 3270 "parser.tab.c"
    break;

  case 213: /* LeftHandSide: FieldAccess  */
#line 632 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3276 "parser.tab.c"
    break;

  case 214: /* LeftHandSide: ArrayAccess  */
#line 633 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3282 "parser.tab.c"
    break;

  case 215: /* AssignmentOperator: '='  */
#line 637 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[0].str),{});}
#line 3288 "parser.tab.c"
    break;

  case 216: /* AssignmentOperator: MUL_ASSIGN  */
#line 638 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[0].str),{});}
#line 3294 "parser.tab.c"
    break;

  case 217: /* AssignmentOperator: DIV_ASSIGN  */
#line 639 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[0].str),{});}
#line 3300 "parser.tab.c"
    break;

  case 218: /* AssignmentOperator: MOD_ASSIGN  */
#line 640 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[0].str),{});}
#line 3306 "parser.tab.c"
    break;

  case 219: /* AssignmentOperator: ADD_ASSIGN  */
#line 641 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[0].str),{});}
#line 3312 "parser.tab.c"
    break;

  case 220: /* AssignmentOperator: SUB_ASSIGN  */
#line 642 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[0].str),{});}
#line 3318 "parser.tab.c"
    break;

  case 221: /* AssignmentOperator: LEFT_ASSIGN  */
#line 643 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[0].str),{});}
#line 3324 "parser.tab.c"
    break;

  case 222: /* AssignmentOperator: RIGHT_ASSIGN  */
#line 644 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[0].str),{});}
#line 3330 "parser.tab.c"
    break;

  case 223: /* AssignmentOperator: UNSIGNED_RIGHT_ASSIGN  */
#line 645 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[0].str),{});}
#line 3336 "parser.tab.c"
    break;

  case 224: /* AssignmentOperator: AND_ASSIGN  */
#line 646 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[0].str),{});}
#line 3342 "parser.tab.c"
    break;

  case 225: /* AssignmentOperator: XOR_ASSIGN  */
#line 647 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[0].str),{});}
#line 3348 "parser.tab.c"
    break;

  case 226: /* AssignmentOperator: OR_ASSIGN  */
#line 648 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[0].str),{});}
#line 3354 "parser.tab.c"
    break;

  case 227: /* ConditionalExpression: ConditionalOrExpression  */
#line 652 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3360 "parser.tab.c"
    break;

  case 228: /* ConditionalExpression: ConditionalOrExpression '?' Expression ':' ConditionalExpression  */
#line 653 "parser.y"
                                                                                        {Node *temp1=createNode("Separator",(yyvsp[-3].str),{});Node *temp2=createNode("Separator",(yyvsp[-1].str),{});(yyval.node)=createNode("BRANCH","",{(yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node),temp1,temp2});}
#line 3366 "parser.tab.c"
    break;

  case 229: /* ConditionalOrExpression: ConditionalAndExpression  */
#line 657 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3372 "parser.tab.c"
    break;

  case 230: /* ConditionalOrExpression: ConditionalOrExpression OR_OP ConditionalAndExpression  */
#line 658 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3378 "parser.tab.c"
    break;

  case 231: /* ConditionalAndExpression: InclusiveOrExpression  */
#line 662 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3384 "parser.tab.c"
    break;

  case 232: /* ConditionalAndExpression: ConditionalAndExpression AND_OP InclusiveOrExpression  */
#line 663 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3390 "parser.tab.c"
    break;

  case 233: /* InclusiveOrExpression: ExclusiveOrExpression  */
#line 667 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3396 "parser.tab.c"
    break;

  case 234: /* InclusiveOrExpression: InclusiveOrExpression '|' ExclusiveOrExpression  */
#line 668 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3402 "parser.tab.c"
    break;

  case 235: /* ExclusiveOrExpression: AndExpression  */
#line 672 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3408 "parser.tab.c"
    break;

  case 236: /* ExclusiveOrExpression: ExclusiveOrExpression '^' AndExpression  */
#line 673 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3414 "parser.tab.c"
    break;

  case 237: /* AndExpression: EqualityExpression  */
#line 677 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3420 "parser.tab.c"
    break;

  case 238: /* AndExpression: AndExpression '&' EqualityExpression  */
#line 678 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3426 "parser.tab.c"
    break;

  case 239: /* EqualityExpression: RelationalExpression  */
#line 682 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3432 "parser.tab.c"
    break;

  case 240: /* EqualityExpression: EqualityExpression EQ_OP RelationalExpression  */
#line 683 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3438 "parser.tab.c"
    break;

  case 241: /* EqualityExpression: EqualityExpression NE_OP RelationalExpression  */
#line 684 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3444 "parser.tab.c"
    break;

  case 242: /* RelationalExpression: ShiftExpression  */
#line 688 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3450 "parser.tab.c"
    break;

  case 243: /* RelationalExpression: RelationalExpression '<' ShiftExpression  */
#line 689 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3456 "parser.tab.c"
    break;

  case 244: /* RelationalExpression: RelationalExpression '>' ShiftExpression  */
#line 690 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3462 "parser.tab.c"
    break;

  case 245: /* RelationalExpression: RelationalExpression LE_OP ShiftExpression  */
#line 691 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3468 "parser.tab.c"
    break;

  case 246: /* RelationalExpression: RelationalExpression GE_OP ShiftExpression  */
#line 692 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3474 "parser.tab.c"
    break;

  case 247: /* RelationalExpression: RelationalExpression INSTANCEOF ReferenceType  */
#line 693 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3480 "parser.tab.c"
    break;

  case 248: /* ShiftExpression: AdditiveExpression  */
#line 697 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3486 "parser.tab.c"
    break;

  case 249: /* ShiftExpression: ShiftExpression LEFT_OP AdditiveExpression  */
#line 698 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3492 "parser.tab.c"
    break;

  case 250: /* ShiftExpression: ShiftExpression RIGHT_OP AdditiveExpression  */
#line 699 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3498 "parser.tab.c"
    break;

  case 251: /* ShiftExpression: ShiftExpression UNSIGNED_RIGHT_OP AdditiveExpression  */
#line 700 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3504 "parser.tab.c"
    break;

  case 252: /* AdditiveExpression: MultiplicativeExpression  */
#line 704 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3510 "parser.tab.c"
    break;

  case 253: /* AdditiveExpression: AdditiveExpression '+' MultiplicativeExpression  */
#line 705 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3516 "parser.tab.c"
    break;

  case 254: /* AdditiveExpression: AdditiveExpression '-' MultiplicativeExpression  */
#line 706 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3522 "parser.tab.c"
    break;

  case 255: /* MultiplicativeExpression: UnaryExpression  */
#line 710 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3528 "parser.tab.c"
    break;

  case 256: /* MultiplicativeExpression: MultiplicativeExpression '*' UnaryExpression  */
#line 711 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3534 "parser.tab.c"
    break;

  case 257: /* MultiplicativeExpression: MultiplicativeExpression '/' UnaryExpression  */
#line 712 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3540 "parser.tab.c"
    break;

  case 258: /* MultiplicativeExpression: MultiplicativeExpression '%' UnaryExpression  */
#line 713 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3546 "parser.tab.c"
    break;

  case 259: /* UnaryExpression: PreIncrementExpression  */
#line 717 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3552 "parser.tab.c"
    break;

  case 260: /* UnaryExpression: PreDecrementExpression  */
#line 718 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3558 "parser.tab.c"
    break;

  case 261: /* UnaryExpression: '+' UnaryExpression  */
#line 719 "parser.y"
                                                                                        {Node * temp = createNode("OP",(yyvsp[-1].str),{});
                                                                                         (yyval.node)=createNode("UOP","",{temp,(yyvsp[0].node)});}
#line 3565 "parser.tab.c"
    break;

  case 262: /* UnaryExpression: '-' UnaryExpression  */
#line 721 "parser.y"
                                                                                        {Node * temp = createNode("OP",(yyvsp[-1].str),{});
                                                                                         (yyval.node)=createNode("UOP","",{temp,(yyvsp[0].node)});}
#line 3572 "parser.tab.c"
    break;

  case 263: /* UnaryExpression: UnaryExpressionNotPlusMinus  */
#line 723 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3578 "parser.tab.c"
    break;

  case 264: /* PreIncrementExpression: INC_OP UnaryExpression  */
#line 727 "parser.y"
                                                                                        {Node * temp = createNode("OP",(yyvsp[-1].str),{});
                                                                                         (yyval.node)=createNode("UOP","",{temp,(yyvsp[0].node)});}
#line 3585 "parser.tab.c"
    break;

  case 265: /* PreDecrementExpression: DEC_OP UnaryExpression  */
#line 732 "parser.y"
                                                                                        {Node * temp = createNode("OP",(yyvsp[-1].str),{});
                                                                                         (yyval.node)=createNode("UOP","",{temp,(yyvsp[0].node)});}
#line 3592 "parser.tab.c"
    break;

  case 266: /* UnaryExpressionNotPlusMinus: PostfixExpression  */
#line 737 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3598 "parser.tab.c"
    break;

  case 267: /* UnaryExpressionNotPlusMinus: '~' UnaryExpression  */
#line 738 "parser.y"
                                                                                        {Node * temp = createNode("OP",(yyvsp[-1].str),{});
                                                                                         (yyval.node)=createNode("UOP","",{temp,(yyvsp[0].node)});}
#line 3605 "parser.tab.c"
    break;

  case 268: /* UnaryExpressionNotPlusMinus: '!' UnaryExpression  */
#line 740 "parser.y"
                                                                                        {Node * temp = createNode("OP",(yyvsp[-1].str),{});
                                                                                         (yyval.node)=createNode("UOP","",{temp,(yyvsp[0].node)});}
#line 3612 "parser.tab.c"
    break;

  case 269: /* UnaryExpressionNotPlusMinus: CastExpression  */
#line 742 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3618 "parser.tab.c"
    break;

  case 270: /* PostfixExpression: Primary  */
#line 746 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3624 "parser.tab.c"
    break;

  case 271: /* PostfixExpression: TypeName  */
#line 747 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3630 "parser.tab.c"
    break;

  case 272: /* PostfixExpression: PostIncrementExpression  */
#line 748 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3636 "parser.tab.c"
    break;

  case 273: /* PostfixExpression: PostDecrementExpression  */
#line 749 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3642 "parser.tab.c"
    break;

  case 274: /* PostIncrementExpression: PostfixExpression INC_OP  */
#line 753 "parser.y"
                                                                                        {Node * temp = createNode("OP",(yyvsp[0].str),{});
                                                                                         (yyval.node)=createNode("UOP","",{(yyvsp[-1].node),temp});}
#line 3649 "parser.tab.c"
    break;

  case 275: /* PostDecrementExpression: PostfixExpression DEC_OP  */
#line 758 "parser.y"
                                                                                        {Node * temp = createNode("OP",(yyvsp[0].str),{});
                                                                                         (yyval.node)=createNode("UOP","",{(yyvsp[-1].node),temp});}
#line 3656 "parser.tab.c"
    break;

  case 276: /* CastExpression: '(' PrimitiveType ')' UnaryExpression  */
#line 763 "parser.y"
                                                                                        {Node * temp1 = createNode("Separator",(yyvsp[-3].str),{});Node * temp3 = createNode("Separator",(yyvsp[-1].str),{});(yyval.node)=createNode("TYPECAST","",{(yyvsp[-2].node),(yyvsp[0].node),temp1,temp3});}
#line 3662 "parser.tab.c"
    break;


#line 3666 "parser.tab.c"

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

#line 959 "parser.y"




int counter=2;
void dfs(Node* head, int head_num){
    for(Node* u:head->children){

        string temp = (u->value)[0]=='"' ? "\\"+(u->value).substr(0,(u->value).size()-1)+"\\\"" : u->value;
    
        string val =  (u->value).empty() ? u->label : u->label+"__"+u->value;
        string shape =  ", shape = box" ;
        string color = ", color=lightblue style=filled";
        cout << counter << " [label = \""+val+"\""+shape+color+"];\n";
        cout << head_num << "->" << counter << " [ ];\n";
        counter++;
        dfs(u,counter-1);
    }
}


void generate_dot(){
    if(root==NULL)  return;
    cout << "digraph G {" << '\n' << "size=\"7,15\"; center = true; ";
    string temp = (root->value)[0]=='"' ? "\\"+(root->value).substr(0,(root->value).size()-1)+"\\\"" : root->value;
    string val = (root->value).empty() ? root->label : root->label+"__"+temp;
    string shape = (root->value).empty() ? ", shape = box" : "";
    string color = (root->value).empty() ? "" : ", color=lightblue, style=filled";
    cout << "1 [label = \""+val+"\""+shape+color+"];\n";
    dfs(root,1);
    cout << "}";
}




int main (void) {
    yyparse();

    generate_dot();

    return 1;
}

void yyerror (const char *s) {cerr<<"Line "<<line<<": "<<s;}
