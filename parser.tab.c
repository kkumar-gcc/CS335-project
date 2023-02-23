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
#define YYLAST   1966

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  104
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  111
/* YYNRULES -- Number of rules.  */
#define YYNRULES  277
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  464

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
     120,   121,   127,   128,   133,   134,   138,   139,   143,   144,
     145,   146,   147,   151,   152,   156,   157,   160,   161,   164,
     165,   170,   171,   172,   173,   177,   178,   185,   189,   193,
     194,   197,   198,   199,   203,   204,   205,   206,   212,   213,
     217,   218,   221,   222,   226,   227,   230,   231,   235,   236,
     241,   242,   246,   247,   251,   252,   253,   254,   258,   259,
     260,   264,   265,   266,   270,   271,   275,   279,   280,   284,
     285,   293,   297,   298,   302,   303,   307,   308,   309,   310,
     314,   318,   319,   326,   327,   331,   332,   336,   337,   338,
     342,   346,   350,   351,   352,   353,   354,   355,   359,   360,
     361,   362,   363,   367,   368,   369,   370,   371,   372,   376,
     380,   384,   388,   392,   393,   394,   395,   396,   397,   398,
     402,   406,   410,   414,   418,   422,   423,   427,   428,   432,
     436,   437,   441,   442,   446,   447,   451,   455,   456,   460,
     464,   465,   469,   473,   477,   478,   482,   483,   487,   488,
     496,   497,   501,   502,   503,   504,   506,   507,   508,   509,
     510,   511,   515,   517,   519,   521,   523,   529,   530,   531,
     535,   537,   539,   542,   548,   553,   554,   558,   560,   563,
     566,   570,   572,   578,   579,   583,   585,   587,   589,   591,
     596,   598,   600,   602,   604,   606,   611,   612,   616,   620,
     624,   625,   629,   630,   634,   635,   639,   640,   641,   642,
     643,   644,   645,   646,   647,   648,   649,   650,   654,   655,
     659,   660,   664,   665,   669,   670,   674,   675,   679,   680,
     684,   685,   686,   690,   691,   692,   693,   694,   695,   699,
     700,   701,   702,   706,   707,   708,   712,   713,   714,   715,
     719,   720,   721,   723,   725,   729,   734,   739,   740,   742,
     744,   748,   749,   750,   751,   755,   760,   765
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

#define YYPACT_NINF (-406)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-275)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -8,   -17,    19,  -406,    88,   -34,  -406,  -406,  -406,  -406,
     120,   -76,  -406,  -406,    52,  -406,   608,  -406,  -406,  -406,
    -406,  -406,  -406,  -406,  -406,  -406,  -406,    30,    77,  -406,
    -406,    16,  -406,   134,    84,    44,  -406,  -406,  -406,  -406,
    -406,  -406,    57,  -406,  -406,   195,  -406,   -26,  -406,  -406,
      80,   816,  -406,    79,  -406,   215,   111,    92,     3,    58,
    -406,   168,  -406,    92,  -406,    84,   -26,    80,  -406,  -406,
    -406,   909,  -406,   -41,   147,   158,  -406,   -39,  1383,   155,
     165,  -406,   -44,   457,  1851,  1851,  1851,  -406,  -406,   925,
     243,   138,   196,  -406,  -406,  1002,  -406,  -406,   206,  -406,
    -406,  -406,  -406,  -406,   216,  -406,  -406,  -406,  -406,  -406,
    -406,  -406,  -406,  -406,   -72,   227,  -406,   -24,  -406,  1023,
    1163,   -21,  -406,  -406,  -406,  1231,  -406,  -406,    76,    91,
     126,  1808,   457,  -406,     0,   232,   231,   234,  -406,   240,
    -406,   247,    92,   243,  -406,  1556,    98,  -406,  -406,   253,
    -406,  1094,  1162,   246,  -406,  1874,  1851,   249,  -406,   255,
    1851,  1851,  1851,  1851,  1851,  -406,  1011,   138,   196,  -406,
    -406,   250,  -406,  -406,  -406,   201,   286,   288,   293,   287,
     152,   109,   114,   178,   179,  -406,  -406,  -406,  -406,    76,
    -406,  -406,  -406,   323,  1851,  1298,  1618,   -58,   270,    -5,
    -406,  -406,  -406,  -406,   274,  -406,  -406,  -406,  -406,  -406,
    -406,  -406,  -406,  -406,  -406,  -406,  -406,  1468,   -10,   -40,
     173,  1851,    44,   269,   328,   207,   -38,  -406,  -406,  -406,
    -406,   -23,   318,  1851,  1851,  -406,  -406,    44,   278,   243,
    -406,   211,  -406,  -406,  1121,  -406,  -406,  1445,  -406,  -406,
    -406,  -406,  1641,  -406,  -406,  1230,  -406,  -406,   243,  -406,
    -406,   272,  -406,   277,   284,  -406,  -406,  -406,  -406,  -406,
      74,  -406,  1851,  1851,  1851,  1851,  1851,  1851,  1851,  1851,
    1851,  1851,  1851,  1851,   457,  1851,  1851,  1851,  1851,  1851,
    1851,  1851,  1851,  -406,   289,  -406,  -406,    -3,  -406,  1703,
    1468,   228,   270,  -406,   228,   270,  -406,   290,  -406,  -406,
     291,   -17,  -406,  -406,  -406,   344,  -406,  -406,   345,  -406,
    -406,   296,  -406,  -406,   292,  -406,    92,    44,  -406,   374,
     243,   234,  -406,  -406,   298,     8,  -406,   294,    13,  -406,
     -25,  1851,  1874,  1360,  1851,   331,   286,   288,   293,   287,
     152,   109,   109,   114,   114,   114,   114,    44,  -406,   178,
     178,   178,   179,   179,  -406,  -406,  -406,  1298,  -406,  1851,
     -76,    18,   299,  -406,    92,  -406,  -406,    92,  -406,  1726,
      51,  -406,  -406,  1788,  -406,    92,  -406,  -406,  -406,  1530,
    -406,   302,  1851,   303,  -406,  -406,   312,   313,   321,   -27,
    -406,   394,   398,  -406,  -406,  -406,  -406,  -406,  -406,  -406,
    1851,  -406,  -406,  -406,   -76,  -406,  -406,    28,  -406,    54,
    -406,  -406,  -406,   334,  1874,  1874,  1851,  1851,  1360,  1298,
    -406,  -406,  -406,  -406,  1298,   335,  -406,   277,   243,   329,
     337,   339,  -406,  -406,  -406,  1298,    14,  1851,  1360,  1360,
    -406,  1851,   333,   400,  -406,   346,  1874,  1360,  1360,   348,
    -406,  -406,  1360,  -406
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       2,     0,     0,     9,     0,     5,     4,     8,    37,    10,
       0,     0,     1,     3,     0,     7,     0,    38,    11,    15,
      51,    24,    18,    50,    20,    19,    22,     0,     0,    21,
      23,    10,    40,    25,     0,    12,    14,    16,    17,    13,
      26,    46,     0,    41,    44,     0,    45,     0,    42,    43,
       0,     0,    81,     0,    63,     0,     0,    28,    57,     0,
      53,    55,    62,    27,    39,     0,     0,     0,    80,    61,
      79,     0,    83,     0,     0,     0,   164,     0,     0,     0,
       0,   162,    10,     0,     0,     0,     0,    94,   119,   272,
       0,    12,    26,    98,   113,     0,    95,    97,     0,    99,
     102,   114,   103,   115,     0,   104,   105,   106,   107,   135,
     136,   116,   117,   118,   271,   160,   163,   167,   177,   168,
     169,   170,   171,   161,   123,     0,   124,   125,     0,   126,
     127,     0,     0,    85,     0,     0,     0,    72,    70,    68,
      30,     0,    56,     0,    49,     0,     0,    60,    82,   164,
      89,     0,     0,     0,   157,   140,     0,     0,   155,    10,
       0,     0,     0,     0,     0,   159,   272,     0,     0,   167,
     170,     0,   209,   211,   210,   228,   230,   232,   234,   236,
     238,   240,   243,   249,   253,   256,   260,   261,   264,   267,
     273,   274,   270,     0,     0,     0,     0,     0,     0,   272,
     168,   169,   265,   266,     0,   216,   220,   221,   217,   218,
     219,   225,   227,   226,   222,   223,   224,     0,     0,     0,
      28,     0,    57,   101,     0,    27,     0,    93,    96,   100,
     122,     0,     0,     0,     0,   275,   276,    65,     0,     0,
      77,    57,    75,    84,     0,    29,    52,     0,    59,    54,
      58,    48,     0,    90,    88,     0,    87,   156,     0,   148,
     150,     0,   141,   147,     0,   154,   262,   263,   269,   268,
       0,   158,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   176,     0,   120,   188,     0,   194,     0,
       0,     0,   203,   206,     0,   201,   166,     0,   165,   173,
      11,     0,   178,   195,   198,     0,   213,   175,     0,   196,
     199,   184,   179,   197,     0,   212,    67,    64,    74,     0,
       0,    71,    69,    34,     0,     0,    35,     0,     0,    86,
      55,   142,     0,     0,     0,     0,   231,   233,   235,   237,
     239,   242,   241,   244,   245,   247,   246,     0,   248,   250,
     251,   252,   254,   255,   257,   258,   259,     0,   187,     0,
     183,     0,     0,   205,   202,   207,   204,   200,   185,     0,
       0,   172,   174,     0,   186,    66,    78,    33,    32,     0,
      91,     0,     0,     0,   143,   151,     0,     0,     0,    10,
     130,     0,   102,   109,   110,   111,   112,   137,   138,   277,
       0,   133,   193,   182,   180,   208,   190,     0,   192,     0,
      31,    36,    92,     0,   144,   140,     0,     0,     0,     0,
     229,   181,   189,   191,     0,     0,   145,   149,     0,     0,
       0,     0,   121,   131,   152,     0,    55,   142,     0,     0,
     139,     0,     0,     0,   134,     0,   144,     0,     0,     0,
     132,   153,     0,   146
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -406,  -406,  -406,   433,    -1,     1,   444,  -406,  -406,  -406,
     161,    71,   735,  -176,  -406,    20,  -406,  -361,  -406,  -406,
    -406,  -406,    -7,   306,  -124,  -243,  -406,   405,   423,   322,
    -406,   208,   210,  -406,   389,  -406,  -406,   411,   390,  -406,
    -406,    -4,   -66,   -92,  -406,  -131,   -97,  -339,  -280,  -406,
    -406,  -406,  -406,  -123,  -406,  -406,  -406,  -406,  -406,  -406,
    -406,  -406,    33,    12,     5,  -406,  -406,  -406,  -405,  -406,
    -406,  -406,  -406,  -406,  -406,  -406,  -406,   -50,  -145,   520,
     600,   -14,  -244,  -406,  -406,   265,  -129,   473,  -406,    49,
    -406,   340,    60,  -406,   191,   192,   193,   200,   190,    56,
     -71,    26,    53,    29,   104,   145,  -406,   267,   285,   330,
    -406
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     4,     5,     6,   166,    90,   167,    36,    37,    38,
      39,   168,   142,   248,   335,    93,     8,    17,    42,    43,
      44,    45,   223,    60,    61,   249,    46,    47,    62,   135,
     136,   137,   138,   139,    69,    48,    49,    50,    72,   151,
     253,    94,    95,    96,    97,    98,    99,   401,   100,   101,
     102,   403,   103,   104,   105,   106,   404,   107,   405,   108,
     406,   109,   261,   393,   435,   407,   262,   436,   263,   110,
     408,   111,   112,   113,   114,   115,   116,   169,   118,   119,
     120,   170,   297,   122,   123,   302,   303,   298,   172,   173,
     125,   221,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,   117,     1,   228,   336,   152,   308,     2,   338,   413,
     242,   153,   313,   157,   319,    33,   240,    34,    16,   437,
       7,   117,   195,    52,   259,     7,   231,    59,   145,   321,
     232,   309,   260,     2,   299,     9,    41,   121,   300,   428,
      14,   392,   310,    70,    33,   117,    65,   314,   196,   320,
      89,   437,   241,   431,    33,   371,   134,   121,   146,   154,
     228,   158,    70,   402,   311,   196,     3,   145,    51,  -129,
      89,    11,  -128,   312,    68,  -129,  -129,   311,  -128,  -128,
     451,   121,   197,   199,   199,   255,   322,    40,    12,   442,
     368,   217,     3,   218,    89,   131,   369,   219,   295,    56,
     124,   117,   117,   388,    18,   117,   391,   389,    55,   453,
     454,   414,   369,   202,   203,   328,    40,   369,   460,   461,
     124,   432,    92,   463,    51,   373,    40,   369,   376,    53,
      33,    33,   134,   239,   340,   417,    58,   121,   121,   419,
      56,   121,    92,   299,   124,   117,   421,   433,   402,    14,
      89,    89,    64,   369,    89,   126,   258,   143,   144,   199,
     199,   199,   199,   228,   235,   236,    92,   344,   402,   402,
      56,   131,   224,   375,    71,   126,   375,   402,   402,  -273,
    -273,   121,   402,   280,   281,   282,   283,   284,   141,   266,
     267,   268,   269,   285,   286,   287,   127,   143,   251,   126,
     124,   124,    40,    40,   124,   117,   242,    19,   140,   353,
     354,   355,   356,    21,  -274,  -274,   127,    22,    14,   395,
      15,   145,    92,    92,   278,   279,    92,    19,    24,    25,
      56,    26,    14,    21,    56,    28,   224,    22,    29,   155,
     127,   121,    30,    33,   124,   330,   400,    31,    24,    25,
     156,    26,   132,   193,    89,   126,   126,   194,    29,   126,
     288,   289,    30,   290,   291,   292,   272,     9,   273,   141,
     411,   315,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,    33,   199,   199,   199,   199,   199,   199,
     199,   199,   117,   117,   259,   222,   127,   127,   226,   126,
     127,   260,   260,   141,   124,   318,   229,    56,   133,   329,
     380,   359,   360,   361,   446,    40,   230,   117,   128,   364,
     365,   366,   247,   233,   141,   243,    92,   -76,   121,   121,
     244,   295,   443,   260,   351,   352,   129,   444,   128,   -73,
     127,   362,   363,   199,   245,   252,   257,   196,   450,   265,
     271,   400,   411,   121,   274,    40,   129,   275,   277,   126,
     443,   444,   128,   276,   293,   450,   300,   306,   143,   317,
     323,   327,   341,   409,   117,   117,   342,   343,   117,   117,
     129,   130,   367,   379,   117,   381,   382,   378,   383,   384,
     386,   124,   124,   387,   390,   117,   415,   410,   117,   117,
     127,   130,   422,   424,   425,   426,   117,   117,   117,   199,
     121,   121,   117,   427,   121,   121,   124,   429,   128,   128,
     121,  -108,   128,   457,    89,   130,   438,   434,   445,   447,
     448,   121,   449,   456,   121,   121,   129,   129,    13,   458,
     129,   462,   121,   121,   121,   358,   126,   126,   121,   246,
      66,    54,   331,   238,   332,   147,    67,   148,   439,   452,
      35,   459,   128,   305,   346,   234,   347,   350,   348,    19,
     430,   126,     0,   124,   124,    21,   349,   124,   124,    22,
     129,   130,   130,   124,     0,   130,     0,   127,   127,    35,
      24,    25,     0,    26,   124,    91,    92,   124,   124,    35,
      29,     0,     0,     0,    30,   124,   124,   124,     0,     9,
       0,   124,   127,     0,     0,    91,     0,     0,     0,     0,
       0,     0,   128,     0,     0,   130,     0,   198,   126,   126,
       0,     0,   126,   126,     0,     0,     0,     0,   126,    91,
     129,     0,     0,     0,     0,     0,     0,     0,     0,   126,
       0,   171,   126,   126,     0,     0,     0,     0,     0,   204,
     126,   126,   126,     0,     0,     0,   126,     0,     0,   127,
     127,     0,     0,   127,   127,    35,    35,     0,     0,   127,
       0,     0,     0,     0,     0,   130,     0,     0,     0,     0,
     127,     0,     0,   127,   127,    91,    91,     0,     0,    91,
       0,   127,   127,   127,   200,   200,     0,   127,   270,   128,
     128,     0,     0,     0,     0,     0,     0,     0,   250,     0,
      19,     0,     0,    20,     0,     0,    21,   129,   129,   264,
      22,     0,     0,    23,   128,     0,     0,   204,     0,     0,
       0,    24,    25,     0,    26,     0,     0,    27,    28,     2,
       0,    29,   129,     0,     0,    30,     0,     0,     0,     0,
      31,     0,     0,     0,     0,     0,     0,   294,     0,     0,
       0,     0,   130,   130,     0,     0,     0,     0,     0,     0,
     200,   200,   200,   200,   201,   201,     0,     0,    35,     0,
     307,   128,   128,     0,   316,   128,   128,   130,     0,    91,
       0,   128,     0,    32,     0,     0,   324,   325,     0,   129,
     129,     0,   128,   129,   129,   128,   128,     0,     0,   129,
     250,     0,     0,   128,   128,   128,     0,     0,   357,   128,
     129,     0,     0,   129,   129,     0,     0,     0,     0,     0,
       0,   129,   129,   129,     0,   345,     0,   129,     0,     0,
       0,     0,     0,     0,   130,   130,     0,     0,   130,   130,
     201,   201,   201,   201,   130,     0,     0,     0,    57,     0,
      63,     0,     0,   372,     0,   130,     0,     0,   130,   130,
       0,     0,     0,     0,     0,     0,   130,   130,   130,     0,
       0,     0,   130,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   200,   200,     0,   200,   200,   200,   200,   200,
     200,   200,   200,     0,   394,     0,     0,     0,     0,     0,
      73,    74,     0,     0,   220,    75,   225,     0,    19,     0,
       0,     0,    76,    77,    21,     0,     0,     0,    22,     0,
       0,     0,   412,     0,     0,    78,     0,     0,     0,    24,
      25,     0,    26,     0,     0,     0,    79,     2,     0,    29,
       0,     0,   250,    30,   200,   423,    80,    81,    82,    91,
       0,     0,     0,   201,   201,   201,   201,   201,   201,   201,
     201,   201,   201,   201,     0,   201,   201,   201,   201,   201,
     201,   201,   201,     0,     0,     0,     0,     0,     0,   440,
     441,   220,   225,    83,    84,    85,     0,     0,    86,     0,
      51,    87,     0,    73,    74,     0,    88,     0,    75,     0,
     394,    19,     0,     0,   455,   149,    77,    21,     0,     0,
     200,    22,   301,   304,   220,     0,     0,     0,    78,     0,
       0,     0,    24,    25,   201,    26,     0,     0,     0,    79,
       2,     0,    29,     0,     0,     0,    30,     0,     0,    80,
      81,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   326,     0,     0,     0,     0,   -25,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
       0,     0,     0,     0,     0,     0,    83,    84,    85,     0,
       0,    86,     0,    51,   150,   225,    73,    74,     0,    88,
     201,    75,     0,     0,    19,     0,     0,     0,    76,    77,
      21,   217,     0,   218,    22,     0,     0,   219,     0,     0,
       0,    78,     0,     0,     0,    24,    25,   374,    26,     0,
     377,     0,    79,     2,     0,    29,     0,     0,     0,    30,
       0,     0,    80,    81,    82,     0,     0,     0,     0,     0,
       0,     0,   385,     0,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,  -214,  -214,  -214,  -214,
    -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,     0,    83,
      84,    85,    63,     0,    86,     0,    51,   227,    73,    74,
       0,     0,    88,    75,     0,     0,    19,   217,     0,   218,
      76,    77,    21,   219,     0,     0,    22,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,    24,    25,     0,
      26,     0,     0,    19,    79,     2,     0,    29,     0,    21,
       0,    30,     0,    22,    80,    81,    82,     0,     0,     0,
       0,     0,     0,     0,    24,    25,     0,    26,   132,     0,
       0,     0,     0,     0,    29,     0,    73,    74,    30,     0,
       0,    75,     0,     9,    19,     0,     0,     0,    76,    77,
      21,    83,    84,    85,    22,     0,    86,     0,    51,   254,
       0,    78,     0,     0,    88,    24,    25,     0,    26,     0,
       0,     0,    79,     2,     0,    29,     0,     0,     0,    30,
       0,     0,    80,    81,    82,     0,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,     0,     0,
       0,     0,     0,     0,    73,    74,     0,     0,     0,    75,
       0,     0,    19,     0,     0,     0,    76,    77,    21,    83,
      84,    85,    22,     0,    86,     0,    51,   256,     0,    78,
       0,     0,    88,    24,    25,     0,    26,     0,     0,     0,
      79,     2,     0,    29,     0,     0,     0,    30,     0,     0,
      80,    81,    82,     0,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,     0,     0,     0,     0,
       0,     0,    73,    74,     0,     0,     0,    75,     0,     0,
      19,     0,     0,     0,    76,    77,    21,    83,    84,    85,
      22,     0,    86,     0,    51,   339,     0,    78,     0,     0,
      88,    24,    25,     0,    26,     0,     0,     0,    79,     0,
       0,    29,     0,     0,     0,    30,     0,     0,    80,    81,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,   396,     0,     0,     0,   397,
       0,     0,    19,     0,     0,     0,    76,    77,    21,     0,
       0,     0,    22,     0,     0,    83,    84,    85,     0,    78,
      86,     0,    51,    24,    25,    19,    26,     0,    88,    76,
      79,    21,     0,    29,     0,    22,     0,    30,     0,     0,
     398,    81,   399,     0,     0,     0,    24,    25,     0,    26,
       0,     0,     0,    79,     0,     0,    29,     0,     0,     0,
      30,     0,     0,     0,    81,   159,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,    84,    85,
       0,     0,    86,     0,    51,     0,     0,    19,     0,     0,
      88,    76,     0,    21,     0,   160,   161,    22,     0,     0,
      83,    84,    85,   162,   163,   164,     0,     0,    24,    25,
      19,    26,     0,   165,    76,    79,    21,     0,    29,     0,
      22,     0,    30,     0,     0,     0,    81,   159,     0,     0,
       0,    24,    25,     0,    26,     0,     0,     0,    79,     0,
       0,    29,     0,     0,     0,    30,     0,     0,     0,    81,
     159,     0,     0,     0,     0,     0,     0,   160,   161,     0,
       0,     0,    83,    84,    85,   162,   163,   164,     0,   247,
     333,     0,    19,     0,   334,     0,    76,     0,    21,     0,
     160,   161,    22,     0,     0,    83,    84,    85,   162,   163,
     164,     0,     0,    24,    25,   140,    26,     0,    19,     0,
      79,     0,    76,    29,    21,     0,     0,    30,    22,     0,
       0,    81,   159,     0,     0,     0,     0,     0,     0,    24,
      25,     0,    26,     0,     0,     0,    79,     0,     0,    29,
       0,     0,     0,    30,     0,     0,     0,    81,   159,     0,
       0,     0,   160,   161,     0,     0,     0,    83,    84,    85,
     162,   163,   164,     0,   247,   420,     0,     0,     0,     0,
      19,     0,     0,     0,    76,     0,    21,     0,   160,   161,
      22,     0,     0,    83,    84,    85,   162,   163,   164,     0,
     247,    24,    25,    19,    26,     0,     0,    76,    79,    21,
       0,    29,     0,    22,     0,    30,     0,     0,     0,    81,
     159,     0,     0,     0,    24,    25,     0,    26,     0,     0,
       0,    79,     0,     0,    29,     0,     0,     0,    30,     0,
       0,     0,    81,   159,     0,     0,     0,     0,     0,     0,
     160,   161,     0,     0,     0,    83,    84,    85,   162,   163,
     164,   296,     0,     0,     0,    19,     0,     0,     0,    76,
       0,    21,     0,   160,   161,    22,     0,     0,    83,    84,
      85,   162,   163,   164,   337,     0,    24,    25,    19,    26,
       0,     0,    76,    79,    21,     0,    29,     0,    22,     0,
      30,     0,     0,     0,    81,   159,     0,     0,     0,    24,
      25,     0,    26,     0,     0,     0,    79,     0,     0,    29,
       0,     0,     0,    30,     0,     0,     0,    81,   159,     0,
       0,     0,     0,     0,     0,   160,   161,     0,     0,     0,
      83,    84,    85,   162,   163,   164,   370,     0,     0,     0,
      19,     0,     0,     0,    76,     0,    21,     0,   160,   161,
      22,     0,     0,    83,    84,    85,   162,   163,   164,   416,
      19,    24,    25,     0,    26,     0,    21,     0,    79,     0,
      22,    29,     0,     0,     0,    30,     0,     0,     0,    81,
     159,    24,    25,     0,    26,   132,     0,     0,     0,     0,
       0,    29,     0,     0,     0,    30,     0,     0,     0,     0,
       9,     0,     0,    19,     0,     0,     0,    76,     0,    21,
     160,   161,     0,    22,     0,    83,    84,    85,   162,   163,
     164,   418,     0,     0,    24,    25,    19,    26,     0,     0,
      76,    79,    21,     0,    29,     0,    22,     0,    30,     0,
       0,   237,    81,   159,     0,     0,     0,    24,    25,     0,
      26,     0,     0,     0,    79,     0,     0,    29,     0,     0,
       0,    30,     0,     0,     0,    81,   159,     0,     0,     0,
       0,     0,     0,   160,   161,     0,     0,     0,    83,    84,
      85,   162,   163,   164,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    83,    84,    85,     0,     0,    86
};

static const yytype_int16 yycheck[] =
{
       1,    51,    10,    95,   247,    71,    16,    41,   252,   370,
     134,    52,    52,    52,    52,    16,    16,    16,    94,   424,
       0,    71,    66,    27,   155,     5,    98,    34,    53,    52,
     102,    41,   155,    41,    92,    52,    16,    51,    96,    66,
      98,    66,    52,    47,    45,    95,    45,    87,    92,    87,
      51,   456,    52,   414,    55,   299,    55,    71,    65,   100,
     152,   100,    66,   343,    87,    92,   100,    53,    94,    93,
      71,    52,    93,   218,   100,    99,   100,    87,    99,   100,
      66,    95,    83,    84,    85,   151,   231,    16,     0,   428,
      93,    96,   100,    98,    95,    92,    99,   102,   195,    96,
      51,   151,   152,    95,    52,   155,    93,    99,    92,   448,
     449,    93,    99,    84,    85,   239,    45,    99,   457,   458,
      71,    93,    51,   462,    94,   301,    55,    99,   304,    52,
     131,   132,   131,   132,   258,   379,    52,   151,   152,   383,
      96,   155,    71,    92,    95,   195,   389,    93,   428,    98,
     151,   152,    95,    99,   155,    51,   155,    99,   100,   160,
     161,   162,   163,   255,    88,    89,    95,    93,   448,   449,
      96,    92,    98,   302,    94,    71,   305,   457,   458,    88,
      89,   195,   462,    74,    75,    76,    77,    78,    96,   160,
     161,   162,   163,    79,    80,    81,    51,    99,   100,    95,
     151,   152,   131,   132,   155,   255,   330,    12,    97,   280,
     281,   282,   283,    18,    88,    89,    71,    22,    98,   342,
     100,    53,   151,   152,    72,    73,   155,    12,    33,    34,
      96,    36,    98,    18,    96,    40,    98,    22,    43,    92,
      95,   255,    47,   244,   195,   244,   343,    52,    33,    34,
      92,    36,    37,    98,   255,   151,   152,    92,    43,   155,
      82,    83,    47,    84,    85,    86,    65,    52,    67,    96,
     367,    98,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   342,   343,   425,    52,   151,   152,   102,   195,
     155,   424,   425,    96,   255,    98,   100,    96,    93,    98,
     311,   285,   286,   287,   438,   244,   100,   367,    51,   290,
     291,   292,    94,    96,    96,    93,   255,    93,   342,   343,
      99,   428,   429,   456,   278,   279,    51,   434,    71,    99,
     195,   288,   289,   344,    97,    92,   100,    92,   445,   100,
     100,   448,   449,   367,    68,   284,    71,    69,    71,   255,
     457,   458,    95,    70,    41,   462,    96,    93,    99,    41,
      52,    93,   100,   344,   424,   425,    99,    93,   428,   429,
      95,    51,    93,    92,   434,    41,    41,    97,    92,    97,
      16,   342,   343,    95,   100,   445,    97,    66,   448,   449,
     255,    71,   100,   100,    92,    92,   456,   457,   458,   410,
     424,   425,   462,    92,   428,   429,   367,    23,   151,   152,
     434,    23,   155,    23,   425,    95,   425,    93,    93,   100,
      93,   445,    93,   100,   448,   449,   151,   152,     5,    93,
     155,    93,   456,   457,   458,   284,   342,   343,   462,   143,
      45,    28,   244,   131,   244,    66,    45,    67,   425,   447,
      16,   456,   195,   198,   273,   125,   274,   277,   275,    12,
     410,   367,    -1,   424,   425,    18,   276,   428,   429,    22,
     195,   151,   152,   434,    -1,   155,    -1,   342,   343,    45,
      33,    34,    -1,    36,   445,    51,   425,   448,   449,    55,
      43,    -1,    -1,    -1,    47,   456,   457,   458,    -1,    52,
      -1,   462,   367,    -1,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    -1,   255,    -1,    -1,   195,    -1,    83,   424,   425,
      -1,    -1,   428,   429,    -1,    -1,    -1,    -1,   434,    95,
     255,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   445,
      -1,    78,   448,   449,    -1,    -1,    -1,    -1,    -1,    86,
     456,   457,   458,    -1,    -1,    -1,   462,    -1,    -1,   424,
     425,    -1,    -1,   428,   429,   131,   132,    -1,    -1,   434,
      -1,    -1,    -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,
     445,    -1,    -1,   448,   449,   151,   152,    -1,    -1,   155,
      -1,   456,   457,   458,    84,    85,    -1,   462,   164,   342,
     343,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,    -1,
      12,    -1,    -1,    15,    -1,    -1,    18,   342,   343,   156,
      22,    -1,    -1,    25,   367,    -1,    -1,   164,    -1,    -1,
      -1,    33,    34,    -1,    36,    -1,    -1,    39,    40,    41,
      -1,    43,   367,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,   194,    -1,    -1,
      -1,    -1,   342,   343,    -1,    -1,    -1,    -1,    -1,    -1,
     160,   161,   162,   163,    84,    85,    -1,    -1,   244,    -1,
     217,   424,   425,    -1,   221,   428,   429,   367,    -1,   255,
      -1,   434,    -1,    95,    -1,    -1,   233,   234,    -1,   424,
     425,    -1,   445,   428,   429,   448,   449,    -1,    -1,   434,
     247,    -1,    -1,   456,   457,   458,    -1,    -1,   284,   462,
     445,    -1,    -1,   448,   449,    -1,    -1,    -1,    -1,    -1,
      -1,   456,   457,   458,    -1,   272,    -1,   462,    -1,    -1,
      -1,    -1,    -1,    -1,   424,   425,    -1,    -1,   428,   429,
     160,   161,   162,   163,   434,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,   300,    -1,   445,    -1,    -1,   448,   449,
      -1,    -1,    -1,    -1,    -1,    -1,   456,   457,   458,    -1,
      -1,    -1,   462,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,    -1,   285,   286,   287,   288,   289,
     290,   291,   292,    -1,   341,    -1,    -1,    -1,    -1,    -1,
       4,     5,    -1,    -1,    89,     9,    91,    -1,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    -1,    -1,    22,    -1,
      -1,    -1,   369,    -1,    -1,    29,    -1,    -1,    -1,    33,
      34,    -1,    36,    -1,    -1,    -1,    40,    41,    -1,    43,
      -1,    -1,   389,    47,   344,   392,    50,    51,    52,   425,
      -1,    -1,    -1,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,    -1,   285,   286,   287,   288,   289,
     290,   291,   292,    -1,    -1,    -1,    -1,    -1,    -1,   426,
     427,   166,   167,    87,    88,    89,    -1,    -1,    92,    -1,
      94,    95,    -1,     4,     5,    -1,   100,    -1,     9,    -1,
     447,    12,    -1,    -1,   451,    16,    17,    18,    -1,    -1,
     410,    22,   197,   198,   199,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    33,    34,   344,    36,    -1,    -1,    -1,    40,
      41,    -1,    43,    -1,    -1,    -1,    47,    -1,    -1,    50,
      51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   237,    -1,    -1,    -1,    -1,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,    -1,
      -1,    92,    -1,    94,    95,   270,     4,     5,    -1,   100,
     410,     9,    -1,    -1,    12,    -1,    -1,    -1,    16,    17,
      18,    96,    -1,    98,    22,    -1,    -1,   102,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    33,    34,   302,    36,    -1,
     305,    -1,    40,    41,    -1,    43,    -1,    -1,    -1,    47,
      -1,    -1,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   327,    -1,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    87,
      88,    89,   357,    -1,    92,    -1,    94,    95,     4,     5,
      -1,    -1,   100,     9,    -1,    -1,    12,    96,    -1,    98,
      16,    17,    18,   102,    -1,    -1,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    33,    34,    -1,
      36,    -1,    -1,    12,    40,    41,    -1,    43,    -1,    18,
      -1,    47,    -1,    22,    50,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    -1,    36,    37,    -1,
      -1,    -1,    -1,    -1,    43,    -1,     4,     5,    47,    -1,
      -1,     9,    -1,    52,    12,    -1,    -1,    -1,    16,    17,
      18,    87,    88,    89,    22,    -1,    92,    -1,    94,    95,
      -1,    29,    -1,    -1,   100,    33,    34,    -1,    36,    -1,
      -1,    -1,    40,    41,    -1,    43,    -1,    -1,    -1,    47,
      -1,    -1,    50,    51,    52,    -1,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    -1,    -1,     4,     5,    -1,    -1,    -1,     9,
      -1,    -1,    12,    -1,    -1,    -1,    16,    17,    18,    87,
      88,    89,    22,    -1,    92,    -1,    94,    95,    -1,    29,
      -1,    -1,   100,    33,    34,    -1,    36,    -1,    -1,    -1,
      40,    41,    -1,    43,    -1,    -1,    -1,    47,    -1,    -1,
      50,    51,    52,    -1,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      -1,    -1,     4,     5,    -1,    -1,    -1,     9,    -1,    -1,
      12,    -1,    -1,    -1,    16,    17,    18,    87,    88,    89,
      22,    -1,    92,    -1,    94,    95,    -1,    29,    -1,    -1,
     100,    33,    34,    -1,    36,    -1,    -1,    -1,    40,    -1,
      -1,    43,    -1,    -1,    -1,    47,    -1,    -1,    50,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     4,     5,    -1,    -1,    -1,     9,
      -1,    -1,    12,    -1,    -1,    -1,    16,    17,    18,    -1,
      -1,    -1,    22,    -1,    -1,    87,    88,    89,    -1,    29,
      92,    -1,    94,    33,    34,    12,    36,    -1,   100,    16,
      40,    18,    -1,    43,    -1,    22,    -1,    47,    -1,    -1,
      50,    51,    52,    -1,    -1,    -1,    33,    34,    -1,    36,
      -1,    -1,    -1,    40,    -1,    -1,    43,    -1,    -1,    -1,
      47,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,
      -1,    -1,    92,    -1,    94,    -1,    -1,    12,    -1,    -1,
     100,    16,    -1,    18,    -1,    82,    83,    22,    -1,    -1,
      87,    88,    89,    90,    91,    92,    -1,    -1,    33,    34,
      12,    36,    -1,   100,    16,    40,    18,    -1,    43,    -1,
      22,    -1,    47,    -1,    -1,    -1,    51,    52,    -1,    -1,
      -1,    33,    34,    -1,    36,    -1,    -1,    -1,    40,    -1,
      -1,    43,    -1,    -1,    -1,    47,    -1,    -1,    -1,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,    -1,
      -1,    -1,    87,    88,    89,    90,    91,    92,    -1,    94,
      95,    -1,    12,    -1,    99,    -1,    16,    -1,    18,    -1,
      82,    83,    22,    -1,    -1,    87,    88,    89,    90,    91,
      92,    -1,    -1,    33,    34,    97,    36,    -1,    12,    -1,
      40,    -1,    16,    43,    18,    -1,    -1,    47,    22,    -1,
      -1,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      34,    -1,    36,    -1,    -1,    -1,    40,    -1,    -1,    43,
      -1,    -1,    -1,    47,    -1,    -1,    -1,    51,    52,    -1,
      -1,    -1,    82,    83,    -1,    -1,    -1,    87,    88,    89,
      90,    91,    92,    -1,    94,    95,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    16,    -1,    18,    -1,    82,    83,
      22,    -1,    -1,    87,    88,    89,    90,    91,    92,    -1,
      94,    33,    34,    12,    36,    -1,    -1,    16,    40,    18,
      -1,    43,    -1,    22,    -1,    47,    -1,    -1,    -1,    51,
      52,    -1,    -1,    -1,    33,    34,    -1,    36,    -1,    -1,
      -1,    40,    -1,    -1,    43,    -1,    -1,    -1,    47,    -1,
      -1,    -1,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    83,    -1,    -1,    -1,    87,    88,    89,    90,    91,
      92,    93,    -1,    -1,    -1,    12,    -1,    -1,    -1,    16,
      -1,    18,    -1,    82,    83,    22,    -1,    -1,    87,    88,
      89,    90,    91,    92,    93,    -1,    33,    34,    12,    36,
      -1,    -1,    16,    40,    18,    -1,    43,    -1,    22,    -1,
      47,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    33,
      34,    -1,    36,    -1,    -1,    -1,    40,    -1,    -1,    43,
      -1,    -1,    -1,    47,    -1,    -1,    -1,    51,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    83,    -1,    -1,    -1,
      87,    88,    89,    90,    91,    92,    93,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    16,    -1,    18,    -1,    82,    83,
      22,    -1,    -1,    87,    88,    89,    90,    91,    92,    93,
      12,    33,    34,    -1,    36,    -1,    18,    -1,    40,    -1,
      22,    43,    -1,    -1,    -1,    47,    -1,    -1,    -1,    51,
      52,    33,    34,    -1,    36,    37,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    12,    -1,    -1,    -1,    16,    -1,    18,
      82,    83,    -1,    22,    -1,    87,    88,    89,    90,    91,
      92,    93,    -1,    -1,    33,    34,    12,    36,    -1,    -1,
      16,    40,    18,    -1,    43,    -1,    22,    -1,    47,    -1,
      -1,    93,    51,    52,    -1,    -1,    -1,    33,    34,    -1,
      36,    -1,    -1,    -1,    40,    -1,    -1,    43,    -1,    -1,
      -1,    47,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    83,    -1,    -1,    -1,    87,    88,
      89,    90,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    88,    89,    -1,    -1,    92
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
      50,    51,    52,    87,    88,    89,    92,    95,   100,   108,
     109,   110,   115,   119,   145,   146,   147,   148,   149,   150,
     152,   153,   154,   156,   157,   158,   159,   161,   163,   165,
     173,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   187,   188,   193,   194,   208,   209,   211,   212,
     213,    92,    37,    93,   109,   133,   134,   135,   136,   137,
      97,    96,   116,    99,   100,    53,   126,   138,   142,    16,
      95,   143,   146,    52,   100,    92,    92,    52,   100,    52,
      82,    83,    90,    91,    92,   100,   108,   110,   115,   181,
     185,   191,   192,   193,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,    98,    92,    66,    92,   108,   110,   108,
     183,   184,   207,   207,   191,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    96,    98,   102,
     116,   195,    52,   126,    98,   116,   102,    95,   147,   100,
     100,    98,   102,    96,   195,    88,    89,    93,   133,   109,
      16,    52,   128,    93,    99,    97,   127,    94,   117,   129,
     191,   100,    92,   144,    95,   146,    95,   100,   109,   149,
     157,   166,   170,   172,   191,   100,   207,   207,   207,   207,
     110,   100,    65,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    41,   191,   150,    93,   186,   191,    92,
      96,   116,   189,   190,   116,   189,    93,   191,    16,    41,
      52,    87,   182,    52,    87,    98,   191,    41,    98,    52,
      87,    52,   182,    52,   191,   191,   116,    93,   128,    98,
     109,   135,   136,    95,    99,   118,   129,    93,   186,    95,
     128,   100,    99,    93,    93,   191,   198,   199,   200,   201,
     202,   203,   203,   204,   204,   204,   204,   110,   114,   205,
     205,   205,   206,   206,   207,   207,   207,    93,    93,    99,
      93,   186,   191,   117,   116,   190,   117,   116,    97,    92,
     108,    41,    41,    92,    97,   116,    16,    95,    95,    99,
     100,    93,    66,   167,   191,   157,     5,     9,    50,    52,
     150,   151,   152,   155,   160,   162,   164,   169,   174,   207,
      66,   150,   191,   121,    93,    97,    93,   186,    93,   186,
      95,   129,   100,   191,   100,    92,    92,    92,    66,    23,
     196,   121,    93,    93,    93,   168,   171,   172,   109,   166,
     191,   191,   151,   150,   150,    93,   128,   100,    93,    93,
     150,    66,   167,   151,   151,   191,   100,    23,    93,   168,
     151,   151,    93,   151
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   104,   105,   105,   105,   105,   105,   106,   107,   107,
     108,   108,   109,   109,   110,   110,   111,   111,   112,   112,
     112,   112,   112,   113,   113,   114,   114,   115,   115,   116,
     116,   117,   117,   117,   117,   118,   118,   119,   120,   121,
     121,   122,   122,   122,   123,   123,   123,   123,   124,   124,
     125,   125,   126,   126,   127,   127,   128,   128,   129,   129,
     130,   130,   131,   131,   132,   132,   132,   132,   133,   133,
     133,   134,   134,   134,   135,   135,   136,   137,   137,   138,
     138,   139,   140,   140,   141,   141,   142,   142,   142,   142,
     143,   144,   144,   145,   145,   146,   146,   147,   147,   147,
     148,   149,   150,   150,   150,   150,   150,   150,   151,   151,
     151,   151,   151,   152,   152,   152,   152,   152,   152,   153,
     154,   155,   156,   157,   157,   157,   157,   157,   157,   157,
     158,   159,   160,   161,   162,   163,   163,   164,   164,   165,
     166,   166,   167,   167,   168,   168,   169,   170,   170,   171,
     172,   172,   173,   174,   175,   175,   176,   176,   177,   177,
     178,   178,   179,   179,   179,   179,   179,   179,   179,   179,
     179,   179,   180,   180,   180,   180,   180,   181,   181,   181,
     182,   182,   182,   182,   183,   184,   184,   185,   185,   185,
     185,   185,   185,   186,   186,   187,   187,   187,   187,   187,
     188,   188,   188,   188,   188,   188,   189,   189,   190,   191,
     192,   192,   193,   193,   194,   194,   195,   195,   195,   195,
     195,   195,   195,   195,   195,   195,   195,   195,   196,   196,
     197,   197,   198,   198,   199,   199,   200,   200,   201,   201,
     202,   202,   202,   203,   203,   203,   203,   203,   203,   204,
     204,   204,   204,   205,   205,   205,   206,   206,   206,   206,
     207,   207,   207,   207,   207,   208,   209,   210,   210,   210,
     210,   211,   211,   211,   211,   212,   213,   214
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     0,     3,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     3,
       2,     4,     3,     3,     2,     1,     3,     1,     3,     3,
       2,     1,     1,     1,     1,     1,     1,     0,     4,     3,
       1,     1,     3,     1,     3,     1,     2,     1,     1,     1,
       3,     2,     2,     2,     4,     3,     5,     4,     1,     3,
       1,     3,     1,     1,     3,     2,     1,     2,     4,     1,
       1,     2,     3,     2,     4,     3,     4,     3,     3,     2,
       2,     3,     4,     3,     2,     1,     2,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     2,     1,     1,     1,     1,     1,     1,     1,
       5,     7,     7,     5,     5,     1,     1,     1,     1,     9,
       0,     1,     0,     1,     0,     1,     9,     1,     1,     1,
       1,     3,     8,     8,     3,     2,     3,     2,     3,     2,
       1,     1,     1,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     4,     3,     4,     3,     3,     1,     3,     3,
       5,     6,     5,     4,     3,     4,     4,     4,     3,     6,
       5,     6,     5,     3,     1,     3,     3,     3,     3,     3,
       4,     3,     4,     3,     4,     4,     1,     2,     3,     1,
       1,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     3,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       1,     1,     2,     2,     1,     2,     2,     1,     2,     2,
       1,     1,     1,     1,     1,     2,     2,     4
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
  case 4: /* CompilationUnit: TypeDeclaration  */
#line 106 "parser.y"
                           {Node * temp=createNode("EOF","<EOF>",{}); root =createNode("compilationUnit","",{(yyvsp[0].node),temp});}
#line 1976 "parser.tab.c"
    break;

  case 5: /* CompilationUnit: PackageDeclaration  */
#line 107 "parser.y"
                              {Node * temp=createNode("EOF","<EOF>",{}); root =createNode("compilationUnit","",{(yyvsp[0].node),temp});}
#line 1982 "parser.tab.c"
    break;

  case 6: /* CompilationUnit: %empty  */
#line 108 "parser.y"
                   {Node * temp=createNode("EOF","<EOF>",{}); root =createNode("compilationUnit","",{temp});}
#line 1988 "parser.tab.c"
    break;

  case 7: /* PackageDeclaration: PACKAGE TypeName ';'  */
#line 111 "parser.y"
                               { (yyval.node) = (yyvsp[-1].node); }
#line 1994 "parser.tab.c"
    break;

  case 8: /* TypeDeclaration: ClassDeclaration  */
#line 115 "parser.y"
                       {(yyval.node) = (yyvsp[0].node);}
#line 2000 "parser.tab.c"
    break;

  case 10: /* TypeName: IDENTIFIER  */
#line 120 "parser.y"
                                       { (yyval.node) = createNode("Identifier",(yyvsp[0].str), {}); }
#line 2006 "parser.tab.c"
    break;

  case 11: /* TypeName: TypeName '.' IDENTIFIER  */
#line 121 "parser.y"
                                       { Node* l = createNode("ID", (yyvsp[0].str), {}); (yyvsp[-2].node)->children.push_back(l); (yyval.node) = (yyvsp[-2].node); }
#line 2012 "parser.tab.c"
    break;

  case 12: /* Type: PrimitiveType  */
#line 127 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2018 "parser.tab.c"
    break;

  case 14: /* PrimitiveType: NumericType  */
#line 133 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2024 "parser.tab.c"
    break;

  case 15: /* PrimitiveType: BOOLEAN  */
#line 134 "parser.y"
                                { (yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2030 "parser.tab.c"
    break;

  case 16: /* NumericType: IntegralType  */
#line 138 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2036 "parser.tab.c"
    break;

  case 17: /* NumericType: FloatingPointType  */
#line 139 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2042 "parser.tab.c"
    break;

  case 18: /* IntegralType: BYTE  */
#line 143 "parser.y"
                                { (yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2048 "parser.tab.c"
    break;

  case 19: /* IntegralType: SHORT  */
#line 144 "parser.y"
                                { (yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2054 "parser.tab.c"
    break;

  case 20: /* IntegralType: INT  */
#line 145 "parser.y"
                                { (yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2060 "parser.tab.c"
    break;

  case 21: /* IntegralType: LONG  */
#line 146 "parser.y"
                                { (yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2066 "parser.tab.c"
    break;

  case 22: /* IntegralType: CHAR  */
#line 147 "parser.y"
                                { (yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2072 "parser.tab.c"
    break;

  case 23: /* FloatingPointType: FLOAT  */
#line 151 "parser.y"
                                { (yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2078 "parser.tab.c"
    break;

  case 24: /* FloatingPointType: DOUBLE  */
#line 152 "parser.y"
                                { (yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2084 "parser.tab.c"
    break;

  case 31: /* ArrayInitializer: '{' VariableInitializerList ',' '}'  */
#line 170 "parser.y"
                                                           { (yyval.node) = (yyvsp[-2].node); }
#line 2090 "parser.tab.c"
    break;

  case 32: /* ArrayInitializer: '{' VariableInitializerList '}'  */
#line 171 "parser.y"
                                                           { (yyval.node) = (yyvsp[-1].node); }
#line 2096 "parser.tab.c"
    break;

  case 33: /* ArrayInitializer: '{' ',' '}'  */
#line 172 "parser.y"
                                                           { (yyval.node) = createNode("EMP", "", {}); }
#line 2102 "parser.tab.c"
    break;

  case 34: /* ArrayInitializer: '{' '}'  */
#line 173 "parser.y"
                                                           { (yyval.node) = createNode("EMP", "", {}); }
#line 2108 "parser.tab.c"
    break;

  case 35: /* VariableInitializerList: VariableInitializer  */
#line 177 "parser.y"
                                                           { (yyval.node) = createNode("ArrayInitializer", "", {(yyvsp[0].node)}); }
#line 2114 "parser.tab.c"
    break;

  case 36: /* VariableInitializerList: VariableInitializerList ',' VariableInitializer  */
#line 178 "parser.y"
                                                           { (yyval.node) = (yyvsp[-2].node); (yyval.node)->children.push_back((yyvsp[0].node)); }
#line 2120 "parser.tab.c"
    break;

  case 48: /* FieldDeclaration: ClassModifier Type VariableDeclaratorList ';'  */
#line 212 "parser.y"
                                                    {Node * temp4 =createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("fieldDeclaration","",{(yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[-1].node),temp4});}
#line 2126 "parser.tab.c"
    break;

  case 49: /* FieldDeclaration: Type VariableDeclaratorList ';'  */
#line 213 "parser.y"
                                      {Node * temp3 =createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("fieldDeclaration","",{(yyvsp[-2].node),(yyvsp[-1].node),temp3});}
#line 2132 "parser.tab.c"
    break;

  case 50: /* ClassModifier: PUBLIC  */
#line 217 "parser.y"
             { (yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2138 "parser.tab.c"
    break;

  case 51: /* ClassModifier: PRIVATE  */
#line 218 "parser.y"
              { (yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2144 "parser.tab.c"
    break;

  case 52: /* VariableDeclaratorList: VariableDeclaratorList ',' VariableDeclarator  */
#line 221 "parser.y"
                                                     {(yyval.node) = (yyvsp[-2].node); Node * temp2 = createNode("Separator",(yyvsp[-1].str),{});}
#line 2150 "parser.tab.c"
    break;

  case 53: /* VariableDeclaratorList: VariableDeclarator  */
#line 222 "parser.y"
                         {(yyval.node)=(yyvsp[0].node);}
#line 2156 "parser.tab.c"
    break;

  case 54: /* VariableDeclarator: VariableDeclaratorId '=' VariableInitializer  */
#line 226 "parser.y"
                                                   {Node * temp2 = createNode("=","",{}); (yyval.node)=createNode("VariableDeclarator","",{(yyvsp[-2].node),temp2,(yyvsp[0].node)});}
#line 2162 "parser.tab.c"
    break;

  case 55: /* VariableDeclarator: VariableDeclaratorId  */
#line 227 "parser.y"
                           {(yyval.node)=(yyvsp[0].node);}
#line 2168 "parser.tab.c"
    break;

  case 57: /* VariableDeclaratorId: IDENTIFIER  */
#line 231 "parser.y"
                  {(yyval.node)=createNode("Identifier",(yyvsp[0].str),{});}
#line 2174 "parser.tab.c"
    break;

  case 58: /* VariableInitializer: Expression  */
#line 235 "parser.y"
                { (yyval.node)=(yyvsp[0].node);}
#line 2180 "parser.tab.c"
    break;

  case 60: /* MethodDeclaration: ClassModifier MethodHeader MethodBody  */
#line 241 "parser.y"
                                                {(yyval.node) = (yyvsp[-1].node); (yyvsp[-1].node)->children.insert((yyvsp[-1].node)->children.begin(), (yyvsp[-2].node)); (yyval.node)->children.push_back((yyvsp[0].node)); }
#line 2186 "parser.tab.c"
    break;

  case 61: /* MethodDeclaration: MethodHeader MethodBody  */
#line 242 "parser.y"
                                                      {(yyval.node) = (yyvsp[-1].node); (yyval.node)->children.push_back((yyvsp[0].node)); }
#line 2192 "parser.tab.c"
    break;

  case 63: /* MethodHeader: VOID MethodDeclarator  */
#line 247 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); Node *temp = createNode("TYPE", (yyvsp[-1].str), {}); (yyvsp[0].node)->children.insert((yyvsp[0].node)->children.begin(), temp); }
#line 2198 "parser.tab.c"
    break;

  case 64: /* MethodDeclarator: IDENTIFIER '(' FormalParameterList ')'  */
#line 251 "parser.y"
                                                     { (yyval.node) = createNode("Function", (yyvsp[-3].str), {(yyvsp[-1].node)}); }
#line 2204 "parser.tab.c"
    break;

  case 65: /* MethodDeclarator: IDENTIFIER '(' ')'  */
#line 252 "parser.y"
                                                     { (yyval.node) = createNode("Function", (yyvsp[-2].str), {}); }
#line 2210 "parser.tab.c"
    break;

  case 66: /* MethodDeclarator: IDENTIFIER '(' FormalParameterList ')' Dims  */
#line 253 "parser.y"
                                                     { (yyval.node) = createNode("Function", (yyvsp[-4].str), {(yyvsp[-2].node),(yyvsp[0].node)}); }
#line 2216 "parser.tab.c"
    break;

  case 67: /* MethodDeclarator: IDENTIFIER '(' ')' Dims  */
#line 254 "parser.y"
                                                     { (yyval.node) = createNode("Function", (yyvsp[-3].str), {(yyvsp[0].node)}); }
#line 2222 "parser.tab.c"
    break;

  case 68: /* FormalParameterList: ReceiverParameter  */
#line 258 "parser.y"
                                                     { (yyval.node) = createNode("Parameters", "", {(yyvsp[0].node)}); }
#line 2228 "parser.tab.c"
    break;

  case 69: /* FormalParameterList: FormalParameters ',' LastFormalParameter  */
#line 259 "parser.y"
                                                     { (yyval.node) = (yyvsp[-2].node); (yyvsp[-2].node)->children.push_back((yyvsp[0].node)); }
#line 2234 "parser.tab.c"
    break;

  case 70: /* FormalParameterList: LastFormalParameter  */
#line 260 "parser.y"
                                                     { (yyval.node) = createNode("Parameters", "", {(yyvsp[0].node)}); }
#line 2240 "parser.tab.c"
    break;

  case 71: /* FormalParameters: FormalParameters ',' FormalParameter  */
#line 264 "parser.y"
                                                     { (yyval.node) = (yyvsp[-2].node); (yyval.node)->children.push_back((yyvsp[0].node)); }
#line 2246 "parser.tab.c"
    break;

  case 72: /* FormalParameters: FormalParameter  */
#line 265 "parser.y"
                                                     { (yyval.node) = createNode("Parameters", "", {(yyvsp[0].node)}); }
#line 2252 "parser.tab.c"
    break;

  case 73: /* FormalParameters: ReceiverParameter  */
#line 266 "parser.y"
                                                     { (yyval.node) = createNode("Parameters", "", {(yyvsp[0].node)}); }
#line 2258 "parser.tab.c"
    break;

  case 74: /* FormalParameter: FINAL Type VariableDeclaratorId  */
#line 270 "parser.y"
                                                    { Node *temp = createNode("MODIFIER", (yyvsp[-2].str), {}); (yyval.node) = createNode("Parameter", "", {temp, (yyvsp[-1].node), (yyvsp[0].node)}); }
#line 2264 "parser.tab.c"
    break;

  case 75: /* FormalParameter: Type VariableDeclaratorId  */
#line 271 "parser.y"
                                                    { (yyval.node) = createNode("Parameter", "", {(yyvsp[-1].node), (yyvsp[0].node)}); }
#line 2270 "parser.tab.c"
    break;

  case 76: /* LastFormalParameter: FormalParameter  */
#line 275 "parser.y"
                                                    { (yyval.node) = (yyvsp[0].node); }
#line 2276 "parser.tab.c"
    break;

  case 77: /* ReceiverParameter: Type THIS  */
#line 279 "parser.y"
                                                    { Node *n1 = createNode("THIS", (yyvsp[0].str), {}); (yyval.node) = createNode("ReceiverParameter", "", {(yyvsp[-1].node), n1}); }
#line 2282 "parser.tab.c"
    break;

  case 78: /* ReceiverParameter: Type IDENTIFIER '.' THIS  */
#line 280 "parser.y"
                                                    { Node *n1 = createNode("THIS", (yyvsp[0].str), {}); Node *n2 = createNode("ID", (yyvsp[-2].str), {}); (yyval.node) = createNode("ReceiverParameter", "", {(yyvsp[-3].node), n2, n1}); }
#line 2288 "parser.tab.c"
    break;

  case 79: /* MethodBody: Block  */
#line 284 "parser.y"
                                                    {(yyval.node) = (yyvsp[0].node); }
#line 2294 "parser.tab.c"
    break;

  case 80: /* MethodBody: ';'  */
#line 285 "parser.y"
                                                    {(yyval.node) = createNode("EMP", "", {}); }
#line 2300 "parser.tab.c"
    break;

  case 81: /* StaticInitializer: STATIC Block  */
#line 293 "parser.y"
                                                    { (yyval.node) = createNode("STATIC", (yyvsp[-1].str), {(yyvsp[0].node)}); }
#line 2306 "parser.tab.c"
    break;

  case 82: /* ConstructorDeclaration: ClassModifier ConstructorDeclarator ConstructorBody  */
#line 297 "parser.y"
                                                                     { (yyval.node) = (yyvsp[-1].node); (yyval.node)->children.insert((yyval.node)->children.begin(), (yyvsp[-2].node)); (yyval.node)->children.push_back((yyvsp[0].node));  }
#line 2312 "parser.tab.c"
    break;

  case 83: /* ConstructorDeclaration: ConstructorDeclarator ConstructorBody  */
#line 298 "parser.y"
                                                                           { (yyval.node) = (yyvsp[-1].node); (yyval.node)->children.push_back((yyvsp[0].node)); }
#line 2318 "parser.tab.c"
    break;

  case 84: /* ConstructorDeclarator: IDENTIFIER '(' FormalParameterList ')'  */
#line 302 "parser.y"
                                                                           { (yyval.node) = createNode("Constructor", (yyvsp[-3].str), {(yyvsp[-1].node)}); }
#line 2324 "parser.tab.c"
    break;

  case 85: /* ConstructorDeclarator: IDENTIFIER '(' ')'  */
#line 303 "parser.y"
                                                                           { (yyval.node) = createNode("Constructor", (yyvsp[-2].str), {}); }
#line 2330 "parser.tab.c"
    break;

  case 86: /* ConstructorBody: '{' ExplicitConstructorInvocation BlockStatements '}'  */
#line 307 "parser.y"
                                                                           { (yyval.node) = createNode("Body", "", {(yyvsp[-2].node), (yyvsp[-1].node)}); }
#line 2336 "parser.tab.c"
    break;

  case 87: /* ConstructorBody: '{' BlockStatements '}'  */
#line 308 "parser.y"
                                                                           { (yyval.node) = createNode("Body", "", {(yyvsp[-1].node)}); }
#line 2342 "parser.tab.c"
    break;

  case 88: /* ConstructorBody: '{' ExplicitConstructorInvocation '}'  */
#line 309 "parser.y"
                                                                           { (yyval.node) = createNode("Body", "", {(yyvsp[-1].node)}); }
#line 2348 "parser.tab.c"
    break;

  case 89: /* ConstructorBody: '{' '}'  */
#line 310 "parser.y"
                                                                           { (yyval.node) = createNode("EMP", "", {}); }
#line 2354 "parser.tab.c"
    break;

  case 90: /* ExplicitConstructorInvocation: THIS SINGLE_ArgumentList  */
#line 314 "parser.y"
                                                                           { (yyval.node) = createNode("THIS", (yyvsp[-1].str), {(yyvsp[0].node)}); }
#line 2360 "parser.tab.c"
    break;

  case 91: /* SINGLE_ArgumentList: '(' ')' ';'  */
#line 318 "parser.y"
                                                       { (yyval.node) = createNode("EMP", "", {}); }
#line 2366 "parser.tab.c"
    break;

  case 92: /* SINGLE_ArgumentList: '(' ArgumentList ')' ';'  */
#line 319 "parser.y"
                                                       { (yyval.node) = (yyvsp[-2].node); }
#line 2372 "parser.tab.c"
    break;

  case 93: /* Block: '{' BlockStatements '}'  */
#line 326 "parser.y"
                                             { (yyval.node) = (yyvsp[-1].node); }
#line 2378 "parser.tab.c"
    break;

  case 94: /* Block: '{' '}'  */
#line 327 "parser.y"
                                             { (yyval.node) = createNode("EMP", "", {}); }
#line 2384 "parser.tab.c"
    break;

  case 95: /* BlockStatements: BlockStatement  */
#line 331 "parser.y"
                                             { (yyval.node) = createNode("BlockStatements", "", {(yyvsp[0].node)}); }
#line 2390 "parser.tab.c"
    break;

  case 96: /* BlockStatements: BlockStatements BlockStatement  */
#line 332 "parser.y"
                                             { (yyval.node) = (yyvsp[-1].node); (yyval.node)->children.push_back((yyvsp[0].node)); }
#line 2396 "parser.tab.c"
    break;

  case 97: /* BlockStatement: LocalVariableDeclarationStatement  */
#line 336 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2402 "parser.tab.c"
    break;

  case 98: /* BlockStatement: ClassDeclaration  */
#line 337 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2408 "parser.tab.c"
    break;

  case 99: /* BlockStatement: Statement  */
#line 338 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2414 "parser.tab.c"
    break;

  case 100: /* LocalVariableDeclarationStatement: LocalVariableDeclaration ';'  */
#line 342 "parser.y"
                                             { (yyval.node) = (yyvsp[-1].node); }
#line 2420 "parser.tab.c"
    break;

  case 101: /* LocalVariableDeclaration: Type VariableDeclaratorList  */
#line 346 "parser.y"
                                             { (yyval.node) = createNode("LocalVariableDeclaration", "", {(yyvsp[-1].node), (yyvsp[0].node)}); }
#line 2426 "parser.tab.c"
    break;

  case 102: /* Statement: StatementWithoutTrailingSubstatement  */
#line 350 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2432 "parser.tab.c"
    break;

  case 103: /* Statement: LabeledStatement  */
#line 351 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2438 "parser.tab.c"
    break;

  case 104: /* Statement: IfThenStatement  */
#line 352 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2444 "parser.tab.c"
    break;

  case 105: /* Statement: IfThenElseStatement  */
#line 353 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2450 "parser.tab.c"
    break;

  case 106: /* Statement: WhileStatement  */
#line 354 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2456 "parser.tab.c"
    break;

  case 107: /* Statement: ForStatement  */
#line 355 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2462 "parser.tab.c"
    break;

  case 108: /* StatementNoShortIf: StatementWithoutTrailingSubstatement  */
#line 359 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2468 "parser.tab.c"
    break;

  case 109: /* StatementNoShortIf: LabeledStatementNoShortIf  */
#line 360 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2474 "parser.tab.c"
    break;

  case 110: /* StatementNoShortIf: IfThenElseStatementNoShortIf  */
#line 361 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2480 "parser.tab.c"
    break;

  case 111: /* StatementNoShortIf: WhileStatementNoShortIf  */
#line 362 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2486 "parser.tab.c"
    break;

  case 112: /* StatementNoShortIf: ForStatementNoShortIf  */
#line 363 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2492 "parser.tab.c"
    break;

  case 113: /* StatementWithoutTrailingSubstatement: Block  */
#line 367 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2498 "parser.tab.c"
    break;

  case 114: /* StatementWithoutTrailingSubstatement: EmptyStatement  */
#line 368 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2504 "parser.tab.c"
    break;

  case 115: /* StatementWithoutTrailingSubstatement: ExpressionStatement  */
#line 369 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2510 "parser.tab.c"
    break;

  case 116: /* StatementWithoutTrailingSubstatement: BreakStatement  */
#line 370 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2516 "parser.tab.c"
    break;

  case 117: /* StatementWithoutTrailingSubstatement: ContinueStatement  */
#line 371 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2522 "parser.tab.c"
    break;

  case 118: /* StatementWithoutTrailingSubstatement: ReturnStatement  */
#line 372 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2528 "parser.tab.c"
    break;

  case 119: /* EmptyStatement: ';'  */
#line 376 "parser.y"
                                             { (yyval.node) = createNode("EMP", "", {}); }
#line 2534 "parser.tab.c"
    break;

  case 120: /* LabeledStatement: IDENTIFIER ':' Statement  */
#line 380 "parser.y"
                                             { (yyval.node) = createNode("LabeledStatement", (yyvsp[-2].str), {(yyvsp[0].node)}); }
#line 2540 "parser.tab.c"
    break;

  case 121: /* LabeledStatementNoShortIf: IDENTIFIER ':' StatementNoShortIf  */
#line 384 "parser.y"
                                             { (yyval.node) = createNode("LabeledStatement", (yyvsp[-2].str), {(yyvsp[0].node)}); }
#line 2546 "parser.tab.c"
    break;

  case 122: /* ExpressionStatement: StatementExpression ';'  */
#line 388 "parser.y"
                                             { (yyval.node) = (yyvsp[-1].node); }
#line 2552 "parser.tab.c"
    break;

  case 123: /* StatementExpression: Assignment  */
#line 392 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2558 "parser.tab.c"
    break;

  case 124: /* StatementExpression: PreIncrementExpression  */
#line 393 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2564 "parser.tab.c"
    break;

  case 125: /* StatementExpression: PreDecrementExpression  */
#line 394 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2570 "parser.tab.c"
    break;

  case 126: /* StatementExpression: PostIncrementExpression  */
#line 395 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2576 "parser.tab.c"
    break;

  case 127: /* StatementExpression: PostDecrementExpression  */
#line 396 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2582 "parser.tab.c"
    break;

  case 128: /* StatementExpression: MethodInvocation  */
#line 397 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2588 "parser.tab.c"
    break;

  case 129: /* StatementExpression: ClassInstanceCreationExpression  */
#line 398 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2594 "parser.tab.c"
    break;

  case 135: /* ForStatement: BasicForStatement  */
#line 422 "parser.y"
                                                 {(yyval.node)=(yyvsp[0].node);}
#line 2600 "parser.tab.c"
    break;

  case 136: /* ForStatement: EnhancedForStatement  */
#line 423 "parser.y"
                                                 {(yyval.node)=(yyvsp[0].node);}
#line 2606 "parser.tab.c"
    break;

  case 137: /* ForStatementNoShortIf: BasicForStatementNoShortIf  */
#line 427 "parser.y"
                                                 {(yyval.node)=(yyvsp[0].node);}
#line 2612 "parser.tab.c"
    break;

  case 138: /* ForStatementNoShortIf: EnhancedForStatementNoShortIf  */
#line 428 "parser.y"
                                                 {(yyval.node)=(yyvsp[0].node);}
#line 2618 "parser.tab.c"
    break;

  case 140: /* SINGLE_ForInit: %empty  */
#line 436 "parser.y"
                           {(yyval.node)=createNode("EMP","",{});}
#line 2624 "parser.tab.c"
    break;

  case 141: /* SINGLE_ForInit: ForInit  */
#line 437 "parser.y"
                           {(yyval.node)=(yyvsp[0].node);}
#line 2630 "parser.tab.c"
    break;

  case 142: /* SINGLE_Expression: %empty  */
#line 441 "parser.y"
                           {(yyval.node)=createNode("EMP","",{});}
#line 2636 "parser.tab.c"
    break;

  case 143: /* SINGLE_Expression: Expression  */
#line 442 "parser.y"
                           {(yyval.node)=(yyvsp[0].node);}
#line 2642 "parser.tab.c"
    break;

  case 144: /* SINGLE_ForUpdate: %empty  */
#line 446 "parser.y"
                           {(yyval.node)=createNode("EMP","",{});}
#line 2648 "parser.tab.c"
    break;

  case 145: /* SINGLE_ForUpdate: ForUpdate  */
#line 447 "parser.y"
                           {(yyval.node)=(yyvsp[0].node);}
#line 2654 "parser.tab.c"
    break;

  case 147: /* ForInit: StatementExpressionList  */
#line 455 "parser.y"
                                       {(yyval.node)=(yyvsp[0].node);}
#line 2660 "parser.tab.c"
    break;

  case 148: /* ForInit: LocalVariableDeclaration  */
#line 456 "parser.y"
                                       {(yyval.node)=(yyvsp[0].node);}
#line 2666 "parser.tab.c"
    break;

  case 149: /* ForUpdate: StatementExpressionList  */
#line 460 "parser.y"
                                       {(yyval.node)=(yyvsp[0].node);}
#line 2672 "parser.tab.c"
    break;

  case 150: /* StatementExpressionList: StatementExpression  */
#line 464 "parser.y"
                                                        {(yyval.node)=createNode("StatementExpressions", "", {(yyvsp[0].node)});}
#line 2678 "parser.tab.c"
    break;

  case 151: /* StatementExpressionList: StatementExpressionList ',' StatementExpression  */
#line 465 "parser.y"
                                                        {(yyvsp[-2].node)->children.push_back((yyvsp[0].node));(yyval.node)=(yyvsp[-2].node);}
#line 2684 "parser.tab.c"
    break;

  case 154: /* BreakStatement: BREAK IDENTIFIER ';'  */
#line 477 "parser.y"
                                  {Node* temp=createNode("ID",(yyvsp[-1].str),{});(yyval.node)=createNode("BREAK",(yyvsp[-2].str),{temp});}
#line 2690 "parser.tab.c"
    break;

  case 155: /* BreakStatement: BREAK ';'  */
#line 478 "parser.y"
                                  {(yyval.node)=createNode("BREAK",(yyvsp[-1].str),{});}
#line 2696 "parser.tab.c"
    break;

  case 156: /* ContinueStatement: CONTINUE IDENTIFIER ';'  */
#line 482 "parser.y"
                                  {Node* temp=createNode("ID",(yyvsp[-1].str),{});(yyval.node)=createNode("CONTINUE",(yyvsp[-2].str),{temp});}
#line 2702 "parser.tab.c"
    break;

  case 157: /* ContinueStatement: CONTINUE ';'  */
#line 483 "parser.y"
                                  {(yyval.node)=createNode("CONTINUE",(yyvsp[-1].str),{});}
#line 2708 "parser.tab.c"
    break;

  case 158: /* ReturnStatement: RETURN Expression ';'  */
#line 487 "parser.y"
                                  {(yyval.node)=createNode("RETURN",(yyvsp[-2].str),{(yyvsp[-1].node)});}
#line 2714 "parser.tab.c"
    break;

  case 159: /* ReturnStatement: RETURN ';'  */
#line 488 "parser.y"
                                  {(yyval.node)=createNode("RETURN",(yyvsp[-1].str),{});}
#line 2720 "parser.tab.c"
    break;

  case 160: /* Primary: PrimaryNoNewArray  */
#line 496 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 2726 "parser.tab.c"
    break;

  case 161: /* Primary: ArrayCreationExpression  */
#line 497 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 2732 "parser.tab.c"
    break;

  case 162: /* PrimaryNoNewArray: LITERAL  */
#line 501 "parser.y"
                                                                                    {(yyval.node)=createNode("LITERAL",(yyvsp[0].str),{});}
#line 2738 "parser.tab.c"
    break;

  case 163: /* PrimaryNoNewArray: ClassLiteral  */
#line 502 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 2744 "parser.tab.c"
    break;

  case 164: /* PrimaryNoNewArray: THIS  */
#line 503 "parser.y"
                                                                                    {(yyval.node)=createNode("KEYWORD",(yyvsp[0].str),{});}
#line 2750 "parser.tab.c"
    break;

  case 165: /* PrimaryNoNewArray: TypeName '.' THIS  */
#line 504 "parser.y"
                                                                                    {Node *temp = createNode("KEYWORD",(yyvsp[0].str),{});
                                                                                     (yyval.node)=createNode("PRIMARYNONEWARRAY","",{(yyvsp[-2].node),temp});}
#line 2757 "parser.tab.c"
    break;

  case 166: /* PrimaryNoNewArray: '(' Expression ')'  */
#line 506 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[-1].node);}
#line 2763 "parser.tab.c"
    break;

  case 167: /* PrimaryNoNewArray: ClassInstanceCreationExpression  */
#line 507 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 2769 "parser.tab.c"
    break;

  case 168: /* PrimaryNoNewArray: FieldAccess  */
#line 508 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 2775 "parser.tab.c"
    break;

  case 169: /* PrimaryNoNewArray: ArrayAccess  */
#line 509 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 2781 "parser.tab.c"
    break;

  case 170: /* PrimaryNoNewArray: MethodInvocation  */
#line 510 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 2787 "parser.tab.c"
    break;

  case 171: /* PrimaryNoNewArray: MethodReference  */
#line 511 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 2793 "parser.tab.c"
    break;

  case 172: /* ClassLiteral: TypeName Dims '.' CLASS  */
#line 515 "parser.y"
                                                                                    {Node *temp = createNode("KEYWORD",(yyvsp[0].str),{});
                                                                                     (yyval.node) = createNode("CLASS_LITERAL","",{(yyvsp[-3].node),(yyvsp[-2].node),temp});}
#line 2800 "parser.tab.c"
    break;

  case 173: /* ClassLiteral: TypeName '.' CLASS  */
#line 517 "parser.y"
                                                                                    {Node *temp = createNode("KEYWORD",(yyvsp[0].str),{});
                                                                                     (yyval.node) = createNode("CLASS_LITERAL","",{(yyvsp[-2].node),temp});}
#line 2807 "parser.tab.c"
    break;

  case 174: /* ClassLiteral: PrimitiveType Dims '.' CLASS  */
#line 519 "parser.y"
                                                                                    {Node *temp = createNode("KEYWORD",(yyvsp[0].str),{});
                                                                                     (yyval.node) = createNode("CLASS_LITERAL","",{(yyvsp[-3].node),(yyvsp[-2].node),temp});}
#line 2814 "parser.tab.c"
    break;

  case 175: /* ClassLiteral: PrimitiveType '.' CLASS  */
#line 521 "parser.y"
                                                                                    {Node *temp = createNode("KEYWORD",(yyvsp[0].str),{});
                                                                                     (yyval.node) = createNode("CLASS_LITERAL","",{(yyvsp[-2].node),temp});}
#line 2821 "parser.tab.c"
    break;

  case 176: /* ClassLiteral: VOID '.' CLASS  */
#line 523 "parser.y"
                                                                                    {Node *temp = createNode("KEYWORD",(yyvsp[0].str),{});
                                                                                     Node *temp1 = createNode("KEYWORD",(yyvsp[-2].str),{});
                                                                                     (yyval.node) = createNode("CLASS_LITERAL","",{temp1,temp});}
#line 2829 "parser.tab.c"
    break;

  case 177: /* ClassInstanceCreationExpression: UnqualifiedClassInstanceCreationExpression  */
#line 529 "parser.y"
                                                                                         {(yyval.node)=(yyvsp[0].node);}
#line 2835 "parser.tab.c"
    break;

  case 178: /* ClassInstanceCreationExpression: TypeName '.' UnqualifiedClassInstanceCreationExpression  */
#line 530 "parser.y"
                                                                                         {(yyval.node)=createNode("CLASS_INSTANCE","",{(yyvsp[-2].node),(yyvsp[0].node)});(yyvsp[-2].node)->label="Expression Name";}
#line 2841 "parser.tab.c"
    break;

  case 179: /* ClassInstanceCreationExpression: Primary '.' UnqualifiedClassInstanceCreationExpression  */
#line 531 "parser.y"
                                                                                         {(yyval.node)=createNode("CLASS_INSTANCE","",{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 2847 "parser.tab.c"
    break;

  case 180: /* UnqualifiedClassInstanceCreationExpression: NEW TypeName '(' ArgumentList ')'  */
#line 535 "parser.y"
                                                                                        {Node *temp = createNode("KEYWORD",(yyvsp[-4].str),{});
                                                                                        (yyval.node) = createNode("UNQUA_CLASS_INSTANCE","",{temp,(yyvsp[-3].node),(yyvsp[-1].node)});(yyvsp[-3].node)->label="ClassType";}
#line 2854 "parser.tab.c"
    break;

  case 181: /* UnqualifiedClassInstanceCreationExpression: NEW TypeName '(' ArgumentList ')' ClassBody  */
#line 537 "parser.y"
                                                                                        {Node *temp = createNode("KEYWORD",(yyvsp[-5].str),{});
                                                                                        (yyval.node) = createNode("UNQUA_CLASS_INSTANCE","",{temp,(yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node)});(yyvsp[-4].node)->label="ClassType";}
#line 2861 "parser.tab.c"
    break;

  case 182: /* UnqualifiedClassInstanceCreationExpression: NEW TypeName '(' ')' ClassBody  */
#line 539 "parser.y"
                                                                                        {Node *temp = createNode("KEYWORD",(yyvsp[-4].str),{});
                                                                                        Node *temp1 = createNode("EMP","",{});
                                                                                        (yyval.node) = createNode("UNQUA_CLASS_INSTANCE","",{temp,(yyvsp[-3].node),temp1,(yyvsp[0].node)});(yyvsp[-3].node)->label="ClassType";}
#line 2869 "parser.tab.c"
    break;

  case 183: /* UnqualifiedClassInstanceCreationExpression: NEW TypeName '(' ')'  */
#line 542 "parser.y"
                                                                                        {Node *temp = createNode("KEYWORD",(yyvsp[-3].str),{});
                                                                                        Node *temp1 = createNode("EMP","",{});
                                                                                        (yyval.node) = createNode("UNQUA_CLASS_INSTANCE","",{temp,(yyvsp[-2].node),temp1});(yyvsp[-2].node)->label="ClassType";}
#line 2877 "parser.tab.c"
    break;

  case 184: /* FieldAccess: Primary '.' IDENTIFIER  */
#line 548 "parser.y"
                                                                                       {Node *temp = createNode("ID",(yyvsp[0].str),{});
                                                                                        (yyval.node) = createNode("FIELDACC","",{(yyvsp[-2].node),temp});}
#line 2884 "parser.tab.c"
    break;

  case 185: /* ArrayAccess: TypeName '[' Expression ']'  */
#line 553 "parser.y"
                                                                                       {(yyval.node)=createNode("ARRAY","",{(yyvsp[-3].node),(yyvsp[-1].node)});(yyvsp[-3].node)->label="Expression Name";}
#line 2890 "parser.tab.c"
    break;

  case 186: /* ArrayAccess: PrimaryNoNewArray '[' Expression ']'  */
#line 554 "parser.y"
                                                                                       {(yyval.node)=createNode("ARRAY","",{(yyvsp[-3].node),(yyvsp[-1].node)});}
#line 2896 "parser.tab.c"
    break;

  case 187: /* MethodInvocation: IDENTIFIER '(' ArgumentList ')'  */
#line 558 "parser.y"
                                                                                       {Node *temp = createNode("ID",(yyvsp[-3].str),{});
                                                                                        (yyval.node)=createNode("METHODINVOCATION","",{temp,(yyvsp[-1].node)});}
#line 2903 "parser.tab.c"
    break;

  case 188: /* MethodInvocation: IDENTIFIER '(' ')'  */
#line 560 "parser.y"
                                                                                       {Node *temp = createNode("ID",(yyvsp[-2].str),{});
                                                                                        Node *temp1 = createNode("EMP","",{});
                                                                                        (yyval.node)=createNode("METHODINVOCATION","",{temp,temp1});}
#line 2911 "parser.tab.c"
    break;

  case 189: /* MethodInvocation: TypeName '.' IDENTIFIER '(' ArgumentList ')'  */
#line 564 "parser.y"
                                                                                       {Node *temp = createNode("ID",(yyvsp[-3].str),{});
                                                                                        (yyval.node)=createNode("METHODINVOCATION","",{(yyvsp[-5].node),temp,(yyvsp[-1].node)});}
#line 2918 "parser.tab.c"
    break;

  case 190: /* MethodInvocation: TypeName '.' IDENTIFIER '(' ')'  */
#line 567 "parser.y"
                                                                                        {Node *temp = createNode("ID",(yyvsp[-2].str),{});
                                                                                        Node *temp1 = createNode("EMP","",{});
                                                                                        (yyval.node)=createNode("METHODINVOCATION","",{(yyvsp[-4].node),temp,temp1});}
#line 2926 "parser.tab.c"
    break;

  case 191: /* MethodInvocation: Primary '.' IDENTIFIER '(' ArgumentList ')'  */
#line 570 "parser.y"
                                                                                        {Node *temp = createNode("ID",(yyvsp[-3].str),{});
                                                                                        (yyval.node)=createNode("METHODINVOCATION","",{(yyvsp[-5].node),temp,(yyvsp[-1].node)});}
#line 2933 "parser.tab.c"
    break;

  case 192: /* MethodInvocation: Primary '.' IDENTIFIER '(' ')'  */
#line 572 "parser.y"
                                                                                        {Node *temp = createNode("ID",(yyvsp[-2].str),{});
                                                                                        Node *temp1 = createNode("EMP","",{});
                                                                                        (yyval.node)=createNode("METHODINVOCATION","",{(yyvsp[-4].node),temp,temp1});}
#line 2941 "parser.tab.c"
    break;

  case 193: /* ArgumentList: ArgumentList ',' Expression  */
#line 578 "parser.y"
                                                                                       {(yyvsp[-2].node)->children.push_back((yyvsp[0].node)); (yyval.node) = (yyvsp[-2].node); }
#line 2947 "parser.tab.c"
    break;

  case 194: /* ArgumentList: Expression  */
#line 579 "parser.y"
                                                                                       {(yyval.node) = createNode("ARGLIST","", {(yyvsp[0].node)}); }
#line 2953 "parser.tab.c"
    break;

  case 195: /* MethodReference: TypeName PROPORTION IDENTIFIER  */
#line 583 "parser.y"
                                                                                        {Node *temp = createNode("ID",(yyvsp[0].str),{});
                                                                                         (yyval.node) = createNode("METHOD_REF","",{(yyvsp[-2].node),temp});}
#line 2960 "parser.tab.c"
    break;

  case 196: /* MethodReference: ArrayType PROPORTION IDENTIFIER  */
#line 585 "parser.y"
                                                                                        {Node *temp = createNode("ID",(yyvsp[0].str),{});
                                                                                         (yyval.node) = createNode("METHOD_REF","",{(yyvsp[-2].node),temp});}
#line 2967 "parser.tab.c"
    break;

  case 197: /* MethodReference: Primary PROPORTION IDENTIFIER  */
#line 587 "parser.y"
                                                                                        {Node *temp = createNode("ID",(yyvsp[0].str),{});
                                                                                         (yyval.node) = createNode("METHOD_REF","",{(yyvsp[-2].node),temp});}
#line 2974 "parser.tab.c"
    break;

  case 198: /* MethodReference: TypeName PROPORTION NEW  */
#line 589 "parser.y"
                                                                                        {Node *temp = createNode("KEYWORD",(yyvsp[0].str),{});
                                                                                         (yyval.node) = createNode("METHOD_REF","",{(yyvsp[-2].node),temp});(yyvsp[-2].node)->label="ClassType";}
#line 2981 "parser.tab.c"
    break;

  case 199: /* MethodReference: ArrayType PROPORTION NEW  */
#line 591 "parser.y"
                                                                                        {Node *temp = createNode("KEYWORD",(yyvsp[0].str),{});
                                                                                         (yyval.node) = createNode("METHOD_REF","",{(yyvsp[-2].node),temp});}
#line 2988 "parser.tab.c"
    break;

  case 200: /* ArrayCreationExpression: NEW PrimitiveType DimExprs Dims  */
#line 596 "parser.y"
                                                                                        {Node *temp = createNode("KEYWORD",(yyvsp[-3].str),{});
                                                                                         (yyval.node) = createNode("ARRAY_CREATION","",{temp,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)});}
#line 2995 "parser.tab.c"
    break;

  case 201: /* ArrayCreationExpression: NEW PrimitiveType DimExprs  */
#line 598 "parser.y"
                                                                                        {Node *temp = createNode("KEYWORD",(yyvsp[-2].str),{});
                                                                                         (yyval.node) = createNode("ARRAY_CREATION","",{temp,(yyvsp[-1].node),(yyvsp[0].node)});}
#line 3002 "parser.tab.c"
    break;

  case 202: /* ArrayCreationExpression: NEW TypeName DimExprs Dims  */
#line 600 "parser.y"
                                                                                        {Node *temp = createNode("KEYWORD",(yyvsp[-3].str),{});
                                                                                         (yyval.node) = createNode("ARRAY_CREATION","",{temp,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)});(yyvsp[-2].node)->label="ClassType";}
#line 3009 "parser.tab.c"
    break;

  case 203: /* ArrayCreationExpression: NEW TypeName DimExprs  */
#line 602 "parser.y"
                                                                                        {Node *temp = createNode("KEYWORD",(yyvsp[-2].str),{});
                                                                                         (yyval.node) = createNode("ARRAY_CREATION","",{temp,(yyvsp[-1].node),(yyvsp[0].node)});(yyvsp[-1].node)->label="ClassType";}
#line 3016 "parser.tab.c"
    break;

  case 204: /* ArrayCreationExpression: NEW PrimitiveType Dims ArrayInitializer  */
#line 604 "parser.y"
                                                                                        {Node *temp = createNode("KEYWORD",(yyvsp[-3].str),{});
                                                                                         (yyval.node) = createNode("ARRAY_CREATION","",{temp,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)});}
#line 3023 "parser.tab.c"
    break;

  case 205: /* ArrayCreationExpression: NEW TypeName Dims ArrayInitializer  */
#line 606 "parser.y"
                                                                                        {Node *temp = createNode("KEYWORD",(yyvsp[-3].str),{});
                                                                                         (yyval.node) = createNode("ARRAY_CREATION","",{temp,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)});(yyvsp[-2].node)->label="ClassType";}
#line 3030 "parser.tab.c"
    break;

  case 206: /* DimExprs: DimExpr  */
#line 611 "parser.y"
                                                                                        {(yyval.node) = createNode("DIMEXPR","", {(yyvsp[0].node)}); }
#line 3036 "parser.tab.c"
    break;

  case 207: /* DimExprs: DimExprs DimExpr  */
#line 612 "parser.y"
                                                                                        {(yyvsp[-1].node)->children.push_back((yyvsp[0].node)); (yyval.node) = (yyvsp[-1].node); }
#line 3042 "parser.tab.c"
    break;

  case 208: /* DimExpr: '[' Expression ']'  */
#line 616 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[-1].node);}
#line 3048 "parser.tab.c"
    break;

  case 209: /* Expression: AssignmentExpression  */
#line 620 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3054 "parser.tab.c"
    break;

  case 210: /* AssignmentExpression: ConditionalExpression  */
#line 624 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3060 "parser.tab.c"
    break;

  case 211: /* AssignmentExpression: Assignment  */
#line 625 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3066 "parser.tab.c"
    break;

  case 212: /* Assignment: LeftHandSide AssignmentOperator Expression  */
#line 629 "parser.y"
                                                                                        {(yyvsp[-1].node)->children={(yyvsp[-2].node),(yyvsp[0].node)};(yyval.node)=(yyvsp[-1].node);}
#line 3072 "parser.tab.c"
    break;

  case 213: /* Assignment: TypeName AssignmentOperator Expression  */
#line 630 "parser.y"
                                                                                        {(yyvsp[-1].node)->children={(yyvsp[-2].node),(yyvsp[0].node)};(yyval.node)=(yyvsp[-1].node);(yyvsp[-2].node)->label="Expression Name";}
#line 3078 "parser.tab.c"
    break;

  case 214: /* LeftHandSide: FieldAccess  */
#line 634 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3084 "parser.tab.c"
    break;

  case 215: /* LeftHandSide: ArrayAccess  */
#line 635 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3090 "parser.tab.c"
    break;

  case 216: /* AssignmentOperator: '='  */
#line 639 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[0].str),{});}
#line 3096 "parser.tab.c"
    break;

  case 217: /* AssignmentOperator: MUL_ASSIGN  */
#line 640 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[0].str),{});}
#line 3102 "parser.tab.c"
    break;

  case 218: /* AssignmentOperator: DIV_ASSIGN  */
#line 641 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[0].str),{});}
#line 3108 "parser.tab.c"
    break;

  case 219: /* AssignmentOperator: MOD_ASSIGN  */
#line 642 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[0].str),{});}
#line 3114 "parser.tab.c"
    break;

  case 220: /* AssignmentOperator: ADD_ASSIGN  */
#line 643 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[0].str),{});}
#line 3120 "parser.tab.c"
    break;

  case 221: /* AssignmentOperator: SUB_ASSIGN  */
#line 644 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[0].str),{});}
#line 3126 "parser.tab.c"
    break;

  case 222: /* AssignmentOperator: LEFT_ASSIGN  */
#line 645 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[0].str),{});}
#line 3132 "parser.tab.c"
    break;

  case 223: /* AssignmentOperator: RIGHT_ASSIGN  */
#line 646 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[0].str),{});}
#line 3138 "parser.tab.c"
    break;

  case 224: /* AssignmentOperator: UNSIGNED_RIGHT_ASSIGN  */
#line 647 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[0].str),{});}
#line 3144 "parser.tab.c"
    break;

  case 225: /* AssignmentOperator: AND_ASSIGN  */
#line 648 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[0].str),{});}
#line 3150 "parser.tab.c"
    break;

  case 226: /* AssignmentOperator: XOR_ASSIGN  */
#line 649 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[0].str),{});}
#line 3156 "parser.tab.c"
    break;

  case 227: /* AssignmentOperator: OR_ASSIGN  */
#line 650 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[0].str),{});}
#line 3162 "parser.tab.c"
    break;

  case 228: /* ConditionalExpression: ConditionalOrExpression  */
#line 654 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3168 "parser.tab.c"
    break;

  case 230: /* ConditionalOrExpression: ConditionalAndExpression  */
#line 659 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3174 "parser.tab.c"
    break;

  case 231: /* ConditionalOrExpression: ConditionalOrExpression OR_OP ConditionalAndExpression  */
#line 660 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3180 "parser.tab.c"
    break;

  case 232: /* ConditionalAndExpression: InclusiveOrExpression  */
#line 664 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3186 "parser.tab.c"
    break;

  case 233: /* ConditionalAndExpression: ConditionalAndExpression AND_OP InclusiveOrExpression  */
#line 665 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3192 "parser.tab.c"
    break;

  case 234: /* InclusiveOrExpression: ExclusiveOrExpression  */
#line 669 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3198 "parser.tab.c"
    break;

  case 235: /* InclusiveOrExpression: InclusiveOrExpression '|' ExclusiveOrExpression  */
#line 670 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3204 "parser.tab.c"
    break;

  case 236: /* ExclusiveOrExpression: AndExpression  */
#line 674 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3210 "parser.tab.c"
    break;

  case 237: /* ExclusiveOrExpression: ExclusiveOrExpression '^' AndExpression  */
#line 675 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3216 "parser.tab.c"
    break;

  case 238: /* AndExpression: EqualityExpression  */
#line 679 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3222 "parser.tab.c"
    break;

  case 239: /* AndExpression: AndExpression '&' EqualityExpression  */
#line 680 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3228 "parser.tab.c"
    break;

  case 240: /* EqualityExpression: RelationalExpression  */
#line 684 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3234 "parser.tab.c"
    break;

  case 241: /* EqualityExpression: EqualityExpression EQ_OP RelationalExpression  */
#line 685 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3240 "parser.tab.c"
    break;

  case 242: /* EqualityExpression: EqualityExpression NE_OP RelationalExpression  */
#line 686 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3246 "parser.tab.c"
    break;

  case 243: /* RelationalExpression: ShiftExpression  */
#line 690 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3252 "parser.tab.c"
    break;

  case 244: /* RelationalExpression: RelationalExpression '<' ShiftExpression  */
#line 691 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3258 "parser.tab.c"
    break;

  case 245: /* RelationalExpression: RelationalExpression '>' ShiftExpression  */
#line 692 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3264 "parser.tab.c"
    break;

  case 246: /* RelationalExpression: RelationalExpression LE_OP ShiftExpression  */
#line 693 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3270 "parser.tab.c"
    break;

  case 247: /* RelationalExpression: RelationalExpression GE_OP ShiftExpression  */
#line 694 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3276 "parser.tab.c"
    break;

  case 248: /* RelationalExpression: RelationalExpression INSTANCEOF ReferenceType  */
#line 695 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3282 "parser.tab.c"
    break;

  case 249: /* ShiftExpression: AdditiveExpression  */
#line 699 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3288 "parser.tab.c"
    break;

  case 250: /* ShiftExpression: ShiftExpression LEFT_OP AdditiveExpression  */
#line 700 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3294 "parser.tab.c"
    break;

  case 251: /* ShiftExpression: ShiftExpression RIGHT_OP AdditiveExpression  */
#line 701 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3300 "parser.tab.c"
    break;

  case 252: /* ShiftExpression: ShiftExpression UNSIGNED_RIGHT_OP AdditiveExpression  */
#line 702 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3306 "parser.tab.c"
    break;

  case 253: /* AdditiveExpression: MultiplicativeExpression  */
#line 706 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3312 "parser.tab.c"
    break;

  case 254: /* AdditiveExpression: AdditiveExpression '+' MultiplicativeExpression  */
#line 707 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3318 "parser.tab.c"
    break;

  case 255: /* AdditiveExpression: AdditiveExpression '-' MultiplicativeExpression  */
#line 708 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3324 "parser.tab.c"
    break;

  case 256: /* MultiplicativeExpression: UnaryExpression  */
#line 712 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3330 "parser.tab.c"
    break;

  case 257: /* MultiplicativeExpression: MultiplicativeExpression '*' UnaryExpression  */
#line 713 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3336 "parser.tab.c"
    break;

  case 258: /* MultiplicativeExpression: MultiplicativeExpression '/' UnaryExpression  */
#line 714 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3342 "parser.tab.c"
    break;

  case 259: /* MultiplicativeExpression: MultiplicativeExpression '%' UnaryExpression  */
#line 715 "parser.y"
                                                                                        {(yyval.node)=createNode("OP",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3348 "parser.tab.c"
    break;

  case 260: /* UnaryExpression: PreIncrementExpression  */
#line 719 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3354 "parser.tab.c"
    break;

  case 261: /* UnaryExpression: PreDecrementExpression  */
#line 720 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3360 "parser.tab.c"
    break;

  case 262: /* UnaryExpression: '+' UnaryExpression  */
#line 721 "parser.y"
                                                                                        {Node * temp = createNode("OP",(yyvsp[-1].str),{});
                                                                                         (yyval.node)=createNode("UOP","",{temp,(yyvsp[0].node)});}
#line 3367 "parser.tab.c"
    break;

  case 263: /* UnaryExpression: '-' UnaryExpression  */
#line 723 "parser.y"
                                                                                        {Node * temp = createNode("OP",(yyvsp[-1].str),{});
                                                                                         (yyval.node)=createNode("UOP","",{temp,(yyvsp[0].node)});}
#line 3374 "parser.tab.c"
    break;

  case 264: /* UnaryExpression: UnaryExpressionNotPlusMinus  */
#line 725 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3380 "parser.tab.c"
    break;

  case 265: /* PreIncrementExpression: INC_OP UnaryExpression  */
#line 729 "parser.y"
                                                                                        {Node * temp = createNode("OP",(yyvsp[-1].str),{});
                                                                                         (yyval.node)=createNode("UOP","",{temp,(yyvsp[0].node)});}
#line 3387 "parser.tab.c"
    break;

  case 266: /* PreDecrementExpression: DEC_OP UnaryExpression  */
#line 734 "parser.y"
                                                                                        {Node * temp = createNode("OP",(yyvsp[-1].str),{});
                                                                                         (yyval.node)=createNode("UOP","",{temp,(yyvsp[0].node)});}
#line 3394 "parser.tab.c"
    break;

  case 267: /* UnaryExpressionNotPlusMinus: PostfixExpression  */
#line 739 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3400 "parser.tab.c"
    break;

  case 268: /* UnaryExpressionNotPlusMinus: '~' UnaryExpression  */
#line 740 "parser.y"
                                                                                        {Node * temp = createNode("OP",(yyvsp[-1].str),{});
                                                                                         (yyval.node)=createNode("UOP","",{temp,(yyvsp[0].node)});}
#line 3407 "parser.tab.c"
    break;

  case 269: /* UnaryExpressionNotPlusMinus: '!' UnaryExpression  */
#line 742 "parser.y"
                                                                                        {Node * temp = createNode("OP",(yyvsp[-1].str),{});
                                                                                         (yyval.node)=createNode("UOP","",{temp,(yyvsp[0].node)});}
#line 3414 "parser.tab.c"
    break;

  case 270: /* UnaryExpressionNotPlusMinus: CastExpression  */
#line 744 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3420 "parser.tab.c"
    break;

  case 271: /* PostfixExpression: Primary  */
#line 748 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3426 "parser.tab.c"
    break;

  case 272: /* PostfixExpression: TypeName  */
#line 749 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);(yyvsp[0].node)->label="Expression Name";}
#line 3432 "parser.tab.c"
    break;

  case 273: /* PostfixExpression: PostIncrementExpression  */
#line 750 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3438 "parser.tab.c"
    break;

  case 274: /* PostfixExpression: PostDecrementExpression  */
#line 751 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3444 "parser.tab.c"
    break;

  case 275: /* PostIncrementExpression: PostfixExpression INC_OP  */
#line 755 "parser.y"
                                                                                        {Node * temp = createNode("OP",(yyvsp[0].str),{});
                                                                                         (yyval.node)=createNode("UOP","",{(yyvsp[-1].node),temp});}
#line 3451 "parser.tab.c"
    break;

  case 276: /* PostDecrementExpression: PostfixExpression DEC_OP  */
#line 760 "parser.y"
                                                                                        {Node * temp = createNode("OP",(yyvsp[0].str),{});
                                                                                         (yyval.node)=createNode("UOP","",{(yyvsp[-1].node),temp});}
#line 3458 "parser.tab.c"
    break;

  case 277: /* CastExpression: '(' PrimitiveType ')' UnaryExpression  */
#line 765 "parser.y"
                                                                                        {(yyval.node)=createNode("TYPECAST","",{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3464 "parser.tab.c"
    break;


#line 3468 "parser.tab.c"

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

#line 961 "parser.y"




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
