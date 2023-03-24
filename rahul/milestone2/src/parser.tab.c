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
  YYSYMBOL_BlockStart = 132,               /* BlockStart  */
  YYSYMBOL_BlockStatements = 133,          /* BlockStatements  */
  YYSYMBOL_BlockStatement = 134,           /* BlockStatement  */
  YYSYMBOL_LocalVariableDeclarationStatement = 135, /* LocalVariableDeclarationStatement  */
  YYSYMBOL_LocalVariableDeclaration = 136, /* LocalVariableDeclaration  */
  YYSYMBOL_Statement = 137,                /* Statement  */
  YYSYMBOL_StatementNoShortIf = 138,       /* StatementNoShortIf  */
  YYSYMBOL_StatementWithoutTrailingSubstatement = 139, /* StatementWithoutTrailingSubstatement  */
  YYSYMBOL_EmptyStatement = 140,           /* EmptyStatement  */
  YYSYMBOL_LabeledStatement = 141,         /* LabeledStatement  */
  YYSYMBOL_LabeledStatementNoShortIf = 142, /* LabeledStatementNoShortIf  */
  YYSYMBOL_ExpressionStatement = 143,      /* ExpressionStatement  */
  YYSYMBOL_StatementExpression = 144,      /* StatementExpression  */
  YYSYMBOL_IfThenStatement = 145,          /* IfThenStatement  */
  YYSYMBOL_IfThenElseStatement = 146,      /* IfThenElseStatement  */
  YYSYMBOL_IfThenElseStatementNoShortIf = 147, /* IfThenElseStatementNoShortIf  */
  YYSYMBOL_WhileStatement = 148,           /* WhileStatement  */
  YYSYMBOL_WhileStatementNoShortIf = 149,  /* WhileStatementNoShortIf  */
  YYSYMBOL_ForStatement = 150,             /* ForStatement  */
  YYSYMBOL_ForStatementNoShortIf = 151,    /* ForStatementNoShortIf  */
  YYSYMBOL_BasicForStatement = 152,        /* BasicForStatement  */
  YYSYMBOL_BasicForStatementNoShortIf = 153, /* BasicForStatementNoShortIf  */
  YYSYMBOL_ForInit = 154,                  /* ForInit  */
  YYSYMBOL_ForUpdate = 155,                /* ForUpdate  */
  YYSYMBOL_StatementExpressionList = 156,  /* StatementExpressionList  */
  YYSYMBOL_BreakStatement = 157,           /* BreakStatement  */
  YYSYMBOL_ContinueStatement = 158,        /* ContinueStatement  */
  YYSYMBOL_ReturnStatement = 159,          /* ReturnStatement  */
  YYSYMBOL_Primary = 160,                  /* Primary  */
  YYSYMBOL_PrimaryNoNewArray = 161,        /* PrimaryNoNewArray  */
  YYSYMBOL_Literal = 162,                  /* Literal  */
  YYSYMBOL_BooleanLiteral = 163,           /* BooleanLiteral  */
  YYSYMBOL_IntegerLiteral = 164,           /* IntegerLiteral  */
  YYSYMBOL_CharacterLiteral = 165,         /* CharacterLiteral  */
  YYSYMBOL_StringLiteral = 166,            /* StringLiteral  */
  YYSYMBOL_NullLiteral = 167,              /* NullLiteral  */
  YYSYMBOL_FloatLiteral = 168,             /* FloatLiteral  */
  YYSYMBOL_ClassInstanceCreationExpression = 169, /* ClassInstanceCreationExpression  */
  YYSYMBOL_UnqualifiedClassInstanceCreationExpression = 170, /* UnqualifiedClassInstanceCreationExpression  */
  YYSYMBOL_FieldAccess = 171,              /* FieldAccess  */
  YYSYMBOL_ArrayAccess = 172,              /* ArrayAccess  */
  YYSYMBOL_MethodInvocation = 173,         /* MethodInvocation  */
  YYSYMBOL_ArgumentList = 174,             /* ArgumentList  */
  YYSYMBOL_ArrayCreationExpression = 175,  /* ArrayCreationExpression  */
  YYSYMBOL_Expression = 176,               /* Expression  */
  YYSYMBOL_AssignmentExpression = 177,     /* AssignmentExpression  */
  YYSYMBOL_Assignment = 178,               /* Assignment  */
  YYSYMBOL_LeftHandSide = 179,             /* LeftHandSide  */
  YYSYMBOL_AssignmentOperator = 180,       /* AssignmentOperator  */
  YYSYMBOL_ConditionalExpression = 181,    /* ConditionalExpression  */
  YYSYMBOL_ConditionalOrExpression = 182,  /* ConditionalOrExpression  */
  YYSYMBOL_ConditionalAndExpression = 183, /* ConditionalAndExpression  */
  YYSYMBOL_InclusiveOrExpression = 184,    /* InclusiveOrExpression  */
  YYSYMBOL_ExclusiveOrExpression = 185,    /* ExclusiveOrExpression  */
  YYSYMBOL_AndExpression = 186,            /* AndExpression  */
  YYSYMBOL_EqualityExpression = 187,       /* EqualityExpression  */
  YYSYMBOL_RelationalExpression = 188,     /* RelationalExpression  */
  YYSYMBOL_ShiftExpression = 189,          /* ShiftExpression  */
  YYSYMBOL_AdditiveExpression = 190,       /* AdditiveExpression  */
  YYSYMBOL_MultiplicativeExpression = 191, /* MultiplicativeExpression  */
  YYSYMBOL_UnaryExpression = 192,          /* UnaryExpression  */
  YYSYMBOL_PreIncrementExpression = 193,   /* PreIncrementExpression  */
  YYSYMBOL_PreDecrementExpression = 194,   /* PreDecrementExpression  */
  YYSYMBOL_UnaryExpressionNotPlusMinus = 195, /* UnaryExpressionNotPlusMinus  */
  YYSYMBOL_PostfixExpression = 196,        /* PostfixExpression  */
  YYSYMBOL_PostIncrementExpression = 197,  /* PostIncrementExpression  */
  YYSYMBOL_PostDecrementExpression = 198,  /* PostDecrementExpression  */
  YYSYMBOL_CastExpression = 199            /* CastExpression  */
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
#define YYLAST   1782

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  113
/* YYNRULES -- Number of rules.  */
#define YYNRULES  261
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  430

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
       0,    77,    77,    82,    85,    86,    87,    90,    93,    94,
      97,    98,   102,   105,   108,   128,   129,   133,   134,   145,
     146,   150,   158,   166,   174,   182,   193,   200,   211,   212,
     215,   222,   231,   234,   240,   244,   248,   257,   281,   309,
     313,   322,   335,   339,   346,   347,   353,   354,   355,   359,
     360,   361,   362,   370,   374,   380,   381,   385,   393,   401,
     409,   417,   428,   443,   451,   497,   500,   503,   509,   510,
     515,   524,   536,   543,   548,   554,   559,   564,   568,   573,
     580,   588,   589,   593,   597,   612,   630,   633,   639,   640,
     643,   649,   658,   670,   677,   686,   687,   688,   689,   693,
     697,   698,   702,   705,   711,   718,   719,   726,   727,   728,
     732,   738,   755,   756,   757,   758,   759,   760,   764,   765,
     766,   767,   768,   772,   773,   774,   775,   776,   777,   781,
     785,   792,   799,   803,   804,   805,   806,   807,   808,   809,
     813,   838,   868,   898,   938,   978,   982,   986,  1035,  1085,
    1086,  1090,  1094,  1095,  1102,  1111,  1120,  1138,  1148,  1149,
    1153,  1159,  1160,  1161,  1162,  1163,  1167,  1168,  1169,  1170,
    1171,  1172,  1176,  1186,  1199,  1211,  1224,  1237,  1250,  1276,
    1277,  1278,  1282,  1283,  1288,  1291,  1297,  1303,  1339,  1382,
    1408,  1431,  1434,  1438,  1445,  1455,  1459,  1460,  1464,  1506,
    1551,  1552,  1556,  1557,  1558,  1559,  1560,  1561,  1562,  1563,
    1564,  1565,  1566,  1567,  1571,  1572,  1580,  1581,  1591,  1592,
    1602,  1603,  1613,  1614,  1624,  1625,  1635,  1636,  1643,  1653,
    1654,  1661,  1668,  1675,  1685,  1686,  1693,  1703,  1704,  1711,
    1721,  1722,  1729,  1736,  1746,  1747,  1748,  1751,  1758,  1762,
    1769,  1776,  1777,  1779,  1782,  1786,  1787,  1788,  1789,  1793,
    1800,  1807
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
  "SINGLE_ArgumentList", "Block", "BlockStart", "BlockStatements",
  "BlockStatement", "LocalVariableDeclarationStatement",
  "LocalVariableDeclaration", "Statement", "StatementNoShortIf",
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

#define YYPACT_NINF (-392)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-259)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     186,  -392,  -392,  -392,  -392,     6,  -392,  -392,  -392,    46,
    -392,   206,   206,  -392,  -392,  -392,   216,  -392,     6,  -392,
      54,  -392,  -392,   206,  -392,  -392,  -392,   -25,     6,  -392,
       6,   620,  -392,  -392,   -25,  -392,    -8,     6,  -392,  -392,
    -392,  -392,  -392,  -392,  -392,  -392,  -392,    61,    10,     6,
      -4,  -392,  -392,  -392,  -392,  -392,  -392,  1281,  -392,  -392,
    -392,  1735,  -392,    23,  -392,  -392,    93,  -392,  -392,    97,
    -392,    48,    87,   130,   293,    72,    95,  -392,   178,   143,
     130,  -392,  -392,     6,    23,    93,  -392,  -392,  -392,   939,
    -392,   973,   798,  -392,   144,   507,  -392,    28,    27,  -392,
    -392,   130,     6,  -392,  1504,  1311,   169,  -392,  -392,   150,
     179,  -392,  -392,  -392,  -392,  -392,  -392,   183,   189,   161,
    1384,  -392,   507,  1657,  1657,  1657,  -392,  -392,  1623,   -26,
       6,  -392,  1052,  -392,     1,  1085,  -392,  -392,   193,  -392,
    -392,  -392,  -392,  -392,   209,  -392,  -392,  -392,  -392,  -392,
    -392,  -392,  -392,   146,   214,  -392,  -392,  -392,  -392,  -392,
    -392,  -392,    -6,  -392,  1100,  1669,    35,  -392,  -392,  1734,
    -392,  -392,   134,   195,   199,  -392,  1164,    -4,    37,  -392,
       6,  -392,   140,  -392,  -392,  1014,    -4,  -392,  1657,  1657,
    1657,  1657,  1335,  1455,  1336,   219,  -392,  -392,  -392,  -392,
    -392,  -392,  -392,  -392,   152,   244,   245,   243,   246,   201,
     120,   221,   224,   185,  -392,  -392,  -392,  -392,   134,  -392,
    -392,  -392,    -4,    38,  -392,  -392,  1657,  1657,  1531,  -392,
    -392,  -392,   223,    64,   225,   162,  -392,  -392,  -392,  -392,
     233,  -392,  -392,  -392,  -392,  -392,  -392,  -392,  -392,  -392,
    -392,  -392,  -392,  1433,    -7,  1657,   852,  1553,   228,  -392,
    1197,   236,  -392,  -392,  -392,  -392,    -7,  1657,  1657,  -392,
    -392,  -392,   130,    -4,  -392,   288,     6,  -392,  -392,  -392,
    -392,  -392,   240,  -392,    74,  -392,  1657,  1657,  1657,  1657,
    1657,  1657,  1657,  1657,  1657,  1657,  1657,  1657,  1657,  1657,
    1657,  1657,  1657,  1657,  1657,  1657,   130,    -4,   241,   247,
     239,    73,  -392,  -392,  1580,  1657,  1657,  -392,   248,     6,
    -392,  -392,  -392,  -392,    90,  -392,  1406,  -392,  -392,   270,
    -392,   130,  -392,  1657,  -392,  1482,   302,   244,   245,   243,
     246,   201,   120,   120,   221,   221,   221,   221,   224,   224,
     185,   185,  -392,  -392,  -392,   130,   852,  1235,  -392,   274,
    1657,   -25,   121,   278,   282,  -392,   123,  -392,  -392,  -392,
     285,   289,  -392,  -392,  -392,  -392,  1657,  -392,   300,   301,
     -11,     2,  -392,   349,   351,  -392,  -392,  -392,  -392,  -392,
    -392,  -392,  -392,   -25,  -392,  -392,  1657,  1664,  -392,  1657,
    1657,  1235,   307,   852,  -392,   298,  -392,   310,   311,  -392,
    1406,  -392,  1664,  1235,  1235,   305,   313,   289,  -392,   354,
    1657,   852,  1235,   309,  -392,  -392,  1664,   315,  1235,  -392
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       6,    60,    59,   104,    58,     0,    57,    61,    11,     0,
       2,     5,     4,     8,    10,    39,     0,    55,     0,    14,
       0,    12,     1,     3,     9,   104,    56,     0,     0,     7,
       0,     0,    41,    13,     0,    25,    59,     0,    24,    26,
      18,    27,    21,    23,    22,    43,    52,    28,    12,     0,
      15,    17,    19,    20,    16,    29,    51,     0,    44,    46,
      49,     0,    50,   104,    47,    48,     0,    40,    90,     0,
      80,     0,     0,    31,     0,    67,     0,    63,    65,     0,
      30,    42,    45,     0,   104,     0,    89,    71,    88,   104,
      92,   104,     0,    33,     0,     0,    94,     0,     0,    83,
      81,    66,     0,    54,     0,     0,     0,    70,    91,     0,
       0,   178,   172,   173,   177,   175,   176,     0,     0,     0,
       0,   174,     0,     0,     0,     0,    98,   129,   256,    12,
       0,   108,   104,   123,     0,   104,   105,   107,     0,   109,
     112,   124,   113,   125,     0,   114,   115,   116,   117,   145,
     126,   127,   128,   255,   158,   160,   166,   167,   168,   169,
     170,   171,   162,   179,   163,   164,   165,   159,   133,     0,
     134,   135,     0,   136,   137,   103,   104,    77,     0,    32,
       0,    86,    67,    85,    93,     0,    67,    62,     0,     0,
       0,     0,     0,     0,   256,    12,    69,    64,   162,   165,
      68,   195,   197,   196,   214,   216,   218,   220,   222,   224,
     226,   229,   234,   237,   240,   244,   245,   248,   251,   257,
     258,   254,    73,     0,    53,   155,     0,     0,     0,    99,
     154,   157,     0,     0,     0,   256,   163,   164,   249,   250,
       0,   202,   206,   207,   203,   204,   205,   211,   213,   212,
     208,   209,   210,     0,     0,     0,   104,     0,   111,    97,
     104,     0,    96,   106,   110,   132,     0,     0,     0,   259,
     260,   102,    79,    76,    84,     0,     0,    82,   246,   247,
     253,   252,     0,    36,     0,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    75,    72,     0,     0,
       0,     0,   192,   156,     0,     0,     0,   161,     0,     0,
     180,   199,   130,   190,     0,    95,     0,   186,   181,     0,
     198,    78,    87,     0,    35,     0,     0,   217,   219,   221,
     223,   225,   228,   227,   230,   231,   233,   232,   235,   236,
     238,   239,   241,   242,   243,    74,   104,   104,   100,     0,
       0,   185,     0,     0,     0,   187,     0,   189,   150,   152,
       0,   149,   188,   261,    34,    38,     0,   143,     0,     0,
      12,     0,   140,     0,   112,   119,   120,   121,   122,   146,
     101,   191,   184,   182,   194,   193,     0,     0,   215,     0,
       0,   104,     0,   104,   183,     0,   153,     0,     0,   131,
       0,   141,     0,   104,   104,     0,     0,   151,   144,     0,
       0,   104,   104,     0,   147,   142,     0,     0,   104,   148
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -392,  -392,  -392,  -392,   374,    17,    42,     0,   -23,   -86,
    -392,  -392,  -392,  -392,  -392,   -38,  -392,  -392,    44,  -392,
     -33,  -392,   338,  -392,  -392,    31,    -2,   -64,   294,   -95,
    -190,  -392,   339,   365,   -82,   222,  -392,   320,  -392,  -392,
     345,   323,  -392,  -392,   -21,    -3,   -74,  -131,  -392,  -310,
    -231,  -259,  -305,  -392,  -392,  -392,  -392,  -299,  -392,  -392,
    -392,  -392,  -392,  -392,  -392,  -392,  -392,     5,   -14,  -391,
    -392,  -392,  -392,  -392,  -392,  -392,  -392,  -392,  -392,  -392,
    -392,  -392,   -48,  -234,   306,   609,    60,  -246,  -392,   521,
    -392,   111,  -392,   251,    47,  -392,   136,   137,   141,   142,
     135,    -5,   -34,   -17,   -10,   -30,   149,   259,  -392,   308,
     358,   437,  -392
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     9,    10,    11,    12,    13,   194,   195,   130,    50,
      51,    52,    53,    54,    55,   101,   196,   284,   131,    15,
      32,    57,    58,    59,    60,    16,    17,    76,    77,    78,
     197,    62,    63,    79,    98,    99,   100,    87,    64,    65,
      66,    90,   132,   229,   133,   134,   135,   136,   137,   138,
     139,   383,   140,   141,   142,   385,   143,   144,   145,   146,
     386,   147,   387,   148,   388,   149,   389,   370,   416,   371,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   198,   163,   164,   165,   199,   311,   167,   200,
     201,   202,   169,   255,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      18,    67,   183,   285,   263,    21,   261,   402,    49,    73,
     178,   324,    80,    19,    26,    68,   368,   176,    27,   106,
     320,   417,    30,   223,   256,   322,    19,   369,    33,    24,
      34,    48,   328,    69,    49,   417,   234,    70,    83,   401,
      24,   162,    88,   162,    14,   263,    22,    20,    19,    75,
     257,    97,   384,    31,   181,    14,    14,    48,   260,    26,
      69,    48,    61,    88,   319,   257,   258,    14,   362,    97,
    -104,  -139,   180,    47,    21,    56,    72,  -139,  -139,    91,
      91,    69,    97,    75,   162,   274,    74,   162,    61,   129,
      73,   129,    21,   238,   239,    21,   384,   182,   406,    47,
     368,    56,   186,    47,   184,    21,   282,    86,   384,   384,
     185,   369,  -138,   369,   273,   307,    47,   384,  -138,  -138,
     185,   185,    21,   384,    92,   377,   382,   369,   162,   263,
     186,   128,   129,   128,    47,   129,    28,    47,    29,   272,
     314,    72,   409,    28,   315,   375,    28,    47,   -80,   166,
     359,   166,    72,   334,   418,   419,   360,   335,   278,   279,
     280,   281,   276,   425,   233,   235,   235,   367,    93,   429,
     322,    89,   411,   360,   128,    91,   129,   128,   102,   103,
     186,   183,   377,   382,   306,    21,   295,   296,   297,   298,
     424,   411,   166,     1,     2,   166,     3,   424,   393,   314,
     168,   287,   168,   288,   360,    28,   269,   270,   162,     4,
      94,     5,   162,     1,     2,   104,     3,     6,   128,   105,
      72,     7,   275,     1,     2,   179,    25,    47,   266,     4,
     235,   235,   235,   235,   225,   331,   166,     6,   170,     4,
     170,     7,   286,   168,   254,   230,   168,     6,   303,   304,
     305,     7,   102,   224,    33,   226,   129,   293,   294,   227,
     129,   344,   345,   346,   347,   228,   327,  -257,  -257,   355,
       8,  -258,  -258,   352,   353,   354,   186,   264,   162,   299,
     300,   170,   348,   349,   170,   301,   302,   168,   342,   343,
       8,   350,   351,   265,   267,   257,   289,   291,   290,    35,
      95,   292,   128,   373,    38,   316,    39,   313,   162,   162,
     317,   102,   326,    19,   332,    40,   166,   333,   356,    21,
     166,    41,    42,   358,   357,   170,    43,    44,   392,   365,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   171,   162,
     171,   372,   376,   162,   381,   162,   129,   380,   390,   394,
     404,   366,   162,   395,   162,   162,   162,   168,   128,   396,
      96,   168,   397,   162,   162,   235,   399,   400,   162,   403,
     162,  -118,   412,   410,   422,    23,   166,   413,   414,   420,
     421,   171,   428,   426,   171,    82,   187,   172,   381,   172,
      84,   380,    71,   129,   107,   170,    85,   277,   108,   170,
     381,   381,   427,   380,   380,   415,   166,   166,   235,   381,
     268,   129,   380,   398,   337,   381,   338,   341,   380,   236,
     236,   339,     0,   340,     0,   171,     0,   168,     0,     0,
     172,     0,     0,   172,     0,     0,     0,   173,     0,   173,
       0,     0,   128,     0,     0,     0,     0,   166,     0,     0,
       0,   166,     0,   166,     0,     0,     0,   168,   168,     0,
     166,     0,   166,   166,   166,   170,     0,     0,     0,     0,
       0,   166,   166,     0,   172,     0,   166,     0,   166,     0,
     173,     0,     0,   173,   236,   236,   236,   236,     0,     0,
       0,     0,     0,     0,     0,   170,   170,     0,   168,     0,
       0,     0,   168,    35,   168,   171,     0,     0,    38,   171,
      39,   168,     0,   168,   168,   168,   174,    19,   174,    40,
       0,     0,   168,   168,   173,    41,    42,   168,     0,   168,
      43,    44,     0,     0,     0,     0,   170,     0,     0,     0,
     170,     0,   170,     0,     0,     0,     0,     0,     0,   170,
       0,   170,   170,   170,   172,     0,     0,     0,   172,   174,
     170,   170,   174,     0,     0,   170,     0,   170,     0,     0,
       0,     0,     0,     0,     0,   171,     0,     0,     0,     0,
       0,     0,     0,     0,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,     0,   174,   173,   171,   171,     0,   173,     0,
       0,     0,     0,     0,     0,     0,    35,     1,    36,    37,
       3,    38,     0,    39,   172,     0,     0,     0,     0,   236,
      19,   232,    40,     4,     0,     0,   240,     0,    41,    42,
       0,     6,     0,    43,    44,     7,   171,     0,     0,     0,
     171,     0,   171,     0,   172,   172,     0,     0,     0,   171,
       0,   171,   171,   171,     0,     0,     0,     0,     0,     0,
     171,   171,   236,     0,   173,   171,     0,   171,     0,     0,
       0,     0,     0,   174,     0,     0,     0,   174,     0,    45,
       0,     0,     0,     0,    46,   172,     0,     0,     0,   172,
       0,   172,     0,   240,   173,   173,     0,     0,   172,     0,
     172,   172,   172,     0,     0,     0,     0,     0,     0,   172,
     172,     0,   237,   237,   172,     0,   172,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   308,   309,   312,
       0,     0,     0,     0,     0,   173,     0,     0,     0,   173,
       0,   173,     0,   174,     0,     0,     0,     0,   173,     0,
     173,   173,   173,     0,   318,     0,   321,     0,   312,   173,
     173,     0,     0,     0,   173,     0,   173,     0,   329,   330,
       0,     0,     0,   174,   174,     0,     0,   237,   237,   237,
     237,     0,     0,     0,    35,    95,     0,   318,   336,    38,
       0,    39,     0,     0,     0,     0,     0,     0,    19,     0,
      40,     0,     0,     0,     0,     0,    41,    42,     0,     0,
       0,    43,    44,     0,   174,   312,   363,   364,   174,     0,
     174,     0,     0,     0,     0,     0,     0,   174,     0,   174,
     174,   174,     0,     0,     0,     0,   109,     0,   174,   174,
       0,     0,     0,   174,     0,   174,   110,   111,   112,   113,
     114,   115,    19,   116,     0,   177,   117,     0,     0,   119,
       0,   391,     0,     0,   120,     0,     0,     0,   121,     0,
       0,     0,     0,     0,     0,     0,     0,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,     0,     0,   405,     0,     0,
     407,   408,     0,   122,   123,   124,     0,     0,   125,     0,
       0,     0,     0,     0,     0,     0,   127,     0,     0,     0,
       0,   423,   237,   109,     0,    35,     1,     2,     0,     3,
      38,     0,    39,   110,   111,   112,   113,   114,   115,    19,
     116,    40,     4,   117,     0,   118,   119,    41,    42,     0,
       6,   120,    43,    44,     7,   121,     0,   109,     0,    35,
       1,     2,     0,     3,    38,   237,    39,   110,   111,   112,
     113,   114,   115,    19,   116,    40,     4,   117,     0,     0,
     119,    41,    42,     0,     6,   120,    43,    44,     7,   121,
     122,   123,   124,     0,     0,   125,     0,     0,   126,     0,
      35,    95,     0,   127,     0,    38,     0,    39,     0,     0,
       0,     0,     0,     0,    19,     0,    40,     0,     0,     0,
       0,     0,    41,    42,   122,   123,   124,    43,    44,   125,
       0,     0,   175,     0,     0,     0,   109,   127,    35,     1,
       2,     0,     3,    38,     0,    39,   110,   111,   112,   113,
     114,   115,    19,   116,    40,     4,   117,     0,     0,   119,
      41,    42,     0,     6,   120,    43,    44,     7,   121,   109,
       0,    35,     1,     2,     0,     3,    38,     0,    39,   110,
     111,   112,   113,   114,   115,    19,   116,    40,     4,   117,
       0,     0,   119,    41,    42,     0,     6,   120,    43,    44,
       7,   121,     0,   122,   123,   124,     0,     0,   125,     0,
       0,   259,     0,     0,     0,     0,   127,  -200,  -200,  -200,
    -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,     0,
       0,     0,     0,     0,     0,     0,   122,   123,   124,     0,
       0,   125,     0,     0,   262,     0,     0,     0,   109,   127,
      35,     1,     2,     0,     3,    38,     0,    39,   110,   111,
     112,   113,   114,   115,    19,   116,    40,     4,   117,     0,
       0,   119,    41,    42,     0,     6,   120,    43,    44,     7,
     121,   109,     0,    35,     1,     2,     0,     3,    38,     0,
      39,   110,   111,   112,   113,   114,   115,    19,   116,    40,
       4,   117,     0,     0,   119,    41,    42,     0,     6,   120,
      43,    44,     7,   121,     0,   122,   123,   124,     0,   109,
     125,     0,     0,   271,     0,     0,     0,     0,   127,   378,
     111,   112,   113,   114,   115,    19,   116,     0,     0,   379,
       0,     0,   119,     0,     0,     0,     0,   120,   122,   123,
     124,   121,     0,   125,     0,     0,   325,     0,     0,     0,
       0,   127,     0,     0,     0,     0,     0,    35,     1,    36,
      37,     3,    38,     0,    39,     0,     0,     0,     0,     0,
       0,    19,     0,    40,     4,     0,   122,   123,   124,    41,
      42,   125,     6,     0,    43,    44,     7,    35,    95,   127,
       0,     0,    38,     0,    39,     0,     0,     0,     0,     0,
       0,    19,     0,    40,     0,     0,     0,     0,     0,    41,
      42,    35,     0,     0,    43,    44,    38,     0,    39,     0,
     111,   112,   113,   114,   115,    19,   116,    40,     0,     0,
      81,     0,     0,    41,    42,    46,     0,     0,    43,    44,
       0,   121,     0,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,     0,     0,     0,   222,     0,
       0,     0,     0,     0,     0,     0,   188,   189,     0,   111,
     112,   113,   114,   115,    19,   116,   122,   123,   124,   190,
     191,   192,    35,     0,     0,     0,   286,    38,   254,    39,
     121,   111,   112,   113,   114,   115,    19,   116,    40,     0,
       0,     0,     0,     0,    41,    42,     0,     0,     0,    43,
      44,     0,   121,     0,     0,   188,   189,     0,   111,   112,
     113,   114,   115,    19,   116,   122,   123,   124,   190,   191,
     192,     0,     0,     0,     0,     0,     0,     0,   231,   121,
     111,   112,   113,   114,   115,    19,   116,   122,   123,   124,
       0,     0,   125,     0,     0,     0,     0,     0,     0,     0,
       0,   121,     0,     0,   188,   189,     0,   111,   112,   113,
     114,   115,    19,   116,   122,   123,   124,   190,   191,   192,
       0,     0,     0,     0,    93,     0,   188,   189,   121,   111,
     112,   113,   114,   115,    19,   116,   122,   123,   124,   190,
     191,   192,     0,   193,   283,     0,     0,     0,     0,     0,
     121,     0,     0,   188,   189,     0,   111,   112,   113,   114,
     115,    19,   116,   122,   123,   124,   190,   191,   192,     0,
     193,   374,     0,     0,     0,   188,   189,   121,   111,   112,
     113,   114,   115,    19,   116,   122,   123,   124,   190,   191,
     192,     0,   193,     0,     0,     0,     0,     0,     0,   121,
       0,     0,   188,   189,     0,   111,   112,   113,   114,   115,
      19,   116,   122,   123,   124,   190,   191,   192,   310,     0,
       0,     0,     0,     0,   188,   189,   121,     0,     0,     0,
       0,     0,     0,     0,   122,   123,   124,   190,   191,   192,
     323,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   188,   189,   -28,     0,     0,     0,     0,     0,     0,
       0,   122,   123,   124,   190,   191,   192,   361,     0,     0,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   111,   112,   113,   114,   115,    19,   116,   111,
     112,   113,   114,   115,    19,   116,     0,     0,     0,     0,
       0,     0,     0,   121,     0,     0,     0,     0,     0,     0,
     121,     0,     0,   253,     0,   254,  -201,  -201,  -201,  -201,
    -201,  -201,  -201,  -201,  -201,  -201,  -201,  -201,   188,   189,
       0,     0,     0,     0,     0,     0,     0,     0,   122,   123,
     124,   190,   191,   192,     0,   122,   123,   124,     0,     0,
     125,    35,     1,     2,    37,    25,    38,     0,    39,     0,
       0,     0,     0,     0,     0,    19,     0,    40,     4,     0,
       0,     0,     0,    41,    42,     0,     6,     0,    43,    44,
       7,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252
};

static const yytype_int16 yycheck[] =
{
       3,    34,    97,   193,   135,     5,     5,     5,    31,    47,
      92,   257,    50,    20,    16,    36,   326,    91,    18,    83,
     254,   412,    25,   105,    50,   256,    20,   326,    28,    12,
      30,    31,   266,    36,    57,   426,   122,    37,    61,    50,
      23,    89,    63,    91,     0,   176,     0,     5,    20,    49,
      76,    74,   357,    78,    26,    11,    12,    57,   132,    61,
      63,    61,    31,    84,    71,    76,   130,    23,   314,    92,
      78,    77,    95,    31,    74,    31,    80,    83,    84,    78,
      78,    84,   105,    83,   132,   180,    76,   135,    57,    89,
     128,    91,    92,   123,   124,    95,   401,    97,   397,    57,
     410,    57,   102,    61,    77,   105,   192,    84,   413,   414,
      83,   410,    77,   412,    77,    77,    74,   422,    83,    84,
      83,    83,   122,   428,    76,   356,   357,   426,   176,   260,
     130,    89,   132,    91,    92,   135,    82,    95,    84,   177,
      76,    80,   401,    82,    80,   335,    82,   105,    76,    89,
      77,    91,    80,    79,   413,   414,    83,    83,   188,   189,
     190,   191,   185,   422,   122,   123,   124,    77,    81,   428,
     401,    78,   403,    83,   132,    78,   176,   135,    83,    84,
     180,   276,   413,   414,   222,   185,    66,    67,    68,    69,
     421,   422,   132,     7,     8,   135,    10,   428,    77,    76,
      89,    49,    91,    51,    83,    82,    72,    73,   256,    23,
      80,    25,   260,     7,     8,    37,    10,    31,   176,    76,
      80,    35,    82,     7,     8,    81,    10,   185,    82,    23,
     188,   189,   190,   191,    84,   273,   176,    31,    89,    23,
      91,    35,    80,   132,    82,    84,   135,    31,    63,    64,
      65,    35,    83,    84,   254,    76,   256,    56,    57,    76,
     260,   295,   296,   297,   298,    76,   266,    72,    73,   307,
      84,    72,    73,   303,   304,   305,   276,    84,   326,    58,
      59,   132,   299,   300,   135,    61,    62,   176,   293,   294,
      84,   301,   302,    84,    80,    76,    52,    54,    53,     6,
       7,    55,   260,   333,    11,    80,    13,    84,   356,   357,
      77,    83,    76,    20,    26,    22,   256,    77,    77,   319,
     260,    28,    29,    84,    77,   176,    33,    34,   361,    81,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,    89,   397,
      91,    81,    50,   401,   357,   403,   356,   357,    84,    81,
     393,   319,   410,    81,   412,   413,   414,   256,   326,    84,
      77,   260,    83,   421,   422,   333,    76,    76,   426,    30,
     428,    30,    84,    76,    30,    11,   326,    77,    77,    84,
      77,   132,    77,    84,   135,    57,   102,    89,   401,    91,
      61,   401,    37,   403,    84,   256,    61,   185,    85,   260,
     413,   414,   426,   413,   414,   410,   356,   357,   376,   422,
     169,   421,   422,   376,   288,   428,   289,   292,   428,   123,
     124,   290,    -1,   291,    -1,   176,    -1,   326,    -1,    -1,
     132,    -1,    -1,   135,    -1,    -1,    -1,    89,    -1,    91,
      -1,    -1,   410,    -1,    -1,    -1,    -1,   397,    -1,    -1,
      -1,   401,    -1,   403,    -1,    -1,    -1,   356,   357,    -1,
     410,    -1,   412,   413,   414,   326,    -1,    -1,    -1,    -1,
      -1,   421,   422,    -1,   176,    -1,   426,    -1,   428,    -1,
     132,    -1,    -1,   135,   188,   189,   190,   191,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   356,   357,    -1,   397,    -1,
      -1,    -1,   401,     6,   403,   256,    -1,    -1,    11,   260,
      13,   410,    -1,   412,   413,   414,    89,    20,    91,    22,
      -1,    -1,   421,   422,   176,    28,    29,   426,    -1,   428,
      33,    34,    -1,    -1,    -1,    -1,   397,    -1,    -1,    -1,
     401,    -1,   403,    -1,    -1,    -1,    -1,    -1,    -1,   410,
      -1,   412,   413,   414,   256,    -1,    -1,    -1,   260,   132,
     421,   422,   135,    -1,    -1,   426,    -1,   428,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   326,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,    -1,   176,   256,   356,   357,    -1,   260,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     6,     7,     8,     9,
      10,    11,    -1,    13,   326,    -1,    -1,    -1,    -1,   333,
      20,   120,    22,    23,    -1,    -1,   125,    -1,    28,    29,
      -1,    31,    -1,    33,    34,    35,   397,    -1,    -1,    -1,
     401,    -1,   403,    -1,   356,   357,    -1,    -1,    -1,   410,
      -1,   412,   413,   414,    -1,    -1,    -1,    -1,    -1,    -1,
     421,   422,   376,    -1,   326,   426,    -1,   428,    -1,    -1,
      -1,    -1,    -1,   256,    -1,    -1,    -1,   260,    -1,    79,
      -1,    -1,    -1,    -1,    84,   397,    -1,    -1,    -1,   401,
      -1,   403,    -1,   192,   356,   357,    -1,    -1,   410,    -1,
     412,   413,   414,    -1,    -1,    -1,    -1,    -1,    -1,   421,
     422,    -1,   123,   124,   426,    -1,   428,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,   227,   228,
      -1,    -1,    -1,    -1,    -1,   397,    -1,    -1,    -1,   401,
      -1,   403,    -1,   326,    -1,    -1,    -1,    -1,   410,    -1,
     412,   413,   414,    -1,   253,    -1,   255,    -1,   257,   421,
     422,    -1,    -1,    -1,   426,    -1,   428,    -1,   267,   268,
      -1,    -1,    -1,   356,   357,    -1,    -1,   188,   189,   190,
     191,    -1,    -1,    -1,     6,     7,    -1,   286,   287,    11,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      22,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    33,    34,    -1,   397,   314,   315,   316,   401,    -1,
     403,    -1,    -1,    -1,    -1,    -1,    -1,   410,    -1,   412,
     413,   414,    -1,    -1,    -1,    -1,     4,    -1,   421,   422,
      -1,    -1,    -1,   426,    -1,   428,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    77,    24,    -1,    -1,    27,
      -1,   360,    -1,    -1,    32,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,    -1,    -1,   396,    -1,    -1,
     399,   400,    -1,    71,    72,    73,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,
      -1,   420,   333,     4,    -1,     6,     7,     8,    -1,    10,
      11,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,    26,    27,    28,    29,    -1,
      31,    32,    33,    34,    35,    36,    -1,     4,    -1,     6,
       7,     8,    -1,    10,    11,   376,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      27,    28,    29,    -1,    31,    32,    33,    34,    35,    36,
      71,    72,    73,    -1,    -1,    76,    -1,    -1,    79,    -1,
       6,     7,    -1,    84,    -1,    11,    -1,    13,    -1,    -1,
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
      73,    36,    -1,    76,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    -1,    -1,    -1,     6,     7,     8,
       9,    10,    11,    -1,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    22,    23,    -1,    71,    72,    73,    28,
      29,    76,    31,    -1,    33,    34,    35,     6,     7,    84,
      -1,    -1,    11,    -1,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    22,    -1,    -1,    -1,    -1,    -1,    28,
      29,     6,    -1,    -1,    33,    34,    11,    -1,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      79,    -1,    -1,    28,    29,    84,    -1,    -1,    33,    34,
      -1,    36,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    15,
      16,    17,    18,    19,    20,    21,    71,    72,    73,    74,
      75,    76,     6,    -1,    -1,    -1,    80,    11,    82,    13,
      36,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    28,    29,    -1,    -1,    -1,    33,
      34,    -1,    36,    -1,    -1,    61,    62,    -1,    15,    16,
      17,    18,    19,    20,    21,    71,    72,    73,    74,    75,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    36,
      15,    16,    17,    18,    19,    20,    21,    71,    72,    73,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    -1,    -1,    61,    62,    -1,    15,    16,    17,
      18,    19,    20,    21,    71,    72,    73,    74,    75,    76,
      -1,    -1,    -1,    -1,    81,    -1,    61,    62,    36,    15,
      16,    17,    18,    19,    20,    21,    71,    72,    73,    74,
      75,    76,    -1,    78,    79,    -1,    -1,    -1,    -1,    -1,
      36,    -1,    -1,    61,    62,    -1,    15,    16,    17,    18,
      19,    20,    21,    71,    72,    73,    74,    75,    76,    -1,
      78,    79,    -1,    -1,    -1,    61,    62,    36,    15,    16,
      17,    18,    19,    20,    21,    71,    72,    73,    74,    75,
      76,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    61,    62,    -1,    15,    16,    17,    18,    19,
      20,    21,    71,    72,    73,    74,    75,    76,    77,    -1,
      -1,    -1,    -1,    -1,    61,    62,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    72,    73,    74,    75,    76,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    72,    73,    74,    75,    76,    77,    -1,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    15,    16,    17,    18,    19,    20,    21,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      36,    -1,    -1,    80,    -1,    82,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    76,    -1,    71,    72,    73,    -1,    -1,
      76,     6,     7,     8,     9,    10,    11,    -1,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    22,    23,    -1,
      -1,    -1,    -1,    28,    29,    -1,    31,    -1,    33,    34,
      35,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,     8,    10,    23,    25,    31,    35,    84,    88,
      89,    90,    91,    92,   105,   106,   112,   113,   132,    20,
      93,    94,     0,    91,    92,    10,   113,    94,    82,    84,
     132,    78,   107,    94,    94,     6,     8,     9,    11,    13,
      22,    28,    29,    33,    34,    79,    84,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   105,   108,   109,   110,
     111,   112,   118,   119,   125,   126,   127,   107,   131,   132,
      94,   120,    80,   102,    76,    94,   114,   115,   116,   120,
     102,    79,   109,    95,   119,   127,    84,   124,   131,    78,
     128,    78,    76,    81,    80,     7,    77,    95,   121,   122,
     123,   102,    83,    84,    37,    76,   114,   124,   128,     4,
      14,    15,    16,    17,    18,    19,    21,    24,    26,    27,
      32,    36,    71,    72,    73,    76,    79,    84,    93,    94,
      95,   105,   129,   131,   132,   133,   134,   135,   136,   137,
     139,   140,   141,   143,   144,   145,   146,   148,   150,   152,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   175,   178,   179,
     193,   194,   196,   197,   198,    79,   133,    77,   121,    81,
      95,    26,    94,   116,    77,    83,    94,   115,    61,    62,
      74,    75,    76,    78,    93,    94,   103,   117,   169,   173,
     176,   177,   178,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,    77,   121,    84,    84,    76,    76,    76,   130,
      84,    84,   176,    93,    96,    93,   171,   172,   192,   192,
     176,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    80,    82,   180,    50,    76,   114,    79,
     133,     5,    79,   134,    84,    84,    82,    80,   180,    72,
      73,    79,   102,    77,   116,    82,    95,   122,   192,   192,
     192,   192,    96,    79,   104,   117,    80,    49,    51,    52,
      53,    54,    55,    56,    57,    66,    67,    68,    69,    58,
      59,    61,    62,    63,    64,    65,   102,    77,   176,   176,
      77,   174,   176,    84,    76,    80,    80,    77,   176,    71,
     170,   176,   137,    77,   174,    79,    76,    94,   170,   176,
     176,   102,    26,    77,    79,    83,   176,   183,   184,   185,
     186,   187,   188,   188,   189,   189,   189,   189,   190,   190,
     191,   191,   192,   192,   192,   102,    77,    77,    84,    77,
      83,    77,   174,   176,   176,    81,    93,    77,   136,   144,
     154,   156,    81,   192,    79,   117,    50,   137,    14,    24,
      94,   132,   137,   138,   139,   142,   147,   149,   151,   153,
      84,   176,   107,    77,    81,    81,    84,    83,   181,    76,
      76,    50,     5,    30,   107,   176,   144,   176,   176,   138,
      76,   137,    84,    77,    77,   154,   155,   156,   138,   138,
      84,    77,    30,   176,   137,   138,    84,   155,    77,   138
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    89,    89,    89,    89,    90,    91,    91,
      92,    92,    93,    93,    94,    95,    95,    96,    96,    97,
      97,    98,    98,    98,    98,    98,    99,    99,   100,   100,
     101,   101,   102,   102,   103,   103,   103,   104,   104,   105,
     106,   106,   107,   107,   108,   108,   109,   109,   109,   110,
     110,   110,   110,   111,   111,   112,   112,   113,   113,   113,
     113,   113,   114,   114,   115,   115,   116,   116,   117,   117,
     118,   118,   119,   119,   119,   119,   119,   119,   119,   119,
     120,   121,   121,   121,   122,   122,   123,   123,   124,   124,
     125,   126,   126,   127,   127,   128,   128,   128,   128,   129,
     130,   130,   131,   131,   132,   133,   133,   134,   134,   134,
     135,   136,   137,   137,   137,   137,   137,   137,   138,   138,
     138,   138,   138,   139,   139,   139,   139,   139,   139,   140,
     141,   142,   143,   144,   144,   144,   144,   144,   144,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     154,   155,   156,   156,   157,   158,   159,   159,   160,   160,
     161,   161,   161,   161,   161,   161,   162,   162,   162,   162,
     162,   162,   163,   163,   164,   165,   166,   167,   168,   169,
     169,   169,   170,   170,   170,   170,   171,   172,   172,   173,
     173,   174,   174,   175,   175,   176,   177,   177,   178,   178,
     179,   179,   180,   180,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   181,   181,   182,   182,   183,   183,
     184,   184,   185,   185,   186,   186,   187,   187,   187,   188,
     188,   188,   188,   188,   189,   189,   189,   190,   190,   190,
     191,   191,   191,   191,   192,   192,   192,   192,   192,   193,
     194,   195,   195,   195,   195,   196,   196,   196,   196,   197,
     198,   199
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     0,     3,     1,     2,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     3,     2,     4,     3,     2,     1,     3,     1,
       5,     4,     3,     2,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     4,     3,     1,     2,     1,     1,     1,
       1,     1,     3,     1,     3,     1,     2,     1,     1,     1,
       3,     2,     5,     4,     6,     5,     5,     4,     6,     5,
       1,     1,     3,     1,     3,     2,     2,     4,     1,     1,
       2,     3,     2,     4,     3,     4,     3,     3,     2,     2,
       3,     4,     4,     3,     0,     1,     2,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     2,     1,     1,     1,     1,     1,     1,     1,
       5,     7,     7,     5,     5,     1,     1,    10,    10,     1,
       1,     1,     1,     3,     2,     2,     3,     2,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     5,     6,     5,     4,     3,     4,     4,     4,
       3,     3,     1,     5,     5,     1,     1,     1,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     1,     1,     2,     2,     1,     2,
       2,     1,     2,     2,     1,     1,     1,     1,     1,     2,
       2,     4
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
                        { (yyval.node) = (yyvsp[0].node);
        printTAC((yyval.node));
      }
#line 2182 "parser.tab.c"
    break;

  case 3: /* CompilationUnit: PackageDeclaration MULTI_TypeDeclaration  */
#line 82 "parser.y"
                                                 {
            (yyval.node) = (yyvsp[0].node);
        }
#line 2190 "parser.tab.c"
    break;

  case 4: /* CompilationUnit: MULTI_TypeDeclaration  */
#line 85 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2196 "parser.tab.c"
    break;

  case 5: /* CompilationUnit: PackageDeclaration  */
#line 86 "parser.y"
                             { (yyval.node) = (yyvsp[0].node); }
#line 2202 "parser.tab.c"
    break;

  case 6: /* CompilationUnit: %empty  */
#line 87 "parser.y"
           { (yyval.node) = NULL ; }
#line 2208 "parser.tab.c"
    break;

  case 7: /* PackageDeclaration: PACKAGE TypeName ';'  */
#line 90 "parser.y"
                             { (yyval.node) = (yyvsp[-1].node);}
#line 2214 "parser.tab.c"
    break;

  case 8: /* MULTI_TypeDeclaration: TypeDeclaration  */
#line 93 "parser.y"
                        { (yyval.node) = (yyvsp[0].node); }
#line 2220 "parser.tab.c"
    break;

  case 9: /* MULTI_TypeDeclaration: MULTI_TypeDeclaration TypeDeclaration  */
#line 94 "parser.y"
                                               { (yyval.node) = (yyvsp[-1].node); }
#line 2226 "parser.tab.c"
    break;

  case 10: /* TypeDeclaration: ClassDeclaration  */
#line 97 "parser.y"
                       {(yyval.node) = (yyvsp[0].node);}
#line 2232 "parser.tab.c"
    break;

  case 11: /* TypeDeclaration: ';'  */
#line 98 "parser.y"
            { (yyval.node)=NULL; }
#line 2238 "parser.tab.c"
    break;

  case 12: /* TypeName: Identifier  */
#line 102 "parser.y"
                    {	
            (yyval.node)=(yyvsp[0].node);
        }
#line 2246 "parser.tab.c"
    break;

  case 13: /* TypeName: TypeName '.' Identifier  */
#line 105 "parser.y"
                                    { (yyval.node) = (yyvsp[-2].node); }
#line 2252 "parser.tab.c"
    break;

  case 14: /* Identifier: IDENTIFIER  */
#line 108 "parser.y"
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
#line 2275 "parser.tab.c"
    break;

  case 15: /* Type: PrimitiveType  */
#line 128 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2281 "parser.tab.c"
    break;

  case 16: /* Type: ReferenceType  */
#line 129 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2287 "parser.tab.c"
    break;

  case 17: /* PrimitiveType: NumericType  */
#line 133 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2293 "parser.tab.c"
    break;

  case 18: /* PrimitiveType: BOOLEAN  */
#line 134 "parser.y"
                                {
        genNode * n1 = new genNode();
        (yyval.node) = n1;
        (yyval.node)->place = "boolean";
        (yyval.node)->type = "boolean";
        (yyval.node)->label = "Keyword";
        (yyval.node)->value = (yyvsp[0].str);
    }
#line 2306 "parser.tab.c"
    break;

  case 19: /* NumericType: IntegralType  */
#line 145 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2312 "parser.tab.c"
    break;

  case 20: /* NumericType: FloatingPointType  */
#line 146 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2318 "parser.tab.c"
    break;

  case 21: /* IntegralType: BYTE  */
#line 150 "parser.y"
                                { 
        genNode * n1 = new genNode();
        (yyval.node) = n1;
        (yyval.node)->place = "byte";
        (yyval.node)->type = "byte";
        (yyval.node)->label = "Keyword";
        (yyval.node)->value = (yyvsp[0].str);
    }
#line 2331 "parser.tab.c"
    break;

  case 22: /* IntegralType: SHORT  */
#line 158 "parser.y"
                                {  
        genNode * n1 = new genNode();
        (yyval.node) = n1;
        (yyval.node)->place = "short";
        (yyval.node)->type = "short";
        (yyval.node)->label = "Keyword";
        (yyval.node)->value = (yyvsp[0].str); 
    }
#line 2344 "parser.tab.c"
    break;

  case 23: /* IntegralType: INT  */
#line 166 "parser.y"
                                { 
        genNode * n1 = new genNode();
        (yyval.node) = n1;
        (yyval.node)->place = "int";
        (yyval.node)->type = "int";
        (yyval.node)->label = "Keyword";
        (yyval.node)->value = (yyvsp[0].str); 
    }
#line 2357 "parser.tab.c"
    break;

  case 24: /* IntegralType: LONG  */
#line 174 "parser.y"
                                {
        genNode * n1 = new genNode();
        (yyval.node) = n1;
        (yyval.node)->place = "long";
        (yyval.node)->type = "long";
        (yyval.node)->label = "Keyword";
        (yyval.node)->value = (yyvsp[0].str); 
    }
#line 2370 "parser.tab.c"
    break;

  case 25: /* IntegralType: CHAR  */
#line 182 "parser.y"
                                {
        genNode * n1 = new genNode();
        (yyval.node) = n1;
        (yyval.node)->place = "char";
        (yyval.node)->type = "char";
        (yyval.node)->label = "char";
        (yyval.node)->value = (yyvsp[0].str); 
    }
#line 2383 "parser.tab.c"
    break;

  case 26: /* FloatingPointType: FLOAT  */
#line 193 "parser.y"
                           {  
        genNode * n1 = new genNode();
        (yyval.node) = n1;
        (yyval.node)->place = "float";
        (yyval.node)->type = "float";
        (yyval.node)->label = "Keyword";
        (yyval.node)->value = (yyvsp[0].str); }
#line 2395 "parser.tab.c"
    break;

  case 27: /* FloatingPointType: DOUBLE  */
#line 200 "parser.y"
              { 
        genNode * n1 = new genNode();
        (yyval.node) = n1;
        (yyval.node)->place = "double";
        (yyval.node)->type = "double";
        (yyval.node)->label = "Keyword";
        (yyval.node)->value = (yyvsp[0].str);
    }
#line 2408 "parser.tab.c"
    break;

  case 28: /* ReferenceType: TypeName  */
#line 211 "parser.y"
                { (yyval.node) = (yyvsp[0].node); }
#line 2414 "parser.tab.c"
    break;

  case 29: /* ReferenceType: ArrayType  */
#line 212 "parser.y"
                { (yyval.node) = (yyvsp[0].node); }
#line 2420 "parser.tab.c"
    break;

  case 30: /* ArrayType: PrimitiveType Dims  */
#line 215 "parser.y"
                         { 
        genNode *n1 = new genNode();
		(yyval.node) = n1;
		(yyval.node)->type=(yyvsp[-1].node)->type;
		(yyval.node)->place=(yyvsp[-1].node)->place;
		(yyval.node)->isArray = true;
    }
#line 2432 "parser.tab.c"
    break;

  case 31: /* ArrayType: TypeName Dims  */
#line 222 "parser.y"
                    { 
        genNode *n1 = new genNode();
		(yyval.node) = n1;
		(yyval.node)->type = (yyvsp[-1].node)->type;
		(yyval.node)->place = (yyvsp[-1].node)->place;
		(yyval.node)->isArray = true;
    }
#line 2444 "parser.tab.c"
    break;

  case 32: /* Dims: Dims '[' ']'  */
#line 231 "parser.y"
                  {
         (yyval.node) = (yyvsp[-2].node);
   }
#line 2452 "parser.tab.c"
    break;

  case 33: /* Dims: '[' ']'  */
#line 234 "parser.y"
             {
      
   }
#line 2460 "parser.tab.c"
    break;

  case 34: /* ArrayInitialize: '{' VariableInitializerList ',' '}'  */
#line 240 "parser.y"
                                           { 
        (yyval.node) = (yyvsp[-2].node);
		(yyval.node)->isArray = true;
    }
#line 2469 "parser.tab.c"
    break;

  case 35: /* ArrayInitialize: '{' VariableInitializerList '}'  */
#line 244 "parser.y"
                                       {
        (yyval.node) = (yyvsp[-1].node);
		(yyval.node)->isArray = true; 
    }
#line 2478 "parser.tab.c"
    break;

  case 36: /* ArrayInitialize: '{' '}'  */
#line 248 "parser.y"
              {
        genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->isArray = true;
		(yyval.node)->nodeLen = 0;
    }
#line 2489 "parser.tab.c"
    break;

  case 37: /* VariableInitializerList: VariableInitializer  */
#line 257 "parser.y"
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
#line 2518 "parser.tab.c"
    break;

  case 38: /* VariableInitializerList: VariableInitializerList ',' VariableInitializer  */
#line 281 "parser.y"
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
#line 2548 "parser.tab.c"
    break;

  case 39: /* ClassDeclaration: NormalClassDeclaration  */
#line 309 "parser.y"
                             { (yyval.node) = (yyvsp[0].node); }
#line 2554 "parser.tab.c"
    break;

  case 40: /* NormalClassDeclaration: MULTI_ClassModifier CLASS BlockStart Identifier ClassBody  */
#line 313 "parser.y"
                                                                 {
		ST->curEnv->type = "CLASSTYPE";
        (yyval.node) = (yyvsp[-1].node);
		(yyval.node)->type = "class";
		(yyval.node)->code.pb(genLabelTAC((yyvsp[-1].node)->place));
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		ST->curEnv->name = (yyvsp[-1].node)->place;
		ST->EndScope();
    }
#line 2568 "parser.tab.c"
    break;

  case 41: /* NormalClassDeclaration: CLASS BlockStart Identifier ClassBody  */
#line 322 "parser.y"
                                            {
	    ST->curEnv->type = "CLASSTYPE";
       	(yyval.node) = (yyvsp[-1].node);
		(yyval.node)->type = "class";
		(yyval.node)->code.pb(genLabelTAC((yyvsp[-1].node)->place));
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		ST->curEnv->name = (yyvsp[-1].node)->place;
		ST->EndScope();
    }
#line 2582 "parser.tab.c"
    break;

  case 42: /* ClassBody: '{' MULTI_ClassBodyDeclaration '}'  */
#line 335 "parser.y"
                                          {
            ST->curEnv->type = "CLASSTYPE";
			(yyval.node) = (yyvsp[-1].node); 
    }
#line 2591 "parser.tab.c"
    break;

  case 43: /* ClassBody: '{' '}'  */
#line 339 "parser.y"
                {
        	ST->curEnv->type = "CLASSTYPE";
			genNode* n = new genNode();
			(yyval.node) = n; 
    }
#line 2601 "parser.tab.c"
    break;

  case 44: /* MULTI_ClassBodyDeclaration: ClassBodyDeclaration  */
#line 346 "parser.y"
                            { (yyval.node)=(yyvsp[0].node); }
#line 2607 "parser.tab.c"
    break;

  case 45: /* MULTI_ClassBodyDeclaration: MULTI_ClassBodyDeclaration ClassBodyDeclaration  */
#line 347 "parser.y"
                                                       { 
        (yyval.node) = (yyvsp[-1].node);
        (yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
     }
#line 2616 "parser.tab.c"
    break;

  case 46: /* ClassBodyDeclaration: ClassMemberDeclaration  */
#line 353 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2622 "parser.tab.c"
    break;

  case 47: /* ClassBodyDeclaration: StaticInitializer  */
#line 354 "parser.y"
                                 { (yyval.node) = (yyvsp[0].node); }
#line 2628 "parser.tab.c"
    break;

  case 48: /* ClassBodyDeclaration: ConstructorDeclaration  */
#line 355 "parser.y"
                                 { (yyval.node) = (yyvsp[0].node); }
#line 2634 "parser.tab.c"
    break;

  case 49: /* ClassMemberDeclaration: FieldDeclaration  */
#line 359 "parser.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2640 "parser.tab.c"
    break;

  case 50: /* ClassMemberDeclaration: MethodDeclaration  */
#line 360 "parser.y"
                           { (yyval.node) = (yyvsp[0].node); }
#line 2646 "parser.tab.c"
    break;

  case 51: /* ClassMemberDeclaration: ClassDeclaration  */
#line 361 "parser.y"
                           { (yyval.node) = (yyvsp[0].node); }
#line 2652 "parser.tab.c"
    break;

  case 52: /* ClassMemberDeclaration: ';'  */
#line 362 "parser.y"
           {
        (yyval.node) = NULL;
     }
#line 2660 "parser.tab.c"
    break;

  case 53: /* FieldDeclaration: MULTI_ClassModifier Type VariableDeclaratorList ';'  */
#line 370 "parser.y"
                                                          {
        (yyval.node)=(yyvsp[-1].node);
        (yyval.node)->type=(yyvsp[-2].node)->place;
    }
#line 2669 "parser.tab.c"
    break;

  case 54: /* FieldDeclaration: Type VariableDeclaratorList ';'  */
#line 374 "parser.y"
                                      {
        (yyval.node)=(yyvsp[-1].node);
        (yyval.node)->type=(yyvsp[-2].node)->place;
    }
#line 2678 "parser.tab.c"
    break;

  case 55: /* MULTI_ClassModifier: ClassModifier  */
#line 380 "parser.y"
                    {(yyval.node)=(yyvsp[0].node);}
#line 2684 "parser.tab.c"
    break;

  case 56: /* MULTI_ClassModifier: MULTI_ClassModifier ClassModifier  */
#line 381 "parser.y"
                                         { (yyval.node) = (yyvsp[-1].node); }
#line 2690 "parser.tab.c"
    break;

  case 57: /* ClassModifier: PUBLIC  */
#line 385 "parser.y"
             { 			
            string s1((yyvsp[0].str));
			genNode* n1 = new genNode();
			(yyval.node) = n1;
			(yyval.node)->place = s1;
            (yyval.node)->label = "Keyword";
            (yyval.node)->value = s1;
        }
#line 2703 "parser.tab.c"
    break;

  case 58: /* ClassModifier: PRIVATE  */
#line 393 "parser.y"
              {		
            string s1((yyvsp[0].str));
			genNode* n1 = new genNode();
			(yyval.node) = n1;
			(yyval.node)->place = s1;
            (yyval.node)->label = "Keyword";
            (yyval.node)->value = s1;
        }
#line 2716 "parser.tab.c"
    break;

  case 59: /* ClassModifier: STATIC  */
#line 401 "parser.y"
             {		
            string s1((yyvsp[0].str));
			genNode* n1 = new genNode();
			(yyval.node) = n1;
			(yyval.node)->place = s1;
            (yyval.node)->label = "Keyword";
            (yyval.node)->value = s1;
        }
#line 2729 "parser.tab.c"
    break;

  case 60: /* ClassModifier: FINAL  */
#line 409 "parser.y"
            {		
            string s1((yyvsp[0].str));
			genNode* n1 = new genNode();
			(yyval.node) = n1;
			(yyval.node)->place = s1;
            (yyval.node)->label = "Keyword";
            (yyval.node)->value = s1;
        }
#line 2742 "parser.tab.c"
    break;

  case 61: /* ClassModifier: ABSTRACT  */
#line 417 "parser.y"
               { 		
            string s1((yyvsp[0].str));
			genNode* n1 = new genNode();
			(yyval.node) = n1;
			(yyval.node)->place = s1;
            (yyval.node)->label = "Keyword";
            (yyval.node)->value = s1;
        }
#line 2755 "parser.tab.c"
    break;

  case 62: /* VariableDeclaratorList: VariableDeclaratorList ',' VariableDeclarator  */
#line 428 "parser.y"
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
#line 2775 "parser.tab.c"
    break;

  case 63: /* VariableDeclaratorList: VariableDeclarator  */
#line 443 "parser.y"
                         {
        	(yyval.node) = (yyvsp[0].node); 
			Symbol* sym = ST->GetVar((yyvsp[0].node)->place);
			(yyval.node)->varDecs.pb(sym);
    }
#line 2785 "parser.tab.c"
    break;

  case 64: /* VariableDeclarator: VariableDeclaratorId '=' VariableInitializer  */
#line 451 "parser.y"
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
#line 2836 "parser.tab.c"
    break;

  case 65: /* VariableDeclarator: VariableDeclaratorId  */
#line 497 "parser.y"
                           {(yyval.node)=(yyvsp[0].node);}
#line 2842 "parser.tab.c"
    break;

  case 66: /* VariableDeclaratorId: Identifier Dims  */
#line 500 "parser.y"
                      {
        (yyval.node) = (yyvsp[-1].node); 
    }
#line 2850 "parser.tab.c"
    break;

  case 67: /* VariableDeclaratorId: Identifier  */
#line 503 "parser.y"
                  {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2858 "parser.tab.c"
    break;

  case 68: /* VariableInitializer: Expression  */
#line 509 "parser.y"
                { (yyval.node)=(yyvsp[0].node);}
#line 2864 "parser.tab.c"
    break;

  case 69: /* VariableInitializer: ArrayInitialize  */
#line 510 "parser.y"
                     { (yyval.node)=(yyvsp[0].node);}
#line 2870 "parser.tab.c"
    break;

  case 70: /* MethodDeclaration: MULTI_ClassModifier MethodHeader MethodBody  */
#line 515 "parser.y"
                                                      {
        (yyval.node) = (yyvsp[-1].node);
		vector <TAC*> tmp;
		tmp.pb(genLabelTAC(ST->curEnv->name));
		(yyval.node)->code.insert((yyval.node)->code.begin(), tmp.begin(), tmp.end());
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());	
        ST->curEnv->type = (yyvsp[-1].node)->place;	
		ST->EndScope();
    }
#line 2884 "parser.tab.c"
    break;

  case 71: /* MethodDeclaration: MethodHeader MethodBody  */
#line 524 "parser.y"
                                                    {
        (yyval.node) = (yyvsp[-1].node);
		vector <TAC*> tmp;
		tmp.pb(genLabelTAC(ST->curEnv->name));
		(yyval.node)->code.insert((yyval.node)->code.begin(), tmp.begin(), tmp.end());
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());	
         ST->curEnv->type = (yyvsp[-1].node)->place;	
		ST->EndScope();
    }
#line 2898 "parser.tab.c"
    break;

  case 72: /* MethodHeader: Type MemberName '(' FormalParameterList ')'  */
#line 536 "parser.y"
                                                      { 
        (yyval.node) = (yyvsp[-3].node);
		ST->curEnv->returnType = (yyvsp[-4].node)->place;
		ST->curEnv->name = (yyvsp[-3].node)->place;
        ST->curEnv->type = (yyvsp[-4].node)->place;
        (yyval.node)->code = (yyvsp[-1].node)->code;
    }
#line 2910 "parser.tab.c"
    break;

  case 73: /* MethodHeader: Type MemberName '(' ')'  */
#line 543 "parser.y"
                                     { 
        (yyval.node) = (yyvsp[-2].node);
		ST->curEnv->returnType = (yyvsp[-3].node)->place;
		ST->curEnv->name = (yyvsp[-2].node)->place;
    }
#line 2920 "parser.tab.c"
    break;

  case 74: /* MethodHeader: Type MemberName '(' FormalParameterList ')' Dims  */
#line 548 "parser.y"
                                                              { 
        (yyval.node) = (yyvsp[-4].node);
		ST->curEnv->returnType = (yyvsp[-5].node)->place;
		ST->curEnv->name = (yyvsp[-4].node)->place;
		(yyval.node)->code = (yyvsp[-2].node)->code;
    }
#line 2931 "parser.tab.c"
    break;

  case 75: /* MethodHeader: Type MemberName '(' ')' Dims  */
#line 554 "parser.y"
                                           { 
        (yyval.node) = (yyvsp[-3].node);
		ST->curEnv->returnType = (yyvsp[-4].node)->place;
		ST->curEnv->name = (yyvsp[-3].node)->place;
    }
#line 2941 "parser.tab.c"
    break;

  case 76: /* MethodHeader: VOID MemberName '(' FormalParameterList ')'  */
#line 559 "parser.y"
                                                           { 
        (yyval.node) = (yyvsp[-3].node);
		ST->curEnv->name = (yyvsp[-3].node)->place;
		(yyval.node)->code = (yyvsp[-1].node)->code;
    }
#line 2951 "parser.tab.c"
    break;

  case 77: /* MethodHeader: VOID MemberName '(' ')'  */
#line 564 "parser.y"
                                      { 
        (yyval.node) = (yyvsp[-2].node);
		ST->curEnv->name = (yyvsp[-2].node)->place;
    }
#line 2960 "parser.tab.c"
    break;

  case 78: /* MethodHeader: VOID MemberName '(' FormalParameterList ')' Dims  */
#line 568 "parser.y"
                                                              { 
        (yyval.node) = (yyvsp[-4].node);
		ST->curEnv->name = (yyvsp[-4].node)->place;
		(yyval.node)->code = (yyvsp[-2].node)->code;
    }
#line 2970 "parser.tab.c"
    break;

  case 79: /* MethodHeader: VOID MemberName '(' ')' Dims  */
#line 573 "parser.y"
                                           { 
        (yyval.node) = (yyvsp[-3].node);
		ST->curEnv->name = (yyvsp[-3].node)->place;
    }
#line 2979 "parser.tab.c"
    break;

  case 80: /* MemberName: Identifier  */
#line 580 "parser.y"
                 {
         ST->BeginScope();
         ST->curEnv->type = "METHODTYPE";
         (yyval.node) = (yyvsp[0].node);
    }
#line 2989 "parser.tab.c"
    break;

  case 81: /* FormalParameterList: ReceiverParameter  */
#line 588 "parser.y"
                                                     { (yyval.node)=(yyvsp[0].node); }
#line 2995 "parser.tab.c"
    break;

  case 82: /* FormalParameterList: FormalParameterList ',' FormalParameter  */
#line 589 "parser.y"
                                                    {
        (yyval.node) = (yyvsp[0].node);
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-2].node)->code.begin(), (yyvsp[-2].node)->code.end());
    }
#line 3004 "parser.tab.c"
    break;

  case 83: /* FormalParameterList: FormalParameter  */
#line 593 "parser.y"
                                              { (yyval.node) = (yyvsp[0].node); }
#line 3010 "parser.tab.c"
    break;

  case 84: /* FormalParameter: FINAL Type VariableDeclaratorId  */
#line 597 "parser.y"
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
#line 3030 "parser.tab.c"
    break;

  case 85: /* FormalParameter: Type VariableDeclaratorId  */
#line 612 "parser.y"
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
#line 3049 "parser.tab.c"
    break;

  case 86: /* ReceiverParameter: Type THIS  */
#line 630 "parser.y"
                                                    {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 3057 "parser.tab.c"
    break;

  case 87: /* ReceiverParameter: Type Identifier '.' THIS  */
#line 633 "parser.y"
                                                    {
          (yyval.node) = (yyvsp[-2].node);
    }
#line 3065 "parser.tab.c"
    break;

  case 88: /* MethodBody: Block  */
#line 639 "parser.y"
                                                    {(yyval.node) = (yyvsp[0].node); }
#line 3071 "parser.tab.c"
    break;

  case 89: /* MethodBody: ';'  */
#line 640 "parser.y"
                                                    {(yyval.node) = NULL; }
#line 3077 "parser.tab.c"
    break;

  case 90: /* StaticInitializer: STATIC Block  */
#line 643 "parser.y"
                                                    {
        (yyval.node) = (yyvsp[0].node);
     }
#line 3085 "parser.tab.c"
    break;

  case 91: /* ConstructorDeclaration: MULTI_ClassModifier ConstructorDeclarator ConstructorBody  */
#line 649 "parser.y"
                                                                    { 
        (yyval.node) = (yyvsp[-1].node);
		vector <TAC*> tmp;
		tmp.pb(genLabelTAC(ST->curEnv->name));
		(yyval.node)->code.insert((yyval.node)->code.begin(), tmp.begin(), tmp.end());
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());	
        ST->curEnv->type = (yyvsp[-1].node)->place;	
		ST->EndScope(); 
    }
#line 3099 "parser.tab.c"
    break;

  case 92: /* ConstructorDeclaration: ConstructorDeclarator ConstructorBody  */
#line 658 "parser.y"
                                             { 
        (yyval.node) = (yyvsp[-1].node);
		vector <TAC*> tmp;
		tmp.pb(genLabelTAC(ST->curEnv->name));
		(yyval.node)->code.insert((yyval.node)->code.begin(), tmp.begin(), tmp.end());
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());	
        ST->curEnv->type = (yyvsp[-1].node)->place;	
		ST->EndScope();
    }
#line 3113 "parser.tab.c"
    break;

  case 93: /* ConstructorDeclarator: Identifier '(' FormalParameterList ')'  */
#line 670 "parser.y"
                                             { 
        ST->BeginScope();
        ST->curEnv->type = "CONTRUCTORTYPE";
        (yyval.node) = (yyvsp[-3].node);
		ST->curEnv->name = (yyvsp[-3].node)->place;
        (yyval.node)->code = (yyvsp[-1].node)->code;
    }
#line 3125 "parser.tab.c"
    break;

  case 94: /* ConstructorDeclarator: Identifier '(' ')'  */
#line 677 "parser.y"
                           { 
        ST->BeginScope();
        ST->curEnv->type = "CONTRUCTORTYPE";
        (yyval.node) = (yyvsp[-2].node);
		ST->curEnv->name = (yyvsp[-2].node)->place;
    }
#line 3136 "parser.tab.c"
    break;

  case 95: /* ConstructorBody: '{' ExplicitConstructorInvocation BlockStatements '}'  */
#line 686 "parser.y"
                                                                           { genNode *n1 = createNode("Separator", (yyvsp[-3].str), {});genNode *n4= createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("ConstructorBody","",{n1,(yyvsp[-2].node),(yyvsp[-1].node),n4}); }
#line 3142 "parser.tab.c"
    break;

  case 96: /* ConstructorBody: '{' BlockStatements '}'  */
#line 687 "parser.y"
                                                                           { genNode *n1 = createNode("Separator", (yyvsp[-2].str), {});genNode *n3= createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("ConstructorBody","",{n1,(yyvsp[-1].node),n3}); }
#line 3148 "parser.tab.c"
    break;

  case 97: /* ConstructorBody: '{' ExplicitConstructorInvocation '}'  */
#line 688 "parser.y"
                                                                           { genNode *n1 = createNode("Separator", (yyvsp[-2].str), {});genNode *n3= createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("ConstructorBody","",{n1,(yyvsp[-1].node),n3}); }
#line 3154 "parser.tab.c"
    break;

  case 98: /* ConstructorBody: '{' '}'  */
#line 689 "parser.y"
                                                                           { genNode *n1 = createNode("Separator", (yyvsp[-1].str), {});genNode *n2= createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("ConstructorBody","",{n1,n2}); }
#line 3160 "parser.tab.c"
    break;

  case 99: /* ExplicitConstructorInvocation: THIS SINGLE_ArgumentList  */
#line 693 "parser.y"
                                                                           { genNode * n1 = createNode("KEYWORD", (yyvsp[-1].str), {});(yyval.node) = createNode("ExplicitConstructorInvocation","", {n1,(yyvsp[0].node)}); }
#line 3166 "parser.tab.c"
    break;

  case 100: /* SINGLE_ArgumentList: '(' ')' ';'  */
#line 697 "parser.y"
                                                       { genNode *n1 = createNode("Separator", (yyvsp[-2].str), {});genNode *n2 = createNode("Separator", (yyvsp[-1].str), {});genNode *n3 = createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("SINGLE_ArgumentList","",{n1,n2,n3});  }
#line 3172 "parser.tab.c"
    break;

  case 101: /* SINGLE_ArgumentList: '(' ArgumentList ')' ';'  */
#line 698 "parser.y"
                                                       { genNode *n1 = createNode("Separator", (yyvsp[-3].str), {});genNode *n3 = createNode("Separator", (yyvsp[-1].str), {});genNode *n4 = createNode("Separator", (yyvsp[0].str), {});(yyval.node) = createNode("SINGLE_ArgumentList","",{n1,(yyvsp[-2].node),n3,n4});  }
#line 3178 "parser.tab.c"
    break;

  case 102: /* Block: BlockStart '{' BlockStatements '}'  */
#line 702 "parser.y"
                                                        {
		(yyval.node) = (yyvsp[-1].node); ST->EndScope(); 
	}
#line 3186 "parser.tab.c"
    break;

  case 103: /* Block: BlockStart '{' '}'  */
#line 705 "parser.y"
                                                        {
		 (yyval.node) = NULL; ST->EndScope();
	}
#line 3194 "parser.tab.c"
    break;

  case 104: /* BlockStart: %empty  */
#line 711 "parser.y"
      {
		(yyval.node) = NULL;
		ST->BeginScope();
	}
#line 3203 "parser.tab.c"
    break;

  case 105: /* BlockStatements: BlockStatement  */
#line 718 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3209 "parser.tab.c"
    break;

  case 106: /* BlockStatements: BlockStatements BlockStatement  */
#line 719 "parser.y"
                                             { 
        (yyval.node) = (yyvsp[-1].node);
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
    }
#line 3218 "parser.tab.c"
    break;

  case 107: /* BlockStatement: LocalVariableDeclarationStatement  */
#line 726 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3224 "parser.tab.c"
    break;

  case 108: /* BlockStatement: ClassDeclaration  */
#line 727 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3230 "parser.tab.c"
    break;

  case 109: /* BlockStatement: Statement  */
#line 728 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3236 "parser.tab.c"
    break;

  case 110: /* LocalVariableDeclarationStatement: LocalVariableDeclaration ';'  */
#line 732 "parser.y"
                                             { 
        (yyval.node) = (yyvsp[-1].node);
    }
#line 3244 "parser.tab.c"
    break;

  case 111: /* LocalVariableDeclaration: Type VariableDeclaratorList  */
#line 738 "parser.y"
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
#line 3262 "parser.tab.c"
    break;

  case 112: /* Statement: StatementWithoutTrailingSubstatement  */
#line 755 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3268 "parser.tab.c"
    break;

  case 113: /* Statement: LabeledStatement  */
#line 756 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3274 "parser.tab.c"
    break;

  case 114: /* Statement: IfThenStatement  */
#line 757 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3280 "parser.tab.c"
    break;

  case 115: /* Statement: IfThenElseStatement  */
#line 758 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3286 "parser.tab.c"
    break;

  case 116: /* Statement: WhileStatement  */
#line 759 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3292 "parser.tab.c"
    break;

  case 117: /* Statement: ForStatement  */
#line 760 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3298 "parser.tab.c"
    break;

  case 118: /* StatementNoShortIf: StatementWithoutTrailingSubstatement  */
#line 764 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3304 "parser.tab.c"
    break;

  case 119: /* StatementNoShortIf: LabeledStatementNoShortIf  */
#line 765 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3310 "parser.tab.c"
    break;

  case 120: /* StatementNoShortIf: IfThenElseStatementNoShortIf  */
#line 766 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3316 "parser.tab.c"
    break;

  case 121: /* StatementNoShortIf: WhileStatementNoShortIf  */
#line 767 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3322 "parser.tab.c"
    break;

  case 122: /* StatementNoShortIf: ForStatementNoShortIf  */
#line 768 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3328 "parser.tab.c"
    break;

  case 123: /* StatementWithoutTrailingSubstatement: Block  */
#line 772 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3334 "parser.tab.c"
    break;

  case 124: /* StatementWithoutTrailingSubstatement: EmptyStatement  */
#line 773 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3340 "parser.tab.c"
    break;

  case 125: /* StatementWithoutTrailingSubstatement: ExpressionStatement  */
#line 774 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3346 "parser.tab.c"
    break;

  case 126: /* StatementWithoutTrailingSubstatement: BreakStatement  */
#line 775 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3352 "parser.tab.c"
    break;

  case 127: /* StatementWithoutTrailingSubstatement: ContinueStatement  */
#line 776 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3358 "parser.tab.c"
    break;

  case 128: /* StatementWithoutTrailingSubstatement: ReturnStatement  */
#line 777 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3364 "parser.tab.c"
    break;

  case 129: /* EmptyStatement: ';'  */
#line 781 "parser.y"
                                             {  }
#line 3370 "parser.tab.c"
    break;

  case 130: /* LabeledStatement: Identifier ':' Statement  */
#line 785 "parser.y"
                                             { 
        (yyval.node) = (yyvsp[-2].node);
        (yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
    }
#line 3379 "parser.tab.c"
    break;

  case 131: /* LabeledStatementNoShortIf: Identifier ':' StatementNoShortIf  */
#line 792 "parser.y"
                                              { 
        (yyval.node) = (yyvsp[-2].node);
        (yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
    }
#line 3388 "parser.tab.c"
    break;

  case 132: /* ExpressionStatement: StatementExpression ';'  */
#line 799 "parser.y"
                                              { (yyval.node) = (yyvsp[-1].node); }
#line 3394 "parser.tab.c"
    break;

  case 133: /* StatementExpression: Assignment  */
#line 803 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3400 "parser.tab.c"
    break;

  case 134: /* StatementExpression: PreIncrementExpression  */
#line 804 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3406 "parser.tab.c"
    break;

  case 135: /* StatementExpression: PreDecrementExpression  */
#line 805 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3412 "parser.tab.c"
    break;

  case 136: /* StatementExpression: PostIncrementExpression  */
#line 806 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3418 "parser.tab.c"
    break;

  case 137: /* StatementExpression: PostDecrementExpression  */
#line 807 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3424 "parser.tab.c"
    break;

  case 138: /* StatementExpression: MethodInvocation  */
#line 808 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3430 "parser.tab.c"
    break;

  case 139: /* StatementExpression: ClassInstanceCreationExpression  */
#line 809 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3436 "parser.tab.c"
    break;

  case 140: /* IfThenStatement: IF '(' Expression ')' Statement  */
#line 813 "parser.y"
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
#line 3463 "parser.tab.c"
    break;

  case 141: /* IfThenElseStatement: IF '(' Expression ')' StatementNoShortIf ELSE Statement  */
#line 838 "parser.y"
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
#line 3495 "parser.tab.c"
    break;

  case 142: /* IfThenElseStatementNoShortIf: IF '(' Expression ')' StatementNoShortIf ELSE StatementNoShortIf  */
#line 868 "parser.y"
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
#line 3527 "parser.tab.c"
    break;

  case 143: /* WhileStatement: WHILE '(' Expression ')' Statement  */
#line 898 "parser.y"
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
#line 3569 "parser.tab.c"
    break;

  case 144: /* WhileStatementNoShortIf: WHILE '(' Expression ')' StatementNoShortIf  */
#line 938 "parser.y"
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
#line 3611 "parser.tab.c"
    break;

  case 145: /* ForStatement: BasicForStatement  */
#line 978 "parser.y"
                                                 {(yyval.node)=(yyvsp[0].node);}
#line 3617 "parser.tab.c"
    break;

  case 146: /* ForStatementNoShortIf: BasicForStatementNoShortIf  */
#line 982 "parser.y"
                                                 {(yyval.node)=(yyvsp[0].node);}
#line 3623 "parser.tab.c"
    break;

  case 147: /* BasicForStatement: BlockStart FOR '(' ForInit ';' Expression ';' ForUpdate ')' Statement  */
#line 986 "parser.y"
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

			////////////////////////////////// BLOCK END ////////////////////////////////////////////////////
			ST->curEnv = ST->curEnv->prevEnv;
    }
#line 3674 "parser.tab.c"
    break;

  case 148: /* BasicForStatementNoShortIf: BlockStart FOR '(' ForInit ';' Expression ';' ForUpdate ')' StatementNoShortIf  */
#line 1035 "parser.y"
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

			////////////////////////////////// BLOCK END ////////////////////////////////////////////////////
			ST->curEnv = ST->curEnv->prevEnv;
    }
#line 3725 "parser.tab.c"
    break;

  case 149: /* ForInit: StatementExpressionList  */
#line 1085 "parser.y"
                                       {(yyval.node)=(yyvsp[0].node);}
#line 3731 "parser.tab.c"
    break;

  case 150: /* ForInit: LocalVariableDeclaration  */
#line 1086 "parser.y"
                                       {(yyval.node)=(yyvsp[0].node);}
#line 3737 "parser.tab.c"
    break;

  case 151: /* ForUpdate: StatementExpressionList  */
#line 1090 "parser.y"
                                       {(yyval.node)=(yyvsp[0].node);}
#line 3743 "parser.tab.c"
    break;

  case 152: /* StatementExpressionList: StatementExpression  */
#line 1094 "parser.y"
                                                        { (yyval.node) = (yyvsp[0].node); }
#line 3749 "parser.tab.c"
    break;

  case 153: /* StatementExpressionList: StatementExpressionList ',' StatementExpression  */
#line 1095 "parser.y"
                                                        {
        (yyval.node) = (yyvsp[-2].node);
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
    }
#line 3758 "parser.tab.c"
    break;

  case 154: /* BreakStatement: BREAK ';'  */
#line 1102 "parser.y"
                  { 
        genNode* n = new genNode();
		(yyval.node) = n;
        TAC* tac = new TAC();	tac -> op = "goto";	tac -> isBreak = true;
        n->code.pb(tac);
    }
#line 3769 "parser.tab.c"
    break;

  case 155: /* ContinueStatement: CONTINUE ';'  */
#line 1111 "parser.y"
                                  {
        genNode* n = new genNode();
		(yyval.node) = n;
        TAC* tac = new TAC();	tac -> op = "goto";	tac -> isContinue = true;
        n->code.pb(tac);
    }
#line 3780 "parser.tab.c"
    break;

  case 156: /* ReturnStatement: RETURN Expression ';'  */
#line 1120 "parser.y"
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
#line 3803 "parser.tab.c"
    break;

  case 157: /* ReturnStatement: RETURN ';'  */
#line 1138 "parser.y"
                                  {
        genNode* n = new genNode();
		(yyval.node) = n;
		TAC* tac = new TAC();
		tac->op = "ret";
		(yyval.node)->code.pb(tac);
    }
#line 3815 "parser.tab.c"
    break;

  case 158: /* Primary: PrimaryNoNewArray  */
#line 1148 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 3821 "parser.tab.c"
    break;

  case 159: /* Primary: ArrayCreationExpression  */
#line 1149 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 3827 "parser.tab.c"
    break;

  case 160: /* PrimaryNoNewArray: Literal  */
#line 1153 "parser.y"
                                                                                   { (yyval.node)=(yyvsp[0].node); }
#line 3833 "parser.tab.c"
    break;

  case 161: /* PrimaryNoNewArray: '(' Expression ')'  */
#line 1159 "parser.y"
                                                                                    { (yyval.node) = (yyvsp[-1].node); }
#line 3839 "parser.tab.c"
    break;

  case 162: /* PrimaryNoNewArray: ClassInstanceCreationExpression  */
#line 1160 "parser.y"
                                                                                    { (yyval.node)=(yyvsp[0].node); }
#line 3845 "parser.tab.c"
    break;

  case 163: /* PrimaryNoNewArray: FieldAccess  */
#line 1161 "parser.y"
                                                                                    { (yyval.node)=(yyvsp[0].node); }
#line 3851 "parser.tab.c"
    break;

  case 164: /* PrimaryNoNewArray: ArrayAccess  */
#line 1162 "parser.y"
                                                                                    { (yyval.node)=(yyvsp[0].node); }
#line 3857 "parser.tab.c"
    break;

  case 165: /* PrimaryNoNewArray: MethodInvocation  */
#line 1163 "parser.y"
                                                                                    { (yyval.node)=(yyvsp[0].node); }
#line 3863 "parser.tab.c"
    break;

  case 166: /* Literal: BooleanLiteral  */
#line 1167 "parser.y"
                      {(yyval.node)=(yyvsp[0].node);}
#line 3869 "parser.tab.c"
    break;

  case 167: /* Literal: IntegerLiteral  */
#line 1168 "parser.y"
                      {(yyval.node)=(yyvsp[0].node);}
#line 3875 "parser.tab.c"
    break;

  case 168: /* Literal: CharacterLiteral  */
#line 1169 "parser.y"
                       {(yyval.node)=(yyvsp[0].node);}
#line 3881 "parser.tab.c"
    break;

  case 169: /* Literal: StringLiteral  */
#line 1170 "parser.y"
                    {(yyval.node)=(yyvsp[0].node);}
#line 3887 "parser.tab.c"
    break;

  case 170: /* Literal: NullLiteral  */
#line 1171 "parser.y"
                   {(yyval.node)=(yyvsp[0].node);}
#line 3893 "parser.tab.c"
    break;

  case 171: /* Literal: FloatLiteral  */
#line 1172 "parser.y"
                       { (yyval.node)=(yyvsp[0].node); }
#line 3899 "parser.tab.c"
    break;

  case 172: /* BooleanLiteral: TRUELITERAL  */
#line 1176 "parser.y"
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
#line 3914 "parser.tab.c"
    break;

  case 173: /* BooleanLiteral: FALSELITERAL  */
#line 1186 "parser.y"
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
#line 3929 "parser.tab.c"
    break;

  case 174: /* IntegerLiteral: INTEGERLITERAL  */
#line 1199 "parser.y"
                        {
			genNode* n1 = new genNode();
			(yyval.node) = n1;
			(yyval.node)->type = "int";
			(yyval.node)->place = to_string((yyvsp[0].ival));
			(yyval.node)->isLit = true;
            (yyval.node)->label = "IntegerLiteral";
            (yyval.node)->value = to_string((yyvsp[0].ival));
		}
#line 3943 "parser.tab.c"
    break;

  case 175: /* CharacterLiteral: CHARACTERLITERAL  */
#line 1211 "parser.y"
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
#line 3958 "parser.tab.c"
    break;

  case 176: /* StringLiteral: STRINGLITERAL  */
#line 1224 "parser.y"
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
#line 3973 "parser.tab.c"
    break;

  case 177: /* NullLiteral: NULLLITERAL  */
#line 1237 "parser.y"
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
#line 3988 "parser.tab.c"
    break;

  case 178: /* FloatLiteral: FLOATINGPOINTLITERAL  */
#line 1250 "parser.y"
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
#line 4003 "parser.tab.c"
    break;

  case 179: /* ClassInstanceCreationExpression: UnqualifiedClassInstanceCreationExpression  */
#line 1276 "parser.y"
                                                                                         { (yyval.node)=(yyvsp[0].node); }
#line 4009 "parser.tab.c"
    break;

  case 180: /* ClassInstanceCreationExpression: TypeName '.' UnqualifiedClassInstanceCreationExpression  */
#line 1277 "parser.y"
                                                                                       { (yyval.node) = (yyvsp[0].node); }
#line 4015 "parser.tab.c"
    break;

  case 181: /* ClassInstanceCreationExpression: Primary '.' UnqualifiedClassInstanceCreationExpression  */
#line 1278 "parser.y"
                                                                                         { (yyval.node) = (yyvsp[0].node); }
#line 4021 "parser.tab.c"
    break;

  case 182: /* UnqualifiedClassInstanceCreationExpression: NEW TypeName '(' ArgumentList ')'  */
#line 1282 "parser.y"
                                        { (yyval.node) = (yyvsp[-1].node); }
#line 4027 "parser.tab.c"
    break;

  case 183: /* UnqualifiedClassInstanceCreationExpression: NEW TypeName '(' ArgumentList ')' ClassBody  */
#line 1283 "parser.y"
                                                                                        {
		(yyval.node) = (yyvsp[-2].node);
        (yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());

	}
#line 4037 "parser.tab.c"
    break;

  case 184: /* UnqualifiedClassInstanceCreationExpression: NEW TypeName '(' ')' ClassBody  */
#line 1288 "parser.y"
                                      {   
		(yyval.node) = (yyvsp[0].node);
	}
#line 4045 "parser.tab.c"
    break;

  case 185: /* UnqualifiedClassInstanceCreationExpression: NEW TypeName '(' ')'  */
#line 1291 "parser.y"
                            {

	}
#line 4053 "parser.tab.c"
    break;

  case 186: /* FieldAccess: Primary '.' Identifier  */
#line 1297 "parser.y"
                              {
		(yyval.node) = (yyvsp[0].node);
	}
#line 4061 "parser.tab.c"
    break;

  case 187: /* ArrayAccess: TypeName '[' Expression ']'  */
#line 1303 "parser.y"
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
#line 4102 "parser.tab.c"
    break;

  case 188: /* ArrayAccess: PrimaryNoNewArray '[' Expression ']'  */
#line 1339 "parser.y"
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
#line 4147 "parser.tab.c"
    break;

  case 189: /* MethodInvocation: Identifier '(' ArgumentList ')'  */
#line 1382 "parser.y"
                                      {
        TAC* tac = new TAC();
		tac->op = "call";
		tac->isInt1 = true;

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
#line 4178 "parser.tab.c"
    break;

  case 190: /* MethodInvocation: Identifier '(' ')'  */
#line 1408 "parser.y"
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
#line 4203 "parser.tab.c"
    break;

  case 191: /* ArgumentList: ArgumentList ',' Expression  */
#line 1431 "parser.y"
                                                                                       {
       (yyval.node) = (yyvsp[-2].node);
	}
#line 4211 "parser.tab.c"
    break;

  case 192: /* ArgumentList: Expression  */
#line 1434 "parser.y"
                                                                                       {(yyval.node) = (yyvsp[0].node); }
#line 4217 "parser.tab.c"
    break;

  case 193: /* ArrayCreationExpression: NEW PrimitiveType '[' Expression ']'  */
#line 1438 "parser.y"
                                           {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->isArray = true;
		(yyval.node)->type = (yyvsp[-3].node)->type;
		(yyval.node)->nodeLen = stoi((yyvsp[-1].node)->place);
   }
#line 4229 "parser.tab.c"
    break;

  case 194: /* ArrayCreationExpression: NEW TypeName '[' Expression ']'  */
#line 1445 "parser.y"
                                     {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->isArray = true;
		(yyval.node)->type = (yyvsp[-3].node)->type;
		(yyval.node)->nodeLen = stoi((yyvsp[-1].node)->place);
   }
#line 4241 "parser.tab.c"
    break;

  case 195: /* Expression: AssignmentExpression  */
#line 1455 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4247 "parser.tab.c"
    break;

  case 196: /* AssignmentExpression: ConditionalExpression  */
#line 1459 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4253 "parser.tab.c"
    break;

  case 197: /* AssignmentExpression: Assignment  */
#line 1460 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4259 "parser.tab.c"
    break;

  case 198: /* Assignment: LeftHandSide AssignmentOperator Expression  */
#line 1464 "parser.y"
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
#line 4306 "parser.tab.c"
    break;

  case 199: /* Assignment: TypeName AssignmentOperator Expression  */
#line 1506 "parser.y"
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
#line 4353 "parser.tab.c"
    break;

  case 200: /* LeftHandSide: FieldAccess  */
#line 1551 "parser.y"
                                                                                        { (yyval.node)=(yyvsp[0].node); }
#line 4359 "parser.tab.c"
    break;

  case 201: /* LeftHandSide: ArrayAccess  */
#line 1552 "parser.y"
                                                                                        { (yyval.node)=(yyvsp[0].node); }
#line 4365 "parser.tab.c"
    break;

  case 202: /* AssignmentOperator: '='  */
#line 1556 "parser.y"
                                                                                        { (yyval.str) = (yyvsp[0].str);}
#line 4371 "parser.tab.c"
    break;

  case 203: /* AssignmentOperator: MUL_ASSIGN  */
#line 1557 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 4377 "parser.tab.c"
    break;

  case 204: /* AssignmentOperator: DIV_ASSIGN  */
#line 1558 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 4383 "parser.tab.c"
    break;

  case 205: /* AssignmentOperator: MOD_ASSIGN  */
#line 1559 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 4389 "parser.tab.c"
    break;

  case 206: /* AssignmentOperator: ADD_ASSIGN  */
#line 1560 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 4395 "parser.tab.c"
    break;

  case 207: /* AssignmentOperator: SUB_ASSIGN  */
#line 1561 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 4401 "parser.tab.c"
    break;

  case 208: /* AssignmentOperator: LEFT_ASSIGN  */
#line 1562 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 4407 "parser.tab.c"
    break;

  case 209: /* AssignmentOperator: RIGHT_ASSIGN  */
#line 1563 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 4413 "parser.tab.c"
    break;

  case 210: /* AssignmentOperator: UNSIGNED_RIGHT_ASSIGN  */
#line 1564 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 4419 "parser.tab.c"
    break;

  case 211: /* AssignmentOperator: AND_ASSIGN  */
#line 1565 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 4425 "parser.tab.c"
    break;

  case 212: /* AssignmentOperator: XOR_ASSIGN  */
#line 1566 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 4431 "parser.tab.c"
    break;

  case 213: /* AssignmentOperator: OR_ASSIGN  */
#line 1567 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 4437 "parser.tab.c"
    break;

  case 214: /* ConditionalExpression: ConditionalOrExpression  */
#line 1571 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4443 "parser.tab.c"
    break;

  case 215: /* ConditionalExpression: ConditionalOrExpression '?' Expression ':' ConditionalExpression  */
#line 1572 "parser.y"
                                                                                        {
    	genNode* newNode = new genNode();
		(yyval.node) = newNode;
		getCECode((yyval.node), (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 4453 "parser.tab.c"
    break;

  case 216: /* ConditionalOrExpression: ConditionalAndExpression  */
#line 1580 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4459 "parser.tab.c"
    break;

  case 217: /* ConditionalOrExpression: ConditionalOrExpression OR_OP ConditionalAndExpression  */
#line 1581 "parser.y"
                                                                                        {
    	genNode* n= new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "||", (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 4471 "parser.tab.c"
    break;

  case 218: /* ConditionalAndExpression: InclusiveOrExpression  */
#line 1591 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4477 "parser.tab.c"
    break;

  case 219: /* ConditionalAndExpression: ConditionalAndExpression AND_OP InclusiveOrExpression  */
#line 1592 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "&&", (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 4489 "parser.tab.c"
    break;

  case 220: /* InclusiveOrExpression: ExclusiveOrExpression  */
#line 1602 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4495 "parser.tab.c"
    break;

  case 221: /* InclusiveOrExpression: InclusiveOrExpression '|' ExclusiveOrExpression  */
#line 1603 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "|", (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 4507 "parser.tab.c"
    break;

  case 222: /* ExclusiveOrExpression: AndExpression  */
#line 1613 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4513 "parser.tab.c"
    break;

  case 223: /* ExclusiveOrExpression: ExclusiveOrExpression '^' AndExpression  */
#line 1614 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "^", (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 4525 "parser.tab.c"
    break;

  case 224: /* AndExpression: EqualityExpression  */
#line 1624 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4531 "parser.tab.c"
    break;

  case 225: /* AndExpression: AndExpression '&' EqualityExpression  */
#line 1625 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "&", (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 4543 "parser.tab.c"
    break;

  case 226: /* EqualityExpression: RelationalExpression  */
#line 1635 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4549 "parser.tab.c"
    break;

  case 227: /* EqualityExpression: EqualityExpression EQ_OP RelationalExpression  */
#line 1636 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "==", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 4561 "parser.tab.c"
    break;

  case 228: /* EqualityExpression: EqualityExpression NE_OP RelationalExpression  */
#line 1643 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "!=", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 4573 "parser.tab.c"
    break;

  case 229: /* RelationalExpression: ShiftExpression  */
#line 1653 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4579 "parser.tab.c"
    break;

  case 230: /* RelationalExpression: RelationalExpression '<' ShiftExpression  */
#line 1654 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "<", (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 4591 "parser.tab.c"
    break;

  case 231: /* RelationalExpression: RelationalExpression '>' ShiftExpression  */
#line 1661 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), ">", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 4603 "parser.tab.c"
    break;

  case 232: /* RelationalExpression: RelationalExpression LE_OP ShiftExpression  */
#line 1668 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "<=", (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 4615 "parser.tab.c"
    break;

  case 233: /* RelationalExpression: RelationalExpression GE_OP ShiftExpression  */
#line 1675 "parser.y"
                                                                                        {
     	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), ">=", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 4627 "parser.tab.c"
    break;

  case 234: /* ShiftExpression: AdditiveExpression  */
#line 1685 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4633 "parser.tab.c"
    break;

  case 235: /* ShiftExpression: ShiftExpression LEFT_OP AdditiveExpression  */
#line 1686 "parser.y"
                                                                                        {
        genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "<<", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 4645 "parser.tab.c"
    break;

  case 236: /* ShiftExpression: ShiftExpression RIGHT_OP AdditiveExpression  */
#line 1693 "parser.y"
                                                                                        {
        genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), ">>", (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 4657 "parser.tab.c"
    break;

  case 237: /* AdditiveExpression: MultiplicativeExpression  */
#line 1703 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4663 "parser.tab.c"
    break;

  case 238: /* AdditiveExpression: AdditiveExpression '+' MultiplicativeExpression  */
#line 1704 "parser.y"
                                                                                        {
        genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "+", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 4675 "parser.tab.c"
    break;

  case 239: /* AdditiveExpression: AdditiveExpression '-' MultiplicativeExpression  */
#line 1711 "parser.y"
                                                                                        {
        genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "-", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 4687 "parser.tab.c"
    break;

  case 240: /* MultiplicativeExpression: UnaryExpression  */
#line 1721 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4693 "parser.tab.c"
    break;

  case 241: /* MultiplicativeExpression: MultiplicativeExpression '*' UnaryExpression  */
#line 1722 "parser.y"
                                                                                        {
        genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "*", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 4705 "parser.tab.c"
    break;

  case 242: /* MultiplicativeExpression: MultiplicativeExpression '/' UnaryExpression  */
#line 1729 "parser.y"
                                                                                        {
        genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "/", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 4717 "parser.tab.c"
    break;

  case 243: /* MultiplicativeExpression: MultiplicativeExpression '%' UnaryExpression  */
#line 1736 "parser.y"
                                                                                        {
        genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "%", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 4729 "parser.tab.c"
    break;

  case 244: /* UnaryExpression: PreIncrementExpression  */
#line 1746 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4735 "parser.tab.c"
    break;

  case 245: /* UnaryExpression: PreDecrementExpression  */
#line 1747 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4741 "parser.tab.c"
    break;

  case 246: /* UnaryExpression: '+' UnaryExpression  */
#line 1748 "parser.y"
                                                                                        {
       (yyval.node) = (yyvsp[0].node);
   }
#line 4749 "parser.tab.c"
    break;

  case 247: /* UnaryExpression: '-' UnaryExpression  */
#line 1751 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		genNode* zeroNode = new genNode();
		zeroNode->isLit = true; zeroNode->place = "0"; zeroNode->type = "int";
		gen2OpCode((yyval.node), "-", zeroNode, (yyvsp[0].node), line);
   }
#line 4761 "parser.tab.c"
    break;

  case 248: /* UnaryExpression: UnaryExpressionNotPlusMinus  */
#line 1758 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4767 "parser.tab.c"
    break;

  case 249: /* PreIncrementExpression: INC_OP UnaryExpression  */
#line 1762 "parser.y"
                                                                                        {
    	(yyval.node) = (yyvsp[0].node);
		getPreUnaryOpCode("++", (yyval.node), (yyvsp[0].node), line);
   }
#line 4776 "parser.tab.c"
    break;

  case 250: /* PreDecrementExpression: DEC_OP UnaryExpression  */
#line 1769 "parser.y"
                                                                                        {
    	(yyval.node) = (yyvsp[0].node);
		getPreUnaryOpCode("--", (yyval.node), (yyvsp[0].node), line);
   }
#line 4785 "parser.tab.c"
    break;

  case 251: /* UnaryExpressionNotPlusMinus: PostfixExpression  */
#line 1776 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4791 "parser.tab.c"
    break;

  case 252: /* UnaryExpressionNotPlusMinus: '~' UnaryExpression  */
#line 1777 "parser.y"
                                                                                        {
   }
#line 4798 "parser.tab.c"
    break;

  case 253: /* UnaryExpressionNotPlusMinus: '!' UnaryExpression  */
#line 1779 "parser.y"
                                                                                        {

   }
#line 4806 "parser.tab.c"
    break;

  case 254: /* UnaryExpressionNotPlusMinus: CastExpression  */
#line 1782 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4812 "parser.tab.c"
    break;

  case 255: /* PostfixExpression: Primary  */
#line 1786 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4818 "parser.tab.c"
    break;

  case 256: /* PostfixExpression: TypeName  */
#line 1787 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4824 "parser.tab.c"
    break;

  case 257: /* PostfixExpression: PostIncrementExpression  */
#line 1788 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4830 "parser.tab.c"
    break;

  case 258: /* PostfixExpression: PostDecrementExpression  */
#line 1789 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4836 "parser.tab.c"
    break;

  case 259: /* PostIncrementExpression: PostfixExpression INC_OP  */
#line 1793 "parser.y"
                                                                                        {
        (yyval.node) = (yyvsp[-1].node);
		getPostUnaryOpCode("++", (yyval.node), (yyvsp[-1].node), line);
   }
#line 4845 "parser.tab.c"
    break;

  case 260: /* PostDecrementExpression: PostfixExpression DEC_OP  */
#line 1800 "parser.y"
                                                                                        {
        (yyval.node) = (yyvsp[-1].node);
		getPostUnaryOpCode("--", (yyval.node), (yyvsp[-1].node), line);
   }
#line 4854 "parser.tab.c"
    break;

  case 261: /* CastExpression: '(' PrimitiveType ')' UnaryExpression  */
#line 1807 "parser.y"
                                                                                        {

   }
#line 4862 "parser.tab.c"
    break;


#line 4866 "parser.tab.c"

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

#line 1816 "parser.y"


int main (void) {
    yyparse();

    // generateDotFile();
    cout<< "\n\n\n";
    ST->PrintTable(ST->baseEnv);
    

    return 1;
}

void yyerror (const char *str) {cerr<<"Line "<<line<<": "<<str<<endl;}
