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
#define YYLAST   2548

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  113
/* YYNRULES -- Number of rules.  */
#define YYNRULES  275
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  473

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
       0,    77,    77,    84,    87,    88,    89,    92,    95,    96,
      99,   100,   104,   107,   110,   130,   131,   135,   136,   147,
     148,   152,   160,   168,   176,   184,   195,   202,   213,   214,
     217,   224,   233,   236,   242,   246,   250,   259,   283,   311,
     315,   324,   337,   341,   348,   349,   355,   356,   357,   361,
     362,   363,   364,   372,   376,   382,   383,   387,   395,   403,
     411,   419,   430,   445,   453,   499,   502,   505,   511,   512,
     517,   526,   538,   545,   550,   556,   561,   566,   570,   575,
     582,   590,   591,   595,   599,   614,   632,   635,   641,   642,
     645,   651,   660,   672,   679,   688,   689,   690,   691,   695,
     699,   700,   704,   707,   713,   720,   721,   728,   729,   730,
     734,   740,   757,   758,   759,   760,   761,   762,   766,   767,
     768,   769,   770,   774,   775,   776,   777,   778,   779,   783,
     787,   794,   801,   805,   806,   807,   808,   809,   810,   811,
     815,   840,   870,   900,   940,   980,   984,   988,  1015,  1041,
    1082,  1112,  1152,  1182,  1229,  1276,  1303,  1329,  1370,  1400,
    1440,  1470,  1517,  1565,  1566,  1570,  1574,  1575,  1582,  1591,
    1600,  1618,  1628,  1629,  1633,  1634,  1635,  1636,  1637,  1638,
    1642,  1643,  1644,  1645,  1646,  1647,  1651,  1661,  1674,  1686,
    1699,  1712,  1725,  1738,  1739,  1740,  1744,  1745,  1750,  1753,
    1759,  1765,  1801,  1844,  1870,  1893,  1897,  1901,  1908,  1918,
    1922,  1923,  1927,  1969,  2014,  2015,  2019,  2020,  2021,  2022,
    2023,  2024,  2025,  2026,  2027,  2028,  2029,  2030,  2034,  2035,
    2043,  2044,  2054,  2055,  2065,  2066,  2076,  2077,  2087,  2088,
    2098,  2099,  2106,  2116,  2117,  2124,  2131,  2138,  2148,  2149,
    2156,  2166,  2167,  2174,  2184,  2185,  2192,  2199,  2209,  2210,
    2211,  2214,  2221,  2225,  2232,  2239,  2240,  2242,  2245,  2249,
    2250,  2251,  2252,  2256,  2263,  2270
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

#define YYPACT_NINF (-324)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-273)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     115,  -324,  -324,  -324,  -324,    39,  -324,  -324,  -324,    45,
    -324,    16,    16,  -324,  -324,  -324,   201,  -324,    39,  -324,
     114,  -324,  -324,    16,  -324,  -324,  -324,   -53,    39,  -324,
      39,   739,  -324,  -324,   -53,  -324,   -11,    39,  -324,  -324,
    -324,  -324,  -324,  -324,  -324,  -324,  -324,   125,    35,    39,
      49,  -324,  -324,  -324,  -324,  -324,  -324,  1059,  -324,  -324,
    -324,  2510,  -324,    50,  -324,  -324,    41,  -324,  -324,    66,
    -324,   108,   110,    67,   145,   -22,   143,  -324,   160,   124,
      67,  -324,  -324,    39,    50,    41,  -324,  -324,  -324,  1475,
    -324,  1508,   244,  -324,   132,   600,  -324,    42,    -6,  -324,
    -324,    67,    39,  -324,  2163,   348,   150,  -324,  -324,   136,
     147,  -324,  -324,  -324,  -324,  -324,  -324,   159,   162,   156,
    1907,  -324,   600,  2419,  2419,  2419,  -324,  -324,   900,   204,
      39,  -324,  1587,  -324,     5,  1620,  -324,  -324,   177,  -324,
    -324,  -324,  -324,  -324,   181,  -324,  -324,  -324,  -324,  -324,
    -324,  -324,  -324,   174,   194,  -324,  -324,  -324,  -324,  -324,
    -324,  -324,    33,  -324,   633,  1168,    37,  -324,  -324,  1412,
    -324,  -324,   172,   180,   187,  -324,  1699,    49,     9,  -324,
      39,  -324,   130,  -324,  -324,   841,    49,  -324,  2419,  2419,
    2419,  2419,  1876,  2093,  2466,  -324,  -324,  -324,  -324,  -324,
    -324,  -324,  -324,   170,   215,   237,   222,   258,   223,   202,
     227,   220,   123,  -324,  -324,  -324,  -324,   172,  -324,  -324,
    -324,    49,    29,  -324,  -324,  2419,  2419,  2171,  -324,  -324,
    -324,   235,    55,   242,    73,  -324,  -324,  -324,  -324,   255,
    -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,
    -324,  -324,  2234,  2062,    26,  2419,  1345,   250,  -324,  1732,
     261,  -324,  -324,  -324,  -324,    26,  2419,  2419,  -324,  -324,
    -324,    67,    49,  -324,   314,    39,  -324,  -324,  -324,  -324,
    -324,   265,  -324,    78,  -324,  2419,  2419,  2419,  2419,  2419,
    2419,  2419,  2419,  2419,  2419,  2419,  2419,  2419,  2419,  2419,
    2419,  2419,  2419,  2419,  2419,    67,    49,   266,   268,   262,
      47,  -324,  -324,  2241,  2419,  2419,  -324,  -324,    87,   267,
      39,  -324,  -324,  -324,  -324,  1804,  -324,  -324,   269,  -324,
      67,  -324,  2419,  -324,  2141,   297,   215,   237,   222,   258,
     223,   202,   202,   227,   227,   227,   227,   220,   220,   123,
     123,  -324,  -324,  -324,    67,  1345,  1770,  -324,   272,  2419,
     -53,    89,   270,   271,  -324,  -324,    72,  1938,  -324,  -324,
     274,   277,  -324,  -324,  -324,  -324,  2419,  -324,   286,   289,
     316,    11,  -324,   337,   339,  -324,  -324,  -324,  -324,  -324,
    -324,  -324,  -324,   -53,  -324,  -324,  2248,   287,  1969,  2426,
    -324,  2419,  2419,  1770,   296,  1345,  -324,  1345,   298,   277,
    2311,  2318,   294,  -324,   302,   306,  -324,  1845,  -324,  -324,
    1345,  1345,   308,  1345,   310,  2325,  1770,  1770,  2000,   305,
    -324,  -324,  1345,  -324,  1345,  1345,   315,  -324,   361,  2349,
     309,  2031,  -324,  -324,  -324,  1345,  1770,  1770,   317,  2356,
    2388,   311,  -324,  -324,  -324,  1770,  1770,   320,  1770,   321,
    2395,  -324,  -324,  1770,  -324,  1770,  1770,   322,  -324,  -324,
    -324,  1770,  -324
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
       0,   192,   186,   187,   191,   189,   190,     0,     0,     0,
       0,   188,     0,     0,     0,     0,    98,   129,   270,    12,
       0,   108,   104,   123,     0,   104,   105,   107,     0,   109,
     112,   124,   113,   125,     0,   114,   115,   116,   117,   145,
     126,   127,   128,   269,   172,   174,   180,   181,   182,   183,
     184,   185,   176,   193,   177,   178,   179,   173,   133,     0,
     134,   135,     0,   136,   137,   103,   104,    77,     0,    32,
       0,    86,    67,    85,    93,     0,    67,    62,     0,     0,
       0,     0,     0,     0,   270,    69,    64,   176,   179,    68,
     209,   211,   210,   228,   230,   232,   234,   236,   238,   240,
     243,   248,   251,   254,   258,   259,   262,   265,   271,   272,
     268,    73,     0,    53,   169,     0,     0,     0,    99,   168,
     171,     0,     0,     0,   270,   177,   178,   263,   264,     0,
     216,   220,   221,   217,   218,   219,   225,   227,   226,   222,
     223,   224,     0,     0,     0,     0,   104,   111,    97,   104,
       0,    96,   106,   110,   132,     0,     0,     0,   273,   274,
     102,    79,    76,    84,     0,     0,    82,   260,   261,   267,
     266,     0,    36,     0,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    75,    72,     0,     0,     0,
       0,   206,   170,     0,     0,     0,   175,   204,     0,     0,
       0,   194,   213,   130,    95,     0,   200,   195,     0,   212,
      78,    87,     0,    35,     0,     0,   231,   233,   235,   237,
     239,   242,   241,   244,   245,   247,   246,   249,   250,   252,
     253,   255,   256,   257,    74,   104,   104,   100,     0,     0,
     199,     0,     0,     0,   203,   201,     0,     0,   164,   166,
       0,   163,   202,   275,    34,    38,     0,   143,     0,     0,
      12,     0,   140,     0,   112,   119,   120,   121,   122,   146,
     101,   205,   198,   196,   208,   207,     0,     0,     0,     0,
     229,     0,     0,   104,     0,   104,   197,   104,     0,   165,
       0,     0,     0,   167,     0,     0,   131,     0,   141,   147,
     104,   104,     0,   104,     0,     0,   104,   104,     0,     0,
     150,   149,   104,   148,   104,   104,     0,   144,     0,     0,
       0,     0,   153,   152,   151,   104,   104,   104,     0,     0,
       0,     0,   154,   142,   155,   104,   104,     0,   104,     0,
       0,   158,   157,   104,   156,   104,   104,     0,   161,   160,
     159,   104,   162
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -324,  -324,  -324,  -324,   390,    40,     4,   -17,    -4,  -110,
    -324,  -324,  -324,  -324,  -324,   -44,  -324,  -324,    19,  -324,
     -29,  -324,   345,  -324,  -324,    -2,    12,   -66,   303,   -90,
    -189,  -324,   346,   375,   -49,   228,  -324,   330,  -324,  -324,
     355,   334,  -324,  -324,   -15,    -3,   -57,  -127,  -324,  -323,
     977,   260,   238,  -324,  -324,  -324,  -324,   -76,  -324,  -324,
    -324,  -324,  -324,  -324,  -324,  -324,  -324,     3,  -235,  -310,
    -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,
    -324,  -324,    71,  -167,   356,  1013,   152,  -234,  -324,   -84,
    -324,  1072,  -324,   253,    56,  -324,   144,   146,   148,   155,
     142,    23,    15,   -10,    25,   -86,   380,   461,  -324,   578,
     707,   824,  -324
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     9,    10,    11,    12,    13,   194,    21,   130,    50,
      51,    52,    53,    54,    55,   101,   195,   283,   131,    15,
      32,    57,    58,    59,    60,    16,    17,    76,    77,    78,
     196,    62,    63,    79,    98,    99,   100,    87,    64,    65,
      66,    90,   132,   228,   133,   134,   135,   136,   137,   138,
     139,   383,   140,   141,   142,   385,   143,   144,   145,   146,
     386,   147,   387,   148,   388,   149,   389,   370,   408,   409,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   197,   163,   164,   165,   198,   310,   167,   199,
     200,   168,   169,   255,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      18,    27,   368,    73,   284,    67,    80,   183,   262,    20,
     260,    33,   233,    34,    48,   371,   404,   106,   318,    14,
      70,    68,    30,     1,     2,    31,     3,    49,    26,    61,
      14,    14,    75,    69,   176,    47,   231,   237,   238,     4,
      48,   239,    14,   178,    48,    22,    19,     6,    88,   262,
      56,     7,    24,    49,   -80,    61,   222,    83,    72,    19,
      69,    47,    19,    24,   257,    47,    75,  -104,   181,    88,
      97,   184,   129,    26,   129,   259,    56,   185,    47,   361,
     182,    69,   281,    91,    73,   186,   272,   321,    97,    91,
     273,   180,   185,   128,   368,   128,    47,   320,   327,    47,
       8,    97,   277,   278,   279,   280,   306,   371,   239,    47,
    -139,    74,   185,   186,  -138,   129,  -139,  -139,   129,    89,
    -138,  -138,     1,     2,   358,     3,   232,   234,   234,    72,
     359,   313,   262,   271,    86,   314,   128,    28,     4,   128,
       5,   307,   308,   311,    91,   375,     6,    94,   313,   252,
       7,    35,    95,   285,    28,   254,    38,   333,    39,   129,
     162,   334,   162,   186,   364,    19,   393,    40,   311,   319,
     359,   322,   359,    41,    42,   422,   424,   305,    43,    44,
     128,   275,   328,   329,    92,   183,   302,   303,   304,    47,
     436,    93,   234,   234,   234,   234,    28,   104,    29,     8,
     105,   319,   335,   162,   448,    72,   162,    28,     1,     2,
      72,    25,   274,   179,   457,   459,   351,   352,   353,   286,
     224,   287,    96,   225,     4,   467,   102,   103,   330,   311,
     362,   363,     6,   102,   223,   226,     7,    33,   227,   129,
     229,   166,   129,   166,   268,   269,   373,   162,   326,   369,
      35,    95,  -271,  -271,   256,    38,   265,    39,   186,  -272,
    -272,   263,   354,   128,    19,   264,    40,   288,   294,   295,
     296,   297,    41,    42,   266,   391,   290,    43,    44,   292,
     293,   300,   301,   397,   166,   298,   299,   166,   347,   348,
     289,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   343,
     344,   345,   346,   291,   412,   341,   342,   414,   415,   312,
     369,   177,   315,   413,   366,   349,   350,   162,   166,   128,
     162,   392,   316,   102,   369,   369,   234,   325,   129,   380,
     331,   369,   332,   355,   440,   356,   357,   376,   365,   369,
     372,   394,   395,   381,    35,    95,   390,   451,   398,    38,
     399,    39,   401,   369,   406,   402,   403,   405,    19,  -118,
      40,   410,   417,   369,   369,   420,    41,    42,   425,   426,
     234,    43,    44,   427,   369,   432,   380,   434,   129,   441,
     129,   446,   445,   449,   455,   460,   162,   463,   465,   471,
     381,    23,    82,   129,   129,   187,   129,    84,   166,   380,
     380,   166,    71,   276,   107,   129,    85,   129,   129,   108,
     429,   128,   267,   381,   381,   221,   162,   162,   129,   380,
     380,   336,   400,   340,   337,     0,     0,   338,   380,   380,
       0,   380,     0,   381,   381,   339,   380,     0,   380,   380,
       0,     0,   381,   381,   380,   381,     0,     0,     0,     0,
     381,     0,   381,   381,     0,     0,     0,   162,   381,   170,
     162,   170,     0,     0,   162,     0,   162,   166,   162,   235,
     235,   162,   162,     0,     0,     0,     0,     0,   162,     0,
       0,   162,   162,     0,   162,     0,   162,   162,   162,     0,
       0,     0,     0,   162,     0,   162,   162,   166,   166,     0,
     162,     0,   170,     0,     0,   170,   162,   162,   162,     0,
     162,   162,     0,     0,     0,     0,   162,   162,     0,   162,
       0,   162,     0,     0,   162,     0,   162,   162,     0,     0,
       0,     0,   162,     0,   235,   235,   235,   235,   166,     0,
     171,   166,   171,     0,     0,   166,   170,   166,     0,   166,
       0,     0,   166,   166,     0,     0,     0,     0,     0,   166,
       0,     0,   166,   166,     0,   166,     0,   166,   166,   166,
       0,     0,     0,     0,   166,     0,   166,   166,     0,     0,
       0,   166,     0,   171,   384,     0,   171,   166,   166,   166,
       0,   166,   166,     0,     0,     0,    35,   166,   166,     0,
     166,    38,   166,    39,     0,   166,     0,   166,   166,     0,
      19,     0,    40,   166,     0,     0,     0,     0,    41,    42,
       0,     0,     0,    43,    44,     0,   170,   171,     0,   170,
       0,   384,     0,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     235,     0,     0,   416,   384,   384,     0,   172,     0,   172,
    -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,
    -214,  -214,     0,     0,   384,   384,   437,   438,   235,     0,
       0,     0,     0,   384,   384,     0,   384,     0,     0,     0,
       0,   384,     0,   384,   384,   170,   453,   454,     0,   384,
     172,     0,     0,   172,     0,   461,   462,   171,   464,     0,
     171,     0,     0,   468,     0,   469,   470,     0,     0,     0,
       0,   472,   235,     0,     0,   170,   170,     0,     0,     0,
       0,     0,     0,     0,     0,    35,     1,    36,    37,     3,
      38,     0,    39,     0,   172,     0,     0,     0,     0,    19,
       0,    40,     4,     0,     0,     0,     0,    41,    42,     0,
       6,     0,    43,    44,     7,     0,   170,     0,     0,   170,
       0,     0,     0,   170,     0,   170,   171,   170,     0,     0,
     170,   170,     0,     0,     0,     0,   173,   170,   173,     0,
     170,   170,     0,   170,     0,   170,   170,   170,     0,     0,
       0,     0,   170,     0,   170,   170,   171,   171,    45,   170,
       0,     0,     0,    46,     0,   170,   170,   170,     0,   170,
     170,     0,     0,     0,   172,   170,   170,   172,   170,   173,
     170,     0,   173,   170,     0,   170,   170,    35,    95,     0,
       0,   170,    38,     0,    39,     0,     0,   171,     0,     0,
     171,    19,     0,    40,   171,     0,   171,     0,   171,    41,
      42,   171,   171,     0,    43,    44,     0,     0,   171,     0,
       0,   171,   171,   173,   171,     0,   171,   171,   171,     0,
       0,     0,     0,   171,     0,   171,   171,     0,     0,     0,
     171,     0,     0,   172,     0,     0,   171,   171,   171,     0,
     171,   171,     0,   174,     0,   174,   171,   171,     0,   171,
     -28,   171,     0,     0,   171,     0,   171,   171,     0,     0,
       0,     0,   171,   172,   172,     0,     0,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,     0,
       0,     0,     0,     0,     0,     0,   174,     0,     0,   174,
       0,     0,     0,   173,     0,     0,   173,     0,     0,     0,
       0,     0,     0,     0,   172,     0,   252,   172,     0,     0,
     253,   172,   254,   172,     0,   172,     0,     0,   172,   172,
       0,     0,     0,     0,     0,   172,     0,     0,   172,   172,
     174,   172,     0,   172,   172,   172,     0,     0,     0,     0,
     172,     0,   172,   172,     0,     0,     0,   172,     0,     0,
       0,     0,     0,   172,   172,   172,     0,   172,   172,     0,
       0,     0,   173,   172,   172,     0,   172,     0,   172,     0,
       0,   172,     0,   172,   172,     0,     0,     0,     0,   172,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   173,   173,     0,    35,     1,    36,    37,     3,
      38,     0,    39,     0,     0,     0,     0,     0,     0,    19,
     174,    40,     4,   174,     0,     0,     0,    41,    42,     0,
       6,     0,    43,    44,     7,     0,     0,     0,     0,     0,
       0,     0,     0,   173,     0,     0,   173,     0,     0,     0,
     173,     0,   173,     0,   173,     0,     0,   173,   173,     0,
       0,     0,     0,     0,   173,     0,     0,   173,   173,     0,
     173,     0,   173,   173,   173,     0,   236,   236,    81,   173,
       0,   173,   173,    46,     0,     0,   173,     0,     0,   174,
       0,     0,   173,   173,   173,     0,   173,   173,     0,     0,
       0,     0,   173,   173,     0,   173,     0,   173,     0,     0,
     173,     0,   173,   173,     0,     0,   201,     0,   173,   174,
     174,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   201,     0,     0,     0,     0,   201,     0,     0,
       0,   236,   236,   236,   236,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,     0,     0,     0,
     174,     0,     0,   174,     0,     0,     0,   174,     0,   174,
       0,   174,     0,   323,   174,   174,     0,     0,     0,     0,
       0,   174,     0,     0,   174,   174,     0,   174,     0,   174,
     174,   174,     0,     0,     0,     0,   174,     0,   174,   174,
       0,     0,     0,   174,   201,   201,     0,     0,     0,   174,
     174,   174,     0,   174,   174,     0,     0,     0,     0,   174,
     174,     0,   174,     0,   174,     0,     0,   174,     0,   174,
     174,     0,     0,     0,     0,   174,     0,   201,   201,   201,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,     0,     0,
       0,     0,     0,     0,   201,   201,     0,   201,     0,     0,
       0,     0,   377,   382,     0,     0,     0,     0,   201,   201,
       0,     0,     0,     0,     0,   236,     0,     0,     0,   109,
       0,     0,     0,     0,     0,     0,     0,   201,   201,   110,
     111,   112,   113,   114,   115,    19,   116,     0,     0,   117,
       0,     0,   119,     0,     0,     0,     0,   120,     0,     0,
     323,   121,   418,     0,   419,   201,   201,   201,     0,   236,
       0,     0,     0,     0,     0,     0,     0,   430,   431,     0,
     433,     0,     0,   377,   382,     0,   201,     0,     0,   442,
       0,   443,   444,     0,     0,     0,   122,   123,   124,     0,
       0,   125,   452,   418,   419,     0,     0,     0,     0,   127,
       0,   201,   430,   431,     0,   433,     0,     0,     0,   201,
     442,     0,   443,   444,     0,     0,     0,     0,   452,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     201,     0,     0,   201,   201,     0,     0,     0,     0,   109,
       0,    35,     1,     2,     0,     3,    38,     0,    39,   110,
     111,   112,   113,   114,   115,    19,   116,    40,     4,   117,
     201,   118,   119,    41,    42,     0,     6,   120,    43,    44,
       7,   121,   109,   201,    35,     1,     2,     0,     3,    38,
       0,    39,   110,   111,   112,   113,   114,   115,    19,   116,
      40,     4,   117,     0,     0,   119,    41,    42,     0,     6,
     120,    43,    44,     7,   121,     0,   122,   123,   124,     0,
       0,   125,     0,     0,   126,     0,     0,     0,     0,   127,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   122,
     123,   124,     0,     0,   125,     0,     0,   175,     0,     0,
       0,   109,   127,    35,     1,     2,     0,     3,    38,     0,
      39,   110,   111,   112,   113,   114,   115,    19,   116,    40,
       4,   117,     0,     0,   119,    41,    42,     0,     6,   120,
      43,    44,     7,   121,   109,     0,    35,     1,     2,     0,
       3,    38,     0,    39,   110,   111,   112,   113,   114,   115,
      19,   116,    40,     4,   117,     0,     0,   119,    41,    42,
       0,     6,   120,    43,    44,     7,   121,     0,   122,   123,
     124,     0,     0,   125,     0,     0,   258,     0,     0,     0,
       0,   127,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   122,   123,   124,     0,     0,   125,     0,     0,   261,
       0,     0,     0,   109,   127,    35,     1,     2,     0,     3,
      38,     0,    39,   110,   111,   112,   113,   114,   115,    19,
     116,    40,     4,   117,     0,     0,   119,    41,    42,     0,
       6,   120,    43,    44,     7,   121,   109,     0,    35,     1,
       2,     0,     3,    38,     0,    39,   110,   111,   112,   113,
     114,   115,    19,   116,    40,     4,   117,     0,     0,   119,
      41,    42,     0,     6,   120,    43,    44,     7,   121,     0,
     122,   123,   124,     0,   109,   125,     0,     0,   270,     0,
       0,     0,     0,   127,   378,   111,   112,   113,   114,   115,
      19,   116,     0,     0,   379,     0,     0,   119,     0,     0,
       0,     0,   120,   122,   123,   124,   121,     0,   125,     0,
      35,   324,     0,     0,     0,    38,   127,    39,     0,   111,
     112,   113,   114,   115,    19,   116,    40,     0,     0,     0,
       0,     0,    41,    42,     0,     0,     0,    43,    44,     0,
     121,   122,   123,   124,     0,     0,   125,     0,     0,     0,
       0,    35,     0,     0,   127,     0,    38,     0,    39,     0,
     111,   112,   113,   114,   115,    19,   116,    40,     0,     0,
       0,     0,     0,    41,    42,   122,   123,   124,    43,    44,
     125,   121,    35,     0,     0,     0,     0,    38,   367,    39,
       0,   111,   112,   113,   114,   115,    19,   116,    40,     0,
       0,     0,     0,     0,    41,    42,     0,     0,     0,    43,
      44,     0,   121,     0,     0,     0,   122,   123,   124,     0,
       0,   125,   111,   112,   113,   114,   115,    19,   116,   428,
       0,     0,     0,     0,     0,     0,     0,   188,   189,     0,
       0,     0,     0,   121,     0,     0,     0,   122,   123,   124,
     190,   191,   192,   111,   112,   113,   114,   115,    19,   116,
       0,     0,     0,     0,     0,     0,     0,     0,   188,   189,
       0,     0,     0,     0,   121,     0,     0,     0,   122,   123,
     124,   190,   191,   192,   111,   112,   113,   114,   115,    19,
     116,   230,     0,     0,     0,     0,     0,     0,     0,   188,
     189,     0,     0,     0,     0,   121,     0,     0,     0,   122,
     123,   124,   190,   191,   192,   111,   112,   113,   114,   115,
      19,   116,   396,     0,     0,     0,     0,     0,     0,     0,
     188,   189,     0,     0,     0,     0,   121,     0,     0,     0,
     122,   123,   124,   190,   191,   192,   111,   112,   113,   114,
     115,    19,   116,   411,     0,     0,     0,     0,     0,     0,
       0,   188,   189,     0,     0,     0,     0,   121,     0,     0,
       0,   122,   123,   124,   190,   191,   192,   111,   112,   113,
     114,   115,    19,   116,   439,     0,     0,     0,     0,     0,
       0,     0,   188,   189,     0,     0,     0,     0,   121,     0,
       0,     0,   122,   123,   124,   190,   191,   192,   111,   112,
     113,   114,   115,    19,   116,   450,     0,     0,     0,     0,
       0,     0,     0,   188,   189,     0,     0,     0,     0,   121,
       0,     0,     0,   122,   123,   124,   190,   191,   192,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   188,   189,   111,   112,   113,   114,
     115,    19,   116,     0,   122,   123,   124,   190,   191,   192,
       0,   193,   282,     0,     0,     0,     0,   121,   111,   112,
     113,   114,   115,    19,   116,     0,   111,   112,   113,   114,
     115,    19,   116,     0,     0,     0,     0,     0,     0,   121,
       0,     0,   188,   189,     0,     0,     0,   121,     0,     0,
       0,     0,   122,   123,   124,   190,   191,   192,     0,   193,
     374,     0,     0,     0,   188,   189,     0,     0,     0,     0,
       0,     0,   188,   189,   122,   123,   124,   190,   191,   192,
       0,   193,   122,   123,   124,   190,   191,   192,   309,   111,
     112,   113,   114,   115,    19,   116,   111,   112,   113,   114,
     115,    19,   116,   111,   112,   113,   114,   115,    19,   116,
     121,     0,     0,     0,     0,     0,     0,   121,     0,     0,
       0,     0,     0,     0,   121,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   188,   189,     0,     0,     0,
       0,     0,   188,   189,     0,   122,   123,   124,   190,   191,
     192,   317,   122,   123,   124,   190,   191,   192,   360,   122,
     123,   124,     0,     0,   125,   407,   111,   112,   113,   114,
     115,    19,   116,   111,   112,   113,   114,   115,    19,   116,
     111,   112,   113,   114,   115,    19,   116,   121,     0,     0,
       0,     0,     0,     0,   121,     0,     0,     0,     0,     0,
       0,   121,     0,     0,   111,   112,   113,   114,   115,    19,
     116,   111,   112,   113,   114,   115,    19,   116,     0,     0,
       0,     0,   122,   123,   124,   121,     0,   125,   421,   122,
     123,   124,   121,     0,   125,   423,   122,   123,   124,     0,
       0,   125,   435,   111,   112,   113,   114,   115,    19,   116,
     111,   112,   113,   114,   115,    19,   116,     0,     0,     0,
     122,   123,   124,     0,   121,   125,   447,   122,   123,   124,
       0,   121,   125,   456,   111,   112,   113,   114,   115,    19,
     116,   111,   112,   113,   114,   115,    19,   116,     0,     0,
       0,     0,     0,     0,     0,   121,     0,     0,     0,   122,
     123,   124,   121,     0,   125,   458,   122,   123,   124,     0,
       0,   125,   466,     0,     0,     0,     0,     0,     0,     0,
     188,   189,     0,     0,     0,     0,     0,     0,     0,     0,
     122,   123,   124,   190,   191,   192,     0,   122,   123,   124,
       0,     0,   125,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,     0,    35,     1,     2,    37,
      25,    38,     0,    39,     0,     0,     0,     0,     0,     0,
      19,     0,    40,     4,     0,     0,     0,     0,    41,    42,
       0,     6,   252,    43,    44,     7,   285,     0,   254
};

static const yytype_int16 yycheck[] =
{
       3,    18,   325,    47,   193,    34,    50,    97,   135,     5,
       5,    28,   122,    30,    31,   325,     5,    83,   252,     0,
      37,    36,    25,     7,     8,    78,    10,    31,    16,    31,
      11,    12,    49,    36,    91,    31,   120,   123,   124,    23,
      57,   125,    23,    92,    61,     0,    20,    31,    63,   176,
      31,    35,    12,    57,    76,    57,   105,    61,    80,    20,
      63,    57,    20,    23,   130,    61,    83,    78,    26,    84,
      74,    77,    89,    61,    91,   132,    57,    83,    74,   313,
      97,    84,   192,    78,   128,   102,    77,   254,    92,    78,
     180,    95,    83,    89,   417,    91,    92,    71,   265,    95,
      84,   105,   188,   189,   190,   191,    77,   417,   192,   105,
      77,    76,    83,   130,    77,   132,    83,    84,   135,    78,
      83,    84,     7,     8,    77,    10,   122,   123,   124,    80,
      83,    76,   259,   177,    84,    80,   132,    82,    23,   135,
      25,   225,   226,   227,    78,   334,    31,    80,    76,    76,
      35,     6,     7,    80,    82,    82,    11,    79,    13,   176,
      89,    83,    91,   180,    77,    20,    77,    22,   252,   253,
      83,   255,    83,    28,    29,   410,   411,   221,    33,    34,
     176,   185,   266,   267,    76,   275,    63,    64,    65,   185,
     425,    81,   188,   189,   190,   191,    82,    37,    84,    84,
      76,   285,   286,   132,   439,    80,   135,    82,     7,     8,
      80,    10,    82,    81,   449,   450,   302,   303,   304,    49,
      84,    51,    77,    76,    23,   460,    83,    84,   272,   313,
     314,   315,    31,    83,    84,    76,    35,   254,    76,   256,
      84,    89,   259,    91,    72,    73,   332,   176,   265,   325,
       6,     7,    72,    73,    50,    11,    82,    13,   275,    72,
      73,    84,   306,   259,    20,    84,    22,    52,    66,    67,
      68,    69,    28,    29,    80,   359,    54,    33,    34,    56,
      57,    61,    62,   367,   132,    58,    59,   135,   298,   299,
      53,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   294,
     295,   296,   297,    55,   398,   292,   293,   401,   402,    84,
     396,    77,    80,   399,   320,   300,   301,   256,   176,   325,
     259,   360,    77,    83,   410,   411,   332,    76,   355,   356,
      26,   417,    77,    77,   428,    77,    84,    50,    81,   425,
      81,    81,    81,   356,     6,     7,    84,   441,    84,    11,
      83,    13,    76,   439,   393,    76,    50,    30,    20,    30,
      22,    84,    76,   449,   450,    77,    28,    29,    84,    77,
     376,    33,    34,    77,   460,    77,   403,    77,   405,    84,
     407,    30,    77,    84,    77,    84,   325,    77,    77,    77,
     403,    11,    57,   420,   421,   102,   423,    61,   256,   426,
     427,   259,    37,   185,    84,   432,    61,   434,   435,    85,
     417,   417,   169,   426,   427,    77,   355,   356,   445,   446,
     447,   287,   376,   291,   288,    -1,    -1,   289,   455,   456,
      -1,   458,    -1,   446,   447,   290,   463,    -1,   465,   466,
      -1,    -1,   455,   456,   471,   458,    -1,    -1,    -1,    -1,
     463,    -1,   465,   466,    -1,    -1,    -1,   396,   471,    89,
     399,    91,    -1,    -1,   403,    -1,   405,   325,   407,   123,
     124,   410,   411,    -1,    -1,    -1,    -1,    -1,   417,    -1,
      -1,   420,   421,    -1,   423,    -1,   425,   426,   427,    -1,
      -1,    -1,    -1,   432,    -1,   434,   435,   355,   356,    -1,
     439,    -1,   132,    -1,    -1,   135,   445,   446,   447,    -1,
     449,   450,    -1,    -1,    -1,    -1,   455,   456,    -1,   458,
      -1,   460,    -1,    -1,   463,    -1,   465,   466,    -1,    -1,
      -1,    -1,   471,    -1,   188,   189,   190,   191,   396,    -1,
      89,   399,    91,    -1,    -1,   403,   176,   405,    -1,   407,
      -1,    -1,   410,   411,    -1,    -1,    -1,    -1,    -1,   417,
      -1,    -1,   420,   421,    -1,   423,    -1,   425,   426,   427,
      -1,    -1,    -1,    -1,   432,    -1,   434,   435,    -1,    -1,
      -1,   439,    -1,   132,   356,    -1,   135,   445,   446,   447,
      -1,   449,   450,    -1,    -1,    -1,     6,   455,   456,    -1,
     458,    11,   460,    13,    -1,   463,    -1,   465,   466,    -1,
      20,    -1,    22,   471,    -1,    -1,    -1,    -1,    28,    29,
      -1,    -1,    -1,    33,    34,    -1,   256,   176,    -1,   259,
      -1,   403,    -1,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,    -1,    -1,   403,   426,   427,    -1,    89,    -1,    91,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    -1,   446,   447,   426,   427,   332,    -1,
      -1,    -1,    -1,   455,   456,    -1,   458,    -1,    -1,    -1,
      -1,   463,    -1,   465,   466,   325,   446,   447,    -1,   471,
     132,    -1,    -1,   135,    -1,   455,   456,   256,   458,    -1,
     259,    -1,    -1,   463,    -1,   465,   466,    -1,    -1,    -1,
      -1,   471,   376,    -1,    -1,   355,   356,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     6,     7,     8,     9,    10,
      11,    -1,    13,    -1,   176,    -1,    -1,    -1,    -1,    20,
      -1,    22,    23,    -1,    -1,    -1,    -1,    28,    29,    -1,
      31,    -1,    33,    34,    35,    -1,   396,    -1,    -1,   399,
      -1,    -1,    -1,   403,    -1,   405,   325,   407,    -1,    -1,
     410,   411,    -1,    -1,    -1,    -1,    89,   417,    91,    -1,
     420,   421,    -1,   423,    -1,   425,   426,   427,    -1,    -1,
      -1,    -1,   432,    -1,   434,   435,   355,   356,    79,   439,
      -1,    -1,    -1,    84,    -1,   445,   446,   447,    -1,   449,
     450,    -1,    -1,    -1,   256,   455,   456,   259,   458,   132,
     460,    -1,   135,   463,    -1,   465,   466,     6,     7,    -1,
      -1,   471,    11,    -1,    13,    -1,    -1,   396,    -1,    -1,
     399,    20,    -1,    22,   403,    -1,   405,    -1,   407,    28,
      29,   410,   411,    -1,    33,    34,    -1,    -1,   417,    -1,
      -1,   420,   421,   176,   423,    -1,   425,   426,   427,    -1,
      -1,    -1,    -1,   432,    -1,   434,   435,    -1,    -1,    -1,
     439,    -1,    -1,   325,    -1,    -1,   445,   446,   447,    -1,
     449,   450,    -1,    89,    -1,    91,   455,   456,    -1,   458,
      20,   460,    -1,    -1,   463,    -1,   465,   466,    -1,    -1,
      -1,    -1,   471,   355,   356,    -1,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   132,    -1,    -1,   135,
      -1,    -1,    -1,   256,    -1,    -1,   259,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   396,    -1,    76,   399,    -1,    -1,
      80,   403,    82,   405,    -1,   407,    -1,    -1,   410,   411,
      -1,    -1,    -1,    -1,    -1,   417,    -1,    -1,   420,   421,
     176,   423,    -1,   425,   426,   427,    -1,    -1,    -1,    -1,
     432,    -1,   434,   435,    -1,    -1,    -1,   439,    -1,    -1,
      -1,    -1,    -1,   445,   446,   447,    -1,   449,   450,    -1,
      -1,    -1,   325,   455,   456,    -1,   458,    -1,   460,    -1,
      -1,   463,    -1,   465,   466,    -1,    -1,    -1,    -1,   471,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   355,   356,    -1,     6,     7,     8,     9,    10,
      11,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,
     256,    22,    23,   259,    -1,    -1,    -1,    28,    29,    -1,
      31,    -1,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   396,    -1,    -1,   399,    -1,    -1,    -1,
     403,    -1,   405,    -1,   407,    -1,    -1,   410,   411,    -1,
      -1,    -1,    -1,    -1,   417,    -1,    -1,   420,   421,    -1,
     423,    -1,   425,   426,   427,    -1,   123,   124,    79,   432,
      -1,   434,   435,    84,    -1,    -1,   439,    -1,    -1,   325,
      -1,    -1,   445,   446,   447,    -1,   449,   450,    -1,    -1,
      -1,    -1,   455,   456,    -1,   458,    -1,   460,    -1,    -1,
     463,    -1,   465,   466,    -1,    -1,   104,    -1,   471,   355,
     356,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   120,    -1,    -1,    -1,    -1,   125,    -1,    -1,
      -1,   188,   189,   190,   191,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    -1,    -1,
     396,    -1,    -1,   399,    -1,    -1,    -1,   403,    -1,   405,
      -1,   407,    -1,   256,   410,   411,    -1,    -1,    -1,    -1,
      -1,   417,    -1,    -1,   420,   421,    -1,   423,    -1,   425,
     426,   427,    -1,    -1,    -1,    -1,   432,    -1,   434,   435,
      -1,    -1,    -1,   439,   192,   193,    -1,    -1,    -1,   445,
     446,   447,    -1,   449,   450,    -1,    -1,    -1,    -1,   455,
     456,    -1,   458,    -1,   460,    -1,    -1,   463,    -1,   465,
     466,    -1,    -1,    -1,    -1,   471,    -1,   225,   226,   227,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,    -1,    -1,
      -1,    -1,    -1,    -1,   252,   253,    -1,   255,    -1,    -1,
      -1,    -1,   355,   356,    -1,    -1,    -1,    -1,   266,   267,
      -1,    -1,    -1,    -1,    -1,   332,    -1,    -1,    -1,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   285,   286,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    24,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    32,    -1,    -1,
     403,    36,   405,    -1,   407,   313,   314,   315,    -1,   376,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   420,   421,    -1,
     423,    -1,    -1,   426,   427,    -1,   334,    -1,    -1,   432,
      -1,   434,   435,    -1,    -1,    -1,    71,    72,    73,    -1,
      -1,    76,   445,   446,   447,    -1,    -1,    -1,    -1,    84,
      -1,   359,   455,   456,    -1,   458,    -1,    -1,    -1,   367,
     463,    -1,   465,   466,    -1,    -1,    -1,    -1,   471,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     398,    -1,    -1,   401,   402,    -1,    -1,    -1,    -1,     4,
      -1,     6,     7,     8,    -1,    10,    11,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
     428,    26,    27,    28,    29,    -1,    31,    32,    33,    34,
      35,    36,     4,   441,     6,     7,     8,    -1,    10,    11,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    27,    28,    29,    -1,    31,
      32,    33,    34,    35,    36,    -1,    71,    72,    73,    -1,
      -1,    76,    -1,    -1,    79,    -1,    -1,    -1,    -1,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      72,    73,    -1,    -1,    76,    -1,    -1,    79,    -1,    -1,
      -1,     4,    84,     6,     7,     8,    -1,    10,    11,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    27,    28,    29,    -1,    31,    32,
      33,    34,    35,    36,     4,    -1,     6,     7,     8,    -1,
      10,    11,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    27,    28,    29,
      -1,    31,    32,    33,    34,    35,    36,    -1,    71,    72,
      73,    -1,    -1,    76,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    72,    73,    -1,    -1,    76,    -1,    -1,    79,
      -1,    -1,    -1,     4,    84,     6,     7,     8,    -1,    10,
      11,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    27,    28,    29,    -1,
      31,    32,    33,    34,    35,    36,     4,    -1,     6,     7,
       8,    -1,    10,    11,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    27,
      28,    29,    -1,    31,    32,    33,    34,    35,    36,    -1,
      71,    72,    73,    -1,     4,    76,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    84,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    32,    71,    72,    73,    36,    -1,    76,    -1,
       6,    79,    -1,    -1,    -1,    11,    84,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    28,    29,    -1,    -1,    -1,    33,    34,    -1,
      36,    71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,     6,    -1,    -1,    84,    -1,    11,    -1,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    28,    29,    71,    72,    73,    33,    34,
      76,    36,     6,    -1,    -1,    -1,    -1,    11,    84,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    28,    29,    -1,    -1,    -1,    33,
      34,    -1,    36,    -1,    -1,    -1,    71,    72,    73,    -1,
      -1,    76,    15,    16,    17,    18,    19,    20,    21,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    76,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
      -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    76,    15,    16,    17,    18,    19,    20,
      21,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    71,
      72,    73,    74,    75,    76,    15,    16,    17,    18,    19,
      20,    21,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      71,    72,    73,    74,    75,    76,    15,    16,    17,    18,
      19,    20,    21,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    -1,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    71,    72,    73,    74,    75,    76,    15,    16,    17,
      18,    19,    20,    21,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    76,    15,    16,
      17,    18,    19,    20,    21,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    76,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    62,    15,    16,    17,    18,
      19,    20,    21,    -1,    71,    72,    73,    74,    75,    76,
      -1,    78,    79,    -1,    -1,    -1,    -1,    36,    15,    16,
      17,    18,    19,    20,    21,    -1,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    61,    62,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    76,    -1,    78,
      79,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,    71,    72,    73,    74,    75,    76,
      -1,    78,    71,    72,    73,    74,    75,    76,    77,    15,
      16,    17,    18,    19,    20,    21,    15,    16,    17,    18,
      19,    20,    21,    15,    16,    17,    18,    19,    20,    21,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,
      -1,    -1,    61,    62,    -1,    71,    72,    73,    74,    75,
      76,    77,    71,    72,    73,    74,    75,    76,    77,    71,
      72,    73,    -1,    -1,    76,    77,    15,    16,    17,    18,
      19,    20,    21,    15,    16,    17,    18,    19,    20,    21,
      15,    16,    17,    18,    19,    20,    21,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    -1,    -1,    15,    16,    17,    18,    19,    20,
      21,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    71,    72,    73,    36,    -1,    76,    77,    71,
      72,    73,    36,    -1,    76,    77,    71,    72,    73,    -1,
      -1,    76,    77,    15,    16,    17,    18,    19,    20,    21,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      71,    72,    73,    -1,    36,    76,    77,    71,    72,    73,
      -1,    36,    76,    77,    15,    16,    17,    18,    19,    20,
      21,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    71,
      72,    73,    36,    -1,    76,    77,    71,    72,    73,    -1,
      -1,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    72,    73,    74,    75,    76,    -1,    71,    72,    73,
      -1,    -1,    76,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,     6,     7,     8,     9,
      10,    11,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    22,    23,    -1,    -1,    -1,    -1,    28,    29,
      -1,    31,    76,    33,    34,    35,    80,    -1,    82
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
      74,    75,    76,    78,    93,   103,   117,   169,   173,   176,
     177,   178,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,    77,   121,    84,    84,    76,    76,    76,   130,    84,
      84,   176,    93,    96,    93,   171,   172,   192,   192,   176,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    76,    80,    82,   180,    50,   114,    79,   133,
       5,    79,   134,    84,    84,    82,    80,   180,    72,    73,
      79,   102,    77,   116,    82,    95,   122,   192,   192,   192,
     192,    96,    79,   104,   117,    80,    49,    51,    52,    53,
      54,    55,    56,    57,    66,    67,    68,    69,    58,    59,
      61,    62,    63,    64,    65,   102,    77,   176,   176,    77,
     174,   176,    84,    76,    80,    80,    77,    77,   174,   176,
      71,   170,   176,   137,    79,    76,    94,   170,   176,   176,
     102,    26,    77,    79,    83,   176,   183,   184,   185,   186,
     187,   188,   188,   189,   189,   189,   189,   190,   190,   191,
     191,   192,   192,   192,   102,    77,    77,    84,    77,    83,
      77,   174,   176,   176,    77,    81,    93,    84,   136,   144,
     154,   156,    81,   192,    79,   117,    50,   137,    14,    24,
      94,   132,   137,   138,   139,   142,   147,   149,   151,   153,
      84,   176,   107,    77,    81,    81,    84,   176,    84,    83,
     181,    76,    76,    50,     5,    30,   107,    77,   155,   156,
      84,    84,   176,   144,   176,   176,   138,    76,   137,   137,
      77,    77,   155,    77,   155,    84,    77,    77,    84,   154,
     137,   137,    77,   137,    77,    77,   155,   138,   138,    84,
     176,    84,   137,   137,   137,    77,    30,    77,   155,    84,
      84,   176,   137,   138,   138,    77,    77,   155,    77,   155,
      84,   138,   138,    77,   138,    77,    77,   155,   138,   138,
     138,    77,   138
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
     145,   146,   147,   148,   149,   150,   151,   152,   152,   152,
     152,   152,   152,   152,   152,   153,   153,   153,   153,   153,
     153,   153,   153,   154,   154,   155,   156,   156,   157,   158,
     159,   159,   160,   160,   161,   161,   161,   161,   161,   161,
     162,   162,   162,   162,   162,   162,   163,   163,   164,   165,
     166,   167,   168,   169,   169,   169,   170,   170,   170,   170,
     171,   172,   172,   173,   173,   174,   174,   175,   175,   176,
     177,   177,   178,   178,   179,   179,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   181,   181,
     182,   182,   183,   183,   184,   184,   185,   185,   186,   186,
     187,   187,   187,   188,   188,   188,   188,   188,   189,   189,
     189,   190,   190,   190,   191,   191,   191,   191,   192,   192,
     192,   192,   192,   193,   194,   195,   195,   195,   195,   196,
     196,   196,   196,   197,   198,   199
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
       5,     7,     7,     5,     5,     1,     1,     7,     8,     8,
       8,     9,     9,     9,    10,     7,     8,     8,     8,     9,
       9,     9,    10,     1,     1,     1,     1,     3,     2,     2,
       3,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     5,     6,     5,     4,
       3,     4,     4,     4,     3,     3,     1,     5,     5,     1,
       1,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     1,     1,
       2,     2,     1,     2,     2,     1,     2,     2,     1,     1,
       1,     1,     1,     2,     2,     4
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
        // printTAC($$);
		root = (yyval.node);
      }
#line 2354 "parser.tab.c"
    break;

  case 3: /* CompilationUnit: PackageDeclaration MULTI_TypeDeclaration  */
#line 84 "parser.y"
                                                 {
            (yyval.node) = (yyvsp[0].node);
        }
#line 2362 "parser.tab.c"
    break;

  case 4: /* CompilationUnit: MULTI_TypeDeclaration  */
#line 87 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2368 "parser.tab.c"
    break;

  case 5: /* CompilationUnit: PackageDeclaration  */
#line 88 "parser.y"
                             { (yyval.node) = (yyvsp[0].node); }
#line 2374 "parser.tab.c"
    break;

  case 6: /* CompilationUnit: %empty  */
#line 89 "parser.y"
           { (yyval.node) = NULL ; }
#line 2380 "parser.tab.c"
    break;

  case 7: /* PackageDeclaration: PACKAGE TypeName ';'  */
#line 92 "parser.y"
                             { (yyval.node) = (yyvsp[-1].node);}
#line 2386 "parser.tab.c"
    break;

  case 8: /* MULTI_TypeDeclaration: TypeDeclaration  */
#line 95 "parser.y"
                        { (yyval.node) = (yyvsp[0].node); }
#line 2392 "parser.tab.c"
    break;

  case 9: /* MULTI_TypeDeclaration: MULTI_TypeDeclaration TypeDeclaration  */
#line 96 "parser.y"
                                               { (yyval.node) = (yyvsp[-1].node); }
#line 2398 "parser.tab.c"
    break;

  case 10: /* TypeDeclaration: ClassDeclaration  */
#line 99 "parser.y"
                       {(yyval.node) = (yyvsp[0].node);}
#line 2404 "parser.tab.c"
    break;

  case 11: /* TypeDeclaration: ';'  */
#line 100 "parser.y"
            { (yyval.node)=NULL; }
#line 2410 "parser.tab.c"
    break;

  case 12: /* TypeName: Identifier  */
#line 104 "parser.y"
                    {	
            (yyval.node)=(yyvsp[0].node);
        }
#line 2418 "parser.tab.c"
    break;

  case 13: /* TypeName: TypeName '.' Identifier  */
#line 107 "parser.y"
                                    { (yyval.node) = (yyvsp[-2].node); }
#line 2424 "parser.tab.c"
    break;

  case 14: /* Identifier: IDENTIFIER  */
#line 110 "parser.y"
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
        n1->type= sym->type;
        n1->value = (yyvsp[0].str);
        n1->label="Identifier";
		(yyval.node) = n1;
    }
#line 2447 "parser.tab.c"
    break;

  case 15: /* Type: PrimitiveType  */
#line 130 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2453 "parser.tab.c"
    break;

  case 16: /* Type: ReferenceType  */
#line 131 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2459 "parser.tab.c"
    break;

  case 17: /* PrimitiveType: NumericType  */
#line 135 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2465 "parser.tab.c"
    break;

  case 18: /* PrimitiveType: BOOLEAN  */
#line 136 "parser.y"
                                {
        genNode * n1 = new genNode();
        (yyval.node) = n1;
        (yyval.node)->place = "boolean";
        (yyval.node)->type = "boolean";
        (yyval.node)->label = "Keyword";
        (yyval.node)->value = (yyvsp[0].str);
    }
#line 2478 "parser.tab.c"
    break;

  case 19: /* NumericType: IntegralType  */
#line 147 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2484 "parser.tab.c"
    break;

  case 20: /* NumericType: FloatingPointType  */
#line 148 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2490 "parser.tab.c"
    break;

  case 21: /* IntegralType: BYTE  */
#line 152 "parser.y"
                                { 
        genNode * n1 = new genNode();
        (yyval.node) = n1;
        (yyval.node)->place = "byte";
        (yyval.node)->type = "byte";
        (yyval.node)->label = "Keyword";
        (yyval.node)->value = (yyvsp[0].str);
    }
#line 2503 "parser.tab.c"
    break;

  case 22: /* IntegralType: SHORT  */
#line 160 "parser.y"
                                {  
        genNode * n1 = new genNode();
        (yyval.node) = n1;
        (yyval.node)->place = "short";
        (yyval.node)->type = "short";
        (yyval.node)->label = "Keyword";
        (yyval.node)->value = (yyvsp[0].str); 
    }
#line 2516 "parser.tab.c"
    break;

  case 23: /* IntegralType: INT  */
#line 168 "parser.y"
                                { 
        genNode * n1 = new genNode();
        (yyval.node) = n1;
        (yyval.node)->place = "int";
        (yyval.node)->type = "int";
        (yyval.node)->label = "Keyword";
        (yyval.node)->value = (yyvsp[0].str); 
    }
#line 2529 "parser.tab.c"
    break;

  case 24: /* IntegralType: LONG  */
#line 176 "parser.y"
                                {
        genNode * n1 = new genNode();
        (yyval.node) = n1;
        (yyval.node)->place = "long";
        (yyval.node)->type = "long";
        (yyval.node)->label = "Keyword";
        (yyval.node)->value = (yyvsp[0].str); 
    }
#line 2542 "parser.tab.c"
    break;

  case 25: /* IntegralType: CHAR  */
#line 184 "parser.y"
                                {
        genNode * n1 = new genNode();
        (yyval.node) = n1;
        (yyval.node)->place = "char";
        (yyval.node)->type = "char";
        (yyval.node)->label = "char";
        (yyval.node)->value = (yyvsp[0].str); 
    }
#line 2555 "parser.tab.c"
    break;

  case 26: /* FloatingPointType: FLOAT  */
#line 195 "parser.y"
                           {  
        genNode * n1 = new genNode();
        (yyval.node) = n1;
        (yyval.node)->place = "float";
        (yyval.node)->type = "float";
        (yyval.node)->label = "Keyword";
        (yyval.node)->value = (yyvsp[0].str); }
#line 2567 "parser.tab.c"
    break;

  case 27: /* FloatingPointType: DOUBLE  */
#line 202 "parser.y"
              { 
        genNode * n1 = new genNode();
        (yyval.node) = n1;
        (yyval.node)->place = "double";
        (yyval.node)->type = "double";
        (yyval.node)->label = "Keyword";
        (yyval.node)->value = (yyvsp[0].str);
    }
#line 2580 "parser.tab.c"
    break;

  case 28: /* ReferenceType: TypeName  */
#line 213 "parser.y"
                { (yyval.node) = (yyvsp[0].node); }
#line 2586 "parser.tab.c"
    break;

  case 29: /* ReferenceType: ArrayType  */
#line 214 "parser.y"
                { (yyval.node) = (yyvsp[0].node); }
#line 2592 "parser.tab.c"
    break;

  case 30: /* ArrayType: PrimitiveType Dims  */
#line 217 "parser.y"
                         { 
        genNode *n1 = new genNode();
		(yyval.node) = n1;
		(yyval.node)->type=(yyvsp[-1].node)->type;
		(yyval.node)->place=(yyvsp[-1].node)->place;
		(yyval.node)->isArray = true;
    }
#line 2604 "parser.tab.c"
    break;

  case 31: /* ArrayType: TypeName Dims  */
#line 224 "parser.y"
                    { 
        genNode *n1 = new genNode();
		(yyval.node) = n1;
		(yyval.node)->type = (yyvsp[-1].node)->type;
		(yyval.node)->place = (yyvsp[-1].node)->place;
		(yyval.node)->isArray = true;
    }
#line 2616 "parser.tab.c"
    break;

  case 32: /* Dims: Dims '[' ']'  */
#line 233 "parser.y"
                  {
         (yyval.node) = (yyvsp[-2].node);
   }
#line 2624 "parser.tab.c"
    break;

  case 33: /* Dims: '[' ']'  */
#line 236 "parser.y"
             {
      
   }
#line 2632 "parser.tab.c"
    break;

  case 34: /* ArrayInitialize: '{' VariableInitializerList ',' '}'  */
#line 242 "parser.y"
                                           { 
        (yyval.node) = (yyvsp[-2].node);
		(yyval.node)->isArray = true;
    }
#line 2641 "parser.tab.c"
    break;

  case 35: /* ArrayInitialize: '{' VariableInitializerList '}'  */
#line 246 "parser.y"
                                       {
        (yyval.node) = (yyvsp[-1].node);
		(yyval.node)->isArray = true; 
    }
#line 2650 "parser.tab.c"
    break;

  case 36: /* ArrayInitialize: '{' '}'  */
#line 250 "parser.y"
              {
        genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->isArray = true;
		(yyval.node)->nodeLen = 0;
    }
#line 2661 "parser.tab.c"
    break;

  case 37: /* VariableInitializerList: VariableInitializer  */
#line 259 "parser.y"
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
#line 2690 "parser.tab.c"
    break;

  case 38: /* VariableInitializerList: VariableInitializerList ',' VariableInitializer  */
#line 283 "parser.y"
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
#line 2720 "parser.tab.c"
    break;

  case 39: /* ClassDeclaration: NormalClassDeclaration  */
#line 311 "parser.y"
                             { (yyval.node) = (yyvsp[0].node); }
#line 2726 "parser.tab.c"
    break;

  case 40: /* NormalClassDeclaration: MULTI_ClassModifier CLASS BlockStart Identifier ClassBody  */
#line 315 "parser.y"
                                                                 {
		ST->curEnv->type = "CLASSTYPE";
        (yyval.node) = (yyvsp[-1].node);
		(yyval.node)->type = "class";
		(yyval.node)->code.pb(genLabelTAC((yyvsp[-1].node)->place));
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		ST->curEnv->name = (yyvsp[-1].node)->place;
		ST->EndScope();
    }
#line 2740 "parser.tab.c"
    break;

  case 41: /* NormalClassDeclaration: CLASS BlockStart Identifier ClassBody  */
#line 324 "parser.y"
                                            {
	    ST->curEnv->type = "CLASSTYPE";
       	(yyval.node) = (yyvsp[-1].node);
		(yyval.node)->type = "class";
		(yyval.node)->code.pb(genLabelTAC((yyvsp[-1].node)->place));
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		ST->curEnv->name = (yyvsp[-1].node)->place;
		ST->EndScope();
    }
#line 2754 "parser.tab.c"
    break;

  case 42: /* ClassBody: '{' MULTI_ClassBodyDeclaration '}'  */
#line 337 "parser.y"
                                          {
            ST->curEnv->type = "CLASSTYPE";
			(yyval.node) = (yyvsp[-1].node); 
    }
#line 2763 "parser.tab.c"
    break;

  case 43: /* ClassBody: '{' '}'  */
#line 341 "parser.y"
                {
        	ST->curEnv->type = "CLASSTYPE";
			genNode* n = new genNode();
			(yyval.node) = n; 
    }
#line 2773 "parser.tab.c"
    break;

  case 44: /* MULTI_ClassBodyDeclaration: ClassBodyDeclaration  */
#line 348 "parser.y"
                            { (yyval.node)=(yyvsp[0].node); }
#line 2779 "parser.tab.c"
    break;

  case 45: /* MULTI_ClassBodyDeclaration: MULTI_ClassBodyDeclaration ClassBodyDeclaration  */
#line 349 "parser.y"
                                                       { 
        (yyval.node) = (yyvsp[-1].node);
        (yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
     }
#line 2788 "parser.tab.c"
    break;

  case 46: /* ClassBodyDeclaration: ClassMemberDeclaration  */
#line 355 "parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 2794 "parser.tab.c"
    break;

  case 47: /* ClassBodyDeclaration: StaticInitializer  */
#line 356 "parser.y"
                                 { (yyval.node) = (yyvsp[0].node); }
#line 2800 "parser.tab.c"
    break;

  case 48: /* ClassBodyDeclaration: ConstructorDeclaration  */
#line 357 "parser.y"
                                 { (yyval.node) = (yyvsp[0].node); }
#line 2806 "parser.tab.c"
    break;

  case 49: /* ClassMemberDeclaration: FieldDeclaration  */
#line 361 "parser.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2812 "parser.tab.c"
    break;

  case 50: /* ClassMemberDeclaration: MethodDeclaration  */
#line 362 "parser.y"
                           { (yyval.node) = (yyvsp[0].node); }
#line 2818 "parser.tab.c"
    break;

  case 51: /* ClassMemberDeclaration: ClassDeclaration  */
#line 363 "parser.y"
                           { (yyval.node) = (yyvsp[0].node); }
#line 2824 "parser.tab.c"
    break;

  case 52: /* ClassMemberDeclaration: ';'  */
#line 364 "parser.y"
           {
        (yyval.node) = NULL;
     }
#line 2832 "parser.tab.c"
    break;

  case 53: /* FieldDeclaration: MULTI_ClassModifier Type VariableDeclaratorList ';'  */
#line 372 "parser.y"
                                                          {
        (yyval.node)=(yyvsp[-1].node);
        (yyval.node)->type=(yyvsp[-2].node)->place;
    }
#line 2841 "parser.tab.c"
    break;

  case 54: /* FieldDeclaration: Type VariableDeclaratorList ';'  */
#line 376 "parser.y"
                                      {
        (yyval.node)=(yyvsp[-1].node);
        (yyval.node)->type=(yyvsp[-2].node)->place;
    }
#line 2850 "parser.tab.c"
    break;

  case 55: /* MULTI_ClassModifier: ClassModifier  */
#line 382 "parser.y"
                    {(yyval.node)=(yyvsp[0].node);}
#line 2856 "parser.tab.c"
    break;

  case 56: /* MULTI_ClassModifier: MULTI_ClassModifier ClassModifier  */
#line 383 "parser.y"
                                         { (yyval.node) = (yyvsp[-1].node); }
#line 2862 "parser.tab.c"
    break;

  case 57: /* ClassModifier: PUBLIC  */
#line 387 "parser.y"
             { 			
            string s1((yyvsp[0].str));
			genNode* n1 = new genNode();
			(yyval.node) = n1;
			(yyval.node)->place = s1;
            (yyval.node)->label = "Keyword";
            (yyval.node)->value = s1;
        }
#line 2875 "parser.tab.c"
    break;

  case 58: /* ClassModifier: PRIVATE  */
#line 395 "parser.y"
              {		
            string s1((yyvsp[0].str));
			genNode* n1 = new genNode();
			(yyval.node) = n1;
			(yyval.node)->place = s1;
            (yyval.node)->label = "Keyword";
            (yyval.node)->value = s1;
        }
#line 2888 "parser.tab.c"
    break;

  case 59: /* ClassModifier: STATIC  */
#line 403 "parser.y"
             {		
            string s1((yyvsp[0].str));
			genNode* n1 = new genNode();
			(yyval.node) = n1;
			(yyval.node)->place = s1;
            (yyval.node)->label = "Keyword";
            (yyval.node)->value = s1;
        }
#line 2901 "parser.tab.c"
    break;

  case 60: /* ClassModifier: FINAL  */
#line 411 "parser.y"
            {		
            string s1((yyvsp[0].str));
			genNode* n1 = new genNode();
			(yyval.node) = n1;
			(yyval.node)->place = s1;
            (yyval.node)->label = "Keyword";
            (yyval.node)->value = s1;
        }
#line 2914 "parser.tab.c"
    break;

  case 61: /* ClassModifier: ABSTRACT  */
#line 419 "parser.y"
               { 		
            string s1((yyvsp[0].str));
			genNode* n1 = new genNode();
			(yyval.node) = n1;
			(yyval.node)->place = s1;
            (yyval.node)->label = "Keyword";
            (yyval.node)->value = s1;
        }
#line 2927 "parser.tab.c"
    break;

  case 62: /* VariableDeclaratorList: VariableDeclaratorList ',' VariableDeclarator  */
#line 430 "parser.y"
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
#line 2947 "parser.tab.c"
    break;

  case 63: /* VariableDeclaratorList: VariableDeclarator  */
#line 445 "parser.y"
                         {
        	(yyval.node) = (yyvsp[0].node); 
			Symbol* sym = ST->GetVar((yyvsp[0].node)->place);
			(yyval.node)->varDecs.pb(sym);
    }
#line 2957 "parser.tab.c"
    break;

  case 64: /* VariableDeclarator: VariableDeclaratorId '=' VariableInitializer  */
#line 453 "parser.y"
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
#line 3008 "parser.tab.c"
    break;

  case 65: /* VariableDeclarator: VariableDeclaratorId  */
#line 499 "parser.y"
                           {(yyval.node)=(yyvsp[0].node);}
#line 3014 "parser.tab.c"
    break;

  case 66: /* VariableDeclaratorId: Identifier Dims  */
#line 502 "parser.y"
                      {
        (yyval.node) = (yyvsp[-1].node); 
    }
#line 3022 "parser.tab.c"
    break;

  case 67: /* VariableDeclaratorId: Identifier  */
#line 505 "parser.y"
                  {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3030 "parser.tab.c"
    break;

  case 68: /* VariableInitializer: Expression  */
#line 511 "parser.y"
                { (yyval.node)=(yyvsp[0].node);}
#line 3036 "parser.tab.c"
    break;

  case 69: /* VariableInitializer: ArrayInitialize  */
#line 512 "parser.y"
                     { (yyval.node)=(yyvsp[0].node);}
#line 3042 "parser.tab.c"
    break;

  case 70: /* MethodDeclaration: MULTI_ClassModifier MethodHeader MethodBody  */
#line 517 "parser.y"
                                                      {
        (yyval.node) = (yyvsp[-1].node);
		vector <TAC*> tmp;
		tmp.pb(genLabelTAC(ST->curEnv->name));
		(yyval.node)->code.insert((yyval.node)->code.begin(), tmp.begin(), tmp.end());
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());	
        ST->curEnv->type = (yyvsp[-1].node)->place;	
		ST->EndScope();
    }
#line 3056 "parser.tab.c"
    break;

  case 71: /* MethodDeclaration: MethodHeader MethodBody  */
#line 526 "parser.y"
                                                    {
        (yyval.node) = (yyvsp[-1].node);
		vector <TAC*> tmp;
		tmp.pb(genLabelTAC(ST->curEnv->name));
		(yyval.node)->code.insert((yyval.node)->code.begin(), tmp.begin(), tmp.end());
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());	
         ST->curEnv->type = (yyvsp[-1].node)->place;	
		ST->EndScope();
    }
#line 3070 "parser.tab.c"
    break;

  case 72: /* MethodHeader: Type MemberName '(' FormalParameterList ')'  */
#line 538 "parser.y"
                                                      { 
        (yyval.node) = (yyvsp[-3].node);
		ST->curEnv->returnType = (yyvsp[-4].node)->place;
		ST->curEnv->name = (yyvsp[-3].node)->place;
        ST->curEnv->type = (yyvsp[-4].node)->place;
        (yyval.node)->code = (yyvsp[-1].node)->code;
    }
#line 3082 "parser.tab.c"
    break;

  case 73: /* MethodHeader: Type MemberName '(' ')'  */
#line 545 "parser.y"
                                     { 
        (yyval.node) = (yyvsp[-2].node);
		ST->curEnv->returnType = (yyvsp[-3].node)->place;
		ST->curEnv->name = (yyvsp[-2].node)->place;
    }
#line 3092 "parser.tab.c"
    break;

  case 74: /* MethodHeader: Type MemberName '(' FormalParameterList ')' Dims  */
#line 550 "parser.y"
                                                              { 
        (yyval.node) = (yyvsp[-4].node);
		ST->curEnv->returnType = (yyvsp[-5].node)->place;
		ST->curEnv->name = (yyvsp[-4].node)->place;
		(yyval.node)->code = (yyvsp[-2].node)->code;
    }
#line 3103 "parser.tab.c"
    break;

  case 75: /* MethodHeader: Type MemberName '(' ')' Dims  */
#line 556 "parser.y"
                                           { 
        (yyval.node) = (yyvsp[-3].node);
		ST->curEnv->returnType = (yyvsp[-4].node)->place;
		ST->curEnv->name = (yyvsp[-3].node)->place;
    }
#line 3113 "parser.tab.c"
    break;

  case 76: /* MethodHeader: VOID MemberName '(' FormalParameterList ')'  */
#line 561 "parser.y"
                                                           { 
        (yyval.node) = (yyvsp[-3].node);
		ST->curEnv->name = (yyvsp[-3].node)->place;
		(yyval.node)->code = (yyvsp[-1].node)->code;
    }
#line 3123 "parser.tab.c"
    break;

  case 77: /* MethodHeader: VOID MemberName '(' ')'  */
#line 566 "parser.y"
                                      { 
        (yyval.node) = (yyvsp[-2].node);
		ST->curEnv->name = (yyvsp[-2].node)->place;
    }
#line 3132 "parser.tab.c"
    break;

  case 78: /* MethodHeader: VOID MemberName '(' FormalParameterList ')' Dims  */
#line 570 "parser.y"
                                                              { 
        (yyval.node) = (yyvsp[-4].node);
		ST->curEnv->name = (yyvsp[-4].node)->place;
		(yyval.node)->code = (yyvsp[-2].node)->code;
    }
#line 3142 "parser.tab.c"
    break;

  case 79: /* MethodHeader: VOID MemberName '(' ')' Dims  */
#line 575 "parser.y"
                                           { 
        (yyval.node) = (yyvsp[-3].node);
		ST->curEnv->name = (yyvsp[-3].node)->place;
    }
#line 3151 "parser.tab.c"
    break;

  case 80: /* MemberName: Identifier  */
#line 582 "parser.y"
                 {
         ST->BeginScope();
         ST->curEnv->type = "METHODTYPE";
         (yyval.node) = (yyvsp[0].node);
    }
#line 3161 "parser.tab.c"
    break;

  case 81: /* FormalParameterList: ReceiverParameter  */
#line 590 "parser.y"
                                                     { (yyval.node)=(yyvsp[0].node); }
#line 3167 "parser.tab.c"
    break;

  case 82: /* FormalParameterList: FormalParameterList ',' FormalParameter  */
#line 591 "parser.y"
                                                    {
        (yyval.node) = (yyvsp[0].node);
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-2].node)->code.begin(), (yyvsp[-2].node)->code.end());
    }
#line 3176 "parser.tab.c"
    break;

  case 83: /* FormalParameterList: FormalParameter  */
#line 595 "parser.y"
                                              { (yyval.node) = (yyvsp[0].node); }
#line 3182 "parser.tab.c"
    break;

  case 84: /* FormalParameter: FINAL Type VariableDeclaratorId  */
#line 599 "parser.y"
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
#line 3202 "parser.tab.c"
    break;

  case 85: /* FormalParameter: Type VariableDeclaratorId  */
#line 614 "parser.y"
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
#line 3221 "parser.tab.c"
    break;

  case 86: /* ReceiverParameter: Type THIS  */
#line 632 "parser.y"
                                                    {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 3229 "parser.tab.c"
    break;

  case 87: /* ReceiverParameter: Type Identifier '.' THIS  */
#line 635 "parser.y"
                                                    {
          (yyval.node) = (yyvsp[-2].node);
    }
#line 3237 "parser.tab.c"
    break;

  case 88: /* MethodBody: Block  */
#line 641 "parser.y"
                                                    {(yyval.node) = (yyvsp[0].node); }
#line 3243 "parser.tab.c"
    break;

  case 89: /* MethodBody: ';'  */
#line 642 "parser.y"
                                                    {(yyval.node) = NULL; }
#line 3249 "parser.tab.c"
    break;

  case 90: /* StaticInitializer: STATIC Block  */
#line 645 "parser.y"
                                                    {
        (yyval.node) = (yyvsp[0].node);
     }
#line 3257 "parser.tab.c"
    break;

  case 91: /* ConstructorDeclaration: MULTI_ClassModifier ConstructorDeclarator ConstructorBody  */
#line 651 "parser.y"
                                                                    { 
        (yyval.node) = (yyvsp[-1].node);
		vector <TAC*> tmp;
		tmp.pb(genLabelTAC(ST->curEnv->name));
		(yyval.node)->code.insert((yyval.node)->code.begin(), tmp.begin(), tmp.end());
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());	
        ST->curEnv->type = (yyvsp[-1].node)->place;	
		ST->EndScope(); 
    }
#line 3271 "parser.tab.c"
    break;

  case 92: /* ConstructorDeclaration: ConstructorDeclarator ConstructorBody  */
#line 660 "parser.y"
                                             { 
        (yyval.node) = (yyvsp[-1].node);
		vector <TAC*> tmp;
		tmp.pb(genLabelTAC(ST->curEnv->name));
		(yyval.node)->code.insert((yyval.node)->code.begin(), tmp.begin(), tmp.end());
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());	
        ST->curEnv->type = (yyvsp[-1].node)->place;	
		ST->EndScope();
    }
#line 3285 "parser.tab.c"
    break;

  case 93: /* ConstructorDeclarator: Identifier '(' FormalParameterList ')'  */
#line 672 "parser.y"
                                             { 
        ST->BeginScope();
        ST->curEnv->type = "CONTRUCTORTYPE";
        (yyval.node) = (yyvsp[-3].node);
		ST->curEnv->name = (yyvsp[-3].node)->place;
        (yyval.node)->code = (yyvsp[-1].node)->code;
    }
#line 3297 "parser.tab.c"
    break;

  case 94: /* ConstructorDeclarator: Identifier '(' ')'  */
#line 679 "parser.y"
                           { 
        ST->BeginScope();
        ST->curEnv->type = "CONTRUCTORTYPE";
        (yyval.node) = (yyvsp[-2].node);
		ST->curEnv->name = (yyvsp[-2].node)->place;
    }
#line 3308 "parser.tab.c"
    break;

  case 95: /* ConstructorBody: '{' ExplicitConstructorInvocation BlockStatements '}'  */
#line 688 "parser.y"
                                                                           {  }
#line 3314 "parser.tab.c"
    break;

  case 96: /* ConstructorBody: '{' BlockStatements '}'  */
#line 689 "parser.y"
                                                                           {  }
#line 3320 "parser.tab.c"
    break;

  case 97: /* ConstructorBody: '{' ExplicitConstructorInvocation '}'  */
#line 690 "parser.y"
                                                                           {  }
#line 3326 "parser.tab.c"
    break;

  case 98: /* ConstructorBody: '{' '}'  */
#line 691 "parser.y"
                                                                           {  }
#line 3332 "parser.tab.c"
    break;

  case 99: /* ExplicitConstructorInvocation: THIS SINGLE_ArgumentList  */
#line 695 "parser.y"
                                                                           {  }
#line 3338 "parser.tab.c"
    break;

  case 100: /* SINGLE_ArgumentList: '(' ')' ';'  */
#line 699 "parser.y"
                                                       {   }
#line 3344 "parser.tab.c"
    break;

  case 101: /* SINGLE_ArgumentList: '(' ArgumentList ')' ';'  */
#line 700 "parser.y"
                                                       {   }
#line 3350 "parser.tab.c"
    break;

  case 102: /* Block: BlockStart '{' BlockStatements '}'  */
#line 704 "parser.y"
                                                        {
		(yyval.node) = (yyvsp[-1].node); ST->EndScope(); 
	}
#line 3358 "parser.tab.c"
    break;

  case 103: /* Block: BlockStart '{' '}'  */
#line 707 "parser.y"
                                                        {
		 (yyval.node) = NULL; ST->EndScope();
	}
#line 3366 "parser.tab.c"
    break;

  case 104: /* BlockStart: %empty  */
#line 713 "parser.y"
      {
		(yyval.node) = NULL;
		ST->BeginScope();
	}
#line 3375 "parser.tab.c"
    break;

  case 105: /* BlockStatements: BlockStatement  */
#line 720 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3381 "parser.tab.c"
    break;

  case 106: /* BlockStatements: BlockStatements BlockStatement  */
#line 721 "parser.y"
                                             { 
        (yyval.node) = (yyvsp[-1].node);
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
    }
#line 3390 "parser.tab.c"
    break;

  case 107: /* BlockStatement: LocalVariableDeclarationStatement  */
#line 728 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3396 "parser.tab.c"
    break;

  case 108: /* BlockStatement: ClassDeclaration  */
#line 729 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3402 "parser.tab.c"
    break;

  case 109: /* BlockStatement: Statement  */
#line 730 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3408 "parser.tab.c"
    break;

  case 110: /* LocalVariableDeclarationStatement: LocalVariableDeclaration ';'  */
#line 734 "parser.y"
                                             { 
        (yyval.node) = (yyvsp[-1].node);
    }
#line 3416 "parser.tab.c"
    break;

  case 111: /* LocalVariableDeclaration: Type VariableDeclaratorList  */
#line 740 "parser.y"
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
#line 3434 "parser.tab.c"
    break;

  case 112: /* Statement: StatementWithoutTrailingSubstatement  */
#line 757 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3440 "parser.tab.c"
    break;

  case 113: /* Statement: LabeledStatement  */
#line 758 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3446 "parser.tab.c"
    break;

  case 114: /* Statement: IfThenStatement  */
#line 759 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3452 "parser.tab.c"
    break;

  case 115: /* Statement: IfThenElseStatement  */
#line 760 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3458 "parser.tab.c"
    break;

  case 116: /* Statement: WhileStatement  */
#line 761 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3464 "parser.tab.c"
    break;

  case 117: /* Statement: ForStatement  */
#line 762 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3470 "parser.tab.c"
    break;

  case 118: /* StatementNoShortIf: StatementWithoutTrailingSubstatement  */
#line 766 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3476 "parser.tab.c"
    break;

  case 119: /* StatementNoShortIf: LabeledStatementNoShortIf  */
#line 767 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3482 "parser.tab.c"
    break;

  case 120: /* StatementNoShortIf: IfThenElseStatementNoShortIf  */
#line 768 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3488 "parser.tab.c"
    break;

  case 121: /* StatementNoShortIf: WhileStatementNoShortIf  */
#line 769 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3494 "parser.tab.c"
    break;

  case 122: /* StatementNoShortIf: ForStatementNoShortIf  */
#line 770 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3500 "parser.tab.c"
    break;

  case 123: /* StatementWithoutTrailingSubstatement: Block  */
#line 774 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3506 "parser.tab.c"
    break;

  case 124: /* StatementWithoutTrailingSubstatement: EmptyStatement  */
#line 775 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3512 "parser.tab.c"
    break;

  case 125: /* StatementWithoutTrailingSubstatement: ExpressionStatement  */
#line 776 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3518 "parser.tab.c"
    break;

  case 126: /* StatementWithoutTrailingSubstatement: BreakStatement  */
#line 777 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3524 "parser.tab.c"
    break;

  case 127: /* StatementWithoutTrailingSubstatement: ContinueStatement  */
#line 778 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3530 "parser.tab.c"
    break;

  case 128: /* StatementWithoutTrailingSubstatement: ReturnStatement  */
#line 779 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3536 "parser.tab.c"
    break;

  case 129: /* EmptyStatement: ';'  */
#line 783 "parser.y"
                                             {  }
#line 3542 "parser.tab.c"
    break;

  case 130: /* LabeledStatement: Identifier ':' Statement  */
#line 787 "parser.y"
                                             { 
        (yyval.node) = (yyvsp[-2].node);
        (yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
    }
#line 3551 "parser.tab.c"
    break;

  case 131: /* LabeledStatementNoShortIf: Identifier ':' StatementNoShortIf  */
#line 794 "parser.y"
                                              { 
        (yyval.node) = (yyvsp[-2].node);
        (yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
    }
#line 3560 "parser.tab.c"
    break;

  case 132: /* ExpressionStatement: StatementExpression ';'  */
#line 801 "parser.y"
                                              { (yyval.node) = (yyvsp[-1].node); }
#line 3566 "parser.tab.c"
    break;

  case 133: /* StatementExpression: Assignment  */
#line 805 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3572 "parser.tab.c"
    break;

  case 134: /* StatementExpression: PreIncrementExpression  */
#line 806 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3578 "parser.tab.c"
    break;

  case 135: /* StatementExpression: PreDecrementExpression  */
#line 807 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3584 "parser.tab.c"
    break;

  case 136: /* StatementExpression: PostIncrementExpression  */
#line 808 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3590 "parser.tab.c"
    break;

  case 137: /* StatementExpression: PostDecrementExpression  */
#line 809 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3596 "parser.tab.c"
    break;

  case 138: /* StatementExpression: MethodInvocation  */
#line 810 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3602 "parser.tab.c"
    break;

  case 139: /* StatementExpression: ClassInstanceCreationExpression  */
#line 811 "parser.y"
                                             { (yyval.node) = (yyvsp[0].node); }
#line 3608 "parser.tab.c"
    break;

  case 140: /* IfThenStatement: IF '(' Expression ')' Statement  */
#line 815 "parser.y"
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
#line 3635 "parser.tab.c"
    break;

  case 141: /* IfThenElseStatement: IF '(' Expression ')' StatementNoShortIf ELSE Statement  */
#line 840 "parser.y"
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
#line 3667 "parser.tab.c"
    break;

  case 142: /* IfThenElseStatementNoShortIf: IF '(' Expression ')' StatementNoShortIf ELSE StatementNoShortIf  */
#line 870 "parser.y"
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
#line 3699 "parser.tab.c"
    break;

  case 143: /* WhileStatement: WHILE '(' Expression ')' Statement  */
#line 900 "parser.y"
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
#line 3741 "parser.tab.c"
    break;

  case 144: /* WhileStatementNoShortIf: WHILE '(' Expression ')' StatementNoShortIf  */
#line 940 "parser.y"
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
#line 3783 "parser.tab.c"
    break;

  case 145: /* ForStatement: BasicForStatement  */
#line 980 "parser.y"
                                                 {(yyval.node)=(yyvsp[0].node);}
#line 3789 "parser.tab.c"
    break;

  case 146: /* ForStatementNoShortIf: BasicForStatementNoShortIf  */
#line 984 "parser.y"
                                                 {(yyval.node)=(yyvsp[0].node);}
#line 3795 "parser.tab.c"
    break;

  case 147: /* BasicForStatement: BlockStart FOR '(' ';' ';' ')' Statement  */
#line 988 "parser.y"
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
#line 3827 "parser.tab.c"
    break;

  case 148: /* BasicForStatement: BlockStart FOR '(' ForInit ';' ';' ')' Statement  */
#line 1015 "parser.y"
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
#line 3858 "parser.tab.c"
    break;

  case 149: /* BasicForStatement: BlockStart FOR '(' ';' Expression ';' ')' Statement  */
#line 1041 "parser.y"
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
#line 3904 "parser.tab.c"
    break;

  case 150: /* BasicForStatement: BlockStart FOR '(' ';' ';' ForUpdate ')' Statement  */
#line 1082 "parser.y"
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
#line 3939 "parser.tab.c"
    break;

  case 151: /* BasicForStatement: BlockStart FOR '(' ForInit ';' Expression ';' ')' Statement  */
#line 1112 "parser.y"
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
#line 3984 "parser.tab.c"
    break;

  case 152: /* BasicForStatement: BlockStart FOR '(' ForInit ';' ';' ForUpdate ')' Statement  */
#line 1152 "parser.y"
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
#line 4019 "parser.tab.c"
    break;

  case 153: /* BasicForStatement: BlockStart FOR '(' ';' Expression ';' ForUpdate ')' Statement  */
#line 1182 "parser.y"
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
#line 4071 "parser.tab.c"
    break;

  case 154: /* BasicForStatement: BlockStart FOR '(' ForInit ';' Expression ';' ForUpdate ')' Statement  */
#line 1229 "parser.y"
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
#line 4120 "parser.tab.c"
    break;

  case 155: /* BasicForStatementNoShortIf: BlockStart FOR '(' ';' ';' ')' StatementNoShortIf  */
#line 1276 "parser.y"
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
#line 4152 "parser.tab.c"
    break;

  case 156: /* BasicForStatementNoShortIf: BlockStart FOR '(' ForInit ';' ';' ')' StatementNoShortIf  */
#line 1303 "parser.y"
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
#line 4183 "parser.tab.c"
    break;

  case 157: /* BasicForStatementNoShortIf: BlockStart FOR '(' ';' Expression ';' ')' StatementNoShortIf  */
#line 1329 "parser.y"
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
#line 4229 "parser.tab.c"
    break;

  case 158: /* BasicForStatementNoShortIf: BlockStart FOR '(' ';' ';' ForUpdate ')' StatementNoShortIf  */
#line 1370 "parser.y"
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
#line 4264 "parser.tab.c"
    break;

  case 159: /* BasicForStatementNoShortIf: BlockStart FOR '(' ForInit ';' Expression ';' ')' StatementNoShortIf  */
#line 1400 "parser.y"
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
#line 4309 "parser.tab.c"
    break;

  case 160: /* BasicForStatementNoShortIf: BlockStart FOR '(' ForInit ';' ';' ForUpdate ')' StatementNoShortIf  */
#line 1440 "parser.y"
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
#line 4344 "parser.tab.c"
    break;

  case 161: /* BasicForStatementNoShortIf: BlockStart FOR '(' ';' Expression ';' ForUpdate ')' StatementNoShortIf  */
#line 1470 "parser.y"
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
#line 4396 "parser.tab.c"
    break;

  case 162: /* BasicForStatementNoShortIf: BlockStart FOR '(' ForInit ';' Expression ';' ForUpdate ')' StatementNoShortIf  */
#line 1517 "parser.y"
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
#line 4445 "parser.tab.c"
    break;

  case 163: /* ForInit: StatementExpressionList  */
#line 1565 "parser.y"
                                       {(yyval.node)=(yyvsp[0].node);}
#line 4451 "parser.tab.c"
    break;

  case 164: /* ForInit: LocalVariableDeclaration  */
#line 1566 "parser.y"
                                       {(yyval.node)=(yyvsp[0].node);}
#line 4457 "parser.tab.c"
    break;

  case 165: /* ForUpdate: StatementExpressionList  */
#line 1570 "parser.y"
                                       {(yyval.node)=(yyvsp[0].node);}
#line 4463 "parser.tab.c"
    break;

  case 166: /* StatementExpressionList: StatementExpression  */
#line 1574 "parser.y"
                                                        { (yyval.node) = (yyvsp[0].node); }
#line 4469 "parser.tab.c"
    break;

  case 167: /* StatementExpressionList: StatementExpressionList ',' StatementExpression  */
#line 1575 "parser.y"
                                                        {
        (yyval.node) = (yyvsp[-2].node);
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
    }
#line 4478 "parser.tab.c"
    break;

  case 168: /* BreakStatement: BREAK ';'  */
#line 1582 "parser.y"
                  { 
        genNode* n = new genNode();
		(yyval.node) = n;
        TAC* tac = new TAC();	tac -> op = "goto";	tac -> isBreak = true;
        n->code.pb(tac);
    }
#line 4489 "parser.tab.c"
    break;

  case 169: /* ContinueStatement: CONTINUE ';'  */
#line 1591 "parser.y"
                                  {
        genNode* n = new genNode();
		(yyval.node) = n;
        TAC* tac = new TAC();	tac -> op = "goto";	tac -> isContinue = true;
        n->code.pb(tac);
    }
#line 4500 "parser.tab.c"
    break;

  case 170: /* ReturnStatement: RETURN Expression ';'  */
#line 1600 "parser.y"
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
#line 4523 "parser.tab.c"
    break;

  case 171: /* ReturnStatement: RETURN ';'  */
#line 1618 "parser.y"
                                  {
        genNode* n = new genNode();
		(yyval.node) = n;
		TAC* tac = new TAC();
		tac->op = "ret";
		(yyval.node)->code.pb(tac);
    }
#line 4535 "parser.tab.c"
    break;

  case 172: /* Primary: PrimaryNoNewArray  */
#line 1628 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 4541 "parser.tab.c"
    break;

  case 173: /* Primary: ArrayCreationExpression  */
#line 1629 "parser.y"
                                                                                    {(yyval.node)=(yyvsp[0].node);}
#line 4547 "parser.tab.c"
    break;

  case 174: /* PrimaryNoNewArray: Literal  */
#line 1633 "parser.y"
                                                                                   { (yyval.node)=(yyvsp[0].node); }
#line 4553 "parser.tab.c"
    break;

  case 175: /* PrimaryNoNewArray: '(' Expression ')'  */
#line 1634 "parser.y"
                                                                                    { (yyval.node) = (yyvsp[-1].node); }
#line 4559 "parser.tab.c"
    break;

  case 176: /* PrimaryNoNewArray: ClassInstanceCreationExpression  */
#line 1635 "parser.y"
                                                                                    { (yyval.node)=(yyvsp[0].node); }
#line 4565 "parser.tab.c"
    break;

  case 177: /* PrimaryNoNewArray: FieldAccess  */
#line 1636 "parser.y"
                                                                                    { (yyval.node)=(yyvsp[0].node); }
#line 4571 "parser.tab.c"
    break;

  case 178: /* PrimaryNoNewArray: ArrayAccess  */
#line 1637 "parser.y"
                                                                                    { (yyval.node)=(yyvsp[0].node); }
#line 4577 "parser.tab.c"
    break;

  case 179: /* PrimaryNoNewArray: MethodInvocation  */
#line 1638 "parser.y"
                                                                                    { (yyval.node)=(yyvsp[0].node); }
#line 4583 "parser.tab.c"
    break;

  case 180: /* Literal: BooleanLiteral  */
#line 1642 "parser.y"
                      {(yyval.node)=(yyvsp[0].node);}
#line 4589 "parser.tab.c"
    break;

  case 181: /* Literal: IntegerLiteral  */
#line 1643 "parser.y"
                      {(yyval.node)=(yyvsp[0].node);}
#line 4595 "parser.tab.c"
    break;

  case 182: /* Literal: CharacterLiteral  */
#line 1644 "parser.y"
                       {(yyval.node)=(yyvsp[0].node);}
#line 4601 "parser.tab.c"
    break;

  case 183: /* Literal: StringLiteral  */
#line 1645 "parser.y"
                    {(yyval.node)=(yyvsp[0].node);}
#line 4607 "parser.tab.c"
    break;

  case 184: /* Literal: NullLiteral  */
#line 1646 "parser.y"
                   {(yyval.node)=(yyvsp[0].node);}
#line 4613 "parser.tab.c"
    break;

  case 185: /* Literal: FloatLiteral  */
#line 1647 "parser.y"
                       { (yyval.node)=(yyvsp[0].node); }
#line 4619 "parser.tab.c"
    break;

  case 186: /* BooleanLiteral: TRUELITERAL  */
#line 1651 "parser.y"
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
#line 4634 "parser.tab.c"
    break;

  case 187: /* BooleanLiteral: FALSELITERAL  */
#line 1661 "parser.y"
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
#line 4649 "parser.tab.c"
    break;

  case 188: /* IntegerLiteral: INTEGERLITERAL  */
#line 1674 "parser.y"
                        {
			genNode* n1 = new genNode();
			(yyval.node) = n1;
			(yyval.node)->type = "int";
			(yyval.node)->place = to_string((yyvsp[0].ival));
			(yyval.node)->isLit = true;
            (yyval.node)->label = "IntegerLiteral";
            (yyval.node)->value = to_string((yyvsp[0].ival));
		}
#line 4663 "parser.tab.c"
    break;

  case 189: /* CharacterLiteral: CHARACTERLITERAL  */
#line 1686 "parser.y"
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
#line 4678 "parser.tab.c"
    break;

  case 190: /* StringLiteral: STRINGLITERAL  */
#line 1699 "parser.y"
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
#line 4693 "parser.tab.c"
    break;

  case 191: /* NullLiteral: NULLLITERAL  */
#line 1712 "parser.y"
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
#line 4708 "parser.tab.c"
    break;

  case 192: /* FloatLiteral: FLOATINGPOINTLITERAL  */
#line 1725 "parser.y"
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
#line 4723 "parser.tab.c"
    break;

  case 193: /* ClassInstanceCreationExpression: UnqualifiedClassInstanceCreationExpression  */
#line 1738 "parser.y"
                                                                                         { (yyval.node)=(yyvsp[0].node); }
#line 4729 "parser.tab.c"
    break;

  case 194: /* ClassInstanceCreationExpression: TypeName '.' UnqualifiedClassInstanceCreationExpression  */
#line 1739 "parser.y"
                                                                                       { (yyval.node) = (yyvsp[-2].node); }
#line 4735 "parser.tab.c"
    break;

  case 195: /* ClassInstanceCreationExpression: Primary '.' UnqualifiedClassInstanceCreationExpression  */
#line 1740 "parser.y"
                                                                                         { (yyval.node) = (yyvsp[-2].node); }
#line 4741 "parser.tab.c"
    break;

  case 196: /* UnqualifiedClassInstanceCreationExpression: NEW TypeName '(' ArgumentList ')'  */
#line 1744 "parser.y"
                                        { (yyval.node) = (yyvsp[-1].node); }
#line 4747 "parser.tab.c"
    break;

  case 197: /* UnqualifiedClassInstanceCreationExpression: NEW TypeName '(' ArgumentList ')' ClassBody  */
#line 1745 "parser.y"
                                                                                        {
		(yyval.node) = (yyvsp[-2].node);
        (yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());

	}
#line 4757 "parser.tab.c"
    break;

  case 198: /* UnqualifiedClassInstanceCreationExpression: NEW TypeName '(' ')' ClassBody  */
#line 1750 "parser.y"
                                      {   
		(yyval.node) = (yyvsp[0].node);
	}
#line 4765 "parser.tab.c"
    break;

  case 199: /* UnqualifiedClassInstanceCreationExpression: NEW TypeName '(' ')'  */
#line 1753 "parser.y"
                            {

	}
#line 4773 "parser.tab.c"
    break;

  case 200: /* FieldAccess: Primary '.' Identifier  */
#line 1759 "parser.y"
                              {
		(yyval.node) = (yyvsp[-2].node);
	}
#line 4781 "parser.tab.c"
    break;

  case 201: /* ArrayAccess: TypeName '[' Expression ']'  */
#line 1765 "parser.y"
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
#line 4822 "parser.tab.c"
    break;

  case 202: /* ArrayAccess: PrimaryNoNewArray '[' Expression ']'  */
#line 1801 "parser.y"
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
#line 4867 "parser.tab.c"
    break;

  case 203: /* MethodInvocation: TypeName '(' ArgumentList ')'  */
#line 1844 "parser.y"
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
#line 4898 "parser.tab.c"
    break;

  case 204: /* MethodInvocation: TypeName '(' ')'  */
#line 1870 "parser.y"
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
#line 4923 "parser.tab.c"
    break;

  case 205: /* ArgumentList: ArgumentList ',' Expression  */
#line 1893 "parser.y"
                                                                                       {
       (yyval.node) = (yyvsp[-2].node);
	   (yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
	}
#line 4932 "parser.tab.c"
    break;

  case 206: /* ArgumentList: Expression  */
#line 1897 "parser.y"
                                                                                       {(yyval.node) = (yyvsp[0].node); }
#line 4938 "parser.tab.c"
    break;

  case 207: /* ArrayCreationExpression: NEW PrimitiveType '[' Expression ']'  */
#line 1901 "parser.y"
                                           {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->isArray = true;
		(yyval.node)->type = (yyvsp[-3].node)->type;
		(yyval.node)->nodeLen = stoi((yyvsp[-1].node)->place);
   }
#line 4950 "parser.tab.c"
    break;

  case 208: /* ArrayCreationExpression: NEW TypeName '[' Expression ']'  */
#line 1908 "parser.y"
                                     {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->isArray = true;
		(yyval.node)->type = (yyvsp[-3].node)->type;
		(yyval.node)->nodeLen = stoi((yyvsp[-1].node)->place);
   }
#line 4962 "parser.tab.c"
    break;

  case 209: /* Expression: AssignmentExpression  */
#line 1918 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4968 "parser.tab.c"
    break;

  case 210: /* AssignmentExpression: ConditionalExpression  */
#line 1922 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4974 "parser.tab.c"
    break;

  case 211: /* AssignmentExpression: Assignment  */
#line 1923 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 4980 "parser.tab.c"
    break;

  case 212: /* Assignment: LeftHandSide AssignmentOperator Expression  */
#line 1927 "parser.y"
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
#line 5027 "parser.tab.c"
    break;

  case 213: /* Assignment: TypeName AssignmentOperator Expression  */
#line 1969 "parser.y"
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
#line 5074 "parser.tab.c"
    break;

  case 214: /* LeftHandSide: FieldAccess  */
#line 2014 "parser.y"
                                                                                        { (yyval.node)=(yyvsp[0].node); }
#line 5080 "parser.tab.c"
    break;

  case 215: /* LeftHandSide: ArrayAccess  */
#line 2015 "parser.y"
                                                                                        { (yyval.node)=(yyvsp[0].node); }
#line 5086 "parser.tab.c"
    break;

  case 216: /* AssignmentOperator: '='  */
#line 2019 "parser.y"
                                                                                        { (yyval.str) = (yyvsp[0].str);}
#line 5092 "parser.tab.c"
    break;

  case 217: /* AssignmentOperator: MUL_ASSIGN  */
#line 2020 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 5098 "parser.tab.c"
    break;

  case 218: /* AssignmentOperator: DIV_ASSIGN  */
#line 2021 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 5104 "parser.tab.c"
    break;

  case 219: /* AssignmentOperator: MOD_ASSIGN  */
#line 2022 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 5110 "parser.tab.c"
    break;

  case 220: /* AssignmentOperator: ADD_ASSIGN  */
#line 2023 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 5116 "parser.tab.c"
    break;

  case 221: /* AssignmentOperator: SUB_ASSIGN  */
#line 2024 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 5122 "parser.tab.c"
    break;

  case 222: /* AssignmentOperator: LEFT_ASSIGN  */
#line 2025 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 5128 "parser.tab.c"
    break;

  case 223: /* AssignmentOperator: RIGHT_ASSIGN  */
#line 2026 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 5134 "parser.tab.c"
    break;

  case 224: /* AssignmentOperator: UNSIGNED_RIGHT_ASSIGN  */
#line 2027 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 5140 "parser.tab.c"
    break;

  case 225: /* AssignmentOperator: AND_ASSIGN  */
#line 2028 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 5146 "parser.tab.c"
    break;

  case 226: /* AssignmentOperator: XOR_ASSIGN  */
#line 2029 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 5152 "parser.tab.c"
    break;

  case 227: /* AssignmentOperator: OR_ASSIGN  */
#line 2030 "parser.y"
                                                                                        {(yyval.str) = (yyvsp[0].str);}
#line 5158 "parser.tab.c"
    break;

  case 228: /* ConditionalExpression: ConditionalOrExpression  */
#line 2034 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 5164 "parser.tab.c"
    break;

  case 229: /* ConditionalExpression: ConditionalOrExpression '?' Expression ':' ConditionalExpression  */
#line 2035 "parser.y"
                                                                                        {
    	genNode* newNode = new genNode();
		(yyval.node) = newNode;
		getCECode((yyval.node), (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 5174 "parser.tab.c"
    break;

  case 230: /* ConditionalOrExpression: ConditionalAndExpression  */
#line 2043 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 5180 "parser.tab.c"
    break;

  case 231: /* ConditionalOrExpression: ConditionalOrExpression OR_OP ConditionalAndExpression  */
#line 2044 "parser.y"
                                                                                        {
    	genNode* n= new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "||", (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 5192 "parser.tab.c"
    break;

  case 232: /* ConditionalAndExpression: InclusiveOrExpression  */
#line 2054 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 5198 "parser.tab.c"
    break;

  case 233: /* ConditionalAndExpression: ConditionalAndExpression AND_OP InclusiveOrExpression  */
#line 2055 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "&&", (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 5210 "parser.tab.c"
    break;

  case 234: /* InclusiveOrExpression: ExclusiveOrExpression  */
#line 2065 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 5216 "parser.tab.c"
    break;

  case 235: /* InclusiveOrExpression: InclusiveOrExpression '|' ExclusiveOrExpression  */
#line 2066 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "|", (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 5228 "parser.tab.c"
    break;

  case 236: /* ExclusiveOrExpression: AndExpression  */
#line 2076 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 5234 "parser.tab.c"
    break;

  case 237: /* ExclusiveOrExpression: ExclusiveOrExpression '^' AndExpression  */
#line 2077 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "^", (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 5246 "parser.tab.c"
    break;

  case 238: /* AndExpression: EqualityExpression  */
#line 2087 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 5252 "parser.tab.c"
    break;

  case 239: /* AndExpression: AndExpression '&' EqualityExpression  */
#line 2088 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "&", (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 5264 "parser.tab.c"
    break;

  case 240: /* EqualityExpression: RelationalExpression  */
#line 2098 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 5270 "parser.tab.c"
    break;

  case 241: /* EqualityExpression: EqualityExpression EQ_OP RelationalExpression  */
#line 2099 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "==", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 5282 "parser.tab.c"
    break;

  case 242: /* EqualityExpression: EqualityExpression NE_OP RelationalExpression  */
#line 2106 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "!=", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 5294 "parser.tab.c"
    break;

  case 243: /* RelationalExpression: ShiftExpression  */
#line 2116 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 5300 "parser.tab.c"
    break;

  case 244: /* RelationalExpression: RelationalExpression '<' ShiftExpression  */
#line 2117 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "<", (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 5312 "parser.tab.c"
    break;

  case 245: /* RelationalExpression: RelationalExpression '>' ShiftExpression  */
#line 2124 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), ">", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 5324 "parser.tab.c"
    break;

  case 246: /* RelationalExpression: RelationalExpression LE_OP ShiftExpression  */
#line 2131 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "<=", (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 5336 "parser.tab.c"
    break;

  case 247: /* RelationalExpression: RelationalExpression GE_OP ShiftExpression  */
#line 2138 "parser.y"
                                                                                        {
     	genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), ">=", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 5348 "parser.tab.c"
    break;

  case 248: /* ShiftExpression: AdditiveExpression  */
#line 2148 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 5354 "parser.tab.c"
    break;

  case 249: /* ShiftExpression: ShiftExpression LEFT_OP AdditiveExpression  */
#line 2149 "parser.y"
                                                                                        {
        genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "<<", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 5366 "parser.tab.c"
    break;

  case 250: /* ShiftExpression: ShiftExpression RIGHT_OP AdditiveExpression  */
#line 2156 "parser.y"
                                                                                        {
        genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), ">>", (yyvsp[-2].node), (yyvsp[0].node), line);
   }
#line 5378 "parser.tab.c"
    break;

  case 251: /* AdditiveExpression: MultiplicativeExpression  */
#line 2166 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 5384 "parser.tab.c"
    break;

  case 252: /* AdditiveExpression: AdditiveExpression '+' MultiplicativeExpression  */
#line 2167 "parser.y"
                                                                                        {
        genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "+", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 5396 "parser.tab.c"
    break;

  case 253: /* AdditiveExpression: AdditiveExpression '-' MultiplicativeExpression  */
#line 2174 "parser.y"
                                                                                        {
        genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "-", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 5408 "parser.tab.c"
    break;

  case 254: /* MultiplicativeExpression: UnaryExpression  */
#line 2184 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 5414 "parser.tab.c"
    break;

  case 255: /* MultiplicativeExpression: MultiplicativeExpression '*' UnaryExpression  */
#line 2185 "parser.y"
                                                                                        {
        genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "*", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 5426 "parser.tab.c"
    break;

  case 256: /* MultiplicativeExpression: MultiplicativeExpression '/' UnaryExpression  */
#line 2192 "parser.y"
                                                                                        {
        genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "/", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 5438 "parser.tab.c"
    break;

  case 257: /* MultiplicativeExpression: MultiplicativeExpression '%' UnaryExpression  */
#line 2199 "parser.y"
                                                                                        {
        genNode* n = new genNode();
		(yyval.node) = n;
		(yyval.node)->code = (yyvsp[-2].node)->code;
		(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		gen2OpCode((yyval.node), "%", (yyvsp[-2].node), (yyvsp[0].node), line);
    }
#line 5450 "parser.tab.c"
    break;

  case 258: /* UnaryExpression: PreIncrementExpression  */
#line 2209 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 5456 "parser.tab.c"
    break;

  case 259: /* UnaryExpression: PreDecrementExpression  */
#line 2210 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 5462 "parser.tab.c"
    break;

  case 260: /* UnaryExpression: '+' UnaryExpression  */
#line 2211 "parser.y"
                                                                                        {
       (yyval.node) = (yyvsp[0].node);
   }
#line 5470 "parser.tab.c"
    break;

  case 261: /* UnaryExpression: '-' UnaryExpression  */
#line 2214 "parser.y"
                                                                                        {
    	genNode* n = new genNode();
		(yyval.node) = n;
		genNode* zeroNode = new genNode();
		zeroNode->isLit = true; zeroNode->place = "0"; zeroNode->type = "int";
		gen2OpCode((yyval.node), "-", zeroNode, (yyvsp[0].node), line);
   }
#line 5482 "parser.tab.c"
    break;

  case 262: /* UnaryExpression: UnaryExpressionNotPlusMinus  */
#line 2221 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 5488 "parser.tab.c"
    break;

  case 263: /* PreIncrementExpression: INC_OP UnaryExpression  */
#line 2225 "parser.y"
                                                                                        {
    	(yyval.node) = (yyvsp[0].node);
		getPreUnaryOpCode("++", (yyval.node), (yyvsp[0].node), line);
   }
#line 5497 "parser.tab.c"
    break;

  case 264: /* PreDecrementExpression: DEC_OP UnaryExpression  */
#line 2232 "parser.y"
                                                                                        {
    	(yyval.node) = (yyvsp[0].node);
		getPreUnaryOpCode("--", (yyval.node), (yyvsp[0].node), line);
   }
#line 5506 "parser.tab.c"
    break;

  case 265: /* UnaryExpressionNotPlusMinus: PostfixExpression  */
#line 2239 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 5512 "parser.tab.c"
    break;

  case 266: /* UnaryExpressionNotPlusMinus: '~' UnaryExpression  */
#line 2240 "parser.y"
                                                                                        {
   }
#line 5519 "parser.tab.c"
    break;

  case 267: /* UnaryExpressionNotPlusMinus: '!' UnaryExpression  */
#line 2242 "parser.y"
                                                                                        {

   }
#line 5527 "parser.tab.c"
    break;

  case 268: /* UnaryExpressionNotPlusMinus: CastExpression  */
#line 2245 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 5533 "parser.tab.c"
    break;

  case 269: /* PostfixExpression: Primary  */
#line 2249 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 5539 "parser.tab.c"
    break;

  case 270: /* PostfixExpression: TypeName  */
#line 2250 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 5545 "parser.tab.c"
    break;

  case 271: /* PostfixExpression: PostIncrementExpression  */
#line 2251 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 5551 "parser.tab.c"
    break;

  case 272: /* PostfixExpression: PostDecrementExpression  */
#line 2252 "parser.y"
                                                                                        {(yyval.node)=(yyvsp[0].node);}
#line 5557 "parser.tab.c"
    break;

  case 273: /* PostIncrementExpression: PostfixExpression INC_OP  */
#line 2256 "parser.y"
                                                                                        {
        (yyval.node) = (yyvsp[-1].node);
		getPostUnaryOpCode("++", (yyval.node), (yyvsp[-1].node), line);
   }
#line 5566 "parser.tab.c"
    break;

  case 274: /* PostDecrementExpression: PostfixExpression DEC_OP  */
#line 2263 "parser.y"
                                                                                        {
        (yyval.node) = (yyvsp[-1].node);
		getPostUnaryOpCode("--", (yyval.node), (yyvsp[-1].node), line);
   }
#line 5575 "parser.tab.c"
    break;

  case 275: /* CastExpression: '(' PrimitiveType ')' UnaryExpression  */
#line 2270 "parser.y"
                                                                                        {
         
   }
#line 5583 "parser.tab.c"
    break;


#line 5587 "parser.tab.c"

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

#line 2276 "parser.y"


int main (void) {
    yyparse();

    // generateDotFile();
    ST->PrintTable(ST->baseEnv);
	printTAC(root);
    

    return 1;
}

void yyerror (const char *str) {cerr<<"Line "<<line<<": "<<str<<endl;}
