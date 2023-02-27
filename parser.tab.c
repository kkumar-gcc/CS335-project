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
  YYSYMBOL_29_ = 29,                       /* '='  */
  YYSYMBOL_ADD_ASSIGN = 30,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 31,                /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 32,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 33,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 34,                /* MOD_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 35,                /* AND_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 36,                 /* OR_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 37,                /* XOR_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 38,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 39,              /* RIGHT_ASSIGN  */
  YYSYMBOL_UNSIGNED_RIGHT_ASSIGN = 40,     /* UNSIGNED_RIGHT_ASSIGN  */
  YYSYMBOL_41_ = 41,                       /* '?'  */
  YYSYMBOL_42_ = 42,                       /* ':'  */
  YYSYMBOL_OR_OP = 43,                     /* OR_OP  */
  YYSYMBOL_AND_OP = 44,                    /* AND_OP  */
  YYSYMBOL_45_ = 45,                       /* '|'  */
  YYSYMBOL_46_ = 46,                       /* '^'  */
  YYSYMBOL_47_ = 47,                       /* '&'  */
  YYSYMBOL_NE_OP = 48,                     /* NE_OP  */
  YYSYMBOL_EQ_OP = 49,                     /* EQ_OP  */
  YYSYMBOL_50_ = 50,                       /* '<'  */
  YYSYMBOL_51_ = 51,                       /* '>'  */
  YYSYMBOL_GE_OP = 52,                     /* GE_OP  */
  YYSYMBOL_LE_OP = 53,                     /* LE_OP  */
  YYSYMBOL_INSTANCEOF = 54,                /* INSTANCEOF  */
  YYSYMBOL_LEFT_OP = 55,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 56,                  /* RIGHT_OP  */
  YYSYMBOL_UNSIGNED_RIGHT_OP = 57,         /* UNSIGNED_RIGHT_OP  */
  YYSYMBOL_58_ = 58,                       /* '+'  */
  YYSYMBOL_59_ = 59,                       /* '-'  */
  YYSYMBOL_60_ = 60,                       /* '*'  */
  YYSYMBOL_61_ = 61,                       /* '/'  */
  YYSYMBOL_62_ = 62,                       /* '%'  */
  YYSYMBOL_NEW = 63,                       /* NEW  */
  YYSYMBOL_INC_OP = 64,                    /* INC_OP  */
  YYSYMBOL_DEC_OP = 65,                    /* DEC_OP  */
  YYSYMBOL_66_ = 66,                       /* '!'  */
  YYSYMBOL_67_ = 67,                       /* '~'  */
  YYSYMBOL_68_ = 68,                       /* '('  */
  YYSYMBOL_69_ = 69,                       /* ')'  */
  YYSYMBOL_70_ = 70,                       /* '{'  */
  YYSYMBOL_71_ = 71,                       /* '}'  */
  YYSYMBOL_72_ = 72,                       /* '['  */
  YYSYMBOL_73_ = 73,                       /* ']'  */
  YYSYMBOL_74_ = 74,                       /* '.'  */
  YYSYMBOL_75_ = 75,                       /* ','  */
  YYSYMBOL_76_ = 76,                       /* ';'  */
  YYSYMBOL_ELLIPSIS = 77,                  /* ELLIPSIS  */
  YYSYMBOL_PROPORTION = 78,                /* PROPORTION  */
  YYSYMBOL_PTR_OP = 79,                    /* PTR_OP  */
  YYSYMBOL_YYACCEPT = 80,                  /* $accept  */
  YYSYMBOL_CompilationUnit = 81,           /* CompilationUnit  */
  YYSYMBOL_PackageDeclaration = 82,        /* PackageDeclaration  */
  YYSYMBOL_MULTI_TypeDeclaration = 83,     /* MULTI_TypeDeclaration  */
  YYSYMBOL_TypeDeclaration = 84,           /* TypeDeclaration  */
  YYSYMBOL_TypeName = 85,                  /* TypeName  */
  YYSYMBOL_Type = 86,                      /* Type  */
  YYSYMBOL_PrimitiveType = 87,             /* PrimitiveType  */
  YYSYMBOL_NumericType = 88,               /* NumericType  */
  YYSYMBOL_IntegralType = 89,              /* IntegralType  */
  YYSYMBOL_FloatingPointType = 90,         /* FloatingPointType  */
  YYSYMBOL_ReferenceType = 91,             /* ReferenceType  */
  YYSYMBOL_ArrayType = 92,                 /* ArrayType  */
  YYSYMBOL_Dims = 93,                      /* Dims  */
  YYSYMBOL_ArrayInitializer = 94,          /* ArrayInitializer  */
  YYSYMBOL_VariableInitializerList = 95,   /* VariableInitializerList  */
  YYSYMBOL_ClassDeclaration = 96,          /* ClassDeclaration  */
  YYSYMBOL_NormalClassDeclaration = 97,    /* NormalClassDeclaration  */
  YYSYMBOL_ClassBody = 98,                 /* ClassBody  */
  YYSYMBOL_MULTI_ClassBodyDeclaration = 99, /* MULTI_ClassBodyDeclaration  */
  YYSYMBOL_ClassBodyDeclaration = 100,     /* ClassBodyDeclaration  */
  YYSYMBOL_ClassMemberDeclaration = 101,   /* ClassMemberDeclaration  */
  YYSYMBOL_FieldDeclaration = 102,         /* FieldDeclaration  */
  YYSYMBOL_MULTI_ClassModifier = 103,      /* MULTI_ClassModifier  */
  YYSYMBOL_ClassModifier = 104,            /* ClassModifier  */
  YYSYMBOL_VariableDeclaratorList = 105,   /* VariableDeclaratorList  */
  YYSYMBOL_VariableDeclarator = 106,       /* VariableDeclarator  */
  YYSYMBOL_VariableDeclaratorId = 107,     /* VariableDeclaratorId  */
  YYSYMBOL_VariableInitializer = 108,      /* VariableInitializer  */
  YYSYMBOL_MethodDeclaration = 109,        /* MethodDeclaration  */
  YYSYMBOL_MethodHeader = 110,             /* MethodHeader  */
  YYSYMBOL_MethodDeclarator = 111,         /* MethodDeclarator  */
  YYSYMBOL_FormalParameterList = 112,      /* FormalParameterList  */
  YYSYMBOL_FormalParameters = 113,         /* FormalParameters  */
  YYSYMBOL_FormalParameter = 114,          /* FormalParameter  */
  YYSYMBOL_LastFormalParameter = 115,      /* LastFormalParameter  */
  YYSYMBOL_ReceiverParameter = 116,        /* ReceiverParameter  */
  YYSYMBOL_MethodBody = 117,               /* MethodBody  */
  YYSYMBOL_StaticInitializer = 118,        /* StaticInitializer  */
  YYSYMBOL_ConstructorDeclaration = 119,   /* ConstructorDeclaration  */
  YYSYMBOL_ConstructorDeclarator = 120,    /* ConstructorDeclarator  */
  YYSYMBOL_ConstructorBody = 121,          /* ConstructorBody  */
  YYSYMBOL_ExplicitConstructorInvocation = 122, /* ExplicitConstructorInvocation  */
  YYSYMBOL_SINGLE_ArgumentList = 123,      /* SINGLE_ArgumentList  */
  YYSYMBOL_Block = 124,                    /* Block  */
  YYSYMBOL_BlockStatements = 125,          /* BlockStatements  */
  YYSYMBOL_BlockStatement = 126,           /* BlockStatement  */
  YYSYMBOL_LocalVariableDeclarationStatement = 127, /* LocalVariableDeclarationStatement  */
  YYSYMBOL_LocalVariableDeclaration = 128, /* LocalVariableDeclaration  */
  YYSYMBOL_Statement = 129,                /* Statement  */
  YYSYMBOL_StatementNoShortIf = 130,       /* StatementNoShortIf  */
  YYSYMBOL_StatementWithoutTrailingSubstatement = 131, /* StatementWithoutTrailingSubstatement  */
  YYSYMBOL_EmptyStatement = 132,           /* EmptyStatement  */
  YYSYMBOL_LabeledStatement = 133,         /* LabeledStatement  */
  YYSYMBOL_LabeledStatementNoShortIf = 134, /* LabeledStatementNoShortIf  */
  YYSYMBOL_ExpressionStatement = 135,      /* ExpressionStatement  */
  YYSYMBOL_StatementExpression = 136,      /* StatementExpression  */
  YYSYMBOL_IfThenStatement = 137,          /* IfThenStatement  */
  YYSYMBOL_IfThenElseStatement = 138,      /* IfThenElseStatement  */
  YYSYMBOL_IfThenElseStatementNoShortIf = 139, /* IfThenElseStatementNoShortIf  */
  YYSYMBOL_WhileStatement = 140,           /* WhileStatement  */
  YYSYMBOL_WhileStatementNoShortIf = 141,  /* WhileStatementNoShortIf  */
  YYSYMBOL_ForStatement = 142,             /* ForStatement  */
  YYSYMBOL_ForStatementNoShortIf = 143,    /* ForStatementNoShortIf  */
  YYSYMBOL_BasicForStatement = 144,        /* BasicForStatement  */
  YYSYMBOL_SINGLE_ForInit = 145,           /* SINGLE_ForInit  */
  YYSYMBOL_SINGLE_Expression = 146,        /* SINGLE_Expression  */
  YYSYMBOL_SINGLE_ForUpdate = 147,         /* SINGLE_ForUpdate  */
  YYSYMBOL_BasicForStatementNoShortIf = 148, /* BasicForStatementNoShortIf  */
  YYSYMBOL_ForInit = 149,                  /* ForInit  */
  YYSYMBOL_ForUpdate = 150,                /* ForUpdate  */
  YYSYMBOL_StatementExpressionList = 151,  /* StatementExpressionList  */
  YYSYMBOL_EnhancedForStatement = 152,     /* EnhancedForStatement  */
  YYSYMBOL_EnhancedForStatementNoShortIf = 153, /* EnhancedForStatementNoShortIf  */
  YYSYMBOL_BreakStatement = 154,           /* BreakStatement  */
  YYSYMBOL_ContinueStatement = 155,        /* ContinueStatement  */
  YYSYMBOL_ReturnStatement = 156,          /* ReturnStatement  */
  YYSYMBOL_Primary = 157,                  /* Primary  */
  YYSYMBOL_PrimaryNoNewArray = 158,        /* PrimaryNoNewArray  */
  YYSYMBOL_ClassLiteral = 159,             /* ClassLiteral  */
  YYSYMBOL_ClassInstanceCreationExpression = 160, /* ClassInstanceCreationExpression  */
  YYSYMBOL_UnqualifiedClassInstanceCreationExpression = 161, /* UnqualifiedClassInstanceCreationExpression  */
  YYSYMBOL_FieldAccess = 162,              /* FieldAccess  */
  YYSYMBOL_ArrayAccess = 163,              /* ArrayAccess  */
  YYSYMBOL_MethodInvocation = 164,         /* MethodInvocation  */
  YYSYMBOL_ArgumentList = 165,             /* ArgumentList  */
  YYSYMBOL_MethodReference = 166,          /* MethodReference  */
  YYSYMBOL_ArrayCreationExpression = 167,  /* ArrayCreationExpression  */
  YYSYMBOL_DimExprs = 168,                 /* DimExprs  */
  YYSYMBOL_DimExpr = 169,                  /* DimExpr  */
  YYSYMBOL_Expression = 170,               /* Expression  */
  YYSYMBOL_AssignmentExpression = 171,     /* AssignmentExpression  */
  YYSYMBOL_Assignment = 172,               /* Assignment  */
  YYSYMBOL_LeftHandSide = 173,             /* LeftHandSide  */
  YYSYMBOL_AssignmentOperator = 174,       /* AssignmentOperator  */
  YYSYMBOL_ConditionalExpression = 175,    /* ConditionalExpression  */
  YYSYMBOL_ConditionalOrExpression = 176,  /* ConditionalOrExpression  */
  YYSYMBOL_ConditionalAndExpression = 177, /* ConditionalAndExpression  */
  YYSYMBOL_InclusiveOrExpression = 178,    /* InclusiveOrExpression  */
  YYSYMBOL_ExclusiveOrExpression = 179,    /* ExclusiveOrExpression  */
  YYSYMBOL_AndExpression = 180,            /* AndExpression  */
  YYSYMBOL_EqualityExpression = 181,       /* EqualityExpression  */
  YYSYMBOL_RelationalExpression = 182,     /* RelationalExpression  */
  YYSYMBOL_ShiftExpression = 183,          /* ShiftExpression  */
  YYSYMBOL_AdditiveExpression = 184,       /* AdditiveExpression  */
  YYSYMBOL_MultiplicativeExpression = 185, /* MultiplicativeExpression  */
  YYSYMBOL_UnaryExpression = 186,          /* UnaryExpression  */
  YYSYMBOL_PreIncrementExpression = 187,   /* PreIncrementExpression  */
  YYSYMBOL_PreDecrementExpression = 188,   /* PreDecrementExpression  */
  YYSYMBOL_UnaryExpressionNotPlusMinus = 189, /* UnaryExpressionNotPlusMinus  */
  YYSYMBOL_PostfixExpression = 190,        /* PostfixExpression  */
  YYSYMBOL_PostIncrementExpression = 191,  /* PostIncrementExpression  */
  YYSYMBOL_PostDecrementExpression = 192,  /* PostDecrementExpression  */
  YYSYMBOL_CastExpression = 193            /* CastExpression  */
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
#define YYLAST   1914

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  80
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  114
/* YYNRULES -- Number of rules.  */
#define YYNRULES  282
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  474

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   310


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
       2,     2,     2,    66,     2,     2,     2,    62,    47,     2,
      68,    69,    60,    58,    75,    59,    74,    61,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    42,    76,
      50,    29,    51,    41,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    72,     2,    73,    46,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    70,    45,    71,    67,     2,     2,     2,
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
      25,    26,    27,    28,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    43,    44,    48,    49,    52,
      53,    54,    55,    56,    57,    63,    64,    65,    77,    78,
      79
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
     505,   506,   507,   508,   509,   510,   511,   515,   517,   519,
     521,   523,   529,   530,   531,   535,   537,   539,   542,   548,
     553,   554,   558,   560,   563,   566,   570,   572,   577,   578,
     582,   584,   586,   588,   590,   595,   597,   599,   601,   603,
     605,   610,   611,   615,   619,   623,   624,   628,   629,   633,
     634,   638,   639,   640,   641,   642,   643,   644,   645,   646,
     647,   648,   649,   653,   654,   658,   659,   663,   664,   668,
     669,   673,   674,   678,   679,   683,   684,   685,   689,   690,
     691,   692,   693,   694,   698,   699,   700,   701,   705,   706,
     707,   711,   712,   713,   714,   718,   719,   720,   722,   724,
     728,   733,   738,   739,   741,   743,   747,   748,   749,   750,
     754,   759,   764
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
  "IDENTIFIER", "'='", "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN",
  "DIV_ASSIGN", "MOD_ASSIGN", "AND_ASSIGN", "OR_ASSIGN", "XOR_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "UNSIGNED_RIGHT_ASSIGN", "'?'", "':'",
  "OR_OP", "AND_OP", "'|'", "'^'", "'&'", "NE_OP", "EQ_OP", "'<'", "'>'",
  "GE_OP", "LE_OP", "INSTANCEOF", "LEFT_OP", "RIGHT_OP",
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

#define YYPACT_NINF (-414)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-280)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      21,    78,  -414,  -414,  -414,   125,  -414,   173,     8,     8,
    -414,  -414,  -414,    94,  -414,  -414,    59,   -11,  -414,     8,
    -414,   161,  -414,   186,  -414,  1351,  -414,   -11,  -414,  -414,
    -414,  -414,  -414,  -414,  -414,   164,   203,  -414,  -414,   181,
    -414,  -414,   135,   226,     7,  -414,  -414,  -414,  -414,  -414,
    -414,  1392,  -414,  -414,  -414,   998,  -414,    34,  -414,  -414,
     187,  -414,  1171,  -414,   199,  -414,   167,   204,   236,    31,
     124,  -414,   286,  -414,   236,  -414,  -414,   226,    34,   187,
    -414,  -414,  -414,  1241,  -414,   -21,   267,   296,  -414,   -19,
    1329,   302,   307,  -414,    -2,   354,  1773,  1773,  1773,  -414,
     845,   353,   178,   308,  -414,  -414,   974,  -414,  -414,   311,
    -414,  -414,  -414,  -414,  -414,   314,  -414,  -414,  -414,  -414,
    -414,  -414,  -414,  -414,  -414,    66,   319,  -414,    48,  -414,
     312,  1092,    87,  -414,  -414,  -414,  1193,  -414,  -414,   198,
     209,   240,   210,   354,  -414,    11,   323,   318,   326,  -414,
     321,  -414,   324,   236,   353,  -414,  1519,   282,  -414,  -414,
     330,  1044,  1075,   325,  -414,  1835,  1773,   331,  -414,   332,
    1773,  1773,  1773,  1773,  1773,  -414,  1836,   178,   308,  -414,
    -414,   334,  -414,  -414,  -414,   227,   369,   378,   380,   384,
      37,   189,    65,   301,   163,  -414,  -414,  -414,  -414,   198,
    -414,  -414,  -414,   405,  1773,   788,  1581,   108,   360,   103,
    -414,  -414,  -414,  -414,   364,  -414,  -414,  -414,  -414,  -414,
    -414,  -414,  -414,  -414,  -414,  -414,  -414,  1434,     9,   -17,
     206,  1773,     7,   361,   413,   247,     4,  -414,  -414,  -414,
    -414,    10,   409,  1773,  1773,  -414,  -414,     7,   370,   353,
    -414,   254,  -414,  -414,   306,  -414,  -414,  1412,  -414,  -414,
    -414,  -414,  1603,  -414,  -414,  1145,  -414,  -414,   353,  -414,
    -414,   362,  -414,   367,   374,  -414,  -414,  -414,  -414,  -414,
     132,  -414,  1773,  1773,  1773,  1773,  1773,  1773,  1773,  1773,
    1773,  1773,  1773,  1773,   354,  1773,  1773,  1773,  1773,  1773,
    1773,  1773,  1773,  -414,   377,  -414,  -414,    18,  -414,  1666,
    1434,   260,   360,  -414,   260,   360,  -414,   375,  -414,  -414,
     379,    78,  -414,  -414,  -414,   427,  -414,  -414,   428,  -414,
    -414,   383,  -414,  -414,   386,  -414,   236,     7,  -414,   451,
     353,   326,  -414,  -414,   395,    74,  -414,   391,    56,  -414,
       5,  1773,  1835,  1267,  1773,   426,   369,   378,   380,   384,
      37,   189,   189,    65,    65,    65,    65,     7,  -414,   301,
     301,   301,   163,   163,  -414,  -414,  -414,   788,  -414,  1773,
     -11,    83,   397,  -414,   236,  -414,  -414,   236,  -414,  1688,
     120,  -414,  -414,  1751,  -414,   236,  -414,  -414,  -414,  1497,
    -414,   396,  1773,   398,  -414,  -414,   403,   407,   408,    32,
    -414,   460,   464,  -414,  -414,  -414,  -414,  -414,  -414,  -414,
    1773,  -414,  -414,  -414,   -11,  -414,  -414,   127,  -414,   128,
    -414,  -414,  -414,   410,  1835,  1835,  1773,  1773,  1267,   788,
    -414,  -414,  -414,  -414,   788,   418,  -414,   367,   353,   402,
     419,   422,  -414,  -414,  -414,   788,    33,  1773,  1267,  1267,
    -414,  1773,   406,   481,  -414,   429,  1835,  1267,  1267,   430,
    -414,  -414,  1267,  -414
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
       0,     0,     0,   167,    11,     0,     0,     0,     0,   124,
     277,     0,    13,    27,   103,   118,     0,   100,   102,     0,
     104,   107,   119,   108,   120,     0,   109,   110,   111,   112,
     140,   141,   121,   122,   123,   276,   165,   168,   172,   182,
     173,   174,   175,   176,   166,   128,     0,   129,   130,     0,
     131,   132,     0,     0,    92,     0,     0,     0,    79,    77,
      75,    31,     0,    63,     0,    53,     0,     0,    67,    89,
     169,     0,     0,     0,   162,   145,     0,     0,   160,    11,
       0,     0,     0,     0,     0,   164,   277,     0,     0,   172,
     175,     0,   214,   216,   215,   233,   235,   237,   239,   241,
     243,   245,   248,   254,   258,   261,   265,   266,   269,   272,
     278,   279,   275,     0,     0,     0,     0,     0,     0,   277,
     173,   174,   270,   271,     0,   221,   225,   226,   222,   223,
     224,   230,   232,   231,   227,   228,   229,     0,     0,     0,
      29,     0,    64,   106,     0,    28,     0,    99,   101,   105,
     127,     0,     0,     0,     0,   280,   281,    72,     0,     0,
      84,    64,    82,    91,     0,    30,    59,     0,    66,    61,
      65,    52,     0,    96,    95,     0,    94,   161,     0,   153,
     155,     0,   146,   152,     0,   159,   267,   268,   274,   273,
       0,   163,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   181,     0,   125,   193,     0,   199,     0,
       0,     0,   208,   211,     0,   206,   171,     0,   170,   178,
      12,     0,   183,   200,   203,     0,   218,   180,     0,   201,
     204,   189,   184,   202,     0,   217,    74,    71,    81,     0,
       0,    78,    76,    35,     0,     0,    36,     0,     0,    93,
      62,   147,     0,     0,     0,     0,   236,   238,   240,   242,
     244,   247,   246,   249,   250,   252,   251,     0,   253,   255,
     256,   257,   259,   260,   262,   263,   264,     0,   192,     0,
     188,     0,     0,   210,   207,   212,   209,   205,   190,     0,
       0,   177,   179,     0,   191,    73,    85,    34,    33,     0,
      97,     0,     0,     0,   148,   156,     0,     0,     0,    11,
     135,     0,   107,   114,   115,   116,   117,   142,   143,   282,
       0,   138,   198,   187,   185,   213,   195,     0,   197,     0,
      32,    37,    98,     0,   149,   145,     0,     0,     0,     0,
     234,   186,   194,   196,     0,     0,   150,   154,     0,     0,
       0,     0,   126,   136,   157,     0,    62,   147,     0,     0,
     144,     0,     0,     0,   139,     0,   149,     0,     0,     0,
     137,   158,     0,   151
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -414,  -414,  -414,   488,    62,    -1,    -6,   495,  -414,  -414,
    -414,   213,   600,   522,  -146,  -414,    17,  -414,   -25,  -414,
     449,  -414,  -414,    26,    -3,     1,   349,  -142,  -253,  -414,
     453,   468,   371,  -414,   257,   258,  -414,   436,  -414,  -414,
     461,   442,  -414,  -414,    23,   -78,   -98,  -414,  -164,    25,
    -329,  -340,  -414,  -414,  -414,  -414,  -159,  -414,  -414,  -414,
    -414,  -414,  -414,  -414,  -414,    89,    68,    63,  -414,  -414,
    -414,  -413,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,
     -50,  -165,   654,   674,   -14,  -239,  -414,  -414,   322,  -107,
     470,  -414,    51,  -414,   399,   102,  -414,   248,   249,   251,
     246,   253,    79,   -46,   -36,    75,   -82,   104,   149,  -414,
     175,   250,   300,  -414
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     7,     8,     9,    10,   176,   101,   177,    45,    46,
      47,    48,   178,   153,   258,   345,   104,    12,    26,    51,
      52,    53,    54,    13,    14,   233,    71,    72,   259,    56,
      57,    73,   146,   147,   148,   149,   150,    81,    58,    59,
      60,    84,   161,   263,   105,   106,   107,   108,   109,   110,
     411,   111,   112,   113,   413,   114,   115,   116,   117,   414,
     118,   415,   119,   416,   120,   271,   403,   445,   417,   272,
     446,   273,   121,   418,   122,   123,   124,   125,   126,   127,
     179,   129,   130,   131,   180,   307,   133,   134,   312,   313,
     308,   182,   183,   136,   231,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      16,   269,    61,   252,   346,   162,   270,   163,   238,   167,
      22,   323,   128,   412,   212,   213,     2,    11,   318,    43,
     250,   447,     3,   348,    42,    11,    11,     1,     4,     2,
       5,   319,   329,   128,   156,     3,    11,   320,   331,   251,
     205,     4,    50,     5,    70,    43,   324,   402,   132,    77,
      42,    55,    22,   447,    42,   164,   128,   168,    63,    25,
     145,   100,   156,   322,   238,    42,   206,   330,    50,   132,
     381,    20,   321,   321,   438,   461,   332,    55,   157,    67,
      82,    20,   100,   265,     6,   288,   289,   378,   276,   277,
     278,   279,   132,   379,   207,   209,   209,     6,   412,   142,
     206,    82,     2,    67,    62,   100,    15,   338,     3,   452,
      80,   128,   128,   135,     4,   128,    21,  -134,   412,   412,
     295,   296,   297,  -134,  -134,   401,   350,   412,   412,   463,
     464,   379,   412,    23,   135,    24,   145,   249,   470,   471,
     241,    42,    42,   473,   242,   398,   431,   132,   132,   399,
     427,   132,   424,    17,   429,   128,  -133,   135,   379,   268,
     100,   100,  -133,  -133,   100,   383,   137,   238,   386,   209,
     209,   209,   209,    18,    29,   227,   309,   228,    30,    31,
     310,   229,    23,    32,    33,    34,   143,   137,   309,    27,
      37,   132,    38,   405,    23,    15,   442,   443,   252,   154,
     155,   354,   379,   379,    67,   385,   234,    67,   385,    23,
     137,   138,   135,   135,    28,   128,   135,    29,   374,   375,
     376,    30,    31,   300,   301,   302,    32,    33,    34,   143,
     305,    64,   138,    37,    62,    38,   144,   139,    15,   290,
     291,   292,   293,   294,   363,   364,   365,   366,   340,    66,
      67,   132,   234,    42,    69,   138,   135,    83,   139,   369,
     370,   371,   245,   246,   100,   137,   137,   142,   282,   137,
     283,   269,   419,  -278,  -278,   270,   270,   151,   152,   247,
     325,   139,   209,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   209,    42,   209,   209,   209,   209,   209,   209,
     209,   209,   128,   128,  -279,  -279,   456,   270,   152,   137,
     138,   138,   140,    29,   138,   156,   135,    30,    31,   152,
     390,   328,    32,    33,    34,   143,    67,   128,   339,    37,
     257,    38,   152,   140,    15,   165,   139,   139,   132,   132,
     139,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,
    -219,  -219,  -219,   209,   138,   423,   140,   154,   261,   298,
     299,    29,   141,   132,   166,    30,    31,   361,   362,   137,
      32,    33,    34,   372,   373,   204,   203,    37,   410,    38,
     139,   232,    15,   141,   128,   128,   236,   239,   128,   128,
     240,   243,   253,   254,   128,   -83,   -80,   255,   262,   441,
     206,   267,   421,   135,   135,   128,   141,   275,   128,   128,
     281,   140,   140,   284,   138,   140,   128,   128,   128,   209,
     132,   132,   128,   285,   132,   132,   286,   303,   135,   448,
     132,   287,   310,   316,   100,   327,   154,   333,   351,   337,
     139,   132,   352,   353,   132,   132,   377,   389,   388,   391,
     392,   393,   132,   132,   132,   140,   137,   137,   132,   394,
     396,   141,   141,   305,   453,   141,   397,   400,   420,   454,
     425,   435,   432,   439,   434,   436,   437,  -113,   457,   444,
     460,   137,   466,   410,   421,   135,   135,   455,   458,   135,
     135,   459,   453,   454,   467,   135,    19,   460,   468,   472,
      76,   138,   138,   256,    65,   141,   135,   368,    78,   135,
     135,   341,   342,   248,   158,   140,    79,   135,   135,   135,
      44,   159,   440,   135,   449,   462,   138,   139,   139,   469,
     315,   356,   359,   357,     0,   244,   358,     0,   137,   137,
     360,     0,   137,   137,     0,     0,    44,     0,   137,     0,
      44,     0,   139,     0,     0,     0,     0,   102,     0,   137,
     181,    44,   137,   137,    68,   141,    74,     0,   214,     0,
     137,   137,   137,     0,     0,     0,   137,     0,   102,     0,
       0,     0,     0,   138,   138,     0,     0,   138,   138,     0,
     208,     0,     0,   138,     0,     0,     0,     0,     0,     0,
       0,   102,   140,   140,   138,     0,     0,   138,   138,   139,
     139,     0,     0,   139,   139,   138,   138,   138,     0,   139,
       0,   138,   230,     0,   235,    49,   260,   140,     0,     0,
     139,     0,     0,   139,   139,     0,   274,    44,    44,     0,
       0,   139,   139,   139,   214,     0,     0,   139,     0,     0,
       0,    49,   141,   141,     0,    49,   102,   102,     0,     0,
     102,     0,   103,     0,     0,     0,    49,     0,     0,   280,
       0,     0,     0,     0,   304,     0,     0,   141,     0,     0,
       0,     0,     0,   103,   140,   140,     0,     0,   140,   140,
       0,     0,     0,     0,   140,     0,     0,   317,   230,   235,
       0,   326,     0,     0,     0,   140,   103,     0,   140,   140,
       0,     0,     0,   334,   335,     0,   140,   140,   140,     0,
       0,     0,   140,     0,     0,     0,     0,   260,     0,   311,
     314,   230,     0,     0,   141,   141,     0,     0,   141,   141,
       0,     0,    49,    49,   141,     0,     0,     0,     0,    44,
     210,   210,   355,     0,     0,   141,     0,     0,   141,   141,
     102,   103,   103,     0,     0,   103,   141,   141,   141,   336,
     211,   211,   141,     0,     0,     0,     0,     0,     0,     0,
     382,     0,     0,     0,     0,     0,     0,     0,     0,   367,
       0,    85,    86,    87,     0,    29,     0,    88,    89,    30,
      31,     0,   235,    90,    32,    33,    34,     0,     0,    91,
       0,    37,     0,    38,    92,    93,    94,     0,     0,     0,
       0,   404,     0,     0,   210,   210,   210,   210,     0,     0,
       0,     0,     0,     0,   384,     0,     0,   387,     0,     0,
       0,     0,     0,     0,   211,   211,   211,   211,     0,   422,
       0,    95,    96,    97,    49,     0,    98,     0,    62,   395,
       0,     0,     0,     0,    99,   103,     0,     0,     0,   260,
       0,     0,   433,   -26,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,     0,     0,     0,    74,
       0,     0,     0,     0,    49,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   450,   451,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   227,     0,   228,
       0,     0,     0,   229,     0,     0,     0,   404,     0,     0,
     102,   465,     0,     0,     0,     0,     0,   210,   210,   210,
     210,   210,   210,   210,   210,   210,   210,   210,     0,   210,
     210,   210,   210,   210,   210,   210,   210,   211,   211,   211,
     211,   211,   211,   211,   211,   211,   211,   211,     0,   211,
     211,   211,   211,   211,   211,   211,   211,    85,    86,    87,
       0,    29,     2,    88,    89,    30,    31,     0,     3,    90,
      32,    33,    34,     0,     4,    91,     5,    37,     0,    38,
      92,    93,    94,     0,     0,    29,     2,     0,   210,    30,
      31,     0,     3,     0,    32,    33,    34,     0,     4,    36,
      21,    37,     0,    38,     0,     0,    39,     0,   211,     0,
       0,     0,     0,     0,     0,   103,     0,    95,    96,    97,
       0,     0,    98,     0,    62,   237,     0,    85,    86,    87,
      99,    29,     2,    88,    89,    30,    31,     0,     3,    90,
      32,    33,    34,     0,     4,    91,     5,    37,     0,    38,
      92,    93,    94,     0,   210,     0,     0,     0,    85,    86,
      87,     0,    29,     2,    88,    89,    30,    31,     0,     3,
      90,    32,    33,    34,   211,     4,    91,     5,    37,     0,
      38,    92,    93,    94,     0,     0,     0,    95,    96,    97,
       0,     0,    98,     0,    62,   264,     0,     0,     0,     0,
      99,  -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,
    -220,  -220,  -220,     0,     0,     0,     0,     0,    95,    96,
      97,     0,     0,    98,     0,    62,   266,     0,    85,    86,
      87,    99,    29,     2,    88,    89,    30,    31,     0,     3,
      90,    32,    33,    34,     0,     4,    91,     5,    37,     0,
      38,    92,    93,    94,    85,    86,    87,     0,    29,     2,
      88,    89,    30,    31,     0,     3,    90,    32,    33,    34,
       0,     4,    91,     5,    37,     0,    38,    92,    93,    94,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
      97,     0,     0,    98,     0,    62,   349,     0,     0,     0,
       0,    99,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,    95,    96,    97,     0,     0,    98,
       0,    62,     0,     0,    85,    86,    87,    99,    29,     2,
     160,    89,    30,    31,     0,     3,    90,    32,    33,    34,
       0,     4,    91,     5,    37,     0,    38,    92,    93,    94,
      85,   406,   407,     0,    29,     0,    88,    89,    30,    31,
       0,     0,    90,    32,    33,    34,     0,     0,    91,     0,
      37,     0,    38,   408,    93,   409,     0,     0,     0,     0,
       0,     0,     0,     0,    95,    96,    97,     0,     0,    98,
       0,    62,     0,     0,     0,     0,     0,    99,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,    96,    97,     0,     0,    98,    29,    62,    88,     0,
      30,    31,     0,    99,     0,    32,    33,    34,     0,     0,
      91,     0,    37,     0,    38,     0,    93,   169,    29,     2,
       0,     0,    30,    31,     0,     3,     0,    32,    33,    34,
       0,    35,    36,     5,    37,     0,    38,     0,     0,    39,
       0,     0,     0,     0,     0,     0,     0,   170,   171,     0,
       0,     0,    95,    96,    97,   172,   173,   174,     0,    29,
       2,     0,     0,    30,    31,   175,     3,     0,    32,    33,
      34,     0,    35,    36,     5,    37,     0,    38,     0,    29,
      39,    88,    40,    30,    31,     0,     0,    41,    32,    33,
      34,     0,     0,    91,     0,    37,     0,    38,     0,    93,
     169,    29,     0,    88,     0,    30,    31,     0,     0,     0,
      32,    33,    34,     0,     0,    91,     0,    37,     0,    38,
       0,    93,   169,    75,     0,     0,     0,     0,    41,     0,
     170,   171,     0,     0,     0,    95,    96,    97,   172,   173,
     174,     0,   257,   343,     0,     0,     0,   344,     0,     0,
       0,     0,   170,   171,     0,     0,     0,    95,    96,    97,
     172,   173,   174,     0,    29,     0,    88,   151,    30,    31,
       0,     0,     0,    32,    33,    34,     0,     0,    91,     0,
      37,     0,    38,     0,    93,   169,    29,     0,    88,     0,
      30,    31,     0,     0,     0,    32,    33,    34,     0,     0,
      91,     0,    37,     0,    38,     0,    93,   169,     0,     0,
       0,     0,     0,     0,     0,   170,   171,     0,     0,     0,
      95,    96,    97,   172,   173,   174,     0,   257,   430,     0,
       0,     0,     0,     0,     0,     0,     0,   170,   171,     0,
       0,     0,    95,    96,    97,   172,   173,   174,    29,   257,
      88,     0,    30,    31,     0,     0,     0,    32,    33,    34,
       0,     0,    91,     0,    37,     0,    38,     0,    93,   169,
      29,     0,    88,     0,    30,    31,     0,     0,     0,    32,
      33,    34,     0,     0,    91,     0,    37,     0,    38,     0,
      93,   169,     0,     0,     0,     0,     0,     0,     0,   170,
     171,     0,     0,     0,    95,    96,    97,   172,   173,   174,
     306,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   170,   171,     0,     0,     0,    95,    96,    97,   172,
     173,   174,   347,    29,     0,    88,     0,    30,    31,     0,
       0,     0,    32,    33,    34,     0,     0,    91,     0,    37,
       0,    38,     0,    93,   169,    29,     0,    88,     0,    30,
      31,     0,     0,     0,    32,    33,    34,     0,     0,    91,
       0,    37,     0,    38,     0,    93,   169,     0,     0,     0,
       0,     0,     0,     0,   170,   171,     0,     0,     0,    95,
      96,    97,   172,   173,   174,   380,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   170,   171,     0,     0,
       0,    95,    96,    97,   172,   173,   174,   426,    29,     0,
      88,     0,    30,    31,     0,     0,     0,    32,    33,    34,
       0,     0,    91,     0,    37,     0,    38,     0,    93,   169,
      29,     0,    88,     0,    30,    31,     0,     0,     0,    32,
      33,    34,     0,     0,    91,     0,    37,     0,    38,     0,
      93,   169,     0,     0,     0,     0,     0,     0,     0,   170,
     171,     0,     0,     0,    95,    96,    97,   172,   173,   174,
     428,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   170,   171,     0,     0,     0,    95,    96,    97,   172,
     173,   174,    29,     0,    88,     0,    30,    31,     0,     0,
       0,    32,    33,    34,     0,     0,    91,     0,    37,     0,
      38,     0,    93,   169,     0,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
      97,     0,     0,    98,     0,     0,     0,     0,   227,     0,
     228,     0,     0,     0,   229
};

static const yytype_int16 yycheck[] =
{
       1,   165,    27,   145,   257,    83,   165,    28,   106,    28,
      13,    28,    62,   353,    96,    97,     8,     0,     9,    25,
       9,   434,    14,   262,    25,     8,     9,     6,    20,     8,
      22,    22,    28,    83,    29,    14,    19,    28,    28,    28,
      42,    20,    25,    22,    43,    51,    63,    42,    62,    55,
      51,    25,    55,   466,    55,    76,   106,    76,    35,    70,
      66,    62,    29,   228,   162,    66,    68,    63,    51,    83,
     309,     9,    63,    63,    42,    42,   241,    51,    77,    72,
      57,    19,    83,   161,    76,    48,    49,    69,   170,   171,
     172,   173,   106,    75,    95,    96,    97,    76,   438,    68,
      68,    78,     8,    72,    70,   106,    28,   249,    14,   438,
      76,   161,   162,    62,    20,   165,    22,    69,   458,   459,
      55,    56,    57,    75,    76,    69,   268,   467,   468,   458,
     459,    75,   472,    74,    83,    76,   142,   143,   467,   468,
      74,   142,   143,   472,    78,    71,   399,   161,   162,    75,
     389,   165,    69,    28,   393,   205,    69,   106,    75,   165,
     161,   162,    75,    76,   165,   311,    62,   265,   314,   170,
     171,   172,   173,     0,     7,    72,    68,    74,    11,    12,
      72,    78,    74,    16,    17,    18,    19,    83,    68,    28,
      23,   205,    25,   352,    74,    28,    69,    69,   340,    75,
      76,    69,    75,    75,    72,   312,    74,    72,   315,    74,
     106,    62,   161,   162,    28,   265,   165,     7,   300,   301,
     302,    11,    12,    60,    61,    62,    16,    17,    18,    19,
     205,    28,    83,    23,    70,    25,    69,    62,    28,    50,
      51,    52,    53,    54,   290,   291,   292,   293,   254,    68,
      72,   265,    74,   254,    28,   106,   205,    70,    83,   295,
     296,   297,    64,    65,   265,   161,   162,    68,    41,   165,
      43,   435,   354,    64,    65,   434,   435,    73,    72,    69,
      74,   106,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   352,   353,    64,    65,   448,   466,    72,   205,
     161,   162,    62,     7,   165,    29,   265,    11,    12,    72,
     321,    74,    16,    17,    18,    19,    72,   377,    74,    23,
      70,    25,    72,    83,    28,    68,   161,   162,   352,   353,
     165,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,   354,   205,   380,   106,    75,    76,    58,
      59,     7,    62,   377,    68,    11,    12,   288,   289,   265,
      16,    17,    18,   298,   299,    68,    74,    23,   353,    25,
     205,    28,    28,    83,   434,   435,    78,    76,   438,   439,
      76,    72,    69,    75,   444,    69,    75,    73,    68,   424,
      68,    76,   377,   352,   353,   455,   106,    76,   458,   459,
      76,   161,   162,    44,   265,   165,   466,   467,   468,   420,
     434,   435,   472,    45,   438,   439,    46,    22,   377,   435,
     444,    47,    72,    69,   435,    22,    75,    28,    76,    69,
     265,   455,    75,    69,   458,   459,    69,    68,    73,    22,
      22,    68,   466,   467,   468,   205,   352,   353,   472,    73,
       9,   161,   162,   438,   439,   165,    71,    76,    42,   444,
      73,    68,    76,    13,    76,    68,    68,    13,    76,    69,
     455,   377,    76,   458,   459,   434,   435,    69,    69,   438,
     439,    69,   467,   468,    13,   444,     8,   472,    69,    69,
      51,   352,   353,   154,    36,   205,   455,   294,    55,   458,
     459,   254,   254,   142,    78,   265,    55,   466,   467,   468,
      25,    79,   420,   472,   435,   457,   377,   352,   353,   466,
     208,   283,   286,   284,    -1,   136,   285,    -1,   434,   435,
     287,    -1,   438,   439,    -1,    -1,    51,    -1,   444,    -1,
      55,    -1,   377,    -1,    -1,    -1,    -1,    62,    -1,   455,
      90,    66,   458,   459,    42,   265,    44,    -1,    98,    -1,
     466,   467,   468,    -1,    -1,    -1,   472,    -1,    83,    -1,
      -1,    -1,    -1,   434,   435,    -1,    -1,   438,   439,    -1,
      95,    -1,    -1,   444,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,   352,   353,   455,    -1,    -1,   458,   459,   434,
     435,    -1,    -1,   438,   439,   466,   467,   468,    -1,   444,
      -1,   472,   100,    -1,   102,    25,   156,   377,    -1,    -1,
     455,    -1,    -1,   458,   459,    -1,   166,   142,   143,    -1,
      -1,   466,   467,   468,   174,    -1,    -1,   472,    -1,    -1,
      -1,    51,   352,   353,    -1,    55,   161,   162,    -1,    -1,
     165,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,   174,
      -1,    -1,    -1,    -1,   204,    -1,    -1,   377,    -1,    -1,
      -1,    -1,    -1,    83,   434,   435,    -1,    -1,   438,   439,
      -1,    -1,    -1,    -1,   444,    -1,    -1,   227,   176,   177,
      -1,   231,    -1,    -1,    -1,   455,   106,    -1,   458,   459,
      -1,    -1,    -1,   243,   244,    -1,   466,   467,   468,    -1,
      -1,    -1,   472,    -1,    -1,    -1,    -1,   257,    -1,   207,
     208,   209,    -1,    -1,   434,   435,    -1,    -1,   438,   439,
      -1,    -1,   142,   143,   444,    -1,    -1,    -1,    -1,   254,
      96,    97,   282,    -1,    -1,   455,    -1,    -1,   458,   459,
     265,   161,   162,    -1,    -1,   165,   466,   467,   468,   247,
      96,    97,   472,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     310,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   294,
      -1,     3,     4,     5,    -1,     7,    -1,     9,    10,    11,
      12,    -1,   280,    15,    16,    17,    18,    -1,    -1,    21,
      -1,    23,    -1,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,   351,    -1,    -1,   170,   171,   172,   173,    -1,    -1,
      -1,    -1,    -1,    -1,   312,    -1,    -1,   315,    -1,    -1,
      -1,    -1,    -1,    -1,   170,   171,   172,   173,    -1,   379,
      -1,    63,    64,    65,   254,    -1,    68,    -1,    70,   337,
      -1,    -1,    -1,    -1,    76,   265,    -1,    -1,    -1,   399,
      -1,    -1,   402,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    -1,    -1,   367,
      -1,    -1,    -1,    -1,   294,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   436,   437,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,
      -1,    -1,    -1,    78,    -1,    -1,    -1,   457,    -1,    -1,
     435,   461,    -1,    -1,    -1,    -1,    -1,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,    -1,   295,
     296,   297,   298,   299,   300,   301,   302,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,    -1,   295,
     296,   297,   298,   299,   300,   301,   302,     3,     4,     5,
      -1,     7,     8,     9,    10,    11,    12,    -1,    14,    15,
      16,    17,    18,    -1,    20,    21,    22,    23,    -1,    25,
      26,    27,    28,    -1,    -1,     7,     8,    -1,   354,    11,
      12,    -1,    14,    -1,    16,    17,    18,    -1,    20,    21,
      22,    23,    -1,    25,    -1,    -1,    28,    -1,   354,    -1,
      -1,    -1,    -1,    -1,    -1,   435,    -1,    63,    64,    65,
      -1,    -1,    68,    -1,    70,    71,    -1,     3,     4,     5,
      76,     7,     8,     9,    10,    11,    12,    -1,    14,    15,
      16,    17,    18,    -1,    20,    21,    22,    23,    -1,    25,
      26,    27,    28,    -1,   420,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    12,    -1,    14,
      15,    16,    17,    18,   420,    20,    21,    22,    23,    -1,
      25,    26,    27,    28,    -1,    -1,    -1,    63,    64,    65,
      -1,    -1,    68,    -1,    70,    71,    -1,    -1,    -1,    -1,
      76,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    63,    64,
      65,    -1,    -1,    68,    -1,    70,    71,    -1,     3,     4,
       5,    76,     7,     8,     9,    10,    11,    12,    -1,    14,
      15,    16,    17,    18,    -1,    20,    21,    22,    23,    -1,
      25,    26,    27,    28,     3,     4,     5,    -1,     7,     8,
       9,    10,    11,    12,    -1,    14,    15,    16,    17,    18,
      -1,    20,    21,    22,    23,    -1,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      65,    -1,    -1,    68,    -1,    70,    71,    -1,    -1,    -1,
      -1,    76,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    63,    64,    65,    -1,    -1,    68,
      -1,    70,    -1,    -1,     3,     4,     5,    76,     7,     8,
       9,    10,    11,    12,    -1,    14,    15,    16,    17,    18,
      -1,    20,    21,    22,    23,    -1,    25,    26,    27,    28,
       3,     4,     5,    -1,     7,    -1,     9,    10,    11,    12,
      -1,    -1,    15,    16,    17,    18,    -1,    -1,    21,    -1,
      23,    -1,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    64,    65,    -1,    -1,    68,
      -1,    70,    -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    64,    65,    -1,    -1,    68,     7,    70,     9,    -1,
      11,    12,    -1,    76,    -1,    16,    17,    18,    -1,    -1,
      21,    -1,    23,    -1,    25,    -1,    27,    28,     7,     8,
      -1,    -1,    11,    12,    -1,    14,    -1,    16,    17,    18,
      -1,    20,    21,    22,    23,    -1,    25,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    68,    -1,     7,
       8,    -1,    -1,    11,    12,    76,    14,    -1,    16,    17,
      18,    -1,    20,    21,    22,    23,    -1,    25,    -1,     7,
      28,     9,    71,    11,    12,    -1,    -1,    76,    16,    17,
      18,    -1,    -1,    21,    -1,    23,    -1,    25,    -1,    27,
      28,     7,    -1,     9,    -1,    11,    12,    -1,    -1,    -1,
      16,    17,    18,    -1,    -1,    21,    -1,    23,    -1,    25,
      -1,    27,    28,    71,    -1,    -1,    -1,    -1,    76,    -1,
      58,    59,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      68,    -1,    70,    71,    -1,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    58,    59,    -1,    -1,    -1,    63,    64,    65,
      66,    67,    68,    -1,     7,    -1,     9,    73,    11,    12,
      -1,    -1,    -1,    16,    17,    18,    -1,    -1,    21,    -1,
      23,    -1,    25,    -1,    27,    28,     7,    -1,     9,    -1,
      11,    12,    -1,    -1,    -1,    16,    17,    18,    -1,    -1,
      21,    -1,    23,    -1,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    -1,
      63,    64,    65,    66,    67,    68,    -1,    70,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    68,     7,    70,
       9,    -1,    11,    12,    -1,    -1,    -1,    16,    17,    18,
      -1,    -1,    21,    -1,    23,    -1,    25,    -1,    27,    28,
       7,    -1,     9,    -1,    11,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    -1,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      59,    -1,    -1,    -1,    63,    64,    65,    66,    67,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    59,    -1,    -1,    -1,    63,    64,    65,    66,
      67,    68,    69,     7,    -1,     9,    -1,    11,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    -1,    21,    -1,    23,
      -1,    25,    -1,    27,    28,     7,    -1,     9,    -1,    11,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    -1,    21,
      -1,    23,    -1,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    -1,    63,
      64,    65,    66,    67,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,
      -1,    63,    64,    65,    66,    67,    68,    69,     7,    -1,
       9,    -1,    11,    12,    -1,    -1,    -1,    16,    17,    18,
      -1,    -1,    21,    -1,    23,    -1,    25,    -1,    27,    28,
       7,    -1,     9,    -1,    11,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    -1,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      59,    -1,    -1,    -1,    63,    64,    65,    66,    67,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    59,    -1,    -1,    -1,    63,    64,    65,    66,
      67,    68,     7,    -1,     9,    -1,    11,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    -1,    21,    -1,    23,    -1,
      25,    -1,    27,    28,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      65,    -1,    -1,    68,    -1,    -1,    -1,    -1,    72,    -1,
      74,    -1,    -1,    -1,    78
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     8,    14,    20,    22,    76,    81,    82,    83,
      84,    96,    97,   103,   104,    28,    85,    28,     0,    83,
      84,    22,   104,    74,    76,    70,    98,    28,    28,     7,
      11,    12,    16,    17,    18,    20,    21,    23,    25,    28,
      71,    76,    85,    86,    87,    88,    89,    90,    91,    92,
      96,    99,   100,   101,   102,   103,   109,   110,   118,   119,
     120,    98,    70,   124,    28,   111,    68,    72,    93,    28,
     105,   106,   107,   111,    93,    71,   100,    86,   110,   120,
      76,   117,   124,    70,   121,     3,     4,     5,     9,    10,
      15,    21,    26,    27,    28,    63,    64,    65,    68,    76,
      85,    86,    87,    92,    96,   124,   125,   126,   127,   128,
     129,   131,   132,   133,   135,   136,   137,   138,   140,   142,
     144,   152,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   166,   167,   172,   173,   187,   188,   190,
     191,   192,    68,    19,    69,    86,   112,   113,   114,   115,
     116,    73,    72,    93,    75,    76,    29,   105,   117,   121,
       9,   122,   125,    28,    76,    68,    68,    28,    76,    28,
      58,    59,    66,    67,    68,    76,    85,    87,    92,   160,
     164,   170,   171,   172,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,    74,    68,    42,    68,    85,    87,    85,
     162,   163,   186,   186,   170,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    72,    74,    78,
      93,   174,    28,   105,    74,    93,    78,    71,   126,    76,
      76,    74,    78,    72,   174,    64,    65,    69,   112,    86,
       9,    28,   107,    69,    75,    73,   106,    70,    94,   108,
     170,    76,    68,   123,    71,   125,    71,    76,    86,   128,
     136,   145,   149,   151,   170,    76,   186,   186,   186,   186,
      87,    76,    41,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    22,   170,   129,    69,   165,   170,    68,
      72,    93,   168,   169,    93,   168,    69,   170,     9,    22,
      28,    63,   161,    28,    63,    74,   170,    22,    74,    28,
      63,    28,   161,    28,   170,   170,    93,    69,   107,    74,
      86,   114,   115,    71,    75,    95,   108,    69,   165,    71,
     107,    76,    75,    69,    69,   170,   177,   178,   179,   180,
     181,   182,   182,   183,   183,   183,   183,    87,    91,   184,
     184,   184,   185,   185,   186,   186,   186,    69,    69,    75,
      69,   165,   170,    94,    93,   169,    94,    93,    73,    68,
      85,    22,    22,    68,    73,    93,     9,    71,    71,    75,
      76,    69,    42,   146,   170,   136,     4,     5,    26,    28,
     129,   130,   131,   134,   139,   141,   143,   148,   153,   186,
      42,   129,   170,    98,    69,    73,    69,   165,    69,   165,
      71,   108,    76,   170,    76,    68,    68,    68,    42,    13,
     175,    98,    69,    69,    69,   147,   150,   151,    86,   145,
     170,   170,   130,   129,   129,    69,   107,    76,    69,    69,
     129,    42,   146,   130,   130,   170,    76,    13,    69,   147,
     130,   130,    69,   130
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    80,    81,    81,    81,    81,    82,    83,    83,    84,
      84,    85,    85,    86,    86,    87,    87,    88,    88,    89,
      89,    89,    89,    89,    90,    90,    91,    91,    92,    92,
      93,    93,    94,    94,    94,    94,    95,    95,    96,    97,
      97,    98,    98,    99,    99,   100,   100,   100,   101,   101,
     101,   101,   102,   102,   103,   103,   104,   104,   104,   105,
     105,   106,   106,   107,   107,   108,   108,   109,   109,   110,
     110,   111,   111,   111,   111,   112,   112,   112,   113,   113,
     113,   114,   114,   115,   116,   116,   117,   117,   118,   119,
     119,   120,   120,   121,   121,   121,   122,   123,   123,   124,
     125,   125,   126,   126,   126,   127,   128,   129,   129,   129,
     129,   129,   129,   130,   130,   130,   130,   130,   131,   131,
     131,   131,   131,   131,   132,   133,   134,   135,   136,   136,
     136,   136,   136,   136,   136,   137,   138,   139,   140,   141,
     142,   142,   143,   143,   144,   145,   145,   146,   146,   147,
     147,   148,   149,   149,   150,   151,   151,   152,   153,   154,
     154,   155,   155,   156,   156,   157,   157,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   159,   159,   159,
     159,   159,   160,   160,   160,   161,   161,   161,   161,   162,
     163,   163,   164,   164,   164,   164,   164,   164,   165,   165,
     166,   166,   166,   166,   166,   167,   167,   167,   167,   167,
     167,   168,   168,   169,   170,   171,   171,   172,   172,   173,
     173,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   175,   175,   176,   176,   177,   177,   178,
     178,   179,   179,   180,   180,   181,   181,   181,   182,   182,
     182,   182,   182,   182,   183,   183,   183,   183,   184,   184,
     184,   185,   185,   185,   185,   186,   186,   186,   186,   186,
     187,   188,   189,   189,   189,   189,   190,   190,   190,   190,
     191,   192,   193
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
       3,     3,     1,     1,     1,     1,     1,     4,     3,     4,
       3,     3,     1,     3,     3,     5,     6,     5,     4,     3,
       4,     4,     4,     3,     6,     5,     6,     5,     3,     1,
       3,     3,     3,     3,     3,     4,     3,     4,     3,     4,
       4,     1,     2,     3,     1,     1,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     3,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     1,     2,     2,     1,
       2,     2,     1,     2,     2,     1,     1,     1,     1,     1,
       2,     2,     4
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
#line 1947 "parser.tab.c"
    break;

  case 3: /* CompilationUnit: MULTI_TypeDeclaration  */
#line 101 "parser.y"
                                 {Node * temp=createNode("EOF","<EOF>",{}); root =createNode("compilationUnit","",{(yyvsp[0].node),temp});}
#line 1953 "parser.tab.c"
    break;

  case 4: /* CompilationUnit: PackageDeclaration  */
#line 102 "parser.y"
                              {Node * temp=createNode("EOF","<EOF>",{}); root =createNode("compilationUnit","",{(yyvsp[0].node),temp});}
#line 1959 "parser.tab.c"
    break;

  case 5: /* CompilationUnit: %empty  */
#line 103 "parser.y"
                   {Node * temp=createNode("EOF","<EOF>",{}); root =createNode("compilationUnit","",{temp});}
#line 1965 "parser.tab.c"
    break;

  case 6: /* PackageDeclaration: PACKAGE TypeName ';'  */
#line 106 "parser.y"
                               { Node *temp1=createNode("PACKAGE",(yyvsp[-2].str),{});Node *temp3=createNode("Separator",(yyvsp[0].str),{}); (yyval.node)=createNode("PackageDeclaration","",{temp1,(yyvsp[-1].node),temp3}); }
#line 1971 "parser.tab.c"
    break;

  case 7: /* MULTI_TypeDeclaration: TypeDeclaration  */
#line 109 "parser.y"
                        {(yyval.node)=createNode("multiTypeDeclaration","",{(yyvsp[0].node)});}
#line 1977 "parser.tab.c"
    break;

  case 8: /* MULTI_TypeDeclaration: MULTI_TypeDeclaration TypeDeclaration  */
#line 110 "parser.y"
                                               { (yyval.node)=(yyvsp[-1].node); (yyval.node)->children.push_back((yyvsp[0].node));}
#line 1983 "parser.tab.c"
    break;

  case 9: /* TypeDeclaration: ClassDeclaration  */
#line 113 "parser.y"
                       {(yyval.node) = (yyvsp[0].node);}
#line 1989 "parser.tab.c"
    break;

  case 10: /* TypeDeclaration: ';'  */
#line 114 "parser.y"
            {(yyval.node)=createNode("Separator",(yyvsp[0].str),{});}
#line 1995 "parser.tab.c"
    break;

  case 11: /* TypeName: IDENTIFIER  */
#line 117 "parser.y"
                                       { (yyval.node) = createNode("Identifier",(yyvsp[0].str), {}); }
#line 2001 "parser.tab.c"
    break;

  case 12: /* TypeName: TypeName '.' IDENTIFIER  */
#line 118 "parser.y"
                                       { Node* l = createNode("Identifier", (yyvsp[0].str), {}); Node* temp = createNode("Separator", (yyvsp[-1].str), {}); (yyvsp[-2].node)->children.push_back(l); (yyvsp[-2].node)->children.push_back(temp); (yyval.node) = (yyvsp[-2].node); }
#line 2007 "parser.tab.c"
    break;

  case 13: /* Type: PrimitiveType  */
#line 124 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2013 "parser.tab.c"
    break;

  case 14: /* Type: ReferenceType  */
#line 125 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2019 "parser.tab.c"
    break;

  case 15: /* PrimitiveType: NumericType  */
#line 130 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2025 "parser.tab.c"
    break;

  case 16: /* PrimitiveType: BOOLEAN  */
#line 131 "parser.y"
                                { (yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2031 "parser.tab.c"
    break;

  case 17: /* NumericType: IntegralType  */
#line 135 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2037 "parser.tab.c"
    break;

  case 18: /* NumericType: FloatingPointType  */
#line 136 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2043 "parser.tab.c"
    break;

  case 19: /* IntegralType: BYTE  */
#line 140 "parser.y"
                                { (yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2049 "parser.tab.c"
    break;

  case 20: /* IntegralType: SHORT  */
#line 141 "parser.y"
                                { (yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2055 "parser.tab.c"
    break;

  case 21: /* IntegralType: INT  */
#line 142 "parser.y"
                                { (yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2061 "parser.tab.c"
    break;

  case 22: /* IntegralType: LONG  */
#line 143 "parser.y"
                                { (yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2067 "parser.tab.c"
    break;

  case 23: /* IntegralType: CHAR  */
#line 144 "parser.y"
                                { (yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2073 "parser.tab.c"
    break;

  case 24: /* FloatingPointType: FLOAT  */
#line 148 "parser.y"
                                { (yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2079 "parser.tab.c"
    break;

  case 25: /* FloatingPointType: DOUBLE  */
#line 149 "parser.y"
                                { (yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2085 "parser.tab.c"
    break;

  case 26: /* ReferenceType: TypeName  */
#line 153 "parser.y"
                { (yyval.node) = (yyvsp[0].node); }
#line 2091 "parser.tab.c"
    break;

  case 27: /* ReferenceType: ArrayType  */
#line 154 "parser.y"
                { (yyval.node) = (yyvsp[0].node); }
#line 2097 "parser.tab.c"
    break;

  case 28: /* ArrayType: PrimitiveType Dims  */
#line 157 "parser.y"
                        { (yyval.node) = createNode("ArrayType","",{(yyvsp[-1].node),(yyvsp[0].node)});}
#line 2103 "parser.tab.c"
    break;

  case 29: /* ArrayType: TypeName Dims  */
#line 158 "parser.y"
                     { (yyval.node) = createNode("ArrayType","",{(yyvsp[-1].node),(yyvsp[0].node)});}
#line 2109 "parser.tab.c"
    break;

  case 30: /* Dims: Dims '[' ']'  */
#line 161 "parser.y"
                  { (yyval.node) = (yyvsp[-2].node);Node *temp1 = createNode("Separator",(yyvsp[-1].str),{});Node *temp3 = createNode("Separator",(yyvsp[0].str),{}); (yyval.node)->children.push_back(temp1);(yyval.node)->children.push_back(temp3);}
#line 2115 "parser.tab.c"
    break;

  case 31: /* Dims: '[' ']'  */
#line 162 "parser.y"
                   {Node *temp1 = createNode("Separator",(yyvsp[-1].str),{}); Node *temp3 = createNode("Separator",(yyvsp[0].str),{});  ;(yyval.node) = createNode("DIMS","",{temp1,temp3}); }
#line 2121 "parser.tab.c"
    break;

  case 32: /* ArrayInitializer: '{' VariableInitializerList ',' '}'  */
#line 167 "parser.y"
                                                           { Node *temp1=createNode("Separator",(yyvsp[-3].str),{});Node *temp3=createNode("Separator",(yyvsp[-1].str),{});Node *temp4=createNode("Separator",(yyvsp[0].str),{}); (yyval.node)=createNode("ArrayInitializer","",{temp1,(yyvsp[-2].node),temp3,temp4}); }
#line 2127 "parser.tab.c"
    break;

  case 33: /* ArrayInitializer: '{' VariableInitializerList '}'  */
#line 168 "parser.y"
                                                           { Node *temp1=createNode("Separator",(yyvsp[-2].str),{});Node *temp3=createNode("Separator",(yyvsp[0].str),{}); (yyval.node)=createNode("ArrayInitializer","",{temp1,(yyvsp[-1].node),temp3}); }
#line 2133 "parser.tab.c"
    break;

  case 34: /* ArrayInitializer: '{' ',' '}'  */
#line 169 "parser.y"
                                                            { Node *temp1=createNode("Separator",(yyvsp[-2].str),{});Node *temp3=createNode("Separator",(yyvsp[-1].str),{});Node *temp4=createNode("Separator",(yyvsp[0].str),{}); (yyval.node)=createNode("ArrayInitializer","",{temp1,temp3,temp4}); }
#line 2139 "parser.tab.c"
    break;

  case 35: /* ArrayInitializer: '{' '}'  */
#line 170 "parser.y"
                                                           { Node *temp1=createNode("Separator",(yyvsp[-1].str),{});Node *temp2=createNode("Separator",(yyvsp[0].str),{});(yyval.node) = createNode("ArrayInitializer_EMP", "", {temp1,temp2}); }
#line 2145 "parser.tab.c"
    break;

  case 36: /* VariableInitializerList: VariableInitializer  */
#line 174 "parser.y"
                                                           { (yyval.node) = createNode("VariableInitializerList", "", {(yyvsp[0].node)}); }
#line 2151 "parser.tab.c"
    break;

  case 37: /* VariableInitializerList: VariableInitializerList ',' VariableInitializer  */
#line 175 "parser.y"
                                                           { (yyval.node) = (yyvsp[-2].node); (yyval.node)->children.push_back((yyvsp[0].node));Node *temp1=createNode("Separator",(yyvsp[-1].str),{});(yyval.node)->children.push_back(temp1); }
#line 2157 "parser.tab.c"
    break;

  case 38: /* ClassDeclaration: NormalClassDeclaration  */
#line 182 "parser.y"
                             { (yyval.node) = (yyvsp[0].node); }
#line 2163 "parser.tab.c"
    break;

  case 39: /* NormalClassDeclaration: MULTI_ClassModifier CLASS IDENTIFIER ClassBody  */
#line 186 "parser.y"
                                                       {Node *temp2=createNode("Keyword",(yyvsp[-2].str),{});Node *temp3=createNode("Identifier",(yyvsp[-1].str),{});(yyval.node)=createNode("normalClassDeclaration","",{(yyvsp[-3].node),temp2,temp3,(yyvsp[0].node)});}
#line 2169 "parser.tab.c"
    break;

  case 40: /* NormalClassDeclaration: CLASS IDENTIFIER ClassBody  */
#line 187 "parser.y"
                                  {Node *temp1=createNode("Keyword",(yyvsp[-2].str),{});Node *temp2=createNode("Identifier",(yyvsp[-1].str),{});(yyval.node)=createNode("normalClassDeclaration","",{temp1,temp2,(yyvsp[0].node)});}
#line 2175 "parser.tab.c"
    break;

  case 41: /* ClassBody: '{' MULTI_ClassBodyDeclaration '}'  */
#line 191 "parser.y"
                                           {Node *temp1=createNode("Separator",(yyvsp[-2].str),{});Node *temp3=createNode("Separator",(yyvsp[0].str),{}); (yyval.node)=createNode("classBody","",{temp1,(yyvsp[-1].node),temp3});}
#line 2181 "parser.tab.c"
    break;

  case 42: /* ClassBody: '{' '}'  */
#line 192 "parser.y"
                 {Node *temp1=createNode("Separator",(yyvsp[-1].str),{});Node *temp2=createNode("Separator",(yyvsp[0].str),{}); Node *temp3=createNode("fieldDeclaration","",{});(yyval.node)=createNode("classBody","",{temp1,temp2});}
#line 2187 "parser.tab.c"
    break;

  case 43: /* MULTI_ClassBodyDeclaration: ClassBodyDeclaration  */
#line 195 "parser.y"
                            {(yyval.node)=createNode("multiClassBodyDeclaration","",{(yyvsp[0].node)});}
#line 2193 "parser.tab.c"
    break;

  case 44: /* MULTI_ClassBodyDeclaration: MULTI_ClassBodyDeclaration ClassBodyDeclaration  */
#line 196 "parser.y"
                                                       { (yyval.node)=(yyvsp[-1].node); (yyval.node)->children.push_back((yyvsp[0].node));}
#line 2199 "parser.tab.c"
    break;

  case 45: /* ClassBodyDeclaration: ClassMemberDeclaration  */
#line 199 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2205 "parser.tab.c"
    break;

  case 46: /* ClassBodyDeclaration: StaticInitializer  */
#line 200 "parser.y"
                                 { (yyval.node) = (yyvsp[0].node); }
#line 2211 "parser.tab.c"
    break;

  case 47: /* ClassBodyDeclaration: ConstructorDeclaration  */
#line 201 "parser.y"
                                 { (yyval.node) = (yyvsp[0].node); }
#line 2217 "parser.tab.c"
    break;

  case 48: /* ClassMemberDeclaration: FieldDeclaration  */
#line 205 "parser.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2223 "parser.tab.c"
    break;

  case 49: /* ClassMemberDeclaration: MethodDeclaration  */
#line 206 "parser.y"
                           { (yyval.node) = (yyvsp[0].node); }
#line 2229 "parser.tab.c"
    break;

  case 50: /* ClassMemberDeclaration: ClassDeclaration  */
#line 207 "parser.y"
                           { (yyval.node) = (yyvsp[0].node); }
#line 2235 "parser.tab.c"
    break;

  case 51: /* ClassMemberDeclaration: ';'  */
#line 208 "parser.y"
           {(yyval.node)=createNode("Separator",(yyvsp[0].str),{});}
#line 2241 "parser.tab.c"
    break;

  case 52: /* FieldDeclaration: MULTI_ClassModifier Type VariableDeclaratorList ';'  */
#line 214 "parser.y"
                                                          {Node * temp4 =createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("fieldDeclaration","",{(yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[-1].node),temp4});}
#line 2247 "parser.tab.c"
    break;

  case 53: /* FieldDeclaration: Type VariableDeclaratorList ';'  */
#line 215 "parser.y"
                                      {Node * temp3 =createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("fieldDeclaration","",{(yyvsp[-2].node),(yyvsp[-1].node),temp3});}
#line 2253 "parser.tab.c"
    break;

  case 54: /* MULTI_ClassModifier: ClassModifier  */
#line 218 "parser.y"
                    {(yyval.node)=createNode("multiTypeDeclaration","",{(yyvsp[0].node)});}
#line 2259 "parser.tab.c"
    break;

  case 55: /* MULTI_ClassModifier: MULTI_ClassModifier ClassModifier  */
#line 219 "parser.y"
                                         {(yyval.node)=(yyvsp[-1].node); (yyvsp[-1].node)->children.push_back((yyvsp[0].node));}
#line 2265 "parser.tab.c"
    break;

  case 56: /* ClassModifier: PUBLIC  */
#line 222 "parser.y"
             { (yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2271 "parser.tab.c"
    break;

  case 57: /* ClassModifier: PRIVATE  */
#line 223 "parser.y"
              { (yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2277 "parser.tab.c"
    break;

  case 58: /* ClassModifier: STATIC  */
#line 224 "parser.y"
             {(yyval.node) = createNode("Keyword", (yyvsp[0].str), {} ); }
#line 2283 "parser.tab.c"
    break;

  case 59: /* VariableDeclaratorList: VariableDeclaratorList ',' VariableDeclarator  */
#line 227 "parser.y"
                                                     {(yyval.node) = (yyvsp[-2].node);(yyval.node)->children.push_back((yyvsp[0].node));Node * temp2 = createNode("Separator",(yyvsp[-1].str),{}); (yyval.node)->children.push_back(temp2); }
#line 2289 "parser.tab.c"
    break;

  case 60: /* VariableDeclaratorList: VariableDeclarator  */
#line 228 "parser.y"
                         {(yyval.node)=(yyvsp[0].node);}
#line 2295 "parser.tab.c"
    break;

  case 61: /* VariableDeclarator: VariableDeclaratorId '=' VariableInitializer  */
#line 232 "parser.y"
                                                   {Node * temp2 = createNode("=","",{});(yyval.node)=createNode("VariableDeclarator","",{(yyvsp[-2].node),temp2,(yyvsp[0].node)});}
#line 2301 "parser.tab.c"
    break;

  case 62: /* VariableDeclarator: VariableDeclaratorId  */
#line 233 "parser.y"
                           {(yyval.node)=(yyvsp[0].node);}
#line 2307 "parser.tab.c"
    break;

  case 63: /* VariableDeclaratorId: IDENTIFIER Dims  */
#line 236 "parser.y"
                      {Node * temp2 = createNode("Identifier",(yyvsp[-1].str),{}); (yyval.node)=createNode("VariableDeclaratorId","",{temp2,(yyvsp[0].node)});}
#line 2313 "parser.tab.c"
    break;

  case 64: /* VariableDeclaratorId: IDENTIFIER  */
#line 237 "parser.y"
                  {(yyval.node)=createNode("Identifier",(yyvsp[0].str),{});}
#line 2319 "parser.tab.c"
    break;

  case 65: /* VariableInitializer: Expression  */
#line 241 "parser.y"
                { (yyval.node)=(yyvsp[0].node);}
#line 2325 "parser.tab.c"
    break;

  case 66: /* VariableInitializer: ArrayInitializer  */
#line 242 "parser.y"
                      { (yyval.node)=(yyvsp[0].node);}
#line 2331 "parser.tab.c"
    break;

  case 67: /* MethodDeclaration: MULTI_ClassModifier MethodHeader MethodBody  */
#line 247 "parser.y"
                                                      {(yyval.node)=createNode("MethodDeclaration","",{(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 2337 "parser.tab.c"
    break;

  case 68: /* MethodDeclaration: MethodHeader MethodBody  */
#line 248 "parser.y"
                                                    {(yyval.node)=createNode("MethodDeclaration","",{(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 2343 "parser.tab.c"
    break;

  case 69: /* MethodHeader: Type MethodDeclarator  */
#line 252 "parser.y"
                                             {(yyval.node)=createNode("MethodHeader","",{(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 2349 "parser.tab.c"
    break;

  case 70: /* MethodHeader: VOID MethodDeclarator  */
#line 253 "parser.y"
                                             { Node *temp = createNode("TYPE", (yyvsp[-1].str), {}); (yyval.node) = createNode("MethodHeader","",{temp,(yyvsp[0].node)}); }
#line 2355 "parser.tab.c"
    break;

  case 71: /* MethodDeclarator: IDENTIFIER '(' FormalParameterList ')'  */
#line 257 "parser.y"
                                                     { Node *temp1=createNode("Identifier",(yyvsp[-3].str),{});Node *temp2=createNode("Separator",(yyvsp[-2].str),{});Node *temp4=createNode("Separator",(yyvsp[0].str),{});(yyval.node) = createNode("MethodDeclarator", "", {temp1,temp2,(yyvsp[-1].node),temp4}); }
#line 2361 "parser.tab.c"
    break;

  case 72: /* MethodDeclarator: IDENTIFIER '(' ')'  */
#line 258 "parser.y"
                                                     { Node *temp1=createNode("Identifier",(yyvsp[-2].str),{});Node *temp2=createNode("Separator",(yyvsp[-1].str),{});Node *temp4=createNode("Separator",(yyvsp[0].str),{});(yyval.node) = createNode("MethodDeclarator", "", {temp1,temp2,temp4}); }
#line 2367 "parser.tab.c"
    break;

  case 73: /* MethodDeclarator: IDENTIFIER '(' FormalParameterList ')' Dims  */
#line 259 "parser.y"
                                                     { Node *temp1=createNode("Identifier",(yyvsp[-4].str),{});Node *temp2=createNode("Separator",(yyvsp[-3].str),{});Node *temp4=createNode("Separator",(yyvsp[-1].str),{});(yyval.node) = createNode("MethodDeclarator", "", {temp1,temp2,(yyvsp[-2].node),temp4,(yyvsp[0].node)}); }
#line 2373 "parser.tab.c"
    break;

  case 74: /* MethodDeclarator: IDENTIFIER '(' ')' Dims  */
#line 260 "parser.y"
                                                     { Node *temp1=createNode("Identifier",(yyvsp[-3].str),{});Node *temp2=createNode("Separator",(yyvsp[-2].str),{});Node *temp4=createNode("Separator",(yyvsp[-1].str),{});(yyval.node) = createNode("MethodDeclarator", "", {temp1,temp2,(yyvsp[0].node),temp4}); }
#line 2379 "parser.tab.c"
    break;

  case 75: /* FormalParameterList: ReceiverParameter  */
#line 264 "parser.y"
                                                     { (yyval.node) = createNode("Parameters", "", {(yyvsp[0].node)}); }
#line 2385 "parser.tab.c"
    break;

  case 76: /* FormalParameterList: FormalParameters ',' LastFormalParameter  */
#line 265 "parser.y"
                                                     { Node *temp2=createNode("Separator",(yyvsp[-1].str),{}); (yyval.node)=createNode("FormalParameterList","",{(yyvsp[-2].node),temp2,(yyvsp[0].node)}); }
#line 2391 "parser.tab.c"
    break;

  case 77: /* FormalParameterList: LastFormalParameter  */
#line 266 "parser.y"
                                                     { (yyval.node) = createNode("Parameters", "", {(yyvsp[0].node)}); }
#line 2397 "parser.tab.c"
    break;

  case 78: /* FormalParameters: FormalParameters ',' FormalParameter  */
#line 270 "parser.y"
                                                     { (yyval.node) = (yyvsp[-2].node); (yyval.node)->children.push_back((yyvsp[0].node));Node *temp=createNode("Separator",(yyvsp[-1].str),{}); (yyval.node)->children.push_back(temp); }
#line 2403 "parser.tab.c"
    break;

  case 79: /* FormalParameters: FormalParameter  */
#line 271 "parser.y"
                                                     { (yyval.node) = createNode("Parameters", "", {(yyvsp[0].node)}); }
#line 2409 "parser.tab.c"
    break;

  case 80: /* FormalParameters: ReceiverParameter  */
#line 272 "parser.y"
                                                     { (yyval.node) = createNode("Parameters", "", {(yyvsp[0].node)}); }
#line 2415 "parser.tab.c"
    break;

  case 81: /* FormalParameter: FINAL Type VariableDeclaratorId  */
#line 276 "parser.y"
                                                    { Node *temp = createNode("MODIFIER", (yyvsp[-2].str), {}); (yyval.node) = createNode("FormalParameter", "", {temp, (yyvsp[-1].node), (yyvsp[0].node)}); }
#line 2421 "parser.tab.c"
    break;

  case 82: /* FormalParameter: Type VariableDeclaratorId  */
#line 277 "parser.y"
                                                    { (yyval.node) = createNode("FormalParameter", "", {(yyvsp[-1].node), (yyvsp[0].node)}); }
#line 2427 "parser.tab.c"
    break;

  case 83: /* LastFormalParameter: FormalParameter  */
#line 281 "parser.y"
                                                    { (yyval.node) = (yyvsp[0].node); }
#line 2433 "parser.tab.c"
    break;

  case 84: /* ReceiverParameter: Type THIS  */
#line 285 "parser.y"
                                                    { Node *n1 = createNode("THIS", (yyvsp[0].str), {}); (yyval.node) = createNode("ReceiverParameter", "", {(yyvsp[-1].node), n1}); }
#line 2439 "parser.tab.c"
    break;

  case 85: /* ReceiverParameter: Type IDENTIFIER '.' THIS  */
#line 286 "parser.y"
                                                    { Node *n1 = createNode("THIS", (yyvsp[0].str), {}); Node *n3 = createNode("Separator", (yyvsp[-1].str), {}); Node *n2 = createNode("Identifier", (yyvsp[-2].str), {}); (yyval.node) = createNode("ReceiverParameter", "", {(yyvsp[-3].node), n2, n1,n3}); }
#line 2445 "parser.tab.c"
    break;

  case 86: /* MethodBody: Block  */
#line 290 "parser.y"
                                                    {(yyval.node) = (yyvsp[0].node); }
#line 2451 "parser.tab.c"
    break;

  case 87: /* MethodBody: ';'  */
#line 291 "parser.y"
                                                    {(yyval.node) = createNode("EMP", "", {}); }
#line 2457 "parser.tab.c"
    break;

  case 88: /* StaticInitializer: STATIC Block  */
#line 294 "parser.y"
                                                    { Node * n1 = createNode("KEYWORD", (yyvsp[-1].str), {});(yyval.node) = createNode("StaticInitializer","", {n1,(yyvsp[0].node)}); }
#line 2463 "parser.tab.c"
    break;

  case 89: /* ConstructorDeclaration: MULTI_ClassModifier ConstructorDeclarator ConstructorBody  */
#line 298 "parser.y"
                                                                           { (yyval.node) = (yyvsp[-1].node); (yyval.node)->children.push_back((yyvsp[-2].node)); (yyval.node)->children.push_back((yyvsp[0].node));  }
#line 2469 "parser.tab.c"
    break;

  case 90: /* ConstructorDeclaration: ConstructorDeclarator ConstructorBody  */
#line 299 "parser.y"
                                                                           { (yyval.node) = (yyvsp[-1].node); (yyval.node)->children.push_back((yyvsp[0].node)); }
#line 2475 "parser.tab.c"
    break;

  case 91: /* ConstructorDeclarator: IDENTIFIER '(' FormalParameterList ')'  */
#line 303 "parser.y"
                                                                            { Node *n1 = createNode("Identifier", (yyvsp[-3].str), {});Node *n2= createNode("Separator", (yyvsp[-2].str), {});Node *n3= createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("ConstructorDeclarator","",{n1,n2,n3,(yyvsp[-1].node)}); }
#line 2481 "parser.tab.c"
    break;

  case 92: /* ConstructorDeclarator: IDENTIFIER '(' ')'  */
#line 304 "parser.y"
                                                                           { Node *n3 = createNode("Identifier", (yyvsp[-2].str), {});Node *n1 = createNode("Separator", (yyvsp[-1].str), {});Node *n2 = createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("ConstructorDeclarator","",{n1,n2,n3}); }
#line 2487 "parser.tab.c"
    break;

  case 93: /* ConstructorBody: '{' ExplicitConstructorInvocation BlockStatements '}'  */
#line 308 "parser.y"
                                                                           { Node *n1 = createNode("Separator", (yyvsp[-3].str), {});Node *n4= createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("ConstructorBody","",{n1,n4,(yyvsp[-2].node),(yyvsp[-1].node)}); }
#line 2493 "parser.tab.c"
    break;

  case 94: /* ConstructorBody: '{' BlockStatements '}'  */
#line 309 "parser.y"
                                                                           { Node *n1 = createNode("Separator", (yyvsp[-2].str), {});Node *n4= createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("ConstructorBody","",{n1,n4,(yyvsp[-1].node)}); }
#line 2499 "parser.tab.c"
    break;

  case 95: /* ConstructorBody: '{' ExplicitConstructorInvocation '}'  */
#line 310 "parser.y"
                                                                           { Node *n1 = createNode("Separator", (yyvsp[-2].str), {});Node *n3= createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("ConstructorBody","",{n1,n3,(yyvsp[-1].node)}); }
#line 2505 "parser.tab.c"
    break;

  case 96: /* ExplicitConstructorInvocation: THIS SINGLE_ArgumentList  */
#line 315 "parser.y"
                                                                           { Node * n1 = createNode("KEYWORD", (yyvsp[-1].str), {});(yyval.node) = createNode("ExplicitConstructorInvocation","", {n1,(yyvsp[0].node)}); }
#line 2511 "parser.tab.c"
    break;

  case 97: /* SINGLE_ArgumentList: '(' ')' ';'  */
#line 319 "parser.y"
                                                       { Node *n1 = createNode("Separator", (yyvsp[-2].str), {});Node *n2 = createNode("Separator", (yyvsp[-1].str), {});Node *n3 = createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("SINGLE_ArgumentList","",{n1,n2,n3});  }
#line 2517 "parser.tab.c"
    break;

  case 98: /* SINGLE_ArgumentList: '(' ArgumentList ')' ';'  */
#line 320 "parser.y"
                                                       { Node *n1 = createNode("Separator", (yyvsp[-3].str), {});Node *n2 = createNode("Separator", (yyvsp[-1].str), {});Node *n3 = createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("SINGLE_ArgumentList","",{n1,n2,n3,(yyvsp[-2].node)});  }
#line 2523 "parser.tab.c"
    break;

  case 99: /* Block: '{' BlockStatements '}'  */
#line 327 "parser.y"
                                             { Node *n1 = createNode("Separator", (yyvsp[-2].str), {});Node *n4= createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("Block","",{n1,n4,(yyvsp[-1].node)}); }
#line 2529 "parser.tab.c"
    break;

  case 100: /* BlockStatements: BlockStatement  */
#line 332 "parser.y"
                                             { (yyval.node) = createNode("BlockStatements", "", {(yyvsp[0].node)}); }
#line 2535 "parser.tab.c"
    break;

  case 101: /* BlockStatements: BlockStatements BlockStatement  */
#line 333 "parser.y"
                                             { (yyval.node) = (yyvsp[-1].node); (yyval.node)->children.push_back((yyvsp[0].node)); }
#line 2541 "parser.tab.c"
    break;

  case 102: /* BlockStatement: LocalVariableDeclarationStatement  */
#line 337 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2547 "parser.tab.c"
    break;

  case 103: /* BlockStatement: ClassDeclaration  */
#line 338 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2553 "parser.tab.c"
    break;

  case 104: /* BlockStatement: Statement  */
#line 339 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2559 "parser.tab.c"
    break;

  case 105: /* LocalVariableDeclarationStatement: LocalVariableDeclaration ';'  */
#line 343 "parser.y"
                                             { Node *n1 = createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("LocalVariableDeclarationStatement","",{n1,(yyvsp[-1].node)}); }
#line 2565 "parser.tab.c"
    break;

  case 106: /* LocalVariableDeclaration: Type VariableDeclaratorList  */
#line 347 "parser.y"
                                             { (yyval.node) = createNode("LocalVariableDeclaration", "", {(yyvsp[-1].node), (yyvsp[0].node)}); }
#line 2571 "parser.tab.c"
    break;

  case 107: /* Statement: StatementWithoutTrailingSubstatement  */
#line 351 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2577 "parser.tab.c"
    break;

  case 108: /* Statement: LabeledStatement  */
#line 352 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2583 "parser.tab.c"
    break;

  case 109: /* Statement: IfThenStatement  */
#line 353 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2589 "parser.tab.c"
    break;

  case 110: /* Statement: IfThenElseStatement  */
#line 354 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2595 "parser.tab.c"
    break;

  case 111: /* Statement: WhileStatement  */
#line 355 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2601 "parser.tab.c"
    break;

  case 112: /* Statement: ForStatement  */
#line 356 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2607 "parser.tab.c"
    break;

  case 113: /* StatementNoShortIf: StatementWithoutTrailingSubstatement  */
#line 360 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2613 "parser.tab.c"
    break;

  case 114: /* StatementNoShortIf: LabeledStatementNoShortIf  */
#line 361 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2619 "parser.tab.c"
    break;

  case 115: /* StatementNoShortIf: IfThenElseStatementNoShortIf  */
#line 362 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2625 "parser.tab.c"
    break;

  case 116: /* StatementNoShortIf: WhileStatementNoShortIf  */
#line 363 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2631 "parser.tab.c"
    break;

  case 117: /* StatementNoShortIf: ForStatementNoShortIf  */
#line 364 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2637 "parser.tab.c"
    break;

  case 118: /* StatementWithoutTrailingSubstatement: Block  */
#line 368 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2643 "parser.tab.c"
    break;

  case 119: /* StatementWithoutTrailingSubstatement: EmptyStatement  */
#line 369 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2649 "parser.tab.c"
    break;

  case 120: /* StatementWithoutTrailingSubstatement: ExpressionStatement  */
#line 370 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2655 "parser.tab.c"
    break;

  case 121: /* StatementWithoutTrailingSubstatement: BreakStatement  */
#line 371 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2661 "parser.tab.c"
    break;

  case 122: /* StatementWithoutTrailingSubstatement: ContinueStatement  */
#line 372 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2667 "parser.tab.c"
    break;

  case 123: /* StatementWithoutTrailingSubstatement: ReturnStatement  */
#line 373 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2673 "parser.tab.c"
    break;

  case 124: /* EmptyStatement: ';'  */
#line 377 "parser.y"
                                             { (yyval.node) = createNode("Separator", (yyvsp[0].str), {}); }
#line 2679 "parser.tab.c"
    break;

  case 125: /* LabeledStatement: IDENTIFIER ':' Statement  */
#line 381 "parser.y"
                                             {  Node *n1 = createNode("Identifier", (yyvsp[-2].str), {});Node *n2 = createNode("Separator", (yyvsp[-1].str), {}); (yyval.node) = createNode("LabeledStatement","", {n1,n2,(yyvsp[0].node)});}
#line 2685 "parser.tab.c"
    break;

  case 126: /* LabeledStatementNoShortIf: IDENTIFIER ':' StatementNoShortIf  */
#line 385 "parser.y"
                                              { Node *n1 = createNode("Identifier", (yyvsp[-2].str), {});Node *n2 = createNode("Separator", (yyvsp[-1].str), {}); (yyval.node) = createNode("LabeledStatementNoShortIf","", {n1,n2,(yyvsp[0].node)}); }
#line 2691 "parser.tab.c"
    break;

  case 127: /* ExpressionStatement: StatementExpression ';'  */
#line 389 "parser.y"
                                              { Node *n1 = createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("ExpressionStatement","",{n1,(yyvsp[-1].node)}); }
#line 2697 "parser.tab.c"
    break;

  case 128: /* StatementExpression: Assignment  */
#line 393 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2703 "parser.tab.c"
    break;

  case 129: /* StatementExpression: PreIncrementExpression  */
#line 394 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2709 "parser.tab.c"
    break;

  case 130: /* StatementExpression: PreDecrementExpression  */
#line 395 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2715 "parser.tab.c"
    break;

  case 131: /* StatementExpression: PostIncrementExpression  */
#line 396 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2721 "parser.tab.c"
    break;

  case 132: /* StatementExpression: PostDecrementExpression  */
#line 397 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2727 "parser.tab.c"
    break;

  case 133: /* StatementExpression: MethodInvocation  */
#line 398 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2733 "parser.tab.c"
    break;

  case 134: /* StatementExpression: ClassInstanceCreationExpression  */
#line 399 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 2739 "parser.tab.c"
    break;

  case 135: /* IfThenStatement: IF '(' Expression ')' Statement  */
#line 403 "parser.y"
                                          { Node *n1 = createNode("KEYWORD", (yyvsp[-4].str), {}); Node *n2 = createNode("Separator", (yyvsp[-3].str), {}); Node *n3 = createNode("Separator", (yyvsp[-1].str), {}); (yyval.node)=createNode("IfThenStatement","",{n1,n2,n3,(yyvsp[-2].node),(yyvsp[0].node)});}
#line 2745 "parser.tab.c"
    break;

  case 136: /* IfThenElseStatement: IF '(' Expression ')' StatementNoShortIf ELSE Statement  */
#line 407 "parser.y"
                                                               { Node *n1 = createNode("KEYWORD", (yyvsp[-6].str), {}); Node *n2 = createNode("Separator", (yyvsp[-5].str), {}); Node *n3 = createNode("Separator", (yyvsp[-3].str), {}); Node *n4 = createNode("KEYWORD", (yyvsp[-1].str), {}); (yyval.node)=createNode("IfThenELseStatement","",{n1,n2,n3,n4,(yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node)});}
#line 2751 "parser.tab.c"
    break;

  case 137: /* IfThenElseStatementNoShortIf: IF '(' Expression ')' StatementNoShortIf ELSE StatementNoShortIf  */
#line 411 "parser.y"
                                                                          { Node *n1 = createNode("KEYWORD", (yyvsp[-6].str), {}); Node *n2 = createNode("Separator", (yyvsp[-5].str), {}); Node *n3 = createNode("Separator", (yyvsp[-3].str), {}); Node *n4 = createNode("KEYWORD", (yyvsp[-1].str), {}); (yyval.node)=createNode("IfThenElseStatementNoShortIf","",{n1,n2,n3,n4,(yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node)});}
#line 2757 "parser.tab.c"
    break;

  case 138: /* WhileStatement: WHILE '(' Expression ')' Statement  */
#line 415 "parser.y"
                                                {Node *n1 = createNode("KEYWORD", (yyvsp[-4].str), {}); Node *n2 = createNode("Separator", (yyvsp[-3].str), {}); Node *n3 = createNode("Separator", (yyvsp[-1].str), {}); (yyval.node)=createNode("WhileStatement","",{n1,n2,n3,(yyvsp[-2].node),(yyvsp[0].node)});}
#line 2763 "parser.tab.c"
    break;

  case 139: /* WhileStatementNoShortIf: WHILE '(' Expression ')' StatementNoShortIf  */
#line 419 "parser.y"
                                                                 {Node *n1 = createNode("KEYWORD", (yyvsp[-4].str), {}); Node *n2 = createNode("Separator", (yyvsp[-3].str), {}); Node *n3 = createNode("Separator", (yyvsp[-1].str), {}); (yyval.node)=createNode("WhileStatementNoShortIf","",{n1,n2,n3,(yyvsp[-2].node),(yyvsp[0].node)});}
#line 2769 "parser.tab.c"
    break;

  case 140: /* ForStatement: BasicForStatement  */
#line 423 "parser.y"
                                                 {(yyval.node)=(yyvsp[0].node);}
#line 2775 "parser.tab.c"
    break;

  case 141: /* ForStatement: EnhancedForStatement  */
#line 424 "parser.y"
                                                 {(yyval.node)=(yyvsp[0].node);}
#line 2781 "parser.tab.c"
    break;

  case 142: /* ForStatementNoShortIf: BasicForStatementNoShortIf  */
#line 428 "parser.y"
                                                 {(yyval.node)=(yyvsp[0].node);}
#line 2787 "parser.tab.c"
    break;

  case 143: /* ForStatementNoShortIf: EnhancedForStatementNoShortIf  */
#line 429 "parser.y"
                                                 {(yyval.node)=(yyvsp[0].node);}
#line 2793 "parser.tab.c"
    break;

  case 144: /* BasicForStatement: FOR '(' SINGLE_ForInit ';' SINGLE_Expression ';' SINGLE_ForUpdate ')' Statement  */
#line 433 "parser.y"
                                                                                        { Node *n1 = createNode("KEYWORD", (yyvsp[-8].str), {});Node *n2 = createNode("Separator", (yyvsp[-7].str), {});Node *n4 = createNode("Separator", (yyvsp[-5].str), {});Node *n6 = createNode("Separator", (yyvsp[-3].str), {});Node *n8 = createNode("Separator", (yyvsp[-1].str), {}); (yyval.node)=createNode("BasicForStatement","",{n1,n2,n4,n6,n8,(yyvsp[-6].node),(yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node)}); }
#line 2799 "parser.tab.c"
    break;

  case 145: /* SINGLE_ForInit: %empty  */
#line 437 "parser.y"
                           {(yyval.node)=createNode("SINGLE_ForInit","",{});}
#line 2805 "parser.tab.c"
    break;

  case 146: /* SINGLE_ForInit: ForInit  */
#line 438 "parser.y"
                           {(yyval.node)=(yyvsp[0].node);}
#line 2811 "parser.tab.c"
    break;

  case 147: /* SINGLE_Expression: %empty  */
#line 442 "parser.y"
                           {(yyval.node)=createNode("SINGLE_Expression","",{});}
#line 2817 "parser.tab.c"
    break;

  case 148: /* SINGLE_Expression: Expression  */
#line 443 "parser.y"
                           {(yyval.node)=(yyvsp[0].node);}
#line 2823 "parser.tab.c"
    break;

  case 149: /* SINGLE_ForUpdate: %empty  */
#line 447 "parser.y"
                           {(yyval.node)=createNode("SINGLE_ForUpdate","",{});}
#line 2829 "parser.tab.c"
    break;

  case 150: /* SINGLE_ForUpdate: ForUpdate  */
#line 448 "parser.y"
                           {(yyval.node)=(yyvsp[0].node);}
#line 2835 "parser.tab.c"
    break;

  case 151: /* BasicForStatementNoShortIf: FOR '(' SINGLE_ForInit ';' SINGLE_Expression ';' SINGLE_ForUpdate ')' StatementNoShortIf  */
#line 452 "parser.y"
                                                                                                  {Node *n1 = createNode("KEYWORD", (yyvsp[-8].str), {});Node *n2 = createNode("Separator", (yyvsp[-7].str), {});Node *n4 = createNode("Separator", (yyvsp[-5].str), {});Node *n6 = createNode("Separator", (yyvsp[-3].str), {});Node *n8 = createNode("Separator", (yyvsp[-1].str), {});  (yyval.node)=createNode("BasicForStatementNoShortIf","",{n1,n2,n4,n6,n8,(yyvsp[-6].node),(yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node)}); }
#line 2841 "parser.tab.c"
    break;

  case 152: /* ForInit: StatementExpressionList  */
#line 456 "parser.y"
                                       {(yyval.node)=(yyvsp[0].node);}
#line 2847 "parser.tab.c"
    break;

  case 153: /* ForInit: LocalVariableDeclaration  */
#line 457 "parser.y"
                                       {(yyval.node)=(yyvsp[0].node);}
#line 2853 "parser.tab.c"
    break;

  case 154: /* ForUpdate: StatementExpressionList  */
#line 461 "parser.y"
                                       {(yyval.node)=(yyvsp[0].node);}
#line 2859 "parser.tab.c"
    break;

  case 155: /* StatementExpressionList: StatementExpression  */
#line 465 "parser.y"
                                                        {(yyval.node)=createNode("StatementExpressionList", "", {(yyvsp[0].node)});}
#line 2865 "parser.tab.c"
    break;

  case 156: /* StatementExpressionList: StatementExpressionList ',' StatementExpression  */
#line 466 "parser.y"
                                                        {(yyval.node) = (yyvsp[-2].node); (yyval.node)->children.push_back((yyvsp[0].node));Node *temp1=createNode("Separator",(yyvsp[-1].str),{});(yyval.node)->children.push_back(temp1);}
#line 2871 "parser.tab.c"
    break;

  case 157: /* EnhancedForStatement: FOR '(' Type VariableDeclaratorId ':' Expression ')' Statement  */
#line 470 "parser.y"
                                                                              { Node *n1 = createNode("KEYWORD", (yyvsp[-7].str), {});Node *n2 = createNode("Separator", (yyvsp[-6].str), {});Node *n5 = createNode("Separator", (yyvsp[-3].str), {});Node *n7 = createNode("Separator", (yyvsp[-1].str), {}); (yyval.node)=createNode("EnhancedForStatement","",{n1,n2,(yyvsp[-4].node),n5,n7,(yyvsp[-5].node),(yyvsp[-2].node),(yyvsp[0].node)}); }
#line 2877 "parser.tab.c"
    break;

  case 158: /* EnhancedForStatementNoShortIf: FOR '(' Type VariableDeclaratorId ':' Expression ')' StatementNoShortIf  */
#line 474 "parser.y"
                                                                                    { Node *n1 = createNode("KEYWORD", (yyvsp[-7].str), {});Node *n2 = createNode("Separator", (yyvsp[-6].str), {});Node *n5 = createNode("Separator", (yyvsp[-3].str), {});Node *n7 = createNode("Separator", (yyvsp[-1].str), {});  (yyval.node)=createNode("EnhancedForStatementNoShortIf","",{n1,n2,(yyvsp[-4].node),n5,n7,(yyvsp[-5].node),(yyvsp[-2].node),(yyvsp[0].node)});}
#line 2883 "parser.tab.c"
    break;

  case 159: /* BreakStatement: BREAK IDENTIFIER ';'  */
#line 478 "parser.y"
                                  {Node* n1=createNode("Keyword",(yyvsp[-2].str),{});Node* n2=createNode("Identifier",(yyvsp[-1].str),{});Node* n3=createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("BreakStatement","",{n1,n2,n3});}
#line 2889 "parser.tab.c"
    break;

  case 160: /* BreakStatement: BREAK ';'  */
#line 479 "parser.y"
                                  {Node* n1=createNode("Keyword",(yyvsp[-1].str),{}); Node* n2=createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("BreakStatement","",{n1,n2});}
#line 2895 "parser.tab.c"
    break;

  case 161: /* ContinueStatement: CONTINUE IDENTIFIER ';'  */
#line 483 "parser.y"
                                  {Node* n1=createNode("Keyword",(yyvsp[-2].str),{});Node* n2=createNode("Identifier",(yyvsp[-1].str),{});Node* n3=createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("ContinueStatement","",{n1,n2,n3});}
#line 2901 "parser.tab.c"
    break;

  case 162: /* ContinueStatement: CONTINUE ';'  */
#line 484 "parser.y"
                                  {Node* n1=createNode("Keyword",(yyvsp[-1].str),{}); Node* n2=createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("ContinueStatement","",{n1,n2});}
#line 2907 "parser.tab.c"
    break;

  case 163: /* ReturnStatement: RETURN Expression ';'  */
#line 488 "parser.y"
                                  {Node* n1=createNode("Keyword",(yyvsp[-2].str),{});Node* n3=createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("BreakStatement","",{n1,(yyvsp[-1].node),n3});}
#line 2913 "parser.tab.c"
    break;

  case 164: /* ReturnStatement: RETURN ';'  */
#line 489 "parser.y"
                                  {Node* n1=createNode("Keyword",(yyvsp[-1].str),{}); Node* n2=createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("BreakStatement","",{n1,n2});}
#line 2919 "parser.tab.c"
    break;

  case 165: /* Primary: PrimaryNoNewArray  */
#line 497 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 2925 "parser.tab.c"
    break;

  case 166: /* Primary: ArrayCreationExpression  */
#line 498 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 2931 "parser.tab.c"
    break;

  case 167: /* PrimaryNoNewArray: LITERAL  */
#line 502 "parser.y"
                                                                                    {(yyval.node)=createNode("LITERAL",(yyvsp[0].str),{});}
#line 2937 "parser.tab.c"
    break;

  case 168: /* PrimaryNoNewArray: ClassLiteral  */
#line 503 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 2943 "parser.tab.c"
    break;

  case 169: /* PrimaryNoNewArray: THIS  */
#line 504 "parser.y"
                                                                                    {(yyval.node)=createNode("KEYWORD",(yyvsp[0].str),{});}
#line 2949 "parser.tab.c"
    break;

  case 170: /* PrimaryNoNewArray: TypeName '.' THIS  */
#line 505 "parser.y"
                                                                                    {Node *temp = createNode("KEYWORD",(yyvsp[0].str),{});Node *temp1 = createNode("Separator",(yyvsp[-1].str),{} ); (yyval.node)=createNode("PRIMARYNONEWARRAY","",{(yyvsp[-2].node),temp,temp1});}
#line 2955 "parser.tab.c"
    break;

  case 171: /* PrimaryNoNewArray: '(' Expression ')'  */
#line 506 "parser.y"
                                                                                    {Node *temp = createNode("Separator",(yyvsp[0].str),{});Node *temp1 = createNode("Separator",(yyvsp[-2].str),{} ); (yyval.node)=createNode("PRIMARYNONEWARRAY","",{(yyvsp[-1].node),temp,temp1});}
#line 2961 "parser.tab.c"
    break;

  case 172: /* PrimaryNoNewArray: ClassInstanceCreationExpression  */
#line 507 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 2967 "parser.tab.c"
    break;

  case 173: /* PrimaryNoNewArray: FieldAccess  */
#line 508 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 2973 "parser.tab.c"
    break;

  case 174: /* PrimaryNoNewArray: ArrayAccess  */
#line 509 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 2979 "parser.tab.c"
    break;

  case 175: /* PrimaryNoNewArray: MethodInvocation  */
#line 510 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 2985 "parser.tab.c"
    break;

  case 176: /* PrimaryNoNewArray: MethodReference  */
#line 511 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 2991 "parser.tab.c"
    break;

  case 177: /* ClassLiteral: TypeName Dims '.' CLASS  */
#line 515 "parser.y"
                                                                                    {Node *temp = createNode("KEYWORD",(yyvsp[0].str),{});Node *temp1 = createNode("Separator",(yyvsp[-1].str),{});
                                                                                      (yyval.node) = createNode("CLASS_LITERAL","",{(yyvsp[-3].node),(yyvsp[-2].node),temp,temp1});}
#line 2998 "parser.tab.c"
    break;

  case 178: /* ClassLiteral: TypeName '.' CLASS  */
#line 517 "parser.y"
                                                                                    {Node *temp = createNode("KEYWORD",(yyvsp[0].str),{});Node *temp1 = createNode("Separator",(yyvsp[-1].str),{});
                                                                                     (yyval.node) = createNode("CLASS_LITERAL","",{(yyvsp[-2].node),temp,temp1});}
#line 3005 "parser.tab.c"
    break;

  case 179: /* ClassLiteral: PrimitiveType Dims '.' CLASS  */
#line 519 "parser.y"
                                                                                    {Node *temp = createNode("KEYWORD",(yyvsp[0].str),{});Node *temp1 = createNode("Separator",(yyvsp[-1].str),{});
                                                                                     (yyval.node) = createNode("CLASS_LITERAL","",{(yyvsp[-3].node),(yyvsp[-2].node),temp,temp1});}
#line 3012 "parser.tab.c"
    break;

  case 180: /* ClassLiteral: PrimitiveType '.' CLASS  */
#line 521 "parser.y"
                                                                                {Node *temp = createNode("KEYWORD",(yyvsp[0].str),{});Node *temp1 = createNode("Separator",(yyvsp[-1].str),{});
                                                                                     (yyval.node) = createNode("CLASS_LITERAL","",{(yyvsp[-2].node),temp,temp1});}
#line 3019 "parser.tab.c"
    break;

  case 181: /* ClassLiteral: VOID '.' CLASS  */
#line 523 "parser.y"
                                                                                    {Node *temp = createNode("KEYWORD",(yyvsp[0].str),{});Node *temp2= createNode("Separator",(yyvsp[-1].str),{});
                                                                                     Node *temp1 = createNode("KEYWORD",(yyvsp[-2].str),{});
                                                                                     (yyval.node) = createNode("CLASS_LITERAL","",{temp1,temp,temp2});}
#line 3027 "parser.tab.c"
    break;

  case 182: /* ClassInstanceCreationExpression: UnqualifiedClassInstanceCreationExpression  */
#line 529 "parser.y"
                                                                                         {(yyval.node)=(yyvsp[0].node);}
#line 3033 "parser.tab.c"
    break;

  case 183: /* ClassInstanceCreationExpression: TypeName '.' UnqualifiedClassInstanceCreationExpression  */
#line 530 "parser.y"
                                                                             {Node *temp1 = createNode("Separator",(yyvsp[-1].str),{});(yyval.node)=createNode("CLASS_INSTANCE","",{(yyvsp[-2].node),(yyvsp[0].node),temp1});}
#line 3039 "parser.tab.c"
    break;

  case 184: /* ClassInstanceCreationExpression: Primary '.' UnqualifiedClassInstanceCreationExpression  */
#line 531 "parser.y"
                                                                                         {Node *temp1 = createNode("Separator",(yyvsp[-1].str),{});(yyval.node)=createNode("CLASS_INSTANCE","",{(yyvsp[-2].node),(yyvsp[0].node),temp1});}
#line 3045 "parser.tab.c"
    break;

  case 185: /* UnqualifiedClassInstanceCreationExpression: NEW TypeName '(' ArgumentList ')'  */
#line 535 "parser.y"
                                                                                        {Node *temp = createNode("KEYWORD",(yyvsp[-4].str),{});
                                                                                        Node *temp1 = createNode("Separator",(yyvsp[-2].str),{});Node *temp2 = createNode("Separator",(yyvsp[0].str),{});(yyval.node) = createNode("unqualifiedClassInstance","",{temp,(yyvsp[-3].node),(yyvsp[-1].node),temp1,temp2});}
#line 3052 "parser.tab.c"
    break;

  case 186: /* UnqualifiedClassInstanceCreationExpression: NEW TypeName '(' ArgumentList ')' ClassBody  */
#line 537 "parser.y"
                                                                                        {Node *temp = createNode("KEYWORD",(yyvsp[-5].str),{});Node *temp1 = createNode("Separator",(yyvsp[-3].str),{});Node *temp2= createNode("Separator",(yyvsp[-1].str),{});
                                                                                        (yyval.node) = createNode("unqualifiedClassInstance","",{temp,(yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node),temp1,temp2});}
#line 3059 "parser.tab.c"
    break;

  case 187: /* UnqualifiedClassInstanceCreationExpression: NEW TypeName '(' ')' ClassBody  */
#line 539 "parser.y"
                                                                                        {Node *temp = createNode("KEYWORD",(yyvsp[-4].str),{});Node *temp1 = createNode("Separator",(yyvsp[-2].str),{});Node *temp2 = createNode("Separator",(yyvsp[-1].str),{});
                            
                                                                                        (yyval.node) = createNode("unqualifiedClassInstance","",{temp,(yyvsp[-3].node),temp1,(yyvsp[0].node),temp2});}
#line 3067 "parser.tab.c"
    break;

  case 188: /* UnqualifiedClassInstanceCreationExpression: NEW TypeName '(' ')'  */
#line 542 "parser.y"
                                                                                        {Node *temp = createNode("KEYWORD",(yyvsp[-3].str),{});
                                                                                        Node *temp1 = createNode("Separator",(yyvsp[-1].str),{});Node *temp2 = createNode("Separator",(yyvsp[0].str),{});
                                                                                        (yyval.node) = createNode("unqualifiedClassInstance","",{temp,(yyvsp[-2].node),temp1,temp2});}
#line 3075 "parser.tab.c"
    break;

  case 189: /* FieldAccess: Primary '.' IDENTIFIER  */
#line 548 "parser.y"
                                                                                       {Node *temp = createNode("Identifier",(yyvsp[0].str),{});Node *temp1 = createNode("Separator",(yyvsp[-1].str),{});
                                                                                        (yyval.node) = createNode("FIELDACC","",{(yyvsp[-2].node),temp,temp1});}
#line 3082 "parser.tab.c"
    break;

  case 190: /* ArrayAccess: TypeName '[' Expression ']'  */
#line 553 "parser.y"
                                                           {Node *temp1 = createNode("Separator",(yyvsp[-2].str),{});Node *temp2 = createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("ARRAY","",{(yyvsp[-3].node),(yyvsp[-1].node),temp1,temp2});}
#line 3088 "parser.tab.c"
    break;

  case 191: /* ArrayAccess: PrimaryNoNewArray '[' Expression ']'  */
#line 554 "parser.y"
                                                                                       {Node *temp1 = createNode("Separator",(yyvsp[-2].str),{});Node *temp2 = createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("ARRAY","",{(yyvsp[-3].node),(yyvsp[-1].node),temp1,temp2});}
#line 3094 "parser.tab.c"
    break;

  case 192: /* MethodInvocation: IDENTIFIER '(' ArgumentList ')'  */
#line 558 "parser.y"
                                                                                       {Node *temp = createNode("Identifier",(yyvsp[-3].str),{});Node *temp1 = createNode("Separator",(yyvsp[-2].str),{});Node *temp2 = createNode("Separator",(yyvsp[0].str),{});
                                                                                        (yyval.node)=createNode("METHODINVOCATION","",{temp,(yyvsp[-1].node),temp1,temp2});}
#line 3101 "parser.tab.c"
    break;

  case 193: /* MethodInvocation: IDENTIFIER '(' ')'  */
#line 560 "parser.y"
                                                                                       {Node *temp = createNode("Identifier",(yyvsp[-2].str),{});Node *temp3 = createNode("Separator",(yyvsp[-1].str),{});Node *temp2 = createNode("Separator",(yyvsp[0].str),{});
                                                                                       
                                                                                        (yyval.node)=createNode("METHODINVOCATION","",{temp,temp2,temp3});}
#line 3109 "parser.tab.c"
    break;

  case 194: /* MethodInvocation: TypeName '.' IDENTIFIER '(' ArgumentList ')'  */
#line 564 "parser.y"
                                                                                       {Node *temp = createNode("Identifier",(yyvsp[-3].str),{});Node *temp1 = createNode("Separator",(yyvsp[-4].str),{});Node *temp2 = createNode("Separator",(yyvsp[-2].str),{});Node *temp3 = createNode("Separator",(yyvsp[0].str),{});
                                                                                        (yyval.node)=createNode("METHODINVOCATION","",{(yyvsp[-5].node),temp,(yyvsp[-1].node),temp1,temp2,temp3});}
#line 3116 "parser.tab.c"
    break;

  case 195: /* MethodInvocation: TypeName '.' IDENTIFIER '(' ')'  */
#line 567 "parser.y"
                                                                                        {Node *temp = createNode("Identifier",(yyvsp[-2].str),{});Node *temp3= createNode("Separator",(yyvsp[-3].str),{});Node *temp4= createNode("Separator",(yyvsp[-1].str),{});Node *temp5 = createNode("Separator",(yyvsp[0].str),{});
                                                                                        Node *temp1 = createNode("METHODINVOCATION","",{temp,temp3,temp4,(yyvsp[-4].node),temp5});
                                                                                        (yyval.node)=createNode("METHODINVOCATION","",{(yyvsp[-4].node),temp,temp1,temp3,temp4});}
#line 3124 "parser.tab.c"
    break;

  case 196: /* MethodInvocation: Primary '.' IDENTIFIER '(' ArgumentList ')'  */
#line 570 "parser.y"
                                                                                         {Node *temp = createNode("Identifier",(yyvsp[-3].str),{});Node *temp1 = createNode("Separator",(yyvsp[-4].str),{});Node *temp2 = createNode("Separator",(yyvsp[-2].str),{});Node *temp3 = createNode("Separator",(yyvsp[0].str),{});
                                                                                        (yyval.node)=createNode("METHODINVOCATION","",{(yyvsp[-5].node),temp,(yyvsp[-1].node),temp1,temp2,temp3});}
#line 3131 "parser.tab.c"
    break;

  case 197: /* MethodInvocation: Primary '.' IDENTIFIER '(' ')'  */
#line 572 "parser.y"
                                                                                        {Node *temp = createNode("Identifier",(yyvsp[-2].str),{});Node *temp3= createNode("Separator",(yyvsp[-3].str),{});Node *temp4= createNode("Separator",(yyvsp[-1].str),{});Node *temp5 = createNode("Separator",(yyvsp[0].str),{});
                                                                                        Node *temp1 = createNode("METHODINVOCATION","",{temp,temp3,temp4,temp5,(yyvsp[-4].node)});}
#line 3138 "parser.tab.c"
    break;

  case 198: /* ArgumentList: ArgumentList ',' Expression  */
#line 577 "parser.y"
                                                                                       {Node *temp = createNode("Separator",(yyvsp[-1].str),{}); (yyvsp[-2].node)->children.push_back((yyvsp[0].node)); (yyvsp[-2].node)->children.push_back(temp);(yyval.node) = (yyvsp[-2].node);}
#line 3144 "parser.tab.c"
    break;

  case 199: /* ArgumentList: Expression  */
#line 578 "parser.y"
                                                                                       {(yyval.node) = createNode("ARGLIST","", {(yyvsp[0].node)}); }
#line 3150 "parser.tab.c"
    break;

  case 200: /* MethodReference: TypeName PROPORTION IDENTIFIER  */
#line 582 "parser.y"
                                             {Node *temp = createNode("Identifier",(yyvsp[0].str),{});Node *temp1 = createNode("KEYWORD",(yyvsp[-1].str),{});
                                                                                         (yyval.node) = createNode("METHOD_REF","",{(yyvsp[-2].node),temp,temp1});}
#line 3157 "parser.tab.c"
    break;

  case 201: /* MethodReference: ArrayType PROPORTION IDENTIFIER  */
#line 584 "parser.y"
                                                                                        {Node *temp = createNode("Identifier",(yyvsp[0].str),{});Node *temp1 = createNode("KEYWORD",(yyvsp[-1].str),{});
                                                                                         (yyval.node) = createNode("METHOD_REF","",{(yyvsp[-2].node),temp,temp1});}
#line 3164 "parser.tab.c"
    break;

  case 202: /* MethodReference: Primary PROPORTION IDENTIFIER  */
#line 586 "parser.y"
                                                                                        {Node *temp = createNode("Identifier",(yyvsp[0].str),{});Node *temp1 = createNode("KEYWORD",(yyvsp[-1].str),{});
                                                                                         (yyval.node) = createNode("METHOD_REF","",{(yyvsp[-2].node),temp,temp1});}
#line 3171 "parser.tab.c"
    break;

  case 203: /* MethodReference: TypeName PROPORTION NEW  */
#line 588 "parser.y"
                                                                  {Node *temp = createNode("KEYWORD",(yyvsp[0].str),{});Node *temp1 = createNode("KEYWORD",(yyvsp[-1].str),{});
                                                                                         (yyval.node) = createNode("METHOD_REF","",{(yyvsp[-2].node),temp,temp1});}
#line 3178 "parser.tab.c"
    break;

  case 204: /* MethodReference: ArrayType PROPORTION NEW  */
#line 590 "parser.y"
                                                                                        {Node *temp = createNode("KEYWORD",(yyvsp[0].str),{});Node *temp1 = createNode("KEYWORD",(yyvsp[-1].str),{});
                                                                                         (yyval.node) = createNode("METHOD_REF","",{(yyvsp[-2].node),temp,temp1});}
#line 3185 "parser.tab.c"
    break;

  case 205: /* ArrayCreationExpression: NEW PrimitiveType DimExprs Dims  */
#line 595 "parser.y"
                                                                                        {Node *temp = createNode("KEYWORD",(yyvsp[-3].str),{});
                                                                                         (yyval.node) = createNode("ARRAY_CREATION","",{temp,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)});}
#line 3192 "parser.tab.c"
    break;

  case 206: /* ArrayCreationExpression: NEW PrimitiveType DimExprs  */
#line 597 "parser.y"
                                                                                        {Node *temp = createNode("KEYWORD",(yyvsp[-2].str),{});
                                                                                         (yyval.node) = createNode("ARRAY_CREATION","",{temp,(yyvsp[-1].node),(yyvsp[0].node)});}
#line 3199 "parser.tab.c"
    break;

  case 207: /* ArrayCreationExpression: NEW TypeName DimExprs Dims  */
#line 599 "parser.y"
                                                                 {Node *temp = createNode("KEYWORD",(yyvsp[-3].str),{});
                                                                                         (yyval.node) = createNode("ARRAY_CREATION","",{temp,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)});}
#line 3206 "parser.tab.c"
    break;

  case 208: /* ArrayCreationExpression: NEW TypeName DimExprs  */
#line 601 "parser.y"
                                                                 {Node *temp = createNode("KEYWORD",(yyvsp[-2].str),{});
                                                                                         (yyval.node) = createNode("ARRAY_CREATION","",{temp,(yyvsp[-1].node),(yyvsp[0].node)});}
#line 3213 "parser.tab.c"
    break;

  case 209: /* ArrayCreationExpression: NEW PrimitiveType Dims ArrayInitializer  */
#line 603 "parser.y"
                                                                                        {Node *temp = createNode("KEYWORD",(yyvsp[-3].str),{});
                                                                                         (yyval.node) = createNode("ARRAY_CREATION","",{temp,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)});}
#line 3220 "parser.tab.c"
    break;

  case 210: /* ArrayCreationExpression: NEW TypeName Dims ArrayInitializer  */
#line 605 "parser.y"
                                                                 {Node *temp = createNode("KEYWORD",(yyvsp[-3].str),{});
                                                                                         (yyval.node) = createNode("ARRAY_CREATION","",{temp,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)});}
#line 3227 "parser.tab.c"
    break;

  case 211: /* DimExprs: DimExpr  */
#line 610 "parser.y"
                                                                                        {(yyval.node) = createNode("DIMEXPR","", {(yyvsp[0].node)}); }
#line 3233 "parser.tab.c"
    break;

  case 212: /* DimExprs: DimExprs DimExpr  */
#line 611 "parser.y"
                                                                                        {(yyvsp[-1].node)->children.push_back((yyvsp[0].node)); (yyval.node) = (yyvsp[-1].node); }
#line 3239 "parser.tab.c"
    break;

  case 213: /* DimExpr: '[' Expression ']'  */
#line 615 "parser.y"
                                                                                        {Node *temp2=createNode("Separator",(yyvsp[-2].str),{});Node *temp1=createNode("Separator",(yyvsp[0].str),{});(yyval.node) = createNode("DimExpr","", {temp1,temp2,(yyvsp[-1].node)});}
#line 3245 "parser.tab.c"
    break;

  case 214: /* Expression: AssignmentExpression  */
#line 619 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3251 "parser.tab.c"
    break;

  case 215: /* AssignmentExpression: ConditionalExpression  */
#line 623 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3257 "parser.tab.c"
    break;

  case 216: /* AssignmentExpression: Assignment  */
#line 624 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3263 "parser.tab.c"
    break;

  case 217: /* Assignment: LeftHandSide AssignmentOperator Expression  */
#line 628 "parser.y"
                                                                                        {(yyvsp[-1].node)->children={(yyvsp[-2].node),(yyvsp[0].node)};(yyval.node)=(yyvsp[-1].node);}
#line 3269 "parser.tab.c"
    break;

  case 218: /* Assignment: TypeName AssignmentOperator Expression  */
#line 629 "parser.y"
                                                            {(yyvsp[-1].node)->children={(yyvsp[-2].node),(yyvsp[0].node)};(yyval.node)=(yyvsp[-1].node);}
#line 3275 "parser.tab.c"
    break;

  case 219: /* LeftHandSide: FieldAccess  */
#line 633 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3281 "parser.tab.c"
    break;

  case 220: /* LeftHandSide: ArrayAccess  */
#line 634 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3287 "parser.tab.c"
    break;

  case 221: /* AssignmentOperator: '='  */
#line 638 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[0].str),{});}
#line 3293 "parser.tab.c"
    break;

  case 222: /* AssignmentOperator: MUL_ASSIGN  */
#line 639 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[0].str),{});}
#line 3299 "parser.tab.c"
    break;

  case 223: /* AssignmentOperator: DIV_ASSIGN  */
#line 640 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[0].str),{});}
#line 3305 "parser.tab.c"
    break;

  case 224: /* AssignmentOperator: MOD_ASSIGN  */
#line 641 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[0].str),{});}
#line 3311 "parser.tab.c"
    break;

  case 225: /* AssignmentOperator: ADD_ASSIGN  */
#line 642 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[0].str),{});}
#line 3317 "parser.tab.c"
    break;

  case 226: /* AssignmentOperator: SUB_ASSIGN  */
#line 643 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[0].str),{});}
#line 3323 "parser.tab.c"
    break;

  case 227: /* AssignmentOperator: LEFT_ASSIGN  */
#line 644 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[0].str),{});}
#line 3329 "parser.tab.c"
    break;

  case 228: /* AssignmentOperator: RIGHT_ASSIGN  */
#line 645 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[0].str),{});}
#line 3335 "parser.tab.c"
    break;

  case 229: /* AssignmentOperator: UNSIGNED_RIGHT_ASSIGN  */
#line 646 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[0].str),{});}
#line 3341 "parser.tab.c"
    break;

  case 230: /* AssignmentOperator: AND_ASSIGN  */
#line 647 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[0].str),{});}
#line 3347 "parser.tab.c"
    break;

  case 231: /* AssignmentOperator: XOR_ASSIGN  */
#line 648 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[0].str),{});}
#line 3353 "parser.tab.c"
    break;

  case 232: /* AssignmentOperator: OR_ASSIGN  */
#line 649 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[0].str),{});}
#line 3359 "parser.tab.c"
    break;

  case 233: /* ConditionalExpression: ConditionalOrExpression  */
#line 653 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3365 "parser.tab.c"
    break;

  case 234: /* ConditionalExpression: ConditionalOrExpression '?' Expression ':' ConditionalExpression  */
#line 654 "parser.y"
                                                                                        {Node *temp1=createNode("Separator",(yyvsp[-3].str),{});Node *temp2=createNode("Separator",(yyvsp[-1].str),{});(yyval.node)=createNode("BRANCH","",{(yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node),temp1,temp2});}
#line 3371 "parser.tab.c"
    break;

  case 235: /* ConditionalOrExpression: ConditionalAndExpression  */
#line 658 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3377 "parser.tab.c"
    break;

  case 236: /* ConditionalOrExpression: ConditionalOrExpression OR_OP ConditionalAndExpression  */
#line 659 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3383 "parser.tab.c"
    break;

  case 237: /* ConditionalAndExpression: InclusiveOrExpression  */
#line 663 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3389 "parser.tab.c"
    break;

  case 238: /* ConditionalAndExpression: ConditionalAndExpression AND_OP InclusiveOrExpression  */
#line 664 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3395 "parser.tab.c"
    break;

  case 239: /* InclusiveOrExpression: ExclusiveOrExpression  */
#line 668 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3401 "parser.tab.c"
    break;

  case 240: /* InclusiveOrExpression: InclusiveOrExpression '|' ExclusiveOrExpression  */
#line 669 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3407 "parser.tab.c"
    break;

  case 241: /* ExclusiveOrExpression: AndExpression  */
#line 673 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3413 "parser.tab.c"
    break;

  case 242: /* ExclusiveOrExpression: ExclusiveOrExpression '^' AndExpression  */
#line 674 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3419 "parser.tab.c"
    break;

  case 243: /* AndExpression: EqualityExpression  */
#line 678 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3425 "parser.tab.c"
    break;

  case 244: /* AndExpression: AndExpression '&' EqualityExpression  */
#line 679 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3431 "parser.tab.c"
    break;

  case 245: /* EqualityExpression: RelationalExpression  */
#line 683 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3437 "parser.tab.c"
    break;

  case 246: /* EqualityExpression: EqualityExpression EQ_OP RelationalExpression  */
#line 684 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3443 "parser.tab.c"
    break;

  case 247: /* EqualityExpression: EqualityExpression NE_OP RelationalExpression  */
#line 685 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3449 "parser.tab.c"
    break;

  case 248: /* RelationalExpression: ShiftExpression  */
#line 689 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3455 "parser.tab.c"
    break;

  case 249: /* RelationalExpression: RelationalExpression '<' ShiftExpression  */
#line 690 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3461 "parser.tab.c"
    break;

  case 250: /* RelationalExpression: RelationalExpression '>' ShiftExpression  */
#line 691 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3467 "parser.tab.c"
    break;

  case 251: /* RelationalExpression: RelationalExpression LE_OP ShiftExpression  */
#line 692 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3473 "parser.tab.c"
    break;

  case 252: /* RelationalExpression: RelationalExpression GE_OP ShiftExpression  */
#line 693 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3479 "parser.tab.c"
    break;

  case 253: /* RelationalExpression: RelationalExpression INSTANCEOF ReferenceType  */
#line 694 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3485 "parser.tab.c"
    break;

  case 254: /* ShiftExpression: AdditiveExpression  */
#line 698 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3491 "parser.tab.c"
    break;

  case 255: /* ShiftExpression: ShiftExpression LEFT_OP AdditiveExpression  */
#line 699 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3497 "parser.tab.c"
    break;

  case 256: /* ShiftExpression: ShiftExpression RIGHT_OP AdditiveExpression  */
#line 700 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3503 "parser.tab.c"
    break;

  case 257: /* ShiftExpression: ShiftExpression UNSIGNED_RIGHT_OP AdditiveExpression  */
#line 701 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3509 "parser.tab.c"
    break;

  case 258: /* AdditiveExpression: MultiplicativeExpression  */
#line 705 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3515 "parser.tab.c"
    break;

  case 259: /* AdditiveExpression: AdditiveExpression '+' MultiplicativeExpression  */
#line 706 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3521 "parser.tab.c"
    break;

  case 260: /* AdditiveExpression: AdditiveExpression '-' MultiplicativeExpression  */
#line 707 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3527 "parser.tab.c"
    break;

  case 261: /* MultiplicativeExpression: UnaryExpression  */
#line 711 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3533 "parser.tab.c"
    break;

  case 262: /* MultiplicativeExpression: MultiplicativeExpression '*' UnaryExpression  */
#line 712 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3539 "parser.tab.c"
    break;

  case 263: /* MultiplicativeExpression: MultiplicativeExpression '/' UnaryExpression  */
#line 713 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3545 "parser.tab.c"
    break;

  case 264: /* MultiplicativeExpression: MultiplicativeExpression '%' UnaryExpression  */
#line 714 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[-1].str),{(yyvsp[-2].node),(yyvsp[0].node)});}
#line 3551 "parser.tab.c"
    break;

  case 265: /* UnaryExpression: PreIncrementExpression  */
#line 718 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3557 "parser.tab.c"
    break;

  case 266: /* UnaryExpression: PreDecrementExpression  */
#line 719 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3563 "parser.tab.c"
    break;

  case 267: /* UnaryExpression: '+' UnaryExpression  */
#line 720 "parser.y"
                                                                                        {Node * temp = createNode("operator",(yyvsp[-1].str),{});
                                                                                         (yyval.node)=createNode("unaryOperator","",{temp,(yyvsp[0].node)});}
#line 3570 "parser.tab.c"
    break;

  case 268: /* UnaryExpression: '-' UnaryExpression  */
#line 722 "parser.y"
                                                                                        {Node * temp = createNode("operator",(yyvsp[-1].str),{});
                                                                                         (yyval.node)=createNode("unaryOperator","",{temp,(yyvsp[0].node)});}
#line 3577 "parser.tab.c"
    break;

  case 269: /* UnaryExpression: UnaryExpressionNotPlusMinus  */
#line 724 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3583 "parser.tab.c"
    break;

  case 270: /* PreIncrementExpression: INC_OP UnaryExpression  */
#line 728 "parser.y"
                                                                                        {Node * temp = createNode("operator",(yyvsp[-1].str),{});
                                                                                         (yyval.node)=createNode("unaryOperator","",{temp,(yyvsp[0].node)});}
#line 3590 "parser.tab.c"
    break;

  case 271: /* PreDecrementExpression: DEC_OP UnaryExpression  */
#line 733 "parser.y"
                                                                                        {Node * temp = createNode("operator",(yyvsp[-1].str),{});
                                                                                         (yyval.node)=createNode("unaryOperator","",{temp,(yyvsp[0].node)});}
#line 3597 "parser.tab.c"
    break;

  case 272: /* UnaryExpressionNotPlusMinus: PostfixExpression  */
#line 738 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3603 "parser.tab.c"
    break;

  case 273: /* UnaryExpressionNotPlusMinus: '~' UnaryExpression  */
#line 739 "parser.y"
                                                                                        {Node * temp = createNode("operator",(yyvsp[-1].str),{});
                                                                                         (yyval.node)=createNode("unaryOperator","",{temp,(yyvsp[0].node)});}
#line 3610 "parser.tab.c"
    break;

  case 274: /* UnaryExpressionNotPlusMinus: '!' UnaryExpression  */
#line 741 "parser.y"
                                                                                        {Node * temp = createNode("operator",(yyvsp[-1].str),{});
                                                                                         (yyval.node)=createNode("unaryOperator","",{temp,(yyvsp[0].node)});}
#line 3617 "parser.tab.c"
    break;

  case 275: /* UnaryExpressionNotPlusMinus: CastExpression  */
#line 743 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3623 "parser.tab.c"
    break;

  case 276: /* PostfixExpression: Primary  */
#line 747 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3629 "parser.tab.c"
    break;

  case 277: /* PostfixExpression: TypeName  */
#line 748 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3635 "parser.tab.c"
    break;

  case 278: /* PostfixExpression: PostIncrementExpression  */
#line 749 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3641 "parser.tab.c"
    break;

  case 279: /* PostfixExpression: PostDecrementExpression  */
#line 750 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 3647 "parser.tab.c"
    break;

  case 280: /* PostIncrementExpression: PostfixExpression INC_OP  */
#line 754 "parser.y"
                                                                                        {Node * temp = createNode("operator",(yyvsp[0].str),{});
                                                                                         (yyval.node)=createNode("unaryOperator","",{(yyvsp[-1].node),temp});}
#line 3654 "parser.tab.c"
    break;

  case 281: /* PostDecrementExpression: PostfixExpression DEC_OP  */
#line 759 "parser.y"
                                                                                        {Node * temp = createNode("operator",(yyvsp[0].str),{});
                                                                                         (yyval.node)=createNode("unaryOperator","",{(yyvsp[-1].node),temp});}
#line 3661 "parser.tab.c"
    break;

  case 282: /* CastExpression: '(' PrimitiveType ')' UnaryExpression  */
#line 764 "parser.y"
                                                                                        {Node * temp1 = createNode("Separator",(yyvsp[-3].str),{});Node * temp3 = createNode("Separator",(yyvsp[-1].str),{});(yyval.node)=createNode("TYPECAST","",{(yyvsp[-2].node),(yyvsp[0].node),temp1,temp3});}
#line 3667 "parser.tab.c"
    break;


#line 3671 "parser.tab.c"

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

#line 770 "parser.y"




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
