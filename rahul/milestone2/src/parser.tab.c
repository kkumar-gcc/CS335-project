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
  YYSYMBOL_ClassBody = 107,                /* ClassBody  */
  YYSYMBOL_MULTI_ClassBodyDeclaration = 108, /* MULTI_ClassBodyDeclaration  */
  YYSYMBOL_ClassBodyDeclaration = 109,     /* ClassBodyDeclaration  */
  YYSYMBOL_ClassMemberDeclaration = 110,   /* ClassMemberDeclaration  */
  YYSYMBOL_FieldDeclaration = 111,         /* FieldDeclaration  */
  YYSYMBOL_MULTI_ClassModifier = 112,      /* MULTI_ClassModifier  */
  YYSYMBOL_ClassModifier = 113,            /* ClassModifier  */
  YYSYMBOL_VariableDeclaratorList = 114,   /* VariableDeclaratorList  */
  YYSYMBOL_VariableDeclarator = 115,       /* VariableDeclarator  */
  YYSYMBOL_VariableDeclaratorId = 116,     /* VariableDeclaratorId  */
  YYSYMBOL_VariableInitializer = 117,      /* VariableInitializer  */
  YYSYMBOL_MethodDeclaration = 118,        /* MethodDeclaration  */
  YYSYMBOL_MethodHeader = 119,             /* MethodHeader  */
  YYSYMBOL_MemberName = 120,               /* MemberName  */
  YYSYMBOL_FormalParameterList = 121,      /* FormalParameterList  */
  YYSYMBOL_FormalParameter = 122,          /* FormalParameter  */
  YYSYMBOL_ReceiverParameter = 123,        /* ReceiverParameter  */
  YYSYMBOL_MethodBody = 124,               /* MethodBody  */
  YYSYMBOL_StaticInitializer = 125,        /* StaticInitializer  */
  YYSYMBOL_ConstructorDeclaration = 126,   /* ConstructorDeclaration  */
  YYSYMBOL_ConstructorDeclarator = 127,    /* ConstructorDeclarator  */
  YYSYMBOL_ConstructorBody = 128,          /* ConstructorBody  */
  YYSYMBOL_ExplicitConstructorInvocation = 129, /* ExplicitConstructorInvocation  */
  YYSYMBOL_SINGLE_ArgumentList = 130,      /* SINGLE_ArgumentList  */
  YYSYMBOL_Block = 131,                    /* Block  */
  YYSYMBOL_BlockStatements = 132,          /* BlockStatements  */
  YYSYMBOL_BlockStatement = 133,           /* BlockStatement  */
  YYSYMBOL_LocalVariableDeclarationStatement = 134, /* LocalVariableDeclarationStatement  */
  YYSYMBOL_LocalVariableDeclaration = 135, /* LocalVariableDeclaration  */
  YYSYMBOL_Statement = 136,                /* Statement  */
  YYSYMBOL_StatementNoShortIf = 137,       /* StatementNoShortIf  */
  YYSYMBOL_StatementWithoutTrailingSubstatement = 138, /* StatementWithoutTrailingSubstatement  */
  YYSYMBOL_EmptyStatement = 139,           /* EmptyStatement  */
  YYSYMBOL_LabeledStatement = 140,         /* LabeledStatement  */
  YYSYMBOL_LabeledStatementNoShortIf = 141, /* LabeledStatementNoShortIf  */
  YYSYMBOL_ExpressionStatement = 142,      /* ExpressionStatement  */
  YYSYMBOL_StatementExpression = 143,      /* StatementExpression  */
  YYSYMBOL_IfThenStatement = 144,          /* IfThenStatement  */
  YYSYMBOL_IfThenElseStatement = 145,      /* IfThenElseStatement  */
  YYSYMBOL_IfThenElseStatementNoShortIf = 146, /* IfThenElseStatementNoShortIf  */
  YYSYMBOL_WhileStatement = 147,           /* WhileStatement  */
  YYSYMBOL_WhileStatementNoShortIf = 148,  /* WhileStatementNoShortIf  */
  YYSYMBOL_ForStatement = 149,             /* ForStatement  */
  YYSYMBOL_ForStatementNoShortIf = 150,    /* ForStatementNoShortIf  */
  YYSYMBOL_BasicForStatement = 151,        /* BasicForStatement  */
  YYSYMBOL_SingleForInit = 152,            /* SingleForInit  */
  YYSYMBOL_SingleExpression = 153,         /* SingleExpression  */
  YYSYMBOL_SingleForUpdate = 154,          /* SingleForUpdate  */
  YYSYMBOL_BasicForStatementNoShortIf = 155, /* BasicForStatementNoShortIf  */
  YYSYMBOL_ForInit = 156,                  /* ForInit  */
  YYSYMBOL_ForUpdate = 157,                /* ForUpdate  */
  YYSYMBOL_StatementExpressionList = 158,  /* StatementExpressionList  */
  YYSYMBOL_EnhancedForStatement = 159,     /* EnhancedForStatement  */
  YYSYMBOL_EnhancedForStatementNoShortIf = 160, /* EnhancedForStatementNoShortIf  */
  YYSYMBOL_BreakStatement = 161,           /* BreakStatement  */
  YYSYMBOL_ContinueStatement = 162,        /* ContinueStatement  */
  YYSYMBOL_ReturnStatement = 163,          /* ReturnStatement  */
  YYSYMBOL_Primary = 164,                  /* Primary  */
  YYSYMBOL_PrimaryNoNewArray = 165,        /* PrimaryNoNewArray  */
  YYSYMBOL_Literal = 166,                  /* Literal  */
  YYSYMBOL_BooleanLiteral = 167,           /* BooleanLiteral  */
  YYSYMBOL_IntegerLiteral = 168,           /* IntegerLiteral  */
  YYSYMBOL_CharacterLiteral = 169,         /* CharacterLiteral  */
  YYSYMBOL_StringLiteral = 170,            /* StringLiteral  */
  YYSYMBOL_NullLiteral = 171,              /* NullLiteral  */
  YYSYMBOL_ClassLiteral = 172,             /* ClassLiteral  */
  YYSYMBOL_ClassInstanceCreationExpression = 173, /* ClassInstanceCreationExpression  */
  YYSYMBOL_UnqualifiedClassInstanceCreationExpression = 174, /* UnqualifiedClassInstanceCreationExpression  */
  YYSYMBOL_FieldAccess = 175,              /* FieldAccess  */
  YYSYMBOL_ArrayAccess = 176,              /* ArrayAccess  */
  YYSYMBOL_MethodInvocation = 177,         /* MethodInvocation  */
  YYSYMBOL_ArgumentList = 178,             /* ArgumentList  */
  YYSYMBOL_MethodReference = 179,          /* MethodReference  */
  YYSYMBOL_ArrayCreationExpression = 180,  /* ArrayCreationExpression  */
  YYSYMBOL_DimExprs = 181,                 /* DimExprs  */
  YYSYMBOL_DimExpr = 182,                  /* DimExpr  */
  YYSYMBOL_Expression = 183,               /* Expression  */
  YYSYMBOL_AssignmentExpression = 184,     /* AssignmentExpression  */
  YYSYMBOL_Assignment = 185,               /* Assignment  */
  YYSYMBOL_LeftHandSide = 186,             /* LeftHandSide  */
  YYSYMBOL_AssignmentOperator = 187,       /* AssignmentOperator  */
  YYSYMBOL_ConditionalExpression = 188,    /* ConditionalExpression  */
  YYSYMBOL_ConditionalOrExpression = 189,  /* ConditionalOrExpression  */
  YYSYMBOL_ConditionalAndExpression = 190, /* ConditionalAndExpression  */
  YYSYMBOL_InclusiveOrExpression = 191,    /* InclusiveOrExpression  */
  YYSYMBOL_ExclusiveOrExpression = 192,    /* ExclusiveOrExpression  */
  YYSYMBOL_AndExpression = 193,            /* AndExpression  */
  YYSYMBOL_EqualityExpression = 194,       /* EqualityExpression  */
  YYSYMBOL_RelationalExpression = 195,     /* RelationalExpression  */
  YYSYMBOL_ShiftExpression = 196,          /* ShiftExpression  */
  YYSYMBOL_AdditiveExpression = 197,       /* AdditiveExpression  */
  YYSYMBOL_MultiplicativeExpression = 198, /* MultiplicativeExpression  */
  YYSYMBOL_UnaryExpression = 199,          /* UnaryExpression  */
  YYSYMBOL_PreIncrementExpression = 200,   /* PreIncrementExpression  */
  YYSYMBOL_PreDecrementExpression = 201,   /* PreDecrementExpression  */
  YYSYMBOL_UnaryExpressionNotPlusMinus = 202, /* UnaryExpressionNotPlusMinus  */
  YYSYMBOL_PostfixExpression = 203,        /* PostfixExpression  */
  YYSYMBOL_PostIncrementExpression = 204,  /* PostIncrementExpression  */
  YYSYMBOL_PostDecrementExpression = 205,  /* PostDecrementExpression  */
  YYSYMBOL_CastExpression = 206            /* CastExpression  */
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
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  120
/* YYNRULES -- Number of rules.  */
#define YYNRULES  296
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  489

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
       0,    76,    76,    81,    84,    85,    86,    89,    92,    93,
      96,    97,   101,   104,   107,   127,   128,   132,   133,   144,
     145,   149,   157,   165,   173,   181,   192,   199,   210,   211,
     214,   221,   230,   233,   239,   243,   247,   249,   258,   282,
     310,   314,   323,   334,   339,   347,   348,   354,   355,   356,
     360,   361,   362,   363,   371,   375,   381,   382,   386,   394,
     402,   410,   418,   429,   444,   452,   498,   501,   504,   510,
     511,   516,   525,   537,   544,   549,   555,   560,   565,   569,
     574,   581,   589,   590,   594,   598,   613,   631,   634,   640,
     641,   644,   650,   659,   671,   678,   687,   688,   689,   690,
     694,   698,   699,   703,   704,   708,   709,   716,   717,   718,
     722,   728,   745,   746,   747,   748,   749,   750,   754,   755,
     756,   757,   758,   762,   763,   764,   765,   766,   767,   771,
     775,   782,   789,   793,   794,   795,   796,   797,   798,   799,
     803,   828,   858,   888,   928,   968,   969,   973,   974,   978,
     982,   983,   987,   988,   992,   993,   997,  1001,  1002,  1006,
    1010,  1011,  1015,  1019,  1023,  1024,  1028,  1029,  1033,  1034,
    1038,  1039,  1043,  1044,  1045,  1046,  1047,  1049,  1050,  1051,
    1052,  1053,  1057,  1058,  1059,  1060,  1061,  1065,  1075,  1088,
    1100,  1113,  1126,  1141,  1143,  1145,  1147,  1149,  1155,  1156,
    1157,  1161,  1163,  1165,  1168,  1174,  1179,  1180,  1184,  1186,
    1189,  1192,  1195,  1197,  1202,  1203,  1207,  1209,  1211,  1213,
    1215,  1220,  1222,  1224,  1226,  1228,  1230,  1235,  1236,  1240,
    1244,  1248,  1249,  1253,  1297,  1343,  1344,  1348,  1349,  1350,
    1351,  1352,  1353,  1354,  1355,  1356,  1357,  1358,  1359,  1363,
    1364,  1372,  1373,  1383,  1384,  1394,  1395,  1405,  1406,  1416,
    1417,  1427,  1428,  1435,  1445,  1446,  1453,  1460,  1467,  1478,
    1479,  1486,  1497,  1498,  1505,  1515,  1516,  1523,  1530,  1540,
    1541,  1542,  1545,  1552,  1556,  1563,  1570,  1571,  1573,  1576,
    1580,  1581,  1582,  1583,  1587,  1594,  1601
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
      51,  -430,  -430,     5,  -430,     5,  -430,  -430,  -430,    30,
    -430,   132,   132,  -430,  -430,  -430,   338,  -430,  -430,   -22,
      28,  -430,  -430,   132,  -430,     5,  -430,   704,  -430,     5,
    -430,   -22,  -430,    10,     5,  -430,  -430,  -430,  -430,  -430,
    -430,  -430,  -430,  -430,   171,    21,     5,    64,  -430,  -430,
    -430,  -430,  -430,  -430,  1582,  -430,  -430,  -430,   975,  -430,
      48,  -430,  -430,    82,  -430,  -430,  1073,  -430,  -430,    88,
      -8,    89,   375,     9,    65,  -430,    87,   106,    89,  -430,
    -430,     5,    48,    82,  -430,  -430,  -430,  1159,  -430,   -13,
     110,   112,   145,  -430,  -430,  -430,  -430,   153,  -430,   156,
    -430,    -9,  1525,  -430,   994,  2094,  2094,  2094,  -430,  -430,
    2137,   191,     5,   194,   199,  -430,  -430,  1192,  -430,  -430,
     195,  -430,  -430,  -430,  -430,  -430,   212,  -430,  -430,  -430,
    -430,  -430,  -430,  -430,  -430,  -430,    80,   219,  -430,  -430,
    -430,  -430,  -430,  -430,  -430,    46,  -430,   789,   995,    68,
    -430,  -430,  -430,  1090,  -430,  -430,   184,   233,   235,   425,
    -430,   260,   994,  -430,   152,   114,  -430,  -430,    89,     5,
    -430,  1785,   903,   231,  -430,  -430,   268,  -430,  1273,  1306,
     274,  -430,  2125,   352,  2094,  1816,  2094,   279,  -430,  2094,
    2094,  2094,  2094,  2094,  -430,  1074,   194,   199,  -430,  -430,
     288,  -430,  -430,  -430,   236,   322,   324,   321,   323,   280,
     193,   291,   290,   205,  -430,  -430,  -430,  -430,   184,  -430,
    -430,  -430,    31,   299,   -43,  -430,  -430,  -430,  -430,   303,
    -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,
    -430,  -430,  1683,    70,    -7,   208,  2094,  1420,    64,   300,
     374,   209,    -5,  -430,  -430,  -430,  -430,    -1,   367,  2094,
    2094,  -430,  -430,    64,   121,  -430,     5,  -430,   213,  -430,
    -430,   767,  -430,  1612,  -430,  -430,  -430,    64,   130,  -430,
    1888,  -430,  -430,  1387,  -430,  -430,     5,  -430,  -430,   307,
    -430,   309,  -430,   319,  -430,   137,  -430,   328,  -430,  -430,
    -430,  -430,  -430,    97,  -430,  2094,  2094,  2094,  2094,  2094,
    2094,  2094,  2094,  2094,  2094,  2094,  2094,  2094,  2094,  2094,
    2094,  2094,  2094,  2094,  1919,  1683,   222,   299,  -430,   222,
     299,  -430,   320,  -430,   330,  -430,     5,  -430,  -430,  -430,
     390,  -430,  -430,  -430,   401,  -430,  -430,   336,  -430,  -430,
     339,  -430,    89,    64,  -430,   391,     5,  -430,  -430,   347,
      42,  -430,    89,    64,   344,   142,  -430,     3,  2094,  2125,
    1420,  -430,  2094,  1496,  2094,   379,   322,   324,   321,   323,
     280,   193,   193,   291,   291,   291,   291,   290,   290,   205,
     205,  -430,  -430,  -430,   -22,   147,   349,  -430,    89,  -430,
    -430,    89,  -430,  1991,   161,  -430,  -430,  2022,  -430,    89,
    -430,  -430,  -430,  1714,    89,  -430,   350,  2094,   351,  -430,
    -430,  -430,  -430,   361,   363,   364,   392,  -430,   411,   414,
    -430,  -430,  -430,  -430,  -430,  -430,  -430,  2094,  -430,   -22,
    -430,  -430,   165,  -430,   172,  -430,  -430,  -430,   369,  2125,
    2125,  2094,  2094,  1496,  1420,  -430,  -430,  -430,  -430,  1420,
     378,  -430,   309,     5,   380,   388,   396,  -430,  -430,  -430,
    1420,    44,  2094,  1496,  1496,  -430,  2094,   384,  -430,   444,
     398,  2125,  1496,  1496,   399,  -430,  -430,  1496,  -430
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
    -430,  -430,  -430,  -430,   470,    22,    11,    -3,   -26,   -25,
    -430,  -430,  -430,  -430,    33,   649,  -145,  -430,   227,  -430,
     -23,  -430,   428,  -430,  -430,    41,    -4,   -32,   316,  -128,
    -270,  -430,   432,   460,   -66,   224,  -430,   415,  -430,  -430,
     438,   417,  -430,  -430,   -10,   -78,  -112,  -430,  -172,    45,
       4,  -265,  -430,  -430,  -430,  -430,  -138,  -430,  -430,  -430,
    -430,  -430,  -430,  -430,  -430,    53,    29,    24,  -430,  -430,
    -430,  -429,  -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,
    -430,  -430,  -430,  -430,  -430,  -430,   -60,  -222,   651,   752,
      93,  -276,  -430,  -430,   283,  -131,   579,  -430,   119,  -430,
     354,    71,  -430,   203,   210,   204,   207,   211,    43,   -49,
      39,    40,   -88,   160,   186,  -430,   332,   406,   447,  -430
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
     287,   187,    26,   338,    74,   345,    20,   227,   228,   347,
     462,   337,    31,    67,    45,    18,    64,   145,    46,    47,
      22,    68,    81,    47,    24,   348,   269,   242,    44,   243,
     171,   113,   244,    73,   288,    24,   164,    47,   395,   173,
      86,    45,   462,   417,    26,    45,    27,   145,     1,     2,
      52,     3,   113,   111,   339,    44,   346,   254,    58,    44,
     336,   181,    86,   160,     4,   188,     5,   110,    73,   223,
     333,   171,     6,    44,   111,   -81,     7,    52,    66,    70,
     334,    52,   113,   264,   476,    58,   335,    72,   110,   114,
     283,   299,   300,   301,   302,    52,   278,   324,   429,   248,
      29,   325,    30,    29,   111,   222,   224,   224,   145,   145,
     114,   412,   145,  -139,   171,   413,    66,   442,   110,  -139,
    -139,   444,    84,   164,    47,     8,   266,    47,   354,     1,
       2,   336,     3,   446,    70,  -138,   164,    47,   169,   170,
     114,  -138,  -138,   113,   113,     4,   286,   113,   367,   149,
      87,   268,   257,     6,   159,   258,   248,     7,   303,   161,
      44,   254,    18,    44,   374,   111,   111,    70,   267,   250,
     149,   397,   172,    44,   400,   152,   182,   145,   429,   110,
     110,   270,    52,   110,   183,    52,   399,   271,   353,   399,
     224,   224,   224,   224,   271,    52,   152,   363,   429,   429,
     149,   114,   114,   271,   371,   114,     8,   429,   429,   416,
     372,   184,   429,   145,   439,   372,   154,    14,   269,   185,
     372,   420,   186,   391,   392,   393,   152,   324,    14,    14,
      64,   247,   457,    29,   111,   356,    47,   154,   372,   458,
      14,    70,   155,    29,    53,   372,   261,   262,   113,   313,
     314,   315,   316,   248,   383,   384,   385,   386,   321,   322,
     323,   149,   149,   155,    70,   149,   250,   154,   287,   255,
     111,    53,    44,   248,   252,   305,   436,   306,   161,   161,
     340,   344,   342,    70,   110,   355,   256,   152,   152,   259,
     273,   152,   161,   155,    52,  -292,  -292,  -293,  -293,   145,
     145,   288,   288,   145,   169,   279,   114,   224,   224,   224,
     224,   224,   224,   224,   224,   224,   224,   224,   224,   224,
     224,   224,   224,   224,   224,   471,   311,   312,   154,   154,
     149,   265,   154,   288,   280,     1,     2,   404,    25,   317,
     318,   319,   320,   248,   381,   382,   387,   388,   285,   389,
     390,     4,   292,   298,   155,   155,   152,   111,   155,     6,
     426,   438,   304,     7,   307,   309,   149,   308,   310,   325,
     331,    32,   162,   169,   343,   224,    35,   349,    36,   145,
     145,   368,   369,   145,   145,    18,   370,    37,   156,   145,
     405,   402,   152,    38,    39,   373,   403,   154,    40,    41,
     145,   406,   407,   145,   145,   421,   456,   410,   427,   156,
     408,   145,   145,   145,   463,   113,   411,   145,   415,   437,
     440,    32,   162,   155,   447,   449,    35,   450,    36,   451,
     452,   454,   453,   154,  -118,    18,   459,    37,   224,   156,
     426,   111,   163,    38,    39,   470,   111,   467,    40,    41,
     248,   110,   149,   149,   472,   473,   149,   111,   481,   155,
     426,   426,   157,   474,   482,   483,   487,   478,   479,   426,
     426,    23,    80,   114,   426,   272,   485,   486,   152,   152,
      82,   488,   152,   157,    69,   357,    83,   174,   342,   468,
     175,   477,   263,   464,   469,   484,   330,   260,   455,   376,
     156,   156,   378,   158,   156,   475,   379,   377,   421,   427,
       0,   380,     0,   157,     0,     0,     0,   468,   469,   154,
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
       3,    27,    27,   273,   280,   117,    66,    20,    31,    87,
     182,    20,    16,    20,    46,    20,     5,   105,   106,    20,
     449,   243,    25,    33,    27,    20,    29,    87,    54,    54,
       0,    34,    58,    58,    12,   257,   164,    80,    27,    82,
      37,    66,    85,    46,   182,    23,    72,    72,   324,    81,
      60,    54,   481,    50,    58,    58,    78,   117,     7,     8,
      27,    10,    87,    66,    71,    54,    71,   179,    27,    58,
      71,    84,    82,    81,    23,    84,    25,    66,    81,   104,
      10,    37,    31,    72,    87,    76,    35,    54,    78,    80,
      20,    58,   117,   159,    50,    54,    26,    76,    87,    66,
     178,   189,   190,   191,   192,    72,   172,    76,   373,   112,
      82,    80,    84,    82,   117,   104,   105,   106,   178,   179,
      87,    79,   182,    77,    37,    83,    78,   403,   117,    83,
      84,   407,    84,   159,   159,    84,   162,   162,   266,     7,
       8,    71,    10,   413,    80,    77,   172,   172,    83,    84,
     117,    83,    84,   178,   179,    23,   182,   182,   286,    66,
      78,   164,    82,    31,    76,    85,   169,    35,   193,    80,
     159,   283,    20,   162,    77,   178,   179,    80,    26,    82,
      87,   326,    76,   172,   329,    66,    76,   247,   453,   178,
     179,    77,   159,   182,    82,   162,   327,    83,    77,   330,
     189,   190,   191,   192,    83,   172,    87,    77,   473,   474,
     117,   178,   179,    83,    77,   182,    84,   482,   483,    77,
      83,    76,   487,   283,    77,    83,    66,     0,   356,    76,
      83,   369,    76,   321,   322,   323,   117,    76,    11,    12,
     243,    50,    77,    82,   247,   271,   271,    87,    83,    77,
      23,    80,    66,    82,    27,    83,    72,    73,   283,    66,
      67,    68,    69,   266,   313,   314,   315,   316,    63,    64,
      65,   178,   179,    87,    80,   182,    82,   117,   450,    84,
     283,    54,   271,   286,    85,    49,   374,    51,    80,    80,
      82,    82,   247,    80,   283,    82,    84,   178,   179,    80,
      78,   182,    80,   117,   271,    72,    73,    72,    73,   369,
     370,   449,   450,   373,    83,    84,   283,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   463,    56,    57,   178,   179,
     247,    81,   182,   481,    76,     7,     8,   336,    10,    58,
      59,    61,    62,   356,   311,   312,   317,   318,    84,   319,
     320,    23,    10,    84,   178,   179,   247,   370,   182,    31,
     373,   394,    84,    35,    52,    54,   283,    53,    55,    80,
      77,     6,     7,    83,    10,   374,    11,    20,    13,   449,
     450,    84,    83,   453,   454,    20,    77,    22,    66,   459,
      10,    81,   283,    28,    29,    77,    76,   247,    33,    34,
     470,    10,    76,   473,   474,   370,   439,    26,   373,    87,
      81,   481,   482,   483,   450,   450,    79,   487,    84,    50,
      81,     6,     7,   247,    84,    84,    11,    76,    13,    76,
      76,    30,    50,   283,    30,    20,    77,    22,   437,   117,
     453,   454,    77,    28,    29,    77,   459,   453,    33,    34,
     463,   450,   369,   370,    84,    77,   373,   470,    84,   283,
     473,   474,    66,    77,    30,    77,    77,   473,   474,   482,
     483,    11,    54,   450,   487,   169,   482,   483,   369,   370,
      58,   487,   373,    87,    34,   271,    58,    82,   453,   454,
      83,   472,    77,   450,   459,   481,   223,   153,   437,   306,
     178,   179,   308,    66,   182,   470,   309,   307,   473,   474,
      -1,   310,    -1,   117,    -1,    -1,    -1,   482,   483,   369,
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
       6,     7,     8,     9,    10,    11,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    22,    23,    -1,    -1,
     283,    -1,    28,    29,    -1,    31,    -1,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     171,    -1,    -1,    -1,    -1,    -1,   105,   106,    -1,   110,
      -1,    -1,   113,   184,    -1,   186,    -1,    -1,    -1,    -1,
      -1,    -1,   193,     6,     7,   369,   370,    -1,    11,   373,
      13,   449,   450,    79,    -1,   453,   454,    20,    84,    22,
      -1,   459,    -1,    -1,    -1,    28,    29,    -1,    -1,    -1,
      33,    34,   470,    -1,    -1,   473,   474,    -1,    -1,    -1,
      -1,    -1,    -1,   481,   482,   483,   369,   370,    -1,   487,
     373,   242,    -1,    -1,    -1,   246,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,   259,   260,
     189,   190,   191,   192,   195,   196,    -1,    -1,    -1,    -1,
      -1,    -1,   273,    -1,    -1,   449,   450,   105,   106,   453,
     454,    -1,    -1,    -1,    -1,   459,    -1,    -1,    -1,    -1,
      -1,   222,   223,   224,    -1,    -1,   470,    -1,    -1,   473,
     474,    -1,    -1,    -1,   305,    -1,    -1,   481,   482,   483,
      -1,    -1,    -1,   487,    -1,    -1,   449,   450,    -1,    -1,
     453,   454,    -1,    -1,   325,    -1,   459,    -1,    -1,     6,
       7,    -1,   263,    -1,    11,    -1,    13,   470,    -1,    -1,
     473,   474,    -1,    20,    -1,    22,   277,    -1,   481,   482,
     483,    28,    29,    -1,   487,    -1,    33,    34,    -1,    -1,
      -1,   189,   190,   191,   192,    -1,    -1,   368,    -1,    -1,
      -1,   372,   303,    -1,    -1,    -1,    -1,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,    -1,   327,    -1,    -1,   330,
      77,     6,     7,     8,     9,    10,    11,    -1,    13,    -1,
      -1,    -1,   413,    -1,    -1,    20,   417,    22,    23,    -1,
       6,    -1,   353,    28,    29,    11,    31,    13,    33,    34,
      35,    -1,   363,    -1,    20,    -1,    22,    -1,    -1,    -1,
      -1,    -1,    28,    29,    -1,   374,    -1,    33,    34,    -1,
     451,   452,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   472,    -1,    -1,    -1,   476,    -1,    -1,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,    -1,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,   437,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    -1,    26,
      27,    28,    29,    -1,    31,    32,    33,    34,    35,    36,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    -1,    -1,   374,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      -1,    -1,    -1,    -1,    71,    72,    73,    -1,    -1,    76,
      -1,    78,    79,    -1,    80,    -1,    82,    84,    -1,    85,
      -1,    -1,    -1,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,    26,    27,    28,    29,   437,
      31,    32,    33,    34,    35,    36,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    -1,    26,    27,
      28,    29,    -1,    31,    32,    33,    34,    35,    36,    -1,
      71,    72,    73,    -1,    -1,    76,    -1,    78,    79,    -1,
      -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    72,    73,    -1,    -1,    76,    -1,
      78,    79,    -1,    -1,    -1,    -1,    84,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    -1,    26,
      27,    28,    29,    -1,    31,    32,    33,    34,    35,    36,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    13,
      14,    -1,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    -1,    26,    27,    28,    29,    -1,    31,    32,    33,
      34,    35,    36,    -1,    71,    72,    73,    -1,    -1,    76,
      -1,    78,    79,    -1,    -1,    -1,    -1,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,
      -1,    -1,    76,    -1,    78,    79,    -1,    -1,    -1,    -1,
      84,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    -1,    26,    27,    28,    29,    -1,    31,    32,
      33,    34,    35,    36,     4,     5,     6,    -1,    -1,     9,
      -1,    11,    -1,    13,    14,    -1,    16,    17,    18,    19,
      20,    21,    22,    -1,    24,    -1,    26,    27,    28,    29,
      -1,    -1,    32,    33,    34,    -1,    36,    -1,    71,    72,
      73,    -1,    -1,    76,    -1,    78,    79,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    72,    73,    -1,    -1,    76,    -1,    78,    -1,
       4,     5,     6,    -1,    84,     9,    -1,    11,    -1,    13,
      14,    -1,    16,    17,    18,    19,    20,    21,    22,    -1,
      24,    -1,    26,    27,    28,    29,    -1,    -1,    32,    33,
      34,     6,    36,    -1,     9,    -1,    11,    -1,    13,    -1,
      -1,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    26,    -1,    28,    29,    -1,    -1,    -1,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,
      -1,    -1,    76,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    -1,    -1,    -1,    61,    62,     6,     7,
       8,     9,    10,    11,    -1,    13,    71,    72,    73,    74,
      75,    76,    20,    -1,    22,    23,    -1,    -1,    -1,    84,
      28,    29,    -1,    31,    -1,    33,    34,    35,     6,    -1,
      -1,     9,    -1,    11,    -1,    13,    -1,    -1,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    26,    -1,
      28,    29,    -1,    -1,    -1,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    76,     6,
      78,    79,     9,    -1,    11,    83,    13,    -1,    -1,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    26,
      -1,    28,    29,    -1,    -1,    -1,    33,    34,    -1,    36,
       6,    -1,    -1,     9,    -1,    11,    -1,    13,    -1,    -1,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      26,    -1,    28,    29,    61,    62,    -1,    33,    34,    -1,
      36,    -1,    -1,    -1,    71,    72,    73,    74,    75,    76,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    72,    73,    74,    75,
      76,     6,    78,    79,     9,    -1,    11,    -1,    13,    -1,
      -1,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    26,    -1,    28,    29,    -1,    -1,    -1,    33,    34,
      -1,    36,     6,    -1,    -1,     9,    -1,    11,    -1,    13,
      -1,    -1,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    26,    -1,    28,    29,    61,    62,    -1,    33,
      34,    -1,    36,    -1,    -1,    -1,    71,    72,    73,    74,
      75,    76,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    76,    77,     6,    -1,    -1,     9,    -1,    11,
      -1,    13,    -1,    -1,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    26,    -1,    28,    29,    -1,    -1,
      -1,    33,    34,    -1,    36,     6,    -1,    -1,     9,    -1,
      11,    -1,    13,    -1,    -1,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    26,    -1,    28,    29,    61,
      62,    -1,    33,    34,    -1,    36,    -1,    -1,    -1,    71,
      72,    73,    74,    75,    76,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    72,    73,    74,    75,    76,    77,     6,    -1,    -1,
       9,    -1,    11,    -1,    13,    -1,    -1,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    26,    -1,    28,
      29,    -1,    -1,    -1,    33,    34,    -1,    36,     6,    -1,
      -1,     9,    -1,    11,    -1,    13,    -1,    -1,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    26,    -1,
      28,    29,    61,    62,    -1,    33,    34,    -1,    36,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    76,    77,
       6,    -1,    -1,     9,    -1,    11,    -1,    13,    -1,    -1,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      26,    -1,    28,    29,    -1,    -1,    -1,    33,    34,    -1,
      36,     6,    -1,    -1,     9,    -1,    11,    -1,    13,    -1,
      -1,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    26,    -1,    28,    29,    61,    62,    20,    33,    34,
      -1,    36,    -1,    -1,    -1,    71,    72,    73,    74,    75,
      76,    -1,    -1,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    82,
      -1,    -1,    85
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,     8,    10,    23,    25,    31,    35,    84,    88,
      89,    90,    91,    92,   105,   106,   112,   113,    20,    94,
      93,    94,     0,    91,    92,    10,   113,    78,   107,    82,
      84,    94,     6,     8,     9,    11,    13,    22,    28,    29,
      33,    34,    79,    84,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   105,   108,   109,   110,   111,   112,   118,
     119,   125,   126,   127,    94,   107,    78,   131,    94,   120,
      80,   102,    76,    94,   114,   115,   116,   120,   102,    79,
     109,    95,   119,   127,    84,   124,   131,    78,   128,     4,
       5,     9,    14,    16,    17,    18,    19,    20,    21,    24,
      26,    27,    32,    36,    71,    72,    73,    76,    79,    84,
      93,    94,    95,    96,   101,   105,   131,   132,   133,   134,
     135,   136,   138,   139,   140,   142,   143,   144,   145,   147,
     149,   151,   159,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     179,   180,   185,   186,   200,   201,   203,   204,   205,    76,
      81,    80,     7,    77,    95,   121,   122,   123,   102,    83,
      84,    37,    76,   114,   124,   128,    26,    79,   129,   132,
      20,    84,    76,    82,    76,    76,    76,    20,    84,    61,
      62,    74,    75,    76,    84,    93,    96,   101,   173,   177,
     183,   184,   185,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,    93,    96,    93,   175,   176,   199,   199,   183,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    80,    82,    85,   102,   187,    50,    94,   114,
      82,   102,    85,    79,   133,    84,    84,    82,    85,    80,
     187,    72,    73,    77,   121,    81,    95,    26,    94,   116,
      77,    83,   115,    78,   103,   117,   183,    77,   121,    84,
      76,   130,    79,   132,    79,    84,    95,   135,   143,   152,
     156,   158,    10,   183,    77,   178,   183,   183,    84,   199,
     199,   199,   199,    96,    84,    49,    51,    52,    53,    54,
      55,    56,    57,    66,    67,    68,    69,    58,    59,    61,
      62,    63,    64,    65,    76,    80,   102,   181,   182,   102,
     181,    77,   183,    10,    20,    26,    71,   174,    20,    71,
      82,   183,   136,    10,    82,    20,    71,    20,   174,    20,
     183,   183,   102,    77,   116,    82,    95,   122,    79,    83,
     104,   117,   102,    77,    77,   178,    79,   116,    84,    83,
      77,    77,    83,    77,    77,   183,   190,   191,   192,   193,
     194,   195,   195,   196,   196,   196,   196,   197,   197,   198,
     198,   199,   199,   199,    77,   178,   183,   103,   102,   182,
     103,   102,    81,    76,    93,    10,    10,    76,    81,   102,
      26,    79,    79,    83,   102,    84,    77,    50,   153,   183,
     143,   136,   183,     5,    14,    24,    94,   136,   137,   138,
     141,   146,   148,   150,   155,   160,   199,    50,   107,    77,
      81,    77,   178,    77,   178,    79,   117,    84,   183,    84,
      76,    76,    76,    50,    30,   188,   107,    77,    77,    77,
     154,   157,   158,    95,   152,   183,   183,   137,   136,   136,
      77,   116,    84,    77,    77,   136,    50,   153,   137,   137,
     183,    84,    30,    77,   154,   137,   137,    77,   137
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    89,    89,    89,    89,    90,    91,    91,
      92,    92,    93,    93,    94,    95,    95,    96,    96,    97,
      97,    98,    98,    98,    98,    98,    99,    99,   100,   100,
     101,   101,   102,   102,   103,   103,   103,   103,   104,   104,
     105,   106,   106,   107,   107,   108,   108,   109,   109,   109,
     110,   110,   110,   110,   111,   111,   112,   112,   113,   113,
     113,   113,   113,   114,   114,   115,   115,   116,   116,   117,
     117,   118,   118,   119,   119,   119,   119,   119,   119,   119,
     119,   120,   121,   121,   121,   122,   122,   123,   123,   124,
     124,   125,   126,   126,   127,   127,   128,   128,   128,   128,
     129,   130,   130,   131,   131,   132,   132,   133,   133,   133,
     134,   135,   136,   136,   136,   136,   136,   136,   137,   137,
     137,   137,   137,   138,   138,   138,   138,   138,   138,   139,
     140,   141,   142,   143,   143,   143,   143,   143,   143,   143,
     144,   145,   146,   147,   148,   149,   149,   150,   150,   151,
     152,   152,   153,   153,   154,   154,   155,   156,   156,   157,
     158,   158,   159,   160,   161,   161,   162,   162,   163,   163,
     164,   164,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   166,   166,   166,   166,   166,   167,   167,   168,
     169,   170,   171,   172,   172,   172,   172,   172,   173,   173,
     173,   174,   174,   174,   174,   175,   176,   176,   177,   177,
     177,   177,   177,   177,   178,   178,   179,   179,   179,   179,
     179,   180,   180,   180,   180,   180,   180,   181,   181,   182,
     183,   184,   184,   185,   185,   186,   186,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   188,
     188,   189,   189,   190,   190,   191,   191,   192,   192,   193,
     193,   194,   194,   194,   195,   195,   195,   195,   195,   196,
     196,   196,   197,   197,   197,   198,   198,   198,   198,   199,
     199,   199,   199,   199,   200,   201,   202,   202,   202,   202,
     203,   203,   203,   203,   204,   205,   206
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
#line 76 "parser.y"
                        { (yyval.node) = (yyvsp[0].node);
        printTAC((yyval.node));
      }
#line 2305 "parser.tab.c"
    break;

  case 3: /* CompilationUnit: PackageDeclaration MULTI_TypeDeclaration  */
#line 81 "parser.y"
                                                 {
            (yyval.node) = (yyvsp[0].node);
        }
#line 2313 "parser.tab.c"
    break;

  case 4: /* CompilationUnit: MULTI_TypeDeclaration  */
#line 84 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2319 "parser.tab.c"
    break;

  case 5: /* CompilationUnit: PackageDeclaration  */
#line 85 "parser.y"
                             { (yyval.node) = (yyvsp[0].node); }
#line 2325 "parser.tab.c"
    break;

  case 6: /* CompilationUnit: %empty  */
#line 86 "parser.y"
           { (yyval.node) = NULL ; }
#line 2331 "parser.tab.c"
    break;

  case 7: /* PackageDeclaration: PACKAGE TypeName ';'  */
#line 89 "parser.y"
                             { (yyval.node) = (yyvsp[-1].node);}
#line 2337 "parser.tab.c"
    break;

  case 8: /* MULTI_TypeDeclaration: TypeDeclaration  */
#line 92 "parser.y"
                        { (yyval.node) = (yyvsp[0].node); }
#line 2343 "parser.tab.c"
    break;

  case 9: /* MULTI_TypeDeclaration: MULTI_TypeDeclaration TypeDeclaration  */
#line 93 "parser.y"
                                               { (yyval.node) = (yyvsp[-1].node); }
#line 2349 "parser.tab.c"
    break;

  case 10: /* TypeDeclaration: ClassDeclaration  */
#line 96 "parser.y"
                       {(yyval.node) = (yyvsp[0].node);}
#line 2355 "parser.tab.c"
    break;

  case 11: /* TypeDeclaration: ';'  */
#line 97 "parser.y"
            { (yyval.node)=NULL; }
#line 2361 "parser.tab.c"
    break;

  case 12: /* TypeName: Identifier  */
#line 101 "parser.y"
                    {	
            (yyval.node)=(yyvsp[0].node);
        }
#line 2369 "parser.tab.c"
    break;

  case 13: /* TypeName: TypeName '.' Identifier  */
#line 104 "parser.y"
                                    { (yyval.node) = (yyvsp[-2].node); }
#line 2375 "parser.tab.c"
    break;

  case 14: /* Identifier: IDENTIFIER  */
#line 107 "parser.y"
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
#line 2398 "parser.tab.c"
    break;

  case 15: /* Type: PrimitiveType  */
#line 127 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2404 "parser.tab.c"
    break;

  case 16: /* Type: ReferenceType  */
#line 128 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2410 "parser.tab.c"
    break;

  case 17: /* PrimitiveType: NumericType  */
#line 132 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2416 "parser.tab.c"
    break;

  case 18: /* PrimitiveType: BOOLEAN  */
#line 133 "parser.y"
                                {
        genNode * n1 = new genNode();
        (yyval.node) = n1;
        (yyval.node)->place = "bool";
        (yyval.node)->type = "bool";
        (yyval.node)->label = "Keyword";
        (yyval.node)->value = (yyvsp[0].str);
    }
#line 2429 "parser.tab.c"
    break;

  case 19: /* NumericType: IntegralType  */
#line 144 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2435 "parser.tab.c"
    break;

  case 20: /* NumericType: FloatingPointType  */
#line 145 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2441 "parser.tab.c"
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
#line 2454 "parser.tab.c"
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
#line 2467 "parser.tab.c"
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
#line 2480 "parser.tab.c"
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
#line 2493 "parser.tab.c"
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
#line 2506 "parser.tab.c"
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
#line 2518 "parser.tab.c"
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
#line 2531 "parser.tab.c"
    break;

  case 28: /* ReferenceType: TypeName  */
#line 210 "parser.y"
                { (yyval.node) = (yyvsp[0].node); }
#line 2537 "parser.tab.c"
    break;

  case 29: /* ReferenceType: ArrayType  */
#line 211 "parser.y"
                { (yyval.node) = (yyvsp[0].node); }
#line 2543 "parser.tab.c"
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
#line 2555 "parser.tab.c"
    break;

  case 31: /* ArrayType: TypeName Dims  */
#line 221 "parser.y"
                    { 
        genNode *n1 = new genNode();
		(yyval.node) = n1;
		(yyval.node)->type=(yyvsp[-1].node)->type;
		(yyval.node)->place=(yyvsp[-1].node)->place;
		(yyval.node)->isArray = true;
    }
#line 2567 "parser.tab.c"
    break;

  case 32: /* Dims: Dims '[' ']'  */
#line 230 "parser.y"
                  {
         (yyval.node) = (yyvsp[-2].node);
   }
#line 2575 "parser.tab.c"
    break;

  case 33: /* Dims: '[' ']'  */
#line 233 "parser.y"
             {

   }
#line 2583 "parser.tab.c"
    break;

  case 34: /* ArrayInitialize: '{' VariableInitializerList ',' '}'  */
#line 239 "parser.y"
                                           { 
        (yyval.node) = (yyvsp[-2].node);
		(yyval.node)->isArray = true;
    }
#line 2592 "parser.tab.c"
    break;

  case 35: /* ArrayInitialize: '{' VariableInitializerList '}'  */
#line 243 "parser.y"
                                       {
        (yyval.node) = (yyvsp[-1].node);
		(yyval.node)->isArray = true; 
    }
#line 2601 "parser.tab.c"
    break;

  case 36: /* ArrayInitialize: '{' ',' '}'  */
#line 247 "parser.y"
                  { 
    }
#line 2608 "parser.tab.c"
    break;

  case 37: /* ArrayInitialize: '{' '}'  */
#line 249 "parser.y"
              {
        genNode* newNode = new genNode();
		(yyval.node) = newNode;
		(yyval.node)->isArray = true;
		(yyval.node)->nodeLen = 0;
    }
#line 2619 "parser.tab.c"
    break;

  case 38: /* VariableInitializerList: VariableInitializer  */
#line 258 "parser.y"
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
#line 2648 "parser.tab.c"
    break;

  case 39: /* VariableInitializerList: VariableInitializerList ',' VariableInitializer  */
#line 282 "parser.y"
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
#line 2678 "parser.tab.c"
    break;

  case 40: /* ClassDeclaration: NormalClassDeclaration  */
#line 310 "parser.y"
                             { (yyval.node) = (yyvsp[0].node); }
#line 2684 "parser.tab.c"
    break;

  case 41: /* NormalClassDeclaration: MULTI_ClassModifier CLASS Identifier ClassBody  */
#line 314 "parser.y"
                                                      {
        ST->curEnv->type = "CLASSTYPE";
        (yyval.node) = (yyvsp[-1].node);
        (yyval.node)->type = "class";
		(yyval.node)->code.pb(genLabelTAC((yyvsp[-1].node)->place));
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		ST->curEnv->name = (yyvsp[-1].node)->place;
		ST->EndScope();
    }
#line 2698 "parser.tab.c"
    break;

  case 42: /* NormalClassDeclaration: CLASS Identifier ClassBody  */
#line 323 "parser.y"
                                 { //TODO : Check Type of Class
        ST->curEnv->type = "CLASSTYPE";
        (yyval.node) = (yyvsp[-1].node);
        (yyval.node)->type = "class";
		(yyval.node)->code.pb(genLabelTAC((yyvsp[-1].node)->place));
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		ST->curEnv->name = (yyvsp[-1].node)->place;
		ST->EndScope();
    }
#line 2712 "parser.tab.c"
    break;

  case 43: /* ClassBody: '{' MULTI_ClassBodyDeclaration '}'  */
#line 334 "parser.y"
                                          {
            ST->curEnv->type = "CLASSTYPE";
			(yyval.node) = (yyvsp[-1].node); 
            (yyval.node)->type = "class";
    }
#line 2722 "parser.tab.c"
    break;

  case 44: /* ClassBody: '{' '}'  */
#line 339 "parser.y"
                {
        	ST->curEnv->type = "CLASSTYPE";
			genNode* n = new genNode();
			(yyval.node) = n; 
            (yyval.node)->type = "class";
    }
#line 2733 "parser.tab.c"
    break;

  case 45: /* MULTI_ClassBodyDeclaration: ClassBodyDeclaration  */
#line 347 "parser.y"
                            {(yyval.node)=(yyvsp[0].node);}
#line 2739 "parser.tab.c"
    break;

  case 46: /* MULTI_ClassBodyDeclaration: MULTI_ClassBodyDeclaration ClassBodyDeclaration  */
#line 348 "parser.y"
                                                       { 
        (yyval.node) = (yyvsp[-1].node);
        (yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
     }
#line 2748 "parser.tab.c"
    break;

  case 47: /* ClassBodyDeclaration: ClassMemberDeclaration  */
#line 354 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2754 "parser.tab.c"
    break;

  case 48: /* ClassBodyDeclaration: StaticInitializer  */
#line 355 "parser.y"
                                 { (yyval.node) = (yyvsp[0].node); }
#line 2760 "parser.tab.c"
    break;

  case 49: /* ClassBodyDeclaration: ConstructorDeclaration  */
#line 356 "parser.y"
                                 { (yyval.node) = (yyvsp[0].node); }
#line 2766 "parser.tab.c"
    break;

  case 50: /* ClassMemberDeclaration: FieldDeclaration  */
#line 360 "parser.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2772 "parser.tab.c"
    break;

  case 51: /* ClassMemberDeclaration: MethodDeclaration  */
#line 361 "parser.y"
                           { (yyval.node) = (yyvsp[0].node); }
#line 2778 "parser.tab.c"
    break;

  case 52: /* ClassMemberDeclaration: ClassDeclaration  */
#line 362 "parser.y"
                           { (yyval.node) = (yyvsp[0].node); }
#line 2784 "parser.tab.c"
    break;

  case 53: /* ClassMemberDeclaration: ';'  */
#line 363 "parser.y"
           {
        (yyval.node)=NULL;
     }
#line 2792 "parser.tab.c"
    break;

  case 54: /* FieldDeclaration: MULTI_ClassModifier Type VariableDeclaratorList ';'  */
#line 371 "parser.y"
                                                          {
        (yyval.node)=(yyvsp[-1].node);
        (yyval.node)->type=(yyvsp[-2].node)->place;
    }
#line 2801 "parser.tab.c"
    break;

  case 55: /* FieldDeclaration: Type VariableDeclaratorList ';'  */
#line 375 "parser.y"
                                      {
        (yyval.node)=(yyvsp[-1].node);
        (yyval.node)->type=(yyvsp[-2].node)->place;
    }
#line 2810 "parser.tab.c"
    break;

  case 56: /* MULTI_ClassModifier: ClassModifier  */
#line 381 "parser.y"
                    {(yyval.node)=(yyvsp[0].node);}
#line 2816 "parser.tab.c"
    break;

  case 57: /* MULTI_ClassModifier: MULTI_ClassModifier ClassModifier  */
#line 382 "parser.y"
                                         { (yyval.node) = (yyvsp[-1].node); }
#line 2822 "parser.tab.c"
    break;

  case 58: /* ClassModifier: PUBLIC  */
#line 386 "parser.y"
             { 			
            string s1((yyvsp[0].str));
			genNode* n1 = new genNode();
			(yyval.node) = n1;
			(yyval.node)->place = s1;
            (yyval.node)->label = "Keyword";
            (yyval.node)->value = s1;
        }
#line 2835 "parser.tab.c"
    break;

  case 59: /* ClassModifier: PRIVATE  */
#line 394 "parser.y"
              {		
            string s1((yyvsp[0].str));
			genNode* n1 = new genNode();
			(yyval.node) = n1;
			(yyval.node)->place = s1;
            (yyval.node)->label = "Keyword";
            (yyval.node)->value = s1;
        }
#line 2848 "parser.tab.c"
    break;

  case 60: /* ClassModifier: STATIC  */
#line 402 "parser.y"
             {		
            string s1((yyvsp[0].str));
			genNode* n1 = new genNode();
			(yyval.node) = n1;
			(yyval.node)->place = s1;
            (yyval.node)->label = "Keyword";
            (yyval.node)->value = s1;
        }
#line 2861 "parser.tab.c"
    break;

  case 61: /* ClassModifier: FINAL  */
#line 410 "parser.y"
            {		
            string s1((yyvsp[0].str));
			genNode* n1 = new genNode();
			(yyval.node) = n1;
			(yyval.node)->place = s1;
            (yyval.node)->label = "Keyword";
            (yyval.node)->value = s1;
        }
#line 2874 "parser.tab.c"
    break;

  case 62: /* ClassModifier: ABSTRACT  */
#line 418 "parser.y"
               { 		
            string s1((yyvsp[0].str));
			genNode* n1 = new genNode();
			(yyval.node) = n1;
			(yyval.node)->place = s1;
            (yyval.node)->label = "Keyword";
            (yyval.node)->value = s1;
        }
#line 2887 "parser.tab.c"
    break;

  case 63: /* VariableDeclaratorList: VariableDeclaratorList ',' VariableDeclarator  */
#line 429 "parser.y"
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
#line 2907 "parser.tab.c"
    break;

  case 64: /* VariableDeclaratorList: VariableDeclarator  */
#line 444 "parser.y"
                         {
        	(yyval.node) = (yyvsp[0].node); 
			Symbol* sym = ST->GetVar((yyvsp[0].node)->place);
			(yyval.node)->varDecs.pb(sym);
    }
#line 2917 "parser.tab.c"
    break;

  case 65: /* VariableDeclarator: VariableDeclaratorId '=' VariableInitializer  */
#line 452 "parser.y"
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
#line 2968 "parser.tab.c"
    break;

  case 66: /* VariableDeclarator: VariableDeclaratorId  */
#line 498 "parser.y"
                           {(yyval.node)=(yyvsp[0].node);}
#line 2974 "parser.tab.c"
    break;

  case 67: /* VariableDeclaratorId: Identifier Dims  */
#line 501 "parser.y"
                      {
        (yyval.node) = (yyvsp[-1].node); 
    }
#line 2982 "parser.tab.c"
    break;

  case 68: /* VariableDeclaratorId: Identifier  */
#line 504 "parser.y"
                  {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2990 "parser.tab.c"
    break;

  case 69: /* VariableInitializer: Expression  */
#line 510 "parser.y"
                { (yyval.node)=(yyvsp[0].node);}
#line 2996 "parser.tab.c"
    break;

  case 70: /* VariableInitializer: ArrayInitialize  */
#line 511 "parser.y"
                     { (yyval.node)=(yyvsp[0].node);}
#line 3002 "parser.tab.c"
    break;

  case 71: /* MethodDeclaration: MULTI_ClassModifier MethodHeader MethodBody  */
#line 516 "parser.y"
                                                      {
        (yyval.node) = (yyvsp[-1].node);
		vector <TAC*> tmp;
		tmp.pb(genLabelTAC(ST->curEnv->name));
		(yyval.node)->code.insert((yyval.node)->code.begin(), tmp.begin(), tmp.end());
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());	
        ST->curEnv->type = (yyvsp[-1].node)->place;	
		ST->EndScope();
    }
#line 3016 "parser.tab.c"
    break;

  case 72: /* MethodDeclaration: MethodHeader MethodBody  */
#line 525 "parser.y"
                                                    {
        (yyval.node) = (yyvsp[-1].node);
		vector <TAC*> tmp;
		tmp.pb(genLabelTAC(ST->curEnv->name));
		(yyval.node)->code.insert((yyval.node)->code.begin(), tmp.begin(), tmp.end());
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());	
         ST->curEnv->type = (yyvsp[-1].node)->place;	
		ST->EndScope();
    }
#line 3030 "parser.tab.c"
    break;

  case 73: /* MethodHeader: Type MemberName '(' FormalParameterList ')'  */
#line 537 "parser.y"
                                                      { 
        (yyval.node) = (yyvsp[-3].node);
		ST->curEnv->returnType = (yyvsp[-4].node)->place;
		ST->curEnv->name = (yyvsp[-3].node)->place;
        ST->curEnv->type = (yyvsp[-4].node)->place;
        (yyval.node)->code = (yyvsp[-1].node)->code;
    }
#line 3042 "parser.tab.c"
    break;

  case 74: /* MethodHeader: Type MemberName '(' ')'  */
#line 544 "parser.y"
                                     { 
        (yyval.node) = (yyvsp[-2].node);
		ST->curEnv->returnType = (yyvsp[-3].node)->place;
		ST->curEnv->name = (yyvsp[-2].node)->place;
    }
#line 3052 "parser.tab.c"
    break;

  case 75: /* MethodHeader: Type MemberName '(' FormalParameterList ')' Dims  */
#line 549 "parser.y"
                                                              { 
        (yyval.node) = (yyvsp[-4].node);
		ST->curEnv->returnType = (yyvsp[-5].node)->place;
		ST->curEnv->name = (yyvsp[-4].node)->place;
		(yyval.node)->code = (yyvsp[-2].node)->code;
    }
#line 3063 "parser.tab.c"
    break;

  case 76: /* MethodHeader: Type MemberName '(' ')' Dims  */
#line 555 "parser.y"
                                           { 
        (yyval.node) = (yyvsp[-3].node);
		ST->curEnv->returnType = (yyvsp[-4].node)->place;
		ST->curEnv->name = (yyvsp[-3].node)->place;
    }
#line 3073 "parser.tab.c"
    break;

  case 77: /* MethodHeader: VOID MemberName '(' FormalParameterList ')'  */
#line 560 "parser.y"
                                                           { 
        (yyval.node) = (yyvsp[-3].node);
		ST->curEnv->name = (yyvsp[-3].node)->place;
		(yyval.node)->code = (yyvsp[-1].node)->code;
    }
#line 3083 "parser.tab.c"
    break;

  case 78: /* MethodHeader: VOID MemberName '(' ')'  */
#line 565 "parser.y"
                                      { 
        (yyval.node) = (yyvsp[-2].node);
		ST->curEnv->name = (yyvsp[-2].node)->place;
    }
#line 3092 "parser.tab.c"
    break;

  case 79: /* MethodHeader: VOID MemberName '(' FormalParameterList ')' Dims  */
#line 569 "parser.y"
                                                              { 
        (yyval.node) = (yyvsp[-4].node);
		ST->curEnv->name = (yyvsp[-4].node)->place;
		(yyval.node)->code = (yyvsp[-2].node)->code;
    }
#line 3102 "parser.tab.c"
    break;

  case 80: /* MethodHeader: VOID MemberName '(' ')' Dims  */
#line 574 "parser.y"
                                           { 
        (yyval.node) = (yyvsp[-3].node);
		ST->curEnv->name = (yyvsp[-3].node)->place;
    }
#line 3111 "parser.tab.c"
    break;

  case 81: /* MemberName: Identifier  */
#line 581 "parser.y"
                 {
         ST->BeginScope();
         ST->curEnv->type = "METHODTYPE";
         (yyval.node) = (yyvsp[0].node);
    }
#line 3121 "parser.tab.c"
    break;

  case 82: /* FormalParameterList: ReceiverParameter  */
#line 589 "parser.y"
                                                     { (yyval.node)=(yyvsp[0].node); }
#line 3127 "parser.tab.c"
    break;

  case 83: /* FormalParameterList: FormalParameterList ',' FormalParameter  */
#line 590 "parser.y"
                                                    {
        (yyval.node) = (yyvsp[0].node);
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-2].node)->code.begin(), (yyvsp[-2].node)->code.end());
    }
#line 3136 "parser.tab.c"
    break;

  case 84: /* FormalParameterList: FormalParameter  */
#line 594 "parser.y"
                                              { (yyval.node) = (yyvsp[0].node); }
#line 3142 "parser.tab.c"
    break;

  case 85: /* FormalParameter: FINAL Type VariableDeclaratorId  */
#line 598 "parser.y"
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
#line 3162 "parser.tab.c"
    break;

  case 86: /* FormalParameter: Type VariableDeclaratorId  */
#line 613 "parser.y"
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
#line 3181 "parser.tab.c"
    break;

  case 87: /* ReceiverParameter: Type THIS  */
#line 631 "parser.y"
                                                    {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 3189 "parser.tab.c"
    break;

  case 88: /* ReceiverParameter: Type Identifier '.' THIS  */
#line 634 "parser.y"
                                                    {
          (yyval.node) = (yyvsp[-2].node);
    }
#line 3197 "parser.tab.c"
    break;

  case 89: /* MethodBody: Block  */
#line 640 "parser.y"
                                                    {(yyval.node) = (yyvsp[0].node); }
#line 3203 "parser.tab.c"
    break;

  case 90: /* MethodBody: ';'  */
#line 641 "parser.y"
                                                    {(yyval.node) = NULL; }
#line 3209 "parser.tab.c"
    break;

  case 91: /* StaticInitializer: STATIC Block  */
#line 644 "parser.y"
                                                    {
        (yyval.node) = (yyvsp[0].node);
     }
#line 3217 "parser.tab.c"
    break;

  case 92: /* ConstructorDeclaration: MULTI_ClassModifier ConstructorDeclarator ConstructorBody  */
#line 650 "parser.y"
                                                                    { 
        (yyval.node) = (yyvsp[-1].node);
		vector <TAC*> tmp;
		tmp.pb(genLabelTAC(ST->curEnv->name));
		(yyval.node)->code.insert((yyval.node)->code.begin(), tmp.begin(), tmp.end());
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());	
        ST->curEnv->type = (yyvsp[-1].node)->place;	
		ST->EndScope(); 
    }
#line 3231 "parser.tab.c"
    break;

  case 93: /* ConstructorDeclaration: ConstructorDeclarator ConstructorBody  */
#line 659 "parser.y"
                                             { 
        (yyval.node) = (yyvsp[-1].node);
		vector <TAC*> tmp;
		tmp.pb(genLabelTAC(ST->curEnv->name));
		(yyval.node)->code.insert((yyval.node)->code.begin(), tmp.begin(), tmp.end());
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());	
        ST->curEnv->type = (yyvsp[-1].node)->place;	
		ST->EndScope();
    }
#line 3245 "parser.tab.c"
    break;

  case 94: /* ConstructorDeclarator: Identifier '(' FormalParameterList ')'  */
#line 671 "parser.y"
                                             { 
        ST->BeginScope();
        ST->curEnv->type = "CONTRUCTORTYPE";
        (yyval.node) = (yyvsp[-3].node);
		ST->curEnv->name = (yyvsp[-3].node)->place;
        (yyval.node)->code = (yyvsp[-1].node)->code;
    }
#line 3257 "parser.tab.c"
    break;

  case 95: /* ConstructorDeclarator: Identifier '(' ')'  */
#line 678 "parser.y"
                           { 
        ST->BeginScope();
        ST->curEnv->type = "CONTRUCTORTYPE";
        (yyval.node) = (yyvsp[-2].node);
		ST->curEnv->name = (yyvsp[-2].node)->place;
    }
#line 3268 "parser.tab.c"
    break;

  case 96: /* ConstructorBody: '{' ExplicitConstructorInvocation BlockStatements '}'  */
#line 687 "parser.y"
                                                                           { genNode *n1 = createNode("Separator", (yyvsp[-3].str), {});genNode *n4= createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("ConstructorBody","",{n1,(yyvsp[-2].node),(yyvsp[-1].node),n4}); }
#line 3274 "parser.tab.c"
    break;

  case 97: /* ConstructorBody: '{' BlockStatements '}'  */
#line 688 "parser.y"
                                                                           { genNode *n1 = createNode("Separator", (yyvsp[-2].str), {});genNode *n3= createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("ConstructorBody","",{n1,(yyvsp[-1].node),n3}); }
#line 3280 "parser.tab.c"
    break;

  case 98: /* ConstructorBody: '{' ExplicitConstructorInvocation '}'  */
#line 689 "parser.y"
                                                                           { genNode *n1 = createNode("Separator", (yyvsp[-2].str), {});genNode *n3= createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("ConstructorBody","",{n1,(yyvsp[-1].node),n3}); }
#line 3286 "parser.tab.c"
    break;

  case 99: /* ConstructorBody: '{' '}'  */
#line 690 "parser.y"
                                                                           { genNode *n1 = createNode("Separator", (yyvsp[-1].str), {});genNode *n2= createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("ConstructorBody","",{n1,n2}); }
#line 3292 "parser.tab.c"
    break;

  case 100: /* ExplicitConstructorInvocation: THIS SINGLE_ArgumentList  */
#line 694 "parser.y"
                                                                           { genNode * n1 = createNode("KEYWORD", (yyvsp[-1].str), {});(yyval.node) = createNode("ExplicitConstructorInvocation","", {n1,(yyvsp[0].node)}); }
#line 3298 "parser.tab.c"
    break;

  case 101: /* SINGLE_ArgumentList: '(' ')' ';'  */
#line 698 "parser.y"
                                                       { genNode *n1 = createNode("Separator", (yyvsp[-2].str), {});genNode *n2 = createNode("Separator", (yyvsp[-1].str), {});genNode *n3 = createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("SINGLE_ArgumentList","",{n1,n2,n3});  }
#line 3304 "parser.tab.c"
    break;

  case 102: /* SINGLE_ArgumentList: '(' ArgumentList ')' ';'  */
#line 699 "parser.y"
                                                       { genNode *n1 = createNode("Separator", (yyvsp[-3].str), {});genNode *n3 = createNode("Separator", (yyvsp[-1].str), {});genNode *n4 = createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("SINGLE_ArgumentList","",{n1,(yyvsp[-2].node),n3,n4});  }
#line 3310 "parser.tab.c"
    break;

  case 103: /* Block: '{' BlockStatements '}'  */
#line 703 "parser.y"
                                             { ST->BeginScope();   (yyval.node) = (yyvsp[-1].node); ST->EndScope(); }
#line 3316 "parser.tab.c"
    break;

  case 104: /* Block: '{' '}'  */
#line 704 "parser.y"
                                             { ST->BeginScope();   (yyval.node) = NULL; ST->EndScope();}
#line 3322 "parser.tab.c"
    break;

  case 105: /* BlockStatements: BlockStatement  */
#line 708 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3328 "parser.tab.c"
    break;

  case 106: /* BlockStatements: BlockStatements BlockStatement  */
#line 709 "parser.y"
                                             { 
        (yyval.node) = (yyvsp[-1].node);
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
    }
#line 3337 "parser.tab.c"
    break;

  case 107: /* BlockStatement: LocalVariableDeclarationStatement  */
#line 716 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3343 "parser.tab.c"
    break;

  case 108: /* BlockStatement: ClassDeclaration  */
#line 717 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3349 "parser.tab.c"
    break;

  case 109: /* BlockStatement: Statement  */
#line 718 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3355 "parser.tab.c"
    break;

  case 110: /* LocalVariableDeclarationStatement: LocalVariableDeclaration ';'  */
#line 722 "parser.y"
                                             { 
        (yyval.node) = (yyvsp[-1].node);
    }
#line 3363 "parser.tab.c"
    break;

  case 111: /* LocalVariableDeclaration: Type VariableDeclaratorList  */
#line 728 "parser.y"
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
#line 3381 "parser.tab.c"
    break;

  case 112: /* Statement: StatementWithoutTrailingSubstatement  */
#line 745 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3387 "parser.tab.c"
    break;

  case 113: /* Statement: LabeledStatement  */
#line 746 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3393 "parser.tab.c"
    break;

  case 114: /* Statement: IfThenStatement  */
#line 747 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3399 "parser.tab.c"
    break;

  case 115: /* Statement: IfThenElseStatement  */
#line 748 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3405 "parser.tab.c"
    break;

  case 116: /* Statement: WhileStatement  */
#line 749 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3411 "parser.tab.c"
    break;

  case 117: /* Statement: ForStatement  */
#line 750 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3417 "parser.tab.c"
    break;

  case 118: /* StatementNoShortIf: StatementWithoutTrailingSubstatement  */
#line 754 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3423 "parser.tab.c"
    break;

  case 119: /* StatementNoShortIf: LabeledStatementNoShortIf  */
#line 755 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3429 "parser.tab.c"
    break;

  case 120: /* StatementNoShortIf: IfThenElseStatementNoShortIf  */
#line 756 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3435 "parser.tab.c"
    break;

  case 121: /* StatementNoShortIf: WhileStatementNoShortIf  */
#line 757 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3441 "parser.tab.c"
    break;

  case 122: /* StatementNoShortIf: ForStatementNoShortIf  */
#line 758 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3447 "parser.tab.c"
    break;

  case 123: /* StatementWithoutTrailingSubstatement: Block  */
#line 762 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3453 "parser.tab.c"
    break;

  case 124: /* StatementWithoutTrailingSubstatement: EmptyStatement  */
#line 763 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3459 "parser.tab.c"
    break;

  case 125: /* StatementWithoutTrailingSubstatement: ExpressionStatement  */
#line 764 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3465 "parser.tab.c"
    break;

  case 126: /* StatementWithoutTrailingSubstatement: BreakStatement  */
#line 765 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3471 "parser.tab.c"
    break;

  case 127: /* StatementWithoutTrailingSubstatement: ContinueStatement  */
#line 766 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3477 "parser.tab.c"
    break;

  case 128: /* StatementWithoutTrailingSubstatement: ReturnStatement  */
#line 767 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3483 "parser.tab.c"
    break;

  case 129: /* EmptyStatement: ';'  */
#line 771 "parser.y"
                                             {  }
#line 3489 "parser.tab.c"
    break;

  case 130: /* LabeledStatement: Identifier ':' Statement  */
#line 775 "parser.y"
                                             { 
        (yyval.node) = (yyvsp[-2].node);
        (yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
    }
#line 3498 "parser.tab.c"
    break;

  case 131: /* LabeledStatementNoShortIf: Identifier ':' StatementNoShortIf  */
#line 782 "parser.y"
                                              { 
        (yyval.node) = (yyvsp[-2].node);
        (yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
    }
#line 3507 "parser.tab.c"
    break;

  case 132: /* ExpressionStatement: StatementExpression ';'  */
#line 789 "parser.y"
                                              { (yyval.node) = (yyvsp[-1].node); }
#line 3513 "parser.tab.c"
    break;

  case 133: /* StatementExpression: Assignment  */
#line 793 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3519 "parser.tab.c"
    break;

  case 134: /* StatementExpression: PreIncrementExpression  */
#line 794 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3525 "parser.tab.c"
    break;

  case 135: /* StatementExpression: PreDecrementExpression  */
#line 795 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3531 "parser.tab.c"
    break;

  case 136: /* StatementExpression: PostIncrementExpression  */
#line 796 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3537 "parser.tab.c"
    break;

  case 137: /* StatementExpression: PostDecrementExpression  */
#line 797 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3543 "parser.tab.c"
    break;

  case 138: /* StatementExpression: MethodInvocation  */
#line 798 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3549 "parser.tab.c"
    break;

  case 139: /* StatementExpression: ClassInstanceCreationExpression  */
#line 799 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3555 "parser.tab.c"
    break;

  case 140: /* IfThenStatement: IF '(' Expression ')' Statement  */
#line 803 "parser.y"
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
#line 3582 "parser.tab.c"
    break;

  case 141: /* IfThenElseStatement: IF '(' Expression ')' StatementNoShortIf ELSE Statement  */
#line 828 "parser.y"
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
#line 3614 "parser.tab.c"
    break;

  case 142: /* IfThenElseStatementNoShortIf: IF '(' Expression ')' StatementNoShortIf ELSE StatementNoShortIf  */
#line 858 "parser.y"
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
#line 3646 "parser.tab.c"
    break;

  case 143: /* WhileStatement: WHILE '(' Expression ')' Statement  */
#line 888 "parser.y"
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
#line 3688 "parser.tab.c"
    break;

  case 144: /* WhileStatementNoShortIf: WHILE '(' Expression ')' StatementNoShortIf  */
#line 928 "parser.y"
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
#line 3730 "parser.tab.c"
    break;

  case 145: /* ForStatement: BasicForStatement  */
#line 968 "parser.y"
                                                 {(yyval.node)=(yyvsp[0].node);}
#line 3736 "parser.tab.c"
    break;

  case 146: /* ForStatement: EnhancedForStatement  */
#line 969 "parser.y"
                                                 {(yyval.node)=(yyvsp[0].node);}
#line 3742 "parser.tab.c"
    break;

  case 147: /* ForStatementNoShortIf: BasicForStatementNoShortIf  */
#line 973 "parser.y"
                                                 {(yyval.node)=(yyvsp[0].node);}
#line 3748 "parser.tab.c"
    break;

  case 148: /* ForStatementNoShortIf: EnhancedForStatementNoShortIf  */
#line 974 "parser.y"
                                                 {(yyval.node)=(yyvsp[0].node);}
#line 3754 "parser.tab.c"
    break;

  case 149: /* BasicForStatement: FOR '(' SingleForInit ';' SingleExpression ';' SingleForUpdate ')' Statement  */
#line 978 "parser.y"
                                                                                     { genNode *n1 = createNode("KEYWORD", (yyvsp[-8].str), {});genNode *n2 = createNode("Separator", (yyvsp[-7].str), {});genNode *n4 = createNode("Separator", (yyvsp[-5].str), {});genNode *n6 = createNode("Separator", (yyvsp[-3].str), {});genNode *n8 = createNode("Separator", (yyvsp[-1].str), {}); (yyval.node)=createNode("BasicForStatement","",{n1,n2,(yyvsp[-6].node),n4,(yyvsp[-4].node),n6,(yyvsp[-2].node),n8,(yyvsp[0].node)}); }
#line 3760 "parser.tab.c"
    break;

  case 150: /* SingleForInit: %empty  */
#line 982 "parser.y"
               {(yyval.node)=createNode("singleForInit","",{});}
#line 3766 "parser.tab.c"
    break;

  case 151: /* SingleForInit: ForInit  */
#line 983 "parser.y"
                           {(yyval.node)=(yyvsp[0].node);}
#line 3772 "parser.tab.c"
    break;

  case 152: /* SingleExpression: %empty  */
#line 987 "parser.y"
                {(yyval.node)=createNode("singleExpression","",{});}
#line 3778 "parser.tab.c"
    break;

  case 153: /* SingleExpression: Expression  */
#line 988 "parser.y"
                           {(yyval.node)=(yyvsp[0].node);}
#line 3784 "parser.tab.c"
    break;

  case 154: /* SingleForUpdate: %empty  */
#line 992 "parser.y"
                {(yyval.node)=createNode("singleForUpdate","",{});}
#line 3790 "parser.tab.c"
    break;

  case 155: /* SingleForUpdate: ForUpdate  */
#line 993 "parser.y"
                           {(yyval.node)=(yyvsp[0].node);}
#line 3796 "parser.tab.c"
    break;

  case 156: /* BasicForStatementNoShortIf: FOR '(' SingleForInit ';' SingleExpression ';' SingleForUpdate ')' StatementNoShortIf  */
#line 997 "parser.y"
                                                                                               {genNode *n1 = createNode("KEYWORD", (yyvsp[-8].str), {});genNode *n2 = createNode("Separator", (yyvsp[-7].str), {});genNode *n4 = createNode("Separator", (yyvsp[-5].str), {});genNode *n6 = createNode("Separator", (yyvsp[-3].str), {});genNode *n8 = createNode("Separator", (yyvsp[-1].str), {});  (yyval.node)=createNode("BasicForStatementNoShortIf","",{n1,n2,(yyvsp[-6].node),n4,(yyvsp[-4].node),n6,(yyvsp[-2].node),n8,(yyvsp[0].node)}); }
#line 3802 "parser.tab.c"
    break;

  case 157: /* ForInit: StatementExpressionList  */
#line 1001 "parser.y"
                                       {(yyval.node)=(yyvsp[0].node);}
#line 3808 "parser.tab.c"
    break;

  case 158: /* ForInit: LocalVariableDeclaration  */
#line 1002 "parser.y"
                                       {(yyval.node)=(yyvsp[0].node);}
#line 3814 "parser.tab.c"
    break;

  case 159: /* ForUpdate: StatementExpressionList  */
#line 1006 "parser.y"
                                       {(yyval.node)=(yyvsp[0].node);}
#line 3820 "parser.tab.c"
    break;

  case 160: /* StatementExpressionList: StatementExpression  */
#line 1010 "parser.y"
                                                        {(yyval.node)=createNode("StatementExpressionList", "", {(yyvsp[0].node)});}
#line 3826 "parser.tab.c"
    break;

  case 161: /* StatementExpressionList: StatementExpressionList ',' StatementExpression  */
#line 1011 "parser.y"
                                                        {(yyval.node) = (yyvsp[-2].node); (yyval.node)->children.push_back((yyvsp[0].node));genNode *temp1=createNode("Separator",(yyvsp[-1].str),{});(yyval.node)->children.push_back(temp1);}
#line 3832 "parser.tab.c"
    break;

  case 162: /* EnhancedForStatement: FOR '(' Type VariableDeclaratorId ':' Expression ')' Statement  */
#line 1015 "parser.y"
                                                                              { genNode *n1 = createNode("KEYWORD", (yyvsp[-7].str), {});genNode *n2 = createNode("Separator", (yyvsp[-6].str), {});genNode *n5 = createNode("Separator", (yyvsp[-3].str), {});genNode *n7 = createNode("Separator", (yyvsp[-1].str), {}); (yyval.node)=createNode("EnhancedForStatement","",{n1,n2,(yyvsp[-5].node),(yyvsp[-4].node),n5,(yyvsp[-2].node),n7,(yyvsp[0].node)}); }
#line 3838 "parser.tab.c"
    break;

  case 163: /* EnhancedForStatementNoShortIf: FOR '(' Type VariableDeclaratorId ':' Expression ')' StatementNoShortIf  */
#line 1019 "parser.y"
                                                                                    { genNode *n1 = createNode("KEYWORD", (yyvsp[-7].str), {});genNode *n2 = createNode("Separator", (yyvsp[-6].str), {});genNode *n5 = createNode("Separator", (yyvsp[-3].str), {});genNode *n7 = createNode("Separator", (yyvsp[-1].str), {});  (yyval.node)=createNode("EnhancedForStatementNoShortIf","",{n1,n2,(yyvsp[-5].node),(yyvsp[-4].node),n5,(yyvsp[-2].node),n7,(yyvsp[0].node)});}
#line 3844 "parser.tab.c"
    break;

  case 164: /* BreakStatement: BREAK IDENTIFIER ';'  */
#line 1023 "parser.y"
                                  {genNode* n1=createNode("Keyword",(yyvsp[-2].str),{});genNode* n2=createNode("Identifier",(yyvsp[-1].str),{});genNode* n3=createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("BreakStatement","",{n1,n2,n3});}
#line 3850 "parser.tab.c"
    break;

  case 165: /* BreakStatement: BREAK ';'  */
#line 1024 "parser.y"
                                  {genNode* n1=createNode("Keyword",(yyvsp[-1].str),{}); genNode* n2=createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("BreakStatement","",{n1,n2});}
#line 3856 "parser.tab.c"
    break;

  case 166: /* ContinueStatement: CONTINUE IDENTIFIER ';'  */
#line 1028 "parser.y"
                                  {genNode* n1=createNode("Keyword",(yyvsp[-2].str),{});genNode* n2=createNode("Identifier",(yyvsp[-1].str),{});genNode* n3=createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("ContinueStatement","",{n1,n2,n3});}
#line 3862 "parser.tab.c"
    break;

  case 167: /* ContinueStatement: CONTINUE ';'  */
#line 1029 "parser.y"
                                  {genNode* n1=createNode("Keyword",(yyvsp[-1].str),{}); genNode* n2=createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("ContinueStatement","",{n1,n2});}
#line 3868 "parser.tab.c"
    break;

  case 168: /* ReturnStatement: RETURN Expression ';'  */
#line 1033 "parser.y"
                                  {genNode* n1=createNode("Keyword",(yyvsp[-2].str),{});genNode* n3=createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("BreakStatement","",{n1,(yyvsp[-1].node),n3});}
#line 3874 "parser.tab.c"
    break;

  case 169: /* ReturnStatement: RETURN ';'  */
#line 1034 "parser.y"
                                  {genNode* n1=createNode("Keyword",(yyvsp[-1].str),{}); genNode* n2=createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("BreakStatement","",{n1,n2});}
#line 3880 "parser.tab.c"
    break;

  case 170: /* Primary: PrimaryNoNewArray  */
#line 1038 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 3886 "parser.tab.c"
    break;

  case 171: /* Primary: ArrayCreationExpression  */
#line 1039 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 3892 "parser.tab.c"
    break;

  case 172: /* PrimaryNoNewArray: Literal  */
#line 1043 "parser.y"
                                                                                   {(yyval.node)=(yyvsp[0].node);}
#line 3898 "parser.tab.c"
    break;

  case 173: /* PrimaryNoNewArray: ClassLiteral  */
#line 1044 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 3904 "parser.tab.c"
    break;

  case 174: /* PrimaryNoNewArray: THIS  */
#line 1045 "parser.y"
                                                                                    {(yyval.node)=createNode("KEYWORD",(yyvsp[0].str),{});}
#line 3910 "parser.tab.c"
    break;

  case 175: /* PrimaryNoNewArray: TypeName '.' THIS  */
#line 1046 "parser.y"
                                                                                    {genNode *temp = createNode("KEYWORD",(yyvsp[0].str),{});genNode *temp1 = createNode("Separator",(yyvsp[-1].str),{} ); (yyval.node)=createNode("PRIMARYNONEWARRAY","",{(yyvsp[-2].node),temp,temp1});}
#line 3916 "parser.tab.c"
    break;

  case 176: /* PrimaryNoNewArray: '(' Expression ')'  */
#line 1047 "parser.y"
                                                                                    {//genNode *temp = createNode("Separator",$3,{});genNode *temp1 = createNode("Separator",$1,{} ); $$=createNode("PRIMARYNONEWARRAY","",{$2,temp,temp1});
                                                                                       (yyval.node) = (yyvsp[-1].node); }
#line 3923 "parser.tab.c"
    break;

  case 177: /* PrimaryNoNewArray: ClassInstanceCreationExpression  */
#line 1049 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 3929 "parser.tab.c"
    break;

  case 178: /* PrimaryNoNewArray: FieldAccess  */
#line 1050 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 3935 "parser.tab.c"
    break;

  case 179: /* PrimaryNoNewArray: ArrayAccess  */
#line 1051 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 3941 "parser.tab.c"
    break;

  case 180: /* PrimaryNoNewArray: MethodInvocation  */
#line 1052 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 3947 "parser.tab.c"
    break;

  case 181: /* PrimaryNoNewArray: MethodReference  */
#line 1053 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 3953 "parser.tab.c"
    break;

  case 182: /* Literal: BooleanLiteral  */
#line 1057 "parser.y"
                      {(yyval.node)=(yyvsp[0].node);}
#line 3959 "parser.tab.c"
    break;

  case 183: /* Literal: IntegerLiteral  */
#line 1058 "parser.y"
                      {(yyval.node)=(yyvsp[0].node);}
#line 3965 "parser.tab.c"
    break;

  case 184: /* Literal: CharacterLiteral  */
#line 1059 "parser.y"
                       {(yyval.node)=(yyvsp[0].node);}
#line 3971 "parser.tab.c"
    break;

  case 185: /* Literal: StringLiteral  */
#line 1060 "parser.y"
                    {(yyval.node)=(yyvsp[0].node);}
#line 3977 "parser.tab.c"
    break;

  case 186: /* Literal: NullLiteral  */
#line 1061 "parser.y"
                   {(yyval.node)=(yyvsp[0].node);}
#line 3983 "parser.tab.c"
    break;

  case 187: /* BooleanLiteral: TRUELITERAL  */
#line 1065 "parser.y"
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
#line 3998 "parser.tab.c"
    break;

  case 188: /* BooleanLiteral: FALSELITERAL  */
#line 1075 "parser.y"
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
#line 4013 "parser.tab.c"
    break;

  case 189: /* IntegerLiteral: INTEGERLITERAL  */
#line 1088 "parser.y"
                        {
			genNode* n1 = new genNode();
			(yyval.node) = n1;
			(yyval.node)->type = "int";
			(yyval.node)->place = to_string((yyvsp[0].ival));
			(yyval.node)->isLit = true;
            (yyval.node)->label = "IntegerLiteral";
            (yyval.node)->value = to_string((yyvsp[0].ival));
		}
#line 4027 "parser.tab.c"
    break;

  case 190: /* CharacterLiteral: CHARACTERLITERAL  */
#line 1100 "parser.y"
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
#line 4042 "parser.tab.c"
    break;

  case 191: /* StringLiteral: STRINGLITERAL  */
#line 1113 "parser.y"
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
#line 4057 "parser.tab.c"
    break;

  case 192: /* NullLiteral: NULLLITERAL  */
#line 1126 "parser.y"
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
#line 4072 "parser.tab.c"
    break;

  case 193: /* ClassLiteral: TypeName Dims '.' CLASS  */
#line 1141 "parser.y"
                                                                                    {genNode *temp = createNode("KEYWORD",(yyvsp[0].str),{});genNode *temp1 = createNode("Separator",(yyvsp[-1].str),{});
                                                                                      (yyval.node) = createNode("CLASS_LITERAL","",{(yyvsp[-3].node),(yyvsp[-2].node),temp,temp1});}
#line 4079 "parser.tab.c"
    break;

  case 194: /* ClassLiteral: TypeName '.' CLASS  */
#line 1143 "parser.y"
                                                                                    {genNode *temp = createNode("KEYWORD",(yyvsp[0].str),{});genNode *temp1 = createNode("Separator",(yyvsp[-1].str),{});
                                                                                     (yyval.node) = createNode("CLASS_LITERAL","",{(yyvsp[-2].node),temp,temp1});}
#line 4086 "parser.tab.c"
    break;

  case 195: /* ClassLiteral: PrimitiveType Dims '.' CLASS  */
#line 1145 "parser.y"
                                                                                    {genNode *temp = createNode("KEYWORD",(yyvsp[0].str),{});genNode *temp1 = createNode("Separator",(yyvsp[-1].str),{});
                                                                                     (yyval.node) = createNode("CLASS_LITERAL","",{(yyvsp[-3].node),(yyvsp[-2].node),temp,temp1});}
#line 4093 "parser.tab.c"
    break;

  case 196: /* ClassLiteral: PrimitiveType '.' CLASS  */
#line 1147 "parser.y"
                                                                                {genNode *temp = createNode("KEYWORD",(yyvsp[0].str),{});genNode *temp1 = createNode("Separator",(yyvsp[-1].str),{});
                                                                                     (yyval.node) = createNode("CLASS_LITERAL","",{(yyvsp[-2].node),temp,temp1});}
#line 4100 "parser.tab.c"
    break;

  case 197: /* ClassLiteral: VOID '.' CLASS  */
#line 1149 "parser.y"
                                                                                    {genNode *temp = createNode("KEYWORD",(yyvsp[0].str),{});genNode *temp2= createNode("Separator",(yyvsp[-1].str),{});
                                                                                     genNode *temp1 = createNode("KEYWORD",(yyvsp[-2].str),{});
                                                                                     (yyval.node) = createNode("CLASS_LITERAL","",{temp1,temp,temp2});}
#line 4108 "parser.tab.c"
    break;

  case 198: /* ClassInstanceCreationExpression: UnqualifiedClassInstanceCreationExpression  */
#line 1155 "parser.y"
                                                                                         {(yyval.node)=(yyvsp[0].node);}
#line 4114 "parser.tab.c"
    break;

  case 199: /* ClassInstanceCreationExpression: TypeName '.' UnqualifiedClassInstanceCreationExpression  */
#line 1156 "parser.y"
                                                                                       {genNode *temp1 = createNode("Separator",(yyvsp[-1].str),{});(yyval.node)=createNode("CLASS_INSTANCE","",{(yyvsp[-2].node),(yyvsp[0].node),temp1});}
#line 4120 "parser.tab.c"
    break;

  case 200: /* ClassInstanceCreationExpression: Primary '.' UnqualifiedClassInstanceCreationExpression  */
#line 1157 "parser.y"
                                                                                         {genNode *temp1 = createNode("Separator",(yyvsp[-1].str),{});(yyval.node)=createNode("CLASS_INSTANCE","",{(yyvsp[-2].node),(yyvsp[0].node),temp1});}
#line 4126 "parser.tab.c"
    break;

  case 201: /* UnqualifiedClassInstanceCreationExpression: NEW TypeName '(' ArgumentList ')'  */
#line 1161 "parser.y"
                                                                                        {genNode *temp = createNode("KEYWORD",(yyvsp[-4].str),{});
                                                                                        genNode *temp1 = createNode("Separator",(yyvsp[-2].str),{});genNode *temp2 = createNode("Separator",(yyvsp[0].str),{});(yyval.node) = createNode("unqualifiedClassInstance","",{temp,(yyvsp[-3].node),(yyvsp[-1].node),temp1,temp2});}
#line 4133 "parser.tab.c"
    break;

  case 202: /* UnqualifiedClassInstanceCreationExpression: NEW TypeName '(' ArgumentList ')' ClassBody  */
#line 1163 "parser.y"
                                                                                        {genNode *temp = createNode("KEYWORD",(yyvsp[-5].str),{});genNode *temp1 = createNode("Separator",(yyvsp[-3].str),{});genNode *temp2= createNode("Separator",(yyvsp[-1].str),{});
                                                                                        (yyval.node) = createNode("unqualifiedClassInstance","",{temp,(yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node),temp1,temp2});}
#line 4140 "parser.tab.c"
    break;

  case 203: /* UnqualifiedClassInstanceCreationExpression: NEW TypeName '(' ')' ClassBody  */
#line 1165 "parser.y"
                                                                                        {genNode *temp = createNode("KEYWORD",(yyvsp[-4].str),{});genNode *temp1 = createNode("Separator",(yyvsp[-2].str),{});genNode *temp2 = createNode("Separator",(yyvsp[-1].str),{});
                            
                                                                                        (yyval.node) = createNode("unqualifiedClassInstance","",{temp,(yyvsp[-3].node),temp1,(yyvsp[0].node),temp2});}
#line 4148 "parser.tab.c"
    break;

  case 204: /* UnqualifiedClassInstanceCreationExpression: NEW TypeName '(' ')'  */
#line 1168 "parser.y"
                                                                                        {genNode *temp = createNode("KEYWORD",(yyvsp[-3].str),{});
                                                                                        genNode *temp1 = createNode("Separator",(yyvsp[-1].str),{});genNode *temp2 = createNode("Separator",(yyvsp[0].str),{});
                                                                                        (yyval.node) = createNode("unqualifiedClassInstance","",{temp,(yyvsp[-2].node),temp1,temp2});}
#line 4156 "parser.tab.c"
    break;

  case 205: /* FieldAccess: Primary '.' IDENTIFIER  */
#line 1174 "parser.y"
                                                                                       {genNode *temp = createNode("Identifier",(yyvsp[0].str),{});genNode *temp1 = createNode("Separator",(yyvsp[-1].str),{});
                                                                                        (yyval.node) = createNode("FIELDACC","",{(yyvsp[-2].node),temp,temp1});}
#line 4163 "parser.tab.c"
    break;

  case 206: /* ArrayAccess: TypeName '[' Expression ']'  */
#line 1179 "parser.y"
                                                           {genNode *n2 = createNode("Separator",(yyvsp[-2].str),{});genNode *n4 = createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("ARRAY","",{(yyvsp[-3].node),n2,(yyvsp[-1].node),n4});}
#line 4169 "parser.tab.c"
    break;

  case 207: /* ArrayAccess: PrimaryNoNewArray '[' Expression ']'  */
#line 1180 "parser.y"
                                                                                       {genNode *n2 = createNode("Separator",(yyvsp[-2].str),{});genNode *n4 = createNode("Separator",(yyvsp[0].str),{});(yyval.node)=createNode("ARRAY","",{(yyvsp[-3].node),n2,(yyvsp[-1].node),n4});}
#line 4175 "parser.tab.c"
    break;

  case 208: /* MethodInvocation: IDENTIFIER '(' ArgumentList ')'  */
#line 1184 "parser.y"
                                                                                       {genNode *temp = createNode("Identifier",(yyvsp[-3].str),{});genNode *temp1 = createNode("Separator",(yyvsp[-2].str),{});genNode *temp2 = createNode("Separator",(yyvsp[0].str),{});
                                                                                        (yyval.node)=createNode("methodInvocation","",{temp,temp1,(yyvsp[-1].node),temp2});}
#line 4182 "parser.tab.c"
    break;

  case 209: /* MethodInvocation: IDENTIFIER '(' ')'  */
#line 1186 "parser.y"
                                                                                       {genNode *temp = createNode("Identifier",(yyvsp[-2].str),{});genNode *temp2 = createNode("Separator",(yyvsp[-1].str),{});genNode *temp3 = createNode("Separator",(yyvsp[0].str),{});
                                                                                       
                                                                                        (yyval.node)=createNode("methodInvocation","",{temp,temp2,temp3});}
#line 4190 "parser.tab.c"
    break;

  case 210: /* MethodInvocation: TypeName '.' IDENTIFIER '(' ArgumentList ')'  */
#line 1190 "parser.y"
                                                                                       {genNode *temp3 = createNode("Identifier",(yyvsp[-3].str),{});genNode *temp2 = createNode("Separator",(yyvsp[-4].str),{});genNode *temp4 = createNode("Separator",(yyvsp[-2].str),{});genNode *temp6 = createNode("Separator",(yyvsp[0].str),{});
                                                                                        (yyval.node)=createNode("methodInvocation","",{(yyvsp[-5].node),temp2,temp3,temp4,(yyvsp[-1].node),temp6});}
#line 4197 "parser.tab.c"
    break;

  case 211: /* MethodInvocation: TypeName '.' IDENTIFIER '(' ')'  */
#line 1193 "parser.y"
                                                                                        {genNode *temp3 = createNode("Identifier",(yyvsp[-2].str),{});genNode *temp2= createNode("Separator",(yyvsp[-3].str),{});genNode *temp4= createNode("Separator",(yyvsp[-1].str),{});genNode *temp5 = createNode("Separator",(yyvsp[0].str),{});
                                                                                        (yyval.node)=createNode("methodInvocation","",{(yyvsp[-4].node),temp2,temp3,temp4,temp5});}
#line 4204 "parser.tab.c"
    break;

  case 212: /* MethodInvocation: Primary '.' IDENTIFIER '(' ArgumentList ')'  */
#line 1195 "parser.y"
                                                                                         {genNode *temp3 = createNode("Identifier",(yyvsp[-3].str),{});genNode *temp2 = createNode("Separator",(yyvsp[-4].str),{});genNode *temp4 = createNode("Separator",(yyvsp[-2].str),{});genNode *temp6 = createNode("Separator",(yyvsp[0].str),{});
                                                                                        (yyval.node)=createNode("methodInvocation","",{(yyvsp[-5].node),temp2,temp3,temp4,(yyvsp[-1].node),temp6});}
#line 4211 "parser.tab.c"
    break;

  case 213: /* MethodInvocation: Primary '.' IDENTIFIER '(' ')'  */
#line 1197 "parser.y"
                                                                                        {genNode *temp3 = createNode("Identifier",(yyvsp[-2].str),{});genNode *temp2= createNode("Separator",(yyvsp[-3].str),{});genNode *temp4= createNode("Separator",(yyvsp[-1].str),{});genNode *temp5 = createNode("Separator",(yyvsp[0].str),{});
                                                                                        (yyval.node) = createNode("methodInvocation","",{(yyvsp[-4].node),temp2,temp3,temp4,temp5});}
#line 4218 "parser.tab.c"
    break;

  case 214: /* ArgumentList: ArgumentList ',' Expression  */
#line 1202 "parser.y"
                                                                                       {genNode *temp = createNode("Separator",(yyvsp[-1].str),{}); (yyvsp[-2].node)->children.push_back(temp); (yyvsp[-2].node)->children.push_back((yyvsp[0].node));(yyval.node) = (yyvsp[-2].node);}
#line 4224 "parser.tab.c"
    break;

  case 215: /* ArgumentList: Expression  */
#line 1203 "parser.y"
                                                                                       {(yyval.node) = createNode("ARGLIST","", {(yyvsp[0].node)}); }
#line 4230 "parser.tab.c"
    break;

  case 216: /* MethodReference: TypeName PROPORTION IDENTIFIER  */
#line 1207 "parser.y"
                                             {genNode *temp = createNode("Identifier",(yyvsp[0].str),{});genNode *temp1 = createNode("KEYWORD",(yyvsp[-1].str),{});
                                                                                         (yyval.node) = createNode("METHOD_REF","",{(yyvsp[-2].node),temp,temp1});}
#line 4237 "parser.tab.c"
    break;

  case 217: /* MethodReference: ArrayType PROPORTION IDENTIFIER  */
#line 1209 "parser.y"
                                                                                        {genNode *temp = createNode("Identifier",(yyvsp[0].str),{});genNode *temp1 = createNode("KEYWORD",(yyvsp[-1].str),{});
                                                                                         (yyval.node) = createNode("METHOD_REF","",{(yyvsp[-2].node),temp,temp1});}
#line 4244 "parser.tab.c"
    break;

  case 218: /* MethodReference: Primary PROPORTION IDENTIFIER  */
#line 1211 "parser.y"
                                                                                        {genNode *temp = createNode("Identifier",(yyvsp[0].str),{});genNode *temp1 = createNode("KEYWORD",(yyvsp[-1].str),{});
                                                                                         (yyval.node) = createNode("METHOD_REF","",{(yyvsp[-2].node),temp,temp1});}
#line 4251 "parser.tab.c"
    break;

  case 219: /* MethodReference: TypeName PROPORTION NEW  */
#line 1213 "parser.y"
                                                                  {genNode *temp = createNode("KEYWORD",(yyvsp[0].str),{});genNode *temp1 = createNode("KEYWORD",(yyvsp[-1].str),{});
                                                                                         (yyval.node) = createNode("METHOD_REF","",{(yyvsp[-2].node),temp,temp1});}
#line 4258 "parser.tab.c"
    break;

  case 220: /* MethodReference: ArrayType PROPORTION NEW  */
#line 1215 "parser.y"
                                                                                        {genNode *temp = createNode("KEYWORD",(yyvsp[0].str),{});genNode *temp1 = createNode("KEYWORD",(yyvsp[-1].str),{});
                                                                                         (yyval.node) = createNode("METHOD_REF","",{(yyvsp[-2].node),temp,temp1});}
#line 4265 "parser.tab.c"
    break;

  case 221: /* ArrayCreationExpression: NEW PrimitiveType DimExprs Dims  */
#line 1220 "parser.y"
                                                                                        {genNode *temp = createNode("KEYWORD",(yyvsp[-3].str),{});
                                                                                         (yyval.node) = createNode("ARRAY_CREATION","",{temp,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)});}
#line 4272 "parser.tab.c"
    break;

  case 222: /* ArrayCreationExpression: NEW PrimitiveType DimExprs  */
#line 1222 "parser.y"
                                                                                        {genNode *temp = createNode("KEYWORD",(yyvsp[-2].str),{});
                                                                                         (yyval.node) = createNode("ARRAY_CREATION","",{temp,(yyvsp[-1].node),(yyvsp[0].node)});}
#line 4279 "parser.tab.c"
    break;

  case 223: /* ArrayCreationExpression: NEW TypeName DimExprs Dims  */
#line 1224 "parser.y"
                                                                 {genNode *temp = createNode("KEYWORD",(yyvsp[-3].str),{});
                                                                                         (yyval.node) = createNode("ARRAY_CREATION","",{temp,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)});}
#line 4286 "parser.tab.c"
    break;

  case 224: /* ArrayCreationExpression: NEW TypeName DimExprs  */
#line 1226 "parser.y"
                                                                 {genNode *temp = createNode("KEYWORD",(yyvsp[-2].str),{});
                                                                                         (yyval.node) = createNode("ARRAY_CREATION","",{temp,(yyvsp[-1].node),(yyvsp[0].node)});}
#line 4293 "parser.tab.c"
    break;

  case 225: /* ArrayCreationExpression: NEW PrimitiveType Dims ArrayInitialize  */
#line 1228 "parser.y"
                                                                                       {genNode *temp = createNode("KEYWORD",(yyvsp[-3].str),{});
                                                                                         (yyval.node) = createNode("ARRAY_CREATION","",{temp,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)});}
#line 4300 "parser.tab.c"
    break;

  case 226: /* ArrayCreationExpression: NEW TypeName Dims ArrayInitialize  */
#line 1230 "parser.y"
                                                                {genNode *temp = createNode("KEYWORD",(yyvsp[-3].str),{});
                                                                                         (yyval.node) = createNode("ARRAY_CREATION","",{temp,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)});}
#line 4307 "parser.tab.c"
    break;

  case 227: /* DimExprs: DimExpr  */
#line 1235 "parser.y"
                                                                                        {(yyval.node) = createNode("DIMEXPR","", {(yyvsp[0].node)}); }
#line 4313 "parser.tab.c"
    break;

  case 228: /* DimExprs: DimExprs DimExpr  */
#line 1236 "parser.y"
                                                                                        {(yyvsp[-1].node)->children.push_back((yyvsp[0].node)); (yyval.node) = (yyvsp[-1].node); }
#line 4319 "parser.tab.c"
    break;

  case 229: /* DimExpr: '[' Expression ']'  */
#line 1240 "parser.y"
                                                                                        {genNode *temp2=createNode("Separator",(yyvsp[-2].str),{});genNode *temp1=createNode("Separator",(yyvsp[0].str),{});(yyval.node) = createNode("DimExpr","", {temp1,temp2,(yyvsp[-1].node)});}
#line 4325 "parser.tab.c"
    break;

  case 230: /* Expression: AssignmentExpression  */
#line 1244 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4331 "parser.tab.c"
    break;

  case 231: /* AssignmentExpression: ConditionalExpression  */
#line 1248 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4337 "parser.tab.c"
    break;

  case 232: /* AssignmentExpression: Assignment  */
#line 1249 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4343 "parser.tab.c"
    break;

  case 233: /* Assignment: LeftHandSide AssignmentOperator Expression  */
#line 1253 "parser.y"
                                                        { 
    			// assignment_operator is a string
			(yyval.node) = (yyvsp[-2].node);	
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			// TAC* tac = new TAC();
			
			Symbol* sym1 = ST->GetVar((yyvsp[-2].node)->place);
			if(sym1->type == "None"){
				cerr << "Error: Symbol " <<  (yyvsp[-2].node)->place << " not defined, at line num: " << endl;
				exit(1);
			}
			if((yyvsp[0].node)->isLit==false){		
				Symbol* sym2 = ST->GetVar((yyvsp[0].node)->place);
				if(sym2->type == "None"){
					cerr << "Error: Symbol "<< (yyvsp[0].node)->place << " not defined, at line num: " << endl;
					exit(1);
				}
				if(sym1->baseType != sym2->baseType){
					cerr << "Error: Incompatible types at line num: " << endl;
					exit(1);
				}
				if(sym1->baseType == "ARRAYTYPE" || sym2->baseType == "ARRAYTYPE"){	
					cerr << "Error: Incompatible types at line num: " << endl;
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
#line 4392 "parser.tab.c"
    break;

  case 234: /* Assignment: TypeName AssignmentOperator Expression  */
#line 1297 "parser.y"
                                                            { 
    	// assignment_operator is a string
			(yyval.node) = (yyvsp[-2].node);	
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			// TAC* tac = new TAC();
			
			Symbol* sym1 = ST->GetVar((yyvsp[-2].node)->place);
			if(sym1->type == "None"){
				cerr << "Error: Symbol " <<  (yyvsp[-2].node)->place << " not defined, at line num: " << endl;
				exit(1);
			}
			if((yyvsp[0].node)->isLit==false){		
				Symbol* sym2 = ST->GetVar((yyvsp[0].node)->place);
				if(sym2->type == "None"){
					cerr << "Error: Symbol "<< (yyvsp[0].node)->place << " not defined, at line num: " << endl;
					exit(1);
				}
				if(sym1->baseType != sym2->baseType){
					cerr << "Error: Incompatible types at line num: " << endl;
					exit(1);
				}
				if(sym1->baseType == "ARRAYTYPE" || sym2->baseType == "ARRAYTYPE"){	
					cerr << "Error: Incompatible types at line num: " << endl;
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
#line 4440 "parser.tab.c"
    break;

  case 235: /* LeftHandSide: FieldAccess  */
#line 1343 "parser.y"
                                                                                        { (yyval.node)=(yyvsp[0].node); }
#line 4446 "parser.tab.c"
    break;

  case 236: /* LeftHandSide: ArrayAccess  */
#line 1344 "parser.y"
                                                                                        { (yyval.node)=(yyvsp[0].node); }
#line 4452 "parser.tab.c"
    break;

  case 237: /* AssignmentOperator: '='  */
#line 1348 "parser.y"
                                                                                        { (yyval.str) = (yyvsp[0].str);}
#line 4458 "parser.tab.c"
    break;

  case 238: /* AssignmentOperator: MUL_ASSIGN  */
#line 1349 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 4464 "parser.tab.c"
    break;

  case 239: /* AssignmentOperator: DIV_ASSIGN  */
#line 1350 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 4470 "parser.tab.c"
    break;

  case 240: /* AssignmentOperator: MOD_ASSIGN  */
#line 1351 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 4476 "parser.tab.c"
    break;

  case 241: /* AssignmentOperator: ADD_ASSIGN  */
#line 1352 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 4482 "parser.tab.c"
    break;

  case 242: /* AssignmentOperator: SUB_ASSIGN  */
#line 1353 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 4488 "parser.tab.c"
    break;

  case 243: /* AssignmentOperator: LEFT_ASSIGN  */
#line 1354 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 4494 "parser.tab.c"
    break;

  case 244: /* AssignmentOperator: RIGHT_ASSIGN  */
#line 1355 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 4500 "parser.tab.c"
    break;

  case 245: /* AssignmentOperator: UNSIGNED_RIGHT_ASSIGN  */
#line 1356 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 4506 "parser.tab.c"
    break;

  case 246: /* AssignmentOperator: AND_ASSIGN  */
#line 1357 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 4512 "parser.tab.c"
    break;

  case 247: /* AssignmentOperator: XOR_ASSIGN  */
#line 1358 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 4518 "parser.tab.c"
    break;

  case 248: /* AssignmentOperator: OR_ASSIGN  */
#line 1359 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 4524 "parser.tab.c"
    break;

  case 249: /* ConditionalExpression: ConditionalOrExpression  */
#line 1363 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4530 "parser.tab.c"
    break;

  case 250: /* ConditionalExpression: ConditionalOrExpression '?' Expression ':' ConditionalExpression  */
#line 1364 "parser.y"
                                                                                        {
    	genNode* newNode = new genNode();
		(yyval.node) = newNode;
		getCECode((yyval.node), (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 4540 "parser.tab.c"
    break;

  case 251: /* ConditionalOrExpression: ConditionalAndExpression  */
#line 1372 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4546 "parser.tab.c"
    break;

  case 252: /* ConditionalOrExpression: ConditionalOrExpression OR_OP ConditionalAndExpression  */
#line 1373 "parser.y"
                                                                                        {
    	genNode* n= new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "||", (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 4558 "parser.tab.c"
    break;

  case 253: /* ConditionalAndExpression: InclusiveOrExpression  */
#line 1383 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4564 "parser.tab.c"
    break;

  case 254: /* ConditionalAndExpression: ConditionalAndExpression AND_OP InclusiveOrExpression  */
#line 1384 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "&&", (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 4576 "parser.tab.c"
    break;

  case 255: /* InclusiveOrExpression: ExclusiveOrExpression  */
#line 1394 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4582 "parser.tab.c"
    break;

  case 256: /* InclusiveOrExpression: InclusiveOrExpression '|' ExclusiveOrExpression  */
#line 1395 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "|", (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 4594 "parser.tab.c"
    break;

  case 257: /* ExclusiveOrExpression: AndExpression  */
#line 1405 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4600 "parser.tab.c"
    break;

  case 258: /* ExclusiveOrExpression: ExclusiveOrExpression '^' AndExpression  */
#line 1406 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "^", (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 4612 "parser.tab.c"
    break;

  case 259: /* AndExpression: EqualityExpression  */
#line 1416 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4618 "parser.tab.c"
    break;

  case 260: /* AndExpression: AndExpression '&' EqualityExpression  */
#line 1417 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "&", (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 4630 "parser.tab.c"
    break;

  case 261: /* EqualityExpression: RelationalExpression  */
#line 1427 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4636 "parser.tab.c"
    break;

  case 262: /* EqualityExpression: EqualityExpression EQ_OP RelationalExpression  */
#line 1428 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "==", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 4648 "parser.tab.c"
    break;

  case 263: /* EqualityExpression: EqualityExpression NE_OP RelationalExpression  */
#line 1435 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "!=", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 4660 "parser.tab.c"
    break;

  case 264: /* RelationalExpression: ShiftExpression  */
#line 1445 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4666 "parser.tab.c"
    break;

  case 265: /* RelationalExpression: RelationalExpression '<' ShiftExpression  */
#line 1446 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "<", (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 4678 "parser.tab.c"
    break;

  case 266: /* RelationalExpression: RelationalExpression '>' ShiftExpression  */
#line 1453 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), ">", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 4690 "parser.tab.c"
    break;

  case 267: /* RelationalExpression: RelationalExpression LE_OP ShiftExpression  */
#line 1460 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "<=", (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 4702 "parser.tab.c"
    break;

  case 268: /* RelationalExpression: RelationalExpression GE_OP ShiftExpression  */
#line 1467 "parser.y"
                                                                                        {
     	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), ">=", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 4714 "parser.tab.c"
    break;

  case 269: /* ShiftExpression: AdditiveExpression  */
#line 1478 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4720 "parser.tab.c"
    break;

  case 270: /* ShiftExpression: ShiftExpression LEFT_OP AdditiveExpression  */
#line 1479 "parser.y"
                                                                                        {
        genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "<<", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 4732 "parser.tab.c"
    break;

  case 271: /* ShiftExpression: ShiftExpression RIGHT_OP AdditiveExpression  */
#line 1486 "parser.y"
                                                                                        {
        genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), ">>", (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 4744 "parser.tab.c"
    break;

  case 272: /* AdditiveExpression: MultiplicativeExpression  */
#line 1497 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4750 "parser.tab.c"
    break;

  case 273: /* AdditiveExpression: AdditiveExpression '+' MultiplicativeExpression  */
#line 1498 "parser.y"
                                                                                        {
        genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "+", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 4762 "parser.tab.c"
    break;

  case 274: /* AdditiveExpression: AdditiveExpression '-' MultiplicativeExpression  */
#line 1505 "parser.y"
                                                                                        {
        genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "-", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 4774 "parser.tab.c"
    break;

  case 275: /* MultiplicativeExpression: UnaryExpression  */
#line 1515 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4780 "parser.tab.c"
    break;

  case 276: /* MultiplicativeExpression: MultiplicativeExpression '*' UnaryExpression  */
#line 1516 "parser.y"
                                                                                        {
        genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "*", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 4792 "parser.tab.c"
    break;

  case 277: /* MultiplicativeExpression: MultiplicativeExpression '/' UnaryExpression  */
#line 1523 "parser.y"
                                                                                        {
        genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "/", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 4804 "parser.tab.c"
    break;

  case 278: /* MultiplicativeExpression: MultiplicativeExpression '%' UnaryExpression  */
#line 1530 "parser.y"
                                                                                        {
        genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "%", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 4816 "parser.tab.c"
    break;

  case 279: /* UnaryExpression: PreIncrementExpression  */
#line 1540 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4822 "parser.tab.c"
    break;

  case 280: /* UnaryExpression: PreDecrementExpression  */
#line 1541 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4828 "parser.tab.c"
    break;

  case 281: /* UnaryExpression: '+' UnaryExpression  */
#line 1542 "parser.y"
                                                                                        {
       (yyval.node) = (yyvsp[0].node);
   }
#line 4836 "parser.tab.c"
    break;

  case 282: /* UnaryExpression: '-' UnaryExpression  */
#line 1545 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		genNode* zeroNode = new genNode();
		zeroNode->isLit = true; zeroNode->place = "0"; zeroNode->type = "int";
		gen2OpCode((yyval.node), "-", zeroNode, (yyvsp[0].node), line);
   }
#line 4848 "parser.tab.c"
    break;

  case 283: /* UnaryExpression: UnaryExpressionNotPlusMinus  */
#line 1552 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4854 "parser.tab.c"
    break;

  case 284: /* PreIncrementExpression: INC_OP UnaryExpression  */
#line 1556 "parser.y"
                                                                                        {
    	(yyval.node) = (yyvsp[0].node);
		getPreUnaryOpCode("++", (yyval.node), (yyvsp[0].node), line);
   }
#line 4863 "parser.tab.c"
    break;

  case 285: /* PreDecrementExpression: DEC_OP UnaryExpression  */
#line 1563 "parser.y"
                                                                                        {
    	(yyval.node) = (yyvsp[0].node);
		getPreUnaryOpCode("--", (yyval.node), (yyvsp[0].node), line);
   }
#line 4872 "parser.tab.c"
    break;

  case 286: /* UnaryExpressionNotPlusMinus: PostfixExpression  */
#line 1570 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4878 "parser.tab.c"
    break;

  case 287: /* UnaryExpressionNotPlusMinus: '~' UnaryExpression  */
#line 1571 "parser.y"
                                                                                        {
   }
#line 4885 "parser.tab.c"
    break;

  case 288: /* UnaryExpressionNotPlusMinus: '!' UnaryExpression  */
#line 1573 "parser.y"
                                                                                        {

   }
#line 4893 "parser.tab.c"
    break;

  case 289: /* UnaryExpressionNotPlusMinus: CastExpression  */
#line 1576 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4899 "parser.tab.c"
    break;

  case 290: /* PostfixExpression: Primary  */
#line 1580 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4905 "parser.tab.c"
    break;

  case 291: /* PostfixExpression: TypeName  */
#line 1581 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4911 "parser.tab.c"
    break;

  case 292: /* PostfixExpression: PostIncrementExpression  */
#line 1582 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4917 "parser.tab.c"
    break;

  case 293: /* PostfixExpression: PostDecrementExpression  */
#line 1583 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4923 "parser.tab.c"
    break;

  case 294: /* PostIncrementExpression: PostfixExpression INC_OP  */
#line 1587 "parser.y"
                                                                                        {
        // $$ = $1;
		// getPreUnaryOpCode("--", $$, $2, line);
   }
#line 4932 "parser.tab.c"
    break;

  case 295: /* PostDecrementExpression: PostfixExpression DEC_OP  */
#line 1594 "parser.y"
                                                                                        {
    // genNode * temp = createNode("operator",$2,{});
    //                                                                                      $$=createNode("unaryOperator","",{$1,temp});
   }
#line 4941 "parser.tab.c"
    break;

  case 296: /* CastExpression: '(' PrimitiveType ')' UnaryExpression  */
#line 1601 "parser.y"
                                                                                        {

   }
#line 4949 "parser.tab.c"
    break;


#line 4953 "parser.tab.c"

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

#line 1609 "parser.y"


int main (void) {
    yyparse();

    // generateDotFile();
    cout<< "\n\n\n";
    ST->PrintTable(ST->baseEnv);
    

    return 1;
}

void yyerror (const char *str) {cerr<<"Line "<<line<<": "<<str<<endl;}
