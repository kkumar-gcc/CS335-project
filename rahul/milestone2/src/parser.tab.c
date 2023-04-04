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


#include <bits/stdc++.h>
#include "genTAC.cpp"
#define YYDEFUG 1
using namespace std;

#define YYERROR_VERBOSE 1

void yyerror (const char *s);
extern "C" int yylex();
extern long long int line;

genNode *root = NULL;

genNode *createNode(string label, string value,vector <genNode *> children) {

    genNode *temp = new genNode();
    temp->value = value;
    temp->children = children;
    temp->label = label;
    
    return temp;
}

// SymTable* ST = new SymTable();
long long int line=1;

#line 100 "parser.tab.c"

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
  YYSYMBOL_IFX = 3,                        /* IFX  */
  YYSYMBOL_CONTINUE = 4,                   /* CONTINUE  */
  YYSYMBOL_FOR = 5,                        /* FOR  */
  YYSYMBOL_CHAR = 6,                       /* CHAR  */
  YYSYMBOL_FINAL = 7,                      /* FINAL  */
  YYSYMBOL_STATIC = 8,                     /* STATIC  */
  YYSYMBOL_VOID = 9,                       /* VOID  */
  YYSYMBOL_CLASS = 10,                     /* CLASS  */
  YYSYMBOL_LONG = 11,                      /* LONG  */
  YYSYMBOL_CONST = 12,                     /* CONST  */
  YYSYMBOL_FLOAT = 13,                     /* FLOAT  */
  YYSYMBOL_WHILE = 14,                     /* WHILE  */
  YYSYMBOL_FLOATINGPOINTLITERAL = 15,      /* FLOATINGPOINTLITERAL  */
  YYSYMBOL_TRUELITERAL = 16,               /* TRUELITERAL  */
  YYSYMBOL_FALSELITERAL = 17,              /* FALSELITERAL  */
  YYSYMBOL_NULLLITERAL = 18,               /* NULLLITERAL  */
  YYSYMBOL_CHARACTERLITERAL = 19,          /* CHARACTERLITERAL  */
  YYSYMBOL_IDENTIFIER = 20,                /* IDENTIFIER  */
  YYSYMBOL_STRINGLITERAL = 21,             /* STRINGLITERAL  */
  YYSYMBOL_BOOLEAN = 22,                   /* BOOLEAN  */
  YYSYMBOL_PRIVATE = 23,                   /* PRIVATE  */
  YYSYMBOL_IF = 24,                        /* IF  */
  YYSYMBOL_PACKAGE = 25,                   /* PACKAGE  */
  YYSYMBOL_THIS = 26,                      /* THIS  */
  YYSYMBOL_BREAK = 27,                     /* BREAK  */
  YYSYMBOL_DOUBLE = 28,                    /* DOUBLE  */
  YYSYMBOL_BYTE = 29,                      /* BYTE  */
  YYSYMBOL_ELSE = 30,                      /* ELSE  */
  YYSYMBOL_PUBLIC = 31,                    /* PUBLIC  */
  YYSYMBOL_RETURN = 32,                    /* RETURN  */
  YYSYMBOL_INT = 33,                       /* INT  */
  YYSYMBOL_SHORT = 34,                     /* SHORT  */
  YYSYMBOL_ABSTRACT = 35,                  /* ABSTRACT  */
  YYSYMBOL_INTEGERLITERAL = 36,            /* INTEGERLITERAL  */
  YYSYMBOL_37_ = 37,                       /* '='  */
  YYSYMBOL_ADD_ASSIGN = 38,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 39,                /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 40,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 41,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 42,                /* MOD_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 43,                /* AND_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 44,                 /* OR_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 45,                /* XOR_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 46,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 47,              /* RIGHT_ASSIGN  */
  YYSYMBOL_UNSIGNED_RIGHT_ASSIGN = 48,     /* UNSIGNED_RIGHT_ASSIGN  */
  YYSYMBOL_49_ = 49,                       /* '?'  */
  YYSYMBOL_50_ = 50,                       /* ':'  */
  YYSYMBOL_OR_OP = 51,                     /* OR_OP  */
  YYSYMBOL_AND_OP = 52,                    /* AND_OP  */
  YYSYMBOL_53_ = 53,                       /* '|'  */
  YYSYMBOL_54_ = 54,                       /* '^'  */
  YYSYMBOL_55_ = 55,                       /* '&'  */
  YYSYMBOL_NE_OP = 56,                     /* NE_OP  */
  YYSYMBOL_EQ_OP = 57,                     /* EQ_OP  */
  YYSYMBOL_LEFT_OP = 58,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 59,                  /* RIGHT_OP  */
  YYSYMBOL_UNSIGNED_RIGHT_OP = 60,         /* UNSIGNED_RIGHT_OP  */
  YYSYMBOL_61_ = 61,                       /* '+'  */
  YYSYMBOL_62_ = 62,                       /* '-'  */
  YYSYMBOL_63_ = 63,                       /* '*'  */
  YYSYMBOL_64_ = 64,                       /* '/'  */
  YYSYMBOL_65_ = 65,                       /* '%'  */
  YYSYMBOL_66_ = 66,                       /* '<'  */
  YYSYMBOL_67_ = 67,                       /* '>'  */
  YYSYMBOL_GE_OP = 68,                     /* GE_OP  */
  YYSYMBOL_LE_OP = 69,                     /* LE_OP  */
  YYSYMBOL_INSTANCEOF = 70,                /* INSTANCEOF  */
  YYSYMBOL_NEW = 71,                       /* NEW  */
  YYSYMBOL_INC_OP = 72,                    /* INC_OP  */
  YYSYMBOL_DEC_OP = 73,                    /* DEC_OP  */
  YYSYMBOL_74_ = 74,                       /* '!'  */
  YYSYMBOL_75_ = 75,                       /* '~'  */
  YYSYMBOL_76_ = 76,                       /* '('  */
  YYSYMBOL_77_ = 77,                       /* ')'  */
  YYSYMBOL_78_ = 78,                       /* '{'  */
  YYSYMBOL_79_ = 79,                       /* '}'  */
  YYSYMBOL_80_ = 80,                       /* '['  */
  YYSYMBOL_81_ = 81,                       /* ']'  */
  YYSYMBOL_82_ = 82,                       /* '.'  */
  YYSYMBOL_83_ = 83,                       /* ','  */
  YYSYMBOL_84_ = 84,                       /* ';'  */
  YYSYMBOL_PROPORTION = 85,                /* PROPORTION  */
  YYSYMBOL_PTR_OP = 86,                    /* PTR_OP  */
  YYSYMBOL_YYACCEPT = 87,                  /* $accept  */
  YYSYMBOL_Start = 88,                     /* Start  */
  YYSYMBOL_CompilationUnit = 89,           /* CompilationUnit  */
  YYSYMBOL_PackageDeclaration = 90,        /* PackageDeclaration  */
  YYSYMBOL_MULTI_TypeDeclaration = 91,     /* MULTI_TypeDeclaration  */
  YYSYMBOL_TypeDeclaration = 92,           /* TypeDeclaration  */
  YYSYMBOL_TypeName = 93,                  /* TypeName  */
  YYSYMBOL_Identifier = 94,                /* Identifier  */
  YYSYMBOL_Type = 95,                      /* Type  */
  YYSYMBOL_PrimitiveType = 96,             /* PrimitiveType  */
  YYSYMBOL_NumericType = 97,               /* NumericType  */
  YYSYMBOL_IntegralType = 98,              /* IntegralType  */
  YYSYMBOL_FloatingPointType = 99,         /* FloatingPointType  */
  YYSYMBOL_ReferenceType = 100,            /* ReferenceType  */
  YYSYMBOL_ArrayType = 101,                /* ArrayType  */
  YYSYMBOL_Dims = 102,                     /* Dims  */
  YYSYMBOL_ArrayInitialize = 103,          /* ArrayInitialize  */
  YYSYMBOL_VariableInitializerList = 104,  /* VariableInitializerList  */
  YYSYMBOL_ClassDeclaration = 105,         /* ClassDeclaration  */
  YYSYMBOL_NormalClassDeclaration = 106,   /* NormalClassDeclaration  */
  YYSYMBOL_ClassInit = 107,                /* ClassInit  */
  YYSYMBOL_ClassBody = 108,                /* ClassBody  */
  YYSYMBOL_MULTI_ClassBodyDeclaration = 109, /* MULTI_ClassBodyDeclaration  */
  YYSYMBOL_ClassBodyDeclaration = 110,     /* ClassBodyDeclaration  */
  YYSYMBOL_ClassMemberDeclaration = 111,   /* ClassMemberDeclaration  */
  YYSYMBOL_FieldDeclaration = 112,         /* FieldDeclaration  */
  YYSYMBOL_MULTI_ClassModifier = 113,      /* MULTI_ClassModifier  */
  YYSYMBOL_ClassModifier = 114,            /* ClassModifier  */
  YYSYMBOL_VariableDeclaratorList = 115,   /* VariableDeclaratorList  */
  YYSYMBOL_VariableDeclarator = 116,       /* VariableDeclarator  */
  YYSYMBOL_VariableDeclaratorId = 117,     /* VariableDeclaratorId  */
  YYSYMBOL_VariableInitializer = 118,      /* VariableInitializer  */
  YYSYMBOL_MethodDeclaration = 119,        /* MethodDeclaration  */
  YYSYMBOL_MethodHeader = 120,             /* MethodHeader  */
  YYSYMBOL_MemberName = 121,               /* MemberName  */
  YYSYMBOL_FormalParameterList = 122,      /* FormalParameterList  */
  YYSYMBOL_FormalParameter = 123,          /* FormalParameter  */
  YYSYMBOL_ReceiverParameter = 124,        /* ReceiverParameter  */
  YYSYMBOL_MethodBody = 125,               /* MethodBody  */
  YYSYMBOL_StaticInitializer = 126,        /* StaticInitializer  */
  YYSYMBOL_ConstructorDeclaration = 127,   /* ConstructorDeclaration  */
  YYSYMBOL_ConstructorDeclarator = 128,    /* ConstructorDeclarator  */
  YYSYMBOL_ConstructorBody = 129,          /* ConstructorBody  */
  YYSYMBOL_ExplicitConstructorInvocation = 130, /* ExplicitConstructorInvocation  */
  YYSYMBOL_SINGLE_ArgumentList = 131,      /* SINGLE_ArgumentList  */
  YYSYMBOL_Block = 132,                    /* Block  */
  YYSYMBOL_BlockStart = 133,               /* BlockStart  */
  YYSYMBOL_BlockStatements = 134,          /* BlockStatements  */
  YYSYMBOL_BlockStatement = 135,           /* BlockStatement  */
  YYSYMBOL_LocalVariableDeclarationStatement = 136, /* LocalVariableDeclarationStatement  */
  YYSYMBOL_LocalVariableDeclaration = 137, /* LocalVariableDeclaration  */
  YYSYMBOL_Statement = 138,                /* Statement  */
  YYSYMBOL_StatementNoShortIf = 139,       /* StatementNoShortIf  */
  YYSYMBOL_StatementWithoutTrailingSubstatement = 140, /* StatementWithoutTrailingSubstatement  */
  YYSYMBOL_EmptyStatement = 141,           /* EmptyStatement  */
  YYSYMBOL_LabeledStatement = 142,         /* LabeledStatement  */
  YYSYMBOL_LabeledStatementNoShortIf = 143, /* LabeledStatementNoShortIf  */
  YYSYMBOL_ExpressionStatement = 144,      /* ExpressionStatement  */
  YYSYMBOL_StatementExpression = 145,      /* StatementExpression  */
  YYSYMBOL_IfThenStatement = 146,          /* IfThenStatement  */
  YYSYMBOL_IfThenElseStatement = 147,      /* IfThenElseStatement  */
  YYSYMBOL_IfThenElseStatementNoShortIf = 148, /* IfThenElseStatementNoShortIf  */
  YYSYMBOL_WhileStatement = 149,           /* WhileStatement  */
  YYSYMBOL_WhileStatementNoShortIf = 150,  /* WhileStatementNoShortIf  */
  YYSYMBOL_ForStatement = 151,             /* ForStatement  */
  YYSYMBOL_ForStatementNoShortIf = 152,    /* ForStatementNoShortIf  */
  YYSYMBOL_BasicForStatement = 153,        /* BasicForStatement  */
  YYSYMBOL_BasicForStatementNoShortIf = 154, /* BasicForStatementNoShortIf  */
  YYSYMBOL_ForInit = 155,                  /* ForInit  */
  YYSYMBOL_ForUpdate = 156,                /* ForUpdate  */
  YYSYMBOL_StatementExpressionList = 157,  /* StatementExpressionList  */
  YYSYMBOL_BreakStatement = 158,           /* BreakStatement  */
  YYSYMBOL_ContinueStatement = 159,        /* ContinueStatement  */
  YYSYMBOL_ReturnStatement = 160,          /* ReturnStatement  */
  YYSYMBOL_Primary = 161,                  /* Primary  */
  YYSYMBOL_PrimaryNoNewArray = 162,        /* PrimaryNoNewArray  */
  YYSYMBOL_Literal = 163,                  /* Literal  */
  YYSYMBOL_BooleanLiteral = 164,           /* BooleanLiteral  */
  YYSYMBOL_IntegerLiteral = 165,           /* IntegerLiteral  */
  YYSYMBOL_CharacterLiteral = 166,         /* CharacterLiteral  */
  YYSYMBOL_StringLiteral = 167,            /* StringLiteral  */
  YYSYMBOL_NullLiteral = 168,              /* NullLiteral  */
  YYSYMBOL_FloatLiteral = 169,             /* FloatLiteral  */
  YYSYMBOL_ClassInstanceCreationExpression = 170, /* ClassInstanceCreationExpression  */
  YYSYMBOL_UnqualifiedClassInstanceCreationExpression = 171, /* UnqualifiedClassInstanceCreationExpression  */
  YYSYMBOL_FieldAccess = 172,              /* FieldAccess  */
  YYSYMBOL_ArrayAccess = 173,              /* ArrayAccess  */
  YYSYMBOL_MethodInvocation = 174,         /* MethodInvocation  */
  YYSYMBOL_ArgumentList = 175,             /* ArgumentList  */
  YYSYMBOL_ArrayCreationExpression = 176,  /* ArrayCreationExpression  */
  YYSYMBOL_Expression = 177,               /* Expression  */
  YYSYMBOL_AssignmentExpression = 178,     /* AssignmentExpression  */
  YYSYMBOL_Assignment = 179,               /* Assignment  */
  YYSYMBOL_LeftHandSide = 180,             /* LeftHandSide  */
  YYSYMBOL_AssignmentOperator = 181,       /* AssignmentOperator  */
  YYSYMBOL_ConditionalExpression = 182,    /* ConditionalExpression  */
  YYSYMBOL_ConditionalOrExpression = 183,  /* ConditionalOrExpression  */
  YYSYMBOL_ConditionalAndExpression = 184, /* ConditionalAndExpression  */
  YYSYMBOL_InclusiveOrExpression = 185,    /* InclusiveOrExpression  */
  YYSYMBOL_ExclusiveOrExpression = 186,    /* ExclusiveOrExpression  */
  YYSYMBOL_AndExpression = 187,            /* AndExpression  */
  YYSYMBOL_EqualityExpression = 188,       /* EqualityExpression  */
  YYSYMBOL_RelationalExpression = 189,     /* RelationalExpression  */
  YYSYMBOL_ShiftExpression = 190,          /* ShiftExpression  */
  YYSYMBOL_AdditiveExpression = 191,       /* AdditiveExpression  */
  YYSYMBOL_MultiplicativeExpression = 192, /* MultiplicativeExpression  */
  YYSYMBOL_UnaryExpression = 193,          /* UnaryExpression  */
  YYSYMBOL_PreIncrementExpression = 194,   /* PreIncrementExpression  */
  YYSYMBOL_PreDecrementExpression = 195,   /* PreDecrementExpression  */
  YYSYMBOL_UnaryExpressionNotPlusMinus = 196, /* UnaryExpressionNotPlusMinus  */
  YYSYMBOL_PostfixExpression = 197,        /* PostfixExpression  */
  YYSYMBOL_PostIncrementExpression = 198,  /* PostIncrementExpression  */
  YYSYMBOL_PostDecrementExpression = 199,  /* PostDecrementExpression  */
  YYSYMBOL_CastExpression = 200            /* CastExpression  */
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

#if 1

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
#endif /* 1 */

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
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2496

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  114
/* YYNRULES -- Number of rules.  */
#define YYNRULES  276
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  475

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   317


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
       2,     2,     2,    74,     2,     2,     2,    65,    55,     2,
      76,    77,    63,    61,    83,    62,    82,    64,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    50,    84,
      66,    37,    67,    49,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    80,     2,    81,    54,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    78,    53,    79,    75,     2,     2,     2,
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
      35,    36,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    51,    52,    56,    57,    58,    59,    60,
      68,    69,    70,    71,    72,    73,    85,    86
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    77,    77,    83,    86,    87,    88,    91,    94,    95,
      98,    99,   103,   106,   109,   127,   128,   132,   133,   144,
     145,   149,   157,   165,   173,   181,   192,   199,   210,   211,
     214,   221,   230,   233,   239,   243,   247,   256,   280,   308,
     312,   320,   329,   335,   338,   344,   345,   351,   352,   353,
     357,   358,   359,   360,   368,   372,   378,   379,   383,   391,
     399,   407,   415,   426,   441,   449,   495,   498,   501,   507,
     508,   513,   522,   534,   540,   545,   551,   556,   561,   565,
     570,   577,   586,   587,   591,   595,   610,   628,   631,   637,
     638,   641,   647,   656,   668,   675,   684,   685,   686,   687,
     691,   695,   696,   700,   703,   709,   716,   717,   724,   725,
     726,   730,   736,   753,   754,   755,   756,   757,   758,   762,
     763,   764,   765,   766,   770,   771,   772,   773,   774,   775,
     779,   783,   790,   797,   801,   802,   803,   804,   805,   806,
     807,   811,   836,   866,   896,   936,   976,   980,   984,  1011,
    1037,  1078,  1108,  1148,  1178,  1225,  1272,  1299,  1325,  1366,
    1396,  1436,  1466,  1513,  1561,  1562,  1566,  1570,  1571,  1578,
    1587,  1596,  1614,  1624,  1625,  1629,  1630,  1631,  1632,  1633,
    1634,  1638,  1639,  1640,  1641,  1642,  1643,  1647,  1657,  1670,
    1682,  1695,  1708,  1721,  1734,  1735,  1736,  1740,  1741,  1746,
    1749,  1755,  1761,  1797,  1840,  1861,  1890,  1894,  1898,  1905,
    1915,  1919,  1920,  1924,  1966,  2011,  2012,  2016,  2017,  2018,
    2019,  2020,  2021,  2022,  2023,  2024,  2025,  2026,  2027,  2031,
    2032,  2040,  2041,  2051,  2052,  2062,  2063,  2073,  2074,  2084,
    2085,  2095,  2096,  2103,  2113,  2114,  2121,  2128,  2135,  2145,
    2146,  2153,  2163,  2164,  2171,  2181,  2182,  2189,  2196,  2206,
    2207,  2208,  2211,  2218,  2222,  2229,  2236,  2237,  2239,  2242,
    2246,  2247,  2248,  2249,  2253,  2260,  2267
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IFX", "CONTINUE",
  "FOR", "CHAR", "FINAL", "STATIC", "VOID", "CLASS", "LONG", "CONST",
  "FLOAT", "WHILE", "FLOATINGPOINTLITERAL", "TRUELITERAL", "FALSELITERAL",
  "NULLLITERAL", "CHARACTERLITERAL", "IDENTIFIER", "STRINGLITERAL",
  "BOOLEAN", "PRIVATE", "IF", "PACKAGE", "THIS", "BREAK", "DOUBLE", "BYTE",
  "ELSE", "PUBLIC", "RETURN", "INT", "SHORT", "ABSTRACT", "INTEGERLITERAL",
  "'='", "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "AND_ASSIGN", "OR_ASSIGN", "XOR_ASSIGN", "LEFT_ASSIGN",
  "RIGHT_ASSIGN", "UNSIGNED_RIGHT_ASSIGN", "'?'", "':'", "OR_OP", "AND_OP",
  "'|'", "'^'", "'&'", "NE_OP", "EQ_OP", "LEFT_OP", "RIGHT_OP",
  "UNSIGNED_RIGHT_OP", "'+'", "'-'", "'*'", "'/'", "'%'", "'<'", "'>'",
  "GE_OP", "LE_OP", "INSTANCEOF", "NEW", "INC_OP", "DEC_OP", "'!'", "'~'",
  "'('", "')'", "'{'", "'}'", "'['", "']'", "'.'", "','", "';'",
  "PROPORTION", "PTR_OP", "$accept", "Start", "CompilationUnit",
  "PackageDeclaration", "MULTI_TypeDeclaration", "TypeDeclaration",
  "TypeName", "Identifier", "Type", "PrimitiveType", "NumericType",
  "IntegralType", "FloatingPointType", "ReferenceType", "ArrayType",
  "Dims", "ArrayInitialize", "VariableInitializerList", "ClassDeclaration",
  "NormalClassDeclaration", "ClassInit", "ClassBody",
  "MULTI_ClassBodyDeclaration", "ClassBodyDeclaration",
  "ClassMemberDeclaration", "FieldDeclaration", "MULTI_ClassModifier",
  "ClassModifier", "VariableDeclaratorList", "VariableDeclarator",
  "VariableDeclaratorId", "VariableInitializer", "MethodDeclaration",
  "MethodHeader", "MemberName", "FormalParameterList", "FormalParameter",
  "ReceiverParameter", "MethodBody", "StaticInitializer",
  "ConstructorDeclaration", "ConstructorDeclarator", "ConstructorBody",
  "ExplicitConstructorInvocation", "SINGLE_ArgumentList", "Block",
  "BlockStart", "BlockStatements", "BlockStatement",
  "LocalVariableDeclarationStatement", "LocalVariableDeclaration",
  "Statement", "StatementNoShortIf",
  "StatementWithoutTrailingSubstatement", "EmptyStatement",
  "LabeledStatement", "LabeledStatementNoShortIf", "ExpressionStatement",
  "StatementExpression", "IfThenStatement", "IfThenElseStatement",
  "IfThenElseStatementNoShortIf", "WhileStatement",
  "WhileStatementNoShortIf", "ForStatement", "ForStatementNoShortIf",
  "BasicForStatement", "BasicForStatementNoShortIf", "ForInit",
  "ForUpdate", "StatementExpressionList", "BreakStatement",
  "ContinueStatement", "ReturnStatement", "Primary", "PrimaryNoNewArray",
  "Literal", "BooleanLiteral", "IntegerLiteral", "CharacterLiteral",
  "StringLiteral", "NullLiteral", "FloatLiteral",
  "ClassInstanceCreationExpression",
  "UnqualifiedClassInstanceCreationExpression", "FieldAccess",
  "ArrayAccess", "MethodInvocation", "ArgumentList",
  "ArrayCreationExpression", "Expression", "AssignmentExpression",
  "Assignment", "LeftHandSide", "AssignmentOperator",
  "ConditionalExpression", "ConditionalOrExpression",
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

#define YYPACT_NINF (-309)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-274)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      42,  -309,  -309,  -309,  -309,    51,  -309,  -309,  -309,    61,
    -309,    10,    10,  -309,  -309,  -309,   312,  -309,  -309,  -309,
     -38,  -309,  -309,    10,  -309,  -309,  -309,    51,    51,  -309,
    -309,     2,  -309,    51,   570,  -309,     2,  -309,    24,    51,
    -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,   -24,
      16,    51,    68,  -309,  -309,  -309,  -309,  -309,  -309,  1761,
    -309,  -309,  -309,  2434,  -309,    71,  -309,  -309,    81,  -309,
    -309,    90,  -309,    96,   101,    97,   234,   -37,    33,  -309,
     148,   134,    97,  -309,  -309,    51,    71,    81,  -309,  -309,
    -309,  1360,  -309,  1393,   343,  -309,   141,   210,  -309,    62,
      41,  -309,  -309,    97,    51,  -309,  2087,   774,   112,  -309,
    -309,   153,   172,  -309,  -309,  -309,  -309,  -309,  -309,   197,
     204,   186,  1831,  -309,   210,  2343,  2343,  2343,  -309,  -309,
    2167,   253,    51,  -309,  1472,  -309,     6,  1505,  -309,  -309,
     222,  -309,  -309,  -309,  -309,  -309,   228,  -309,  -309,  -309,
    -309,  -309,  -309,  -309,  -309,   239,   254,  -309,  -309,  -309,
    -309,  -309,  -309,  -309,   -20,  -309,  1520,  2436,    31,  -309,
    -309,  2448,  -309,  -309,   127,   146,   156,  -309,  1584,    68,
      59,  -309,    51,  -309,   131,  -309,  -309,  1434,    68,  -309,
    2343,  2343,  2343,  2343,  1802,  2017,  2390,  -309,  -309,  -309,
    -309,  -309,  -309,  -309,  -309,    78,   287,   289,   290,   291,
     194,   215,   207,   216,   252,  -309,  -309,  -309,  -309,   127,
    -309,  -309,  -309,    68,    66,  -309,  -309,  2343,  2343,  2095,
    -309,  -309,  -309,   261,    52,   272,   173,  -309,  -309,  -309,
    -309,   280,  -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,
    -309,  -309,  -309,  -309,  2158,  1988,     4,  2343,   188,   275,
    -309,  1617,   284,  -309,  -309,  -309,  -309,     4,  2343,  2343,
    -309,  -309,  -309,    97,    68,  -309,   335,    51,  -309,  -309,
    -309,  -309,  -309,   285,  -309,    18,  -309,  2343,  2343,  2343,
    2343,  2343,  2343,  2343,  2343,  2343,  2343,  2343,  2343,  2343,
    2343,  2343,  2343,  2343,  2343,  2343,  2343,    97,    68,   292,
     293,   282,    73,  -309,  -309,  2165,  2343,  2343,  -309,  -309,
      93,   286,    51,  -309,  -309,  -309,  -309,  1689,  -309,  -309,
     294,  -309,    97,  -309,  2343,  -309,  2065,   318,   287,   289,
     290,   291,   194,   215,   215,   207,   207,   207,   207,   216,
     216,   252,   252,  -309,  -309,  -309,    97,   188,  1655,  -309,
     295,  2343,     2,    98,   297,   300,  -309,  -309,    43,  1864,
    -309,  -309,   299,   303,  -309,  -309,  -309,  -309,  2343,  -309,
     309,   311,   323,     7,  -309,   358,   359,  -309,  -309,  -309,
    -309,  -309,  -309,  -309,  -309,     2,  -309,  -309,  1258,   306,
    1893,  2350,  -309,  2343,  2343,  1655,   315,   188,  -309,   188,
     317,   303,  2235,  2242,   321,  -309,   319,   322,  -309,  1730,
    -309,  -309,   188,   188,   324,   188,   331,  2249,  1655,  1655,
    1926,   326,  -309,  -309,   188,  -309,   188,   188,   336,  -309,
     384,  2273,   332,  1955,  -309,  -309,  -309,   188,  1655,  1655,
     340,  2280,  2312,   334,  -309,  -309,  -309,  1655,  1655,   342,
    1655,   344,  2319,  -309,  -309,  1655,  -309,  1655,  1655,   350,
    -309,  -309,  -309,  1655,  -309
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       6,    61,    60,   105,    59,     0,    58,    62,    11,     0,
       2,     5,     4,     8,    10,    39,     0,    56,    42,    14,
       0,    12,     1,     3,     9,   105,    57,     0,     0,     7,
      42,     0,    13,     0,     0,    41,     0,    25,    60,     0,
      24,    26,    18,    27,    21,    23,    22,    44,    53,    28,
      12,     0,    15,    17,    19,    20,    16,    29,    52,     0,
      45,    47,    50,     0,    51,   105,    48,    49,     0,    40,
      91,     0,    81,     0,     0,    31,     0,    68,     0,    64,
      66,     0,    30,    43,    46,     0,   105,     0,    90,    72,
      89,   105,    93,   105,     0,    33,     0,     0,    95,     0,
       0,    84,    82,    67,     0,    55,     0,     0,     0,    71,
      92,     0,     0,   193,   187,   188,   192,   190,   191,     0,
       0,     0,     0,   189,     0,     0,     0,     0,    99,   130,
     271,    12,     0,   109,   105,   124,     0,   105,   106,   108,
       0,   110,   113,   125,   114,   126,     0,   115,   116,   117,
     118,   146,   127,   128,   129,   270,   173,   175,   181,   182,
     183,   184,   185,   186,   177,   194,   178,   179,   180,   174,
     134,     0,   135,   136,     0,   137,   138,   104,   105,    78,
       0,    32,     0,    87,    68,    86,    94,     0,    68,    63,
       0,     0,     0,     0,     0,     0,   271,    70,    65,   177,
     180,    69,   210,   212,   211,   229,   231,   233,   235,   237,
     239,   241,   244,   249,   252,   255,   259,   260,   263,   266,
     272,   273,   269,    74,     0,    54,   170,     0,     0,     0,
     100,   169,   172,     0,     0,     0,   271,   178,   179,   264,
     265,     0,   217,   221,   222,   218,   219,   220,   226,   228,
     227,   223,   224,   225,     0,     0,     0,     0,   105,   112,
      98,   105,     0,    97,   107,   111,   133,     0,     0,     0,
     274,   275,   103,    80,    77,    85,     0,     0,    83,   261,
     262,   268,   267,     0,    36,     0,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    76,    73,     0,
       0,     0,     0,   207,   171,     0,     0,     0,   176,   204,
       0,     0,     0,   195,   214,   131,    96,     0,   201,   196,
       0,   213,    79,    88,     0,    35,     0,     0,   232,   234,
     236,   238,   240,   243,   242,   245,   246,   248,   247,   250,
     251,   253,   254,   256,   257,   258,    75,   105,   105,   101,
       0,     0,   200,     0,     0,     0,   205,   202,     0,     0,
     165,   167,     0,   164,   203,   276,    34,    38,     0,   144,
       0,     0,    12,     0,   141,     0,   113,   120,   121,   122,
     123,   147,   102,   206,   199,   197,   209,   208,     0,     0,
       0,     0,   230,     0,     0,   105,     0,   105,   198,   105,
       0,   166,     0,     0,     0,   168,     0,     0,   132,     0,
     142,   148,   105,   105,     0,   105,     0,     0,   105,   105,
       0,     0,   151,   150,   105,   149,   105,   105,     0,   145,
       0,     0,     0,     0,   154,   153,   152,   105,   105,   105,
       0,     0,     0,     0,   155,   143,   156,   105,   105,     0,
     105,     0,     0,   159,   158,   105,   157,   105,   105,     0,
     162,   161,   160,   105,   163
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -309,  -309,  -309,  -309,   417,    19,    -4,   -25,    47,  -118,
    -309,  -309,  -309,  -309,  -309,   -39,  -309,  -309,   135,  -309,
     401,   -31,  -309,   375,  -309,  -309,    -5,    37,   -62,   337,
     -84,  -191,  -309,   381,   408,   -67,   264,  -309,   366,  -309,
    -309,   390,   369,  -309,  -309,    13,    -3,   -65,  -130,  -309,
    -308,   859,   683,     1,  -309,  -309,  -309,  -309,   633,  -309,
    -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,    44,  -261,
    -306,  -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,
    -309,  -309,  -309,    80,  -220,   631,  1056,   214,  -229,  -309,
     898,  -309,   -90,  -309,   296,    82,  -309,   182,   183,   185,
     187,   184,    14,    28,    36,    26,   -30,   302,   431,  -309,
     554,   642,   771,  -309
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     9,    10,    11,    12,    13,   196,    21,   132,    52,
      53,    54,    55,    56,    57,   103,   197,   285,   133,    15,
      27,    35,    59,    60,    61,    62,    16,    17,    78,    79,
      80,   198,    64,    65,    81,   100,   101,   102,    89,    66,
      67,    68,    92,   134,   230,   135,   136,   137,   138,   139,
     140,   141,   385,   142,   143,   144,   387,   145,   146,   147,
     148,   388,   149,   389,   150,   390,   151,   391,   372,   410,
     411,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   199,   165,   166,   167,   200,   312,   169,
     201,   202,   170,   171,   257,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      18,    20,    31,    32,   286,    69,   235,   264,    36,    50,
      75,   262,   406,    82,    72,   185,   203,     1,     2,   370,
       3,   373,    30,   108,    19,   320,    77,   180,   178,    63,
      49,    24,   203,     4,    50,    71,   323,   203,    50,   -81,
     224,     6,    24,    74,    28,     7,    29,   329,   264,     1,
       2,    70,     3,    26,    63,    49,    74,  -140,    28,    49,
      77,    22,    71,  -140,  -140,     4,   131,     5,   131,   261,
     259,    19,    49,     6,   184,   322,   283,     7,    90,   188,
      34,    51,    19,    71,    93,    93,   363,   130,   183,   130,
      49,    75,    76,    49,     8,   239,   240,   335,   275,    90,
      26,   336,  -105,    49,   203,   203,    51,   188,  -139,   131,
      85,   370,   131,   373,  -139,  -139,   104,   105,   186,   315,
     234,   236,   236,    99,   187,    28,     8,   288,   315,   289,
     130,   264,   316,   130,    28,    14,   274,   203,   203,   203,
     273,    99,   187,   308,   182,   377,    14,    14,    74,   187,
     360,   424,   426,   131,    99,    88,   361,   188,    14,    91,
     279,   280,   281,   282,   203,   203,   438,   203,    93,    58,
     366,   164,    94,   164,   130,   395,   361,    96,   203,   203,
     450,   361,    95,    49,   307,   106,   236,   236,   236,   236,
     459,   461,   111,   185,    58,   104,   225,   203,   203,   270,
     271,   469,   112,   113,   114,   115,   116,   117,    19,   118,
     107,    74,   119,   276,   164,   121,    37,   164,  -272,  -272,
     122,    40,   181,    41,   123,   203,   203,   203,  -273,  -273,
      19,    32,    42,   131,   277,   332,   131,   226,    43,    44,
      37,    97,   328,    45,    46,    40,   203,    41,   227,   254,
     294,   295,   188,   287,    19,   256,    42,   130,   164,   124,
     125,   126,    43,    44,   127,   300,   301,    45,    46,   356,
     231,   203,   129,   228,   353,   354,   355,   302,   303,   203,
     229,   296,   297,   298,   299,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   258,   375,   168,   265,   168,   343,   344,
     203,    98,   266,   203,   203,   304,   305,   306,   368,     1,
       2,   267,    25,   130,   345,   346,   347,   348,   351,   352,
     236,   394,   131,   382,   268,     4,   349,   350,   164,   290,
     203,   164,   291,     6,   292,   314,   293,     7,   168,    37,
      97,   168,   317,   203,    40,   383,    41,   318,   104,   386,
     327,   333,   334,    19,   408,    42,   359,   367,   378,   357,
     358,    43,    44,   405,   236,   374,    45,    46,   396,   392,
     382,   397,   131,   400,   131,   403,   401,   404,   407,  -119,
     412,   419,   168,   172,   422,   172,   428,   131,   131,   429,
     131,   434,   383,   382,   382,   427,   386,   164,   436,   131,
     443,   131,   131,   447,   448,   130,   451,   457,   462,   465,
     179,   467,   131,   382,   382,   383,   383,   473,    23,   386,
     386,    33,   382,   382,    84,   382,   172,   164,   164,   172,
     382,   189,   382,   382,    86,   383,   383,    73,   382,   386,
     386,   278,   109,    87,   383,   383,   110,   383,   386,   386,
     402,   386,   383,   431,   383,   383,   386,   269,   386,   386,
     383,   338,   168,   339,   386,   168,   340,   342,   164,   341,
     172,   164,     0,     0,     0,   164,     0,   164,     0,   164,
       0,     0,   164,   164,     0,     0,     0,     0,     0,   164,
       0,     0,   164,   164,     0,   164,     0,   164,   164,   164,
       0,     0,     0,     0,   164,     0,   164,   164,     0,     0,
       0,   164,   173,     0,   173,     0,     0,   164,   164,   164,
       0,   164,   164,     0,     0,     0,     0,   164,   164,     0,
     164,   168,   164,     0,     0,   164,     0,   164,   164,     0,
       0,     0,     0,   164,     0,     0,     0,     0,     0,     0,
     172,     0,     0,   172,     0,   173,     0,     0,   173,     0,
       0,   168,   168,     0,     0,     0,    37,     1,    38,    39,
       3,    40,     0,    41,     0,     0,     0,     0,     0,     0,
      19,     0,    42,     4,     0,     0,     0,     0,    43,    44,
       0,     6,     0,    45,    46,     7,     0,     0,     0,   173,
       0,     0,   168,     0,     0,   168,     0,     0,     0,   168,
       0,   168,     0,   168,     0,     0,   168,   168,     0,   172,
       0,     0,     0,   168,     0,     0,   168,   168,     0,   168,
       0,   168,   168,   168,     0,   174,     0,   174,   168,    47,
     168,   168,     0,     0,    48,   168,     0,     0,     0,   172,
     172,   168,   168,   168,     0,   168,   168,     0,     0,     0,
       0,   168,   168,     0,   168,     0,   168,     0,     0,   168,
       0,   168,   168,     0,     0,     0,     0,   168,   174,   173,
       0,   174,   173,     0,     0,     0,     0,     0,     0,     0,
     172,     0,     0,   172,     0,     0,     0,   172,     0,   172,
       0,   172,     0,     0,   172,   172,     0,     0,     0,     0,
       0,   172,     0,     0,   172,   172,     0,   172,     0,   172,
     172,   172,   174,   175,     0,   175,   172,     0,   172,   172,
       0,     0,     0,   172,     0,     0,     0,     0,     0,   172,
     172,   172,     0,   172,   172,     0,   237,   237,   173,   172,
     172,     0,   172,     0,   172,     0,     0,   172,     0,   172,
     172,     0,     0,     0,     0,   172,   175,     0,     0,   175,
      37,    97,     0,     0,     0,    40,     0,    41,   173,   173,
       0,     0,     0,     0,    19,     0,    42,     0,     0,     0,
       0,     0,    43,    44,     0,     0,     0,    45,    46,     0,
       0,     0,   174,     0,     0,   174,     0,     0,     0,     0,
     175,   237,   237,   237,   237,     0,     0,     0,     0,   173,
       0,     0,   173,     0,     0,     0,   173,     0,   173,     0,
     173,     0,     0,   173,   173,     0,     0,     0,     0,     0,
     173,   223,     0,   173,   173,     0,   173,     0,   173,   173,
     173,     0,   176,     0,   176,   173,     0,   173,   173,     0,
       0,     0,   173,     0,     0,     0,     0,     0,   173,   173,
     173,   174,   173,   173,     0,     0,     0,     0,   173,   173,
       0,   173,     0,   173,     0,     0,   173,     0,   173,   173,
     175,     0,     0,   175,   173,   176,     0,     0,   176,     0,
       0,   174,   174,     0,     0,     0,     0,     0,     0,     0,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   176,
       0,     0,   174,     0,     0,   174,     0,     0,     0,   174,
     371,   174,     0,   174,     0,   237,   174,   174,     0,   175,
       0,     0,     0,   174,     0,     0,   174,   174,     0,   174,
       0,   174,   174,   174,     0,     0,     0,     0,   174,     0,
     174,   174,     0,     0,     0,   174,     0,     0,     0,   175,
     175,   174,   174,   174,     0,   174,   174,     0,     0,   237,
       0,   174,   174,     0,   174,     0,   174,     0,     0,   174,
     233,   174,   174,     0,     0,   241,     0,   174,     0,   176,
       0,   371,   176,     0,   415,     0,     0,     0,     0,     0,
     175,     0,     0,   175,     0,   371,   371,   175,     0,   175,
       0,   175,   371,     0,   175,   175,     0,     0,     0,     0,
     371,   175,     0,     0,   175,   175,     0,   175,     0,   175,
     175,   175,     0,     0,   371,     0,   175,     0,   175,   175,
       0,     0,     0,   175,   371,   371,     0,     0,   418,   175,
     175,   175,   241,   175,   175,   371,     0,     0,   176,   175,
     175,     0,   175,     0,   175,     0,     0,   175,     0,   175,
     175,   439,   440,     0,     0,   175,     0,   325,     0,     0,
       0,     0,     0,     0,     0,   309,   310,   313,   176,   176,
       0,   455,   456,     0,     0,     0,     0,     0,     0,     0,
     463,   464,     0,   466,     0,     0,     0,     0,   470,     0,
     471,   472,   313,   321,     0,   324,   474,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   330,   331,     0,   176,
       0,     0,   176,     0,     0,     0,   176,     0,   176,     0,
     176,   238,   238,   176,   176,   321,   337,     0,     0,     0,
     176,     0,     0,   176,   176,     0,   176,     0,   176,   176,
     176,     0,     0,     0,     0,   176,     0,   176,   176,     0,
       0,     0,   176,   313,   364,   365,   379,   384,   176,   176,
     176,     0,   176,   176,     0,     0,     0,     0,   176,   176,
       0,   176,     0,   176,     0,     0,   176,     0,   176,   176,
       0,     0,     0,     0,   176,     0,   238,   238,   238,   238,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   393,
       0,     0,     0,     0,   325,     0,   420,   399,   421,     0,
       0,     0,     0,   113,   114,   115,   116,   117,    19,   118,
       0,   432,   433,     0,   435,     0,     0,   379,   384,     0,
       0,     0,     0,   444,   123,   445,   446,     0,   414,     0,
       0,   416,   417,     0,     0,     0,   454,   420,   421,     0,
       0,     0,     0,     0,     0,     0,   432,   433,     0,   435,
       0,     0,     0,     0,   444,     0,   445,   446,   442,   124,
     125,   126,   454,     0,   127,   409,     0,     0,     0,     0,
       0,   453,     0,     0,     0,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,     0,   111,     0,    37,     1,     2,     0,
       3,    40,     0,    41,   112,   113,   114,   115,   116,   117,
      19,   118,    42,     4,   119,     0,   120,   121,    43,    44,
     238,     6,   122,    45,    46,     7,   123,   111,     0,    37,
       1,     2,     0,     3,    40,     0,    41,   112,   113,   114,
     115,   116,   117,    19,   118,    42,     4,   119,     0,     0,
     121,    43,    44,     0,     6,   122,    45,    46,     7,   123,
       0,   124,   125,   126,   238,     0,   127,     0,     0,   128,
      37,    97,     0,     0,   129,    40,     0,    41,     0,     0,
       0,     0,     0,     0,    19,     0,    42,     0,     0,     0,
       0,     0,    43,    44,   124,   125,   126,    45,    46,   127,
       0,     0,   177,     0,     0,     0,   111,   129,    37,     1,
       2,     0,     3,    40,     0,    41,   112,   113,   114,   115,
     116,   117,    19,   118,    42,     4,   119,     0,     0,   121,
      43,    44,     0,     6,   122,    45,    46,     7,   123,   111,
       0,    37,     1,     2,     0,     3,    40,     0,    41,   112,
     113,   114,   115,   116,   117,    19,   118,    42,     4,   119,
       0,     0,   121,    43,    44,     0,     6,   122,    45,    46,
       7,   123,     0,   124,   125,   126,     0,     0,   127,     0,
       0,   260,     0,     0,     0,     0,   129,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,     0,
       0,     0,     0,     0,     0,     0,   124,   125,   126,     0,
       0,   127,     0,     0,   263,     0,     0,     0,   111,   129,
      37,     1,     2,     0,     3,    40,     0,    41,   112,   113,
     114,   115,   116,   117,    19,   118,    42,     4,   119,     0,
       0,   121,    43,    44,     0,     6,   122,    45,    46,     7,
     123,   111,     0,    37,     1,     2,     0,     3,    40,     0,
      41,   112,   113,   114,   115,   116,   117,    19,   118,    42,
       4,   119,     0,     0,   121,    43,    44,     0,     6,   122,
      45,    46,     7,   123,     0,   124,   125,   126,     0,   111,
     127,     0,     0,   272,     0,     0,     0,     0,   129,   380,
     113,   114,   115,   116,   117,    19,   118,     0,     0,   381,
       0,     0,   121,     0,     0,     0,     0,   122,   124,   125,
     126,   123,     0,   127,     0,    37,   326,     0,     0,     0,
      40,   129,    41,     0,   113,   114,   115,   116,   117,    19,
     118,    42,     0,     0,     0,     0,     0,    43,    44,     0,
       0,     0,    45,    46,     0,   123,   124,   125,   126,     0,
       0,   127,     0,     0,     0,     0,    37,     0,     0,   129,
       0,    40,     0,    41,     0,   113,   114,   115,   116,   117,
      19,   118,    42,     0,     0,     0,     0,     0,    43,    44,
     124,   125,   126,    45,    46,   127,   123,    37,     1,    38,
      39,     3,    40,   369,    41,     0,     0,     0,     0,     0,
       0,    19,     0,    42,     4,     0,     0,     0,     0,    43,
      44,     0,     6,     0,    45,    46,     7,     0,     0,     0,
       0,   124,   125,   126,     0,     0,   127,     0,    37,     0,
       0,     0,     0,    40,   430,    41,     0,   113,   114,   115,
     116,   117,    19,   118,    42,     0,     0,     0,     0,     0,
      43,    44,     0,     0,     0,    45,    46,     0,   123,     0,
      83,     0,     0,     0,     0,    48,   113,   114,   115,   116,
     117,    19,   118,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   190,   191,     0,     0,   123,     0,     0,
       0,     0,     0,   124,   125,   126,   192,   193,   194,   113,
     114,   115,   116,   117,    19,   118,     0,     0,     0,     0,
       0,     0,   190,   191,     0,     0,     0,     0,     0,     0,
     123,     0,   124,   125,   126,   192,   193,   194,   113,   114,
     115,   116,   117,    19,   118,   232,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   190,   191,     0,     0,   123,
       0,     0,     0,     0,     0,   124,   125,   126,   192,   193,
     194,   113,   114,   115,   116,   117,    19,   118,   398,     0,
       0,     0,     0,     0,   190,   191,     0,     0,     0,     0,
       0,     0,   123,     0,   124,   125,   126,   192,   193,   194,
     113,   114,   115,   116,   117,    19,   118,   413,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   190,   191,     0,
       0,   123,     0,     0,     0,     0,     0,   124,   125,   126,
     192,   193,   194,   113,   114,   115,   116,   117,    19,   118,
     441,     0,     0,     0,     0,     0,   190,   191,     0,     0,
       0,     0,     0,     0,   123,     0,   124,   125,   126,   192,
     193,   194,   113,   114,   115,   116,   117,    19,   118,   452,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   190,
     191,     0,     0,   123,     0,     0,     0,     0,     0,   124,
     125,   126,   192,   193,   194,     0,     0,     0,     0,    95,
       0,     0,     0,     0,     0,     0,     0,     0,   190,   191,
     113,   114,   115,   116,   117,    19,   118,     0,   124,   125,
     126,   192,   193,   194,     0,   195,   284,     0,     0,     0,
       0,   123,   113,   114,   115,   116,   117,    19,   118,     0,
     113,   114,   115,   116,   117,    19,   118,     0,     0,     0,
       0,     0,     0,   123,     0,     0,   190,   191,     0,     0,
       0,   123,     0,     0,     0,     0,   124,   125,   126,   192,
     193,   194,     0,   195,   376,     0,     0,     0,   190,   191,
       0,     0,     0,     0,     0,     0,   190,   191,   124,   125,
     126,   192,   193,   194,     0,   195,   124,   125,   126,   192,
     193,   194,   311,   113,   114,   115,   116,   117,    19,   118,
     113,   114,   115,   116,   117,    19,   118,   -28,     0,     0,
       0,     0,     0,     0,   123,     0,     0,     0,     0,     0,
       0,   123,     0,     0,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,     0,     0,     0,   190,
     191,     0,     0,     0,     0,     0,   190,   191,     0,   124,
     125,   126,   192,   193,   194,   319,   124,   125,   126,   192,
     193,   194,   362,   254,     0,     0,     0,   255,     0,   256,
     113,   114,   115,   116,   117,    19,   118,   113,   114,   115,
     116,   117,    19,   118,   113,   114,   115,   116,   117,    19,
     118,   123,     0,     0,     0,     0,     0,     0,   123,     0,
       0,     0,     0,     0,     0,   123,     0,     0,   113,   114,
     115,   116,   117,    19,   118,   113,   114,   115,   116,   117,
      19,   118,     0,     0,     0,     0,   124,   125,   126,   123,
       0,   127,   423,   124,   125,   126,   123,     0,   127,   425,
     124,   125,   126,     0,     0,   127,   437,   113,   114,   115,
     116,   117,    19,   118,   113,   114,   115,   116,   117,    19,
     118,     0,     0,     0,   124,   125,   126,     0,   123,   127,
     449,   124,   125,   126,     0,   123,   127,   458,   113,   114,
     115,   116,   117,    19,   118,   113,   114,   115,   116,   117,
      19,   118,     0,     0,     0,     0,     0,     0,     0,   123,
       0,     0,     0,   124,   125,   126,   123,     0,   127,   460,
     124,   125,   126,     0,     0,   127,   468,     0,     0,     0,
       0,     0,     0,     0,   190,   191,     0,     0,     0,     0,
       0,     0,     0,     0,   124,   125,   126,   192,   193,   194,
       0,   124,   125,   126,     0,     0,   127,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,     0,
      37,     1,     2,    39,    25,    40,     0,    41,     0,     0,
       0,     0,     0,     0,    19,     0,    42,     4,     0,     0,
       0,     0,    43,    44,     0,     6,   254,    45,    46,     7,
     287,     0,   256,  -216,  -216,  -216,  -216,  -216,  -216,  -216,
    -216,  -216,  -216,  -216,  -216,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253
};

static const yytype_int16 yycheck[] =
{
       3,     5,    27,    28,   195,    36,   124,   137,    33,    34,
      49,     5,     5,    52,    39,    99,   106,     7,     8,   327,
      10,   327,    25,    85,    20,   254,    51,    94,    93,    34,
      34,    12,   122,    23,    59,    38,   256,   127,    63,    76,
     107,    31,    23,    80,    82,    35,    84,   267,   178,     7,
       8,    38,    10,    16,    59,    59,    80,    77,    82,    63,
      85,     0,    65,    83,    84,    23,    91,    25,    93,   134,
     132,    20,    76,    31,    99,    71,   194,    35,    65,   104,
      78,    34,    20,    86,    78,    78,   315,    91,    26,    93,
      94,   130,    76,    97,    84,   125,   126,    79,   182,    86,
      63,    83,    78,   107,   194,   195,    59,   132,    77,   134,
      63,   419,   137,   419,    83,    84,    83,    84,    77,    76,
     124,   125,   126,    76,    83,    82,    84,    49,    76,    51,
     134,   261,    80,   137,    82,     0,    77,   227,   228,   229,
     179,    94,    83,    77,    97,   336,    11,    12,    80,    83,
      77,   412,   413,   178,   107,    84,    83,   182,    23,    78,
     190,   191,   192,   193,   254,   255,   427,   257,    78,    34,
      77,    91,    76,    93,   178,    77,    83,    80,   268,   269,
     441,    83,    81,   187,   223,    37,   190,   191,   192,   193,
     451,   452,     4,   277,    59,    83,    84,   287,   288,    72,
      73,   462,    14,    15,    16,    17,    18,    19,    20,    21,
      76,    80,    24,    82,   134,    27,     6,   137,    72,    73,
      32,    11,    81,    13,    36,   315,   316,   317,    72,    73,
      20,   256,    22,   258,   187,   274,   261,    84,    28,    29,
       6,     7,   267,    33,    34,    11,   336,    13,    76,    76,
      56,    57,   277,    80,    20,    82,    22,   261,   178,    71,
      72,    73,    28,    29,    76,    58,    59,    33,    34,   308,
      84,   361,    84,    76,   304,   305,   306,    61,    62,   369,
      76,    66,    67,    68,    69,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,    50,   334,    91,    84,    93,   294,   295,
     400,    77,    84,   403,   404,    63,    64,    65,   322,     7,
       8,    82,    10,   327,   296,   297,   298,   299,   302,   303,
     334,   362,   357,   358,    80,    23,   300,   301,   258,    52,
     430,   261,    53,    31,    54,    84,    55,    35,   134,     6,
       7,   137,    80,   443,    11,   358,    13,    77,    83,   358,
      76,    26,    77,    20,   395,    22,    84,    81,    50,    77,
      77,    28,    29,    50,   378,    81,    33,    34,    81,    84,
     405,    81,   407,    84,   409,    76,    83,    76,    30,    30,
      84,    76,   178,    91,    77,    93,    77,   422,   423,    77,
     425,    77,   405,   428,   429,    84,   405,   327,    77,   434,
      84,   436,   437,    77,    30,   419,    84,    77,    84,    77,
      77,    77,   447,   448,   449,   428,   429,    77,    11,   428,
     429,    30,   457,   458,    59,   460,   134,   357,   358,   137,
     465,   104,   467,   468,    63,   448,   449,    39,   473,   448,
     449,   187,    86,    63,   457,   458,    87,   460,   457,   458,
     378,   460,   465,   419,   467,   468,   465,   171,   467,   468,
     473,   289,   258,   290,   473,   261,   291,   293,   398,   292,
     178,   401,    -1,    -1,    -1,   405,    -1,   407,    -1,   409,
      -1,    -1,   412,   413,    -1,    -1,    -1,    -1,    -1,   419,
      -1,    -1,   422,   423,    -1,   425,    -1,   427,   428,   429,
      -1,    -1,    -1,    -1,   434,    -1,   436,   437,    -1,    -1,
      -1,   441,    91,    -1,    93,    -1,    -1,   447,   448,   449,
      -1,   451,   452,    -1,    -1,    -1,    -1,   457,   458,    -1,
     460,   327,   462,    -1,    -1,   465,    -1,   467,   468,    -1,
      -1,    -1,    -1,   473,    -1,    -1,    -1,    -1,    -1,    -1,
     258,    -1,    -1,   261,    -1,   134,    -1,    -1,   137,    -1,
      -1,   357,   358,    -1,    -1,    -1,     6,     7,     8,     9,
      10,    11,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    22,    23,    -1,    -1,    -1,    -1,    28,    29,
      -1,    31,    -1,    33,    34,    35,    -1,    -1,    -1,   178,
      -1,    -1,   398,    -1,    -1,   401,    -1,    -1,    -1,   405,
      -1,   407,    -1,   409,    -1,    -1,   412,   413,    -1,   327,
      -1,    -1,    -1,   419,    -1,    -1,   422,   423,    -1,   425,
      -1,   427,   428,   429,    -1,    91,    -1,    93,   434,    79,
     436,   437,    -1,    -1,    84,   441,    -1,    -1,    -1,   357,
     358,   447,   448,   449,    -1,   451,   452,    -1,    -1,    -1,
      -1,   457,   458,    -1,   460,    -1,   462,    -1,    -1,   465,
      -1,   467,   468,    -1,    -1,    -1,    -1,   473,   134,   258,
      -1,   137,   261,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     398,    -1,    -1,   401,    -1,    -1,    -1,   405,    -1,   407,
      -1,   409,    -1,    -1,   412,   413,    -1,    -1,    -1,    -1,
      -1,   419,    -1,    -1,   422,   423,    -1,   425,    -1,   427,
     428,   429,   178,    91,    -1,    93,   434,    -1,   436,   437,
      -1,    -1,    -1,   441,    -1,    -1,    -1,    -1,    -1,   447,
     448,   449,    -1,   451,   452,    -1,   125,   126,   327,   457,
     458,    -1,   460,    -1,   462,    -1,    -1,   465,    -1,   467,
     468,    -1,    -1,    -1,    -1,   473,   134,    -1,    -1,   137,
       6,     7,    -1,    -1,    -1,    11,    -1,    13,   357,   358,
      -1,    -1,    -1,    -1,    20,    -1,    22,    -1,    -1,    -1,
      -1,    -1,    28,    29,    -1,    -1,    -1,    33,    34,    -1,
      -1,    -1,   258,    -1,    -1,   261,    -1,    -1,    -1,    -1,
     178,   190,   191,   192,   193,    -1,    -1,    -1,    -1,   398,
      -1,    -1,   401,    -1,    -1,    -1,   405,    -1,   407,    -1,
     409,    -1,    -1,   412,   413,    -1,    -1,    -1,    -1,    -1,
     419,    77,    -1,   422,   423,    -1,   425,    -1,   427,   428,
     429,    -1,    91,    -1,    93,   434,    -1,   436,   437,    -1,
      -1,    -1,   441,    -1,    -1,    -1,    -1,    -1,   447,   448,
     449,   327,   451,   452,    -1,    -1,    -1,    -1,   457,   458,
      -1,   460,    -1,   462,    -1,    -1,   465,    -1,   467,   468,
     258,    -1,    -1,   261,   473,   134,    -1,    -1,   137,    -1,
      -1,   357,   358,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   178,
      -1,    -1,   398,    -1,    -1,   401,    -1,    -1,    -1,   405,
     327,   407,    -1,   409,    -1,   334,   412,   413,    -1,   327,
      -1,    -1,    -1,   419,    -1,    -1,   422,   423,    -1,   425,
      -1,   427,   428,   429,    -1,    -1,    -1,    -1,   434,    -1,
     436,   437,    -1,    -1,    -1,   441,    -1,    -1,    -1,   357,
     358,   447,   448,   449,    -1,   451,   452,    -1,    -1,   378,
      -1,   457,   458,    -1,   460,    -1,   462,    -1,    -1,   465,
     122,   467,   468,    -1,    -1,   127,    -1,   473,    -1,   258,
      -1,   398,   261,    -1,   401,    -1,    -1,    -1,    -1,    -1,
     398,    -1,    -1,   401,    -1,   412,   413,   405,    -1,   407,
      -1,   409,   419,    -1,   412,   413,    -1,    -1,    -1,    -1,
     427,   419,    -1,    -1,   422,   423,    -1,   425,    -1,   427,
     428,   429,    -1,    -1,   441,    -1,   434,    -1,   436,   437,
      -1,    -1,    -1,   441,   451,   452,    -1,    -1,   405,   447,
     448,   449,   194,   451,   452,   462,    -1,    -1,   327,   457,
     458,    -1,   460,    -1,   462,    -1,    -1,   465,    -1,   467,
     468,   428,   429,    -1,    -1,   473,    -1,   258,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   227,   228,   229,   357,   358,
      -1,   448,   449,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     457,   458,    -1,   460,    -1,    -1,    -1,    -1,   465,    -1,
     467,   468,   254,   255,    -1,   257,   473,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   268,   269,    -1,   398,
      -1,    -1,   401,    -1,    -1,    -1,   405,    -1,   407,    -1,
     409,   125,   126,   412,   413,   287,   288,    -1,    -1,    -1,
     419,    -1,    -1,   422,   423,    -1,   425,    -1,   427,   428,
     429,    -1,    -1,    -1,    -1,   434,    -1,   436,   437,    -1,
      -1,    -1,   441,   315,   316,   317,   357,   358,   447,   448,
     449,    -1,   451,   452,    -1,    -1,    -1,    -1,   457,   458,
      -1,   460,    -1,   462,    -1,    -1,   465,    -1,   467,   468,
      -1,    -1,    -1,    -1,   473,    -1,   190,   191,   192,   193,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   361,
      -1,    -1,    -1,    -1,   405,    -1,   407,   369,   409,    -1,
      -1,    -1,    -1,    15,    16,    17,    18,    19,    20,    21,
      -1,   422,   423,    -1,   425,    -1,    -1,   428,   429,    -1,
      -1,    -1,    -1,   434,    36,   436,   437,    -1,   400,    -1,
      -1,   403,   404,    -1,    -1,    -1,   447,   448,   449,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   457,   458,    -1,   460,
      -1,    -1,    -1,    -1,   465,    -1,   467,   468,   430,    71,
      72,    73,   473,    -1,    76,    77,    -1,    -1,    -1,    -1,
      -1,   443,    -1,    -1,    -1,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,    -1,     4,    -1,     6,     7,     8,    -1,
      10,    11,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    -1,    26,    27,    28,    29,
     334,    31,    32,    33,    34,    35,    36,     4,    -1,     6,
       7,     8,    -1,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      27,    28,    29,    -1,    31,    32,    33,    34,    35,    36,
      -1,    71,    72,    73,   378,    -1,    76,    -1,    -1,    79,
       6,     7,    -1,    -1,    84,    11,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    22,    -1,    -1,    -1,
      -1,    -1,    28,    29,    71,    72,    73,    33,    34,    76,
      -1,    -1,    79,    -1,    -1,    -1,     4,    84,     6,     7,
       8,    -1,    10,    11,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    27,
      28,    29,    -1,    31,    32,    33,    34,    35,    36,     4,
      -1,     6,     7,     8,    -1,    10,    11,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    27,    28,    29,    -1,    31,    32,    33,    34,
      35,    36,    -1,    71,    72,    73,    -1,    -1,    76,    -1,
      -1,    79,    -1,    -1,    -1,    -1,    84,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,    -1,
      -1,    76,    -1,    -1,    79,    -1,    -1,    -1,     4,    84,
       6,     7,     8,    -1,    10,    11,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    27,    28,    29,    -1,    31,    32,    33,    34,    35,
      36,     4,    -1,     6,     7,     8,    -1,    10,    11,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    27,    28,    29,    -1,    31,    32,
      33,    34,    35,    36,    -1,    71,    72,    73,    -1,     4,
      76,    -1,    -1,    79,    -1,    -1,    -1,    -1,    84,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    24,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    32,    71,    72,
      73,    36,    -1,    76,    -1,     6,    79,    -1,    -1,    -1,
      11,    84,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,
      -1,    -1,    33,    34,    -1,    36,    71,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,     6,    -1,    -1,    84,
      -1,    11,    -1,    13,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    28,    29,
      71,    72,    73,    33,    34,    76,    36,     6,     7,     8,
       9,    10,    11,    84,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    22,    23,    -1,    -1,    -1,    -1,    28,
      29,    -1,    31,    -1,    33,    34,    35,    -1,    -1,    -1,
      -1,    71,    72,    73,    -1,    -1,    76,    -1,     6,    -1,
      -1,    -1,    -1,    11,    84,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      28,    29,    -1,    -1,    -1,    33,    34,    -1,    36,    -1,
      79,    -1,    -1,    -1,    -1,    84,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    76,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      36,    -1,    71,    72,    73,    74,    75,    76,    15,    16,
      17,    18,    19,    20,    21,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    71,    72,    73,    74,    75,
      76,    15,    16,    17,    18,    19,    20,    21,    84,    -1,
      -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    -1,    71,    72,    73,    74,    75,    76,
      15,    16,    17,    18,    19,    20,    21,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    76,    15,    16,    17,    18,    19,    20,    21,
      84,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    71,    72,    73,    74,
      75,    76,    15,    16,    17,    18,    19,    20,    21,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    71,
      72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
      15,    16,    17,    18,    19,    20,    21,    -1,    71,    72,
      73,    74,    75,    76,    -1,    78,    79,    -1,    -1,    -1,
      -1,    36,    15,    16,    17,    18,    19,    20,    21,    -1,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    61,    62,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    71,    72,    73,    74,
      75,    76,    -1,    78,    79,    -1,    -1,    -1,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    71,    72,
      73,    74,    75,    76,    -1,    78,    71,    72,    73,    74,
      75,    76,    77,    15,    16,    17,    18,    19,    20,    21,
      15,    16,    17,    18,    19,    20,    21,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    -1,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    -1,    -1,    61,
      62,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    71,
      72,    73,    74,    75,    76,    77,    71,    72,    73,    74,
      75,    76,    77,    76,    -1,    -1,    -1,    80,    -1,    82,
      15,    16,    17,    18,    19,    20,    21,    15,    16,    17,
      18,    19,    20,    21,    15,    16,    17,    18,    19,    20,
      21,    36,    -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    15,    16,
      17,    18,    19,    20,    21,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    71,    72,    73,    36,
      -1,    76,    77,    71,    72,    73,    36,    -1,    76,    77,
      71,    72,    73,    -1,    -1,    76,    77,    15,    16,    17,
      18,    19,    20,    21,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    71,    72,    73,    -1,    36,    76,
      77,    71,    72,    73,    -1,    36,    76,    77,    15,    16,
      17,    18,    19,    20,    21,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    71,    72,    73,    36,    -1,    76,    77,
      71,    72,    73,    -1,    -1,    76,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    72,    73,    74,    75,    76,
      -1,    71,    72,    73,    -1,    -1,    76,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
       6,     7,     8,     9,    10,    11,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    22,    23,    -1,    -1,
      -1,    -1,    28,    29,    -1,    31,    76,    33,    34,    35,
      80,    -1,    82,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,     8,    10,    23,    25,    31,    35,    84,    88,
      89,    90,    91,    92,   105,   106,   113,   114,   133,    20,
      93,    94,     0,    91,    92,    10,   114,   107,    82,    84,
     133,    94,    94,   107,    78,   108,    94,     6,     8,     9,
      11,    13,    22,    28,    29,    33,    34,    79,    84,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   105,   109,
     110,   111,   112,   113,   119,   120,   126,   127,   128,   108,
     132,   133,    94,   121,    80,   102,    76,    94,   115,   116,
     117,   121,   102,    79,   110,    95,   120,   128,    84,   125,
     132,    78,   129,    78,    76,    81,    80,     7,    77,    95,
     122,   123,   124,   102,    83,    84,    37,    76,   115,   125,
     129,     4,    14,    15,    16,    17,    18,    19,    21,    24,
      26,    27,    32,    36,    71,    72,    73,    76,    79,    84,
      93,    94,    95,   105,   130,   132,   133,   134,   135,   136,
     137,   138,   140,   141,   142,   144,   145,   146,   147,   149,
     151,   153,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   176,
     179,   180,   194,   195,   197,   198,   199,    79,   134,    77,
     122,    81,    95,    26,    94,   117,    77,    83,    94,   116,
      61,    62,    74,    75,    76,    78,    93,   103,   118,   170,
     174,   177,   178,   179,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,    77,   122,    84,    84,    76,    76,    76,
     131,    84,    84,   177,    93,    96,    93,   172,   173,   193,
     193,   177,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    76,    80,    82,   181,    50,   115,
      79,   134,     5,    79,   135,    84,    84,    82,    80,   181,
      72,    73,    79,   102,    77,   117,    82,    95,   123,   193,
     193,   193,   193,    96,    79,   104,   118,    80,    49,    51,
      52,    53,    54,    55,    56,    57,    66,    67,    68,    69,
      58,    59,    61,    62,    63,    64,    65,   102,    77,   177,
     177,    77,   175,   177,    84,    76,    80,    80,    77,    77,
     175,   177,    71,   171,   177,   138,    79,    76,    94,   171,
     177,   177,   102,    26,    77,    79,    83,   177,   184,   185,
     186,   187,   188,   189,   189,   190,   190,   190,   190,   191,
     191,   192,   192,   193,   193,   193,   102,    77,    77,    84,
      77,    83,    77,   175,   177,   177,    77,    81,    93,    84,
     137,   145,   155,   157,    81,   193,    79,   118,    50,   138,
      14,    24,    94,   133,   138,   139,   140,   143,   148,   150,
     152,   154,    84,   177,   108,    77,    81,    81,    84,   177,
      84,    83,   182,    76,    76,    50,     5,    30,   108,    77,
     156,   157,    84,    84,   177,   145,   177,   177,   139,    76,
     138,   138,    77,    77,   156,    77,   156,    84,    77,    77,
      84,   155,   138,   138,    77,   138,    77,    77,   156,   139,
     139,    84,   177,    84,   138,   138,   138,    77,    30,    77,
     156,    84,    84,   177,   138,   139,   139,    77,    77,   156,
      77,   156,    84,   139,   139,    77,   139,    77,    77,   156,
     139,   139,   139,    77,   139
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    89,    89,    89,    89,    90,    91,    91,
      92,    92,    93,    93,    94,    95,    95,    96,    96,    97,
      97,    98,    98,    98,    98,    98,    99,    99,   100,   100,
     101,   101,   102,   102,   103,   103,   103,   104,   104,   105,
     106,   106,   107,   108,   108,   109,   109,   110,   110,   110,
     111,   111,   111,   111,   112,   112,   113,   113,   114,   114,
     114,   114,   114,   115,   115,   116,   116,   117,   117,   118,
     118,   119,   119,   120,   120,   120,   120,   120,   120,   120,
     120,   121,   122,   122,   122,   123,   123,   124,   124,   125,
     125,   126,   127,   127,   128,   128,   129,   129,   129,   129,
     130,   131,   131,   132,   132,   133,   134,   134,   135,   135,
     135,   136,   137,   138,   138,   138,   138,   138,   138,   139,
     139,   139,   139,   139,   140,   140,   140,   140,   140,   140,
     141,   142,   143,   144,   145,   145,   145,   145,   145,   145,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   153,
     153,   153,   153,   153,   153,   153,   154,   154,   154,   154,
     154,   154,   154,   154,   155,   155,   156,   157,   157,   158,
     159,   160,   160,   161,   161,   162,   162,   162,   162,   162,
     162,   163,   163,   163,   163,   163,   163,   164,   164,   165,
     166,   167,   168,   169,   170,   170,   170,   171,   171,   171,
     171,   172,   173,   173,   174,   174,   175,   175,   176,   176,
     177,   178,   178,   179,   179,   180,   180,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   182,
     182,   183,   183,   184,   184,   185,   185,   186,   186,   187,
     187,   188,   188,   188,   189,   189,   189,   189,   189,   190,
     190,   190,   191,   191,   191,   192,   192,   192,   192,   193,
     193,   193,   193,   193,   194,   195,   196,   196,   196,   196,
     197,   197,   197,   197,   198,   199,   200
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     0,     3,     1,     2,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     3,     2,     4,     3,     2,     1,     3,     1,
       6,     5,     0,     3,     2,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     4,     3,     1,     2,     1,     1,
       1,     1,     1,     3,     1,     3,     1,     2,     1,     1,
       1,     3,     2,     5,     4,     6,     5,     5,     4,     6,
       5,     1,     1,     3,     1,     3,     2,     2,     4,     1,
       1,     2,     3,     2,     4,     3,     4,     3,     3,     2,
       2,     3,     4,     4,     3,     0,     1,     2,     1,     1,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     2,     1,     1,     1,     1,     1,     1,
       1,     5,     7,     7,     5,     5,     1,     1,     7,     8,
       8,     8,     9,     9,     9,    10,     7,     8,     8,     8,
       9,     9,     9,    10,     1,     1,     1,     1,     3,     2,
       2,     3,     2,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     5,     6,     5,
       4,     3,     4,     4,     3,     4,     3,     1,     5,     5,
       1,     1,     1,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


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

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

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
  case 2: /* Start: CompilationUnit  */
#line 77 "parser.y"
                        { 
	    (yyval.node) = (yyvsp[0].node);
		root = (yyval.node);
      }
#line 2345 "parser.tab.c"
    break;

  case 3: /* CompilationUnit: PackageDeclaration MULTI_TypeDeclaration  */
#line 83 "parser.y"
                                                 {
            (yyval.node) = (yyvsp[0].node);
        }
#line 2353 "parser.tab.c"
    break;

  case 4: /* CompilationUnit: MULTI_TypeDeclaration  */
#line 86 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2359 "parser.tab.c"
    break;

  case 5: /* CompilationUnit: PackageDeclaration  */
#line 87 "parser.y"
                             { (yyval.node) = (yyvsp[0].node); }
#line 2365 "parser.tab.c"
    break;

  case 6: /* CompilationUnit: %empty  */
#line 88 "parser.y"
           { (yyval.node) = NULL ; }
#line 2371 "parser.tab.c"
    break;

  case 7: /* PackageDeclaration: PACKAGE TypeName ';'  */
#line 91 "parser.y"
                             { (yyval.node) = (yyvsp[-1].node);}
#line 2377 "parser.tab.c"
    break;

  case 8: /* MULTI_TypeDeclaration: TypeDeclaration  */
#line 94 "parser.y"
                        { (yyval.node) = (yyvsp[0].node); }
#line 2383 "parser.tab.c"
    break;

  case 9: /* MULTI_TypeDeclaration: MULTI_TypeDeclaration TypeDeclaration  */
#line 95 "parser.y"
                                               { (yyval.node) = (yyvsp[-1].node); }
#line 2389 "parser.tab.c"
    break;

  case 10: /* TypeDeclaration: ClassDeclaration  */
#line 98 "parser.y"
                       {(yyval.node) = (yyvsp[0].node);}
#line 2395 "parser.tab.c"
    break;

  case 11: /* TypeDeclaration: ';'  */
#line 99 "parser.y"
            { (yyval.node)=NULL; }
#line 2401 "parser.tab.c"
    break;

  case 12: /* TypeName: Identifier  */
#line 103 "parser.y"
                     {	
            (yyval.node)=(yyvsp[0].node);
        }
#line 2409 "parser.tab.c"
    break;

  case 13: /* TypeName: TypeName '.' Identifier  */
#line 106 "parser.y"
                                    { (yyval.node) = (yyvsp[-2].node); }
#line 2415 "parser.tab.c"
    break;

  case 14: /* Identifier: IDENTIFIER  */
#line 109 "parser.y"
                   { 
        string s1((yyvsp[0].str));
		Symbol* sym = ST->GetVar(s1);
					
		if(sym == NULL){
			sym = ST->AddVar(s1,"None","simple",-1,"Identifier",line);
        }
        else{
            sym->line.push_back(line); 
        }
        genNode* n1 = new genNode();    
		n1->place = sym->name;

		(yyval.node) = n1;
		(yyval.node)->type = sym->type;
    }
#line 2436 "parser.tab.c"
    break;

  case 15: /* Type: PrimitiveType  */
#line 127 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2442 "parser.tab.c"
    break;

  case 16: /* Type: ReferenceType  */
#line 128 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2448 "parser.tab.c"
    break;

  case 17: /* PrimitiveType: NumericType  */
#line 132 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2454 "parser.tab.c"
    break;

  case 18: /* PrimitiveType: BOOLEAN  */
#line 133 "parser.y"
                                {
        genNode * n1 = new genNode();
        (yyval.node) = n1;
        (yyval.node)->place = "boolean";
        (yyval.node)->type = "boolean";
        (yyval.node)->label = "Keyword";
        (yyval.node)->value = (yyvsp[0].str);
    }
#line 2467 "parser.tab.c"
    break;

  case 19: /* NumericType: IntegralType  */
#line 144 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2473 "parser.tab.c"
    break;

  case 20: /* NumericType: FloatingPointType  */
#line 145 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2479 "parser.tab.c"
    break;

  case 21: /* IntegralType: BYTE  */
#line 149 "parser.y"
                                { 
        genNode * n1 = new genNode();
        (yyval.node) = n1;
        (yyval.node)->place = "byte";
        (yyval.node)->type = "byte";
        (yyval.node)->label = "Keyword";
        (yyval.node)->value = (yyvsp[0].str);
    }
#line 2492 "parser.tab.c"
    break;

  case 22: /* IntegralType: SHORT  */
#line 157 "parser.y"
                                {  
        genNode * n1 = new genNode();
        (yyval.node) = n1;
        (yyval.node)->place = "short";
        (yyval.node)->type = "short";
        (yyval.node)->label = "Keyword";
        (yyval.node)->value = (yyvsp[0].str); 
    }
#line 2505 "parser.tab.c"
    break;

  case 23: /* IntegralType: INT  */
#line 165 "parser.y"
                                { 
        genNode * n1 = new genNode();
        (yyval.node) = n1;
        (yyval.node)->place = "int";
        (yyval.node)->type = "int";
        (yyval.node)->label = "Keyword";
        (yyval.node)->value = (yyvsp[0].str); 
    }
#line 2518 "parser.tab.c"
    break;

  case 24: /* IntegralType: LONG  */
#line 173 "parser.y"
                                {
        genNode * n1 = new genNode();
        (yyval.node) = n1;
        (yyval.node)->place = "long";
        (yyval.node)->type = "long";
        (yyval.node)->label = "Keyword";
        (yyval.node)->value = (yyvsp[0].str); 
    }
#line 2531 "parser.tab.c"
    break;

  case 25: /* IntegralType: CHAR  */
#line 181 "parser.y"
                                {
        genNode * n1 = new genNode();
        (yyval.node) = n1;
        (yyval.node)->place = "char";
        (yyval.node)->type = "char";
        (yyval.node)->label = "char";
        (yyval.node)->value = (yyvsp[0].str); 
    }
#line 2544 "parser.tab.c"
    break;

  case 26: /* FloatingPointType: FLOAT  */
#line 192 "parser.y"
                           {  
        genNode * n1 = new genNode();
        (yyval.node) = n1;
        (yyval.node)->place = "float";
        (yyval.node)->type = "float";
        (yyval.node)->label = "Keyword";
        (yyval.node)->value = (yyvsp[0].str); }
#line 2556 "parser.tab.c"
    break;

  case 27: /* FloatingPointType: DOUBLE  */
#line 199 "parser.y"
              { 
        genNode * n1 = new genNode();
        (yyval.node) = n1;
        (yyval.node)->place = "double";
        (yyval.node)->type = "double";
        (yyval.node)->label = "Keyword";
        (yyval.node)->value = (yyvsp[0].str);
    }
#line 2569 "parser.tab.c"
    break;

  case 28: /* ReferenceType: TypeName  */
#line 210 "parser.y"
                { (yyval.node) = (yyvsp[0].node); }
#line 2575 "parser.tab.c"
    break;

  case 29: /* ReferenceType: ArrayType  */
#line 211 "parser.y"
                { (yyval.node) = (yyvsp[0].node); }
#line 2581 "parser.tab.c"
    break;

  case 30: /* ArrayType: PrimitiveType Dims  */
#line 214 "parser.y"
                         { 
        genNode *n1 = new genNode();
		(yyval.node) = n1;
		(yyval.node)->type=(yyvsp[-1].node)->type;
		(yyval.node)->place=(yyvsp[-1].node)->place;
		(yyval.node)->isArray = true;
    }
#line 2593 "parser.tab.c"
    break;

  case 31: /* ArrayType: TypeName Dims  */
#line 221 "parser.y"
                    { 
        genNode *n1 = new genNode();
		(yyval.node) = n1;
		(yyval.node)->type = (yyvsp[-1].node)->type;
		(yyval.node)->place = (yyvsp[-1].node)->place;
		(yyval.node)->isArray = true;
    }
#line 2605 "parser.tab.c"
    break;

  case 32: /* Dims: Dims '[' ']'  */
#line 230 "parser.y"
                  {
         (yyval.node) = (yyvsp[-2].node);
   }
#line 2613 "parser.tab.c"
    break;

  case 33: /* Dims: '[' ']'  */
#line 233 "parser.y"
             {
      
   }
#line 2621 "parser.tab.c"
    break;

  case 34: /* ArrayInitialize: '{' VariableInitializerList ',' '}'  */
#line 239 "parser.y"
                                           { 
        (yyval.node) = (yyvsp[-2].node);
		(yyval.node)->isArray = true;
    }
#line 2630 "parser.tab.c"
    break;

  case 35: /* ArrayInitialize: '{' VariableInitializerList '}'  */
#line 243 "parser.y"
                                       {
        (yyval.node) = (yyvsp[-1].node);
		(yyval.node)->isArray = true; 
    }
#line 2639 "parser.tab.c"
    break;

  case 36: /* ArrayInitialize: '{' '}'  */
#line 247 "parser.y"
              {
        genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->isArray = true;
		(yyval.node)->nodeLen = 0;
    }
#line 2650 "parser.tab.c"
    break;

  case 37: /* VariableInitializerList: VariableInitializer  */
#line 256 "parser.y"
                           {
        if((yyvsp[0].node)->isArray){
			cerr << "Incorrect array initialisation at line: " << line;
			exit(1);
		}
		Symbol* temp =  ST->GetVar(ST->GenTemp());
		TAC* tac = new TAC();
		tac->op = "=";
		tac->dest = temp;
		(yyval.node)->code = (yyvsp[0].node)->code;
		if((yyvsp[0].node)->isLit){
			tac->isInt1 = true;
			tac->l1 = (yyvsp[0].node)->place;
		}
		else{
			if(!((yyvsp[0].node)->isLit) && ST->GetVar((yyvsp[0].node)->place)->type == "None"){
				cerr << "Symbol " << (yyvsp[0].node)->place << " not defined, at line: " <<line;
				exit(1);
			}
			tac->opd1 = ST->GetVar((yyvsp[0].node)->place);
		}
		(yyval.node)->varDecs.pb(tac->dest);
		(yyval.node)->code.pb(tac);             
    }
#line 2679 "parser.tab.c"
    break;

  case 38: /* VariableInitializerList: VariableInitializerList ',' VariableInitializer  */
#line 280 "parser.y"
                                                           { 
        if((yyvsp[0].node)->isArray){
			cerr << "Incorrect array initialisation at line: " << line;
			exit(1);
		}
		(yyval.node) = (yyvsp[-2].node);
		Symbol* temp =  ST->GetVar(ST->GenTemp());
		TAC* tac = new TAC();
		tac->op = "=";
		tac->dest = temp;
		if((yyvsp[0].node)->isLit){
			tac->isInt1 = true;
			tac->l1 = (yyvsp[0].node)->place;
		}
		else{
			if(!((yyvsp[0].node)->isLit) && ST->GetVar((yyvsp[0].node)->place)->type == "None"){
				cerr << "Symbol " << (yyvsp[0].node)->place << " not defined, at line: " <<line;
				exit(1);
			}
			tac->opd1 = ST->GetVar((yyvsp[0].node)->place);
		}
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		(yyval.node)->varDecs.pb(tac->dest);
		(yyval.node)->code.pb(tac);
     }
#line 2709 "parser.tab.c"
    break;

  case 39: /* ClassDeclaration: NormalClassDeclaration  */
#line 308 "parser.y"
                             { (yyval.node) = (yyvsp[0].node); }
#line 2715 "parser.tab.c"
    break;

  case 40: /* NormalClassDeclaration: MULTI_ClassModifier CLASS BlockStart ClassInit Identifier ClassBody  */
#line 312 "parser.y"
                                                                           {
        (yyval.node) = (yyvsp[-1].node);
		(yyval.node)->type = "class";
		(yyval.node)->code.pb(genLabelTAC((yyvsp[-1].node)->place));
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		ST->curEnv->name = (yyvsp[-1].node)->place;
		ST->EndScope();
    }
#line 2728 "parser.tab.c"
    break;

  case 41: /* NormalClassDeclaration: CLASS BlockStart ClassInit Identifier ClassBody  */
#line 320 "parser.y"
                                                      {
       	(yyval.node) = (yyvsp[-1].node);
		(yyval.node)->type = "class";
		(yyval.node)->code.pb(genLabelTAC((yyvsp[-1].node)->place));
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		ST->curEnv->name = (yyvsp[-1].node)->place;
		ST->EndScope();
    }
#line 2741 "parser.tab.c"
    break;

  case 42: /* ClassInit: %empty  */
#line 329 "parser.y"
            {
		ST->curEnv->type = "CLASSTYPE";
		(yyval.node)=NULL;
	}
#line 2750 "parser.tab.c"
    break;

  case 43: /* ClassBody: '{' MULTI_ClassBodyDeclaration '}'  */
#line 335 "parser.y"
                                          {
			(yyval.node) = (yyvsp[-1].node); 
    }
#line 2758 "parser.tab.c"
    break;

  case 44: /* ClassBody: '{' '}'  */
#line 338 "parser.y"
                {
			genNode* n = new genNode();
			(yyval.node) = n; 
    }
#line 2767 "parser.tab.c"
    break;

  case 45: /* MULTI_ClassBodyDeclaration: ClassBodyDeclaration  */
#line 344 "parser.y"
                            { (yyval.node)=(yyvsp[0].node); }
#line 2773 "parser.tab.c"
    break;

  case 46: /* MULTI_ClassBodyDeclaration: MULTI_ClassBodyDeclaration ClassBodyDeclaration  */
#line 345 "parser.y"
                                                       { 
        (yyval.node) = (yyvsp[-1].node);
        (yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
     }
#line 2782 "parser.tab.c"
    break;

  case 47: /* ClassBodyDeclaration: ClassMemberDeclaration  */
#line 351 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2788 "parser.tab.c"
    break;

  case 48: /* ClassBodyDeclaration: StaticInitializer  */
#line 352 "parser.y"
                                 { (yyval.node) = (yyvsp[0].node); }
#line 2794 "parser.tab.c"
    break;

  case 49: /* ClassBodyDeclaration: ConstructorDeclaration  */
#line 353 "parser.y"
                                 { (yyval.node) = (yyvsp[0].node); }
#line 2800 "parser.tab.c"
    break;

  case 50: /* ClassMemberDeclaration: FieldDeclaration  */
#line 357 "parser.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2806 "parser.tab.c"
    break;

  case 51: /* ClassMemberDeclaration: MethodDeclaration  */
#line 358 "parser.y"
                           { (yyval.node) = (yyvsp[0].node); }
#line 2812 "parser.tab.c"
    break;

  case 52: /* ClassMemberDeclaration: ClassDeclaration  */
#line 359 "parser.y"
                           { (yyval.node) = (yyvsp[0].node); }
#line 2818 "parser.tab.c"
    break;

  case 53: /* ClassMemberDeclaration: ';'  */
#line 360 "parser.y"
           {
        (yyval.node) = NULL;
     }
#line 2826 "parser.tab.c"
    break;

  case 54: /* FieldDeclaration: MULTI_ClassModifier Type VariableDeclaratorList ';'  */
#line 368 "parser.y"
                                                          {
        (yyval.node)=(yyvsp[-1].node);
        (yyval.node)->type=(yyvsp[-2].node)->place;
    }
#line 2835 "parser.tab.c"
    break;

  case 55: /* FieldDeclaration: Type VariableDeclaratorList ';'  */
#line 372 "parser.y"
                                      {
        (yyval.node)=(yyvsp[-1].node);
        (yyval.node)->type=(yyvsp[-2].node)->place;
    }
#line 2844 "parser.tab.c"
    break;

  case 56: /* MULTI_ClassModifier: ClassModifier  */
#line 378 "parser.y"
                    {(yyval.node)=(yyvsp[0].node);}
#line 2850 "parser.tab.c"
    break;

  case 57: /* MULTI_ClassModifier: MULTI_ClassModifier ClassModifier  */
#line 379 "parser.y"
                                         { (yyval.node) = (yyvsp[-1].node); }
#line 2856 "parser.tab.c"
    break;

  case 58: /* ClassModifier: PUBLIC  */
#line 383 "parser.y"
             { 			
            string s1((yyvsp[0].str));
			genNode* n1 = new genNode();
			(yyval.node) = n1;
			(yyval.node)->place = s1;
            (yyval.node)->label = "Keyword";
            (yyval.node)->value = s1;
        }
#line 2869 "parser.tab.c"
    break;

  case 59: /* ClassModifier: PRIVATE  */
#line 391 "parser.y"
              {		
            string s1((yyvsp[0].str));
			genNode* n1 = new genNode();
			(yyval.node) = n1;
			(yyval.node)->place = s1;
            (yyval.node)->label = "Keyword";
            (yyval.node)->value = s1;
        }
#line 2882 "parser.tab.c"
    break;

  case 60: /* ClassModifier: STATIC  */
#line 399 "parser.y"
             {		
            string s1((yyvsp[0].str));
			genNode* n1 = new genNode();
			(yyval.node) = n1;
			(yyval.node)->place = s1;
            (yyval.node)->label = "Keyword";
            (yyval.node)->value = s1;
        }
#line 2895 "parser.tab.c"
    break;

  case 61: /* ClassModifier: FINAL  */
#line 407 "parser.y"
            {		
            string s1((yyvsp[0].str));
			genNode* n1 = new genNode();
			(yyval.node) = n1;
			(yyval.node)->place = s1;
            (yyval.node)->label = "Keyword";
            (yyval.node)->value = s1;
        }
#line 2908 "parser.tab.c"
    break;

  case 62: /* ClassModifier: ABSTRACT  */
#line 415 "parser.y"
               { 		
            string s1((yyvsp[0].str));
			genNode* n1 = new genNode();
			(yyval.node) = n1;
			(yyval.node)->place = s1;
            (yyval.node)->label = "Keyword";
            (yyval.node)->value = s1;
        }
#line 2921 "parser.tab.c"
    break;

  case 63: /* VariableDeclaratorList: VariableDeclaratorList ',' VariableDeclarator  */
#line 426 "parser.y"
                                                     {
        (yyval.node) = (yyvsp[-2].node);
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		if((yyvsp[0].node)->isArray){
			if((yyvsp[-2].node)->type == "None")
				(yyval.node)->type = (yyvsp[0].node)->type;
			else 
				if((yyvsp[-2].node)->type != (yyvsp[0].node)->type){
					cerr << "Incompatible types in declaration at line: " << line << endl;
					exit(1);
				}
		}
		Symbol* sym = ST->GetVar((yyvsp[0].node)->place);
		(yyval.node)->varDecs.pb(sym);
    }
#line 2941 "parser.tab.c"
    break;

  case 64: /* VariableDeclaratorList: VariableDeclarator  */
#line 441 "parser.y"
                         {
        	(yyval.node) = (yyvsp[0].node); 
			Symbol* sym = ST->GetVar((yyvsp[0].node)->place);
			(yyval.node)->varDecs.pb(sym);
    }
#line 2951 "parser.tab.c"
    break;

  case 65: /* VariableDeclarator: VariableDeclaratorId '=' VariableInitializer  */
#line 449 "parser.y"
                                                   {
        genNode* n1 = new genNode();
		(yyval.node) = n1;
		(yyval.node)->code = (yyvsp[0].node)->code;
			
		(yyval.node)->place = (yyvsp[-2].node)->place;
			
		TAC* tac1 = new TAC();
		Symbol* sym;
			
		sym = ST->GetVar((yyvsp[-2].node)->place);
		if(sym->type != "None"){
			cerr << "Error: Symbol "<< (yyvsp[-2].node)->place <<" is already defined. Redefinition at line num: " << line << endl;
			exit(1);
		}
		tac1->dest = sym;
		tac1->op = "=";

		if((yyvsp[0].node)->isLit == true){
			tac1->isInt1 = true;
			tac1->l1 = (yyvsp[0].node)->place;
			(yyval.node)->code.pb(tac1);
		}
		else if((yyvsp[0].node)->isArray){

			sym->baseType = "array";
			sym->type = (yyvsp[0].node)->type;
			(yyval.node)->isArray = true;
			for(int i=0; i<(yyvsp[0].node)->varDecs.size(); i++){
				TAC* tac = new TAC();
				tac->op = "setarr";
				tac->array_name = (yyvsp[-2].node)->place;
				tac->opd2 = (yyvsp[0].node)->varDecs[i];
				tac->isInt1 = true;
				tac->l1 = convertNumToString(i);
				(yyval.node)->code.pb(tac);
			}
			(yyval.node)->varDecs.clear();
		}
		else{
			Symbol* sym_ = ST->GetVar((yyvsp[0].node)->place);
			tac1->opd1 = sym_;
			sym -> baseType = sym_->baseType;
			(yyval.node)->code.pb(tac1);
		}
    }
#line 3002 "parser.tab.c"
    break;

  case 66: /* VariableDeclarator: VariableDeclaratorId  */
#line 495 "parser.y"
                           {(yyval.node)=(yyvsp[0].node);}
#line 3008 "parser.tab.c"
    break;

  case 67: /* VariableDeclaratorId: Identifier Dims  */
#line 498 "parser.y"
                      {
        (yyval.node) = (yyvsp[-1].node); 
    }
#line 3016 "parser.tab.c"
    break;

  case 68: /* VariableDeclaratorId: Identifier  */
#line 501 "parser.y"
                  {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3024 "parser.tab.c"
    break;

  case 69: /* VariableInitializer: Expression  */
#line 507 "parser.y"
                { (yyval.node)=(yyvsp[0].node);}
#line 3030 "parser.tab.c"
    break;

  case 70: /* VariableInitializer: ArrayInitialize  */
#line 508 "parser.y"
                     { (yyval.node)=(yyvsp[0].node);}
#line 3036 "parser.tab.c"
    break;

  case 71: /* MethodDeclaration: MULTI_ClassModifier MethodHeader MethodBody  */
#line 513 "parser.y"
                                                      {
        (yyval.node) = (yyvsp[-1].node);
		vector <TAC*> tmp;
		tmp.pb(genLabelTAC(ST->curEnv->name));
		(yyval.node)->code.insert((yyval.node)->code.begin(), tmp.begin(), tmp.end());
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());	
       	
		ST->EndScope();
    }
#line 3050 "parser.tab.c"
    break;

  case 72: /* MethodDeclaration: MethodHeader MethodBody  */
#line 522 "parser.y"
                                                    {
        (yyval.node) = (yyvsp[-1].node);
		vector <TAC*> tmp;
		tmp.pb(genLabelTAC(ST->curEnv->name));
		(yyval.node)->code.insert((yyval.node)->code.begin(), tmp.begin(), tmp.end());
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());	
        	
		ST->EndScope();
    }
#line 3064 "parser.tab.c"
    break;

  case 73: /* MethodHeader: Type MemberName '(' FormalParameterList ')'  */
#line 534 "parser.y"
                                                      { 
        (yyval.node) = (yyvsp[-3].node);
		ST->curEnv->returnType = (yyvsp[-4].node)->place;
		ST->curEnv->name = (yyvsp[-3].node)->place;
        (yyval.node)->code = (yyvsp[-1].node)->code;
    }
#line 3075 "parser.tab.c"
    break;

  case 74: /* MethodHeader: Type MemberName '(' ')'  */
#line 540 "parser.y"
                                     { 
        (yyval.node) = (yyvsp[-2].node);
		ST->curEnv->returnType = (yyvsp[-3].node)->place;
		ST->curEnv->name = (yyvsp[-2].node)->place;
    }
#line 3085 "parser.tab.c"
    break;

  case 75: /* MethodHeader: Type MemberName '(' FormalParameterList ')' Dims  */
#line 545 "parser.y"
                                                              { 
        (yyval.node) = (yyvsp[-4].node);
		ST->curEnv->returnType = (yyvsp[-5].node)->place;
		ST->curEnv->name = (yyvsp[-4].node)->place;
		(yyval.node)->code = (yyvsp[-2].node)->code;
    }
#line 3096 "parser.tab.c"
    break;

  case 76: /* MethodHeader: Type MemberName '(' ')' Dims  */
#line 551 "parser.y"
                                           { 
        (yyval.node) = (yyvsp[-3].node);
		ST->curEnv->returnType = (yyvsp[-4].node)->place;
		ST->curEnv->name = (yyvsp[-3].node)->place;
    }
#line 3106 "parser.tab.c"
    break;

  case 77: /* MethodHeader: VOID MemberName '(' FormalParameterList ')'  */
#line 556 "parser.y"
                                                           { 
        (yyval.node) = (yyvsp[-3].node);
		ST->curEnv->name = (yyvsp[-3].node)->place;
		(yyval.node)->code = (yyvsp[-1].node)->code;
    }
#line 3116 "parser.tab.c"
    break;

  case 78: /* MethodHeader: VOID MemberName '(' ')'  */
#line 561 "parser.y"
                                      { 
        (yyval.node) = (yyvsp[-2].node);
		ST->curEnv->name = (yyvsp[-2].node)->place;
    }
#line 3125 "parser.tab.c"
    break;

  case 79: /* MethodHeader: VOID MemberName '(' FormalParameterList ')' Dims  */
#line 565 "parser.y"
                                                              { 
        (yyval.node) = (yyvsp[-4].node);
		ST->curEnv->name = (yyvsp[-4].node)->place;
		(yyval.node)->code = (yyvsp[-2].node)->code;
    }
#line 3135 "parser.tab.c"
    break;

  case 80: /* MethodHeader: VOID MemberName '(' ')' Dims  */
#line 570 "parser.y"
                                           { 
        (yyval.node) = (yyvsp[-3].node);
		ST->curEnv->name = (yyvsp[-3].node)->place;
    }
#line 3144 "parser.tab.c"
    break;

  case 81: /* MemberName: Identifier  */
#line 577 "parser.y"
                 {
        ST->BeginScope();
		ST->curEnv->type = "METHODTYPE";

		(yyval.node) = (yyvsp[0].node); 
    }
#line 3155 "parser.tab.c"
    break;

  case 82: /* FormalParameterList: ReceiverParameter  */
#line 586 "parser.y"
                                                     { (yyval.node)=(yyvsp[0].node); }
#line 3161 "parser.tab.c"
    break;

  case 83: /* FormalParameterList: FormalParameterList ',' FormalParameter  */
#line 587 "parser.y"
                                                    {
        (yyval.node) = (yyvsp[0].node);
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-2].node)->code.begin(), (yyvsp[-2].node)->code.end());
    }
#line 3170 "parser.tab.c"
    break;

  case 84: /* FormalParameterList: FormalParameter  */
#line 591 "parser.y"
                                              { (yyval.node) = (yyvsp[0].node); }
#line 3176 "parser.tab.c"
    break;

  case 85: /* FormalParameter: FINAL Type VariableDeclaratorId  */
#line 595 "parser.y"
                                                    {
        (yyval.node) = (yyvsp[0].node); 

		ST->curEnv->argTypeList.pb((yyvsp[-1].node)->place);
		ST->curEnv->argNum ++;

		(yyval.node)->type = (yyvsp[-1].node)->place;

		TAC* tac = new TAC();
		tac->op = "readParam";
		tac->target = (yyvsp[0].node)->place;

		(yyval.node)->code.clear();
		(yyval.node)->code.pb(tac);
    }
#line 3196 "parser.tab.c"
    break;

  case 86: /* FormalParameter: Type VariableDeclaratorId  */
#line 610 "parser.y"
                                {
        (yyval.node) = (yyvsp[0].node); 
		Symbol* sym = ST->GetVar((yyvsp[0].node)->place);
		sym->type = (yyvsp[-1].node)->place;
		(yyval.node)->type = (yyvsp[-1].node)->place;
		ST->curEnv->argNum ++;

		TAC* tac = new TAC();
		tac->op = "readParam";
		tac->target = (yyvsp[0].node)->place;

		(yyval.node)->code.clear();
		(yyval.node)->code.pb(tac);
    }
#line 3215 "parser.tab.c"
    break;

  case 87: /* ReceiverParameter: Type THIS  */
#line 628 "parser.y"
                                                    {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 3223 "parser.tab.c"
    break;

  case 88: /* ReceiverParameter: Type Identifier '.' THIS  */
#line 631 "parser.y"
                                                    {
          (yyval.node) = (yyvsp[-2].node);
    }
#line 3231 "parser.tab.c"
    break;

  case 89: /* MethodBody: Block  */
#line 637 "parser.y"
                                                    {(yyval.node) = (yyvsp[0].node); }
#line 3237 "parser.tab.c"
    break;

  case 90: /* MethodBody: ';'  */
#line 638 "parser.y"
                                                    {(yyval.node) = NULL; }
#line 3243 "parser.tab.c"
    break;

  case 91: /* StaticInitializer: STATIC Block  */
#line 641 "parser.y"
                                                    {
        (yyval.node) = (yyvsp[0].node);
     }
#line 3251 "parser.tab.c"
    break;

  case 92: /* ConstructorDeclaration: MULTI_ClassModifier ConstructorDeclarator ConstructorBody  */
#line 647 "parser.y"
                                                                    { 
        // $$ = $2;
		// vector <TAC*> tmp;
		// tmp.pb(genLabelTAC(ST->curEnv->name));
		// $$->code.insert($$->code.begin(), tmp.begin(), tmp.end());
		// $$->code.insert($$->code.end(), $3->code.begin(), $3->code.end());	
        // ST->curEnv->type = $2->place;	
		// ST->EndScope(); 
    }
#line 3265 "parser.tab.c"
    break;

  case 93: /* ConstructorDeclaration: ConstructorDeclarator ConstructorBody  */
#line 656 "parser.y"
                                             { 
        // $$ = $1;
		// vector <TAC*> tmp;
		// tmp.pb(genLabelTAC(ST->curEnv->name));
		// $$->code.insert($$->code.begin(), tmp.begin(), tmp.end());
		// $$->code.insert($$->code.end(), $2->code.begin(), $2->code.end());	
        // ST->curEnv->type = $1->place;	
		// ST->EndScope();
    }
#line 3279 "parser.tab.c"
    break;

  case 94: /* ConstructorDeclarator: Identifier '(' FormalParameterList ')'  */
#line 668 "parser.y"
                                             { 
        // ST->BeginScope();
        // ST->curEnv->type = "CONTRUCTORTYPE";
        // $$ = $1;
		// ST->curEnv->name = $1->place;
        // $$->code = $3->code;
    }
#line 3291 "parser.tab.c"
    break;

  case 95: /* ConstructorDeclarator: Identifier '(' ')'  */
#line 675 "parser.y"
                           { 
        // ST->BeginScope();
        // ST->curEnv->type = "CONTRUCTORTYPE";
        // $$ = $1;
		// ST->curEnv->name = $1->place;
    }
#line 3302 "parser.tab.c"
    break;

  case 96: /* ConstructorBody: '{' ExplicitConstructorInvocation BlockStatements '}'  */
#line 684 "parser.y"
                                                                           {  }
#line 3308 "parser.tab.c"
    break;

  case 97: /* ConstructorBody: '{' BlockStatements '}'  */
#line 685 "parser.y"
                                                                           {  }
#line 3314 "parser.tab.c"
    break;

  case 98: /* ConstructorBody: '{' ExplicitConstructorInvocation '}'  */
#line 686 "parser.y"
                                                                           {  }
#line 3320 "parser.tab.c"
    break;

  case 99: /* ConstructorBody: '{' '}'  */
#line 687 "parser.y"
                                                                           {  }
#line 3326 "parser.tab.c"
    break;

  case 100: /* ExplicitConstructorInvocation: THIS SINGLE_ArgumentList  */
#line 691 "parser.y"
                                                                           {  }
#line 3332 "parser.tab.c"
    break;

  case 101: /* SINGLE_ArgumentList: '(' ')' ';'  */
#line 695 "parser.y"
                                                       {   }
#line 3338 "parser.tab.c"
    break;

  case 102: /* SINGLE_ArgumentList: '(' ArgumentList ')' ';'  */
#line 696 "parser.y"
                                                       {   }
#line 3344 "parser.tab.c"
    break;

  case 103: /* Block: BlockStart '{' BlockStatements '}'  */
#line 700 "parser.y"
                                                        {
		(yyval.node) = (yyvsp[-1].node); ST->EndScope(); 
	}
#line 3352 "parser.tab.c"
    break;

  case 104: /* Block: BlockStart '{' '}'  */
#line 703 "parser.y"
                                                        {
		 (yyval.node) = NULL; ST->EndScope();
	}
#line 3360 "parser.tab.c"
    break;

  case 105: /* BlockStart: %empty  */
#line 709 "parser.y"
      {
		(yyval.node) = NULL; 
		ST->BeginScope();	
	}
#line 3369 "parser.tab.c"
    break;

  case 106: /* BlockStatements: BlockStatement  */
#line 716 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3375 "parser.tab.c"
    break;

  case 107: /* BlockStatements: BlockStatements BlockStatement  */
#line 717 "parser.y"
                                             { 
        (yyval.node) = (yyvsp[-1].node);
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
    }
#line 3384 "parser.tab.c"
    break;

  case 108: /* BlockStatement: LocalVariableDeclarationStatement  */
#line 724 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3390 "parser.tab.c"
    break;

  case 109: /* BlockStatement: ClassDeclaration  */
#line 725 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3396 "parser.tab.c"
    break;

  case 110: /* BlockStatement: Statement  */
#line 726 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3402 "parser.tab.c"
    break;

  case 111: /* LocalVariableDeclarationStatement: LocalVariableDeclaration ';'  */
#line 730 "parser.y"
                                             { 
        (yyval.node) = (yyvsp[-1].node);
    }
#line 3410 "parser.tab.c"
    break;

  case 112: /* LocalVariableDeclaration: Type VariableDeclaratorList  */
#line 736 "parser.y"
                                             { 
        if((yyvsp[0].node)->type != "None" && equal_compatible((yyvsp[0].node)->type, (yyvsp[-1].node)->type) == "None"){
			cerr << "Incompatible types in declaration at line: " << line << endl;
			exit(1);
		}
		(yyval.node) = (yyvsp[0].node);
		string typeName = (yyvsp[-1].node)->place;
		int siz = (yyval.node)->varDecs.size();
		fori(0, siz){
			((yyval.node)->varDecs)[i]->type = typeName;
		}
		(yyval.node)->type = typeName;
    }
#line 3428 "parser.tab.c"
    break;

  case 113: /* Statement: StatementWithoutTrailingSubstatement  */
#line 753 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3434 "parser.tab.c"
    break;

  case 114: /* Statement: LabeledStatement  */
#line 754 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3440 "parser.tab.c"
    break;

  case 115: /* Statement: IfThenStatement  */
#line 755 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3446 "parser.tab.c"
    break;

  case 116: /* Statement: IfThenElseStatement  */
#line 756 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3452 "parser.tab.c"
    break;

  case 117: /* Statement: WhileStatement  */
#line 757 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3458 "parser.tab.c"
    break;

  case 118: /* Statement: ForStatement  */
#line 758 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3464 "parser.tab.c"
    break;

  case 119: /* StatementNoShortIf: StatementWithoutTrailingSubstatement  */
#line 762 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3470 "parser.tab.c"
    break;

  case 120: /* StatementNoShortIf: LabeledStatementNoShortIf  */
#line 763 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3476 "parser.tab.c"
    break;

  case 121: /* StatementNoShortIf: IfThenElseStatementNoShortIf  */
#line 764 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3482 "parser.tab.c"
    break;

  case 122: /* StatementNoShortIf: WhileStatementNoShortIf  */
#line 765 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3488 "parser.tab.c"
    break;

  case 123: /* StatementNoShortIf: ForStatementNoShortIf  */
#line 766 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3494 "parser.tab.c"
    break;

  case 124: /* StatementWithoutTrailingSubstatement: Block  */
#line 770 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3500 "parser.tab.c"
    break;

  case 125: /* StatementWithoutTrailingSubstatement: EmptyStatement  */
#line 771 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3506 "parser.tab.c"
    break;

  case 126: /* StatementWithoutTrailingSubstatement: ExpressionStatement  */
#line 772 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3512 "parser.tab.c"
    break;

  case 127: /* StatementWithoutTrailingSubstatement: BreakStatement  */
#line 773 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3518 "parser.tab.c"
    break;

  case 128: /* StatementWithoutTrailingSubstatement: ContinueStatement  */
#line 774 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3524 "parser.tab.c"
    break;

  case 129: /* StatementWithoutTrailingSubstatement: ReturnStatement  */
#line 775 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3530 "parser.tab.c"
    break;

  case 130: /* EmptyStatement: ';'  */
#line 779 "parser.y"
                                             {  }
#line 3536 "parser.tab.c"
    break;

  case 131: /* LabeledStatement: Identifier ':' Statement  */
#line 783 "parser.y"
                                             { 
        (yyval.node) = (yyvsp[-2].node);
        (yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
    }
#line 3545 "parser.tab.c"
    break;

  case 132: /* LabeledStatementNoShortIf: Identifier ':' StatementNoShortIf  */
#line 790 "parser.y"
                                              { 
        (yyval.node) = (yyvsp[-2].node);
        (yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
    }
#line 3554 "parser.tab.c"
    break;

  case 133: /* ExpressionStatement: StatementExpression ';'  */
#line 797 "parser.y"
                                              { (yyval.node) = (yyvsp[-1].node); }
#line 3560 "parser.tab.c"
    break;

  case 134: /* StatementExpression: Assignment  */
#line 801 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3566 "parser.tab.c"
    break;

  case 135: /* StatementExpression: PreIncrementExpression  */
#line 802 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3572 "parser.tab.c"
    break;

  case 136: /* StatementExpression: PreDecrementExpression  */
#line 803 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3578 "parser.tab.c"
    break;

  case 137: /* StatementExpression: PostIncrementExpression  */
#line 804 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3584 "parser.tab.c"
    break;

  case 138: /* StatementExpression: PostDecrementExpression  */
#line 805 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3590 "parser.tab.c"
    break;

  case 139: /* StatementExpression: MethodInvocation  */
#line 806 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3596 "parser.tab.c"
    break;

  case 140: /* StatementExpression: ClassInstanceCreationExpression  */
#line 807 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3602 "parser.tab.c"
    break;

  case 141: /* IfThenStatement: IF '(' Expression ')' Statement  */
#line 811 "parser.y"
                                          { 
        	(yyval.node) = (yyvsp[-2].node);
			string trueLabel = getNewLabel();			
			string ifEndLabel = getNewLabel();
			TAC* tac1 = new TAC();
			tac1->op = "label"; tac1->target = trueLabel;
			TAC* tac2 = new TAC();
			tac2->op = "ifgoto"; tac2->dest = ST->GetVar((yyvsp[-2].node)->place); tac2->target = trueLabel;
			if(!((yyvsp[-2].node)->isLit) && ST->GetVar((yyvsp[-2].node)->place)->type == "None"){
				cerr << "Symbol " << (yyvsp[-2].node)->place << " not defined, at line: " <<line;
				exit(1);
			}
			TAC* tac3 = new TAC();
			tac3->op = "goto"; tac3->target = ifEndLabel;
			TAC* tac4 = new TAC();
			tac4->op = "label"; tac4->target = ifEndLabel;
			(yyval.node)->code.pb(tac2);
			(yyval.node)->code.pb(tac3);
			(yyval.node)->code.pb(tac1);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			(yyval.node)->code.pb(tac4);
		}
#line 3629 "parser.tab.c"
    break;

  case 142: /* IfThenElseStatement: IF '(' Expression ')' StatementNoShortIf ELSE Statement  */
#line 836 "parser.y"
                                                               { 
        			(yyval.node) = (yyvsp[-4].node);
			TAC* tac1 = new TAC();	TAC* tac2 = new TAC();
			TAC* tac3 = new TAC();	TAC* tac4 = new TAC();
			TAC* tac5 = new TAC();	TAC* tac6 = new TAC();
			string trueLabel = getNewLabel();			
			string falseLabel = getNewLabel();
			string endLabel = getNewLabel();
			tac1->op = "label"; tac1->target = trueLabel;
			tac2->op = "label"; tac2->target = falseLabel;
			tac3->op = "ifgoto"; tac3->dest = ST->GetVar((yyvsp[-4].node)->place); tac3->target = trueLabel;
			if(!((yyvsp[-4].node)->isLit) && ST->GetVar((yyvsp[-4].node)->place)->type == "None"){
				cerr << "Symbol " << (yyvsp[-4].node)->place << " not defined, at line: " <<line;
				exit(1);
			}
			tac4->op = "goto"; tac4->target = falseLabel;
			tac5->op = "goto"; tac5->target = endLabel;
			tac6->op = "label"; tac6->target = endLabel;

			(yyval.node)->code.pb(tac3); (yyval.node)->code.pb(tac4);
			(yyval.node)->code.pb(tac1);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-2].node)->code.begin(), (yyvsp[-2].node)->code.end());
			(yyval.node)->code.pb(tac5);
			(yyval.node)->code.pb(tac2);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			(yyval.node)->code.pb(tac6);
    }
#line 3661 "parser.tab.c"
    break;

  case 143: /* IfThenElseStatementNoShortIf: IF '(' Expression ')' StatementNoShortIf ELSE StatementNoShortIf  */
#line 866 "parser.y"
                                                                          {
       		(yyval.node) = (yyvsp[-4].node);
			TAC* tac1 = new TAC();	TAC* tac2 = new TAC();
			TAC* tac3 = new TAC();	TAC* tac4 = new TAC();
			TAC* tac5 = new TAC();	TAC* tac6 = new TAC();
			string trueLabel = getNewLabel();			
			string falseLabel = getNewLabel();
			string endLabel = getNewLabel();
			tac1->op = "label"; tac1->target = trueLabel;
			tac2->op = "label"; tac2->target = falseLabel;
			tac3->op = "ifgoto"; tac3->dest = ST->GetVar((yyvsp[-4].node)->place); tac3->target = trueLabel;
			if(!((yyvsp[-4].node)->isLit) && ST->GetVar((yyvsp[-4].node)->place)->type == "None"){
				cerr << "Symbol " << (yyvsp[-4].node)->place << " not defined, at line: " <<line;
				exit(1);
			}
			tac4->op = "goto"; tac4->target = falseLabel;
			tac5->op = "goto"; tac5->target = endLabel;
			tac6->op = "label"; tac6->target = endLabel;

			(yyval.node)->code.pb(tac3); (yyval.node)->code.pb(tac4);
			(yyval.node)->code.pb(tac1);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-2].node)->code.begin(), (yyvsp[-2].node)->code.end());
			(yyval.node)->code.pb(tac5);
			(yyval.node)->code.pb(tac2);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			(yyval.node)->code.pb(tac6);
    }
#line 3693 "parser.tab.c"
    break;

  case 144: /* WhileStatement: WHILE '(' Expression ')' Statement  */
#line 896 "parser.y"
                                                {
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			string conditionLabel = getNewLabel();
			TAC* tac = new TAC();
			tac->op = "label";
			tac->target = conditionLabel;

			string inLoopLabel = getNewLabel();			
			string endLoopLabel = getNewLabel();

			TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = inLoopLabel;

			TAC* tac2 = new TAC();	tac2->op = "ifgoto"; tac2->dest = ST->GetVar((yyvsp[-2].node)->place); tac2->target = inLoopLabel;
			if(!((yyvsp[-2].node)->isLit) && ST->GetVar((yyvsp[-2].node)->place)->type == "None"){
				cerr << "Symbol " << (yyvsp[-2].node)->place << " not defined, at line: " <<line;
				exit(1);
			}

			TAC* tac3 = new TAC();	tac3->op = "goto"; tac3->target = endLoopLabel;

			TAC* tac4 = new TAC();	tac4->op = "label"; tac4->target = endLoopLabel;

			TAC* tac5 = new TAC();	tac5->op = "goto"; 	tac5->target = conditionLabel;

			(yyval.node)->code.pb(tac);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-2].node)->code.begin(), (yyvsp[-2].node)->code.end());
			(yyval.node)->code.pb(tac2);
			(yyval.node)->code.pb(tac3);
			(yyval.node)->code.pb(tac1);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			(yyval.node)->code.pb(tac5);
			(yyval.node)->code.pb(tac4);

			updateBreak((yyval.node), endLoopLabel);
			updateContinue((yyval.node), conditionLabel);
    }
#line 3735 "parser.tab.c"
    break;

  case 145: /* WhileStatementNoShortIf: WHILE '(' Expression ')' StatementNoShortIf  */
#line 936 "parser.y"
                                                                 {
        			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			string conditionLabel = getNewLabel();
			TAC* tac = new TAC();
			tac->op = "label";
			tac->target = conditionLabel;

			string inLoopLabel = getNewLabel();			
			string endLoopLabel = getNewLabel();

			TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = inLoopLabel;

			TAC* tac2 = new TAC();	tac2->op = "ifgoto"; tac2->dest = ST->GetVar((yyvsp[-2].node)->place); tac2->target = inLoopLabel;
			if(!((yyvsp[-2].node)->isLit) && ST->GetVar((yyvsp[-2].node)->place)->type == "None"){
				cerr << "Symbol " << (yyvsp[-2].node)->place << " not defined, at line: " <<line;
				exit(1);
			}

			TAC* tac3 = new TAC();	tac3->op = "goto"; tac3->target = endLoopLabel;

			TAC* tac4 = new TAC();	tac4->op = "label"; tac4->target = endLoopLabel;

			TAC* tac5 = new TAC();	tac5->op = "goto"; 	tac5->target = conditionLabel;

			(yyval.node)->code.pb(tac);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-2].node)->code.begin(), (yyvsp[-2].node)->code.end());
			(yyval.node)->code.pb(tac2);
			(yyval.node)->code.pb(tac3);
			(yyval.node)->code.pb(tac1);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			(yyval.node)->code.pb(tac5);
			(yyval.node)->code.pb(tac4);

			updateBreak((yyval.node), endLoopLabel);
			updateContinue((yyval.node), conditionLabel);
    }
#line 3777 "parser.tab.c"
    break;

  case 146: /* ForStatement: BasicForStatement  */
#line 976 "parser.y"
                                                 {(yyval.node)=(yyvsp[0].node);}
#line 3783 "parser.tab.c"
    break;

  case 147: /* ForStatementNoShortIf: BasicForStatementNoShortIf  */
#line 980 "parser.y"
                                                 {(yyval.node)=(yyvsp[0].node);}
#line 3789 "parser.tab.c"
    break;

  case 148: /* BasicForStatement: BlockStart FOR '(' ';' ';' ')' Statement  */
#line 984 "parser.y"
                                                 { 
		genNode* newNode = new genNode();
		(yyval.node) = newNode;

		string conditionLabel = getNewLabel();
		TAC* tac = new TAC();
		tac->op = "label";
		tac->target = conditionLabel;

		string endLoopLabel = getNewLabel();
			
		TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = endLoopLabel;

		TAC* tac2 = new TAC();	tac2->op = "goto"; 	tac2->target = conditionLabel;

		(yyval.node)->code.pb(tac);
		if((yyvsp[0].node)->code.size() > 0)
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());

		(yyval.node)->code.pb(tac2);
		(yyval.node)->code.pb(tac1);

		updateBreak((yyval.node), endLoopLabel);
		updateContinue((yyval.node), conditionLabel);

		ST->curEnv = ST->curEnv->prevEnv;
	}
#line 3821 "parser.tab.c"
    break;

  case 149: /* BasicForStatement: BlockStart FOR '(' ForInit ';' ';' ')' Statement  */
#line 1011 "parser.y"
                                                             { 
		(yyval.node) = (yyvsp[-4].node);

		string conditionLabel = getNewLabel();
		TAC* tac = new TAC();
		tac->op = "label";
		tac->target = conditionLabel;

		string endLoopLabel = getNewLabel();
			
		TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = endLoopLabel;

		TAC* tac2 = new TAC();	tac2->op = "goto"; 	tac2->target = conditionLabel;

		(yyval.node)->code.pb(tac);
		if((yyvsp[0].node)->code.size() > 0)
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());

		(yyval.node)->code.pb(tac2);
		(yyval.node)->code.pb(tac1);

		updateBreak((yyval.node), endLoopLabel);
		updateContinue((yyval.node), conditionLabel);

		ST->curEnv = ST->curEnv->prevEnv;
	}
#line 3852 "parser.tab.c"
    break;

  case 150: /* BasicForStatement: BlockStart FOR '(' ';' Expression ';' ')' Statement  */
#line 1037 "parser.y"
                                                                { 
		genNode* newNode = new genNode();
		(yyval.node) = newNode;

		string conditionLabel = getNewLabel();
		TAC* tac = new TAC();
		tac->op = "label";
		tac->target = conditionLabel;

		string inLoopLabel = getNewLabel();			
		string endLoopLabel = getNewLabel();
			
		TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = inLoopLabel;

		TAC* tac2 = new TAC();	tac2->op = "ifgoto"; tac2->dest = ST->GetVar((yyvsp[-3].node)->place); tac2->target = inLoopLabel;
		if(!((yyvsp[-3].node)->isLit) && ST->GetVar((yyvsp[-3].node)->place)->type == "None"){
			cerr << "Symbol " << (yyvsp[-3].node)->place << " not defined, at line: " <<line;
			exit(1);
		}

		TAC* tac3 = new TAC();	tac3->op = "goto"; tac3->target = endLoopLabel;

		TAC* tac4 = new TAC();	tac4->op = "label"; tac4->target = endLoopLabel;

		TAC* tac5 = new TAC();	tac5->op = "goto"; 	tac5->target = conditionLabel;

		(yyval.node)->code.pb(tac);

		(yyval.node)->code.pb(tac2);
		(yyval.node)->code.pb(tac3);
		(yyval.node)->code.pb(tac1);
		if((yyvsp[0].node)->code.size() > 0)
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		(yyval.node)->code.pb(tac5);
		(yyval.node)->code.pb(tac4);

		updateBreak((yyval.node), endLoopLabel);
		updateContinue((yyval.node), conditionLabel);

		ST->curEnv = ST->curEnv->prevEnv;
	}
#line 3898 "parser.tab.c"
    break;

  case 151: /* BasicForStatement: BlockStart FOR '(' ';' ';' ForUpdate ')' Statement  */
#line 1078 "parser.y"
                                                               { 
		genNode* newNode = new genNode();
		(yyval.node) = newNode;

		string conditionLabel = getNewLabel();
		TAC* tac = new TAC();
		tac->op = "label";
		tac->target = conditionLabel;

		string endLoopLabel = getNewLabel();
			
		TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = endLoopLabel;

		TAC* tac2 = new TAC();	tac2->op = "goto"; 	tac2->target = conditionLabel;

		string updateLabel = getNewLabel();
		TAC* tac_ = new TAC();	tac_->op = "label";	tac_->target = updateLabel;

		(yyval.node)->code.pb(tac);
		if((yyvsp[0].node)->code.size() > 0)
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		(yyval.node)->code.pb(tac_);
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-2].node)->code.begin(), (yyvsp[-2].node)->code.end());
		(yyval.node)->code.pb(tac2);
		(yyval.node)->code.pb(tac1);

		updateBreak((yyval.node), endLoopLabel);
		updateContinue((yyval.node), updateLabel);
        ST->curEnv = ST->curEnv->prevEnv;
	}
#line 3933 "parser.tab.c"
    break;

  case 152: /* BasicForStatement: BlockStart FOR '(' ForInit ';' Expression ';' ')' Statement  */
#line 1108 "parser.y"
                                                                        { 
		(yyval.node) = (yyvsp[-5].node);
		string conditionLabel = getNewLabel();
		TAC* tac = new TAC();
		tac->op = "label";
		tac->target = conditionLabel;

		string inLoopLabel = getNewLabel();			
		string endLoopLabel = getNewLabel();
			
		TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = inLoopLabel;

		TAC* tac2 = new TAC();	tac2->op = "ifgoto"; tac2->dest = ST->GetVar((yyvsp[-3].node)->place); tac2->target = inLoopLabel;
		if(!((yyvsp[-3].node)->isLit) && ST->GetVar((yyvsp[-3].node)->place)->type == "None"){
			cerr << "Symbol " << (yyvsp[-3].node)->place << " not defined, at line: " <<line;
			exit(1);
		}

		TAC* tac3 = new TAC();	tac3->op = "goto"; tac3->target = endLoopLabel;

		TAC* tac4 = new TAC();	tac4->op = "label"; tac4->target = endLoopLabel;

		TAC* tac5 = new TAC();	tac5->op = "goto"; 	tac5->target = conditionLabel;

		(yyval.node)->code.pb(tac);
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-3].node)->code.begin(), (yyvsp[-3].node)->code.end());

		(yyval.node)->code.pb(tac2);
		(yyval.node)->code.pb(tac3);
		(yyval.node)->code.pb(tac1);
		if((yyvsp[0].node)->code.size() > 0)
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		(yyval.node)->code.pb(tac5);
		(yyval.node)->code.pb(tac4);

		updateBreak((yyval.node), endLoopLabel);
		updateContinue((yyval.node), conditionLabel);

		ST->curEnv = ST->curEnv->prevEnv;
	}
#line 3978 "parser.tab.c"
    break;

  case 153: /* BasicForStatement: BlockStart FOR '(' ForInit ';' ';' ForUpdate ')' Statement  */
#line 1148 "parser.y"
                                                                     {
		(yyval.node) = (yyvsp[-5].node);

		string conditionLabel = getNewLabel();
		TAC* tac = new TAC();
		tac->op = "label";
		tac->target = conditionLabel;

		string endLoopLabel = getNewLabel();
			
		TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = endLoopLabel;

		TAC* tac2 = new TAC();	tac2->op = "goto"; 	tac2->target = conditionLabel;

		string updateLabel = getNewLabel();
		TAC* tac_ = new TAC();	tac_->op = "label";	tac_->target = updateLabel;

		(yyval.node)->code.pb(tac);
		if((yyvsp[0].node)->code.size() > 0)
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		(yyval.node)->code.pb(tac_);
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-2].node)->code.begin(), (yyvsp[-2].node)->code.end());
		(yyval.node)->code.pb(tac2);
		(yyval.node)->code.pb(tac1);

		updateBreak((yyval.node), endLoopLabel);
		updateContinue((yyval.node), updateLabel);

		ST->curEnv = ST->curEnv->prevEnv;
	}
#line 4013 "parser.tab.c"
    break;

  case 154: /* BasicForStatement: BlockStart FOR '(' ';' Expression ';' ForUpdate ')' Statement  */
#line 1178 "parser.y"
                                                                         {
		genNode* newNode = new genNode();
		(yyval.node) = newNode;

		string conditionLabel = getNewLabel();
		TAC* tac = new TAC();
		tac->op = "label";
		tac->target = conditionLabel;

		string inLoopLabel = getNewLabel();			
		string endLoopLabel = getNewLabel();
			
		TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = inLoopLabel;

		TAC* tac2 = new TAC();	tac2->op = "ifgoto"; tac2->dest = ST->GetVar((yyvsp[-4].node)->place); tac2->target = inLoopLabel;
		if(!((yyvsp[-4].node)->isLit) && ST->GetVar((yyvsp[-4].node)->place)->type == "None"){
			cerr << "Symbol " << (yyvsp[-4].node)->place << " not defined, at line: " <<line;
			exit(1);
		}

		TAC* tac3 = new TAC();	tac3->op = "goto"; tac3->target = endLoopLabel;

		TAC* tac4 = new TAC();	tac4->op = "label"; tac4->target = endLoopLabel;

		TAC* tac5 = new TAC();	tac5->op = "goto"; 	tac5->target = conditionLabel;

		string updateLabel = getNewLabel();
		TAC* tac_ = new TAC();	tac_->op = "label";	tac_->target = updateLabel;

		(yyval.node)->code.pb(tac);

		(yyval.node)->code.pb(tac2);
		(yyval.node)->code.pb(tac3);
		(yyval.node)->code.pb(tac1);
		if((yyvsp[0].node)->code.empty()){
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		}
		(yyval.node)->code.pb(tac_);
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-2].node)->code.begin(), (yyvsp[-2].node)->code.end());
		(yyval.node)->code.pb(tac5);
		(yyval.node)->code.pb(tac4);

		updateBreak((yyval.node), endLoopLabel);
		updateContinue((yyval.node), updateLabel);

		ST->curEnv = ST->curEnv->prevEnv;
	}
#line 4065 "parser.tab.c"
    break;

  case 155: /* BasicForStatement: BlockStart FOR '(' ForInit ';' Expression ';' ForUpdate ')' Statement  */
#line 1225 "parser.y"
                                                                                  { 
		(yyval.node) = (yyvsp[-6].node);
		string conditionLabel = getNewLabel();
		TAC* tac = new TAC();
		tac->op = "label";
		tac->target = conditionLabel;

		string inLoopLabel = getNewLabel();			
		string endLoopLabel = getNewLabel();
			
		TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = inLoopLabel;

		TAC* tac2 = new TAC();	tac2->op = "ifgoto"; tac2->dest = ST->GetVar((yyvsp[-4].node)->place); tac2->target = inLoopLabel;
		if(!((yyvsp[-4].node)->isLit) && ST->GetVar((yyvsp[-4].node)->place)->type == "None"){
			cerr << "Symbol " << (yyvsp[-4].node)->place << " not defined, at line: " <<line;
			exit(1);
		}

		TAC* tac3 = new TAC();	tac3->op = "goto"; tac3->target = endLoopLabel;

		TAC* tac4 = new TAC();	tac4->op = "label"; tac4->target = endLoopLabel;

		TAC* tac5 = new TAC();	tac5->op = "goto"; 	tac5->target = conditionLabel;

		string updateLabel = getNewLabel();
		TAC* tac_ = new TAC();	tac_->op = "label";	tac_->target = updateLabel;

		(yyval.node)->code.pb(tac);
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-4].node)->code.begin(), (yyvsp[-4].node)->code.end());

		(yyval.node)->code.pb(tac2);
		(yyval.node)->code.pb(tac3);
		(yyval.node)->code.pb(tac1);
		if((yyvsp[0].node)->code.size() > 0)
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		(yyval.node)->code.pb(tac_);
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-2].node)->code.begin(), (yyvsp[-2].node)->code.end());
		(yyval.node)->code.pb(tac5);
		(yyval.node)->code.pb(tac4);

		updateBreak((yyval.node), endLoopLabel);
		updateContinue((yyval.node), updateLabel);
        ST->curEnv = ST->curEnv->prevEnv;
    }
#line 4114 "parser.tab.c"
    break;

  case 156: /* BasicForStatementNoShortIf: BlockStart FOR '(' ';' ';' ')' StatementNoShortIf  */
#line 1272 "parser.y"
                                                          { 
		genNode* newNode = new genNode();
		(yyval.node) = newNode;

		string conditionLabel = getNewLabel();
		TAC* tac = new TAC();
		tac->op = "label";
		tac->target = conditionLabel;

		string endLoopLabel = getNewLabel();
			
		TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = endLoopLabel;

		TAC* tac2 = new TAC();	tac2->op = "goto"; 	tac2->target = conditionLabel;

		(yyval.node)->code.pb(tac);
		if((yyvsp[0].node)->code.size() > 0)
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());

		(yyval.node)->code.pb(tac2);
		(yyval.node)->code.pb(tac1);

		updateBreak((yyval.node), endLoopLabel);
		updateContinue((yyval.node), conditionLabel);

		ST->curEnv = ST->curEnv->prevEnv;
	}
#line 4146 "parser.tab.c"
    break;

  case 157: /* BasicForStatementNoShortIf: BlockStart FOR '(' ForInit ';' ';' ')' StatementNoShortIf  */
#line 1299 "parser.y"
                                                                      { 
		(yyval.node) = (yyvsp[-4].node);

		string conditionLabel = getNewLabel();
		TAC* tac = new TAC();
		tac->op = "label";
		tac->target = conditionLabel;

		string endLoopLabel = getNewLabel();
			
		TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = endLoopLabel;

		TAC* tac2 = new TAC();	tac2->op = "goto"; 	tac2->target = conditionLabel;

		(yyval.node)->code.pb(tac);
		if((yyvsp[0].node)->code.size() > 0)
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());

		(yyval.node)->code.pb(tac2);
		(yyval.node)->code.pb(tac1);

		updateBreak((yyval.node), endLoopLabel);
		updateContinue((yyval.node), conditionLabel);

		ST->curEnv = ST->curEnv->prevEnv;
	}
#line 4177 "parser.tab.c"
    break;

  case 158: /* BasicForStatementNoShortIf: BlockStart FOR '(' ';' Expression ';' ')' StatementNoShortIf  */
#line 1325 "parser.y"
                                                                         { 
		genNode* newNode = new genNode();
		(yyval.node) = newNode;

		string conditionLabel = getNewLabel();
		TAC* tac = new TAC();
		tac->op = "label";
		tac->target = conditionLabel;

		string inLoopLabel = getNewLabel();			
		string endLoopLabel = getNewLabel();
			
		TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = inLoopLabel;

		TAC* tac2 = new TAC();	tac2->op = "ifgoto"; tac2->dest = ST->GetVar((yyvsp[-3].node)->place); tac2->target = inLoopLabel;
		if(!((yyvsp[-3].node)->isLit) && ST->GetVar((yyvsp[-3].node)->place)->type == "None"){
			cerr << "Symbol " << (yyvsp[-3].node)->place << " not defined, at line: " <<line;
			exit(1);
		}

		TAC* tac3 = new TAC();	tac3->op = "goto"; tac3->target = endLoopLabel;

		TAC* tac4 = new TAC();	tac4->op = "label"; tac4->target = endLoopLabel;

		TAC* tac5 = new TAC();	tac5->op = "goto"; 	tac5->target = conditionLabel;

		(yyval.node)->code.pb(tac);

		(yyval.node)->code.pb(tac2);
		(yyval.node)->code.pb(tac3);
		(yyval.node)->code.pb(tac1);
		if((yyvsp[0].node)->code.size() > 0)
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		(yyval.node)->code.pb(tac5);
		(yyval.node)->code.pb(tac4);

		updateBreak((yyval.node), endLoopLabel);
		updateContinue((yyval.node), conditionLabel);

		ST->curEnv = ST->curEnv->prevEnv;
	}
#line 4223 "parser.tab.c"
    break;

  case 159: /* BasicForStatementNoShortIf: BlockStart FOR '(' ';' ';' ForUpdate ')' StatementNoShortIf  */
#line 1366 "parser.y"
                                                                        { 
		genNode* newNode = new genNode();
		(yyval.node) = newNode;

		string conditionLabel = getNewLabel();
		TAC* tac = new TAC();
		tac->op = "label";
		tac->target = conditionLabel;

		string endLoopLabel = getNewLabel();
			
		TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = endLoopLabel;

		TAC* tac2 = new TAC();	tac2->op = "goto"; 	tac2->target = conditionLabel;

		string updateLabel = getNewLabel();
		TAC* tac_ = new TAC();	tac_->op = "label";	tac_->target = updateLabel;

		(yyval.node)->code.pb(tac);
		if((yyvsp[0].node)->code.size() > 0)
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		(yyval.node)->code.pb(tac_);
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-2].node)->code.begin(), (yyvsp[-2].node)->code.end());
		(yyval.node)->code.pb(tac2);
		(yyval.node)->code.pb(tac1);

		updateBreak((yyval.node), endLoopLabel);
		updateContinue((yyval.node), updateLabel);
        ST->curEnv = ST->curEnv->prevEnv;
	}
#line 4258 "parser.tab.c"
    break;

  case 160: /* BasicForStatementNoShortIf: BlockStart FOR '(' ForInit ';' Expression ';' ')' StatementNoShortIf  */
#line 1396 "parser.y"
                                                                                 { 
		(yyval.node) = (yyvsp[-5].node);
		string conditionLabel = getNewLabel();
		TAC* tac = new TAC();
		tac->op = "label";
		tac->target = conditionLabel;

		string inLoopLabel = getNewLabel();			
		string endLoopLabel = getNewLabel();
			
		TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = inLoopLabel;

		TAC* tac2 = new TAC();	tac2->op = "ifgoto"; tac2->dest = ST->GetVar((yyvsp[-3].node)->place); tac2->target = inLoopLabel;
		if(!((yyvsp[-3].node)->isLit) && ST->GetVar((yyvsp[-3].node)->place)->type == "None"){
			cerr << "Symbol " << (yyvsp[-3].node)->place << " not defined, at line: " <<line;
			exit(1);
		}

		TAC* tac3 = new TAC();	tac3->op = "goto"; tac3->target = endLoopLabel;

		TAC* tac4 = new TAC();	tac4->op = "label"; tac4->target = endLoopLabel;

		TAC* tac5 = new TAC();	tac5->op = "goto"; 	tac5->target = conditionLabel;

		(yyval.node)->code.pb(tac);
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-3].node)->code.begin(), (yyvsp[-3].node)->code.end());

		(yyval.node)->code.pb(tac2);
		(yyval.node)->code.pb(tac3);
		(yyval.node)->code.pb(tac1);
		if((yyvsp[0].node)->code.size() > 0)
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		(yyval.node)->code.pb(tac5);
		(yyval.node)->code.pb(tac4);

		updateBreak((yyval.node), endLoopLabel);
		updateContinue((yyval.node), conditionLabel);

		ST->curEnv = ST->curEnv->prevEnv;
	}
#line 4303 "parser.tab.c"
    break;

  case 161: /* BasicForStatementNoShortIf: BlockStart FOR '(' ForInit ';' ';' ForUpdate ')' StatementNoShortIf  */
#line 1436 "parser.y"
                                                                              {
		(yyval.node) = (yyvsp[-5].node);

		string conditionLabel = getNewLabel();
		TAC* tac = new TAC();
		tac->op = "label";
		tac->target = conditionLabel;

		string endLoopLabel = getNewLabel();
			
		TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = endLoopLabel;

		TAC* tac2 = new TAC();	tac2->op = "goto"; 	tac2->target = conditionLabel;

		string updateLabel = getNewLabel();
		TAC* tac_ = new TAC();	tac_->op = "label";	tac_->target = updateLabel;

		(yyval.node)->code.pb(tac);
		if((yyvsp[0].node)->code.size() > 0)
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		(yyval.node)->code.pb(tac_);
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-2].node)->code.begin(), (yyvsp[-2].node)->code.end());
		(yyval.node)->code.pb(tac2);
		(yyval.node)->code.pb(tac1);

		updateBreak((yyval.node), endLoopLabel);
		updateContinue((yyval.node), updateLabel);

		ST->curEnv = ST->curEnv->prevEnv;
	}
#line 4338 "parser.tab.c"
    break;

  case 162: /* BasicForStatementNoShortIf: BlockStart FOR '(' ';' Expression ';' ForUpdate ')' StatementNoShortIf  */
#line 1466 "parser.y"
                                                                                  {
		genNode* newNode = new genNode();
		(yyval.node) = newNode;

		string conditionLabel = getNewLabel();
		TAC* tac = new TAC();
		tac->op = "label";
		tac->target = conditionLabel;

		string inLoopLabel = getNewLabel();			
		string endLoopLabel = getNewLabel();
			
		TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = inLoopLabel;

		TAC* tac2 = new TAC();	tac2->op = "ifgoto"; tac2->dest = ST->GetVar((yyvsp[-4].node)->place); tac2->target = inLoopLabel;
		if(!((yyvsp[-4].node)->isLit) && ST->GetVar((yyvsp[-4].node)->place)->type == "None"){
			cerr << "Symbol " << (yyvsp[-4].node)->place << " not defined, at line: " <<line;
			exit(1);
		}

		TAC* tac3 = new TAC();	tac3->op = "goto"; tac3->target = endLoopLabel;

		TAC* tac4 = new TAC();	tac4->op = "label"; tac4->target = endLoopLabel;

		TAC* tac5 = new TAC();	tac5->op = "goto"; 	tac5->target = conditionLabel;

		string updateLabel = getNewLabel();
		TAC* tac_ = new TAC();	tac_->op = "label";	tac_->target = updateLabel;

		(yyval.node)->code.pb(tac);

		(yyval.node)->code.pb(tac2);
		(yyval.node)->code.pb(tac3);
		(yyval.node)->code.pb(tac1);
		if((yyvsp[0].node)->code.empty()){
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		}
		(yyval.node)->code.pb(tac_);
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-2].node)->code.begin(), (yyvsp[-2].node)->code.end());
		(yyval.node)->code.pb(tac5);
		(yyval.node)->code.pb(tac4);

		updateBreak((yyval.node), endLoopLabel);
		updateContinue((yyval.node), updateLabel);

		ST->curEnv = ST->curEnv->prevEnv;
	}
#line 4390 "parser.tab.c"
    break;

  case 163: /* BasicForStatementNoShortIf: BlockStart FOR '(' ForInit ';' Expression ';' ForUpdate ')' StatementNoShortIf  */
#line 1513 "parser.y"
                                                                                           { 
		(yyval.node) = (yyvsp[-6].node);
		string conditionLabel = getNewLabel();
		TAC* tac = new TAC();
		tac->op = "label";
		tac->target = conditionLabel;

		string inLoopLabel = getNewLabel();			
		string endLoopLabel = getNewLabel();
			
		TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = inLoopLabel;

		TAC* tac2 = new TAC();	tac2->op = "ifgoto"; tac2->dest = ST->GetVar((yyvsp[-4].node)->place); tac2->target = inLoopLabel;
		if(!((yyvsp[-4].node)->isLit) && ST->GetVar((yyvsp[-4].node)->place)->type == "None"){
			cerr << "Symbol " << (yyvsp[-4].node)->place << " not defined, at line: " <<line;
			exit(1);
		}

		TAC* tac3 = new TAC();	tac3->op = "goto"; tac3->target = endLoopLabel;

		TAC* tac4 = new TAC();	tac4->op = "label"; tac4->target = endLoopLabel;

		TAC* tac5 = new TAC();	tac5->op = "goto"; 	tac5->target = conditionLabel;

		string updateLabel = getNewLabel();
		TAC* tac_ = new TAC();	tac_->op = "label";	tac_->target = updateLabel;

		(yyval.node)->code.pb(tac);
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-4].node)->code.begin(), (yyvsp[-4].node)->code.end());

		(yyval.node)->code.pb(tac2);
		(yyval.node)->code.pb(tac3);
		(yyval.node)->code.pb(tac1);
		if((yyvsp[0].node)->code.size() > 0)
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		(yyval.node)->code.pb(tac_);
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-2].node)->code.begin(), (yyvsp[-2].node)->code.end());
		(yyval.node)->code.pb(tac5);
		(yyval.node)->code.pb(tac4);

		updateBreak((yyval.node), endLoopLabel);
		updateContinue((yyval.node), updateLabel);
        ST->curEnv = ST->curEnv->prevEnv;
    }
#line 4439 "parser.tab.c"
    break;

  case 164: /* ForInit: StatementExpressionList  */
#line 1561 "parser.y"
                                       {(yyval.node)=(yyvsp[0].node);}
#line 4445 "parser.tab.c"
    break;

  case 165: /* ForInit: LocalVariableDeclaration  */
#line 1562 "parser.y"
                                       {(yyval.node)=(yyvsp[0].node);}
#line 4451 "parser.tab.c"
    break;

  case 166: /* ForUpdate: StatementExpressionList  */
#line 1566 "parser.y"
                                       {(yyval.node)=(yyvsp[0].node);}
#line 4457 "parser.tab.c"
    break;

  case 167: /* StatementExpressionList: StatementExpression  */
#line 1570 "parser.y"
                                                        { (yyval.node) = (yyvsp[0].node); }
#line 4463 "parser.tab.c"
    break;

  case 168: /* StatementExpressionList: StatementExpressionList ',' StatementExpression  */
#line 1571 "parser.y"
                                                        {
        (yyval.node) = (yyvsp[-2].node);
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
    }
#line 4472 "parser.tab.c"
    break;

  case 169: /* BreakStatement: BREAK ';'  */
#line 1578 "parser.y"
                  { 
        genNode* n = new genNode();
		(yyval.node) = n;
        TAC* tac = new TAC();	tac -> op = "goto";	tac -> isBreak = true;
        n->code.pb(tac);
    }
#line 4483 "parser.tab.c"
    break;

  case 170: /* ContinueStatement: CONTINUE ';'  */
#line 1587 "parser.y"
                                  {
        genNode* n = new genNode();
		(yyval.node) = n;
        TAC* tac = new TAC();	tac -> op = "goto";	tac -> isContinue = true;
        n->code.pb(tac);
    }
#line 4494 "parser.tab.c"
    break;

  case 171: /* ReturnStatement: RETURN Expression ';'  */
#line 1596 "parser.y"
                                  {
        (yyval.node) = (yyvsp[-1].node);
		TAC* tac = new TAC();
		tac->op = "retint";
		if((yyvsp[-1].node)->isLit){
			tac->l1=(yyvsp[-1].node)->place;
			tac->isInt1 = true;
		}
		else
			tac->dest = ST->GetVar((yyvsp[-1].node)->place);
		if(!((yyvsp[-1].node)->isLit) && ST->GetVar((yyvsp[-1].node)->place)->type == "None"){
			cerr << "Symbol " << (yyvsp[-1].node)->place << " not defined, at line: " <<line;
			exit(1);
		}
		vector <TAC*> tmp;
		tmp.pb(tac);
		(yyval.node)->code.insert((yyval.node)->code.begin(), tmp.begin(), tmp.end());
    }
#line 4517 "parser.tab.c"
    break;

  case 172: /* ReturnStatement: RETURN ';'  */
#line 1614 "parser.y"
                                  {
        genNode* n = new genNode();
		(yyval.node) = n;
		TAC* tac = new TAC();
		tac->op = "ret";
		(yyval.node)->code.pb(tac);
    }
#line 4529 "parser.tab.c"
    break;

  case 173: /* Primary: PrimaryNoNewArray  */
#line 1624 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 4535 "parser.tab.c"
    break;

  case 174: /* Primary: ArrayCreationExpression  */
#line 1625 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 4541 "parser.tab.c"
    break;

  case 175: /* PrimaryNoNewArray: Literal  */
#line 1629 "parser.y"
                                                                                   { (yyval.node)=(yyvsp[0].node); }
#line 4547 "parser.tab.c"
    break;

  case 176: /* PrimaryNoNewArray: '(' Expression ')'  */
#line 1630 "parser.y"
                                                                                    { (yyval.node) = (yyvsp[-1].node); }
#line 4553 "parser.tab.c"
    break;

  case 177: /* PrimaryNoNewArray: ClassInstanceCreationExpression  */
#line 1631 "parser.y"
                                                                                    { (yyval.node)=(yyvsp[0].node); }
#line 4559 "parser.tab.c"
    break;

  case 178: /* PrimaryNoNewArray: FieldAccess  */
#line 1632 "parser.y"
                                                                                    { (yyval.node)=(yyvsp[0].node); }
#line 4565 "parser.tab.c"
    break;

  case 179: /* PrimaryNoNewArray: ArrayAccess  */
#line 1633 "parser.y"
                                                                                    { (yyval.node)=(yyvsp[0].node); }
#line 4571 "parser.tab.c"
    break;

  case 180: /* PrimaryNoNewArray: MethodInvocation  */
#line 1634 "parser.y"
                                                                                    { (yyval.node)=(yyvsp[0].node); }
#line 4577 "parser.tab.c"
    break;

  case 181: /* Literal: BooleanLiteral  */
#line 1638 "parser.y"
                      {(yyval.node)=(yyvsp[0].node);}
#line 4583 "parser.tab.c"
    break;

  case 182: /* Literal: IntegerLiteral  */
#line 1639 "parser.y"
                      {(yyval.node)=(yyvsp[0].node);}
#line 4589 "parser.tab.c"
    break;

  case 183: /* Literal: CharacterLiteral  */
#line 1640 "parser.y"
                       {(yyval.node)=(yyvsp[0].node);}
#line 4595 "parser.tab.c"
    break;

  case 184: /* Literal: StringLiteral  */
#line 1641 "parser.y"
                    {(yyval.node)=(yyvsp[0].node);}
#line 4601 "parser.tab.c"
    break;

  case 185: /* Literal: NullLiteral  */
#line 1642 "parser.y"
                   {(yyval.node)=(yyvsp[0].node);}
#line 4607 "parser.tab.c"
    break;

  case 186: /* Literal: FloatLiteral  */
#line 1643 "parser.y"
                       { (yyval.node)=(yyvsp[0].node); }
#line 4613 "parser.tab.c"
    break;

  case 187: /* BooleanLiteral: TRUELITERAL  */
#line 1647 "parser.y"
                      {	
			string s1((yyvsp[0].str));
			genNode* n1 = new genNode();
			(yyval.node) = n1;
			(yyval.node)->type = "bool";
			(yyval.node)->place = s1;
			(yyval.node)->isLit = true;
            (yyval.node)->label = "TrueLiteral";
            (yyval.node)->value = s1;
		}
#line 4628 "parser.tab.c"
    break;

  case 188: /* BooleanLiteral: FALSELITERAL  */
#line 1657 "parser.y"
                               { 	
			string s1((yyvsp[0].str));
			genNode* n1 = new genNode();
			(yyval.node) = n1;
			(yyval.node)->type = "bool";
			(yyval.node)->place = s1;
			(yyval.node)->isLit = true;
            (yyval.node)->label = "FalseLiteral";
            (yyval.node)->value = s1;
		}
#line 4643 "parser.tab.c"
    break;

  case 189: /* IntegerLiteral: INTEGERLITERAL  */
#line 1670 "parser.y"
                        {
			genNode* n1 = new genNode();
			(yyval.node) = n1;
			(yyval.node)->type = "int";
			(yyval.node)->place = to_string((yyvsp[0].ival));
			(yyval.node)->isLit = true;
            (yyval.node)->label = "IntegerLiteral";
            (yyval.node)->value = to_string((yyvsp[0].ival));
		}
#line 4657 "parser.tab.c"
    break;

  case 190: /* CharacterLiteral: CHARACTERLITERAL  */
#line 1682 "parser.y"
                                {
			string s1((yyvsp[0].str));
			genNode* n1 = new genNode();
			(yyval.node) = n1;
			(yyval.node)->type = "char";
			(yyval.node)->place = s1;
			(yyval.node)->isLit = true;
            (yyval.node)->label = "CharacterLiteral";
            (yyval.node)->value = s1;
		}
#line 4672 "parser.tab.c"
    break;

  case 191: /* StringLiteral: STRINGLITERAL  */
#line 1695 "parser.y"
                        {
			string s1((yyvsp[0].str));
			genNode* n1 = new genNode();
			(yyval.node) = n1;
			(yyval.node)->type = "string";
			(yyval.node)->place = s1;
			(yyval.node)->isLit = true;
            (yyval.node)->label = "StringLiteral";
            (yyval.node)->value = s1;
		}
#line 4687 "parser.tab.c"
    break;

  case 192: /* NullLiteral: NULLLITERAL  */
#line 1708 "parser.y"
                        {
			string s1((yyvsp[0].str));
			genNode* n1 = new genNode();
			(yyval.node) = n1;
			(yyval.node)->type = "null";
			(yyval.node)->place = s1;
			(yyval.node)->isLit = true;
            (yyval.node)->label = "NullLiteral";
            (yyval.node)->value = s1;
		}
#line 4702 "parser.tab.c"
    break;

  case 193: /* FloatLiteral: FLOATINGPOINTLITERAL  */
#line 1721 "parser.y"
                              {
		string s1((yyvsp[0].str));
			genNode* n1 = new genNode();
			(yyval.node) = n1;
			(yyval.node)->type = "float";
			(yyval.node)->place = s1;
			(yyval.node)->isLit = true;
            (yyval.node)->label = "FloatLiteral";
            (yyval.node)->value = s1;
	   }
#line 4717 "parser.tab.c"
    break;

  case 194: /* ClassInstanceCreationExpression: UnqualifiedClassInstanceCreationExpression  */
#line 1734 "parser.y"
                                                                                         { (yyval.node)=(yyvsp[0].node); }
#line 4723 "parser.tab.c"
    break;

  case 195: /* ClassInstanceCreationExpression: TypeName '.' UnqualifiedClassInstanceCreationExpression  */
#line 1735 "parser.y"
                                                                                       { (yyval.node) = (yyvsp[-2].node); }
#line 4729 "parser.tab.c"
    break;

  case 196: /* ClassInstanceCreationExpression: Primary '.' UnqualifiedClassInstanceCreationExpression  */
#line 1736 "parser.y"
                                                                                         { (yyval.node) = (yyvsp[-2].node); }
#line 4735 "parser.tab.c"
    break;

  case 197: /* UnqualifiedClassInstanceCreationExpression: NEW TypeName '(' ArgumentList ')'  */
#line 1740 "parser.y"
                                        { (yyval.node) = (yyvsp[-1].node); }
#line 4741 "parser.tab.c"
    break;

  case 198: /* UnqualifiedClassInstanceCreationExpression: NEW TypeName '(' ArgumentList ')' ClassBody  */
#line 1741 "parser.y"
                                                                                        {
		(yyval.node) = (yyvsp[-2].node);
        (yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());

	}
#line 4751 "parser.tab.c"
    break;

  case 199: /* UnqualifiedClassInstanceCreationExpression: NEW TypeName '(' ')' ClassBody  */
#line 1746 "parser.y"
                                      {   
		(yyval.node) = (yyvsp[0].node);
	}
#line 4759 "parser.tab.c"
    break;

  case 200: /* UnqualifiedClassInstanceCreationExpression: NEW TypeName '(' ')'  */
#line 1749 "parser.y"
                            {

	}
#line 4767 "parser.tab.c"
    break;

  case 201: /* FieldAccess: Primary '.' Identifier  */
#line 1755 "parser.y"
                              {
		(yyval.node) = (yyvsp[-2].node);
	}
#line 4775 "parser.tab.c"
    break;

  case 202: /* ArrayAccess: TypeName '[' Expression ']'  */
#line 1761 "parser.y"
                                  {
        genNode* newNode = new genNode;
		(yyval.node) = newNode;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-1].node)->code.begin(), (yyvsp[-1].node)->code.end());
		Symbol* temp = ST->GetVar(ST->GenTemp());
		temp->type = ST->GetVar((yyvsp[-3].node)->place)->type;
		(yyval.node)->place = temp->name;
		(yyval.node)->type = ST->GetVar((yyvsp[-3].node)->place)->type;
		if(!((yyvsp[-3].node)->isLit) && ST->GetVar((yyvsp[-3].node)->place)->type == "None"){
			cerr << "Symbol " << (yyvsp[-3].node)->place << " not defined, at line: " <<line;
			exit(1);
		}
		TAC* tac = new TAC();
		tac->op = "getarr";
		tac->dest = temp;
		tac->array_name = (yyvsp[-3].node)->place;
		(yyval.node)->isArray = true;
		if((yyvsp[-1].node)->isLit){
			tac->isInt2 = true;
			tac->l2 = (yyvsp[-1].node)->place;
			(yyval.node)->isLit=true;
		}
		else{
			tac->opd2 = ST->GetVar((yyvsp[-1].node)->place);
			if(!((yyvsp[-1].node)->isLit) && ST->GetVar((yyvsp[-1].node)->place)->type == "None"){
				cerr << "Symbol " << (yyvsp[-1].node)->place << " not defined, at line: " <<line;
				exit(1);
			}
			(yyval.node)->isLit = false;

		}
		(yyval.node)->arrayName = (yyvsp[-3].node)->place;
		(yyval.node)->arrayIndex = (yyvsp[-1].node)->place;
		(yyval.node)->code.pb(tac);
        
    }
#line 4816 "parser.tab.c"
    break;

  case 203: /* ArrayAccess: PrimaryNoNewArray '[' Expression ']'  */
#line 1797 "parser.y"
                                            {
       	genNode* newNode = new genNode;
		(yyval.node) = newNode;
		if((yyvsp[-3].node)->isLit){
			cerr<<"Error: invalid array name at line: "<<line<<endl;
			exit(1);
		}
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-3].node)->code.begin(), (yyvsp[-3].node)->code.end());
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-1].node)->code.begin(), (yyvsp[-1].node)->code.end());
		Symbol* temp = ST->GetVar(ST->GenTemp());
		temp->type = ST->GetVar((yyvsp[-3].node)->place)->type;
		if(!((yyvsp[-3].node)->isLit) && ST->GetVar((yyvsp[-3].node)->place)->type == "None"){
			cerr << "Symbol " << (yyvsp[-3].node)->place << " not defined, at line: " <<line;
			exit(1);
		}
		(yyval.node)->place = temp->name;
		(yyval.node)->type = ST->GetVar((yyvsp[-3].node)->place)->type;
		TAC* tac = new TAC();
		tac->op = "getarr";
		tac->dest = temp;
		tac->array_name = (yyvsp[-3].node)->place;
		(yyval.node)->isArray = true;
		if((yyvsp[-1].node)->isLit){
			tac->isInt2 = true;
			tac->l2 = (yyvsp[-1].node)->place;
			(yyval.node)->isLit=true;
		}
		else{
			tac->opd2 = ST->GetVar((yyvsp[-1].node)->place);
			if(!((yyvsp[-1].node)->isLit) && ST->GetVar((yyvsp[-1].node)->place)->type == "None"){
				cerr << "Symbol " << (yyvsp[-1].node)->place << " not defined, at line: " <<line;
				exit(1);
			}
			(yyval.node)->isLit = false;

		}
		(yyval.node)->arrayName = (yyvsp[-3].node)->place;
		(yyval.node)->arrayIndex = (yyvsp[-1].node)->place;
		(yyval.node)->code.pb(tac);
    }
#line 4861 "parser.tab.c"
    break;

  case 204: /* MethodInvocation: TypeName '(' ')'  */
#line 1840 "parser.y"
                        {
		TAC* tac = new TAC();
		tac->op = "call";
		Env* methodEnv = ST->GetMethod((yyvsp[-2].node)->place);
		if(!methodEnv){
			cerr<<"Error: Method "<<(yyvsp[-2].node)->place<<" not defined in the scope, at line: "<<line<<endl;
			exit(1);
		}
		tac->target = methodEnv->name;
		tac->isInt1 = true;
		tac->l1 = convertNumToString(methodEnv->argNum);
		string str1 = ST->GenTemp();
		Symbol* sym = ST->GetVar(str1);
		sym->type = methodEnv->returnType;
		tac->dest = sym;
		(yyval.node) = (yyvsp[-2].node);
		(yyval.node)->place = str1;
		(yyval.node)->type = methodEnv->returnType;
		(yyval.node)->code.pb(tac);
    }
#line 4886 "parser.tab.c"
    break;

  case 205: /* MethodInvocation: TypeName '(' ArgumentList ')'  */
#line 1861 "parser.y"
                                        {
        TAC* tac = new TAC();
		tac->op = "call";
		tac->isInt1 = true;
        cout<<(yyvsp[-3].node)->place <<"hello" <<endl;
		Env* methodEnv = ST->GetMethod((yyvsp[-3].node)->place);
		if(!methodEnv){
			cerr<<"Error: Method "<<(yyvsp[-3].node)->place<<" not defined in the scope, at line: "<<line<<endl;
			exit(1);
		}
		tac->target = methodEnv->name;


		tac->l1 = convertNumToString(methodEnv->argNum);
		string str1 = ST->GenTemp();


		Symbol* sym = ST->GetVar(str1);
		sym->type = methodEnv->returnType;
		tac->dest = sym;
		(yyval.node) = (yyvsp[-3].node);
		if((yyvsp[-1].node)->code.size() > 0)	(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-1].node)->code.begin(), (yyvsp[-1].node)->code.end());
		(yyval.node)->place = str1;
		(yyval.node)->type = methodEnv->returnType;
		(yyval.node)->code.pb(tac);
    }
#line 4917 "parser.tab.c"
    break;

  case 206: /* ArgumentList: ArgumentList ',' Expression  */
#line 1890 "parser.y"
                                                                                       {
       (yyval.node) = (yyvsp[-2].node);
	   (yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
	}
#line 4926 "parser.tab.c"
    break;

  case 207: /* ArgumentList: Expression  */
#line 1894 "parser.y"
                                                                                       {(yyval.node) = (yyvsp[0].node); }
#line 4932 "parser.tab.c"
    break;

  case 208: /* ArrayCreationExpression: NEW PrimitiveType '[' Expression ']'  */
#line 1898 "parser.y"
                                           {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->isArray = true;
		(yyval.node)->type = (yyvsp[-3].node)->type;
		(yyval.node)->nodeLen = stoi((yyvsp[-1].node)->place);
   }
#line 4944 "parser.tab.c"
    break;

  case 209: /* ArrayCreationExpression: NEW TypeName '[' Expression ']'  */
#line 1905 "parser.y"
                                     {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->isArray = true;
		(yyval.node)->type = (yyvsp[-3].node)->type;
		(yyval.node)->nodeLen = stoi((yyvsp[-1].node)->place);
   }
#line 4956 "parser.tab.c"
    break;

  case 210: /* Expression: AssignmentExpression  */
#line 1915 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4962 "parser.tab.c"
    break;

  case 211: /* AssignmentExpression: ConditionalExpression  */
#line 1919 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4968 "parser.tab.c"
    break;

  case 212: /* AssignmentExpression: Assignment  */
#line 1920 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4974 "parser.tab.c"
    break;

  case 213: /* Assignment: LeftHandSide AssignmentOperator Expression  */
#line 1924 "parser.y"
                                                 { 
 			// assignment_operator is a string
			(yyval.node) = (yyvsp[-2].node);	
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			// TAC* tac = new TAC();
			
			Symbol* sym1 = ST->GetVar((yyvsp[-2].node)->place);
			if(sym1->type == "None"){
				cerr << "Error: Symbol " <<  (yyvsp[-2].node)->place << " not defined, at line num: "<<line << endl;
				exit(1);
			}
			if((yyvsp[0].node)->isLit==false){		
				Symbol* sym2 = ST->GetVar((yyvsp[0].node)->place);
				if(sym2->type == "None"){
					cerr << "Error: Symbol "<< (yyvsp[0].node)->place << " not defined, at line num: "<<line << endl;
					exit(1);
				}
				if(sym1->baseType != sym2->baseType){
					cerr << "Error: Incompatible types at line num: "<<line << endl;
					exit(1);
				}
				if(sym1->baseType == "ARRAYTYPE" || sym2->baseType == "ARRAYTYPE"){	
					cerr << "Error: Incompatible types at line num: "<<line << endl;
					exit(1);
				}
			}
			gen2OpCode((yyval.node), (yyvsp[-1].str), (yyvsp[-2].node), (yyvsp[0].node), line);
			if((yyvsp[-2].node)->isArray == true){
				TAC* tac = new TAC();
				tac->op = "setarr";
				tac->array_name = (yyvsp[-2].node)->arrayName;
				if((yyvsp[-2].node)->isLit){
					tac->isInt1 = true;
					tac->l1 = (yyvsp[-2].node)->arrayIndex;
				}
				else{
					tac->opd1 = ST->GetVar((yyvsp[-2].node)->arrayIndex);
				}
				tac->opd2 = sym1;
				(yyval.node)->code.pb(tac);
			}			
   }
#line 5021 "parser.tab.c"
    break;

  case 214: /* Assignment: TypeName AssignmentOperator Expression  */
#line 1966 "parser.y"
                                                            { 
    				// assignment_operator is a string
			(yyval.node) = (yyvsp[-2].node);	
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			// TAC* tac = new TAC();
			
			Symbol* sym1 = ST->GetVar((yyvsp[-2].node)->place);
			if(sym1->type == "None"){
				cerr << "Error: Symbol " <<  (yyvsp[-2].node)->place << " not defined, at line num: "<<line << endl;
				exit(1);
			}
			if((yyvsp[0].node)->isLit==false){		
				Symbol* sym2 = ST->GetVar((yyvsp[0].node)->place);
				if(sym2->type == "None"){
					cerr << "Error: Symbol "<< (yyvsp[0].node)->place << " not defined, at line num: "<<line << endl;
					exit(1);
				}
				if(sym1->baseType != sym2->baseType){
					cerr << "Error: Incompatible types at line num: "<<line << endl;
					exit(1);
				}
				if(sym1->baseType == "ARRAYTYPE" || sym2->baseType == "ARRAYTYPE"){	
					cerr << "Error: Incompatible types at line num: "<<line << endl;
					exit(1);
				}
			}
			gen2OpCode((yyval.node), (yyvsp[-1].str), (yyvsp[-2].node), (yyvsp[0].node), line);
			if((yyvsp[-2].node)->isArray == true){
				TAC* tac = new TAC();
				tac->op = "setarr";
				tac->array_name = (yyvsp[-2].node)->arrayName;
				if((yyvsp[-2].node)->isLit){
					tac->isInt1 = true;
					tac->l1 = (yyvsp[-2].node)->arrayIndex;
				}
				else{
					tac->opd1 = ST->GetVar((yyvsp[-2].node)->arrayIndex);
				}
				tac->opd2 = sym1;
				(yyval.node)->code.pb(tac);
			}			
   }
#line 5068 "parser.tab.c"
    break;

  case 215: /* LeftHandSide: FieldAccess  */
#line 2011 "parser.y"
                                                                                        { (yyval.node)=(yyvsp[0].node); }
#line 5074 "parser.tab.c"
    break;

  case 216: /* LeftHandSide: ArrayAccess  */
#line 2012 "parser.y"
                                                                                        { (yyval.node)=(yyvsp[0].node); }
#line 5080 "parser.tab.c"
    break;

  case 217: /* AssignmentOperator: '='  */
#line 2016 "parser.y"
                                                                                        { (yyval.str) = (yyvsp[0].str);}
#line 5086 "parser.tab.c"
    break;

  case 218: /* AssignmentOperator: MUL_ASSIGN  */
#line 2017 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 5092 "parser.tab.c"
    break;

  case 219: /* AssignmentOperator: DIV_ASSIGN  */
#line 2018 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 5098 "parser.tab.c"
    break;

  case 220: /* AssignmentOperator: MOD_ASSIGN  */
#line 2019 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 5104 "parser.tab.c"
    break;

  case 221: /* AssignmentOperator: ADD_ASSIGN  */
#line 2020 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 5110 "parser.tab.c"
    break;

  case 222: /* AssignmentOperator: SUB_ASSIGN  */
#line 2021 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 5116 "parser.tab.c"
    break;

  case 223: /* AssignmentOperator: LEFT_ASSIGN  */
#line 2022 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 5122 "parser.tab.c"
    break;

  case 224: /* AssignmentOperator: RIGHT_ASSIGN  */
#line 2023 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 5128 "parser.tab.c"
    break;

  case 225: /* AssignmentOperator: UNSIGNED_RIGHT_ASSIGN  */
#line 2024 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 5134 "parser.tab.c"
    break;

  case 226: /* AssignmentOperator: AND_ASSIGN  */
#line 2025 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 5140 "parser.tab.c"
    break;

  case 227: /* AssignmentOperator: XOR_ASSIGN  */
#line 2026 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 5146 "parser.tab.c"
    break;

  case 228: /* AssignmentOperator: OR_ASSIGN  */
#line 2027 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 5152 "parser.tab.c"
    break;

  case 229: /* ConditionalExpression: ConditionalOrExpression  */
#line 2031 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 5158 "parser.tab.c"
    break;

  case 230: /* ConditionalExpression: ConditionalOrExpression '?' Expression ':' ConditionalExpression  */
#line 2032 "parser.y"
                                                                                        {
    	genNode* newNode = new genNode();
		(yyval.node) = newNode;
		getCECode((yyval.node), (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 5168 "parser.tab.c"
    break;

  case 231: /* ConditionalOrExpression: ConditionalAndExpression  */
#line 2040 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 5174 "parser.tab.c"
    break;

  case 232: /* ConditionalOrExpression: ConditionalOrExpression OR_OP ConditionalAndExpression  */
#line 2041 "parser.y"
                                                                                        {
    	genNode* n= new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "||", (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 5186 "parser.tab.c"
    break;

  case 233: /* ConditionalAndExpression: InclusiveOrExpression  */
#line 2051 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 5192 "parser.tab.c"
    break;

  case 234: /* ConditionalAndExpression: ConditionalAndExpression AND_OP InclusiveOrExpression  */
#line 2052 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "&&", (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 5204 "parser.tab.c"
    break;

  case 235: /* InclusiveOrExpression: ExclusiveOrExpression  */
#line 2062 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 5210 "parser.tab.c"
    break;

  case 236: /* InclusiveOrExpression: InclusiveOrExpression '|' ExclusiveOrExpression  */
#line 2063 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "|", (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 5222 "parser.tab.c"
    break;

  case 237: /* ExclusiveOrExpression: AndExpression  */
#line 2073 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 5228 "parser.tab.c"
    break;

  case 238: /* ExclusiveOrExpression: ExclusiveOrExpression '^' AndExpression  */
#line 2074 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "^", (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 5240 "parser.tab.c"
    break;

  case 239: /* AndExpression: EqualityExpression  */
#line 2084 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 5246 "parser.tab.c"
    break;

  case 240: /* AndExpression: AndExpression '&' EqualityExpression  */
#line 2085 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "&", (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 5258 "parser.tab.c"
    break;

  case 241: /* EqualityExpression: RelationalExpression  */
#line 2095 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 5264 "parser.tab.c"
    break;

  case 242: /* EqualityExpression: EqualityExpression EQ_OP RelationalExpression  */
#line 2096 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "==", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 5276 "parser.tab.c"
    break;

  case 243: /* EqualityExpression: EqualityExpression NE_OP RelationalExpression  */
#line 2103 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "!=", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 5288 "parser.tab.c"
    break;

  case 244: /* RelationalExpression: ShiftExpression  */
#line 2113 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 5294 "parser.tab.c"
    break;

  case 245: /* RelationalExpression: RelationalExpression '<' ShiftExpression  */
#line 2114 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "<", (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 5306 "parser.tab.c"
    break;

  case 246: /* RelationalExpression: RelationalExpression '>' ShiftExpression  */
#line 2121 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), ">", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 5318 "parser.tab.c"
    break;

  case 247: /* RelationalExpression: RelationalExpression LE_OP ShiftExpression  */
#line 2128 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "<=", (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 5330 "parser.tab.c"
    break;

  case 248: /* RelationalExpression: RelationalExpression GE_OP ShiftExpression  */
#line 2135 "parser.y"
                                                                                        {
     	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), ">=", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 5342 "parser.tab.c"
    break;

  case 249: /* ShiftExpression: AdditiveExpression  */
#line 2145 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 5348 "parser.tab.c"
    break;

  case 250: /* ShiftExpression: ShiftExpression LEFT_OP AdditiveExpression  */
#line 2146 "parser.y"
                                                                                        {
        genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "<<", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 5360 "parser.tab.c"
    break;

  case 251: /* ShiftExpression: ShiftExpression RIGHT_OP AdditiveExpression  */
#line 2153 "parser.y"
                                                                                        {
        genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), ">>", (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 5372 "parser.tab.c"
    break;

  case 252: /* AdditiveExpression: MultiplicativeExpression  */
#line 2163 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 5378 "parser.tab.c"
    break;

  case 253: /* AdditiveExpression: AdditiveExpression '+' MultiplicativeExpression  */
#line 2164 "parser.y"
                                                                                        {
        genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "+", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 5390 "parser.tab.c"
    break;

  case 254: /* AdditiveExpression: AdditiveExpression '-' MultiplicativeExpression  */
#line 2171 "parser.y"
                                                                                        {
        genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "-", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 5402 "parser.tab.c"
    break;

  case 255: /* MultiplicativeExpression: UnaryExpression  */
#line 2181 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 5408 "parser.tab.c"
    break;

  case 256: /* MultiplicativeExpression: MultiplicativeExpression '*' UnaryExpression  */
#line 2182 "parser.y"
                                                                                        {
        genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "*", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 5420 "parser.tab.c"
    break;

  case 257: /* MultiplicativeExpression: MultiplicativeExpression '/' UnaryExpression  */
#line 2189 "parser.y"
                                                                                        {
        genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "/", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 5432 "parser.tab.c"
    break;

  case 258: /* MultiplicativeExpression: MultiplicativeExpression '%' UnaryExpression  */
#line 2196 "parser.y"
                                                                                        {
        genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "%", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 5444 "parser.tab.c"
    break;

  case 259: /* UnaryExpression: PreIncrementExpression  */
#line 2206 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 5450 "parser.tab.c"
    break;

  case 260: /* UnaryExpression: PreDecrementExpression  */
#line 2207 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 5456 "parser.tab.c"
    break;

  case 261: /* UnaryExpression: '+' UnaryExpression  */
#line 2208 "parser.y"
                                                                                        {
       (yyval.node) = (yyvsp[0].node);
   }
#line 5464 "parser.tab.c"
    break;

  case 262: /* UnaryExpression: '-' UnaryExpression  */
#line 2211 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		genNode* zeroNode = new genNode();
		zeroNode->isLit = true; zeroNode->place = "0"; zeroNode->type = "int";
		gen2OpCode((yyval.node), "-", zeroNode, (yyvsp[0].node), line);
   }
#line 5476 "parser.tab.c"
    break;

  case 263: /* UnaryExpression: UnaryExpressionNotPlusMinus  */
#line 2218 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 5482 "parser.tab.c"
    break;

  case 264: /* PreIncrementExpression: INC_OP UnaryExpression  */
#line 2222 "parser.y"
                                                                                        {
    	(yyval.node) = (yyvsp[0].node);
		getPreUnaryOpCode("++", (yyval.node), (yyvsp[0].node), line);
   }
#line 5491 "parser.tab.c"
    break;

  case 265: /* PreDecrementExpression: DEC_OP UnaryExpression  */
#line 2229 "parser.y"
                                                                                        {
    	(yyval.node) = (yyvsp[0].node);
		getPreUnaryOpCode("--", (yyval.node), (yyvsp[0].node), line);
   }
#line 5500 "parser.tab.c"
    break;

  case 266: /* UnaryExpressionNotPlusMinus: PostfixExpression  */
#line 2236 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 5506 "parser.tab.c"
    break;

  case 267: /* UnaryExpressionNotPlusMinus: '~' UnaryExpression  */
#line 2237 "parser.y"
                                                                                        {
   }
#line 5513 "parser.tab.c"
    break;

  case 268: /* UnaryExpressionNotPlusMinus: '!' UnaryExpression  */
#line 2239 "parser.y"
                                                                                        {

   }
#line 5521 "parser.tab.c"
    break;

  case 269: /* UnaryExpressionNotPlusMinus: CastExpression  */
#line 2242 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 5527 "parser.tab.c"
    break;

  case 270: /* PostfixExpression: Primary  */
#line 2246 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 5533 "parser.tab.c"
    break;

  case 271: /* PostfixExpression: TypeName  */
#line 2247 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 5539 "parser.tab.c"
    break;

  case 272: /* PostfixExpression: PostIncrementExpression  */
#line 2248 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 5545 "parser.tab.c"
    break;

  case 273: /* PostfixExpression: PostDecrementExpression  */
#line 2249 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 5551 "parser.tab.c"
    break;

  case 274: /* PostIncrementExpression: PostfixExpression INC_OP  */
#line 2253 "parser.y"
                                                                                        {
        (yyval.node) = (yyvsp[-1].node);
		getPostUnaryOpCode("++", (yyval.node), (yyvsp[-1].node), line);
   }
#line 5560 "parser.tab.c"
    break;

  case 275: /* PostDecrementExpression: PostfixExpression DEC_OP  */
#line 2260 "parser.y"
                                                                                        {
        (yyval.node) = (yyvsp[-1].node);
		getPostUnaryOpCode("--", (yyval.node), (yyvsp[-1].node), line);
   }
#line 5569 "parser.tab.c"
    break;

  case 276: /* CastExpression: '(' PrimitiveType ')' UnaryExpression  */
#line 2267 "parser.y"
                                                                                        {
         
   }
#line 5577 "parser.tab.c"
    break;


#line 5581 "parser.tab.c"

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 2273 "parser.y"


int main (void) {
    yyparse();

    // generateDotFile();
    ST->PrintTable(ST->baseEnv);
	printTAC(root);
    

    return 1;
}

void yyerror (const char *str) {cerr<<"Line "<<line<<": "<<str<<endl;}
