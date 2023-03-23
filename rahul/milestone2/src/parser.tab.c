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
  YYSYMBOL_CONTINUE = 3,                   /* CONTINUE  */
  YYSYMBOL_FOR = 4,                        /* FOR  */
  YYSYMBOL_CHAR = 5,                       /* CHAR  */
  YYSYMBOL_FINAL = 6,                      /* FINAL  */
  YYSYMBOL_STATIC = 7,                     /* STATIC  */
  YYSYMBOL_VOID = 8,                       /* VOID  */
  YYSYMBOL_CLASS = 9,                      /* CLASS  */
  YYSYMBOL_LONG = 10,                      /* LONG  */
  YYSYMBOL_CONST = 11,                     /* CONST  */
  YYSYMBOL_FLOAT = 12,                     /* FLOAT  */
  YYSYMBOL_WHILE = 13,                     /* WHILE  */
  YYSYMBOL_FLOATINGPOINTLITERAL = 14,      /* FLOATINGPOINTLITERAL  */
  YYSYMBOL_TRUELITERAL = 15,               /* TRUELITERAL  */
  YYSYMBOL_FALSELITERAL = 16,              /* FALSELITERAL  */
  YYSYMBOL_NULLLITERAL = 17,               /* NULLLITERAL  */
  YYSYMBOL_CHARACTERLITERAL = 18,          /* CHARACTERLITERAL  */
  YYSYMBOL_IDENTIFIER = 19,                /* IDENTIFIER  */
  YYSYMBOL_STRINGLITERAL = 20,             /* STRINGLITERAL  */
  YYSYMBOL_BOOLEAN = 21,                   /* BOOLEAN  */
  YYSYMBOL_PRIVATE = 22,                   /* PRIVATE  */
  YYSYMBOL_IF = 23,                        /* IF  */
  YYSYMBOL_PACKAGE = 24,                   /* PACKAGE  */
  YYSYMBOL_THIS = 25,                      /* THIS  */
  YYSYMBOL_BREAK = 26,                     /* BREAK  */
  YYSYMBOL_DOUBLE = 27,                    /* DOUBLE  */
  YYSYMBOL_BYTE = 28,                      /* BYTE  */
  YYSYMBOL_ELSE = 29,                      /* ELSE  */
  YYSYMBOL_PUBLIC = 30,                    /* PUBLIC  */
  YYSYMBOL_RETURN = 31,                    /* RETURN  */
  YYSYMBOL_INT = 32,                       /* INT  */
  YYSYMBOL_SHORT = 33,                     /* SHORT  */
  YYSYMBOL_ABSTRACT = 34,                  /* ABSTRACT  */
  YYSYMBOL_INTEGERLITERAL = 35,            /* INTEGERLITERAL  */
  YYSYMBOL_36_ = 36,                       /* '='  */
  YYSYMBOL_ADD_ASSIGN = 37,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 38,                /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 39,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 40,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 41,                /* MOD_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 42,                /* AND_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 43,                 /* OR_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 44,                /* XOR_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 45,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 46,              /* RIGHT_ASSIGN  */
  YYSYMBOL_UNSIGNED_RIGHT_ASSIGN = 47,     /* UNSIGNED_RIGHT_ASSIGN  */
  YYSYMBOL_48_ = 48,                       /* '?'  */
  YYSYMBOL_49_ = 49,                       /* ':'  */
  YYSYMBOL_OR_OP = 50,                     /* OR_OP  */
  YYSYMBOL_AND_OP = 51,                    /* AND_OP  */
  YYSYMBOL_52_ = 52,                       /* '|'  */
  YYSYMBOL_53_ = 53,                       /* '^'  */
  YYSYMBOL_54_ = 54,                       /* '&'  */
  YYSYMBOL_NE_OP = 55,                     /* NE_OP  */
  YYSYMBOL_EQ_OP = 56,                     /* EQ_OP  */
  YYSYMBOL_LEFT_OP = 57,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 58,                  /* RIGHT_OP  */
  YYSYMBOL_UNSIGNED_RIGHT_OP = 59,         /* UNSIGNED_RIGHT_OP  */
  YYSYMBOL_60_ = 60,                       /* '+'  */
  YYSYMBOL_61_ = 61,                       /* '-'  */
  YYSYMBOL_62_ = 62,                       /* '*'  */
  YYSYMBOL_63_ = 63,                       /* '/'  */
  YYSYMBOL_64_ = 64,                       /* '%'  */
  YYSYMBOL_65_ = 65,                       /* '<'  */
  YYSYMBOL_66_ = 66,                       /* '>'  */
  YYSYMBOL_GE_OP = 67,                     /* GE_OP  */
  YYSYMBOL_LE_OP = 68,                     /* LE_OP  */
  YYSYMBOL_INSTANCEOF = 69,                /* INSTANCEOF  */
  YYSYMBOL_NEW = 70,                       /* NEW  */
  YYSYMBOL_INC_OP = 71,                    /* INC_OP  */
  YYSYMBOL_DEC_OP = 72,                    /* DEC_OP  */
  YYSYMBOL_73_ = 73,                       /* '!'  */
  YYSYMBOL_74_ = 74,                       /* '~'  */
  YYSYMBOL_75_ = 75,                       /* '('  */
  YYSYMBOL_76_ = 76,                       /* ')'  */
  YYSYMBOL_77_ = 77,                       /* '{'  */
  YYSYMBOL_78_ = 78,                       /* '}'  */
  YYSYMBOL_79_ = 79,                       /* '['  */
  YYSYMBOL_80_ = 80,                       /* ']'  */
  YYSYMBOL_81_ = 81,                       /* '.'  */
  YYSYMBOL_82_ = 82,                       /* ','  */
  YYSYMBOL_83_ = 83,                       /* ';'  */
  YYSYMBOL_PROPORTION = 84,                /* PROPORTION  */
  YYSYMBOL_PTR_OP = 85,                    /* PTR_OP  */
  YYSYMBOL_YYACCEPT = 86,                  /* $accept  */
  YYSYMBOL_Start = 87,                     /* Start  */
  YYSYMBOL_CompilationUnit = 88,           /* CompilationUnit  */
  YYSYMBOL_PackageDeclaration = 89,        /* PackageDeclaration  */
  YYSYMBOL_MULTI_TypeDeclaration = 90,     /* MULTI_TypeDeclaration  */
  YYSYMBOL_TypeDeclaration = 91,           /* TypeDeclaration  */
  YYSYMBOL_TypeName = 92,                  /* TypeName  */
  YYSYMBOL_Identifier = 93,                /* Identifier  */
  YYSYMBOL_Type = 94,                      /* Type  */
  YYSYMBOL_PrimitiveType = 95,             /* PrimitiveType  */
  YYSYMBOL_NumericType = 96,               /* NumericType  */
  YYSYMBOL_IntegralType = 97,              /* IntegralType  */
  YYSYMBOL_FloatingPointType = 98,         /* FloatingPointType  */
  YYSYMBOL_ReferenceType = 99,             /* ReferenceType  */
  YYSYMBOL_ArrayType = 100,                /* ArrayType  */
  YYSYMBOL_Dims = 101,                     /* Dims  */
  YYSYMBOL_ArrayInitialize = 102,          /* ArrayInitialize  */
  YYSYMBOL_VariableInitializerList = 103,  /* VariableInitializerList  */
  YYSYMBOL_ClassDeclaration = 104,         /* ClassDeclaration  */
  YYSYMBOL_NormalClassDeclaration = 105,   /* NormalClassDeclaration  */
  YYSYMBOL_ClassBody = 106,                /* ClassBody  */
  YYSYMBOL_MULTI_ClassBodyDeclaration = 107, /* MULTI_ClassBodyDeclaration  */
  YYSYMBOL_ClassBodyDeclaration = 108,     /* ClassBodyDeclaration  */
  YYSYMBOL_ClassMemberDeclaration = 109,   /* ClassMemberDeclaration  */
  YYSYMBOL_FieldDeclaration = 110,         /* FieldDeclaration  */
  YYSYMBOL_MULTI_ClassModifier = 111,      /* MULTI_ClassModifier  */
  YYSYMBOL_ClassModifier = 112,            /* ClassModifier  */
  YYSYMBOL_VariableDeclaratorList = 113,   /* VariableDeclaratorList  */
  YYSYMBOL_VariableDeclarator = 114,       /* VariableDeclarator  */
  YYSYMBOL_VariableDeclaratorId = 115,     /* VariableDeclaratorId  */
  YYSYMBOL_VariableInitializer = 116,      /* VariableInitializer  */
  YYSYMBOL_MethodDeclaration = 117,        /* MethodDeclaration  */
  YYSYMBOL_MethodHeader = 118,             /* MethodHeader  */
  YYSYMBOL_MemberName = 119,               /* MemberName  */
  YYSYMBOL_FormalParameterList = 120,      /* FormalParameterList  */
  YYSYMBOL_FormalParameter = 121,          /* FormalParameter  */
  YYSYMBOL_ReceiverParameter = 122,        /* ReceiverParameter  */
  YYSYMBOL_MethodBody = 123,               /* MethodBody  */
  YYSYMBOL_StaticInitializer = 124,        /* StaticInitializer  */
  YYSYMBOL_ConstructorDeclaration = 125,   /* ConstructorDeclaration  */
  YYSYMBOL_ConstructorDeclarator = 126,    /* ConstructorDeclarator  */
  YYSYMBOL_ConstructorBody = 127,          /* ConstructorBody  */
  YYSYMBOL_ExplicitConstructorInvocation = 128, /* ExplicitConstructorInvocation  */
  YYSYMBOL_SINGLE_ArgumentList = 129,      /* SINGLE_ArgumentList  */
  YYSYMBOL_Block = 130,                    /* Block  */
  YYSYMBOL_BlockStatements = 131,          /* BlockStatements  */
  YYSYMBOL_BlockStatement = 132,           /* BlockStatement  */
  YYSYMBOL_LocalVariableDeclarationStatement = 133, /* LocalVariableDeclarationStatement  */
  YYSYMBOL_LocalVariableDeclaration = 134, /* LocalVariableDeclaration  */
  YYSYMBOL_Statement = 135,                /* Statement  */
  YYSYMBOL_StatementNoShortIf = 136,       /* StatementNoShortIf  */
  YYSYMBOL_StatementWithoutTrailingSubstatement = 137, /* StatementWithoutTrailingSubstatement  */
  YYSYMBOL_EmptyStatement = 138,           /* EmptyStatement  */
  YYSYMBOL_LabeledStatement = 139,         /* LabeledStatement  */
  YYSYMBOL_LabeledStatementNoShortIf = 140, /* LabeledStatementNoShortIf  */
  YYSYMBOL_ExpressionStatement = 141,      /* ExpressionStatement  */
  YYSYMBOL_StatementExpression = 142,      /* StatementExpression  */
  YYSYMBOL_IfThenStatement = 143,          /* IfThenStatement  */
  YYSYMBOL_IfThenElseStatement = 144,      /* IfThenElseStatement  */
  YYSYMBOL_IfThenElseStatementNoShortIf = 145, /* IfThenElseStatementNoShortIf  */
  YYSYMBOL_WhileStatement = 146,           /* WhileStatement  */
  YYSYMBOL_WhileStatementNoShortIf = 147,  /* WhileStatementNoShortIf  */
  YYSYMBOL_ForStatement = 148,             /* ForStatement  */
  YYSYMBOL_ForStatementNoShortIf = 149,    /* ForStatementNoShortIf  */
  YYSYMBOL_BasicForStatement = 150,        /* BasicForStatement  */
  YYSYMBOL_SingleForInit = 151,            /* SingleForInit  */
  YYSYMBOL_SingleExpression = 152,         /* SingleExpression  */
  YYSYMBOL_SingleForUpdate = 153,          /* SingleForUpdate  */
  YYSYMBOL_BasicForStatementNoShortIf = 154, /* BasicForStatementNoShortIf  */
  YYSYMBOL_ForInit = 155,                  /* ForInit  */
  YYSYMBOL_ForUpdate = 156,                /* ForUpdate  */
  YYSYMBOL_StatementExpressionList = 157,  /* StatementExpressionList  */
  YYSYMBOL_EnhancedForStatement = 158,     /* EnhancedForStatement  */
  YYSYMBOL_EnhancedForStatementNoShortIf = 159, /* EnhancedForStatementNoShortIf  */
  YYSYMBOL_BreakStatement = 160,           /* BreakStatement  */
  YYSYMBOL_ContinueStatement = 161,        /* ContinueStatement  */
  YYSYMBOL_ReturnStatement = 162,          /* ReturnStatement  */
  YYSYMBOL_Primary = 163,                  /* Primary  */
  YYSYMBOL_PrimaryNoNewArray = 164,        /* PrimaryNoNewArray  */
  YYSYMBOL_Literal = 165,                  /* Literal  */
  YYSYMBOL_BooleanLiteral = 166,           /* BooleanLiteral  */
  YYSYMBOL_IntegerLiteral = 167,           /* IntegerLiteral  */
  YYSYMBOL_CharacterLiteral = 168,         /* CharacterLiteral  */
  YYSYMBOL_StringLiteral = 169,            /* StringLiteral  */
  YYSYMBOL_NullLiteral = 170,              /* NullLiteral  */
  YYSYMBOL_ClassLiteral = 171,             /* ClassLiteral  */
  YYSYMBOL_ClassInstanceCreationExpression = 172, /* ClassInstanceCreationExpression  */
  YYSYMBOL_UnqualifiedClassInstanceCreationExpression = 173, /* UnqualifiedClassInstanceCreationExpression  */
  YYSYMBOL_FieldAccess = 174,              /* FieldAccess  */
  YYSYMBOL_ArrayAccess = 175,              /* ArrayAccess  */
  YYSYMBOL_MethodInvocation = 176,         /* MethodInvocation  */
  YYSYMBOL_ArgumentList = 177,             /* ArgumentList  */
  YYSYMBOL_MethodReference = 178,          /* MethodReference  */
  YYSYMBOL_ArrayCreationExpression = 179,  /* ArrayCreationExpression  */
  YYSYMBOL_DimExprs = 180,                 /* DimExprs  */
  YYSYMBOL_DimExpr = 181,                  /* DimExpr  */
  YYSYMBOL_Expression = 182,               /* Expression  */
  YYSYMBOL_AssignmentExpression = 183,     /* AssignmentExpression  */
  YYSYMBOL_Assignment = 184,               /* Assignment  */
  YYSYMBOL_LeftHandSide = 185,             /* LeftHandSide  */
  YYSYMBOL_AssignmentOperator = 186,       /* AssignmentOperator  */
  YYSYMBOL_ConditionalExpression = 187,    /* ConditionalExpression  */
  YYSYMBOL_ConditionalOrExpression = 188,  /* ConditionalOrExpression  */
  YYSYMBOL_ConditionalAndExpression = 189, /* ConditionalAndExpression  */
  YYSYMBOL_InclusiveOrExpression = 190,    /* InclusiveOrExpression  */
  YYSYMBOL_ExclusiveOrExpression = 191,    /* ExclusiveOrExpression  */
  YYSYMBOL_AndExpression = 192,            /* AndExpression  */
  YYSYMBOL_EqualityExpression = 193,       /* EqualityExpression  */
  YYSYMBOL_RelationalExpression = 194,     /* RelationalExpression  */
  YYSYMBOL_ShiftExpression = 195,          /* ShiftExpression  */
  YYSYMBOL_AdditiveExpression = 196,       /* AdditiveExpression  */
  YYSYMBOL_MultiplicativeExpression = 197, /* MultiplicativeExpression  */
  YYSYMBOL_UnaryExpression = 198,          /* UnaryExpression  */
  YYSYMBOL_PreIncrementExpression = 199,   /* PreIncrementExpression  */
  YYSYMBOL_PreDecrementExpression = 200,   /* PreDecrementExpression  */
  YYSYMBOL_UnaryExpressionNotPlusMinus = 201, /* UnaryExpressionNotPlusMinus  */
  YYSYMBOL_PostfixExpression = 202,        /* PostfixExpression  */
  YYSYMBOL_PostIncrementExpression = 203,  /* PostIncrementExpression  */
  YYSYMBOL_PostDecrementExpression = 204,  /* PostDecrementExpression  */
  YYSYMBOL_CastExpression = 205            /* CastExpression  */
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
#define YYLAST   2222

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  120
/* YYNRULES -- Number of rules.  */
#define YYNRULES  296
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  489

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   316


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
       2,     2,     2,    73,     2,     2,     2,    64,    54,     2,
      75,    76,    62,    60,    82,    61,    81,    63,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    49,    83,
      65,    36,    66,    48,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    79,     2,    80,    53,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    77,    52,    78,    74,     2,     2,     2,
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
      35,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    50,    51,    55,    56,    57,    58,    59,    67,
      68,    69,    70,    71,    72,    84,    85
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    73,    73,    78,    81,    82,    83,    86,    89,    90,
      93,    94,    98,   101,   104,   124,   125,   129,   130,   141,
     142,   146,   154,   162,   170,   178,   189,   196,   207,   208,
     211,   218,   227,   230,   236,   240,   244,   246,   255,   279,
     307,   311,   320,   331,   336,   344,   345,   351,   352,   353,
     357,   358,   359,   360,   368,   372,   378,   379,   383,   391,
     399,   407,   415,   426,   441,   449,   495,   498,   501,   507,
     508,   513,   522,   534,   541,   546,   552,   557,   562,   566,
     571,   578,   586,   587,   591,   595,   610,   628,   631,   637,
     638,   641,   647,   656,   668,   675,   684,   685,   686,   687,
     691,   695,   696,   700,   701,   705,   706,   713,   714,   715,
     719,   725,   742,   743,   744,   745,   746,   747,   751,   752,
     753,   754,   755,   759,   760,   761,   762,   763,   764,   768,
     772,   779,   786,   790,   791,   792,   793,   794,   795,   796,
     800,   804,   808,   812,   816,   820,   821,   825,   826,   830,
     834,   835,   839,   840,   844,   845,   849,   853,   854,   858,
     862,   863,   867,   871,   875,   876,   880,   881,   885,   886,
     890,   891,   895,   896,   897,   898,   899,   901,   902,   903,
     904,   905,   909,   910,   911,   912,   913,   917,   927,   940,
     952,   965,   978,   993,   995,   997,   999,  1001,  1007,  1008,
    1009,  1013,  1015,  1017,  1020,  1026,  1031,  1032,  1036,  1038,
    1041,  1044,  1047,  1049,  1054,  1055,  1059,  1061,  1063,  1065,
    1067,  1072,  1074,  1076,  1078,  1080,  1082,  1087,  1088,  1092,
    1096,  1100,  1101,  1105,  1106,  1110,  1111,  1115,  1116,  1117,
    1118,  1119,  1120,  1121,  1122,  1123,  1124,  1125,  1126,  1130,
    1131,  1139,  1140,  1150,  1151,  1161,  1162,  1172,  1173,  1183,
    1184,  1194,  1195,  1202,  1212,  1213,  1220,  1227,  1234,  1245,
    1246,  1253,  1264,  1265,  1272,  1282,  1283,  1290,  1297,  1307,
    1308,  1309,  1312,  1319,  1323,  1330,  1337,  1338,  1340,  1343,
    1347,  1348,  1349,  1350,  1354,  1361,  1368
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
  "\"end of file\"", "error", "\"invalid token\"", "CONTINUE", "FOR",
  "CHAR", "FINAL", "STATIC", "VOID", "CLASS", "LONG", "CONST", "FLOAT",
  "WHILE", "FLOATINGPOINTLITERAL", "TRUELITERAL", "FALSELITERAL",
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
  "NormalClassDeclaration", "ClassBody", "MULTI_ClassBodyDeclaration",
  "ClassBodyDeclaration", "ClassMemberDeclaration", "FieldDeclaration",
  "MULTI_ClassModifier", "ClassModifier", "VariableDeclaratorList",
  "VariableDeclarator", "VariableDeclaratorId", "VariableInitializer",
  "MethodDeclaration", "MethodHeader", "MemberName", "FormalParameterList",
  "FormalParameter", "ReceiverParameter", "MethodBody",
  "StaticInitializer", "ConstructorDeclaration", "ConstructorDeclarator",
  "ConstructorBody", "ExplicitConstructorInvocation",
  "SINGLE_ArgumentList", "Block", "BlockStatements", "BlockStatement",
  "LocalVariableDeclarationStatement", "LocalVariableDeclaration",
  "Statement", "StatementNoShortIf",
  "StatementWithoutTrailingSubstatement", "EmptyStatement",
  "LabeledStatement", "LabeledStatementNoShortIf", "ExpressionStatement",
  "StatementExpression", "IfThenStatement", "IfThenElseStatement",
  "IfThenElseStatementNoShortIf", "WhileStatement",
  "WhileStatementNoShortIf", "ForStatement", "ForStatementNoShortIf",
  "BasicForStatement", "SingleForInit", "SingleExpression",
  "SingleForUpdate", "BasicForStatementNoShortIf", "ForInit", "ForUpdate",
  "StatementExpressionList", "EnhancedForStatement",
  "EnhancedForStatementNoShortIf", "BreakStatement", "ContinueStatement",
  "ReturnStatement", "Primary", "PrimaryNoNewArray", "Literal",
  "BooleanLiteral", "IntegerLiteral", "CharacterLiteral", "StringLiteral",
  "NullLiteral", "ClassLiteral", "ClassInstanceCreationExpression",
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

#define YYPACT_NINF (-430)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-294)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      52,  -430,  -430,     6,  -430,     6,  -430,  -430,  -430,    30,
    -430,   133,   133,  -430,  -430,  -430,   339,  -430,  -430,   -28,
      98,  -430,  -430,   133,  -430,     6,  -430,   705,  -430,     6,
    -430,   -28,  -430,     8,     6,  -430,  -430,  -430,  -430,  -430,
    -430,  -430,  -430,  -430,   172,   -21,     6,    18,  -430,  -430,
    -430,  -430,  -430,  -430,  1583,  -430,  -430,  -430,   976,  -430,
      12,  -430,  -430,    72,  -430,  -430,  1074,  -430,  -430,    49,
      -7,    85,   376,    46,   174,  -430,   150,   146,    85,  -430,
    -430,     6,    12,    72,  -430,  -430,  -430,  1160,  -430,   -12,
     154,   113,   157,  -430,  -430,  -430,  -430,   204,  -430,   218,
    -430,    -8,  1526,  -430,   995,  2095,  2095,  2095,  -430,  -430,
    2138,   192,     6,   188,   200,  -430,  -430,  1193,  -430,  -430,
     219,  -430,  -430,  -430,  -430,  -430,   258,  -430,  -430,  -430,
    -430,  -430,  -430,  -430,  -430,  -430,    88,   265,  -430,  -430,
    -430,  -430,  -430,  -430,  -430,    47,  -430,   790,   996,    69,
    -430,  -430,  -430,  1091,  -430,  -430,   224,   228,   234,   426,
    -430,   276,   995,  -430,   107,   115,  -430,  -430,    85,     6,
    -430,  1786,   904,   225,  -430,  -430,   284,  -430,  1274,  1307,
     277,  -430,  2126,   353,  2095,  1817,  2095,   280,  -430,  2095,
    2095,  2095,  2095,  2095,  -430,  1075,   188,   200,  -430,  -430,
     291,  -430,  -430,  -430,   220,   321,   323,   324,   325,   259,
     194,   279,   289,   202,  -430,  -430,  -430,  -430,   224,  -430,
    -430,  -430,   103,   299,    81,  -430,  -430,  -430,  -430,   304,
    -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,
    -430,  -430,  1684,    71,    -6,   195,  2095,  1421,    18,   301,
     375,   206,    -4,  -430,  -430,  -430,  -430,     0,   368,  2095,
    2095,  -430,  -430,    18,   122,  -430,     6,  -430,   209,  -430,
    -430,   768,  -430,  1613,  -430,  -430,  -430,    18,   131,  -430,
    1889,  -430,  -430,  1388,  -430,  -430,     6,  -430,  -430,   308,
    -430,   310,  -430,   320,  -430,   138,  -430,   329,  -430,  -430,
    -430,  -430,  -430,   -39,  -430,  2095,  2095,  2095,  2095,  2095,
    2095,  2095,  2095,  2095,  2095,  2095,  2095,  2095,  2095,  2095,
    2095,  2095,  2095,  2095,  1920,  1684,   212,   299,  -430,   212,
     299,  -430,   326,  -430,   336,  -430,     6,  -430,  -430,  -430,
     391,  -430,  -430,  -430,   392,  -430,  -430,   337,  -430,  -430,
     340,  -430,    85,    18,  -430,   401,     6,  -430,  -430,   350,
      66,  -430,    85,    18,   334,   143,  -430,    32,  2095,  2126,
    1421,  -430,  2095,  1497,  2095,   380,   321,   323,   324,   325,
     259,   194,   194,   279,   279,   279,   279,   289,   289,   202,
     202,  -430,  -430,  -430,   -28,   148,   354,  -430,    85,  -430,
    -430,    85,  -430,  1992,   162,  -430,  -430,  2023,  -430,    85,
    -430,  -430,  -430,  1715,    85,  -430,   347,  2095,   352,  -430,
    -430,  -430,  -430,   362,   364,   365,   393,  -430,   412,   417,
    -430,  -430,  -430,  -430,  -430,  -430,  -430,  2095,  -430,   -28,
    -430,  -430,   166,  -430,   173,  -430,  -430,  -430,   379,  2126,
    2126,  2095,  2095,  1497,  1421,  -430,  -430,  -430,  -430,  1421,
     381,  -430,   310,     6,   385,   399,   400,  -430,  -430,  -430,
    1421,    57,  2095,  1497,  1497,  -430,  2095,   394,  -430,   452,
     409,  2126,  1497,  1497,   410,  -430,  -430,  1497,  -430
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       6,    61,    60,     0,    59,     0,    58,    62,    11,     0,
       2,     5,     4,     8,    10,    40,     0,    56,    14,     0,
       0,    12,     1,     3,     9,     0,    57,     0,    42,     0,
       7,     0,    25,    60,     0,    24,    26,    18,    27,    21,
      23,    22,    44,    53,    28,    12,     0,    15,    17,    19,
      20,    16,    29,    52,     0,    45,    47,    50,     0,    51,
       0,    48,    49,     0,    13,    41,     0,    91,    81,     0,
       0,    31,     0,    68,     0,    64,    66,     0,    30,    43,
      46,     0,     0,     0,    90,    72,    89,     0,    93,     0,
       0,     0,     0,   187,   188,   192,   190,    14,   191,     0,
     174,     0,     0,   189,     0,     0,     0,     0,   104,   129,
     291,    12,     0,    15,    29,   108,   123,     0,   105,   107,
       0,   109,   112,   124,   113,   125,     0,   114,   115,   116,
     117,   145,   146,   126,   127,   128,   290,   170,   172,   182,
     183,   184,   185,   186,   173,   177,   198,   178,   179,   180,
     181,   171,   133,     0,   134,   135,     0,   136,   137,     0,
      33,     0,     0,    95,     0,     0,    84,    82,    67,     0,
      55,     0,     0,     0,    71,    92,   174,    99,     0,     0,
       0,   167,   150,     0,     0,     0,     0,     0,   165,     0,
       0,     0,     0,     0,   169,   291,     0,     0,   177,   180,
       0,   230,   232,   231,   249,   251,   253,   255,   257,   259,
     261,   264,   269,   272,   275,   279,   280,   283,   286,   292,
     293,   289,     0,     0,   291,   178,   179,   284,   285,     0,
     237,   241,   242,   238,   239,   240,   246,   248,   247,   243,
     244,   245,     0,     0,     0,    31,     0,     0,    68,   111,
       0,    30,     0,   103,   106,   110,   132,     0,     0,     0,
       0,   294,   295,    78,     0,    32,     0,    87,    68,    86,
      94,     0,    63,     0,    70,    65,    69,    74,     0,    54,
       0,   100,    98,     0,    97,   166,     0,   158,   160,     0,
     151,   157,   197,     0,   209,     0,   215,     0,   164,   281,
     282,   288,   287,     0,   168,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   224,   227,     0,
     222,   176,     0,   194,    14,   175,     0,   199,   216,   219,
       0,   234,   130,   196,     0,   217,   220,   205,   200,   218,
       0,   233,    80,    77,    85,     0,     0,    83,    37,     0,
       0,    38,    76,    73,     0,     0,    96,    66,   152,     0,
       0,   208,     0,     0,     0,     0,   252,   254,   256,   258,
     260,   263,   262,   265,   266,   268,   267,   270,   271,   273,
     274,   276,   277,   278,   204,     0,     0,   226,   223,   228,
     225,   221,   206,     0,     0,   193,   195,     0,   207,    79,
      88,    36,    35,     0,    75,   101,     0,     0,     0,   153,
     161,   143,   214,     0,     0,     0,    12,   140,     0,   112,
     119,   120,   121,   122,   147,   148,   296,     0,   203,   201,
     229,   211,     0,   213,     0,    34,    39,   102,     0,   154,
     150,     0,     0,     0,     0,   250,   202,   210,   212,     0,
       0,   155,   159,     0,     0,     0,     0,   131,   141,   162,
       0,    66,   152,     0,     0,   149,     0,     0,   144,     0,
       0,   154,     0,     0,     0,   142,   163,     0,   156
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -430,  -430,  -430,  -430,   471,    22,    11,    -3,   -26,   -25,
    -430,  -430,  -430,  -430,    33,   649,  -152,  -430,   227,  -430,
     -23,  -430,   433,  -430,  -430,   -15,    -2,     7,   322,  -128,
    -270,  -430,   432,   460,   -65,   226,  -430,   413,  -430,  -430,
     438,   418,  -430,  -430,   -10,   -78,  -112,  -430,  -172,    45,
      -9,  -265,  -430,  -430,  -430,  -430,  -138,  -430,  -430,  -430,
    -430,  -430,  -430,  -430,  -430,    50,    31,    24,  -430,  -430,
    -430,  -429,  -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,
    -430,  -430,  -430,  -430,  -430,  -430,   -60,  -222,   651,   752,
      93,  -276,  -430,  -430,   283,  -131,   579,  -430,   119,  -430,
     355,    70,  -430,   203,   205,   208,   211,   207,    40,  -203,
      37,    38,   -88,   160,   186,  -430,   332,   406,   447,  -430
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     9,    10,    11,    12,    13,   195,    21,   112,   196,
      48,    49,    50,    51,   197,   168,   274,   360,   115,    15,
      28,    54,    55,    56,    57,    16,    17,   249,    75,    76,
     275,    59,    60,    77,   165,   166,   167,    85,    61,    62,
      63,    88,   178,   281,   116,   117,   118,   119,   120,   121,
     428,   122,   123,   124,   430,   125,   126,   127,   128,   431,
     129,   432,   130,   433,   131,   289,   418,   460,   434,   290,
     461,   291,   132,   435,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   198,   146,   147,   148,
     199,   295,   150,   151,   327,   328,   296,   201,   202,   153,
     246,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      19,    46,    47,   361,   365,   254,   145,   180,    65,   179,
     287,   187,    58,   338,    26,   345,    20,   227,   228,   347,
     462,   337,    31,    67,    45,    18,    64,   145,    46,    47,
      22,    68,    81,    47,    24,   348,   269,   374,    44,    58,
      70,   113,   250,    73,   288,    24,   164,    47,   395,    27,
      86,    45,   462,    74,    72,    45,    26,   145,     1,     2,
      52,     3,   113,   111,   339,    44,   346,   254,   171,    44,
     336,   181,    86,   160,     4,   188,     5,   110,    73,   223,
     333,   417,     6,    44,   111,    66,     7,    52,   173,    66,
     334,    52,   113,   171,   264,    84,   335,    70,   110,   114,
     283,   299,   300,   301,   302,    52,   476,   278,   429,   248,
     383,   384,   385,   386,   111,   222,   224,   224,   145,   145,
     114,   -81,   145,  -139,   159,    70,    18,   442,   110,  -139,
    -139,   444,   267,   164,    47,     8,   266,    47,   354,     1,
       2,   336,     3,   446,   412,  -138,   164,    47,   413,    87,
     114,  -138,  -138,   113,   113,     4,   286,   113,   367,   149,
     242,   268,   243,     6,   161,   244,   248,     7,   303,   257,
      44,   254,   258,    44,   397,   111,   111,   400,   324,    29,
     149,    30,   325,    44,    29,   152,   171,   145,   429,   110,
     110,   270,    52,   110,   183,    52,   399,   271,   353,   399,
     224,   224,   224,   224,   271,    52,   152,   363,   429,   429,
     149,   114,   114,   271,   371,   114,     8,   429,   429,   416,
     372,   172,   429,   145,   439,   372,   154,    14,   269,   182,
     372,   420,   184,   391,   392,   393,   152,   324,    14,    14,
      64,   247,   457,    29,   111,   356,    47,   154,   372,   458,
      14,    70,   155,    29,    53,   372,   169,   170,   113,   313,
     314,   315,   316,   248,   321,   322,   323,    70,   305,   250,
     306,   149,   149,   155,   161,   149,   340,   154,   287,   185,
     111,    53,    44,   248,   252,   161,   436,   344,    70,   273,
     355,   161,   342,   186,   110,   261,   262,   152,   152,  -292,
    -292,   152,   255,   155,    52,  -293,  -293,   169,   279,   145,
     145,   288,   288,   145,   311,   312,   114,   224,   224,   224,
     224,   224,   224,   224,   224,   224,   224,   224,   224,   224,
     224,   224,   224,   224,   224,   471,   317,   318,   154,   154,
     149,   256,   154,   288,   259,     1,     2,   404,    25,   319,
     320,   381,   382,   248,   387,   388,   265,   389,   390,   280,
     285,     4,   292,   298,   155,   155,   152,   111,   155,     6,
     426,   438,   307,     7,   304,   308,   149,   309,   325,   310,
     331,    32,   162,   169,   343,   224,    35,   349,    36,   145,
     145,   368,   369,   145,   145,    18,   370,    37,   156,   145,
     405,   406,   152,    38,    39,   373,   402,   154,    40,    41,
     145,   403,   407,   145,   145,   421,   456,   415,   427,   156,
     408,   145,   145,   145,   463,   113,   410,   145,   411,   437,
     447,    32,   162,   155,   440,   449,    35,   450,    36,   451,
     452,   454,   453,   154,   467,    18,  -118,    37,   224,   156,
     426,   111,   163,    38,    39,   459,   111,   470,    40,    41,
     248,   110,   149,   149,   478,   479,   149,   111,   472,   155,
     426,   426,   157,   485,   486,   473,   474,   481,   488,   426,
     426,   482,    23,   114,   426,   483,   487,    80,   152,   152,
      82,   272,   152,   157,    69,   174,    83,   357,   342,   468,
     464,   175,   263,   477,   469,   484,   330,   455,   260,   376,
     156,   156,   377,   158,   156,   475,   378,   380,   421,   427,
     379,     0,     0,   157,     0,     0,     0,   468,   469,   154,
     154,     0,   475,   154,   158,     0,     0,     0,     0,     0,
       0,     0,   149,   149,     0,     0,   149,   149,     0,     0,
       0,     0,   149,     0,     0,   155,   155,     0,     0,   155,
       0,     0,     0,   149,   158,     0,   149,   149,   152,   152,
       0,     0,   152,   152,   149,   149,   149,     0,   152,   156,
     149,     0,     0,     0,   157,   157,     0,     0,   157,   152,
       0,     0,   152,   152,     0,     0,     0,     0,     0,     0,
     152,   152,   152,     0,     0,     0,   152,     0,     0,   154,
     154,     0,     0,   154,   154,   156,     0,     0,     0,   154,
       0,     0,     0,     0,     0,   158,   158,     0,     0,   158,
     154,     0,     0,   154,   154,   155,   155,     0,     0,   155,
     155,   154,   154,   154,     0,   155,     0,   154,     0,     0,
       0,     0,     0,   157,     0,     0,   155,     0,     0,   155,
     155,     0,     0,     0,     0,     0,     0,   155,   155,   155,
       0,     0,     0,   155,     0,     0,     0,     0,     0,     0,
       0,   200,     0,     0,     0,     0,   229,     0,     0,   157,
       0,     0,     0,    71,   158,     0,    78,     0,     0,     0,
       0,   156,   156,     0,     0,   156,     0,     0,     0,     0,
      32,     1,    33,    34,     3,    35,     0,    36,     0,     0,
       0,     0,     0,     0,    18,     0,    37,     4,     0,     0,
     158,     0,    38,    39,     0,     6,     0,    40,    41,     7,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     276,     0,     0,     0,     0,     0,   225,   225,     0,   245,
       0,     0,   251,   293,     0,   297,     0,     0,     0,     0,
       0,     0,   229,    32,   162,   157,   157,     0,    35,   157,
      36,   156,   156,    42,     0,   156,   156,    18,    43,    37,
       0,   156,     0,     0,     0,    38,    39,     0,     0,     0,
      40,    41,   156,     0,     0,   156,   156,     0,     0,     0,
       0,     0,     0,   156,   156,   156,   158,   158,     0,   156,
     158,   332,     0,     0,     0,   341,  -235,  -235,  -235,  -235,
    -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,   350,   351,
     225,   225,   225,   225,   245,   251,     0,     0,     0,     0,
       0,     0,   276,     0,     0,   157,   157,   226,   226,   157,
     157,     0,     0,     0,     0,   157,     0,     0,     0,     0,
       0,   326,   329,   245,     0,     0,   157,     0,     0,   157,
     157,     0,     0,     0,   375,     0,     0,   157,   157,   157,
       0,     0,     0,   157,     0,     0,   158,   158,     0,     0,
     158,   158,     0,     0,   396,     0,   158,     0,     0,    32,
     162,     0,   352,     0,    35,     0,    36,   158,     0,     0,
     158,   158,     0,    18,     0,    37,   362,     0,   158,   158,
     158,    38,    39,     0,   158,     0,    40,    41,     0,     0,
       0,   226,   226,   226,   226,     0,     0,   419,     0,     0,
       0,   422,   251,     0,     0,     0,     0,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225,     0,   398,     0,     0,   401,
     277,    32,     1,     2,    34,    25,    35,     0,    36,     0,
       0,     0,   276,     0,     0,    18,   448,    37,     4,     0,
      32,     0,   409,    38,    39,    35,     6,    36,    40,    41,
       7,     0,   414,     0,    18,     0,    37,     0,     0,     0,
       0,     0,    38,    39,     0,   225,     0,    40,    41,     0,
     465,   466,  -236,  -236,  -236,  -236,  -236,  -236,  -236,  -236,
    -236,  -236,  -236,  -236,     0,     0,     0,     0,     0,     0,
       0,   419,     0,     0,     0,   480,     0,     0,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,     0,    89,    90,    32,
       1,     2,    91,     3,    35,     0,    36,    92,   225,    93,
      94,    95,    96,    97,    98,    37,     4,    99,     0,   100,
     101,    38,    39,     0,     6,   102,    40,    41,     7,   103,
       0,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,     0,     0,     0,   226,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,     0,
       0,     0,     0,     0,   104,   105,   106,     0,     0,   107,
       0,    66,   108,     0,   242,     0,   243,   109,     0,   244,
       0,     0,     0,    89,    90,    32,     1,     2,    91,     3,
      35,     0,    36,    92,     0,    93,    94,    95,    96,    97,
      98,    37,     4,    99,     0,   176,   101,    38,    39,   226,
       6,   102,    40,    41,     7,   103,    89,    90,    32,     1,
       2,    91,     3,    35,     0,    36,    92,     0,    93,    94,
      95,    96,    97,    98,    37,     4,    99,     0,   100,   101,
      38,    39,     0,     6,   102,    40,    41,     7,   103,     0,
     104,   105,   106,     0,     0,   107,     0,    66,   177,     0,
       0,     0,     0,   109,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   104,   105,   106,     0,     0,   107,     0,
      66,   253,     0,     0,     0,     0,   109,    89,    90,    32,
       1,     2,    91,     3,    35,     0,    36,    92,     0,    93,
      94,    95,    96,    97,    98,    37,     4,    99,     0,   100,
     101,    38,    39,     0,     6,   102,    40,    41,     7,   103,
      89,    90,    32,     1,     2,    91,     3,    35,     0,    36,
      92,     0,    93,    94,    95,    96,    97,    98,    37,     4,
      99,     0,   100,   101,    38,    39,     0,     6,   102,    40,
      41,     7,   103,     0,   104,   105,   106,     0,     0,   107,
       0,    66,   282,     0,     0,     0,     0,   109,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   104,   105,   106,
       0,     0,   107,     0,    66,   284,     0,     0,     0,     0,
     109,    89,    90,    32,     1,     2,    91,     3,    35,     0,
      36,    92,     0,    93,    94,    95,    96,    97,    98,    37,
       4,    99,     0,   100,   101,    38,    39,     0,     6,   102,
      40,    41,     7,   103,    89,    90,    32,     0,     0,    91,
       0,    35,     0,    36,    92,     0,    93,    94,    95,    96,
      97,    98,    37,     0,    99,     0,   100,   101,    38,    39,
       0,     0,   102,    40,    41,     0,   103,     0,   104,   105,
     106,     0,     0,   107,     0,    66,   366,     0,     0,     0,
       0,   109,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   104,   105,   106,     0,     0,   107,     0,    66,     0,
      89,   423,    32,     0,   109,    91,     0,    35,     0,    36,
     424,     0,    93,    94,    95,    96,    97,    98,    37,     0,
     425,     0,   100,   101,    38,    39,     0,     0,   102,    40,
      41,    32,   103,     0,    91,     0,    35,     0,    36,     0,
       0,    93,    94,    95,    96,    97,    98,    37,     0,     0,
       0,   100,     0,    38,    39,     0,     0,     0,    40,    41,
       0,   103,     0,     0,     0,     0,     0,   104,   105,   106,
       0,     0,   107,     0,    66,     0,     0,     0,     0,     0,
     109,     0,     0,     0,     0,     0,   189,   190,    32,     1,
      33,    34,     3,    35,     0,    36,   104,   105,   106,   191,
     192,   193,    18,     0,    37,     4,     0,     0,     0,   194,
      38,    39,     0,     6,     0,    40,    41,     7,    32,     0,
       0,    91,     0,    35,     0,    36,     0,     0,    93,    94,
      95,    96,    97,    98,    37,     0,     0,     0,   100,     0,
      38,    39,     0,     0,     0,    40,    41,     0,   103,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    79,     0,     0,     0,     0,    43,     0,     0,     0,
       0,     0,     0,   189,   190,     0,     0,     0,     0,     0,
       0,     0,     0,   104,   105,   106,   191,   192,   193,    32,
     273,   358,    91,     0,    35,   359,    36,     0,     0,    93,
      94,    95,    96,    97,    98,    37,     0,     0,     0,   100,
       0,    38,    39,     0,     0,     0,    40,    41,     0,   103,
      32,     0,     0,    91,     0,    35,     0,    36,     0,     0,
      93,    94,    95,    96,    97,    98,    37,     0,     0,     0,
     100,     0,    38,    39,   189,   190,     0,    40,    41,     0,
     103,     0,     0,     0,   104,   105,   106,   191,   192,   193,
       0,     0,     0,     0,   160,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   189,   190,     0,     0,     0,
       0,     0,     0,     0,     0,   104,   105,   106,   191,   192,
     193,    32,   273,   445,    91,     0,    35,     0,    36,     0,
       0,    93,    94,    95,    96,    97,    98,    37,     0,     0,
       0,   100,     0,    38,    39,     0,     0,     0,    40,    41,
       0,   103,    32,     0,     0,    91,     0,    35,     0,    36,
       0,     0,    93,    94,    95,    96,    97,    98,    37,     0,
       0,     0,   100,     0,    38,    39,   189,   190,     0,    40,
      41,     0,   103,     0,     0,     0,   104,   105,   106,   191,
     192,   193,     0,   273,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   189,   190,     0,
       0,     0,     0,     0,     0,     0,     0,   104,   105,   106,
     191,   192,   193,   294,    32,     0,     0,    91,     0,    35,
       0,    36,     0,     0,    93,    94,    95,    96,    97,    98,
      37,     0,     0,     0,   100,     0,    38,    39,     0,     0,
       0,    40,    41,     0,   103,    32,     0,     0,    91,     0,
      35,     0,    36,     0,     0,    93,    94,    95,    96,    97,
      98,    37,     0,     0,     0,   100,     0,    38,    39,   189,
     190,     0,    40,    41,     0,   103,     0,     0,     0,   104,
     105,   106,   191,   192,   193,   364,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     189,   190,     0,     0,     0,     0,     0,     0,     0,     0,
     104,   105,   106,   191,   192,   193,   394,    32,     0,     0,
      91,     0,    35,     0,    36,     0,     0,    93,    94,    95,
      96,    97,    98,    37,     0,     0,     0,   100,     0,    38,
      39,     0,     0,     0,    40,    41,     0,   103,    32,     0,
       0,    91,     0,    35,     0,    36,     0,     0,    93,    94,
      95,    96,    97,    98,    37,     0,     0,     0,   100,     0,
      38,    39,   189,   190,     0,    40,    41,     0,   103,     0,
       0,     0,   104,   105,   106,   191,   192,   193,   441,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   189,   190,     0,     0,     0,     0,     0,
       0,     0,     0,   104,   105,   106,   191,   192,   193,   443,
      32,     0,     0,    91,     0,    35,     0,    36,     0,     0,
      93,    94,    95,    96,    97,    98,    37,     0,     0,     0,
     100,     0,    38,    39,     0,     0,     0,    40,    41,     0,
     103,    32,     0,     0,    91,     0,    35,     0,    36,     0,
       0,    93,    94,    95,    96,    97,    98,    37,     0,     0,
       0,   100,     0,    38,    39,   189,   190,   -28,    40,    41,
       0,   103,     0,     0,     0,   104,   105,   106,   191,   192,
     193,     0,     0,     0,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   104,   105,   106,     0,
       0,   107,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   242,     0,   243,
       0,     0,   244
};

static const yytype_int16 yycheck[] =
{
       3,    27,    27,   273,   280,   117,    66,    19,    31,    87,
     182,    19,    27,    19,    16,    19,     5,   105,   106,    19,
     449,   243,    25,    33,    27,    19,    29,    87,    54,    54,
       0,    34,    58,    58,    12,   257,   164,    76,    27,    54,
      79,    66,    81,    46,   182,    23,    72,    72,   324,    77,
      60,    54,   481,    46,    75,    58,    58,   117,     6,     7,
      27,     9,    87,    66,    70,    54,    70,   179,    36,    58,
      70,    83,    82,    80,    22,    83,    24,    66,    81,   104,
       9,    49,    30,    72,    87,    77,    34,    54,    81,    77,
      19,    58,   117,    36,   159,    83,    25,    79,    87,    66,
     178,   189,   190,   191,   192,    72,    49,   172,   373,   112,
     313,   314,   315,   316,   117,   104,   105,   106,   178,   179,
      87,    75,   182,    76,    75,    79,    19,   403,   117,    82,
      83,   407,    25,   159,   159,    83,   162,   162,   266,     6,
       7,    70,     9,   413,    78,    76,   172,   172,    82,    77,
     117,    82,    83,   178,   179,    22,   182,   182,   286,    66,
      79,   164,    81,    30,    79,    84,   169,    34,   193,    81,
     159,   283,    84,   162,   326,   178,   179,   329,    75,    81,
      87,    83,    79,   172,    81,    66,    36,   247,   453,   178,
     179,    76,   159,   182,    81,   162,   327,    82,    76,   330,
     189,   190,   191,   192,    82,   172,    87,    76,   473,   474,
     117,   178,   179,    82,    76,   182,    83,   482,   483,    76,
      82,    75,   487,   283,    76,    82,    66,     0,   356,    75,
      82,   369,    75,   321,   322,   323,   117,    75,    11,    12,
     243,    49,    76,    81,   247,   271,   271,    87,    82,    76,
      23,    79,    66,    81,    27,    82,    82,    83,   283,    65,
      66,    67,    68,   266,    62,    63,    64,    79,    48,    81,
      50,   178,   179,    87,    79,   182,    81,   117,   450,    75,
     283,    54,   271,   286,    84,    79,   374,    81,    79,    77,
      81,    79,   247,    75,   283,    71,    72,   178,   179,    71,
      72,   182,    83,   117,   271,    71,    72,    82,    83,   369,
     370,   449,   450,   373,    55,    56,   283,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   463,    57,    58,   178,   179,
     247,    83,   182,   481,    79,     6,     7,   336,     9,    60,
      61,   311,   312,   356,   317,   318,    80,   319,   320,    75,
      83,    22,     9,    83,   178,   179,   247,   370,   182,    30,
     373,   394,    51,    34,    83,    52,   283,    53,    79,    54,
      76,     5,     6,    82,     9,   374,    10,    19,    12,   449,
     450,    83,    82,   453,   454,    19,    76,    21,    66,   459,
       9,     9,   283,    27,    28,    76,    80,   247,    32,    33,
     470,    75,    75,   473,   474,   370,   439,    83,   373,    87,
      80,   481,   482,   483,   450,   450,    25,   487,    78,    49,
      83,     5,     6,   247,    80,    83,    10,    75,    12,    75,
      75,    29,    49,   283,   453,    19,    29,    21,   437,   117,
     453,   454,    76,    27,    28,    76,   459,    76,    32,    33,
     463,   450,   369,   370,   473,   474,   373,   470,    83,   283,
     473,   474,    66,   482,   483,    76,    76,    83,   487,   482,
     483,    29,    11,   450,   487,    76,    76,    54,   369,   370,
      58,   169,   373,    87,    34,    82,    58,   271,   453,   454,
     450,    83,    76,   472,   459,   481,   223,   437,   153,   306,
     178,   179,   307,    66,   182,   470,   308,   310,   473,   474,
     309,    -1,    -1,   117,    -1,    -1,    -1,   482,   483,   369,
     370,    -1,   487,   373,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   449,   450,    -1,    -1,   453,   454,    -1,    -1,
      -1,    -1,   459,    -1,    -1,   369,   370,    -1,    -1,   373,
      -1,    -1,    -1,   470,   117,    -1,   473,   474,   449,   450,
      -1,    -1,   453,   454,   481,   482,   483,    -1,   459,   247,
     487,    -1,    -1,    -1,   178,   179,    -1,    -1,   182,   470,
      -1,    -1,   473,   474,    -1,    -1,    -1,    -1,    -1,    -1,
     481,   482,   483,    -1,    -1,    -1,   487,    -1,    -1,   449,
     450,    -1,    -1,   453,   454,   283,    -1,    -1,    -1,   459,
      -1,    -1,    -1,    -1,    -1,   178,   179,    -1,    -1,   182,
     470,    -1,    -1,   473,   474,   449,   450,    -1,    -1,   453,
     454,   481,   482,   483,    -1,   459,    -1,   487,    -1,    -1,
      -1,    -1,    -1,   247,    -1,    -1,   470,    -1,    -1,   473,
     474,    -1,    -1,    -1,    -1,    -1,    -1,   481,   482,   483,
      -1,    -1,    -1,   487,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   102,    -1,    -1,    -1,    -1,   107,    -1,    -1,   283,
      -1,    -1,    -1,    44,   247,    -1,    47,    -1,    -1,    -1,
      -1,   369,   370,    -1,    -1,   373,    -1,    -1,    -1,    -1,
       5,     6,     7,     8,     9,    10,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    21,    22,    -1,    -1,
     283,    -1,    27,    28,    -1,    30,    -1,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     171,    -1,    -1,    -1,    -1,    -1,   105,   106,    -1,   110,
      -1,    -1,   113,   184,    -1,   186,    -1,    -1,    -1,    -1,
      -1,    -1,   193,     5,     6,   369,   370,    -1,    10,   373,
      12,   449,   450,    78,    -1,   453,   454,    19,    83,    21,
      -1,   459,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,
      32,    33,   470,    -1,    -1,   473,   474,    -1,    -1,    -1,
      -1,    -1,    -1,   481,   482,   483,   369,   370,    -1,   487,
     373,   242,    -1,    -1,    -1,   246,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,   259,   260,
     189,   190,   191,   192,   195,   196,    -1,    -1,    -1,    -1,
      -1,    -1,   273,    -1,    -1,   449,   450,   105,   106,   453,
     454,    -1,    -1,    -1,    -1,   459,    -1,    -1,    -1,    -1,
      -1,   222,   223,   224,    -1,    -1,   470,    -1,    -1,   473,
     474,    -1,    -1,    -1,   305,    -1,    -1,   481,   482,   483,
      -1,    -1,    -1,   487,    -1,    -1,   449,   450,    -1,    -1,
     453,   454,    -1,    -1,   325,    -1,   459,    -1,    -1,     5,
       6,    -1,   263,    -1,    10,    -1,    12,   470,    -1,    -1,
     473,   474,    -1,    19,    -1,    21,   277,    -1,   481,   482,
     483,    27,    28,    -1,   487,    -1,    32,    33,    -1,    -1,
      -1,   189,   190,   191,   192,    -1,    -1,   368,    -1,    -1,
      -1,   372,   303,    -1,    -1,    -1,    -1,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,    -1,   327,    -1,    -1,   330,
      76,     5,     6,     7,     8,     9,    10,    -1,    12,    -1,
      -1,    -1,   413,    -1,    -1,    19,   417,    21,    22,    -1,
       5,    -1,   353,    27,    28,    10,    30,    12,    32,    33,
      34,    -1,   363,    -1,    19,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    27,    28,    -1,   374,    -1,    32,    33,    -1,
     451,   452,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   472,    -1,    -1,    -1,   476,    -1,    -1,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    13,   437,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      -1,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    -1,    -1,   374,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    -1,    -1,    75,
      -1,    77,    78,    -1,    79,    -1,    81,    83,    -1,    84,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    13,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    25,    26,    27,    28,   437,
      30,    31,    32,    33,    34,    35,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    -1,
      70,    71,    72,    -1,    -1,    75,    -1,    77,    78,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    -1,    -1,    75,    -1,
      77,    78,    -1,    -1,    -1,    -1,    83,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    -1,    70,    71,    72,    -1,    -1,    75,
      -1,    77,    78,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      -1,    -1,    75,    -1,    77,    78,    -1,    -1,    -1,    -1,
      83,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,     3,     4,     5,    -1,    -1,     8,
      -1,    10,    -1,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    -1,    23,    -1,    25,    26,    27,    28,
      -1,    -1,    31,    32,    33,    -1,    35,    -1,    70,    71,
      72,    -1,    -1,    75,    -1,    77,    78,    -1,    -1,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    -1,    -1,    75,    -1,    77,    -1,
       3,     4,     5,    -1,    83,     8,    -1,    10,    -1,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    -1,    25,    26,    27,    28,    -1,    -1,    31,    32,
      33,     5,    35,    -1,     8,    -1,    10,    -1,    12,    -1,
      -1,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    25,    -1,    27,    28,    -1,    -1,    -1,    32,    33,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      -1,    -1,    75,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    60,    61,     5,     6,
       7,     8,     9,    10,    -1,    12,    70,    71,    72,    73,
      74,    75,    19,    -1,    21,    22,    -1,    -1,    -1,    83,
      27,    28,    -1,    30,    -1,    32,    33,    34,     5,    -1,
      -1,     8,    -1,    10,    -1,    12,    -1,    -1,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    25,    -1,
      27,    28,    -1,    -1,    -1,    32,    33,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    74,    75,     5,
      77,    78,     8,    -1,    10,    82,    12,    -1,    -1,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    25,
      -1,    27,    28,    -1,    -1,    -1,    32,    33,    -1,    35,
       5,    -1,    -1,     8,    -1,    10,    -1,    12,    -1,    -1,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      25,    -1,    27,    28,    60,    61,    -1,    32,    33,    -1,
      35,    -1,    -1,    -1,    70,    71,    72,    73,    74,    75,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    74,
      75,     5,    77,    78,     8,    -1,    10,    -1,    12,    -1,
      -1,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    25,    -1,    27,    28,    -1,    -1,    -1,    32,    33,
      -1,    35,     5,    -1,    -1,     8,    -1,    10,    -1,    12,
      -1,    -1,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    25,    -1,    27,    28,    60,    61,    -1,    32,
      33,    -1,    35,    -1,    -1,    -1,    70,    71,    72,    73,
      74,    75,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    74,    75,    76,     5,    -1,    -1,     8,    -1,    10,
      -1,    12,    -1,    -1,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    25,    -1,    27,    28,    -1,    -1,
      -1,    32,    33,    -1,    35,     5,    -1,    -1,     8,    -1,
      10,    -1,    12,    -1,    -1,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    25,    -1,    27,    28,    60,
      61,    -1,    32,    33,    -1,    35,    -1,    -1,    -1,    70,
      71,    72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    74,    75,    76,     5,    -1,    -1,
       8,    -1,    10,    -1,    12,    -1,    -1,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    25,    -1,    27,
      28,    -1,    -1,    -1,    32,    33,    -1,    35,     5,    -1,
      -1,     8,    -1,    10,    -1,    12,    -1,    -1,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    25,    -1,
      27,    28,    60,    61,    -1,    32,    33,    -1,    35,    -1,
      -1,    -1,    70,    71,    72,    73,    74,    75,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    74,    75,    76,
       5,    -1,    -1,     8,    -1,    10,    -1,    12,    -1,    -1,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      25,    -1,    27,    28,    -1,    -1,    -1,    32,    33,    -1,
      35,     5,    -1,    -1,     8,    -1,    10,    -1,    12,    -1,
      -1,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    25,    -1,    27,    28,    60,    61,    19,    32,    33,
      -1,    35,    -1,    -1,    -1,    70,    71,    72,    73,    74,
      75,    -1,    -1,    -1,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    81,
      -1,    -1,    84
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,     9,    22,    24,    30,    34,    83,    87,
      88,    89,    90,    91,   104,   105,   111,   112,    19,    93,
      92,    93,     0,    90,    91,     9,   112,    77,   106,    81,
      83,    93,     5,     7,     8,    10,    12,    21,    27,    28,
      32,    33,    78,    83,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   104,   107,   108,   109,   110,   111,   117,
     118,   124,   125,   126,    93,   106,    77,   130,    93,   119,
      79,   101,    75,    93,   113,   114,   115,   119,   101,    78,
     108,    94,   118,   126,    83,   123,   130,    77,   127,     3,
       4,     8,    13,    15,    16,    17,    18,    19,    20,    23,
      25,    26,    31,    35,    70,    71,    72,    75,    78,    83,
      92,    93,    94,    95,   100,   104,   130,   131,   132,   133,
     134,   135,   137,   138,   139,   141,   142,   143,   144,   146,
     148,   150,   158,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     178,   179,   184,   185,   199,   200,   202,   203,   204,    75,
      80,    79,     6,    76,    94,   120,   121,   122,   101,    82,
      83,    36,    75,   113,   123,   127,    25,    78,   128,   131,
      19,    83,    75,    81,    75,    75,    75,    19,    83,    60,
      61,    73,    74,    75,    83,    92,    95,   100,   172,   176,
     182,   183,   184,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,    92,    95,    92,   174,   175,   198,   198,   182,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    79,    81,    84,   101,   186,    49,    93,   113,
      81,   101,    84,    78,   132,    83,    83,    81,    84,    79,
     186,    71,    72,    76,   120,    80,    94,    25,    93,   115,
      76,    82,   114,    77,   102,   116,   182,    76,   120,    83,
      75,   129,    78,   131,    78,    83,    94,   134,   142,   151,
     155,   157,     9,   182,    76,   177,   182,   182,    83,   198,
     198,   198,   198,    95,    83,    48,    50,    51,    52,    53,
      54,    55,    56,    65,    66,    67,    68,    57,    58,    60,
      61,    62,    63,    64,    75,    79,   101,   180,   181,   101,
     180,    76,   182,     9,    19,    25,    70,   173,    19,    70,
      81,   182,   135,     9,    81,    19,    70,    19,   173,    19,
     182,   182,   101,    76,   115,    81,    94,   121,    78,    82,
     103,   116,   101,    76,    76,   177,    78,   115,    83,    82,
      76,    76,    82,    76,    76,   182,   189,   190,   191,   192,
     193,   194,   194,   195,   195,   195,   195,   196,   196,   197,
     197,   198,   198,   198,    76,   177,   182,   102,   101,   181,
     102,   101,    80,    75,    92,     9,     9,    75,    80,   101,
      25,    78,    78,    82,   101,    83,    76,    49,   152,   182,
     142,   135,   182,     4,    13,    23,    93,   135,   136,   137,
     140,   145,   147,   149,   154,   159,   198,    49,   106,    76,
      80,    76,   177,    76,   177,    78,   116,    83,   182,    83,
      75,    75,    75,    49,    29,   187,   106,    76,    76,    76,
     153,   156,   157,    94,   151,   182,   182,   136,   135,   135,
      76,   115,    83,    76,    76,   135,    49,   152,   136,   136,
     182,    83,    29,    76,   153,   136,   136,    76,   136
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    86,    87,    88,    88,    88,    88,    89,    90,    90,
      91,    91,    92,    92,    93,    94,    94,    95,    95,    96,
      96,    97,    97,    97,    97,    97,    98,    98,    99,    99,
     100,   100,   101,   101,   102,   102,   102,   102,   103,   103,
     104,   105,   105,   106,   106,   107,   107,   108,   108,   108,
     109,   109,   109,   109,   110,   110,   111,   111,   112,   112,
     112,   112,   112,   113,   113,   114,   114,   115,   115,   116,
     116,   117,   117,   118,   118,   118,   118,   118,   118,   118,
     118,   119,   120,   120,   120,   121,   121,   122,   122,   123,
     123,   124,   125,   125,   126,   126,   127,   127,   127,   127,
     128,   129,   129,   130,   130,   131,   131,   132,   132,   132,
     133,   134,   135,   135,   135,   135,   135,   135,   136,   136,
     136,   136,   136,   137,   137,   137,   137,   137,   137,   138,
     139,   140,   141,   142,   142,   142,   142,   142,   142,   142,
     143,   144,   145,   146,   147,   148,   148,   149,   149,   150,
     151,   151,   152,   152,   153,   153,   154,   155,   155,   156,
     157,   157,   158,   159,   160,   160,   161,   161,   162,   162,
     163,   163,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   165,   165,   165,   165,   165,   166,   166,   167,
     168,   169,   170,   171,   171,   171,   171,   171,   172,   172,
     172,   173,   173,   173,   173,   174,   175,   175,   176,   176,
     176,   176,   176,   176,   177,   177,   178,   178,   178,   178,
     178,   179,   179,   179,   179,   179,   179,   180,   180,   181,
     182,   183,   183,   184,   184,   185,   185,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   187,
     187,   188,   188,   189,   189,   190,   190,   191,   191,   192,
     192,   193,   193,   193,   194,   194,   194,   194,   194,   195,
     195,   195,   196,   196,   196,   197,   197,   197,   197,   198,
     198,   198,   198,   198,   199,   200,   201,   201,   201,   201,
     202,   202,   202,   202,   203,   204,   205
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     0,     3,     1,     2,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     3,     2,     4,     3,     3,     2,     1,     3,
       1,     4,     3,     3,     2,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     4,     3,     1,     2,     1,     1,
       1,     1,     1,     3,     1,     3,     1,     2,     1,     1,
       1,     3,     2,     5,     4,     6,     5,     5,     4,     6,
       5,     1,     1,     3,     1,     3,     2,     2,     4,     1,
       1,     2,     3,     2,     4,     3,     4,     3,     3,     2,
       2,     3,     4,     3,     2,     1,     2,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     2,     1,     1,     1,     1,     1,     1,     1,
       5,     7,     7,     5,     5,     1,     1,     1,     1,     9,
       0,     1,     0,     1,     0,     1,     9,     1,     1,     1,
       1,     3,     8,     8,     3,     2,     3,     2,     3,     2,
       1,     1,     1,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     3,     4,     3,     3,     1,     3,
       3,     5,     6,     5,     4,     3,     4,     4,     4,     3,
       6,     5,     6,     5,     3,     1,     3,     3,     3,     3,
       3,     4,     3,     4,     3,     4,     4,     1,     2,     3,
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
#line 73 "parser.y"
                        { (yyval.node) = (yyvsp[0].node);
        printTAC((yyval.node));
      }
#line 2304 "parser.tab.c"
    break;

  case 3: /* CompilationUnit: PackageDeclaration MULTI_TypeDeclaration  */
#line 78 "parser.y"
                                                 {
            (yyval.node) = (yyvsp[0].node);
        }
#line 2312 "parser.tab.c"
    break;

  case 4: /* CompilationUnit: MULTI_TypeDeclaration  */
#line 81 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2318 "parser.tab.c"
    break;

  case 5: /* CompilationUnit: PackageDeclaration  */
#line 82 "parser.y"
                             { (yyval.node) = (yyvsp[0].node); }
#line 2324 "parser.tab.c"
    break;

  case 6: /* CompilationUnit: %empty  */
#line 83 "parser.y"
           { (yyval.node) = NULL ; }
#line 2330 "parser.tab.c"
    break;

  case 7: /* PackageDeclaration: PACKAGE TypeName ';'  */
#line 86 "parser.y"
                             { (yyval.node) = (yyvsp[-1].node);}
#line 2336 "parser.tab.c"
    break;

  case 8: /* MULTI_TypeDeclaration: TypeDeclaration  */
#line 89 "parser.y"
                        { (yyval.node) = (yyvsp[0].node); }
#line 2342 "parser.tab.c"
    break;

  case 9: /* MULTI_TypeDeclaration: MULTI_TypeDeclaration TypeDeclaration  */
#line 90 "parser.y"
                                               { (yyval.node) = (yyvsp[-1].node); }
#line 2348 "parser.tab.c"
    break;

  case 10: /* TypeDeclaration: ClassDeclaration  */
#line 93 "parser.y"
                       {(yyval.node) = (yyvsp[0].node);}
#line 2354 "parser.tab.c"
    break;

  case 11: /* TypeDeclaration: ';'  */
#line 94 "parser.y"
            { (yyval.node)=NULL; }
#line 2360 "parser.tab.c"
    break;

  case 12: /* TypeName: Identifier  */
#line 98 "parser.y"
                    {	
            (yyval.node)=(yyvsp[0].node);
        }
#line 2368 "parser.tab.c"
    break;

  case 13: /* TypeName: TypeName '.' Identifier  */
#line 101 "parser.y"
                                    { (yyval.node) = (yyvsp[-2].node); }
#line 2374 "parser.tab.c"
    break;

  case 14: /* Identifier: IDENTIFIER  */
#line 104 "parser.y"
                   { 
        string s1((yyvsp[0].str));
		Symbol* sym = ST->GetVar("_" + s1);
					
		if(sym == NULL){
			sym = ST->AddVar(s1,"None","simple",-1,"Identifier",line);
        }
        else{
            sym->line.push_back(line); 
        }
        genNode* n1 = new genNode();
                    
		n1->place = sym->name;
        n1->type= sym->type;
        n1->value = (yyvsp[0].str);
        n1->label="Identifier";
		(yyval.node) = n1;
    }
#line 2397 "parser.tab.c"
    break;

  case 15: /* Type: PrimitiveType  */
#line 124 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2403 "parser.tab.c"
    break;

  case 16: /* Type: ReferenceType  */
#line 125 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2409 "parser.tab.c"
    break;

  case 17: /* PrimitiveType: NumericType  */
#line 129 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2415 "parser.tab.c"
    break;

  case 18: /* PrimitiveType: BOOLEAN  */
#line 130 "parser.y"
                                {
        genNode * n1 = new genNode();
        (yyval.node) = n1;
        (yyval.node)->place = "bool";
        (yyval.node)->type = "bool";
        (yyval.node)->label = "Keyword";
        (yyval.node)->value = (yyvsp[0].str);
    }
#line 2428 "parser.tab.c"
    break;

  case 19: /* NumericType: IntegralType  */
#line 141 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2434 "parser.tab.c"
    break;

  case 20: /* NumericType: FloatingPointType  */
#line 142 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2440 "parser.tab.c"
    break;

  case 21: /* IntegralType: BYTE  */
#line 146 "parser.y"
                                { 
        genNode * n1 = new genNode();
        (yyval.node) = n1;
        (yyval.node)->place = "byte";
        (yyval.node)->type = "byte";
        (yyval.node)->label = "Keyword";
        (yyval.node)->value = (yyvsp[0].str);
    }
#line 2453 "parser.tab.c"
    break;

  case 22: /* IntegralType: SHORT  */
#line 154 "parser.y"
                                {  
        genNode * n1 = new genNode();
        (yyval.node) = n1;
        (yyval.node)->place = "short";
        (yyval.node)->type = "short";
        (yyval.node)->label = "Keyword";
        (yyval.node)->value = (yyvsp[0].str); 
    }
#line 2466 "parser.tab.c"
    break;

  case 23: /* IntegralType: INT  */
#line 162 "parser.y"
                                { 
        genNode * n1 = new genNode();
        (yyval.node) = n1;
        (yyval.node)->place = "int";
        (yyval.node)->type = "int";
        (yyval.node)->label = "Keyword";
        (yyval.node)->value = (yyvsp[0].str); 
    }
#line 2479 "parser.tab.c"
    break;

  case 24: /* IntegralType: LONG  */
#line 170 "parser.y"
                                {
        genNode * n1 = new genNode();
        (yyval.node) = n1;
        (yyval.node)->place = "long";
        (yyval.node)->type = "long";
        (yyval.node)->label = "Keyword";
        (yyval.node)->value = (yyvsp[0].str); 
    }
#line 2492 "parser.tab.c"
    break;

  case 25: /* IntegralType: CHAR  */
#line 178 "parser.y"
                                {
        genNode * n1 = new genNode();
        (yyval.node) = n1;
        (yyval.node)->place = "char";
        (yyval.node)->type = "char";
        (yyval.node)->label = "char";
        (yyval.node)->value = (yyvsp[0].str); 
    }
#line 2505 "parser.tab.c"
    break;

  case 26: /* FloatingPointType: FLOAT  */
#line 189 "parser.y"
                                {  
        genNode * n1 = new genNode();
        (yyval.node) = n1;
        (yyval.node)->place = "float";
        (yyval.node)->type = "float";
        (yyval.node)->label = "Keyword";
        (yyval.node)->value = (yyvsp[0].str); }
#line 2517 "parser.tab.c"
    break;

  case 27: /* FloatingPointType: DOUBLE  */
#line 196 "parser.y"
              { 
        genNode * n1 = new genNode();
        (yyval.node) = n1;
        (yyval.node)->place = "double";
        (yyval.node)->type = "double";
        (yyval.node)->label = "Keyword";
        (yyval.node)->value = (yyvsp[0].str);
    }
#line 2530 "parser.tab.c"
    break;

  case 28: /* ReferenceType: TypeName  */
#line 207 "parser.y"
                { (yyval.node) = (yyvsp[0].node); }
#line 2536 "parser.tab.c"
    break;

  case 29: /* ReferenceType: ArrayType  */
#line 208 "parser.y"
                { (yyval.node) = (yyvsp[0].node); }
#line 2542 "parser.tab.c"
    break;

  case 30: /* ArrayType: PrimitiveType Dims  */
#line 211 "parser.y"
                         { 
        genNode *n1 = new genNode();
		(yyval.node) = n1;
		(yyval.node)->type=(yyvsp[-1].node)->type;
		(yyval.node)->place=(yyvsp[-1].node)->place;
		(yyval.node)->isArray = true;
    }
#line 2554 "parser.tab.c"
    break;

  case 31: /* ArrayType: TypeName Dims  */
#line 218 "parser.y"
                    { 
        genNode *n1 = new genNode();
		(yyval.node) = n1;
		(yyval.node)->type=(yyvsp[-1].node)->type;
		(yyval.node)->place=(yyvsp[-1].node)->place;
		(yyval.node)->isArray = true;
    }
#line 2566 "parser.tab.c"
    break;

  case 32: /* Dims: Dims '[' ']'  */
#line 227 "parser.y"
                  {
         (yyval.node) = (yyvsp[-2].node);
   }
#line 2574 "parser.tab.c"
    break;

  case 33: /* Dims: '[' ']'  */
#line 230 "parser.y"
             {

   }
#line 2582 "parser.tab.c"
    break;

  case 34: /* ArrayInitialize: '{' VariableInitializerList ',' '}'  */
#line 236 "parser.y"
                                           { 
        (yyval.node) = (yyvsp[-2].node);
		(yyval.node)->isArray = true;
    }
#line 2591 "parser.tab.c"
    break;

  case 35: /* ArrayInitialize: '{' VariableInitializerList '}'  */
#line 240 "parser.y"
                                       {
        (yyval.node) = (yyvsp[-1].node);
		(yyval.node)->isArray = true; 
    }
#line 2600 "parser.tab.c"
    break;

  case 36: /* ArrayInitialize: '{' ',' '}'  */
#line 244 "parser.y"
                  { 
    }
#line 2607 "parser.tab.c"
    break;

  case 37: /* ArrayInitialize: '{' '}'  */
#line 246 "parser.y"
              {
        genNode* newNode = new genNode();
		(yyval.node) = newNode;
		(yyval.node)->isArray = true;
		(yyval.node)->nodeLen = 0;
    }
#line 2618 "parser.tab.c"
    break;

  case 38: /* VariableInitializerList: VariableInitializer  */
#line 255 "parser.y"
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
#line 2647 "parser.tab.c"
    break;

  case 39: /* VariableInitializerList: VariableInitializerList ',' VariableInitializer  */
#line 279 "parser.y"
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
#line 2677 "parser.tab.c"
    break;

  case 40: /* ClassDeclaration: NormalClassDeclaration  */
#line 307 "parser.y"
                             { (yyval.node) = (yyvsp[0].node); }
#line 2683 "parser.tab.c"
    break;

  case 41: /* NormalClassDeclaration: MULTI_ClassModifier CLASS Identifier ClassBody  */
#line 311 "parser.y"
                                                      {
        ST->curEnv->type = "CLASSTYPE";
        (yyval.node) = (yyvsp[-1].node);
        (yyval.node)->type = "class";
		(yyval.node)->code.pb(genLabelTAC((yyvsp[-1].node)->place));
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		ST->curEnv->name = (yyvsp[-1].node)->place;
		ST->EndScope();
    }
#line 2697 "parser.tab.c"
    break;

  case 42: /* NormalClassDeclaration: CLASS Identifier ClassBody  */
#line 320 "parser.y"
                                 { //TODO : Check Type of Class
        ST->curEnv->type = "CLASSTYPE";
        (yyval.node) = (yyvsp[-1].node);
        (yyval.node)->type = "class";
		(yyval.node)->code.pb(genLabelTAC((yyvsp[-1].node)->place));
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		ST->curEnv->name = (yyvsp[-1].node)->place;
		ST->EndScope();
    }
#line 2711 "parser.tab.c"
    break;

  case 43: /* ClassBody: '{' MULTI_ClassBodyDeclaration '}'  */
#line 331 "parser.y"
                                          {
            ST->curEnv->type = "CLASSTYPE";
			(yyval.node) = (yyvsp[-1].node); 
            (yyval.node)->type = "class";
    }
#line 2721 "parser.tab.c"
    break;

  case 44: /* ClassBody: '{' '}'  */
#line 336 "parser.y"
                {
        	ST->curEnv->type = "CLASSTYPE";
			genNode* n = new genNode();
			(yyval.node) = n; 
            (yyval.node)->type = "class";
    }
#line 2732 "parser.tab.c"
    break;

  case 45: /* MULTI_ClassBodyDeclaration: ClassBodyDeclaration  */
#line 344 "parser.y"
                            {(yyval.node)=(yyvsp[0].node);}
#line 2738 "parser.tab.c"
    break;

  case 46: /* MULTI_ClassBodyDeclaration: MULTI_ClassBodyDeclaration ClassBodyDeclaration  */
#line 345 "parser.y"
                                                       { 
        (yyval.node) = (yyvsp[-1].node);
        (yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
     }
#line 2747 "parser.tab.c"
    break;

  case 47: /* ClassBodyDeclaration: ClassMemberDeclaration  */
#line 351 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2753 "parser.tab.c"
    break;

  case 48: /* ClassBodyDeclaration: StaticInitializer  */
#line 352 "parser.y"
                                 { (yyval.node) = (yyvsp[0].node); }
#line 2759 "parser.tab.c"
    break;

  case 49: /* ClassBodyDeclaration: ConstructorDeclaration  */
#line 353 "parser.y"
                                 { (yyval.node) = (yyvsp[0].node); }
#line 2765 "parser.tab.c"
    break;

  case 50: /* ClassMemberDeclaration: FieldDeclaration  */
#line 357 "parser.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2771 "parser.tab.c"
    break;

  case 51: /* ClassMemberDeclaration: MethodDeclaration  */
#line 358 "parser.y"
                           { (yyval.node) = (yyvsp[0].node); }
#line 2777 "parser.tab.c"
    break;

  case 52: /* ClassMemberDeclaration: ClassDeclaration  */
#line 359 "parser.y"
                           { (yyval.node) = (yyvsp[0].node); }
#line 2783 "parser.tab.c"
    break;

  case 53: /* ClassMemberDeclaration: ';'  */
#line 360 "parser.y"
           {
        (yyval.node)=NULL;
     }
#line 2791 "parser.tab.c"
    break;

  case 54: /* FieldDeclaration: MULTI_ClassModifier Type VariableDeclaratorList ';'  */
#line 368 "parser.y"
                                                          {
        (yyval.node)=(yyvsp[-1].node);
        (yyval.node)->type=(yyvsp[-2].node)->place;
    }
#line 2800 "parser.tab.c"
    break;

  case 55: /* FieldDeclaration: Type VariableDeclaratorList ';'  */
#line 372 "parser.y"
                                      {
        (yyval.node)=(yyvsp[-1].node);
        (yyval.node)->type=(yyvsp[-2].node)->place;
    }
#line 2809 "parser.tab.c"
    break;

  case 56: /* MULTI_ClassModifier: ClassModifier  */
#line 378 "parser.y"
                    {(yyval.node)=(yyvsp[0].node);}
#line 2815 "parser.tab.c"
    break;

  case 57: /* MULTI_ClassModifier: MULTI_ClassModifier ClassModifier  */
#line 379 "parser.y"
                                         { (yyval.node) = (yyvsp[-1].node); }
#line 2821 "parser.tab.c"
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
#line 2834 "parser.tab.c"
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
#line 2847 "parser.tab.c"
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
#line 2860 "parser.tab.c"
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
#line 2873 "parser.tab.c"
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
#line 2886 "parser.tab.c"
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
#line 2906 "parser.tab.c"
    break;

  case 64: /* VariableDeclaratorList: VariableDeclarator  */
#line 441 "parser.y"
                         {
        	(yyval.node) = (yyvsp[0].node); 
			Symbol* sym = ST->GetVar((yyvsp[0].node)->place);
			(yyval.node)->varDecs.pb(sym);
    }
#line 2916 "parser.tab.c"
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
#line 2967 "parser.tab.c"
    break;

  case 66: /* VariableDeclarator: VariableDeclaratorId  */
#line 495 "parser.y"
                           {(yyval.node)=(yyvsp[0].node);}
#line 2973 "parser.tab.c"
    break;

  case 67: /* VariableDeclaratorId: Identifier Dims  */
#line 498 "parser.y"
                      {
        (yyval.node) = (yyvsp[-1].node); 
    }
#line 2981 "parser.tab.c"
    break;

  case 68: /* VariableDeclaratorId: Identifier  */
#line 501 "parser.y"
                  {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2989 "parser.tab.c"
    break;

  case 69: /* VariableInitializer: Expression  */
#line 507 "parser.y"
                { (yyval.node)=(yyvsp[0].node);}
#line 2995 "parser.tab.c"
    break;

  case 70: /* VariableInitializer: ArrayInitialize  */
#line 508 "parser.y"
                     { (yyval.node)=(yyvsp[0].node);}
#line 3001 "parser.tab.c"
    break;

  case 71: /* MethodDeclaration: MULTI_ClassModifier MethodHeader MethodBody  */
#line 513 "parser.y"
                                                      {
        (yyval.node) = (yyvsp[-1].node);
		vector <TAC*> tmp;
		tmp.pb(genLabelTAC(ST->curEnv->name));
		(yyval.node)->code.insert((yyval.node)->code.begin(), tmp.begin(), tmp.end());
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());	
        ST->curEnv->type = (yyvsp[-1].node)->place;	
		ST->EndScope();
    }
#line 3015 "parser.tab.c"
    break;

  case 72: /* MethodDeclaration: MethodHeader MethodBody  */
#line 522 "parser.y"
                                                    {
        (yyval.node) = (yyvsp[-1].node);
		vector <TAC*> tmp;
		tmp.pb(genLabelTAC(ST->curEnv->name));
		(yyval.node)->code.insert((yyval.node)->code.begin(), tmp.begin(), tmp.end());
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());	
         ST->curEnv->type = (yyvsp[-1].node)->place;	
		ST->EndScope();
    }
#line 3029 "parser.tab.c"
    break;

  case 73: /* MethodHeader: Type MemberName '(' FormalParameterList ')'  */
#line 534 "parser.y"
                                                      { 
        (yyval.node) = (yyvsp[-3].node);
		ST->curEnv->returnType = (yyvsp[-4].node)->place;
		ST->curEnv->name = (yyvsp[-3].node)->place;
        ST->curEnv->type = (yyvsp[-4].node)->place;
        (yyval.node)->code = (yyvsp[-1].node)->code;
    }
#line 3041 "parser.tab.c"
    break;

  case 74: /* MethodHeader: Type MemberName '(' ')'  */
#line 541 "parser.y"
                                     { 
        (yyval.node) = (yyvsp[-2].node);
		ST->curEnv->returnType = (yyvsp[-3].node)->place;
		ST->curEnv->name = (yyvsp[-2].node)->place;
    }
#line 3051 "parser.tab.c"
    break;

  case 75: /* MethodHeader: Type MemberName '(' FormalParameterList ')' Dims  */
#line 546 "parser.y"
                                                              { 
        (yyval.node) = (yyvsp[-4].node);
		ST->curEnv->returnType = (yyvsp[-5].node)->place;
		ST->curEnv->name = (yyvsp[-4].node)->place;
		(yyval.node)->code = (yyvsp[-2].node)->code;
    }
#line 3062 "parser.tab.c"
    break;

  case 76: /* MethodHeader: Type MemberName '(' ')' Dims  */
#line 552 "parser.y"
                                           { 
        (yyval.node) = (yyvsp[-3].node);
		ST->curEnv->returnType = (yyvsp[-4].node)->place;
		ST->curEnv->name = (yyvsp[-3].node)->place;
    }
#line 3072 "parser.tab.c"
    break;

  case 77: /* MethodHeader: VOID MemberName '(' FormalParameterList ')'  */
#line 557 "parser.y"
                                                           { 
        (yyval.node) = (yyvsp[-3].node);
		ST->curEnv->name = (yyvsp[-3].node)->place;
		(yyval.node)->code = (yyvsp[-1].node)->code;
    }
#line 3082 "parser.tab.c"
    break;

  case 78: /* MethodHeader: VOID MemberName '(' ')'  */
#line 562 "parser.y"
                                      { 
        (yyval.node) = (yyvsp[-2].node);
		ST->curEnv->name = (yyvsp[-2].node)->place;
    }
#line 3091 "parser.tab.c"
    break;

  case 79: /* MethodHeader: VOID MemberName '(' FormalParameterList ')' Dims  */
#line 566 "parser.y"
                                                              { 
        (yyval.node) = (yyvsp[-4].node);
		ST->curEnv->name = (yyvsp[-4].node)->place;
		(yyval.node)->code = (yyvsp[-2].node)->code;
    }
#line 3101 "parser.tab.c"
    break;

  case 80: /* MethodHeader: VOID MemberName '(' ')' Dims  */
#line 571 "parser.y"
                                           { 
        (yyval.node) = (yyvsp[-3].node);
		ST->curEnv->name = (yyvsp[-3].node)->place;
    }
#line 3110 "parser.tab.c"
    break;

  case 81: /* MemberName: Identifier  */
#line 578 "parser.y"
                 {
         ST->BeginScope();
         ST->curEnv->type = "METHODTYPE";
         (yyval.node) = (yyvsp[0].node);
    }
#line 3120 "parser.tab.c"
    break;

  case 82: /* FormalParameterList: ReceiverParameter  */
#line 586 "parser.y"
                                                     { (yyval.node)=(yyvsp[0].node); }
#line 3126 "parser.tab.c"
    break;

  case 83: /* FormalParameterList: FormalParameterList ',' FormalParameter  */
#line 587 "parser.y"
                                                    {
        (yyval.node) = (yyvsp[0].node);
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-2].node)->code.begin(), (yyvsp[-2].node)->code.end());
    }
#line 3135 "parser.tab.c"
    break;

  case 84: /* FormalParameterList: FormalParameter  */
#line 591 "parser.y"
                                              { (yyval.node) = (yyvsp[0].node); }
#line 3141 "parser.tab.c"
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
#line 3161 "parser.tab.c"
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
#line 3180 "parser.tab.c"
    break;

  case 87: /* ReceiverParameter: Type THIS  */
#line 628 "parser.y"
                                                    {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 3188 "parser.tab.c"
    break;

  case 88: /* ReceiverParameter: Type Identifier '.' THIS  */
#line 631 "parser.y"
                                                    {
          (yyval.node) = (yyvsp[-2].node);
    }
#line 3196 "parser.tab.c"
    break;

  case 89: /* MethodBody: Block  */
#line 637 "parser.y"
                                                    {(yyval.node) = (yyvsp[0].node); }
#line 3202 "parser.tab.c"
    break;

  case 90: /* MethodBody: ';'  */
#line 638 "parser.y"
                                                    {(yyval.node) = NULL; }
#line 3208 "parser.tab.c"
    break;

  case 91: /* StaticInitializer: STATIC Block  */
#line 641 "parser.y"
                                                    {
        (yyval.node) = (yyvsp[0].node);
     }
#line 3216 "parser.tab.c"
    break;

  case 92: /* ConstructorDeclaration: MULTI_ClassModifier ConstructorDeclarator ConstructorBody  */
#line 647 "parser.y"
                                                                    { 
        (yyval.node) = (yyvsp[-1].node);
		vector <TAC*> tmp;
		tmp.pb(genLabelTAC(ST->curEnv->name));
		(yyval.node)->code.insert((yyval.node)->code.begin(), tmp.begin(), tmp.end());
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());	
        ST->curEnv->type = (yyvsp[-1].node)->place;	
		ST->EndScope(); 
    }
#line 3230 "parser.tab.c"
    break;

  case 93: /* ConstructorDeclaration: ConstructorDeclarator ConstructorBody  */
#line 656 "parser.y"
                                             { 
        (yyval.node) = (yyvsp[-1].node);
		vector <TAC*> tmp;
		tmp.pb(genLabelTAC(ST->curEnv->name));
		(yyval.node)->code.insert((yyval.node)->code.begin(), tmp.begin(), tmp.end());
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());	
        ST->curEnv->type = (yyvsp[-1].node)->place;	
		ST->EndScope();
    }
#line 3244 "parser.tab.c"
    break;

  case 94: /* ConstructorDeclarator: Identifier '(' FormalParameterList ')'  */
#line 668 "parser.y"
                                             { 
        ST->BeginScope();
        ST->curEnv->type = "CONTRUCTORTYPE";
        (yyval.node) = (yyvsp[-3].node);
		ST->curEnv->name = (yyvsp[-3].node)->place;
        (yyval.node)->code = (yyvsp[-1].node)->code;
    }
#line 3256 "parser.tab.c"
    break;

  case 95: /* ConstructorDeclarator: Identifier '(' ')'  */
#line 675 "parser.y"
                           { 
        ST->BeginScope();
        ST->curEnv->type = "CONTRUCTORTYPE";
        (yyval.node) = (yyvsp[-2].node);
		ST->curEnv->name = (yyvsp[-2].node)->place;
    }
#line 3267 "parser.tab.c"
    break;

  case 96: /* ConstructorBody: '{' ExplicitConstructorInvocation BlockStatements '}'  */
#line 684 "parser.y"
                                                                           { genNode *n1 = createNode("Separator", (yyvsp[-3].str), {});genNode *n4= createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("ConstructorBody","",{n1,(yyvsp[-2].node),(yyvsp[-1].node),n4}); }
#line 3273 "parser.tab.c"
    break;

  case 97: /* ConstructorBody: '{' BlockStatements '}'  */
#line 685 "parser.y"
                                                                           { genNode *n1 = createNode("Separator", (yyvsp[-2].str), {});genNode *n3= createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("ConstructorBody","",{n1,(yyvsp[-1].node),n3}); }
#line 3279 "parser.tab.c"
    break;

  case 98: /* ConstructorBody: '{' ExplicitConstructorInvocation '}'  */
#line 686 "parser.y"
                                                                           { genNode *n1 = createNode("Separator", (yyvsp[-2].str), {});genNode *n3= createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("ConstructorBody","",{n1,(yyvsp[-1].node),n3}); }
#line 3285 "parser.tab.c"
    break;

  case 99: /* ConstructorBody: '{' '}'  */
#line 687 "parser.y"
                                                                           { genNode *n1 = createNode("Separator", (yyvsp[-1].str), {});genNode *n2= createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("ConstructorBody","",{n1,n2}); }
#line 3291 "parser.tab.c"
    break;

  case 100: /* ExplicitConstructorInvocation: THIS SINGLE_ArgumentList  */
#line 691 "parser.y"
                                                                           { genNode * n1 = createNode("KEYWORD", (yyvsp[-1].str), {});(yyval.node) = createNode("ExplicitConstructorInvocation","", {n1,(yyvsp[0].node)}); }
#line 3297 "parser.tab.c"
    break;

  case 101: /* SINGLE_ArgumentList: '(' ')' ';'  */
#line 695 "parser.y"
                                                       { genNode *n1 = createNode("Separator", (yyvsp[-2].str), {});genNode *n2 = createNode("Separator", (yyvsp[-1].str), {});genNode *n3 = createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("SINGLE_ArgumentList","",{n1,n2,n3});  }
#line 3303 "parser.tab.c"
    break;

  case 102: /* SINGLE_ArgumentList: '(' ArgumentList ')' ';'  */
#line 696 "parser.y"
                                                       { genNode *n1 = createNode("Separator", (yyvsp[-3].str), {});genNode *n3 = createNode("Separator", (yyvsp[-1].str), {});genNode *n4 = createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("SINGLE_ArgumentList","",{n1,(yyvsp[-2].node),n3,n4});  }
#line 3309 "parser.tab.c"
    break;

  case 103: /* Block: '{' BlockStatements '}'  */
#line 700 "parser.y"
                                             { ST->BeginScope();   (yyval.node) = (yyvsp[-1].node); ST->EndScope(); }
#line 3315 "parser.tab.c"
    break;

  case 104: /* Block: '{' '}'  */
#line 701 "parser.y"
                                             { ST->BeginScope();   (yyval.node) = NULL; ST->EndScope();}
#line 3321 "parser.tab.c"
    break;

  case 105: /* BlockStatements: BlockStatement  */
#line 705 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3327 "parser.tab.c"
    break;

  case 106: /* BlockStatements: BlockStatements BlockStatement  */
#line 706 "parser.y"
                                             { 
        (yyval.node) = (yyvsp[-1].node);
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
    }
#line 3336 "parser.tab.c"
    break;

  case 107: /* BlockStatement: LocalVariableDeclarationStatement  */
#line 713 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3342 "parser.tab.c"
    break;

  case 108: /* BlockStatement: ClassDeclaration  */
#line 714 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3348 "parser.tab.c"
    break;

  case 109: /* BlockStatement: Statement  */
#line 715 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3354 "parser.tab.c"
    break;

  case 110: /* LocalVariableDeclarationStatement: LocalVariableDeclaration ';'  */
#line 719 "parser.y"
                                             { 
        (yyval.node) = (yyvsp[-1].node);
    }
#line 3362 "parser.tab.c"
    break;

  case 111: /* LocalVariableDeclaration: Type VariableDeclaratorList  */
#line 725 "parser.y"
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
#line 3380 "parser.tab.c"
    break;

  case 112: /* Statement: StatementWithoutTrailingSubstatement  */
#line 742 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3386 "parser.tab.c"
    break;

  case 113: /* Statement: LabeledStatement  */
#line 743 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3392 "parser.tab.c"
    break;

  case 114: /* Statement: IfThenStatement  */
#line 744 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3398 "parser.tab.c"
    break;

  case 115: /* Statement: IfThenElseStatement  */
#line 745 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3404 "parser.tab.c"
    break;

  case 116: /* Statement: WhileStatement  */
#line 746 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3410 "parser.tab.c"
    break;

  case 117: /* Statement: ForStatement  */
#line 747 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3416 "parser.tab.c"
    break;

  case 118: /* StatementNoShortIf: StatementWithoutTrailingSubstatement  */
#line 751 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3422 "parser.tab.c"
    break;

  case 119: /* StatementNoShortIf: LabeledStatementNoShortIf  */
#line 752 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3428 "parser.tab.c"
    break;

  case 120: /* StatementNoShortIf: IfThenElseStatementNoShortIf  */
#line 753 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3434 "parser.tab.c"
    break;

  case 121: /* StatementNoShortIf: WhileStatementNoShortIf  */
#line 754 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3440 "parser.tab.c"
    break;

  case 122: /* StatementNoShortIf: ForStatementNoShortIf  */
#line 755 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3446 "parser.tab.c"
    break;

  case 123: /* StatementWithoutTrailingSubstatement: Block  */
#line 759 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3452 "parser.tab.c"
    break;

  case 124: /* StatementWithoutTrailingSubstatement: EmptyStatement  */
#line 760 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3458 "parser.tab.c"
    break;

  case 125: /* StatementWithoutTrailingSubstatement: ExpressionStatement  */
#line 761 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3464 "parser.tab.c"
    break;

  case 126: /* StatementWithoutTrailingSubstatement: BreakStatement  */
#line 762 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3470 "parser.tab.c"
    break;

  case 127: /* StatementWithoutTrailingSubstatement: ContinueStatement  */
#line 763 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3476 "parser.tab.c"
    break;

  case 128: /* StatementWithoutTrailingSubstatement: ReturnStatement  */
#line 764 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3482 "parser.tab.c"
    break;

  case 129: /* EmptyStatement: ';'  */
#line 768 "parser.y"
                                             {  }
#line 3488 "parser.tab.c"
    break;

  case 130: /* LabeledStatement: Identifier ':' Statement  */
#line 772 "parser.y"
                                             { 
        (yyval.node) = (yyvsp[-2].node);
        (yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
    }
#line 3497 "parser.tab.c"
    break;

  case 131: /* LabeledStatementNoShortIf: Identifier ':' StatementNoShortIf  */
#line 779 "parser.y"
                                              { 
        (yyval.node) = (yyvsp[-2].node);
        (yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
    }
#line 3506 "parser.tab.c"
    break;

  case 132: /* ExpressionStatement: StatementExpression ';'  */
#line 786 "parser.y"
                                              { genNode *n2 = createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("ExpressionStatement","",{(yyvsp[-1].node),n2}); }
#line 3512 "parser.tab.c"
    break;

  case 133: /* StatementExpression: Assignment  */
#line 790 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3518 "parser.tab.c"
    break;

  case 134: /* StatementExpression: PreIncrementExpression  */
#line 791 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3524 "parser.tab.c"
    break;

  case 135: /* StatementExpression: PreDecrementExpression  */
#line 792 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3530 "parser.tab.c"
    break;

  case 136: /* StatementExpression: PostIncrementExpression  */
#line 793 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3536 "parser.tab.c"
    break;

  case 137: /* StatementExpression: PostDecrementExpression  */
#line 794 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3542 "parser.tab.c"
    break;

  case 138: /* StatementExpression: MethodInvocation  */
#line 795 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3548 "parser.tab.c"
    break;

  case 139: /* StatementExpression: ClassInstanceCreationExpression  */
#line 796 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3554 "parser.tab.c"
    break;

  case 140: /* IfThenStatement: IF '(' Expression ')' Statement  */
#line 800 "parser.y"
                                          { genNode *n1 = createNode("KEYWORD", (yyvsp[-4].str), {}); genNode *n2 = createNode("Separator", (yyvsp[-3].str), {}); genNode *n4 = createNode("Separator", (yyvsp[-1].str), {}); (yyval.node)=createNode("IfThenStatement","",{n1,n2,(yyvsp[-2].node),n4,(yyvsp[0].node)});}
#line 3560 "parser.tab.c"
    break;

  case 141: /* IfThenElseStatement: IF '(' Expression ')' StatementNoShortIf ELSE Statement  */
#line 804 "parser.y"
                                                               { genNode *n1 = createNode("KEYWORD", (yyvsp[-6].str), {}); genNode *n2 = createNode("Separator", (yyvsp[-5].str), {}); genNode *n4 = createNode("Separator", (yyvsp[-3].str), {}); genNode *n6 = createNode("KEYWORD", (yyvsp[-1].str), {}); (yyval.node)=createNode("IfThenELseStatement","",{n1,n2,(yyvsp[-4].node),n4,(yyvsp[-2].node),n6,(yyvsp[0].node)});}
#line 3566 "parser.tab.c"
    break;

  case 142: /* IfThenElseStatementNoShortIf: IF '(' Expression ')' StatementNoShortIf ELSE StatementNoShortIf  */
#line 808 "parser.y"
                                                                          { genNode *n1 = createNode("KEYWORD", (yyvsp[-6].str), {}); genNode *n2 = createNode("Separator", (yyvsp[-5].str), {}); genNode *n4 = createNode("Separator", (yyvsp[-3].str), {}); genNode *n6 = createNode("KEYWORD", (yyvsp[-1].str), {}); (yyval.node)=createNode("IfThenElseStatementNoShortIf","",{n1,n2,(yyvsp[-4].node),n4,(yyvsp[-2].node),n6,(yyvsp[0].node)});}
#line 3572 "parser.tab.c"
    break;

  case 143: /* WhileStatement: WHILE '(' Expression ')' Statement  */
#line 812 "parser.y"
                                                {genNode *n1 = createNode("KEYWORD", (yyvsp[-4].str), {}); genNode *n2 = createNode("Separator", (yyvsp[-3].str), {}); genNode *n4 = createNode("Separator", (yyvsp[-1].str), {}); (yyval.node)=createNode("WhileStatement","",{n1,n2,(yyvsp[-2].node),n4,(yyvsp[0].node)});}
#line 3578 "parser.tab.c"
    break;

  case 144: /* WhileStatementNoShortIf: WHILE '(' Expression ')' StatementNoShortIf  */
#line 816 "parser.y"
                                                                 {genNode *n1 = createNode("KEYWORD", (yyvsp[-4].str), {}); genNode *n2 = createNode("Separator", (yyvsp[-3].str), {}); genNode *n4 = createNode("Separator", (yyvsp[-1].str), {}); (yyval.node)=createNode("WhileStatementNoShortIf","",{n1,n2,(yyvsp[-2].node),n4,(yyvsp[0].node)});}
#line 3584 "parser.tab.c"
    break;

  case 145: /* ForStatement: BasicForStatement  */
#line 820 "parser.y"
                                                 {(yyval.node)=(yyvsp[0].node);}
#line 3590 "parser.tab.c"
    break;

  case 146: /* ForStatement: EnhancedForStatement  */
#line 821 "parser.y"
                                                 {(yyval.node)=(yyvsp[0].node);}
#line 3596 "parser.tab.c"
    break;

  case 147: /* ForStatementNoShortIf: BasicForStatementNoShortIf  */
#line 825 "parser.y"
                                                 {(yyval.node)=(yyvsp[0].node);}
#line 3602 "parser.tab.c"
    break;

  case 148: /* ForStatementNoShortIf: EnhancedForStatementNoShortIf  */
#line 826 "parser.y"
                                                 {(yyval.node)=(yyvsp[0].node);}
#line 3608 "parser.tab.c"
    break;

  case 149: /* BasicForStatement: FOR '(' SingleForInit ';' SingleExpression ';' SingleForUpdate ')' Statement  */
#line 830 "parser.y"
                                                                                     { genNode *n1 = createNode("KEYWORD", (yyvsp[-8].str), {});genNode *n2 = createNode("Separator", (yyvsp[-7].str), {});genNode *n4 = createNode("Separator", (yyvsp[-5].str), {});genNode *n6 = createNode("Separator", (yyvsp[-3].str), {});genNode *n8 = createNode("Separator", (yyvsp[-1].str), {}); (yyval.node)=createNode("BasicForStatement","",{n1,n2,(yyvsp[-6].node),n4,(yyvsp[-4].node),n6,(yyvsp[-2].node),n8,(yyvsp[0].node)}); }
#line 3614 "parser.tab.c"
    break;

  case 150: /* SingleForInit: %empty  */
#line 834 "parser.y"
               {(yyval.node)=createNode("singleForInit","",{});}
#line 3620 "parser.tab.c"
    break;

  case 151: /* SingleForInit: ForInit  */
#line 835 "parser.y"
                           {(yyval.node)=(yyvsp[0].node);}
#line 3626 "parser.tab.c"
    break;

  case 152: /* SingleExpression: %empty  */
#line 839 "parser.y"
                {(yyval.node)=createNode("singleExpression","",{});}
#line 3632 "parser.tab.c"
    break;

  case 153: /* SingleExpression: Expression  */
#line 840 "parser.y"
                           {(yyval.node)=(yyvsp[0].node);}
#line 3638 "parser.tab.c"
    break;

  case 154: /* SingleForUpdate: %empty  */
#line 844 "parser.y"
                {(yyval.node)=createNode("singleForUpdate","",{});}
#line 3644 "parser.tab.c"
    break;

  case 155: /* SingleForUpdate: ForUpdate  */
#line 845 "parser.y"
                           {(yyval.node)=(yyvsp[0].node);}
#line 3650 "parser.tab.c"
    break;

  case 156: /* BasicForStatementNoShortIf: FOR '(' SingleForInit ';' SingleExpression ';' SingleForUpdate ')' StatementNoShortIf  */
#line 849 "parser.y"
                                                                                               {genNode *n1 = createNode("KEYWORD", (yyvsp[-8].str), {});genNode *n2 = createNode("Separator", (yyvsp[-7].str), {});genNode *n4 = createNode("Separator", (yyvsp[-5].str), {});genNode *n6 = createNode("Separator", (yyvsp[-3].str), {});genNode *n8 = createNode("Separator", (yyvsp[-1].str), {});  (yyval.node)=createNode("BasicForStatementNoShortIf","",{n1,n2,(yyvsp[-6].node),n4,(yyvsp[-4].node),n6,(yyvsp[-2].node),n8,(yyvsp[0].node)}); }
#line 3656 "parser.tab.c"
    break;

  case 157: /* ForInit: StatementExpressionList  */
#line 853 "parser.y"
                                       {(yyval.node)=(yyvsp[0].node);}
#line 3662 "parser.tab.c"
    break;

  case 158: /* ForInit: LocalVariableDeclaration  */
#line 854 "parser.y"
                                       {(yyval.node)=(yyvsp[0].node);}
#line 3668 "parser.tab.c"
    break;

  case 159: /* ForUpdate: StatementExpressionList  */
#line 858 "parser.y"
                                       {(yyval.node)=(yyvsp[0].node);}
#line 3674 "parser.tab.c"
    break;

  case 160: /* StatementExpressionList: StatementExpression  */
#line 862 "parser.y"
                                                        {(yyval.node)=createNode("StatementExpressionList", "", {(yyvsp[0].node)});}
#line 3680 "parser.tab.c"
    break;

  case 161: /* StatementExpressionList: StatementExpressionList ',' StatementExpression  */
#line 863 "parser.y"
                                                        {(yyval.node) = (yyvsp[-2].node); (yyval.node)->children.push_back((yyvsp[0].node));genNode *temp1=createNode("Separator",(yyvsp[-1].str),{});(yyval.node)->children.push_back(temp1);}
#line 3686 "parser.tab.c"
    break;

  case 162: /* EnhancedForStatement: FOR '(' Type VariableDeclaratorId ':' Expression ')' Statement  */
#line 867 "parser.y"
                                                                              { genNode *n1 = createNode("KEYWORD", (yyvsp[-7].str), {});genNode *n2 = createNode("Separator", (yyvsp[-6].str), {});genNode *n5 = createNode("Separator", (yyvsp[-3].str), {});genNode *n7 = createNode("Separator", (yyvsp[-1].str), {}); (yyval.node)=createNode("EnhancedForStatement","",{n1,n2,(yyvsp[-5].node),(yyvsp[-4].node),n5,(yyvsp[-2].node),n7,(yyvsp[0].node)}); }
#line 3692 "parser.tab.c"
    break;

  case 163: /* EnhancedForStatementNoShortIf: FOR '(' Type VariableDeclaratorId ':' Expression ')' StatementNoShortIf  */
#line 871 "parser.y"
                                                                                    { genNode *n1 = createNode("KEYWORD", (yyvsp[-7].str), {});genNode *n2 = createNode("Separator", (yyvsp[-6].str), {});genNode *n5 = createNode("Separator", (yyvsp[-3].str), {});genNode *n7 = createNode("Separator", (yyvsp[-1].str), {});  (yyval.node)=createNode("EnhancedForStatementNoShortIf","",{n1,n2,(yyvsp[-5].node),(yyvsp[-4].node),n5,(yyvsp[-2].node),n7,(yyvsp[0].node)});}
#line 3698 "parser.tab.c"
    break;

  case 164: /* BreakStatement: BREAK IDENTIFIER ';'  */
#line 875 "parser.y"
                                  {genNode* n1=createNode("Keyword",(yyvsp[-2].str),{});genNode* n2=createNode("Identifier",(yyvsp[-1].str),{});genNode* n3=createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("BreakStatement","",{n1,n2,n3});}
#line 3704 "parser.tab.c"
    break;

  case 165: /* BreakStatement: BREAK ';'  */
#line 876 "parser.y"
                                  {genNode* n1=createNode("Keyword",(yyvsp[-1].str),{}); genNode* n2=createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("BreakStatement","",{n1,n2});}
#line 3710 "parser.tab.c"
    break;

  case 166: /* ContinueStatement: CONTINUE IDENTIFIER ';'  */
#line 880 "parser.y"
                                  {genNode* n1=createNode("Keyword",(yyvsp[-2].str),{});genNode* n2=createNode("Identifier",(yyvsp[-1].str),{});genNode* n3=createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("ContinueStatement","",{n1,n2,n3});}
#line 3716 "parser.tab.c"
    break;

  case 167: /* ContinueStatement: CONTINUE ';'  */
#line 881 "parser.y"
                                  {genNode* n1=createNode("Keyword",(yyvsp[-1].str),{}); genNode* n2=createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("ContinueStatement","",{n1,n2});}
#line 3722 "parser.tab.c"
    break;

  case 168: /* ReturnStatement: RETURN Expression ';'  */
#line 885 "parser.y"
                                  {genNode* n1=createNode("Keyword",(yyvsp[-2].str),{});genNode* n3=createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("BreakStatement","",{n1,(yyvsp[-1].node),n3});}
#line 3728 "parser.tab.c"
    break;

  case 169: /* ReturnStatement: RETURN ';'  */
#line 886 "parser.y"
                                  {genNode* n1=createNode("Keyword",(yyvsp[-1].str),{}); genNode* n2=createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("BreakStatement","",{n1,n2});}
#line 3734 "parser.tab.c"
    break;

  case 170: /* Primary: PrimaryNoNewArray  */
#line 890 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 3740 "parser.tab.c"
    break;

  case 171: /* Primary: ArrayCreationExpression  */
#line 891 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 3746 "parser.tab.c"
    break;

  case 172: /* PrimaryNoNewArray: Literal  */
#line 895 "parser.y"
                                                                                   {(yyval.node)=(yyvsp[0].node);}
#line 3752 "parser.tab.c"
    break;

  case 173: /* PrimaryNoNewArray: ClassLiteral  */
#line 896 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 3758 "parser.tab.c"
    break;

  case 174: /* PrimaryNoNewArray: THIS  */
#line 897 "parser.y"
                                                                                    {(yyval.node)=createNode("KEYWORD",(yyvsp[0].str),{});}
#line 3764 "parser.tab.c"
    break;

  case 175: /* PrimaryNoNewArray: TypeName '.' THIS  */
#line 898 "parser.y"
                                                                                    {genNode *temp = createNode("KEYWORD",(yyvsp[0].str),{});genNode *temp1 = createNode("Separator",(yyvsp[-1].str),{} ); (yyval.node)=createNode("PRIMARYNONEWARRAY","",{(yyvsp[-2].node),temp,temp1});}
#line 3770 "parser.tab.c"
    break;

  case 176: /* PrimaryNoNewArray: '(' Expression ')'  */
#line 899 "parser.y"
                                                                                    {//genNode *temp = createNode("Separator",$3,{});genNode *temp1 = createNode("Separator",$1,{} ); $$=createNode("PRIMARYNONEWARRAY","",{$2,temp,temp1});
                                                                                       (yyval.node) = (yyvsp[-1].node); }
#line 3777 "parser.tab.c"
    break;

  case 177: /* PrimaryNoNewArray: ClassInstanceCreationExpression  */
#line 901 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 3783 "parser.tab.c"
    break;

  case 178: /* PrimaryNoNewArray: FieldAccess  */
#line 902 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 3789 "parser.tab.c"
    break;

  case 179: /* PrimaryNoNewArray: ArrayAccess  */
#line 903 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 3795 "parser.tab.c"
    break;

  case 180: /* PrimaryNoNewArray: MethodInvocation  */
#line 904 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 3801 "parser.tab.c"
    break;

  case 181: /* PrimaryNoNewArray: MethodReference  */
#line 905 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 3807 "parser.tab.c"
    break;

  case 182: /* Literal: BooleanLiteral  */
#line 909 "parser.y"
                      {(yyval.node)=(yyvsp[0].node);}
#line 3813 "parser.tab.c"
    break;

  case 183: /* Literal: IntegerLiteral  */
#line 910 "parser.y"
                      {(yyval.node)=(yyvsp[0].node);}
#line 3819 "parser.tab.c"
    break;

  case 184: /* Literal: CharacterLiteral  */
#line 911 "parser.y"
                       {(yyval.node)=(yyvsp[0].node);}
#line 3825 "parser.tab.c"
    break;

  case 185: /* Literal: StringLiteral  */
#line 912 "parser.y"
                    {(yyval.node)=(yyvsp[0].node);}
#line 3831 "parser.tab.c"
    break;

  case 186: /* Literal: NullLiteral  */
#line 913 "parser.y"
                   {(yyval.node)=(yyvsp[0].node);}
#line 3837 "parser.tab.c"
    break;

  case 187: /* BooleanLiteral: TRUELITERAL  */
#line 917 "parser.y"
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
#line 3852 "parser.tab.c"
    break;

  case 188: /* BooleanLiteral: FALSELITERAL  */
#line 927 "parser.y"
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
#line 3867 "parser.tab.c"
    break;

  case 189: /* IntegerLiteral: INTEGERLITERAL  */
#line 940 "parser.y"
                        {
			genNode* n1 = new genNode();
			(yyval.node) = n1;
			(yyval.node)->type = "int";
			(yyval.node)->place = to_string((yyvsp[0].ival));
			(yyval.node)->isLit = true;
            (yyval.node)->label = "IntegerLiteral";
            (yyval.node)->value = to_string((yyvsp[0].ival));
		}
#line 3881 "parser.tab.c"
    break;

  case 190: /* CharacterLiteral: CHARACTERLITERAL  */
#line 952 "parser.y"
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
#line 3896 "parser.tab.c"
    break;

  case 191: /* StringLiteral: STRINGLITERAL  */
#line 965 "parser.y"
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
#line 3911 "parser.tab.c"
    break;

  case 192: /* NullLiteral: NULLLITERAL  */
#line 978 "parser.y"
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
#line 3926 "parser.tab.c"
    break;

  case 193: /* ClassLiteral: TypeName Dims '.' CLASS  */
#line 993 "parser.y"
                                                                                    {genNode *temp = createNode("KEYWORD",(yyvsp[0].str),{});genNode *temp1 = createNode("Separator",(yyvsp[-1].str),{});
                                                                                      (yyval.node) = createNode("CLASS_LITERAL","",{(yyvsp[-3].node),(yyvsp[-2].node),temp,temp1});}
#line 3933 "parser.tab.c"
    break;

  case 194: /* ClassLiteral: TypeName '.' CLASS  */
#line 995 "parser.y"
                                                                                    {genNode *temp = createNode("KEYWORD",(yyvsp[0].str),{});genNode *temp1 = createNode("Separator",(yyvsp[-1].str),{});
                                                                                     (yyval.node) = createNode("CLASS_LITERAL","",{(yyvsp[-2].node),temp,temp1});}
#line 3940 "parser.tab.c"
    break;

  case 195: /* ClassLiteral: PrimitiveType Dims '.' CLASS  */
#line 997 "parser.y"
                                                                                    {genNode *temp = createNode("KEYWORD",(yyvsp[0].str),{});genNode *temp1 = createNode("Separator",(yyvsp[-1].str),{});
                                                                                     (yyval.node) = createNode("CLASS_LITERAL","",{(yyvsp[-3].node),(yyvsp[-2].node),temp,temp1});}
#line 3947 "parser.tab.c"
    break;

  case 196: /* ClassLiteral: PrimitiveType '.' CLASS  */
#line 999 "parser.y"
                                                                                {genNode *temp = createNode("KEYWORD",(yyvsp[0].str),{});genNode *temp1 = createNode("Separator",(yyvsp[-1].str),{});
                                                                                     (yyval.node) = createNode("CLASS_LITERAL","",{(yyvsp[-2].node),temp,temp1});}
#line 3954 "parser.tab.c"
    break;

  case 197: /* ClassLiteral: VOID '.' CLASS  */
#line 1001 "parser.y"
                                                                                    {genNode *temp = createNode("KEYWORD",(yyvsp[0].str),{});genNode *temp2= createNode("Separator",(yyvsp[-1].str),{});
                                                                                     genNode *temp1 = createNode("KEYWORD",(yyvsp[-2].str),{});
                                                                                     (yyval.node) = createNode("CLASS_LITERAL","",{temp1,temp,temp2});}
#line 3962 "parser.tab.c"
    break;

  case 198: /* ClassInstanceCreationExpression: UnqualifiedClassInstanceCreationExpression  */
#line 1007 "parser.y"
                                                                                         {(yyval.node)=(yyvsp[0].node);}
#line 3968 "parser.tab.c"
    break;

  case 199: /* ClassInstanceCreationExpression: TypeName '.' UnqualifiedClassInstanceCreationExpression  */
#line 1008 "parser.y"
                                                                                       {genNode *temp1 = createNode("Separator",(yyvsp[-1].str),{});(yyval.node)=createNode("CLASS_INSTANCE","",{(yyvsp[-2].node),(yyvsp[0].node),temp1});}
#line 3974 "parser.tab.c"
    break;

  case 200: /* ClassInstanceCreationExpression: Primary '.' UnqualifiedClassInstanceCreationExpression  */
#line 1009 "parser.y"
                                                                                         {genNode *temp1 = createNode("Separator",(yyvsp[-1].str),{});(yyval.node)=createNode("CLASS_INSTANCE","",{(yyvsp[-2].node),(yyvsp[0].node),temp1});}
#line 3980 "parser.tab.c"
    break;

  case 201: /* UnqualifiedClassInstanceCreationExpression: NEW TypeName '(' ArgumentList ')'  */
#line 1013 "parser.y"
                                                                                        {genNode *temp = createNode("KEYWORD",(yyvsp[-4].str),{});
                                                                                        genNode *temp1 = createNode("Separator",(yyvsp[-2].str),{});genNode *temp2 = createNode("Separator",(yyvsp[0].str),{});(yyval.node) = createNode("unqualifiedClassInstance","",{temp,(yyvsp[-3].node),(yyvsp[-1].node),temp1,temp2});}
#line 3987 "parser.tab.c"
    break;

  case 202: /* UnqualifiedClassInstanceCreationExpression: NEW TypeName '(' ArgumentList ')' ClassBody  */
#line 1015 "parser.y"
                                                                                        {genNode *temp = createNode("KEYWORD",(yyvsp[-5].str),{});genNode *temp1 = createNode("Separator",(yyvsp[-3].str),{});genNode *temp2= createNode("Separator",(yyvsp[-1].str),{});
                                                                                        (yyval.node) = createNode("unqualifiedClassInstance","",{temp,(yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node),temp1,temp2});}
#line 3994 "parser.tab.c"
    break;

  case 203: /* UnqualifiedClassInstanceCreationExpression: NEW TypeName '(' ')' ClassBody  */
#line 1017 "parser.y"
                                                                                        {genNode *temp = createNode("KEYWORD",(yyvsp[-4].str),{});genNode *temp1 = createNode("Separator",(yyvsp[-2].str),{});genNode *temp2 = createNode("Separator",(yyvsp[-1].str),{});
                            
                                                                                        (yyval.node) = createNode("unqualifiedClassInstance","",{temp,(yyvsp[-3].node),temp1,(yyvsp[0].node),temp2});}
#line 4002 "parser.tab.c"
    break;

  case 204: /* UnqualifiedClassInstanceCreationExpression: NEW TypeName '(' ')'  */
#line 1020 "parser.y"
                                                                                        {genNode *temp = createNode("KEYWORD",(yyvsp[-3].str),{});
                                                                                        genNode *temp1 = createNode("Separator",(yyvsp[-1].str),{});genNode *temp2 = createNode("Separator",(yyvsp[0].str),{});
                                                                                        (yyval.node) = createNode("unqualifiedClassInstance","",{temp,(yyvsp[-2].node),temp1,temp2});}
#line 4010 "parser.tab.c"
    break;

  case 205: /* FieldAccess: Primary '.' IDENTIFIER  */
#line 1026 "parser.y"
                                                                                       {genNode *temp = createNode("Identifier",(yyvsp[0].str),{});genNode *temp1 = createNode("Separator",(yyvsp[-1].str),{});
                                                                                        (yyval.node) = createNode("FIELDACC","",{(yyvsp[-2].node),temp,temp1});}
#line 4017 "parser.tab.c"
    break;

  case 206: /* ArrayAccess: TypeName '[' Expression ']'  */
#line 1031 "parser.y"
                                                           {genNode *n2 = createNode("Separator",(yyvsp[-2].str),{});genNode *n4 = createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("ARRAY","",{(yyvsp[-3].node),n2,(yyvsp[-1].node),n4});}
#line 4023 "parser.tab.c"
    break;

  case 207: /* ArrayAccess: PrimaryNoNewArray '[' Expression ']'  */
#line 1032 "parser.y"
                                                                                       {genNode *n2 = createNode("Separator",(yyvsp[-2].str),{});genNode *n4 = createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("ARRAY","",{(yyvsp[-3].node),n2,(yyvsp[-1].node),n4});}
#line 4029 "parser.tab.c"
    break;

  case 208: /* MethodInvocation: IDENTIFIER '(' ArgumentList ')'  */
#line 1036 "parser.y"
                                                                                       {genNode *temp = createNode("Identifier",(yyvsp[-3].str),{});genNode *temp1 = createNode("Separator",(yyvsp[-2].str),{});genNode *temp2 = createNode("Separator",(yyvsp[0].str),{});
                                                                                        (yyval.node)=createNode("methodInvocation","",{temp,temp1,(yyvsp[-1].node),temp2});}
#line 4036 "parser.tab.c"
    break;

  case 209: /* MethodInvocation: IDENTIFIER '(' ')'  */
#line 1038 "parser.y"
                                                                                       {genNode *temp = createNode("Identifier",(yyvsp[-2].str),{});genNode *temp2 = createNode("Separator",(yyvsp[-1].str),{});genNode *temp3 = createNode("Separator",(yyvsp[0].str),{});
                                                                                       
                                                                                        (yyval.node)=createNode("methodInvocation","",{temp,temp2,temp3});}
#line 4044 "parser.tab.c"
    break;

  case 210: /* MethodInvocation: TypeName '.' IDENTIFIER '(' ArgumentList ')'  */
#line 1042 "parser.y"
                                                                                       {genNode *temp3 = createNode("Identifier",(yyvsp[-3].str),{});genNode *temp2 = createNode("Separator",(yyvsp[-4].str),{});genNode *temp4 = createNode("Separator",(yyvsp[-2].str),{});genNode *temp6 = createNode("Separator",(yyvsp[0].str),{});
                                                                                        (yyval.node)=createNode("methodInvocation","",{(yyvsp[-5].node),temp2,temp3,temp4,(yyvsp[-1].node),temp6});}
#line 4051 "parser.tab.c"
    break;

  case 211: /* MethodInvocation: TypeName '.' IDENTIFIER '(' ')'  */
#line 1045 "parser.y"
                                                                                        {genNode *temp3 = createNode("Identifier",(yyvsp[-2].str),{});genNode *temp2= createNode("Separator",(yyvsp[-3].str),{});genNode *temp4= createNode("Separator",(yyvsp[-1].str),{});genNode *temp5 = createNode("Separator",(yyvsp[0].str),{});
                                                                                        (yyval.node)=createNode("methodInvocation","",{(yyvsp[-4].node),temp2,temp3,temp4,temp5});}
#line 4058 "parser.tab.c"
    break;

  case 212: /* MethodInvocation: Primary '.' IDENTIFIER '(' ArgumentList ')'  */
#line 1047 "parser.y"
                                                                                         {genNode *temp3 = createNode("Identifier",(yyvsp[-3].str),{});genNode *temp2 = createNode("Separator",(yyvsp[-4].str),{});genNode *temp4 = createNode("Separator",(yyvsp[-2].str),{});genNode *temp6 = createNode("Separator",(yyvsp[0].str),{});
                                                                                        (yyval.node)=createNode("methodInvocation","",{(yyvsp[-5].node),temp2,temp3,temp4,(yyvsp[-1].node),temp6});}
#line 4065 "parser.tab.c"
    break;

  case 213: /* MethodInvocation: Primary '.' IDENTIFIER '(' ')'  */
#line 1049 "parser.y"
                                                                                        {genNode *temp3 = createNode("Identifier",(yyvsp[-2].str),{});genNode *temp2= createNode("Separator",(yyvsp[-3].str),{});genNode *temp4= createNode("Separator",(yyvsp[-1].str),{});genNode *temp5 = createNode("Separator",(yyvsp[0].str),{});
                                                                                        (yyval.node) = createNode("methodInvocation","",{(yyvsp[-4].node),temp2,temp3,temp4,temp5});}
#line 4072 "parser.tab.c"
    break;

  case 214: /* ArgumentList: ArgumentList ',' Expression  */
#line 1054 "parser.y"
                                                                                       {genNode *temp = createNode("Separator",(yyvsp[-1].str),{}); (yyvsp[-2].node)->children.push_back(temp); (yyvsp[-2].node)->children.push_back((yyvsp[0].node));(yyval.node) = (yyvsp[-2].node);}
#line 4078 "parser.tab.c"
    break;

  case 215: /* ArgumentList: Expression  */
#line 1055 "parser.y"
                                                                                       {(yyval.node) = createNode("ARGLIST","", {(yyvsp[0].node)}); }
#line 4084 "parser.tab.c"
    break;

  case 216: /* MethodReference: TypeName PROPORTION IDENTIFIER  */
#line 1059 "parser.y"
                                             {genNode *temp = createNode("Identifier",(yyvsp[0].str),{});genNode *temp1 = createNode("KEYWORD",(yyvsp[-1].str),{});
                                                                                         (yyval.node) = createNode("METHOD_REF","",{(yyvsp[-2].node),temp,temp1});}
#line 4091 "parser.tab.c"
    break;

  case 217: /* MethodReference: ArrayType PROPORTION IDENTIFIER  */
#line 1061 "parser.y"
                                                                                        {genNode *temp = createNode("Identifier",(yyvsp[0].str),{});genNode *temp1 = createNode("KEYWORD",(yyvsp[-1].str),{});
                                                                                         (yyval.node) = createNode("METHOD_REF","",{(yyvsp[-2].node),temp,temp1});}
#line 4098 "parser.tab.c"
    break;

  case 218: /* MethodReference: Primary PROPORTION IDENTIFIER  */
#line 1063 "parser.y"
                                                                                        {genNode *temp = createNode("Identifier",(yyvsp[0].str),{});genNode *temp1 = createNode("KEYWORD",(yyvsp[-1].str),{});
                                                                                         (yyval.node) = createNode("METHOD_REF","",{(yyvsp[-2].node),temp,temp1});}
#line 4105 "parser.tab.c"
    break;

  case 219: /* MethodReference: TypeName PROPORTION NEW  */
#line 1065 "parser.y"
                                                                  {genNode *temp = createNode("KEYWORD",(yyvsp[0].str),{});genNode *temp1 = createNode("KEYWORD",(yyvsp[-1].str),{});
                                                                                         (yyval.node) = createNode("METHOD_REF","",{(yyvsp[-2].node),temp,temp1});}
#line 4112 "parser.tab.c"
    break;

  case 220: /* MethodReference: ArrayType PROPORTION NEW  */
#line 1067 "parser.y"
                                                                                        {genNode *temp = createNode("KEYWORD",(yyvsp[0].str),{});genNode *temp1 = createNode("KEYWORD",(yyvsp[-1].str),{});
                                                                                         (yyval.node) = createNode("METHOD_REF","",{(yyvsp[-2].node),temp,temp1});}
#line 4119 "parser.tab.c"
    break;

  case 221: /* ArrayCreationExpression: NEW PrimitiveType DimExprs Dims  */
#line 1072 "parser.y"
                                                                                        {genNode *temp = createNode("KEYWORD",(yyvsp[-3].str),{});
                                                                                         (yyval.node) = createNode("ARRAY_CREATION","",{temp,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)});}
#line 4126 "parser.tab.c"
    break;

  case 222: /* ArrayCreationExpression: NEW PrimitiveType DimExprs  */
#line 1074 "parser.y"
                                                                                        {genNode *temp = createNode("KEYWORD",(yyvsp[-2].str),{});
                                                                                         (yyval.node) = createNode("ARRAY_CREATION","",{temp,(yyvsp[-1].node),(yyvsp[0].node)});}
#line 4133 "parser.tab.c"
    break;

  case 223: /* ArrayCreationExpression: NEW TypeName DimExprs Dims  */
#line 1076 "parser.y"
                                                                 {genNode *temp = createNode("KEYWORD",(yyvsp[-3].str),{});
                                                                                         (yyval.node) = createNode("ARRAY_CREATION","",{temp,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)});}
#line 4140 "parser.tab.c"
    break;

  case 224: /* ArrayCreationExpression: NEW TypeName DimExprs  */
#line 1078 "parser.y"
                                                                 {genNode *temp = createNode("KEYWORD",(yyvsp[-2].str),{});
                                                                                         (yyval.node) = createNode("ARRAY_CREATION","",{temp,(yyvsp[-1].node),(yyvsp[0].node)});}
#line 4147 "parser.tab.c"
    break;

  case 225: /* ArrayCreationExpression: NEW PrimitiveType Dims ArrayInitialize  */
#line 1080 "parser.y"
                                                                                       {genNode *temp = createNode("KEYWORD",(yyvsp[-3].str),{});
                                                                                         (yyval.node) = createNode("ARRAY_CREATION","",{temp,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)});}
#line 4154 "parser.tab.c"
    break;

  case 226: /* ArrayCreationExpression: NEW TypeName Dims ArrayInitialize  */
#line 1082 "parser.y"
                                                                {genNode *temp = createNode("KEYWORD",(yyvsp[-3].str),{});
                                                                                         (yyval.node) = createNode("ARRAY_CREATION","",{temp,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)});}
#line 4161 "parser.tab.c"
    break;

  case 227: /* DimExprs: DimExpr  */
#line 1087 "parser.y"
                                                                                        {(yyval.node) = createNode("DIMEXPR","", {(yyvsp[0].node)}); }
#line 4167 "parser.tab.c"
    break;

  case 228: /* DimExprs: DimExprs DimExpr  */
#line 1088 "parser.y"
                                                                                        {(yyvsp[-1].node)->children.push_back((yyvsp[0].node)); (yyval.node) = (yyvsp[-1].node); }
#line 4173 "parser.tab.c"
    break;

  case 229: /* DimExpr: '[' Expression ']'  */
#line 1092 "parser.y"
                                                                                        {genNode *temp2=createNode("Separator",(yyvsp[-2].str),{});genNode *temp1=createNode("Separator",(yyvsp[0].str),{});(yyval.node) = createNode("DimExpr","", {temp1,temp2,(yyvsp[-1].node)});}
#line 4179 "parser.tab.c"
    break;

  case 230: /* Expression: AssignmentExpression  */
#line 1096 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4185 "parser.tab.c"
    break;

  case 231: /* AssignmentExpression: ConditionalExpression  */
#line 1100 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4191 "parser.tab.c"
    break;

  case 232: /* AssignmentExpression: Assignment  */
#line 1101 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4197 "parser.tab.c"
    break;

  case 233: /* Assignment: LeftHandSide AssignmentOperator Expression  */
#line 1105 "parser.y"
                                                                                        {(yyvsp[-1].node)->children={(yyvsp[-2].node),(yyvsp[0].node)};(yyval.node)=(yyvsp[-1].node);}
#line 4203 "parser.tab.c"
    break;

  case 234: /* Assignment: TypeName AssignmentOperator Expression  */
#line 1106 "parser.y"
                                                            {(yyvsp[-1].node)->children={(yyvsp[-2].node),(yyvsp[0].node)};(yyval.node)=(yyvsp[-1].node);}
#line 4209 "parser.tab.c"
    break;

  case 235: /* LeftHandSide: FieldAccess  */
#line 1110 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4215 "parser.tab.c"
    break;

  case 236: /* LeftHandSide: ArrayAccess  */
#line 1111 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4221 "parser.tab.c"
    break;

  case 237: /* AssignmentOperator: '='  */
#line 1115 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[0].str),{});}
#line 4227 "parser.tab.c"
    break;

  case 238: /* AssignmentOperator: MUL_ASSIGN  */
#line 1116 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[0].str),{});}
#line 4233 "parser.tab.c"
    break;

  case 239: /* AssignmentOperator: DIV_ASSIGN  */
#line 1117 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[0].str),{});}
#line 4239 "parser.tab.c"
    break;

  case 240: /* AssignmentOperator: MOD_ASSIGN  */
#line 1118 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[0].str),{});}
#line 4245 "parser.tab.c"
    break;

  case 241: /* AssignmentOperator: ADD_ASSIGN  */
#line 1119 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[0].str),{});}
#line 4251 "parser.tab.c"
    break;

  case 242: /* AssignmentOperator: SUB_ASSIGN  */
#line 1120 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[0].str),{});}
#line 4257 "parser.tab.c"
    break;

  case 243: /* AssignmentOperator: LEFT_ASSIGN  */
#line 1121 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[0].str),{});}
#line 4263 "parser.tab.c"
    break;

  case 244: /* AssignmentOperator: RIGHT_ASSIGN  */
#line 1122 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[0].str),{});}
#line 4269 "parser.tab.c"
    break;

  case 245: /* AssignmentOperator: UNSIGNED_RIGHT_ASSIGN  */
#line 1123 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[0].str),{});}
#line 4275 "parser.tab.c"
    break;

  case 246: /* AssignmentOperator: AND_ASSIGN  */
#line 1124 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[0].str),{});}
#line 4281 "parser.tab.c"
    break;

  case 247: /* AssignmentOperator: XOR_ASSIGN  */
#line 1125 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[0].str),{});}
#line 4287 "parser.tab.c"
    break;

  case 248: /* AssignmentOperator: OR_ASSIGN  */
#line 1126 "parser.y"
                                                                                        {(yyval.node)=createNode("operator",(yyvsp[0].str),{});}
#line 4293 "parser.tab.c"
    break;

  case 249: /* ConditionalExpression: ConditionalOrExpression  */
#line 1130 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4299 "parser.tab.c"
    break;

  case 250: /* ConditionalExpression: ConditionalOrExpression '?' Expression ':' ConditionalExpression  */
#line 1131 "parser.y"
                                                                                        {
    	genNode* newNode = new genNode();
		(yyval.node) = newNode;
		getCECode((yyval.node), (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 4309 "parser.tab.c"
    break;

  case 251: /* ConditionalOrExpression: ConditionalAndExpression  */
#line 1139 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4315 "parser.tab.c"
    break;

  case 252: /* ConditionalOrExpression: ConditionalOrExpression OR_OP ConditionalAndExpression  */
#line 1140 "parser.y"
                                                                                        {
    	genNode* n= new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "||", (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 4327 "parser.tab.c"
    break;

  case 253: /* ConditionalAndExpression: InclusiveOrExpression  */
#line 1150 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4333 "parser.tab.c"
    break;

  case 254: /* ConditionalAndExpression: ConditionalAndExpression AND_OP InclusiveOrExpression  */
#line 1151 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "&&", (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 4345 "parser.tab.c"
    break;

  case 255: /* InclusiveOrExpression: ExclusiveOrExpression  */
#line 1161 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4351 "parser.tab.c"
    break;

  case 256: /* InclusiveOrExpression: InclusiveOrExpression '|' ExclusiveOrExpression  */
#line 1162 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "|", (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 4363 "parser.tab.c"
    break;

  case 257: /* ExclusiveOrExpression: AndExpression  */
#line 1172 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4369 "parser.tab.c"
    break;

  case 258: /* ExclusiveOrExpression: ExclusiveOrExpression '^' AndExpression  */
#line 1173 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "^", (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 4381 "parser.tab.c"
    break;

  case 259: /* AndExpression: EqualityExpression  */
#line 1183 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4387 "parser.tab.c"
    break;

  case 260: /* AndExpression: AndExpression '&' EqualityExpression  */
#line 1184 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "&", (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 4399 "parser.tab.c"
    break;

  case 261: /* EqualityExpression: RelationalExpression  */
#line 1194 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4405 "parser.tab.c"
    break;

  case 262: /* EqualityExpression: EqualityExpression EQ_OP RelationalExpression  */
#line 1195 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "==", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 4417 "parser.tab.c"
    break;

  case 263: /* EqualityExpression: EqualityExpression NE_OP RelationalExpression  */
#line 1202 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "!=", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 4429 "parser.tab.c"
    break;

  case 264: /* RelationalExpression: ShiftExpression  */
#line 1212 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4435 "parser.tab.c"
    break;

  case 265: /* RelationalExpression: RelationalExpression '<' ShiftExpression  */
#line 1213 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "<", (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 4447 "parser.tab.c"
    break;

  case 266: /* RelationalExpression: RelationalExpression '>' ShiftExpression  */
#line 1220 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), ">", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 4459 "parser.tab.c"
    break;

  case 267: /* RelationalExpression: RelationalExpression LE_OP ShiftExpression  */
#line 1227 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "<=", (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 4471 "parser.tab.c"
    break;

  case 268: /* RelationalExpression: RelationalExpression GE_OP ShiftExpression  */
#line 1234 "parser.y"
                                                                                        {
     	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), ">=", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 4483 "parser.tab.c"
    break;

  case 269: /* ShiftExpression: AdditiveExpression  */
#line 1245 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4489 "parser.tab.c"
    break;

  case 270: /* ShiftExpression: ShiftExpression LEFT_OP AdditiveExpression  */
#line 1246 "parser.y"
                                                                                        {
        genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "<<", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 4501 "parser.tab.c"
    break;

  case 271: /* ShiftExpression: ShiftExpression RIGHT_OP AdditiveExpression  */
#line 1253 "parser.y"
                                                                                        {
        genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), ">>", (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 4513 "parser.tab.c"
    break;

  case 272: /* AdditiveExpression: MultiplicativeExpression  */
#line 1264 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4519 "parser.tab.c"
    break;

  case 273: /* AdditiveExpression: AdditiveExpression '+' MultiplicativeExpression  */
#line 1265 "parser.y"
                                                                                        {
        genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "+", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 4531 "parser.tab.c"
    break;

  case 274: /* AdditiveExpression: AdditiveExpression '-' MultiplicativeExpression  */
#line 1272 "parser.y"
                                                                                        {
        genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "-", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 4543 "parser.tab.c"
    break;

  case 275: /* MultiplicativeExpression: UnaryExpression  */
#line 1282 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4549 "parser.tab.c"
    break;

  case 276: /* MultiplicativeExpression: MultiplicativeExpression '*' UnaryExpression  */
#line 1283 "parser.y"
                                                                                        {
        genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "*", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 4561 "parser.tab.c"
    break;

  case 277: /* MultiplicativeExpression: MultiplicativeExpression '/' UnaryExpression  */
#line 1290 "parser.y"
                                                                                        {
        genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "/", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 4573 "parser.tab.c"
    break;

  case 278: /* MultiplicativeExpression: MultiplicativeExpression '%' UnaryExpression  */
#line 1297 "parser.y"
                                                                                        {
        genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "%", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 4585 "parser.tab.c"
    break;

  case 279: /* UnaryExpression: PreIncrementExpression  */
#line 1307 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4591 "parser.tab.c"
    break;

  case 280: /* UnaryExpression: PreDecrementExpression  */
#line 1308 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4597 "parser.tab.c"
    break;

  case 281: /* UnaryExpression: '+' UnaryExpression  */
#line 1309 "parser.y"
                                                                                        {
       (yyval.node) = (yyvsp[0].node);
   }
#line 4605 "parser.tab.c"
    break;

  case 282: /* UnaryExpression: '-' UnaryExpression  */
#line 1312 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		genNode* zeroNode = new genNode();
		zeroNode->isLit = true; zeroNode->place = "0"; zeroNode->type = "int";
		gen2OpCode((yyval.node), "-", zeroNode, (yyvsp[0].node), line);
   }
#line 4617 "parser.tab.c"
    break;

  case 283: /* UnaryExpression: UnaryExpressionNotPlusMinus  */
#line 1319 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4623 "parser.tab.c"
    break;

  case 284: /* PreIncrementExpression: INC_OP UnaryExpression  */
#line 1323 "parser.y"
                                                                                        {
    	(yyval.node) = (yyvsp[0].node);
		getPreUnaryOpCode("++", (yyval.node), (yyvsp[0].node), line);
   }
#line 4632 "parser.tab.c"
    break;

  case 285: /* PreDecrementExpression: DEC_OP UnaryExpression  */
#line 1330 "parser.y"
                                                                                        {
    	(yyval.node) = (yyvsp[0].node);
		getPreUnaryOpCode("--", (yyval.node), (yyvsp[0].node), line);
   }
#line 4641 "parser.tab.c"
    break;

  case 286: /* UnaryExpressionNotPlusMinus: PostfixExpression  */
#line 1337 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4647 "parser.tab.c"
    break;

  case 287: /* UnaryExpressionNotPlusMinus: '~' UnaryExpression  */
#line 1338 "parser.y"
                                                                                        {
   }
#line 4654 "parser.tab.c"
    break;

  case 288: /* UnaryExpressionNotPlusMinus: '!' UnaryExpression  */
#line 1340 "parser.y"
                                                                                        {

   }
#line 4662 "parser.tab.c"
    break;

  case 289: /* UnaryExpressionNotPlusMinus: CastExpression  */
#line 1343 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4668 "parser.tab.c"
    break;

  case 290: /* PostfixExpression: Primary  */
#line 1347 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4674 "parser.tab.c"
    break;

  case 291: /* PostfixExpression: TypeName  */
#line 1348 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4680 "parser.tab.c"
    break;

  case 292: /* PostfixExpression: PostIncrementExpression  */
#line 1349 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4686 "parser.tab.c"
    break;

  case 293: /* PostfixExpression: PostDecrementExpression  */
#line 1350 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4692 "parser.tab.c"
    break;

  case 294: /* PostIncrementExpression: PostfixExpression INC_OP  */
#line 1354 "parser.y"
                                                                                        {
        // $$ = $1;
		// getPreUnaryOpCode("--", $$, $2, line);
   }
#line 4701 "parser.tab.c"
    break;

  case 295: /* PostDecrementExpression: PostfixExpression DEC_OP  */
#line 1361 "parser.y"
                                                                                        {
    // genNode * temp = createNode("operator",$2,{});
    //                                                                                      $$=createNode("unaryOperator","",{$1,temp});
   }
#line 4710 "parser.tab.c"
    break;

  case 296: /* CastExpression: '(' PrimitiveType ')' UnaryExpression  */
#line 1368 "parser.y"
                                                                                        {

   }
#line 4718 "parser.tab.c"
    break;


#line 4722 "parser.tab.c"

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

#line 1376 "parser.y"


int main (void) {
    yyparse();

    // generateDotFile();
    cout<< "\n\n\n";
    ST->PrintTable(ST->baseEnv);
    

    return 1;
}

void yyerror (const char *str) {cerr<<"Line "<<line<<": "<<str<<endl;}
