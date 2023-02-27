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
  YYSYMBOL_CONTINUE = 3,                   /* CONTINUE  */
  YYSYMBOL_FOR = 4,                        /* FOR  */
  YYSYMBOL_IF = 5,                         /* IF  */
  YYSYMBOL_PACKAGE = 6,                    /* PACKAGE  */
  YYSYMBOL_BOOLEAN = 7,                    /* BOOLEAN  */
  YYSYMBOL_PRIVATE = 8,                    /* PRIVATE  */
  YYSYMBOL_THIS = 9,                       /* THIS  */
  YYSYMBOL_BREAK = 10,                     /* BREAK  */
  YYSYMBOL_DOUBLE = 11,                    /* DOUBLE  */
  YYSYMBOL_BYTE = 12,                      /* BYTE  */
  YYSYMBOL_ELSE = 13,                      /* ELSE  */
  YYSYMBOL_PUBLIC = 14,                    /* PUBLIC  */
  YYSYMBOL_RETURN = 15,                    /* RETURN  */
  YYSYMBOL_INT = 16,                       /* INT  */
  YYSYMBOL_SHORT = 17,                     /* SHORT  */
  YYSYMBOL_CHAR = 18,                      /* CHAR  */
  YYSYMBOL_FINAL = 19,                     /* FINAL  */
  YYSYMBOL_STATIC = 20,                    /* STATIC  */
  YYSYMBOL_VOID = 21,                      /* VOID  */
  YYSYMBOL_CLASS = 22,                     /* CLASS  */
  YYSYMBOL_LONG = 23,                      /* LONG  */
  YYSYMBOL_CONST = 24,                     /* CONST  */
  YYSYMBOL_FLOAT = 25,                     /* FLOAT  */
  YYSYMBOL_WHILE = 26,                     /* WHILE  */
  YYSYMBOL_LITERAL = 27,                   /* LITERAL  */
  YYSYMBOL_IDENTIFIER = 28,                /* IDENTIFIER  */
  YYSYMBOL_STRINGLITERAL = 29,             /* STRINGLITERAL  */
  YYSYMBOL_30_ = 30,                       /* '='  */
  YYSYMBOL_ADD_ASSIGN = 31,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 32,                /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 33,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 34,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 35,                /* MOD_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 36,                /* AND_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 37,                 /* OR_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 38,                /* XOR_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 39,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 40,              /* RIGHT_ASSIGN  */
  YYSYMBOL_UNSIGNED_RIGHT_ASSIGN = 41,     /* UNSIGNED_RIGHT_ASSIGN  */
  YYSYMBOL_42_ = 42,                       /* '?'  */
  YYSYMBOL_43_ = 43,                       /* ':'  */
  YYSYMBOL_OR_OP = 44,                     /* OR_OP  */
  YYSYMBOL_AND_OP = 45,                    /* AND_OP  */
  YYSYMBOL_46_ = 46,                       /* '|'  */
  YYSYMBOL_47_ = 47,                       /* '^'  */
  YYSYMBOL_48_ = 48,                       /* '&'  */
  YYSYMBOL_NE_OP = 49,                     /* NE_OP  */
  YYSYMBOL_EQ_OP = 50,                     /* EQ_OP  */
  YYSYMBOL_51_ = 51,                       /* '<'  */
  YYSYMBOL_52_ = 52,                       /* '>'  */
  YYSYMBOL_GE_OP = 53,                     /* GE_OP  */
  YYSYMBOL_LE_OP = 54,                     /* LE_OP  */
  YYSYMBOL_INSTANCEOF = 55,                /* INSTANCEOF  */
  YYSYMBOL_LEFT_OP = 56,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 57,                  /* RIGHT_OP  */
  YYSYMBOL_UNSIGNED_RIGHT_OP = 58,         /* UNSIGNED_RIGHT_OP  */
  YYSYMBOL_59_ = 59,                       /* '+'  */
  YYSYMBOL_60_ = 60,                       /* '-'  */
  YYSYMBOL_61_ = 61,                       /* '*'  */
  YYSYMBOL_62_ = 62,                       /* '/'  */
  YYSYMBOL_63_ = 63,                       /* '%'  */
  YYSYMBOL_NEW = 64,                       /* NEW  */
  YYSYMBOL_INC_OP = 65,                    /* INC_OP  */
  YYSYMBOL_DEC_OP = 66,                    /* DEC_OP  */
  YYSYMBOL_67_ = 67,                       /* '!'  */
  YYSYMBOL_68_ = 68,                       /* '~'  */
  YYSYMBOL_69_ = 69,                       /* '('  */
  YYSYMBOL_70_ = 70,                       /* ')'  */
  YYSYMBOL_71_ = 71,                       /* '{'  */
  YYSYMBOL_72_ = 72,                       /* '}'  */
  YYSYMBOL_73_ = 73,                       /* '['  */
  YYSYMBOL_74_ = 74,                       /* ']'  */
  YYSYMBOL_75_ = 75,                       /* '.'  */
  YYSYMBOL_76_ = 76,                       /* ','  */
  YYSYMBOL_77_ = 77,                       /* ';'  */
  YYSYMBOL_ELLIPSIS = 78,                  /* ELLIPSIS  */
  YYSYMBOL_PROPORTION = 79,                /* PROPORTION  */
  YYSYMBOL_PTR_OP = 80,                    /* PTR_OP  */
  YYSYMBOL_YYACCEPT = 81,                  /* $accept  */
  YYSYMBOL_CompilationUnit = 82,           /* CompilationUnit  */
  YYSYMBOL_PackageDeclaration = 83,        /* PackageDeclaration  */
  YYSYMBOL_MULTI_TypeDeclaration = 84,     /* MULTI_TypeDeclaration  */
  YYSYMBOL_TypeDeclaration = 85,           /* TypeDeclaration  */
  YYSYMBOL_TypeName = 86,                  /* TypeName  */
  YYSYMBOL_Type = 87,                      /* Type  */
  YYSYMBOL_PrimitiveType = 88,             /* PrimitiveType  */
  YYSYMBOL_NumericType = 89,               /* NumericType  */
  YYSYMBOL_IntegralType = 90,              /* IntegralType  */
  YYSYMBOL_FloatingPointType = 91,         /* FloatingPointType  */
  YYSYMBOL_ReferenceType = 92,             /* ReferenceType  */
  YYSYMBOL_ArrayType = 93,                 /* ArrayType  */
  YYSYMBOL_Dims = 94,                      /* Dims  */
  YYSYMBOL_ArrayInitializer = 95,          /* ArrayInitializer  */
  YYSYMBOL_VariableInitializerList = 96,   /* VariableInitializerList  */
  YYSYMBOL_ClassDeclaration = 97,          /* ClassDeclaration  */
  YYSYMBOL_NormalClassDeclaration = 98,    /* NormalClassDeclaration  */
  YYSYMBOL_ClassBody = 99,                 /* ClassBody  */
  YYSYMBOL_MULTI_ClassBodyDeclaration = 100, /* MULTI_ClassBodyDeclaration  */
  YYSYMBOL_ClassBodyDeclaration = 101,     /* ClassBodyDeclaration  */
  YYSYMBOL_ClassMemberDeclaration = 102,   /* ClassMemberDeclaration  */
  YYSYMBOL_FieldDeclaration = 103,         /* FieldDeclaration  */
  YYSYMBOL_MULTI_ClassModifier = 104,      /* MULTI_ClassModifier  */
  YYSYMBOL_ClassModifier = 105,            /* ClassModifier  */
  YYSYMBOL_VariableDeclaratorList = 106,   /* VariableDeclaratorList  */
  YYSYMBOL_VariableDeclarator = 107,       /* VariableDeclarator  */
  YYSYMBOL_VariableDeclaratorId = 108,     /* VariableDeclaratorId  */
  YYSYMBOL_VariableInitializer = 109,      /* VariableInitializer  */
  YYSYMBOL_MethodDeclaration = 110,        /* MethodDeclaration  */
  YYSYMBOL_MethodHeader = 111,             /* MethodHeader  */
  YYSYMBOL_MethodDeclarator = 112,         /* MethodDeclarator  */
  YYSYMBOL_FormalParameterList = 113,      /* FormalParameterList  */
  YYSYMBOL_FormalParameters = 114,         /* FormalParameters  */
  YYSYMBOL_FormalParameter = 115,          /* FormalParameter  */
  YYSYMBOL_LastFormalParameter = 116,      /* LastFormalParameter  */
  YYSYMBOL_ReceiverParameter = 117,        /* ReceiverParameter  */
  YYSYMBOL_MethodBody = 118,               /* MethodBody  */
  YYSYMBOL_StaticInitializer = 119,        /* StaticInitializer  */
  YYSYMBOL_ConstructorDeclaration = 120,   /* ConstructorDeclaration  */
  YYSYMBOL_ConstructorDeclarator = 121,    /* ConstructorDeclarator  */
  YYSYMBOL_ConstructorBody = 122,          /* ConstructorBody  */
  YYSYMBOL_ExplicitConstructorInvocation = 123, /* ExplicitConstructorInvocation  */
  YYSYMBOL_SINGLE_ArgumentList = 124,      /* SINGLE_ArgumentList  */
  YYSYMBOL_Block = 125,                    /* Block  */
  YYSYMBOL_BlockStatements = 126,          /* BlockStatements  */
  YYSYMBOL_BlockStatement = 127,           /* BlockStatement  */
  YYSYMBOL_LocalVariableDeclarationStatement = 128, /* LocalVariableDeclarationStatement  */
  YYSYMBOL_LocalVariableDeclaration = 129, /* LocalVariableDeclaration  */
  YYSYMBOL_Statement = 130,                /* Statement  */
  YYSYMBOL_StatementNoShortIf = 131,       /* StatementNoShortIf  */
  YYSYMBOL_StatementWithoutTrailingSubstatement = 132, /* StatementWithoutTrailingSubstatement  */
  YYSYMBOL_EmptyStatement = 133,           /* EmptyStatement  */
  YYSYMBOL_LabeledStatement = 134,         /* LabeledStatement  */
  YYSYMBOL_LabeledStatementNoShortIf = 135, /* LabeledStatementNoShortIf  */
  YYSYMBOL_ExpressionStatement = 136,      /* ExpressionStatement  */
  YYSYMBOL_StatementExpression = 137,      /* StatementExpression  */
  YYSYMBOL_IfThenStatement = 138,          /* IfThenStatement  */
  YYSYMBOL_IfThenElseStatement = 139,      /* IfThenElseStatement  */
  YYSYMBOL_IfThenElseStatementNoShortIf = 140, /* IfThenElseStatementNoShortIf  */
  YYSYMBOL_WhileStatement = 141,           /* WhileStatement  */
  YYSYMBOL_WhileStatementNoShortIf = 142,  /* WhileStatementNoShortIf  */
  YYSYMBOL_ForStatement = 143,             /* ForStatement  */
  YYSYMBOL_ForStatementNoShortIf = 144,    /* ForStatementNoShortIf  */
  YYSYMBOL_BasicForStatement = 145,        /* BasicForStatement  */
  YYSYMBOL_SINGLE_ForInit = 146,           /* SINGLE_ForInit  */
  YYSYMBOL_SINGLE_Expression = 147,        /* SINGLE_Expression  */
  YYSYMBOL_SINGLE_ForUpdate = 148,         /* SINGLE_ForUpdate  */
  YYSYMBOL_BasicForStatementNoShortIf = 149, /* BasicForStatementNoShortIf  */
  YYSYMBOL_ForInit = 150,                  /* ForInit  */
  YYSYMBOL_ForUpdate = 151,                /* ForUpdate  */
  YYSYMBOL_StatementExpressionList = 152,  /* StatementExpressionList  */
  YYSYMBOL_EnhancedForStatement = 153,     /* EnhancedForStatement  */
  YYSYMBOL_EnhancedForStatementNoShortIf = 154, /* EnhancedForStatementNoShortIf  */
  YYSYMBOL_BreakStatement = 155,           /* BreakStatement  */
  YYSYMBOL_ContinueStatement = 156,        /* ContinueStatement  */
  YYSYMBOL_ReturnStatement = 157,          /* ReturnStatement  */
  YYSYMBOL_Primary = 158,                  /* Primary  */
  YYSYMBOL_PrimaryNoNewArray = 159,        /* PrimaryNoNewArray  */
  YYSYMBOL_ClassLiteral = 160,             /* ClassLiteral  */
  YYSYMBOL_ClassInstanceCreationExpression = 161, /* ClassInstanceCreationExpression  */
  YYSYMBOL_UnqualifiedClassInstanceCreationExpression = 162, /* UnqualifiedClassInstanceCreationExpression  */
  YYSYMBOL_FieldAccess = 163,              /* FieldAccess  */
  YYSYMBOL_ArrayAccess = 164,              /* ArrayAccess  */
  YYSYMBOL_MethodInvocation = 165,         /* MethodInvocation  */
  YYSYMBOL_ArgumentList = 166,             /* ArgumentList  */
  YYSYMBOL_MethodReference = 167,          /* MethodReference  */
  YYSYMBOL_ArrayCreationExpression = 168,  /* ArrayCreationExpression  */
  YYSYMBOL_DimExprs = 169,                 /* DimExprs  */
  YYSYMBOL_DimExpr = 170,                  /* DimExpr  */
  YYSYMBOL_Expression = 171,               /* Expression  */
  YYSYMBOL_AssignmentExpression = 172,     /* AssignmentExpression  */
  YYSYMBOL_Assignment = 173,               /* Assignment  */
  YYSYMBOL_LeftHandSide = 174,             /* LeftHandSide  */
  YYSYMBOL_AssignmentOperator = 175,       /* AssignmentOperator  */
  YYSYMBOL_ConditionalExpression = 176,    /* ConditionalExpression  */
  YYSYMBOL_ConditionalOrExpression = 177,  /* ConditionalOrExpression  */
  YYSYMBOL_ConditionalAndExpression = 178, /* ConditionalAndExpression  */
  YYSYMBOL_InclusiveOrExpression = 179,    /* InclusiveOrExpression  */
  YYSYMBOL_ExclusiveOrExpression = 180,    /* ExclusiveOrExpression  */
  YYSYMBOL_AndExpression = 181,            /* AndExpression  */
  YYSYMBOL_EqualityExpression = 182,       /* EqualityExpression  */
  YYSYMBOL_RelationalExpression = 183,     /* RelationalExpression  */
  YYSYMBOL_ShiftExpression = 184,          /* ShiftExpression  */
  YYSYMBOL_AdditiveExpression = 185,       /* AdditiveExpression  */
  YYSYMBOL_MultiplicativeExpression = 186, /* MultiplicativeExpression  */
  YYSYMBOL_UnaryExpression = 187,          /* UnaryExpression  */
  YYSYMBOL_PreIncrementExpression = 188,   /* PreIncrementExpression  */
  YYSYMBOL_PreDecrementExpression = 189,   /* PreDecrementExpression  */
  YYSYMBOL_UnaryExpressionNotPlusMinus = 190, /* UnaryExpressionNotPlusMinus  */
  YYSYMBOL_PostfixExpression = 191,        /* PostfixExpression  */
  YYSYMBOL_PostIncrementExpression = 192,  /* PostIncrementExpression  */
  YYSYMBOL_PostDecrementExpression = 193,  /* PostDecrementExpression  */
  YYSYMBOL_CastExpression = 194            /* CastExpression  */
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
#define YYFINAL  18
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1977

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  81
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  114
/* YYNRULES -- Number of rules.  */
#define YYNRULES  283
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  475

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   311


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
       2,     2,     2,    67,     2,     2,     2,    63,    48,     2,
      69,    70,    61,    59,    76,    60,    75,    62,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    43,    77,
      51,    30,    52,    42,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    73,     2,    74,    47,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    71,    46,    72,    68,     2,     2,     2,
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
      25,    26,    27,    28,    29,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    44,    45,    49,    50,
      53,    54,    55,    56,    57,    58,    64,    65,    66,    78,
      79,    80
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   100,   100,   101,   102,   103,   106,   109,   110,   113,
     114,   117,   118,   124,   125,   130,   131,   135,   136,   140,
     141,   142,   143,   144,   148,   149,   153,   154,   157,   158,
     161,   162,   167,   168,   169,   170,   174,   175,   182,   186,
     187,   191,   192,   195,   196,   199,   200,   201,   205,   206,
     207,   208,   214,   215,   218,   219,   222,   223,   224,   227,
     228,   232,   233,   236,   237,   241,   242,   247,   248,   252,
     253,   257,   258,   259,   260,   264,   265,   266,   270,   271,
     272,   276,   277,   281,   285,   286,   290,   291,   294,   298,
     299,   303,   304,   308,   309,   310,   315,   319,   320,   327,
     332,   333,   337,   338,   339,   343,   347,   351,   352,   353,
     354,   355,   356,   360,   361,   362,   363,   364,   368,   369,
     370,   371,   372,   373,   377,   381,   385,   389,   393,   394,
     395,   396,   397,   398,   399,   403,   407,   411,   415,   419,
     423,   424,   428,   429,   433,   437,   438,   442,   443,   447,
     448,   452,   456,   457,   461,   465,   466,   470,   474,   478,
     479,   483,   484,   488,   489,   497,   498,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   516,   518,
     520,   522,   524,   530,   531,   532,   536,   538,   540,   543,
     549,   554,   555,   559,   561,   564,   567,   571,   573,   578,
     579,   583,   585,   587,   589,   591,   596,   598,   600,   602,
     604,   606,   611,   612,   616,   620,   624,   625,   629,   630,
     634,   635,   639,   640,   641,   642,   643,   644,   645,   646,
     647,   648,   649,   650,   654,   655,   659,   660,   664,   665,
     669,   670,   674,   675,   679,   680,   684,   685,   686,   690,
     691,   692,   693,   694,   695,   699,   700,   701,   702,   706,
     707,   708,   712,   713,   714,   715,   719,   720,   721,   723,
     725,   729,   734,   739,   740,   742,   744,   748,   749,   750,
     751,   755,   760,   765
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
  "\"end of file\"", "error", "\"invalid token\"", "CONTINUE", "FOR",
  "IF", "PACKAGE", "BOOLEAN", "PRIVATE", "THIS", "BREAK", "DOUBLE", "BYTE",
  "ELSE", "PUBLIC", "RETURN", "INT", "SHORT", "CHAR", "FINAL", "STATIC",
  "VOID", "CLASS", "LONG", "CONST", "FLOAT", "WHILE", "LITERAL",
  "IDENTIFIER", "STRINGLITERAL", "'='", "ADD_ASSIGN", "SUB_ASSIGN",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "AND_ASSIGN", "OR_ASSIGN",
  "XOR_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "UNSIGNED_RIGHT_ASSIGN",
  "'?'", "':'", "OR_OP", "AND_OP", "'|'", "'^'", "'&'", "NE_OP", "EQ_OP",
  "'<'", "'>'", "GE_OP", "LE_OP", "INSTANCEOF", "LEFT_OP", "RIGHT_OP",
  "UNSIGNED_RIGHT_OP", "'+'", "'-'", "'*'", "'/'", "'%'", "NEW", "INC_OP",
  "DEC_OP", "'!'", "'~'", "'('", "')'", "'{'", "'}'", "'['", "']'", "'.'",
  "','", "';'", "ELLIPSIS", "PROPORTION", "PTR_OP", "$accept",
  "CompilationUnit", "PackageDeclaration", "MULTI_TypeDeclaration",
  "TypeDeclaration", "TypeName", "Type", "PrimitiveType", "NumericType",
  "IntegralType", "FloatingPointType", "ReferenceType", "ArrayType",
  "Dims", "ArrayInitializer", "VariableInitializerList",
  "ClassDeclaration", "NormalClassDeclaration", "ClassBody",
  "MULTI_ClassBodyDeclaration", "ClassBodyDeclaration",
  "ClassMemberDeclaration", "FieldDeclaration", "MULTI_ClassModifier",
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

#define YYPACT_NINF (-400)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-281)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       8,    -7,  -400,  -400,  -400,    34,  -400,    91,    12,    12,
    -400,  -400,  -400,   175,  -400,  -400,   -33,    31,  -400,    12,
    -400,   123,  -400,   139,  -400,  1380,  -400,    31,  -400,  -400,
    -400,  -400,  -400,  -400,  -400,   186,   200,  -400,  -400,    58,
    -400,  -400,   193,   243,    59,  -400,  -400,  -400,  -400,  -400,
    -400,  1399,  -400,  -400,  -400,   878,  -400,   -32,  -400,  -400,
     263,  -400,  1126,  -400,   247,  -400,   641,   264,   279,    17,
      64,  -400,   323,  -400,   279,  -400,  -400,   243,   -32,   263,
    -400,  -400,  -400,  1197,  -400,   -18,   288,   290,  -400,   -17,
    1316,   286,   291,  -400,   -20,  -400,    92,  1835,  1835,  1835,
    -400,  1877,   334,   239,   284,  -400,  -400,   914,  -400,  -400,
     292,  -400,  -400,  -400,  -400,  -400,   293,  -400,  -400,  -400,
    -400,  -400,  -400,  -400,  -400,  -400,    85,   295,  -400,   104,
    -400,  1147,  1245,   173,  -400,  -400,  -400,  1428,  -400,  -400,
     147,   179,   209,   788,    92,  -400,    18,   297,   289,   301,
    -400,   296,  -400,   303,   279,   334,  -400,  1574,    99,  -400,
    -400,   306,  1001,  1028,   302,  -400,  1858,  1835,   304,  -400,
     309,  1835,  1835,  1835,  1835,  1835,  -400,  1898,   239,   284,
    -400,  -400,   307,  -400,  -400,  -400,   273,   335,   337,   340,
     343,   144,   294,   206,   260,   140,  -400,  -400,  -400,  -400,
     147,  -400,  -400,  -400,   366,  1835,  1224,  1597,    55,   319,
     109,  -400,  -400,  -400,  -400,   324,  -400,  -400,  -400,  -400,
    -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  1485,     9,
      -9,   250,  1835,    59,   317,   375,   251,    10,  -400,  -400,
    -400,  -400,    24,   370,  1835,  1835,  -400,  -400,    59,   330,
     334,  -400,   262,  -400,  -400,   223,  -400,  -400,  1419,  -400,
    -400,  -400,  -400,  1661,  -400,  -400,  1099,  -400,  -400,   334,
    -400,  -400,   325,  -400,   328,   331,  -400,  -400,  -400,  -400,
    -400,   185,  -400,  1835,  1835,  1835,  1835,  1835,  1835,  1835,
    1835,  1835,  1835,  1835,  1835,    92,  1835,  1835,  1835,  1835,
    1835,  1835,  1835,  1835,  -400,   338,  -400,  -400,   128,  -400,
    1684,  1485,   285,   319,  -400,   285,   319,  -400,   333,  -400,
    -400,   336,    -7,  -400,  -400,  -400,   389,  -400,  -400,   390,
    -400,  -400,   344,  -400,  -400,   342,  -400,   279,    59,  -400,
     423,   334,   301,  -400,  -400,   352,   157,  -400,   357,   141,
    -400,    62,  1835,  1858,  1293,  1835,   394,   335,   337,   340,
     343,   144,   294,   294,   206,   206,   206,   206,    59,  -400,
     260,   260,   260,   140,   140,  -400,  -400,  -400,  1224,  -400,
    1835,    31,   145,   364,  -400,   279,  -400,  -400,   279,  -400,
    1748,   110,  -400,  -400,  1771,  -400,   279,  -400,  -400,  -400,
    1508,  -400,   367,  1835,   371,  -400,  -400,   372,   374,   378,
      -2,  -400,   436,   439,  -400,  -400,  -400,  -400,  -400,  -400,
    -400,  1835,  -400,  -400,  -400,    31,  -400,  -400,   150,  -400,
     155,  -400,  -400,  -400,   386,  1858,  1858,  1835,  1835,  1293,
    1224,  -400,  -400,  -400,  -400,  1224,   387,  -400,   328,   334,
     381,   392,   393,  -400,  -400,  -400,  1224,    71,  1835,  1293,
    1293,  -400,  1835,   391,   451,  -400,   395,  1858,  1293,  1293,
     397,  -400,  -400,  1293,  -400
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       5,     0,    57,    56,    58,     0,    10,     0,     4,     3,
       7,     9,    38,     0,    54,    11,     0,     0,     1,     2,
       8,     0,    55,     0,     6,     0,    40,     0,    12,    16,
      25,    19,    21,    20,    23,    58,     0,    22,    24,    11,
      42,    51,    26,     0,    13,    15,    17,    18,    14,    27,
      50,     0,    43,    45,    48,     0,    49,     0,    46,    47,
       0,    39,     0,    88,     0,    70,     0,     0,    29,    64,
       0,    60,    62,    69,    28,    41,    44,     0,     0,     0,
      87,    68,    86,     0,    90,     0,     0,     0,   169,     0,
       0,     0,     0,   167,    11,   177,     0,     0,     0,     0,
     124,   278,     0,    13,    27,   103,   118,     0,   100,   102,
       0,   104,   107,   119,   108,   120,     0,   109,   110,   111,
     112,   140,   141,   121,   122,   123,   277,   165,   168,   172,
     183,   173,   174,   175,   176,   166,   128,     0,   129,   130,
       0,   131,   132,     0,     0,    92,     0,     0,     0,    79,
      77,    75,    31,     0,    63,     0,    53,     0,     0,    67,
      89,   169,     0,     0,     0,   162,   145,     0,     0,   160,
      11,     0,     0,     0,     0,     0,   164,   278,     0,     0,
     172,   175,     0,   215,   217,   216,   234,   236,   238,   240,
     242,   244,   246,   249,   255,   259,   262,   266,   267,   270,
     273,   279,   280,   276,     0,     0,     0,     0,     0,     0,
     278,   173,   174,   271,   272,     0,   222,   226,   227,   223,
     224,   225,   231,   233,   232,   228,   229,   230,     0,     0,
       0,    29,     0,    64,   106,     0,    28,     0,    99,   101,
     105,   127,     0,     0,     0,     0,   281,   282,    72,     0,
       0,    84,    64,    82,    91,     0,    30,    59,     0,    66,
      61,    65,    52,     0,    96,    95,     0,    94,   161,     0,
     153,   155,     0,   146,   152,     0,   159,   268,   269,   275,
     274,     0,   163,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   182,     0,   125,   194,     0,   200,
       0,     0,     0,   209,   212,     0,   207,   171,     0,   170,
     179,    12,     0,   184,   201,   204,     0,   219,   181,     0,
     202,   205,   190,   185,   203,     0,   218,    74,    71,    81,
       0,     0,    78,    76,    35,     0,     0,    36,     0,     0,
      93,    62,   147,     0,     0,     0,     0,   237,   239,   241,
     243,   245,   248,   247,   250,   251,   253,   252,     0,   254,
     256,   257,   258,   260,   261,   263,   264,   265,     0,   193,
       0,   189,     0,     0,   211,   208,   213,   210,   206,   191,
       0,     0,   178,   180,     0,   192,    73,    85,    34,    33,
       0,    97,     0,     0,     0,   148,   156,     0,     0,     0,
      11,   135,     0,   107,   114,   115,   116,   117,   142,   143,
     283,     0,   138,   199,   188,   186,   214,   196,     0,   198,
       0,    32,    37,    98,     0,   149,   145,     0,     0,     0,
       0,   235,   187,   195,   197,     0,     0,   150,   154,     0,
       0,     0,     0,   126,   136,   157,     0,    62,   147,     0,
       0,   144,     0,     0,     0,   139,     0,   149,     0,     0,
       0,   137,   158,     0,   151
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -400,  -400,  -400,   461,    57,    -1,    -8,   415,  -400,  -400,
    -400,   177,    56,    28,  -162,  -400,    75,  -400,   -26,  -400,
     424,  -400,  -400,     0,    16,    21,   321,  -131,  -253,  -400,
     419,   442,   341,  -400,   224,   225,  -400,   409,  -400,  -400,
     433,   410,  -400,  -400,   -22,   -75,  -100,  -400,  -164,   245,
    -282,  -314,  -400,  -400,  -400,  -400,  -157,  -400,  -400,  -400,
    -400,  -400,  -400,  -400,  -400,    54,    33,    26,  -400,  -400,
    -400,  -399,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,
     -50,  -108,   578,   665,   -14,  -257,  -400,  -400,   298,   -57,
     450,  -400,    61,  -400,   362,    73,  -400,   218,   219,   217,
     221,   222,    41,    14,   -16,    43,   -94,   107,   170,  -400,
     267,   320,   388,  -400
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     7,     8,     9,    10,   177,   102,   178,    45,    46,
      47,    48,   179,   154,   259,   346,   105,    12,    26,    51,
      52,    53,    54,    13,    14,   234,    71,    72,   260,    56,
      57,    73,   147,   148,   149,   150,   151,    81,    58,    59,
      60,    84,   162,   264,   106,   107,   108,   109,   110,   111,
     412,   112,   113,   114,   414,   115,   116,   117,   118,   415,
     119,   416,   120,   417,   121,   272,   404,   446,   418,   273,
     447,   274,   122,   419,   123,   124,   125,   126,   127,   128,
     180,   130,   131,   132,   181,   308,   134,   135,   313,   314,
     309,   183,   184,   137,   232,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      16,    61,   270,   213,   214,   347,   349,   239,   163,   271,
     164,   168,   129,    63,     1,   253,     2,    43,   319,   324,
       2,    15,     3,   206,    42,    55,     3,   251,     4,    22,
       5,   320,     4,   129,     5,    82,   448,   321,   330,    62,
     413,   439,    23,    43,    24,    80,   252,    77,   133,   207,
      42,    55,   332,   382,    42,   325,    82,   129,   146,   165,
     169,   101,    17,   239,    70,    42,    20,   207,   448,   133,
      68,    22,    74,   322,   331,    11,    20,   277,   278,   279,
     280,    49,   101,    11,    11,     6,   143,   266,   322,     6,
      67,    18,   157,   133,    11,   208,   210,   210,   158,    29,
      50,   157,    25,    30,    31,   403,   101,    49,    32,    33,
      34,    49,   129,   129,   462,    37,   129,    38,   104,   339,
      15,   323,    49,   136,   310,   413,    50,    66,   311,   231,
      23,   236,    67,   428,   333,   146,   250,   430,   351,   104,
     155,   156,    42,    42,   136,   413,   413,   432,   133,   133,
     384,    27,   133,   387,   413,   413,   129,   453,   269,   413,
     242,   101,   101,   104,   243,   101,   239,    28,   136,   138,
     210,   210,   210,   210,  -134,   155,   262,   464,   465,   310,
    -134,  -134,   228,     2,   229,    23,   471,   472,   230,     3,
     138,   474,   133,   289,   290,     4,   406,    21,   379,    49,
      49,   301,   302,   303,   380,   231,   236,   375,   376,   377,
     253,   402,   246,   247,   138,   425,   129,   380,   104,   104,
     443,   380,   104,   136,   136,   444,   380,   136,    64,   399,
      29,   380,   139,   400,    30,    31,   312,   315,   231,    32,
      33,    34,   144,  -133,  -279,  -279,    37,   341,    38,  -133,
    -133,    15,   133,   139,    42,   355,   386,    62,    67,   386,
     235,   420,   296,   297,   298,   101,    67,   136,    23,   138,
     138,    69,   270,   138,  -280,  -280,   337,   139,   271,   271,
     370,   371,   372,   210,   210,   210,   210,   210,   210,   210,
     210,   210,   210,   210,    42,   210,   210,   210,   210,   210,
     210,   210,   210,   129,   129,   364,   365,   366,   367,   236,
     271,    49,    67,   138,   235,   283,   143,   284,   457,   299,
     300,   391,   104,   153,   153,   326,   329,   136,   129,   140,
     362,   363,   139,   139,    83,    67,   139,   340,   152,   133,
     133,   385,   373,   374,   388,   291,   292,   293,   294,   295,
     140,    49,   153,   157,   210,   424,   258,   166,   153,   167,
     205,   204,   233,   237,   133,   255,   396,   254,   244,   240,
     241,   -83,   -80,   138,   140,   263,   139,   256,   207,   268,
     285,   276,   141,   286,   282,   129,   129,   287,   304,   129,
     129,   288,   311,   155,   317,   129,    74,   328,   334,   442,
     338,   354,   352,   141,   353,   390,   129,   389,   378,   129,
     129,   392,   393,   394,   136,   136,   395,   129,   129,   129,
     210,   133,   133,   129,   398,   133,   133,   141,   449,   140,
     140,   133,   397,   140,   401,   101,   139,   421,   426,   136,
      44,   436,   133,   437,   433,   133,   133,   438,   435,   440,
     142,   306,  -113,   133,   133,   133,   445,   456,   458,   133,
     138,   138,   459,   460,   468,   469,    44,   473,   467,    19,
      44,   142,   369,   140,    78,    76,   257,   103,    65,   342,
     343,    44,   141,   141,   249,   138,   141,   159,    79,   160,
     450,   463,   104,   470,   441,   142,   136,   136,   103,   245,
     136,   136,   357,   359,   358,     0,   136,   316,   360,     0,
     361,   209,     0,     0,     0,     0,     0,   136,     0,     0,
     136,   136,   103,   139,   139,     0,   141,     0,   136,   136,
     136,     0,     0,   140,   136,     0,     0,     0,     0,     0,
     182,     0,   138,   138,     0,     0,   138,   138,   139,   215,
     142,   142,   138,     0,   142,     0,     0,     0,    44,    44,
       0,     0,     0,   138,     0,     0,   138,   138,     0,     0,
       0,     0,     0,     0,   138,   138,   138,   103,   103,     0,
     138,   103,     0,     0,     0,     0,   141,     0,     0,     0,
     281,     0,     0,     0,   142,     0,     0,     0,     0,   411,
       0,     0,     0,     0,     0,   139,   139,   261,     0,   139,
     139,     0,     0,     0,     0,   139,     0,   275,     0,     0,
     140,   140,     0,   422,     0,   215,   139,     0,     0,   139,
     139,     0,     0,     0,     0,     0,     0,   139,   139,   139,
       0,     0,     0,   139,     0,   140,     0,     0,    29,     0,
       0,     0,    30,    31,   142,   305,     0,    32,    33,    34,
     144,     0,     0,     0,    37,     0,    38,     0,     0,    15,
      44,     0,     0,   141,   141,   211,   211,     0,   318,     0,
       0,   103,   327,     0,   306,   454,     0,     0,     0,     0,
     455,     0,     0,     0,   335,   336,     0,     0,   141,     0,
       0,   461,   140,   140,   411,   422,   140,   140,   261,     0,
     368,   145,   140,   454,   455,     0,     0,     0,   461,     0,
       0,     0,     0,   140,     0,     0,   140,   140,     0,     0,
       0,     0,     0,   356,   140,   140,   140,     0,     0,     0,
     140,   142,   142,     0,     0,     0,     0,     0,     0,   211,
     211,   211,   211,     0,     0,   141,   141,     0,     0,   141,
     141,   383,   212,   212,     0,   141,   142,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   141,     0,     0,   141,
     141,     0,     0,     0,     0,     0,     0,   141,   141,   141,
       0,     0,     0,   141,     0,    29,     0,     0,     0,    30,
      31,     0,   405,     0,    32,    33,    34,   144,     0,     0,
       0,    37,     0,    38,     0,     0,    15,     0,     0,     0,
       0,     0,     0,   142,   142,     0,     0,   142,   142,     0,
     423,     0,     0,   142,     0,     0,   212,   212,   212,   212,
       0,     0,     0,     0,   142,     0,     0,   142,   142,     0,
     261,   103,     0,   434,     0,   142,   142,   142,   248,     0,
       0,   142,   211,   211,   211,   211,   211,   211,   211,   211,
     211,   211,   211,     0,   211,   211,   211,   211,   211,   211,
     211,   211,     0,     0,     0,    29,     2,   451,   452,    30,
      31,     0,     3,     0,    32,    33,    34,     0,     4,    36,
      21,    37,     0,    38,     0,     0,    39,     0,   405,     0,
       0,     0,   466,     0,     0,     0,     0,    85,    86,    87,
       0,    29,     2,    88,    89,    30,    31,     0,     3,    90,
      32,    33,    34,   211,     4,    91,     5,    37,     0,    38,
      92,    93,    94,    95,     0,     0,     0,     0,     0,   212,
     212,   212,   212,   212,   212,   212,   212,   212,   212,   212,
       0,   212,   212,   212,   212,   212,   212,   212,   212,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    96,    97,
      98,     0,     0,    99,     0,    62,   238,     0,     0,     0,
       0,   100,     0,     0,     0,     0,     0,     0,     0,   211,
       0,     0,     0,     0,    85,    86,    87,     0,    29,     2,
      88,    89,    30,    31,     0,     3,    90,    32,    33,    34,
     212,     4,    91,     5,    37,     0,    38,    92,    93,    94,
      95,    85,    86,    87,     0,    29,     2,    88,    89,    30,
      31,     0,     3,    90,    32,    33,    34,     0,     4,    91,
       5,    37,     0,    38,    92,    93,    94,    95,     0,     0,
       0,     0,     0,     0,     0,    96,    97,    98,     0,     0,
      99,     0,    62,   265,     0,     0,     0,     0,   100,     0,
       0,     0,     0,     0,     0,     0,   212,     0,     0,     0,
       0,     0,    96,    97,    98,     0,     0,    99,     0,    62,
     267,     0,    85,    86,    87,   100,    29,     2,    88,    89,
      30,    31,     0,     3,    90,    32,    33,    34,     0,     4,
      91,     5,    37,     0,    38,    92,    93,    94,    95,    85,
      86,    87,     0,    29,     2,    88,    89,    30,    31,     0,
       3,    90,    32,    33,    34,     0,     4,    91,     5,    37,
       0,    38,    92,    93,    94,    95,     0,     0,     0,     0,
       0,     0,     0,    96,    97,    98,     0,     0,    99,     0,
      62,   350,     0,     0,     0,     0,   100,  -220,  -220,  -220,
    -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,     0,
      96,    97,    98,     0,     0,    99,     0,    62,     0,     0,
      85,    86,    87,   100,    29,     2,   161,    89,    30,    31,
       0,     3,    90,    32,    33,    34,     0,     4,    91,     5,
      37,     0,    38,    92,    93,    94,    95,    85,    86,    87,
       0,    29,     0,    88,    89,    30,    31,     0,     0,    90,
      32,    33,    34,     0,     0,    91,     0,    37,     0,    38,
      92,    93,    94,    95,     0,     0,     0,     0,     0,     0,
       0,    96,    97,    98,     0,     0,    99,     0,    62,     0,
       0,     0,     0,     0,   100,  -221,  -221,  -221,  -221,  -221,
    -221,  -221,  -221,  -221,  -221,  -221,  -221,     0,    96,    97,
      98,     0,     0,    99,     0,    62,    85,   407,   408,     0,
      29,   100,    88,    89,    30,    31,     0,     0,    90,    32,
      33,    34,     0,     0,    91,     0,    37,     0,    38,   409,
      93,   410,    95,    29,     0,    88,     0,    30,    31,     0,
       0,     0,    32,    33,    34,     0,     0,    91,     0,    37,
       0,    38,     0,    93,   170,    95,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    96,    97,    98,
       0,     0,    99,     0,    62,     0,     0,     0,     0,     0,
     100,     0,     0,     0,     0,   171,   172,     0,     0,     0,
      96,    97,    98,   173,   174,   175,     0,    29,     2,     0,
       0,    30,    31,   176,     3,     0,    32,    33,    34,     0,
      35,    36,     5,    37,     0,    38,    29,     2,    39,     0,
      30,    31,     0,     3,     0,    32,    33,    34,     0,    35,
      36,     5,    37,     0,    38,     0,    29,    39,    88,     0,
      30,    31,     0,     0,     0,    32,    33,    34,     0,     0,
      91,     0,    37,     0,    38,     0,    93,   170,    95,     0,
       0,     0,    40,     0,     0,     0,     0,    41,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
       0,    75,     0,     0,     0,     0,    41,     0,   171,   172,
       0,     0,     0,    96,    97,    98,   173,   174,   175,     0,
     258,   344,    29,     0,    88,   345,    30,    31,     0,     0,
       0,    32,    33,    34,     0,     0,    91,     0,    37,     0,
      38,     0,    93,   170,    95,    29,     0,    88,     0,    30,
      31,     0,     0,     0,    32,    33,    34,     0,     0,    91,
       0,    37,     0,    38,     0,    93,   170,    95,     0,     0,
       0,     0,     0,     0,   171,   172,     0,     0,     0,    96,
      97,    98,   173,   174,   175,     0,     0,     0,     0,   152,
       0,     0,     0,     0,     0,     0,     0,   171,   172,     0,
       0,     0,    96,    97,    98,   173,   174,   175,     0,   258,
     431,    29,     0,    88,     0,    30,    31,     0,     0,     0,
      32,    33,    34,     0,     0,    91,     0,    37,     0,    38,
       0,    93,   170,    95,    29,     0,    88,     0,    30,    31,
       0,     0,     0,    32,    33,    34,     0,     0,    91,     0,
      37,     0,    38,     0,    93,   170,    95,     0,     0,     0,
       0,     0,     0,   171,   172,     0,     0,     0,    96,    97,
      98,   173,   174,   175,     0,   258,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   171,   172,     0,     0,
       0,    96,    97,    98,   173,   174,   175,   307,    29,     0,
      88,     0,    30,    31,     0,     0,     0,    32,    33,    34,
       0,     0,    91,     0,    37,     0,    38,     0,    93,   170,
      95,    29,     0,    88,     0,    30,    31,     0,     0,     0,
      32,    33,    34,     0,     0,    91,     0,    37,     0,    38,
       0,    93,   170,    95,     0,     0,     0,     0,     0,     0,
     171,   172,     0,     0,     0,    96,    97,    98,   173,   174,
     175,   348,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   171,   172,     0,     0,     0,    96,    97,
      98,   173,   174,   175,   381,    29,     0,    88,     0,    30,
      31,     0,     0,     0,    32,    33,    34,     0,     0,    91,
       0,    37,     0,    38,     0,    93,   170,    95,    29,     0,
      88,     0,    30,    31,     0,     0,     0,    32,    33,    34,
       0,     0,    91,     0,    37,     0,    38,     0,    93,   170,
      95,     0,     0,     0,     0,     0,     0,   171,   172,     0,
       0,     0,    96,    97,    98,   173,   174,   175,   427,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     171,   172,     0,     0,     0,    96,    97,    98,   173,   174,
     175,   429,    29,     0,    88,     0,    30,    31,     0,     0,
       0,    32,    33,    34,     0,     0,    91,     0,    37,     0,
      38,     0,    93,   170,    95,    29,     0,    88,     0,    30,
      31,     0,     0,     0,    32,    33,    34,     0,     0,    91,
       0,    37,     0,    38,     0,    93,   170,    95,     0,     0,
       0,     0,     0,     0,   171,   172,     0,     0,     0,    96,
      97,    98,   173,   174,   175,   -26,     0,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,     0,
       0,     0,    96,    97,    98,     0,     0,    99,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     228,     0,   229,     0,     0,     0,   230,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   228,     0,   229,     0,     0,     0,   230
};

static const yytype_int16 yycheck[] =
{
       1,    27,   166,    97,    98,   258,   263,   107,    83,   166,
      28,    28,    62,    35,     6,   146,     8,    25,     9,    28,
       8,    28,    14,    43,    25,    25,    14,     9,    20,    13,
      22,    22,    20,    83,    22,    57,   435,    28,    28,    71,
     354,    43,    75,    51,    77,    77,    28,    55,    62,    69,
      51,    51,    28,   310,    55,    64,    78,   107,    66,    77,
      77,    62,    28,   163,    43,    66,     9,    69,   467,    83,
      42,    55,    44,    64,    64,     0,    19,   171,   172,   173,
     174,    25,    83,     8,     9,    77,    69,   162,    64,    77,
      73,     0,    30,   107,    19,    96,    97,    98,    77,     7,
      25,    30,    71,    11,    12,    43,   107,    51,    16,    17,
      18,    55,   162,   163,    43,    23,   166,    25,    62,   250,
      28,   229,    66,    62,    69,   439,    51,    69,    73,   101,
      75,   103,    73,   390,   242,   143,   144,   394,   269,    83,
      76,    77,   143,   144,    83,   459,   460,   400,   162,   163,
     312,    28,   166,   315,   468,   469,   206,   439,   166,   473,
      75,   162,   163,   107,    79,   166,   266,    28,   107,    62,
     171,   172,   173,   174,    70,    76,    77,   459,   460,    69,
      76,    77,    73,     8,    75,    75,   468,   469,    79,    14,
      83,   473,   206,    49,    50,    20,   353,    22,    70,   143,
     144,    61,    62,    63,    76,   177,   178,   301,   302,   303,
     341,    70,    65,    66,   107,    70,   266,    76,   162,   163,
      70,    76,   166,   162,   163,    70,    76,   166,    28,    72,
       7,    76,    62,    76,    11,    12,   208,   209,   210,    16,
      17,    18,    19,    70,    65,    66,    23,   255,    25,    76,
      77,    28,   266,    83,   255,    70,   313,    71,    73,   316,
      75,   355,    56,    57,    58,   266,    73,   206,    75,   162,
     163,    28,   436,   166,    65,    66,   248,   107,   435,   436,
     296,   297,   298,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   353,   354,   291,   292,   293,   294,   281,
     467,   255,    73,   206,    75,    42,    69,    44,   449,    59,
      60,   322,   266,    73,    73,    75,    75,   266,   378,    62,
     289,   290,   162,   163,    71,    73,   166,    75,    74,   353,
     354,   313,   299,   300,   316,    51,    52,    53,    54,    55,
      83,   295,    73,    30,   355,   381,    71,    69,    73,    69,
      69,    75,    28,    79,   378,    76,   338,    70,    73,    77,
      77,    70,    76,   266,   107,    69,   206,    74,    69,    77,
      45,    77,    62,    46,    77,   435,   436,    47,    22,   439,
     440,    48,    73,    76,    70,   445,   368,    22,    28,   425,
      70,    70,    77,    83,    76,    69,   456,    74,    70,   459,
     460,    22,    22,    69,   353,   354,    74,   467,   468,   469,
     421,   435,   436,   473,    72,   439,   440,   107,   436,   162,
     163,   445,     9,   166,    77,   436,   266,    43,    74,   378,
      25,    69,   456,    69,    77,   459,   460,    69,    77,    13,
      62,   206,    13,   467,   468,   469,    70,    70,    77,   473,
     353,   354,    70,    70,    13,    70,    51,    70,    77,     8,
      55,    83,   295,   206,    55,    51,   155,    62,    36,   255,
     255,    66,   162,   163,   143,   378,   166,    78,    55,    79,
     436,   458,   436,   467,   421,   107,   435,   436,    83,   137,
     439,   440,   284,   286,   285,    -1,   445,   209,   287,    -1,
     288,    96,    -1,    -1,    -1,    -1,    -1,   456,    -1,    -1,
     459,   460,   107,   353,   354,    -1,   206,    -1,   467,   468,
     469,    -1,    -1,   266,   473,    -1,    -1,    -1,    -1,    -1,
      90,    -1,   435,   436,    -1,    -1,   439,   440,   378,    99,
     162,   163,   445,    -1,   166,    -1,    -1,    -1,   143,   144,
      -1,    -1,    -1,   456,    -1,    -1,   459,   460,    -1,    -1,
      -1,    -1,    -1,    -1,   467,   468,   469,   162,   163,    -1,
     473,   166,    -1,    -1,    -1,    -1,   266,    -1,    -1,    -1,
     175,    -1,    -1,    -1,   206,    -1,    -1,    -1,    -1,   354,
      -1,    -1,    -1,    -1,    -1,   435,   436,   157,    -1,   439,
     440,    -1,    -1,    -1,    -1,   445,    -1,   167,    -1,    -1,
     353,   354,    -1,   378,    -1,   175,   456,    -1,    -1,   459,
     460,    -1,    -1,    -1,    -1,    -1,    -1,   467,   468,   469,
      -1,    -1,    -1,   473,    -1,   378,    -1,    -1,     7,    -1,
      -1,    -1,    11,    12,   266,   205,    -1,    16,    17,    18,
      19,    -1,    -1,    -1,    23,    -1,    25,    -1,    -1,    28,
     255,    -1,    -1,   353,   354,    97,    98,    -1,   228,    -1,
      -1,   266,   232,    -1,   439,   440,    -1,    -1,    -1,    -1,
     445,    -1,    -1,    -1,   244,   245,    -1,    -1,   378,    -1,
      -1,   456,   435,   436,   459,   460,   439,   440,   258,    -1,
     295,    70,   445,   468,   469,    -1,    -1,    -1,   473,    -1,
      -1,    -1,    -1,   456,    -1,    -1,   459,   460,    -1,    -1,
      -1,    -1,    -1,   283,   467,   468,   469,    -1,    -1,    -1,
     473,   353,   354,    -1,    -1,    -1,    -1,    -1,    -1,   171,
     172,   173,   174,    -1,    -1,   435,   436,    -1,    -1,   439,
     440,   311,    97,    98,    -1,   445,   378,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   456,    -1,    -1,   459,
     460,    -1,    -1,    -1,    -1,    -1,    -1,   467,   468,   469,
      -1,    -1,    -1,   473,    -1,     7,    -1,    -1,    -1,    11,
      12,    -1,   352,    -1,    16,    17,    18,    19,    -1,    -1,
      -1,    23,    -1,    25,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,   435,   436,    -1,    -1,   439,   440,    -1,
     380,    -1,    -1,   445,    -1,    -1,   171,   172,   173,   174,
      -1,    -1,    -1,    -1,   456,    -1,    -1,   459,   460,    -1,
     400,   436,    -1,   403,    -1,   467,   468,   469,    70,    -1,
      -1,   473,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,    -1,   296,   297,   298,   299,   300,   301,
     302,   303,    -1,    -1,    -1,     7,     8,   437,   438,    11,
      12,    -1,    14,    -1,    16,    17,    18,    -1,    20,    21,
      22,    23,    -1,    25,    -1,    -1,    28,    -1,   458,    -1,
      -1,    -1,   462,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,     7,     8,     9,    10,    11,    12,    -1,    14,    15,
      16,    17,    18,   355,    20,    21,    22,    23,    -1,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
      -1,   296,   297,   298,   299,   300,   301,   302,   303,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,
      66,    -1,    -1,    69,    -1,    71,    72,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   421,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,     8,
       9,    10,    11,    12,    -1,    14,    15,    16,    17,    18,
     355,    20,    21,    22,    23,    -1,    25,    26,    27,    28,
      29,     3,     4,     5,    -1,     7,     8,     9,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    -1,    20,    21,
      22,    23,    -1,    25,    26,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    65,    66,    -1,    -1,
      69,    -1,    71,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   421,    -1,    -1,    -1,
      -1,    -1,    64,    65,    66,    -1,    -1,    69,    -1,    71,
      72,    -1,     3,     4,     5,    77,     7,     8,     9,    10,
      11,    12,    -1,    14,    15,    16,    17,    18,    -1,    20,
      21,    22,    23,    -1,    25,    26,    27,    28,    29,     3,
       4,     5,    -1,     7,     8,     9,    10,    11,    12,    -1,
      14,    15,    16,    17,    18,    -1,    20,    21,    22,    23,
      -1,    25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    65,    66,    -1,    -1,    69,    -1,
      71,    72,    -1,    -1,    -1,    -1,    77,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      64,    65,    66,    -1,    -1,    69,    -1,    71,    -1,    -1,
       3,     4,     5,    77,     7,     8,     9,    10,    11,    12,
      -1,    14,    15,    16,    17,    18,    -1,    20,    21,    22,
      23,    -1,    25,    26,    27,    28,    29,     3,     4,     5,
      -1,     7,    -1,     9,    10,    11,    12,    -1,    -1,    15,
      16,    17,    18,    -1,    -1,    21,    -1,    23,    -1,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    65,    66,    -1,    -1,    69,    -1,    71,    -1,
      -1,    -1,    -1,    -1,    77,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    64,    65,
      66,    -1,    -1,    69,    -1,    71,     3,     4,     5,    -1,
       7,    77,     9,    10,    11,    12,    -1,    -1,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    -1,    25,    26,
      27,    28,    29,     7,    -1,     9,    -1,    11,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    -1,    21,    -1,    23,
      -1,    25,    -1,    27,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,
      -1,    -1,    69,    -1,    71,    -1,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    -1,     7,     8,    -1,
      -1,    11,    12,    77,    14,    -1,    16,    17,    18,    -1,
      20,    21,    22,    23,    -1,    25,     7,     8,    28,    -1,
      11,    12,    -1,    14,    -1,    16,    17,    18,    -1,    20,
      21,    22,    23,    -1,    25,    -1,     7,    28,     9,    -1,
      11,    12,    -1,    -1,    -1,    16,    17,    18,    -1,    -1,
      21,    -1,    23,    -1,    25,    -1,    27,    28,    29,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    77,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    59,    60,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    -1,
      71,    72,     7,    -1,     9,    76,    11,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    -1,    21,    -1,    23,    -1,
      25,    -1,    27,    28,    29,     7,    -1,     9,    -1,    11,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    -1,    21,
      -1,    23,    -1,    25,    -1,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    -1,    -1,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    -1,    71,
      72,     7,    -1,     9,    -1,    11,    12,    -1,    -1,    -1,
      16,    17,    18,    -1,    -1,    21,    -1,    23,    -1,    25,
      -1,    27,    28,    29,     7,    -1,     9,    -1,    11,    12,
      -1,    -1,    -1,    16,    17,    18,    -1,    -1,    21,    -1,
      23,    -1,    25,    -1,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,     7,    -1,
       9,    -1,    11,    12,    -1,    -1,    -1,    16,    17,    18,
      -1,    -1,    21,    -1,    23,    -1,    25,    -1,    27,    28,
      29,     7,    -1,     9,    -1,    11,    12,    -1,    -1,    -1,
      16,    17,    18,    -1,    -1,    21,    -1,    23,    -1,    25,
      -1,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    60,    -1,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,     7,    -1,     9,    -1,    11,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    -1,    21,
      -1,    23,    -1,    25,    -1,    27,    28,    29,     7,    -1,
       9,    -1,    11,    12,    -1,    -1,    -1,    16,    17,    18,
      -1,    -1,    21,    -1,    23,    -1,    25,    -1,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    60,    -1,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,     7,    -1,     9,    -1,    11,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    -1,    21,    -1,    23,    -1,
      25,    -1,    27,    28,    29,     7,    -1,     9,    -1,    11,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    -1,    21,
      -1,    23,    -1,    25,    -1,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      -1,    -1,    64,    65,    66,    -1,    -1,    69,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    -1,    75,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    -1,    75,    -1,    -1,    -1,    79
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     8,    14,    20,    22,    77,    82,    83,    84,
      85,    97,    98,   104,   105,    28,    86,    28,     0,    84,
      85,    22,   105,    75,    77,    71,    99,    28,    28,     7,
      11,    12,    16,    17,    18,    20,    21,    23,    25,    28,
      72,    77,    86,    87,    88,    89,    90,    91,    92,    93,
      97,   100,   101,   102,   103,   104,   110,   111,   119,   120,
     121,    99,    71,   125,    28,   112,    69,    73,    94,    28,
     106,   107,   108,   112,    94,    72,   101,    87,   111,   121,
      77,   118,   125,    71,   122,     3,     4,     5,     9,    10,
      15,    21,    26,    27,    28,    29,    64,    65,    66,    69,
      77,    86,    87,    88,    93,    97,   125,   126,   127,   128,
     129,   130,   132,   133,   134,   136,   137,   138,   139,   141,
     143,   145,   153,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   167,   168,   173,   174,   188,   189,
     191,   192,   193,    69,    19,    70,    87,   113,   114,   115,
     116,   117,    74,    73,    94,    76,    77,    30,   106,   118,
     122,     9,   123,   126,    28,    77,    69,    69,    28,    77,
      28,    59,    60,    67,    68,    69,    77,    86,    88,    93,
     161,   165,   171,   172,   173,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,    75,    69,    43,    69,    86,    88,
      86,   163,   164,   187,   187,   171,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    73,    75,
      79,    94,   175,    28,   106,    75,    94,    79,    72,   127,
      77,    77,    75,    79,    73,   175,    65,    66,    70,   113,
      87,     9,    28,   108,    70,    76,    74,   107,    71,    95,
     109,   171,    77,    69,   124,    72,   126,    72,    77,    87,
     129,   137,   146,   150,   152,   171,    77,   187,   187,   187,
     187,    88,    77,    42,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    22,   171,   130,    70,   166,   171,
      69,    73,    94,   169,   170,    94,   169,    70,   171,     9,
      22,    28,    64,   162,    28,    64,    75,   171,    22,    75,
      28,    64,    28,   162,    28,   171,   171,    94,    70,   108,
      75,    87,   115,   116,    72,    76,    96,   109,    70,   166,
      72,   108,    77,    76,    70,    70,   171,   178,   179,   180,
     181,   182,   183,   183,   184,   184,   184,   184,    88,    92,
     185,   185,   185,   186,   186,   187,   187,   187,    70,    70,
      76,    70,   166,   171,    95,    94,   170,    95,    94,    74,
      69,    86,    22,    22,    69,    74,    94,     9,    72,    72,
      76,    77,    70,    43,   147,   171,   137,     4,     5,    26,
      28,   130,   131,   132,   135,   140,   142,   144,   149,   154,
     187,    43,   130,   171,    99,    70,    74,    70,   166,    70,
     166,    72,   109,    77,   171,    77,    69,    69,    69,    43,
      13,   176,    99,    70,    70,    70,   148,   151,   152,    87,
     146,   171,   171,   131,   130,   130,    70,   108,    77,    70,
      70,   130,    43,   147,   131,   131,   171,    77,    13,    70,
     148,   131,   131,    70,   131
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    81,    82,    82,    82,    82,    83,    84,    84,    85,
      85,    86,    86,    87,    87,    88,    88,    89,    89,    90,
      90,    90,    90,    90,    91,    91,    92,    92,    93,    93,
      94,    94,    95,    95,    95,    95,    96,    96,    97,    98,
      98,    99,    99,   100,   100,   101,   101,   101,   102,   102,
     102,   102,   103,   103,   104,   104,   105,   105,   105,   106,
     106,   107,   107,   108,   108,   109,   109,   110,   110,   111,
     111,   112,   112,   112,   112,   113,   113,   113,   114,   114,
     114,   115,   115,   116,   117,   117,   118,   118,   119,   120,
     120,   121,   121,   122,   122,   122,   123,   124,   124,   125,
     126,   126,   127,   127,   127,   128,   129,   130,   130,   130,
     130,   130,   130,   131,   131,   131,   131,   131,   132,   132,
     132,   132,   132,   132,   133,   134,   135,   136,   137,   137,
     137,   137,   137,   137,   137,   138,   139,   140,   141,   142,
     143,   143,   144,   144,   145,   146,   146,   147,   147,   148,
     148,   149,   150,   150,   151,   152,   152,   153,   154,   155,
     155,   156,   156,   157,   157,   158,   158,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   160,   160,
     160,   160,   160,   161,   161,   161,   162,   162,   162,   162,
     163,   164,   164,   165,   165,   165,   165,   165,   165,   166,
     166,   167,   167,   167,   167,   167,   168,   168,   168,   168,
     168,   168,   169,   169,   170,   171,   172,   172,   173,   173,
     174,   174,   175,   175,   175,   175,   175,   175,   175,   175,
     175,   175,   175,   175,   176,   176,   177,   177,   178,   178,
     179,   179,   180,   180,   181,   181,   182,   182,   182,   183,
     183,   183,   183,   183,   183,   184,   184,   184,   184,   185,
     185,   185,   186,   186,   186,   186,   187,   187,   187,   187,
     187,   188,   189,   190,   190,   190,   190,   191,   191,   191,
     191,   192,   193,   194
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     1,     0,     3,     1,     2,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       3,     2,     4,     3,     3,     2,     1,     3,     1,     4,
       3,     3,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     4,     3,     1,     2,     1,     1,     1,     3,
       1,     3,     1,     2,     1,     1,     1,     3,     2,     2,
       2,     4,     3,     5,     4,     1,     3,     1,     3,     1,
       1,     3,     2,     1,     2,     4,     1,     1,     2,     3,
       2,     4,     3,     4,     3,     3,     2,     3,     4,     3,
       1,     2,     1,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     5,     7,     7,     5,     5,
       1,     1,     1,     1,     9,     0,     1,     0,     1,     0,
       1,     9,     1,     1,     1,     1,     3,     8,     8,     3,
       2,     3,     2,     3,     2,     1,     1,     1,     1,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     4,     3,
       4,     3,     3,     1,     3,     3,     5,     6,     5,     4,
       3,     4,     4,     4,     3,     6,     5,     6,     5,     3,
       1,     3,     3,     3,     3,     3,     4,     3,     4,     3,
       4,     4,     1,     2,     3,     1,     1,     1,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     3,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     1,     1,     2,     2,
       1,     2,     2,     1,     2,     2,     1,     1,     1,     1,
       1,     2,     2,     4
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
  case 2: /* CompilationUnit: PackageDeclaration MULTI_TypeDeclaration  */
#line 100 "parser.y"
                                                  {Node * temp=createNode("EOF","<EOF>",{}); root =createNode("compilationUnit","",{(yyvsp[-1].node),(yyvsp[0].node),temp});}
#line 1960 "parser.tab.c"
    break;

  case 3: /* CompilationUnit: MULTI_TypeDeclaration  */
#line 101 "parser.y"
                                 {Node * temp=createNode("EOF","<EOF>",{}); root =createNode("compilationUnit","",{(yyvsp[0].node),temp});}
#line 1966 "parser.tab.c"
    break;

  case 4: /* CompilationUnit: PackageDeclaration  */
#line 102 "parser.y"
                              {Node * temp=createNode("EOF","<EOF>",{}); root =createNode("compilationUnit","",{(yyvsp[0].node),temp});}
#line 1972 "parser.tab.c"
    break;

  case 5: /* CompilationUnit: %empty  */
#line 103 "parser.y"
                   {Node * temp=createNode("EOF","<EOF>",{}); root =createNode("compilationUnit","",{temp});}
#line 1978 "parser.tab.c"
    break;

  case 6: /* PackageDeclaration: PACKAGE TypeName ';'  */
#line 106 "parser.y"
                               { Node *temp1=createNode("PACKAGE",(yyvsp[-2].str),{});Node *temp3=createNode("Separator",(yyvsp[0].str),{}); (yyval.node)=createNode("PackageDeclaration","",{temp1,(yyvsp[-1].node),temp3}); }
#line 1984 "parser.tab.c"
    break;

  case 7: /* MULTI_TypeDeclaration: TypeDeclaration  */
#line 109 "parser.y"
                        {(yyval.node)=createNode("multiTypeDeclaration","",{(yyvsp[0].node)});}
#line 1990 "parser.tab.c"
    break;

  case 8: /* MULTI_TypeDeclaration: MULTI_TypeDeclaration TypeDeclaration  */
#line 110 "parser.y"
                                               { (yyval.node)=(yyvsp[-1].node); (yyval.node)->children.push_back((yyvsp[0].node));}
#line 1996 "parser.tab.c"
    break;

  case 9: /* TypeDeclaration: ClassDeclaration  */
#line 113 "parser.y"
                       {(yyval.node) = (yyvsp[0].node);}
#line 2002 "parser.tab.c"
    break;

  case 10: /* TypeDeclaration: ';'  */
#line 114 "parser.y"
            {(yyval.node)=createNode("Separator",(yyvsp[0].str),{});}
#line 2008 "parser.tab.c"
    break;

  case 11: /* TypeName: IDENTIFIER  */
#line 117 "parser.y"
                                       { (yyval.node) = createNode("Identifier",(yyvsp[0].str), {}); }
#line 2014 "parser.tab.c"
    break;

  case 12: /* TypeName: TypeName '.' IDENTIFIER  */
#line 118 "parser.y"
                                       { Node* l = createNode("Identifier", (yyvsp[0].str), {}); Node* temp = createNode("Separator", (yyvsp[-1].str), {}); (yyvsp[-2].node)->children.push_back(l); (yyvsp[-2].node)->children.push_back(temp); (yyval.node) = (yyvsp[-2].node); }
#line 2020 "parser.tab.c"
    break;

  case 13: /* Type: PrimitiveType  */
#line 124 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2026 "parser.tab.c"
    break;

  case 14: /* Type: ReferenceType  */
#line 125 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2032 "parser.tab.c"
    break;

  case 15: /* PrimitiveType: NumericType  */
#line 130 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2038 "parser.tab.c"
    break;

  case 16: /* PrimitiveType: BOOLEAN  */
#line 131 "parser.y"
                                { (yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2044 "parser.tab.c"
    break;

  case 17: /* NumericType: IntegralType  */
#line 135 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2050 "parser.tab.c"
    break;

  case 18: /* NumericType: FloatingPointType  */
#line 136 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2056 "parser.tab.c"
    break;

  case 19: /* IntegralType: BYTE  */
#line 140 "parser.y"
                                { (yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2062 "parser.tab.c"
    break;

  case 20: /* IntegralType: SHORT  */
#line 141 "parser.y"
                                { (yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2068 "parser.tab.c"
    break;

  case 21: /* IntegralType: INT  */
#line 142 "parser.y"
                                { (yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2074 "parser.tab.c"
    break;

  case 22: /* IntegralType: LONG  */
#line 143 "parser.y"
                                { (yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2080 "parser.tab.c"
    break;

  case 23: /* IntegralType: CHAR  */
#line 144 "parser.y"
                                { (yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2086 "parser.tab.c"
    break;

  case 24: /* FloatingPointType: FLOAT  */
#line 148 "parser.y"
                                { (yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2092 "parser.tab.c"
    break;

  case 25: /* FloatingPointType: DOUBLE  */
#line 149 "parser.y"
                                { (yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2098 "parser.tab.c"
    break;

  case 26: /* ReferenceType: TypeName  */
#line 153 "parser.y"
                { (yyval.node) = (yyvsp[0].node); }
#line 2104 "parser.tab.c"
    break;

  case 27: /* ReferenceType: ArrayType  */
#line 154 "parser.y"
                { (yyval.node) = (yyvsp[0].node); }
#line 2110 "parser.tab.c"
    break;

  case 28: /* ArrayType: PrimitiveType Dims  */
#line 157 "parser.y"
                        { (yyval.node) = createNode("ArrayType","",{(yyvsp[-1].node),(yyvsp[0].node)});}
#line 2116 "parser.tab.c"
    break;

  case 29: /* ArrayType: TypeName Dims  */
#line 158 "parser.y"
                     { (yyval.node) = createNode("ArrayType","",{(yyvsp[-1].node),(yyvsp[0].node)});}
#line 2122 "parser.tab.c"
    break;

  case 30: /* Dims: Dims '[' ']'  */
#line 161 "parser.y"
                  { (yyval.node) = (yyvsp[-2].node);Node *temp1 = createNode("Separator",(yyvsp[-1].str),{});Node *temp3 = createNode("Separator",(yyvsp[0].str),{}); (yyval.node)->children.push_back(temp1);(yyval.node)->children.push_back(temp3);}
#line 2128 "parser.tab.c"
    break;

  case 31: /* Dims: '[' ']'  */
#line 162 "parser.y"
                   {Node *temp1 = createNode("Separator",(yyvsp[-1].str),{}); Node *temp3 = createNode("Separator",(yyvsp[0].str),{});  ;(yyval.node) = createNode("DIMS","",{temp1,temp3}); }
#line 2134 "parser.tab.c"
    break;

  case 32: /* ArrayInitializer: '{' VariableInitializerList ',' '}'  */
#line 167 "parser.y"
                                                           { Node *temp1=createNode("Separator",(yyvsp[-3].str),{});Node *temp3=createNode("Separator",(yyvsp[-1].str),{});Node *temp4=createNode("Separator",(yyvsp[0].str),{}); (yyval.node)=createNode("ArrayInitializer","",{temp1,(yyvsp[-2].node),temp3,temp4}); }
#line 2140 "parser.tab.c"
    break;

  case 33: /* ArrayInitializer: '{' VariableInitializerList '}'  */
#line 168 "parser.y"
                                                           { Node *temp1=createNode("Separator",(yyvsp[-2].str),{});Node *temp3=createNode("Separator",(yyvsp[0].str),{}); (yyval.node)=createNode("ArrayInitializer","",{temp1,(yyvsp[-1].node),temp3}); }
#line 2146 "parser.tab.c"
    break;

  case 34: /* ArrayInitializer: '{' ',' '}'  */
#line 169 "parser.y"
                                                            { Node *temp1=createNode("Separator",(yyvsp[-2].str),{});Node *temp3=createNode("Separator",(yyvsp[-1].str),{});Node *temp4=createNode("Separator",(yyvsp[0].str),{}); (yyval.node)=createNode("ArrayInitializer","",{temp1,temp3,temp4}); }
#line 2152 "parser.tab.c"
    break;

  case 35: /* ArrayInitializer: '{' '}'  */
#line 170 "parser.y"
                                                           { Node *temp1=createNode("Separator",(yyvsp[-1].str),{});Node *temp2=createNode("Separator",(yyvsp[0].str),{});(yyval.node) = createNode("ArrayInitializer_EMP", "", {temp1,temp2}); }
#line 2158 "parser.tab.c"
    break;

  case 36: /* VariableInitializerList: VariableInitializer  */
#line 174 "parser.y"
                                                           { (yyval.node) = createNode("VariableInitializerList", "", {(yyvsp[0].node)}); }
#line 2164 "parser.tab.c"
    break;

  case 37: /* VariableInitializerList: VariableInitializerList ',' VariableInitializer  */
#line 175 "parser.y"
                                                           { (yyval.node) = (yyvsp[-2].node); (yyval.node)->children.push_back((yyvsp[0].node));Node *temp1=createNode("Separator",(yyvsp[-1].str),{});(yyval.node)->children.push_back(temp1); }
#line 2170 "parser.tab.c"
    break;

  case 38: /* ClassDeclaration: NormalClassDeclaration  */
#line 182 "parser.y"
                             { (yyval.node) = (yyvsp[0].node); }
#line 2176 "parser.tab.c"
    break;

  case 39: /* NormalClassDeclaration: MULTI_ClassModifier CLASS IDENTIFIER ClassBody  */
#line 186 "parser.y"
                                                       {Node *temp2=createNode("Keyword",(yyvsp[-2].str),{});Node *temp3=createNode("Identifier",(yyvsp[-1].str),{});(yyval.node)=createNode("normalClassDeclaration","",{(yyvsp[-3].node),temp2,temp3,(yyvsp[0].node)});}
#line 2182 "parser.tab.c"
    break;

  case 40: /* NormalClassDeclaration: CLASS IDENTIFIER ClassBody  */
#line 187 "parser.y"
                                  {Node *temp1=createNode("Keyword",(yyvsp[-2].str),{});Node *temp2=createNode("Identifier",(yyvsp[-1].str),{});(yyval.node)=createNode("normalClassDeclaration","",{temp1,temp2,(yyvsp[0].node)});}
#line 2188 "parser.tab.c"
    break;

  case 41: /* ClassBody: '{' MULTI_ClassBodyDeclaration '}'  */
#line 191 "parser.y"
                                           {Node *temp1=createNode("Separator",(yyvsp[-2].str),{});Node *temp3=createNode("Separator",(yyvsp[0].str),{}); (yyval.node)=createNode("classBody","",{temp1,(yyvsp[-1].node),temp3});}
#line 2194 "parser.tab.c"
    break;

  case 42: /* ClassBody: '{' '}'  */
#line 192 "parser.y"
                 {Node *temp1=createNode("Separator",(yyvsp[-1].str),{});Node *temp2=createNode("Separator",(yyvsp[0].str),{}); Node *temp3=createNode("fieldDeclaration","",{});(yyval.node)=createNode("classBody","",{temp1,temp2});}
#line 2200 "parser.tab.c"
    break;

  case 43: /* MULTI_ClassBodyDeclaration: ClassBodyDeclaration  */
#line 195 "parser.y"
                            {(yyval.node)=createNode("multiClassBodyDeclaration","",{(yyvsp[0].node)});}
#line 2206 "parser.tab.c"
    break;

  case 44: /* MULTI_ClassBodyDeclaration: MULTI_ClassBodyDeclaration ClassBodyDeclaration  */
#line 196 "parser.y"
                                                       { (yyval.node)=(yyvsp[-1].node); (yyval.node)->children.push_back((yyvsp[0].node));}
#line 2212 "parser.tab.c"
    break;

  case 45: /* ClassBodyDeclaration: ClassMemberDeclaration  */
#line 199 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2218 "parser.tab.c"
    break;

  case 46: /* ClassBodyDeclaration: StaticInitializer  */
#line 200 "parser.y"
                                 { (yyval.node) = (yyvsp[0].node); }
#line 2224 "parser.tab.c"
    break;

  case 47: /* ClassBodyDeclaration: ConstructorDeclaration  */
#line 201 "parser.y"
                                 { (yyval.node) = (yyvsp[0].node); }
#line 2230 "parser.tab.c"
    break;

  case 48: /* ClassMemberDeclaration: FieldDeclaration  */
#line 205 "parser.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2236 "parser.tab.c"
    break;

  case 49: /* ClassMemberDeclaration: MethodDeclaration  */
#line 206 "parser.y"
                           { (yyval.node) = (yyvsp[0].node); }
#line 2242 "parser.tab.c"
    break;

  case 50: /* ClassMemberDeclaration: ClassDeclaration  */
#line 207 "parser.y"
                           { (yyval.node) = (yyvsp[0].node); }
#line 2248 "parser.tab.c"
    break;

  case 51: /* ClassMemberDeclaration: ';'  */
#line 208 "parser.y"
           {(yyval.node)=createNode("Separator",(yyvsp[0].str),{});}
#line 2254 "parser.tab.c"
    break;

  case 52: /* FieldDeclaration: MULTI_ClassModifier Type VariableDeclaratorList ';'  */
#line 214 "parser.y"
                                                          {Node * temp4 =createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("fieldDeclaration","",{(yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[-1].node),temp4});}
#line 2260 "parser.tab.c"
    break;

  case 53: /* FieldDeclaration: Type VariableDeclaratorList ';'  */
#line 215 "parser.y"
                                      {Node * temp3 =createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("fieldDeclaration","",{(yyvsp[-2].node),(yyvsp[-1].node),temp3});}
#line 2266 "parser.tab.c"
    break;

  case 54: /* MULTI_ClassModifier: ClassModifier  */
#line 218 "parser.y"
                    {(yyval.node)=createNode("multiTypeDeclaration","",{(yyvsp[0].node)});}
#line 2272 "parser.tab.c"
    break;

  case 55: /* MULTI_ClassModifier: MULTI_ClassModifier ClassModifier  */
#line 219 "parser.y"
                                         {(yyval.node)=(yyvsp[-1].node); (yyvsp[-1].node)->children.push_back((yyvsp[0].node));}
#line 2278 "parser.tab.c"
    break;

  case 56: /* ClassModifier: PUBLIC  */
#line 222 "parser.y"
             { (yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2284 "parser.tab.c"
    break;

  case 57: /* ClassModifier: PRIVATE  */
#line 223 "parser.y"
              { (yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2290 "parser.tab.c"
    break;

  case 58: /* ClassModifier: STATIC  */
#line 224 "parser.y"
             {(yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2296 "parser.tab.c"
    break;

  case 59: /* VariableDeclaratorList: VariableDeclaratorList ',' VariableDeclarator  */
#line 227 "parser.y"
                                                     {(yyval.node) = (yyvsp[-2].node);(yyval.node)->children.push_back((yyvsp[0].node));Node * temp2 = createNode("Separator",(yyvsp[-1].str),{}); (yyval.node)->children.push_back(temp2); }
#line 2302 "parser.tab.c"
    break;

  case 60: /* VariableDeclaratorList: VariableDeclarator  */
#line 228 "parser.y"
                         {(yyval.node)=(yyvsp[0].node);}
#line 2308 "parser.tab.c"
    break;

  case 61: /* VariableDeclarator: VariableDeclaratorId '=' VariableInitializer  */
#line 232 "parser.y"
                                                   {Node * temp2 = createNode("=","",{});(yyval.node)=createNode("VariableDeclarator","",{(yyvsp[-2].node),temp2,(yyvsp[0].node)});}
#line 2314 "parser.tab.c"
    break;

  case 62: /* VariableDeclarator: VariableDeclaratorId  */
#line 233 "parser.y"
                           {(yyval.node)=(yyvsp[0].node);}
#line 2320 "parser.tab.c"
    break;

  case 63: /* VariableDeclaratorId: IDENTIFIER Dims  */
#line 236 "parser.y"
                      {Node * temp2 = createNode("Identifier",(yyvsp[-1].str),{}); (yyval.node)=createNode("VariableDeclaratorId","",{temp2,(yyvsp[0].node)});}
#line 2326 "parser.tab.c"
    break;

  case 64: /* VariableDeclaratorId: IDENTIFIER  */
#line 237 "parser.y"
                  {(yyval.node)=createNode("Identifier",(yyvsp[0].str),{});}
#line 2332 "parser.tab.c"
    break;

  case 65: /* VariableInitializer: Expression  */
#line 241 "parser.y"
                { (yyval.node)=(yyvsp[0].node);}
#line 2338 "parser.tab.c"
    break;

  case 66: /* VariableInitializer: ArrayInitializer  */
#line 242 "parser.y"
                      { (yyval.node)=(yyvsp[0].node);}
#line 2344 "parser.tab.c"
    break;

  case 67: /* MethodDeclaration: MULTI_ClassModifier MethodHeader MethodBody  */
#line 247 "parser.y"
                                                      {(yyval.node)=createNode("MethodDeclaration","",{(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 2350 "parser.tab.c"
    break;

  case 68: /* MethodDeclaration: MethodHeader MethodBody  */
#line 248 "parser.y"
                                                    {(yyval.node)=createNode("MethodDeclaration","",{(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 2356 "parser.tab.c"
    break;

  case 69: /* MethodHeader: Type MethodDeclarator  */
#line 252 "parser.y"
                                             {(yyval.node)=createNode("MethodHeader","",{(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 2362 "parser.tab.c"
    break;

  case 70: /* MethodHeader: VOID MethodDeclarator  */
#line 253 "parser.y"
                                             { Node *temp = createNode("TYPE", (yyvsp[-1].str), {}); (yyval.node) = createNode("MethodHeader","",{temp,(yyvsp[0].node)}); }
#line 2368 "parser.tab.c"
    break;

  case 71: /* MethodDeclarator: IDENTIFIER '(' FormalParameterList ')'  */
#line 257 "parser.y"
                                                     { Node *temp1=createNode("Identifier",(yyvsp[-3].str),{});Node *temp2=createNode("Separator",(yyvsp[-2].str),{});Node *temp4=createNode("Separator",(yyvsp[0].str),{});(yyval.node) = createNode("MethodDeclarator", "", {temp1,temp2,(yyvsp[-1].node),temp4}); }
#line 2374 "parser.tab.c"
    break;

  case 72: /* MethodDeclarator: IDENTIFIER '(' ')'  */
#line 258 "parser.y"
                                                     { Node *temp1=createNode("Identifier",(yyvsp[-2].str),{});Node *temp2=createNode("Separator",(yyvsp[-1].str),{});Node *temp4=createNode("Separator",(yyvsp[0].str),{});(yyval.node) = createNode("MethodDeclarator", "", {temp1,temp2,temp4}); }
#line 2380 "parser.tab.c"
    break;

  case 73: /* MethodDeclarator: IDENTIFIER '(' FormalParameterList ')' Dims  */
#line 259 "parser.y"
                                                     { Node *temp1=createNode("Identifier",(yyvsp[-4].str),{});Node *temp2=createNode("Separator",(yyvsp[-3].str),{});Node *temp4=createNode("Separator",(yyvsp[-1].str),{});(yyval.node) = createNode("MethodDeclarator", "", {temp1,temp2,(yyvsp[-2].node),temp4,(yyvsp[0].node)}); }
#line 2386 "parser.tab.c"
    break;

  case 74: /* MethodDeclarator: IDENTIFIER '(' ')' Dims  */
#line 260 "parser.y"
                                                     { Node *temp1=createNode("Identifier",(yyvsp[-3].str),{});Node *temp2=createNode("Separator",(yyvsp[-2].str),{});Node *temp4=createNode("Separator",(yyvsp[-1].str),{});(yyval.node) = createNode("MethodDeclarator", "", {temp1,temp2,(yyvsp[0].node),temp4}); }
#line 2392 "parser.tab.c"
    break;

  case 75: /* FormalParameterList: ReceiverParameter  */
#line 264 "parser.y"
                                                     { (yyval.node) = createNode("Parameters", "", {(yyvsp[0].node)}); }
#line 2398 "parser.tab.c"
    break;

  case 76: /* FormalParameterList: FormalParameters ',' LastFormalParameter  */
#line 265 "parser.y"
                                                     { Node *temp2=createNode("Separator",(yyvsp[-1].str),{}); (yyval.node)=createNode("FormalParameterList","",{(yyvsp[-2].node),temp2,(yyvsp[0].node)}); }
#line 2404 "parser.tab.c"
    break;

  case 77: /* FormalParameterList: LastFormalParameter  */
#line 266 "parser.y"
                                                     { (yyval.node) = createNode("Parameters", "", {(yyvsp[0].node)}); }
#line 2410 "parser.tab.c"
    break;

  case 78: /* FormalParameters: FormalParameters ',' FormalParameter  */
#line 270 "parser.y"
                                                     { (yyval.node) = (yyvsp[-2].node); (yyval.node)->children.push_back((yyvsp[0].node));Node *temp=createNode("Separator",(yyvsp[-1].str),{}); (yyval.node)->children.push_back(temp); }
#line 2416 "parser.tab.c"
    break;

  case 79: /* FormalParameters: FormalParameter  */
#line 271 "parser.y"
                                                     { (yyval.node) = createNode("Parameters", "", {(yyvsp[0].node)}); }
#line 2422 "parser.tab.c"
    break;

  case 80: /* FormalParameters: ReceiverParameter  */
#line 272 "parser.y"
                                                     { (yyval.node) = createNode("Parameters", "", {(yyvsp[0].node)}); }
#line 2428 "parser.tab.c"
    break;

  case 81: /* FormalParameter: FINAL Type VariableDeclaratorId  */
#line 276 "parser.y"
                                                    { Node *temp = createNode("MODIFIER", (yyvsp[-2].str), {}); (yyval.node) = createNode("FormalParameter", "", {temp, (yyvsp[-1].node), (yyvsp[0].node)}); }
#line 2434 "parser.tab.c"
    break;

  case 82: /* FormalParameter: Type VariableDeclaratorId  */
#line 277 "parser.y"
                                                    { (yyval.node) = createNode("FormalParameter", "", {(yyvsp[-1].node), (yyvsp[0].node)}); }
#line 2440 "parser.tab.c"
    break;

  case 83: /* LastFormalParameter: FormalParameter  */
#line 281 "parser.y"
                                                    { (yyval.node) = (yyvsp[0].node); }
#line 2446 "parser.tab.c"
    break;

  case 84: /* ReceiverParameter: Type THIS  */
#line 285 "parser.y"
                                                    { Node *n1 = createNode("THIS", (yyvsp[0].str), {}); (yyval.node) = createNode("ReceiverParameter", "", {(yyvsp[-1].node), n1}); }
#line 2452 "parser.tab.c"
    break;

  case 85: /* ReceiverParameter: Type IDENTIFIER '.' THIS  */
#line 286 "parser.y"
                                                    { Node *n1 = createNode("THIS", (yyvsp[0].str), {}); Node *n3 = createNode("Separator", (yyvsp[-1].str), {}); Node *n2 = createNode("Identifier", (yyvsp[-2].str), {}); (yyval.node) = createNode("ReceiverParameter", "", {(yyvsp[-3].node), n2, n1,n3}); }
#line 2458 "parser.tab.c"
    break;

  case 86: /* MethodBody: Block  */
#line 290 "parser.y"
                                                    {(yyval.node) = (yyvsp[0].node); }
#line 2464 "parser.tab.c"
    break;

  case 87: /* MethodBody: ';'  */
#line 291 "parser.y"
                                                    {(yyval.node) = createNode("EMP", "", {}); }
#line 2470 "parser.tab.c"
    break;

  case 88: /* StaticInitializer: STATIC Block  */
#line 294 "parser.y"
                                                    { Node * n1 = createNode("KEYWORD", (yyvsp[-1].str), {});(yyval.node) = createNode("StaticInitializer","", {n1,(yyvsp[0].node)}); }
#line 2476 "parser.tab.c"
    break;

  case 89: /* ConstructorDeclaration: MULTI_ClassModifier ConstructorDeclarator ConstructorBody  */
#line 298 "parser.y"
                                                                           { (yyval.node) = (yyvsp[-1].node); (yyval.node)->children.push_back((yyvsp[-2].node)); (yyval.node)->children.push_back((yyvsp[0].node));  }
#line 2482 "parser.tab.c"
    break;

  case 90: /* ConstructorDeclaration: ConstructorDeclarator ConstructorBody  */
#line 299 "parser.y"
                                                                           { (yyval.node) = (yyvsp[-1].node); (yyval.node)->children.push_back((yyvsp[0].node)); }
#line 2488 "parser.tab.c"
    break;

  case 91: /* ConstructorDeclarator: IDENTIFIER '(' FormalParameterList ')'  */
#line 303 "parser.y"
                                                                            { Node *n1 = createNode("Identifier", (yyvsp[-3].str), {});Node *n2= createNode("Separator", (yyvsp[-2].str), {});Node *n3= createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("ConstructorDeclarator","",{n1,n2,n3,(yyvsp[-1].node)}); }
#line 2494 "parser.tab.c"
    break;

  case 92: /* ConstructorDeclarator: IDENTIFIER '(' ')'  */
#line 304 "parser.y"
                                                                           { Node *n3 = createNode("Identifier", (yyvsp[-2].str), {});Node *n1 = createNode("Separator", (yyvsp[-1].str), {});Node *n2 = createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("ConstructorDeclarator","",{n1,n2,n3}); }
#line 2500 "parser.tab.c"
    break;

  case 93: /* ConstructorBody: '{' ExplicitConstructorInvocation BlockStatements '}'  */
#line 308 "parser.y"
                                                                           { Node *n1 = createNode("Separator", (yyvsp[-3].str), {});Node *n4= createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("ConstructorBody","",{n1,n4,(yyvsp[-2].node),(yyvsp[-1].node)}); }
#line 2506 "parser.tab.c"
    break;

  case 94: /* ConstructorBody: '{' BlockStatements '}'  */
#line 309 "parser.y"
                                                                           { Node *n1 = createNode("Separator", (yyvsp[-2].str), {});Node *n4= createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("ConstructorBody","",{n1,n4,(yyvsp[-1].node)}); }
#line 2512 "parser.tab.c"
    break;

  case 95: /* ConstructorBody: '{' ExplicitConstructorInvocation '}'  */
#line 310 "parser.y"
                                                                           { Node *n1 = createNode("Separator", (yyvsp[-2].str), {});Node *n3= createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("ConstructorBody","",{n1,n3,(yyvsp[-1].node)}); }
#line 2518 "parser.tab.c"
    break;

  case 96: /* ExplicitConstructorInvocation: THIS SINGLE_ArgumentList  */
#line 315 "parser.y"
                                                                           { Node * n1 = createNode("KEYWORD", (yyvsp[-1].str), {});(yyval.node) = createNode("ExplicitConstructorInvocation","", {n1,(yyvsp[0].node)}); }
#line 2524 "parser.tab.c"
    break;

  case 97: /* SINGLE_ArgumentList: '(' ')' ';'  */
#line 319 "parser.y"
                                                       { Node *n1 = createNode("Separator", (yyvsp[-2].str), {});Node *n2 = createNode("Separator", (yyvsp[-1].str), {});Node *n3 = createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("SINGLE_ArgumentList","",{n1,n2,n3});  }
#line 2530 "parser.tab.c"
    break;

  case 98: /* SINGLE_ArgumentList: '(' ArgumentList ')' ';'  */
#line 320 "parser.y"
                                                       { Node *n1 = createNode("Separator", (yyvsp[-3].str), {});Node *n2 = createNode("Separator", (yyvsp[-1].str), {});Node *n3 = createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("SINGLE_ArgumentList","",{n1,n2,n3,(yyvsp[-2].node)});  }
#line 2536 "parser.tab.c"
    break;

  case 99: /* Block: '{' BlockStatements '}'  */
#line 327 "parser.y"
                                             { Node *n1 = createNode("Separator", (yyvsp[-2].str), {});Node *n4= createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("Block","",{n1,n4,(yyvsp[-1].node)}); }
#line 2542 "parser.tab.c"
    break;

  case 100: /* BlockStatements: BlockStatement  */
#line 332 "parser.y"
                                             { (yyval.node) = createNode("BlockStatements", "", {(yyvsp[0].node)}); }
#line 2548 "parser.tab.c"
    break;

  case 101: /* BlockStatements: BlockStatements BlockStatement  */
#line 333 "parser.y"
                                             { (yyval.node) = (yyvsp[-1].node); (yyval.node)->children.push_back((yyvsp[0].node)); }
#line 2554 "parser.tab.c"
    break;

  case 102: /* BlockStatement: LocalVariableDeclarationStatement  */
#line 337 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2560 "parser.tab.c"
    break;

  case 103: /* BlockStatement: ClassDeclaration  */
#line 338 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2566 "parser.tab.c"
    break;

  case 104: /* BlockStatement: Statement  */
#line 339 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2572 "parser.tab.c"
    break;

  case 105: /* LocalVariableDeclarationStatement: LocalVariableDeclaration ';'  */
#line 343 "parser.y"
                                             { Node *n1 = createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("LocalVariableDeclarationStatement","",{n1,(yyvsp[-1].node)}); }
#line 2578 "parser.tab.c"
    break;

  case 106: /* LocalVariableDeclaration: Type VariableDeclaratorList  */
#line 347 "parser.y"
                                             { (yyval.node) = createNode("LocalVariableDeclaration", "", {(yyvsp[-1].node), (yyvsp[0].node)}); }
#line 2584 "parser.tab.c"
    break;

  case 107: /* Statement: StatementWithoutTrailingSubstatement  */
#line 351 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2590 "parser.tab.c"
    break;

  case 108: /* Statement: LabeledStatement  */
#line 352 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2596 "parser.tab.c"
    break;

  case 109: /* Statement: IfThenStatement  */
#line 353 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2602 "parser.tab.c"
    break;

  case 110: /* Statement: IfThenElseStatement  */
#line 354 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2608 "parser.tab.c"
    break;

  case 111: /* Statement: WhileStatement  */
#line 355 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2614 "parser.tab.c"
    break;

  case 112: /* Statement: ForStatement  */
#line 356 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2620 "parser.tab.c"
    break;

  case 113: /* StatementNoShortIf: StatementWithoutTrailingSubstatement  */
#line 360 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2626 "parser.tab.c"
    break;

  case 114: /* StatementNoShortIf: LabeledStatementNoShortIf  */
#line 361 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2632 "parser.tab.c"
    break;

  case 115: /* StatementNoShortIf: IfThenElseStatementNoShortIf  */
#line 362 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2638 "parser.tab.c"
    break;

  case 116: /* StatementNoShortIf: WhileStatementNoShortIf  */
#line 363 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2644 "parser.tab.c"
    break;

  case 117: /* StatementNoShortIf: ForStatementNoShortIf  */
#line 364 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2650 "parser.tab.c"
    break;

  case 118: /* StatementWithoutTrailingSubstatement: Block  */
#line 368 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2656 "parser.tab.c"
    break;

  case 119: /* StatementWithoutTrailingSubstatement: EmptyStatement  */
#line 369 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2662 "parser.tab.c"
    break;

  case 120: /* StatementWithoutTrailingSubstatement: ExpressionStatement  */
#line 370 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2668 "parser.tab.c"
    break;

  case 121: /* StatementWithoutTrailingSubstatement: BreakStatement  */
#line 371 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2674 "parser.tab.c"
    break;

  case 122: /* StatementWithoutTrailingSubstatement: ContinueStatement  */
#line 372 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2680 "parser.tab.c"
    break;

  case 123: /* StatementWithoutTrailingSubstatement: ReturnStatement  */
#line 373 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2686 "parser.tab.c"
    break;

  case 124: /* EmptyStatement: ';'  */
#line 377 "parser.y"
                                             { (yyval.node) = createNode("Separator", (yyvsp[0].str), {}); }
#line 2692 "parser.tab.c"
    break;

  case 125: /* LabeledStatement: IDENTIFIER ':' Statement  */
#line 381 "parser.y"
                                             {  Node *n1 = createNode("Identifier", (yyvsp[-2].str), {});Node *n2 = createNode("Separator", (yyvsp[-1].str), {}); (yyval.node) = createNode("LabeledStatement","", {n1,n2,(yyvsp[0].node)});}
#line 2698 "parser.tab.c"
    break;

  case 126: /* LabeledStatementNoShortIf: IDENTIFIER ':' StatementNoShortIf  */
#line 385 "parser.y"
                                              { Node *n1 = createNode("Identifier", (yyvsp[-2].str), {});Node *n2 = createNode("Separator", (yyvsp[-1].str), {}); (yyval.node) = createNode("LabeledStatementNoShortIf","", {n1,n2,(yyvsp[0].node)}); }
#line 2704 "parser.tab.c"
    break;

  case 127: /* ExpressionStatement: StatementExpression ';'  */
#line 389 "parser.y"
                                              { Node *n1 = createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("ExpressionStatement","",{n1,(yyvsp[-1].node)}); }
#line 2710 "parser.tab.c"
    break;

  case 128: /* StatementExpression: Assignment  */
#line 393 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2716 "parser.tab.c"
    break;

  case 129: /* StatementExpression: PreIncrementExpression  */
#line 394 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2722 "parser.tab.c"
    break;

  case 130: /* StatementExpression: PreDecrementExpression  */
#line 395 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2728 "parser.tab.c"
    break;

  case 131: /* StatementExpression: PostIncrementExpression  */
#line 396 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2734 "parser.tab.c"
    break;

  case 132: /* StatementExpression: PostDecrementExpression  */
#line 397 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2740 "parser.tab.c"
    break;

  case 133: /* StatementExpression: MethodInvocation  */
#line 398 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2746 "parser.tab.c"
    break;

  case 134: /* StatementExpression: ClassInstanceCreationExpression  */
#line 399 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2752 "parser.tab.c"
    break;

  case 135: /* IfThenStatement: IF '(' Expression ')' Statement  */
#line 403 "parser.y"
                                          { Node *n1 = createNode("KEYWORD", (yyvsp[-4].str), {}); Node *n2 = createNode("Separator", (yyvsp[-3].str), {}); Node *n3 = createNode("Separator", (yyvsp[-1].str), {}); (yyval.node)=createNode("IfThenStatement","",{n1,n2,n3,(yyvsp[-2].node),(yyvsp[0].node)});}
#line 2758 "parser.tab.c"
    break;

  case 136: /* IfThenElseStatement: IF '(' Expression ')' StatementNoShortIf ELSE Statement  */
#line 407 "parser.y"
                                                               { Node *n1 = createNode("KEYWORD", (yyvsp[-6].str), {}); Node *n2 = createNode("Separator", (yyvsp[-5].str), {}); Node *n3 = createNode("Separator", (yyvsp[-3].str), {}); Node *n4 = createNode("KEYWORD", (yyvsp[-1].str), {}); (yyval.node)=createNode("IfThenELseStatement","",{n1,n2,n3,n4,(yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node)});}
#line 2764 "parser.tab.c"
    break;

  case 137: /* IfThenElseStatementNoShortIf: IF '(' Expression ')' StatementNoShortIf ELSE StatementNoShortIf  */
#line 411 "parser.y"
                                                                          { Node *n1 = createNode("KEYWORD", (yyvsp[-6].str), {}); Node *n2 = createNode("Separator", (yyvsp[-5].str), {}); Node *n3 = createNode("Separator", (yyvsp[-3].str), {}); Node *n4 = createNode("KEYWORD", (yyvsp[-1].str), {}); (yyval.node)=createNode("IfThenElseStatementNoShortIf","",{n1,n2,n3,n4,(yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node)});}
#line 2770 "parser.tab.c"
    break;

  case 138: /* WhileStatement: WHILE '(' Expression ')' Statement  */
#line 415 "parser.y"
                                                {Node *n1 = createNode("KEYWORD", (yyvsp[-4].str), {}); Node *n2 = createNode("Separator", (yyvsp[-3].str), {}); Node *n3 = createNode("Separator", (yyvsp[-1].str), {}); (yyval.node)=createNode("WhileStatement","",{n1,n2,n3,(yyvsp[-2].node),(yyvsp[0].node)});}
#line 2776 "parser.tab.c"
    break;

  case 139: /* WhileStatementNoShortIf: WHILE '(' Expression ')' StatementNoShortIf  */
#line 419 "parser.y"
                                                                 {Node *n1 = createNode("KEYWORD", (yyvsp[-4].str), {}); Node *n2 = createNode("Separator", (yyvsp[-3].str), {}); Node *n3 = createNode("Separator", (yyvsp[-1].str), {}); (yyval.node)=createNode("WhileStatementNoShortIf","",{n1,n2,n3,(yyvsp[-2].node),(yyvsp[0].node)});}
#line 2782 "parser.tab.c"
    break;

  case 140: /* ForStatement: BasicForStatement  */
#line 423 "parser.y"
                                                 {(yyval.node)=(yyvsp[0].node);}
#line 2788 "parser.tab.c"
    break;

  case 141: /* ForStatement: EnhancedForStatement  */
#line 424 "parser.y"
                                                 {(yyval.node)=(yyvsp[0].node);}
#line 2794 "parser.tab.c"
    break;

  case 142: /* ForStatementNoShortIf: BasicForStatementNoShortIf  */
#line 428 "parser.y"
                                                 {(yyval.node)=(yyvsp[0].node);}
#line 2800 "parser.tab.c"
    break;

  case 143: /* ForStatementNoShortIf: EnhancedForStatementNoShortIf  */
#line 429 "parser.y"
                                                 {(yyval.node)=(yyvsp[0].node);}
#line 2806 "parser.tab.c"
    break;

  case 144: /* BasicForStatement: FOR '(' SINGLE_ForInit ';' SINGLE_Expression ';' SINGLE_ForUpdate ')' Statement  */
#line 433 "parser.y"
                                                                                        { Node *n1 = createNode("KEYWORD", (yyvsp[-8].str), {});Node *n2 = createNode("Separator", (yyvsp[-7].str), {});Node *n4 = createNode("Separator", (yyvsp[-5].str), {});Node *n6 = createNode("Separator", (yyvsp[-3].str), {});Node *n8 = createNode("Separator", (yyvsp[-1].str), {}); (yyval.node)=createNode("BasicForStatement","",{n1,n2,n4,n6,n8,(yyvsp[-6].node),(yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node)}); }
#line 2812 "parser.tab.c"
    break;

  case 145: /* SINGLE_ForInit: %empty  */
#line 437 "parser.y"
                           {(yyval.node)=createNode("SINGLE_ForInit","",{});}
#line 2818 "parser.tab.c"
    break;

  case 146: /* SINGLE_ForInit: ForInit  */
#line 438 "parser.y"
                           {(yyval.node)=(yyvsp[0].node);}
#line 2824 "parser.tab.c"
    break;

  case 147: /* SINGLE_Expression: %empty  */
#line 442 "parser.y"
                           {(yyval.node)=createNode("SINGLE_Expression","",{});}
#line 2830 "parser.tab.c"
    break;

  case 148: /* SINGLE_Expression: Expression  */
#line 443 "parser.y"
                           {(yyval.node)=(yyvsp[0].node);}
#line 2836 "parser.tab.c"
    break;

  case 149: /* SINGLE_ForUpdate: %empty  */
#line 447 "parser.y"
                           {(yyval.node)=createNode("SINGLE_ForUpdate","",{});}
#line 2842 "parser.tab.c"
    break;

  case 150: /* SINGLE_ForUpdate: ForUpdate  */
#line 448 "parser.y"
                           {(yyval.node)=(yyvsp[0].node);}
#line 2848 "parser.tab.c"
    break;

  case 151: /* BasicForStatementNoShortIf: FOR '(' SINGLE_ForInit ';' SINGLE_Expression ';' SINGLE_ForUpdate ')' StatementNoShortIf  */
#line 452 "parser.y"
                                                                                                  {Node *n1 = createNode("KEYWORD", (yyvsp[-8].str), {});Node *n2 = createNode("Separator", (yyvsp[-7].str), {});Node *n4 = createNode("Separator", (yyvsp[-5].str), {});Node *n6 = createNode("Separator", (yyvsp[-3].str), {});Node *n8 = createNode("Separator", (yyvsp[-1].str), {});  (yyval.node)=createNode("BasicForStatementNoShortIf","",{n1,n2,n4,n6,n8,(yyvsp[-6].node),(yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node)}); }
#line 2854 "parser.tab.c"
    break;

  case 152: /* ForInit: StatementExpressionList  */
#line 456 "parser.y"
                                       {(yyval.node)=(yyvsp[0].node);}
#line 2860 "parser.tab.c"
    break;

  case 153: /* ForInit: LocalVariableDeclaration  */
#line 457 "parser.y"
                                       {(yyval.node)=(yyvsp[0].node);}
#line 2866 "parser.tab.c"
    break;

  case 154: /* ForUpdate: StatementExpressionList  */
#line 461 "parser.y"
                                       {(yyval.node)=(yyvsp[0].node);}
#line 2872 "parser.tab.c"
    break;

  case 155: /* StatementExpressionList: StatementExpression  */
#line 465 "parser.y"
                                                        {(yyval.node)=createNode("StatementExpressionList", "", {(yyvsp[0].node)});}
#line 2878 "parser.tab.c"
    break;

  case 156: /* StatementExpressionList: StatementExpressionList ',' StatementExpression  */
#line 466 "parser.y"
                                                        {(yyval.node) = (yyvsp[-2].node); (yyval.node)->children.push_back((yyvsp[0].node));Node *temp1=createNode("Separator",(yyvsp[-1].str),{});(yyval.node)->children.push_back(temp1);}
#line 2884 "parser.tab.c"
    break;

  case 157: /* EnhancedForStatement: FOR '(' Type VariableDeclaratorId ':' Expression ')' Statement  */
#line 470 "parser.y"
                                                                              { Node *n1 = createNode("KEYWORD", (yyvsp[-7].str), {});Node *n2 = createNode("Separator", (yyvsp[-6].str), {});Node *n5 = createNode("Separator", (yyvsp[-3].str), {});Node *n7 = createNode("Separator", (yyvsp[-1].str), {}); (yyval.node)=createNode("EnhancedForStatement","",{n1,n2,(yyvsp[-4].node),n5,n7,(yyvsp[-5].node),(yyvsp[-2].node),(yyvsp[0].node)}); }
#line 2890 "parser.tab.c"
    break;

  case 158: /* EnhancedForStatementNoShortIf: FOR '(' Type VariableDeclaratorId ':' Expression ')' StatementNoShortIf  */
#line 474 "parser.y"
                                                                                    { Node *n1 = createNode("KEYWORD", (yyvsp[-7].str), {});Node *n2 = createNode("Separator", (yyvsp[-6].str), {});Node *n5 = createNode("Separator", (yyvsp[-3].str), {});Node *n7 = createNode("Separator", (yyvsp[-1].str), {});  (yyval.node)=createNode("EnhancedForStatementNoShortIf","",{n1,n2,(yyvsp[-4].node),n5,n7,(yyvsp[-5].node),(yyvsp[-2].node),(yyvsp[0].node)});}
#line 2896 "parser.tab.c"
    break;

  case 159: /* BreakStatement: BREAK IDENTIFIER ';'  */
#line 478 "parser.y"
                                  {Node* n1=createNode("Keyword",(yyvsp[-2].str),{});Node* n2=createNode("Identifier",(yyvsp[-1].str),{});Node* n3=createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("BreakStatement","",{n1,n2,n3});}
#line 2902 "parser.tab.c"
    break;

  case 160: /* BreakStatement: BREAK ';'  */
#line 479 "parser.y"
                                  {Node* n1=createNode("Keyword",(yyvsp[-1].str),{}); Node* n2=createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("BreakStatement","",{n1,n2});}
#line 2908 "parser.tab.c"
    break;

  case 161: /* ContinueStatement: CONTINUE IDENTIFIER ';'  */
#line 483 "parser.y"
                                  {Node* n1=createNode("Keyword",(yyvsp[-2].str),{});Node* n2=createNode("Identifier",(yyvsp[-1].str),{});Node* n3=createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("ContinueStatement","",{n1,n2,n3});}
#line 2914 "parser.tab.c"
    break;

  case 162: /* ContinueStatement: CONTINUE ';'  */
#line 484 "parser.y"
                                  {Node* n1=createNode("Keyword",(yyvsp[-1].str),{}); Node* n2=createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("ContinueStatement","",{n1,n2});}
#line 2920 "parser.tab.c"
    break;

  case 163: /* ReturnStatement: RETURN Expression ';'  */
#line 488 "parser.y"
                                  {Node* n1=createNode("Keyword",(yyvsp[-2].str),{});Node* n3=createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("BreakStatement","",{n1,(yyvsp[-1].node),n3});}
#line 2926 "parser.tab.c"
    break;

  case 164: /* ReturnStatement: RETURN ';'  */
#line 489 "parser.y"
                                  {Node* n1=createNode("Keyword",(yyvsp[-1].str),{}); Node* n2=createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("BreakStatement","",{n1,n2});}
#line 2932 "parser.tab.c"
    break;

  case 165: /* Primary: PrimaryNoNewArray  */
#line 497 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 2938 "parser.tab.c"
    break;

  case 166: /* Primary: ArrayCreationExpression  */
#line 498 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 2944 "parser.tab.c"
    break;

  case 167: /* PrimaryNoNewArray: LITERAL  */
#line 502 "parser.y"
                                                                                    {(yyval.node)=createNode("LITERAL",(yyvsp[0].str),{});}
#line 2950 "parser.tab.c"
    break;

  case 168: /* PrimaryNoNewArray: ClassLiteral  */
#line 503 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 2956 "parser.tab.c"
    break;

  case 169: /* PrimaryNoNewArray: THIS  */
#line 504 "parser.y"
                                                                                    {(yyval.node)=createNode("KEYWORD",(yyvsp[0].str),{});}
#line 2962 "parser.tab.c"
    break;

  case 170: /* PrimaryNoNewArray: TypeName '.' THIS  */
#line 505 "parser.y"
                                                                                    {Node *temp = createNode("KEYWORD",(yyvsp[0].str),{});Node *temp1 = createNode("Separator",(yyvsp[-1].str),{} ); (yyval.node)=createNode("PRIMARYNONEWARRAY","",{(yyvsp[-2].node),temp,temp1});}
#line 2968 "parser.tab.c"
    break;

  case 171: /* PrimaryNoNewArray: '(' Expression ')'  */
#line 506 "parser.y"
                                                                                    {Node *temp = createNode("Separator",(yyvsp[0].str),{});Node *temp1 = createNode("Separator",(yyvsp[-2].str),{} ); (yyval.node)=createNode("PRIMARYNONEWARRAY","",{(yyvsp[-1].node),temp,temp1});}
#line 2974 "parser.tab.c"
    break;

  case 172: /* PrimaryNoNewArray: ClassInstanceCreationExpression  */
#line 507 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 2980 "parser.tab.c"
    break;

  case 173: /* PrimaryNoNewArray: FieldAccess  */
#line 508 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 2986 "parser.tab.c"
    break;

  case 174: /* PrimaryNoNewArray: ArrayAccess  */
#line 509 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 2992 "parser.tab.c"
    break;

  case 175: /* PrimaryNoNewArray: MethodInvocation  */
#line 510 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 2998 "parser.tab.c"
    break;

  case 176: /* PrimaryNoNewArray: MethodReference  */
#line 511 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 3004 "parser.tab.c"
    break;

  case 177: /* PrimaryNoNewArray: STRINGLITERAL  */
#line 512 "parser.y"
                                                                                    {(yyval.node)=createNode("LITERAL",(yyvsp[0].str),{});}
#line 3010 "parser.tab.c"
    break;

  case 178: /* ClassLiteral: TypeName Dims '.' CLASS  */
#line 516 "parser.y"
                                                                                    {Node *temp = createNode("KEYWORD",(yyvsp[0].str),{});Node *temp1 = createNode("Separator",(yyvsp[-1].str),{});
                                                                                      (yyval.node) = createNode("CLASS_LITERAL","",{(yyvsp[-3].node),(yyvsp[-2].node),temp,temp1});}
#line 3017 "parser.tab.c"
    break;

  case 179: /* ClassLiteral: TypeName '.' CLASS  */
#line 518 "parser.y"
                                                                                    {Node *temp = createNode("KEYWORD",(yyvsp[0].str),{});Node *temp1 = createNode("Separator",(yyvsp[-1].str),{});
                                                                                     (yyval.node) = createNode("CLASS_LITERAL","",{(yyvsp[-2].node),temp,temp1});}
#line 3024 "parser.tab.c"
    break;

  case 180: /* ClassLiteral: PrimitiveType Dims '.' CLASS  */
#line 520 "parser.y"
                                                                                    {Node *temp = createNode("KEYWORD",(yyvsp[0].str),{});Node *temp1 = createNode("Separator",(yyvsp[-1].str),{});
                                                                                     (yyval.node) = createNode("CLASS_LITERAL","",{(yyvsp[-3].node),(yyvsp[-2].node),temp,temp1});}
#line 3031 "parser.tab.c"
    break;

  case 181: /* ClassLiteral: PrimitiveType '.' CLASS  */
#line 522 "parser.y"
                                                                                {Node *temp = createNode("KEYWORD",(yyvsp[0].str),{});Node *temp1 = createNode("Separator",(yyvsp[-1].str),{});
                                                                                     (yyval.node) = createNode("CLASS_LITERAL","",{(yyvsp[-2].node),temp,temp1});}
#line 3038 "parser.tab.c"
    break;

  case 182: /* ClassLiteral: VOID '.' CLASS  */
#line 524 "parser.y"
                                                                                    {Node *temp = createNode("KEYWORD",(yyvsp[0].str),{});Node *temp2= createNode("Separator",(yyvsp[-1].str),{});
                                                                                     Node *temp1 = createNode("KEYWORD",(yyvsp[-2].str),{});
                                                                                     (yyval.node) = createNode("CLASS_LITERAL","",{temp1,temp,temp2});}
#line 3046 "parser.tab.c"
    break;

  case 183: /* ClassInstanceCreationExpression: UnqualifiedClassInstanceCreationExpression  */
#line 530 "parser.y"
                                                                                         {(yyval.node)=(yyvsp[0].node);}
#line 3052 "parser.tab.c"
    break;

  case 184: /* ClassInstanceCreationExpression: TypeName '.' UnqualifiedClassInstanceCreationExpression  */
#line 531 "parser.y"
                                                                             {Node *temp1 = createNode("Separator",(yyvsp[-1].str),{});(yyval.node)=createNode("CLASS_INSTANCE","",{(yyvsp[-2].node),(yyvsp[0].node),temp1});}
#line 3058 "parser.tab.c"
    break;

  case 185: /* ClassInstanceCreationExpression: Primary '.' UnqualifiedClassInstanceCreationExpression  */
#line 532 "parser.y"
                                                                                         {Node *temp1 = createNode("Separator",(yyvsp[-1].str),{});(yyval.node)=createNode("CLASS_INSTANCE","",{(yyvsp[-2].node),(yyvsp[0].node),temp1});}
#line 3064 "parser.tab.c"
    break;

  case 186: /* UnqualifiedClassInstanceCreationExpression: NEW TypeName '(' ArgumentList ')'  */
#line 536 "parser.y"
                                                                                        {Node *temp = createNode("KEYWORD",(yyvsp[-4].str),{});
                                                                                        Node *temp1 = createNode("Separator",(yyvsp[-2].str),{});Node *temp2 = createNode("Separator",(yyvsp[0].str),{});(yyval.node) = createNode("unqualifiedClassInstance","",{temp,(yyvsp[-3].node),(yyvsp[-1].node),temp1,temp2});}
#line 3071 "parser.tab.c"
    break;

  case 187: /* UnqualifiedClassInstanceCreationExpression: NEW TypeName '(' ArgumentList ')' ClassBody  */
#line 538 "parser.y"
                                                                                        {Node *temp = createNode("KEYWORD",(yyvsp[-5].str),{});Node *temp1 = createNode("Separator",(yyvsp[-3].str),{});Node *temp2= createNode("Separator",(yyvsp[-1].str),{});
                                                                                        (yyval.node) = createNode("unqualifiedClassInstance","",{temp,(yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node),temp1,temp2});}
#line 3078 "parser.tab.c"
    break;

  case 188: /* UnqualifiedClassInstanceCreationExpression: NEW TypeName '(' ')' ClassBody  */
#line 540 "parser.y"
                                                                                        {Node *temp = createNode("KEYWORD",(yyvsp[-4].str),{});Node *temp1 = createNode("Separator",(yyvsp[-2].str),{});Node *temp2 = createNode("Separator",(yyvsp[-1].str),{});
                            
                                                                                        (yyval.node) = createNode("unqualifiedClassInstance","",{temp,(yyvsp[-3].node),temp1,(yyvsp[0].node),temp2});}
#line 3086 "parser.tab.c"
    break;

  case 189: /* UnqualifiedClassInstanceCreationExpression: NEW TypeName '(' ')'  */
#line 543 "parser.y"
                                                                                        {Node *temp = createNode("KEYWORD",(yyvsp[-3].str),{});
                                                                                        Node *temp1 = createNode("Separator",(yyvsp[-1].str),{});Node *temp2 = createNode("Separator",(yyvsp[0].str),{});
                                                                                        (yyval.node) = createNode("unqualifiedClassInstance","",{temp,(yyvsp[-2].node),temp1,temp2});}
#line 3094 "parser.tab.c"
    break;

  case 190: /* FieldAccess: Primary '.' IDENTIFIER  */
#line 549 "parser.y"
                                                                                       {Node *temp = createNode("Identifier",(yyvsp[0].str),{});Node *temp1 = createNode("Separator",(yyvsp[-1].str),{});
                                                                                        (yyval.node) = createNode("FIELDACC","",{(yyvsp[-2].node),temp,temp1});}
#line 3101 "parser.tab.c"
    break;

  case 191: /* ArrayAccess: TypeName '[' Expression ']'  */
#line 554 "parser.y"
                                                           {Node *temp1 = createNode("Separator",(yyvsp[-2].str),{});Node *temp2 = createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("ARRAY","",{(yyvsp[-3].node),(yyvsp[-1].node),temp1,temp2});}
#line 3107 "parser.tab.c"
    break;

  case 192: /* ArrayAccess: PrimaryNoNewArray '[' Expression ']'  */
#line 555 "parser.y"
                                                                                       {Node *temp1 = createNode("Separator",(yyvsp[-2].str),{});Node *temp2 = createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("ARRAY","",{(yyvsp[-3].node),(yyvsp[-1].node),temp1,temp2});}
#line 3113 "parser.tab.c"
    break;

  case 193: /* MethodInvocation: IDENTIFIER '(' ArgumentList ')'  */
#line 559 "parser.y"
                                                                                       {Node *temp = createNode("Identifier",(yyvsp[-3].str),{});Node *temp1 = createNode("Separator",(yyvsp[-2].str),{});Node *temp2 = createNode("Separator",(yyvsp[0].str),{});
                                                                                        (yyval.node)=createNode("METHODINVOCATION","",{temp,(yyvsp[-1].node),temp1,temp2});}
#line 3120 "parser.tab.c"
    break;

  case 194: /* MethodInvocation: IDENTIFIER '(' ')'  */
#line 561 "parser.y"
                                                                                       {Node *temp = createNode("Identifier",(yyvsp[-2].str),{});Node *temp3 = createNode("Separator",(yyvsp[-1].str),{});Node *temp2 = createNode("Separator",(yyvsp[0].str),{});
                                                                                       
                                                                                        (yyval.node)=createNode("METHODINVOCATION","",{temp,temp2,temp3});}
#line 3128 "parser.tab.c"
    break;

  case 195: /* MethodInvocation: TypeName '.' IDENTIFIER '(' ArgumentList ')'  */
#line 565 "parser.y"
                                                                                       {Node *temp = createNode("Identifier",(yyvsp[-3].str),{});Node *temp1 = createNode("Separator",(yyvsp[-4].str),{});Node *temp2 = createNode("Separator",(yyvsp[-2].str),{});Node *temp3 = createNode("Separator",(yyvsp[0].str),{});
                                                                                        (yyval.node)=createNode("METHODINVOCATION","",{(yyvsp[-5].node),temp,(yyvsp[-1].node),temp1,temp2,temp3});}
#line 3135 "parser.tab.c"
    break;

  case 196: /* MethodInvocation: TypeName '.' IDENTIFIER '(' ')'  */
#line 568 "parser.y"
                                                                                        {Node *temp = createNode("Identifier",(yyvsp[-2].str),{});Node *temp3= createNode("Separator",(yyvsp[-3].str),{});Node *temp4= createNode("Separator",(yyvsp[-1].str),{});Node *temp5 = createNode("Separator",(yyvsp[0].str),{});
                                                                                        Node *temp1 = createNode("METHODINVOCATION","",{temp,temp3,temp4,(yyvsp[-4].node),temp5});
                                                                                        (yyval.node)=createNode("METHODINVOCATION","",{(yyvsp[-4].node),temp,temp1,temp3,temp4});}
#line 3143 "parser.tab.c"
    break;

  case 197: /* MethodInvocation: Primary '.' IDENTIFIER '(' ArgumentList ')'  */
#line 571 "parser.y"
                                                                                         {Node *temp = createNode("Identifier",(yyvsp[-3].str),{});Node *temp1 = createNode("Separator",(yyvsp[-4].str),{});Node *temp2 = createNode("Separator",(yyvsp[-2].str),{});Node *temp3 = createNode("Separator",(yyvsp[0].str),{});
                                                                                        (yyval.node)=createNode("METHODINVOCATION","",{(yyvsp[-5].node),temp,(yyvsp[-1].node),temp1,temp2,temp3});}
#line 3150 "parser.tab.c"
    break;

  case 198: /* MethodInvocation: Primary '.' IDENTIFIER '(' ')'  */
#line 573 "parser.y"
                                                                                        {Node *temp = createNode("Identifier",(yyvsp[-2].str),{});Node *temp3= createNode("Separator",(yyvsp[-3].str),{});Node *temp4= createNode("Separator",(yyvsp[-1].str),{});Node *temp5 = createNode("Separator",(yyvsp[0].str),{});
                                                                                        Node *temp1 = createNode("METHODINVOCATION","",{temp,temp3,temp4,temp5,(yyvsp[-4].node)});}
#line 3157 "parser.tab.c"
    break;

  case 199: /* ArgumentList: ArgumentList ',' Expression  */
#line 578 "parser.y"
                                                                                       {Node *temp = createNode("Separator",(yyvsp[-1].str),{}); (yyvsp[-2].node)->children.push_back((yyvsp[0].node)); (yyvsp[-2].node)->children.push_back(temp);(yyval.node) = (yyvsp[-2].node);}
#line 3163 "parser.tab.c"
    break;

  case 200: /* ArgumentList: Expression  */
#line 579 "parser.y"
                                                                                       {(yyval.node) = createNode("ARGLIST","", {(yyvsp[0].node)}); }
#line 3169 "parser.tab.c"
    break;

  case 201: /* MethodReference: TypeName PROPORTION IDENTIFIER  */
#line 583 "parser.y"
                                             {Node *temp = createNode("Identifier",(yyvsp[0].str),{});Node *temp1 = createNode("KEYWORD",(yyvsp[-1].str),{});
                                                                                         (yyval.node) = createNode("METHOD_REF","",{(yyvsp[-2].node),temp,temp1});}
#line 3176 "parser.tab.c"
    break;

  case 202: /* MethodReference: ArrayType PROPORTION IDENTIFIER  */
#line 585 "parser.y"
                                                                                        {Node *temp = createNode("Identifier",(yyvsp[0].str),{});Node *temp1 = createNode("KEYWORD",(yyvsp[-1].str),{});
                                                                                         (yyval.node) = createNode("METHOD_REF","",{(yyvsp[-2].node),temp,temp1});}
#line 3183 "parser.tab.c"
    break;

  case 203: /* MethodReference: Primary PROPORTION IDENTIFIER  */
#line 587 "parser.y"
                                                                                        {Node *temp = createNode("Identifier",(yyvsp[0].str),{});Node *temp1 = createNode("KEYWORD",(yyvsp[-1].str),{});
                                                                                         (yyval.node) = createNode("METHOD_REF","",{(yyvsp[-2].node),temp,temp1});}
#line 3190 "parser.tab.c"
    break;

  case 204: /* MethodReference: TypeName PROPORTION NEW  */
#line 589 "parser.y"
                                                                  {Node *temp = createNode("KEYWORD",(yyvsp[0].str),{});Node *temp1 = createNode("KEYWORD",(yyvsp[-1].str),{});
                                                                                         (yyval.node) = createNode("METHOD_REF","",{(yyvsp[-2].node),temp,temp1});}
#line 3197 "parser.tab.c"
    break;

  case 205: /* MethodReference: ArrayType PROPORTION NEW  */
#line 591 "parser.y"
                                                                                        {Node *temp = createNode("KEYWORD",(yyvsp[0].str),{});Node *temp1 = createNode("KEYWORD",(yyvsp[-1].str),{});
                                                                                         (yyval.node) = createNode("METHOD_REF","",{(yyvsp[-2].node),temp,temp1});}
#line 3204 "parser.tab.c"
    break;

  case 206: /* ArrayCreationExpression: NEW PrimitiveType DimExprs Dims  */
#line 596 "parser.y"
                                                                                        {Node *temp = createNode("KEYWORD",(yyvsp[-3].str),{});
                                                                                         (yyval.node) = createNode("ARRAY_CREATION","",{temp,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)});}
#line 3211 "parser.tab.c"
    break;

  case 207: /* ArrayCreationExpression: NEW PrimitiveType DimExprs  */
#line 598 "parser.y"
                                                                                        {Node *temp = createNode("KEYWORD",(yyvsp[-2].str),{});
                                                                                         (yyval.node) = createNode("ARRAY_CREATION","",{temp,(yyvsp[-1].node),(yyvsp[0].node)});}
#line 3218 "parser.tab.c"
    break;

  case 208: /* ArrayCreationExpression: NEW TypeName DimExprs Dims  */
#line 600 "parser.y"
                                                                 {Node *temp = createNode("KEYWORD",(yyvsp[-3].str),{});
                                                                                         (yyval.node) = createNode("ARRAY_CREATION","",{temp,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)});}
#line 3225 "parser.tab.c"
    break;

  case 209: /* ArrayCreationExpression: NEW TypeName DimExprs  */
#line 602 "parser.y"
                                                                 {Node *temp = createNode("KEYWORD",(yyvsp[-2].str),{});
                                                                                         (yyval.node) = createNode("ARRAY_CREATION","",{temp,(yyvsp[-1].node),(yyvsp[0].node)});}
#line 3232 "parser.tab.c"
    break;

  case 210: /* ArrayCreationExpression: NEW PrimitiveType Dims ArrayInitializer  */
#line 604 "parser.y"
                                                                                        {Node *temp = createNode("KEYWORD",(yyvsp[-3].str),{});
                                                                                         (yyval.node) = createNode("ARRAY_CREATION","",{temp,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)});}
#line 3239 "parser.tab.c"
    break;

  case 211: /* ArrayCreationExpression: NEW TypeName Dims ArrayInitializer  */
#line 606 "parser.y"
                                                                 {Node *temp = createNode("KEYWORD",(yyvsp[-3].str),{});
                                                                                         (yyval.node) = createNode("ARRAY_CREATION","",{temp,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)});}
#line 3246 "parser.tab.c"
    break;

  case 212: /* DimExprs: DimExpr  */
#line 611 "parser.y"
                                                                                        {(yyval.node) = createNode("DIMEXPR","", {(yyvsp[0].node)}); }
#line 3252 "parser.tab.c"
    break;

  case 213: /* DimExprs: DimExprs DimExpr  */
#line 612 "parser.y"
                                                                                        {(yyvsp[-1].node)->children.push_back((yyvsp[0].node)); (yyval.node) = (yyvsp[-1].node); }
#line 3258 "parser.tab.c"
    break;

  case 214: /* DimExpr: '[' Expression ']'  */
#line 616 "parser.y"
                                                                                        {Node *temp2=createNode("Separator",(yyvsp[-2].str),{});Node *temp1=createNode("Separator",(yyvsp[0].str),{});(yyval.node) = createNode("DimExpr","", {temp1,temp2,(yyvsp[-1].node)});}
#line 3264 "parser.tab.c"
    break;

  case 215: /* Expression: AssignmentExpression  */
#line 620 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3270 "parser.tab.c"
    break;

  case 216: /* AssignmentExpression: ConditionalExpression  */
#line 624 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3276 "parser.tab.c"
    break;

  case 217: /* AssignmentExpression: Assignment  */
#line 625 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3282 "parser.tab.c"
    break;

  case 218: /* Assignment: LeftHandSide AssignmentOperator Expression  */
#line 629 "parser.y"
                                                                                        {(yyvsp[-1].node)->children={(yyvsp[-2].node),(yyvsp[0].node)};(yyval.node)=(yyvsp[-1].node);}
#line 3288 "parser.tab.c"
    break;

  case 219: /* Assignment: TypeName AssignmentOperator Expression  */
#line 630 "parser.y"
                                                            {(yyvsp[-1].node)->children={(yyvsp[-2].node),(yyvsp[0].node)};(yyval.node)=(yyvsp[-1].node);}
#line 3294 "parser.tab.c"
    break;

  case 220: /* LeftHandSide: FieldAccess  */
#line 634 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3300 "parser.tab.c"
    break;

  case 221: /* LeftHandSide: ArrayAccess  */
#line 635 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3306 "parser.tab.c"
    break;

  case 222: /* AssignmentOperator: '='  */
#line 639 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[0].str),{});}
#line 3312 "parser.tab.c"
    break;

  case 223: /* AssignmentOperator: MUL_ASSIGN  */
#line 640 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[0].str),{});}
#line 3318 "parser.tab.c"
    break;

  case 224: /* AssignmentOperator: DIV_ASSIGN  */
#line 641 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[0].str),{});}
#line 3324 "parser.tab.c"
    break;

  case 225: /* AssignmentOperator: MOD_ASSIGN  */
#line 642 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[0].str),{});}
#line 3330 "parser.tab.c"
    break;

  case 226: /* AssignmentOperator: ADD_ASSIGN  */
#line 643 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[0].str),{});}
#line 3336 "parser.tab.c"
    break;

  case 227: /* AssignmentOperator: SUB_ASSIGN  */
#line 644 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[0].str),{});}
#line 3342 "parser.tab.c"
    break;

  case 228: /* AssignmentOperator: LEFT_ASSIGN  */
#line 645 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[0].str),{});}
#line 3348 "parser.tab.c"
    break;

  case 229: /* AssignmentOperator: RIGHT_ASSIGN  */
#line 646 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[0].str),{});}
#line 3354 "parser.tab.c"
    break;

  case 230: /* AssignmentOperator: UNSIGNED_RIGHT_ASSIGN  */
#line 647 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[0].str),{});}
#line 3360 "parser.tab.c"
    break;

  case 231: /* AssignmentOperator: AND_ASSIGN  */
#line 648 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[0].str),{});}
#line 3366 "parser.tab.c"
    break;

  case 232: /* AssignmentOperator: XOR_ASSIGN  */
#line 649 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[0].str),{});}
#line 3372 "parser.tab.c"
    break;

  case 233: /* AssignmentOperator: OR_ASSIGN  */
#line 650 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[0].str),{});}
#line 3378 "parser.tab.c"
    break;

  case 234: /* ConditionalExpression: ConditionalOrExpression  */
#line 654 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3384 "parser.tab.c"
    break;

  case 235: /* ConditionalExpression: ConditionalOrExpression '?' Expression ':' ConditionalExpression  */
#line 655 "parser.y"
                                                                                        {Node *temp1=createNode("Separator",(yyvsp[-3].str),{});Node *temp2=createNode("Separator",(yyvsp[-1].str),{});(yyval.node)=createNode("BRANCH","",{(yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node),temp1,temp2});}
#line 3390 "parser.tab.c"
    break;

  case 236: /* ConditionalOrExpression: ConditionalAndExpression  */
#line 659 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3396 "parser.tab.c"
    break;

  case 237: /* ConditionalOrExpression: ConditionalOrExpression OR_OP ConditionalAndExpression  */
#line 660 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3402 "parser.tab.c"
    break;

  case 238: /* ConditionalAndExpression: InclusiveOrExpression  */
#line 664 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3408 "parser.tab.c"
    break;

  case 239: /* ConditionalAndExpression: ConditionalAndExpression AND_OP InclusiveOrExpression  */
#line 665 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3414 "parser.tab.c"
    break;

  case 240: /* InclusiveOrExpression: ExclusiveOrExpression  */
#line 669 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3420 "parser.tab.c"
    break;

  case 241: /* InclusiveOrExpression: InclusiveOrExpression '|' ExclusiveOrExpression  */
#line 670 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3426 "parser.tab.c"
    break;

  case 242: /* ExclusiveOrExpression: AndExpression  */
#line 674 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3432 "parser.tab.c"
    break;

  case 243: /* ExclusiveOrExpression: ExclusiveOrExpression '^' AndExpression  */
#line 675 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3438 "parser.tab.c"
    break;

  case 244: /* AndExpression: EqualityExpression  */
#line 679 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3444 "parser.tab.c"
    break;

  case 245: /* AndExpression: AndExpression '&' EqualityExpression  */
#line 680 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3450 "parser.tab.c"
    break;

  case 246: /* EqualityExpression: RelationalExpression  */
#line 684 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3456 "parser.tab.c"
    break;

  case 247: /* EqualityExpression: EqualityExpression EQ_OP RelationalExpression  */
#line 685 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3462 "parser.tab.c"
    break;

  case 248: /* EqualityExpression: EqualityExpression NE_OP RelationalExpression  */
#line 686 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3468 "parser.tab.c"
    break;

  case 249: /* RelationalExpression: ShiftExpression  */
#line 690 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3474 "parser.tab.c"
    break;

  case 250: /* RelationalExpression: RelationalExpression '<' ShiftExpression  */
#line 691 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3480 "parser.tab.c"
    break;

  case 251: /* RelationalExpression: RelationalExpression '>' ShiftExpression  */
#line 692 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3486 "parser.tab.c"
    break;

  case 252: /* RelationalExpression: RelationalExpression LE_OP ShiftExpression  */
#line 693 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3492 "parser.tab.c"
    break;

  case 253: /* RelationalExpression: RelationalExpression GE_OP ShiftExpression  */
#line 694 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3498 "parser.tab.c"
    break;

  case 254: /* RelationalExpression: RelationalExpression INSTANCEOF ReferenceType  */
#line 695 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3504 "parser.tab.c"
    break;

  case 255: /* ShiftExpression: AdditiveExpression  */
#line 699 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3510 "parser.tab.c"
    break;

  case 256: /* ShiftExpression: ShiftExpression LEFT_OP AdditiveExpression  */
#line 700 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3516 "parser.tab.c"
    break;

  case 257: /* ShiftExpression: ShiftExpression RIGHT_OP AdditiveExpression  */
#line 701 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3522 "parser.tab.c"
    break;

  case 258: /* ShiftExpression: ShiftExpression UNSIGNED_RIGHT_OP AdditiveExpression  */
#line 702 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3528 "parser.tab.c"
    break;

  case 259: /* AdditiveExpression: MultiplicativeExpression  */
#line 706 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3534 "parser.tab.c"
    break;

  case 260: /* AdditiveExpression: AdditiveExpression '+' MultiplicativeExpression  */
#line 707 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3540 "parser.tab.c"
    break;

  case 261: /* AdditiveExpression: AdditiveExpression '-' MultiplicativeExpression  */
#line 708 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3546 "parser.tab.c"
    break;

  case 262: /* MultiplicativeExpression: UnaryExpression  */
#line 712 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3552 "parser.tab.c"
    break;

  case 263: /* MultiplicativeExpression: MultiplicativeExpression '*' UnaryExpression  */
#line 713 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3558 "parser.tab.c"
    break;

  case 264: /* MultiplicativeExpression: MultiplicativeExpression '/' UnaryExpression  */
#line 714 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3564 "parser.tab.c"
    break;

  case 265: /* MultiplicativeExpression: MultiplicativeExpression '%' UnaryExpression  */
#line 715 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3570 "parser.tab.c"
    break;

  case 266: /* UnaryExpression: PreIncrementExpression  */
#line 719 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3576 "parser.tab.c"
    break;

  case 267: /* UnaryExpression: PreDecrementExpression  */
#line 720 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3582 "parser.tab.c"
    break;

  case 268: /* UnaryExpression: '+' UnaryExpression  */
#line 721 "parser.y"
                                                                                        {Node * temp = createNode("operator",(yyvsp[-1].str),{});
                                                                                         (yyval.node)=createNode("unaryOperator","",{temp,(yyvsp[0].node)});}
#line 3589 "parser.tab.c"
    break;

  case 269: /* UnaryExpression: '-' UnaryExpression  */
#line 723 "parser.y"
                                                                                        {Node * temp = createNode("operator",(yyvsp[-1].str),{});
                                                                                         (yyval.node)=createNode("unaryOperator","",{temp,(yyvsp[0].node)});}
#line 3596 "parser.tab.c"
    break;

  case 270: /* UnaryExpression: UnaryExpressionNotPlusMinus  */
#line 725 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3602 "parser.tab.c"
    break;

  case 271: /* PreIncrementExpression: INC_OP UnaryExpression  */
#line 729 "parser.y"
                                                                                        {Node * temp = createNode("operator",(yyvsp[-1].str),{});
                                                                                         (yyval.node)=createNode("unaryOperator","",{temp,(yyvsp[0].node)});}
#line 3609 "parser.tab.c"
    break;

  case 272: /* PreDecrementExpression: DEC_OP UnaryExpression  */
#line 734 "parser.y"
                                                                                        {Node * temp = createNode("operator",(yyvsp[-1].str),{});
                                                                                         (yyval.node)=createNode("unaryOperator","",{temp,(yyvsp[0].node)});}
#line 3616 "parser.tab.c"
    break;

  case 273: /* UnaryExpressionNotPlusMinus: PostfixExpression  */
#line 739 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3622 "parser.tab.c"
    break;

  case 274: /* UnaryExpressionNotPlusMinus: '~' UnaryExpression  */
#line 740 "parser.y"
                                                                                        {Node * temp = createNode("operator",(yyvsp[-1].str),{});
                                                                                         (yyval.node)=createNode("unaryOperator","",{temp,(yyvsp[0].node)});}
#line 3629 "parser.tab.c"
    break;

  case 275: /* UnaryExpressionNotPlusMinus: '!' UnaryExpression  */
#line 742 "parser.y"
                                                                                        {Node * temp = createNode("operator",(yyvsp[-1].str),{});
                                                                                         (yyval.node)=createNode("unaryOperator","",{temp,(yyvsp[0].node)});}
#line 3636 "parser.tab.c"
    break;

  case 276: /* UnaryExpressionNotPlusMinus: CastExpression  */
#line 744 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3642 "parser.tab.c"
    break;

  case 277: /* PostfixExpression: Primary  */
#line 748 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3648 "parser.tab.c"
    break;

  case 278: /* PostfixExpression: TypeName  */
#line 749 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3654 "parser.tab.c"
    break;

  case 279: /* PostfixExpression: PostIncrementExpression  */
#line 750 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3660 "parser.tab.c"
    break;

  case 280: /* PostfixExpression: PostDecrementExpression  */
#line 751 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3666 "parser.tab.c"
    break;

  case 281: /* PostIncrementExpression: PostfixExpression INC_OP  */
#line 755 "parser.y"
                                                                                        {Node * temp = createNode("operator",(yyvsp[0].str),{});
                                                                                         (yyval.node)=createNode("unaryOperator","",{(yyvsp[-1].node),temp});}
#line 3673 "parser.tab.c"
    break;

  case 282: /* PostDecrementExpression: PostfixExpression DEC_OP  */
#line 760 "parser.y"
                                                                                        {Node * temp = createNode("operator",(yyvsp[0].str),{});
                                                                                         (yyval.node)=createNode("unaryOperator","",{(yyvsp[-1].node),temp});}
#line 3680 "parser.tab.c"
    break;

  case 283: /* CastExpression: '(' PrimitiveType ')' UnaryExpression  */
#line 765 "parser.y"
                                                                                        {Node * temp1 = createNode("Separator",(yyvsp[-3].str),{});Node * temp3 = createNode("Separator",(yyvsp[-1].str),{});(yyval.node)=createNode("TYPECAST","",{(yyvsp[-2].node),(yyvsp[0].node),temp1,temp3});}
#line 3686 "parser.tab.c"
    break;


#line 3690 "parser.tab.c"

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

#line 771 "parser.y"




int counter=2;
void dfs(Node* head, int head_num){
    for(Node* u:head->children){

        string temp = (u->value)[0]=='"' ? "\\"+(u->value).substr(0,(u->value).size()-1)+"\\\"" : u->value;
    
        string val =  (u->value).empty() ? u->label : u->label+"__"+u->value;
        string shape =  ", shape = ellipse" ;
        // string color = ", color=lightblue style=filled";
        cout << counter << " [label = \""+val+"\""+shape+"];\n";
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
    // string shape = (root->value).empty() ? ", shape = box" : "";
    string color = (root->value).empty() ? "" : ", color=lightblue, style=filled";
    cout << "1 [label = \""+val+"\""+color+"];\n";
    dfs(root,1);
    cout << "}";
}




int main (void) {
    yyparse();

    generate_dot();

    return 1;
}

void yyerror (const char *s) {cerr<<"Line "<<line<<": "<<s;}
