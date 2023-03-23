#ifndef YY_parse_h_included
#define YY_parse_h_included
/*#define YY_USE_CLASS 
*/
#line 1 "/usr/share/bison++/bison.h"
/* before anything */
#ifdef c_plusplus
 #ifndef __cplusplus
  #define __cplusplus
 #endif
#endif


 #line 8 "/usr/share/bison++/bison.h"
#define YY_parse_parse .error verbose

#line 33 "parser.y"
typedef union{
    char *str;
    int ival;
    Node *node;
} yy_parse_stype;
#define YY_parse_STYPE yy_parse_stype
#ifndef YY_USE_CLASS
#define YYSTYPE yy_parse_stype
#endif

#line 21 "/usr/share/bison++/bison.h"
 /* %{ and %header{ and %union, during decl */
#ifndef YY_parse_COMPATIBILITY
 #ifndef YY_USE_CLASS
  #define  YY_parse_COMPATIBILITY 1
 #else
  #define  YY_parse_COMPATIBILITY 0
 #endif
#endif

#if YY_parse_COMPATIBILITY != 0
/* backward compatibility */
 #ifdef YYLTYPE
  #ifndef YY_parse_LTYPE
   #define YY_parse_LTYPE YYLTYPE
/* WARNING obsolete !!! user defined YYLTYPE not reported into generated header */
/* use %define LTYPE */
  #endif
 #endif
/*#ifdef YYSTYPE*/
  #ifndef YY_parse_STYPE
   #define YY_parse_STYPE YYSTYPE
  /* WARNING obsolete !!! user defined YYSTYPE not reported into generated header */
   /* use %define STYPE */
  #endif
/*#endif*/
 #ifdef YYDEBUG
  #ifndef YY_parse_DEBUG
   #define  YY_parse_DEBUG YYDEBUG
   /* WARNING obsolete !!! user defined YYDEBUG not reported into generated header */
   /* use %define DEBUG */
  #endif
 #endif 
 /* use goto to be compatible */
 #ifndef YY_parse_USE_GOTO
  #define YY_parse_USE_GOTO 1
 #endif
#endif

/* use no goto to be clean in C++ */
#ifndef YY_parse_USE_GOTO
 #define YY_parse_USE_GOTO 0
#endif

#ifndef YY_parse_PURE

 #line 65 "/usr/share/bison++/bison.h"

#line 65 "/usr/share/bison++/bison.h"
/* YY_parse_PURE */
#endif


 #line 68 "/usr/share/bison++/bison.h"

#line 68 "/usr/share/bison++/bison.h"
/* prefix */

#ifndef YY_parse_DEBUG

 #line 71 "/usr/share/bison++/bison.h"

#line 71 "/usr/share/bison++/bison.h"
/* YY_parse_DEBUG */
#endif

#ifndef YY_parse_LSP_NEEDED

 #line 75 "/usr/share/bison++/bison.h"

#line 75 "/usr/share/bison++/bison.h"
 /* YY_parse_LSP_NEEDED*/
#endif

/* DEFAULT LTYPE*/
#ifdef YY_parse_LSP_NEEDED
 #ifndef YY_parse_LTYPE
  #ifndef BISON_YYLTYPE_ISDECLARED
   #define BISON_YYLTYPE_ISDECLARED
typedef
  struct yyltype
    {
      int timestamp;
      int first_line;
      int first_column;
      int last_line;
      int last_column;
      char *text;
   }
  yyltype;
  #endif

  #define YY_parse_LTYPE yyltype
 #endif
#endif

/* DEFAULT STYPE*/
#ifndef YY_parse_STYPE
 #define YY_parse_STYPE int
#endif

/* DEFAULT MISCELANEOUS */
#ifndef YY_parse_PARSE
 #define YY_parse_PARSE yyparse
#endif

#ifndef YY_parse_LEX
 #define YY_parse_LEX yylex
#endif

#ifndef YY_parse_LVAL
 #define YY_parse_LVAL yylval
#endif

#ifndef YY_parse_LLOC
 #define YY_parse_LLOC yylloc
#endif

#ifndef YY_parse_CHAR
 #define YY_parse_CHAR yychar
#endif

#ifndef YY_parse_NERRS
 #define YY_parse_NERRS yynerrs
#endif

#ifndef YY_parse_DEBUG_FLAG
 #define YY_parse_DEBUG_FLAG yydebug
#endif

#ifndef YY_parse_ERROR
 #define YY_parse_ERROR yyerror
#endif

#ifndef YY_parse_PARSE_PARAM
 #ifndef __STDC__
  #ifndef __cplusplus
   #ifndef YY_USE_CLASS
    #define YY_parse_PARSE_PARAM
    #ifndef YY_parse_PARSE_PARAM_DEF
     #define YY_parse_PARSE_PARAM_DEF
    #endif
   #endif
  #endif
 #endif
 #ifndef YY_parse_PARSE_PARAM
  #define YY_parse_PARSE_PARAM void
 #endif
#endif

/* TOKEN C */
#ifndef YY_USE_CLASS

 #ifndef YY_parse_PURE
  #ifndef yylval
   extern YY_parse_STYPE YY_parse_LVAL;
  #else
   #if yylval != YY_parse_LVAL
    extern YY_parse_STYPE YY_parse_LVAL;
   #else
    #warning "Namespace conflict, disabling some functionality (bison++ only)"
   #endif
  #endif
 #endif


 #line 169 "/usr/share/bison++/bison.h"
#define	CONTINUE	258
#define	FOR	259
#define	CHAR	260
#define	FINAL	261
#define	STATIC	262
#define	VOID	263
#define	CLASS	264
#define	LONG	265
#define	CONST	266
#define	FLOAT	267
#define	WHILE	268
#define	FLOATINGPOINTLITERAL	269
#define	TRUELITERAL	270
#define	FALSELITERAL	271
#define	NULLLITERAL	272
#define	CHARACTERLITERAL	273
#define	IDENTIFIER	274
#define	STRINGLITERAL	275
#define	BOOLEAN	276
#define	PRIVATE	277
#define	IF	278
#define	PACKAGE	279
#define	THIS	280
#define	BREAK	281
#define	DOUBLE	282
#define	BYTE	283
#define	ELSE	284
#define	PUBLIC	285
#define	RETURN	286
#define	INT	287
#define	SHORT	288
#define	ABSTRACT	289
#define	INTEGERLITERAL	290
#define	ADD_ASSIGN	291
#define	SUB_ASSIGN	292
#define	MUL_ASSIGN	293
#define	DIV_ASSIGN	294
#define	MOD_ASSIGN	295
#define	AND_ASSIGN	296
#define	OR_ASSIGN	297
#define	XOR_ASSIGN	298
#define	LEFT_ASSIGN	299
#define	RIGHT_ASSIGN	300
#define	UNSIGNED_RIGHT_ASSIGN	301
#define	OR_OP	302
#define	AND_OP	303
#define	NE_OP	304
#define	EQ_OP	305
#define	LEFT_OP	306
#define	RIGHT_OP	307
#define	UNSIGNED_RIGHT_OP	308
#define	GE_OP	309
#define	LE_OP	310
#define	INSTANCEOF	311
#define	NEW	312
#define	INC_OP	313
#define	DEC_OP	314
#define	PROPORTION	315
#define	PTR_OP	316


#line 169 "/usr/share/bison++/bison.h"
 /* #defines token */
/* after #define tokens, before const tokens S5*/
#else
 #ifndef YY_parse_CLASS
  #define YY_parse_CLASS parse
 #endif

 #ifndef YY_parse_INHERIT
  #define YY_parse_INHERIT
 #endif

 #ifndef YY_parse_MEMBERS
  #define YY_parse_MEMBERS 
 #endif

 #ifndef YY_parse_LEX_BODY
  #define YY_parse_LEX_BODY  
 #endif

 #ifndef YY_parse_ERROR_BODY
  #define YY_parse_ERROR_BODY  
 #endif

 #ifndef YY_parse_CONSTRUCTOR_PARAM
  #define YY_parse_CONSTRUCTOR_PARAM
 #endif
 /* choose between enum and const */
 #ifndef YY_parse_USE_CONST_TOKEN
  #define YY_parse_USE_CONST_TOKEN 0
  /* yes enum is more compatible with flex,  */
  /* so by default we use it */ 
 #endif
 #if YY_parse_USE_CONST_TOKEN != 0
  #ifndef YY_parse_ENUM_TOKEN
   #define YY_parse_ENUM_TOKEN yy_parse_enum_token
  #endif
 #endif

class YY_parse_CLASS YY_parse_INHERIT
{
public: 
 #if YY_parse_USE_CONST_TOKEN != 0
  /* static const int token ... */
  
 #line 212 "/usr/share/bison++/bison.h"
static const int CONTINUE;
static const int FOR;
static const int CHAR;
static const int FINAL;
static const int STATIC;
static const int VOID;
static const int CLASS;
static const int LONG;
static const int CONST;
static const int FLOAT;
static const int WHILE;
static const int FLOATINGPOINTLITERAL;
static const int TRUELITERAL;
static const int FALSELITERAL;
static const int NULLLITERAL;
static const int CHARACTERLITERAL;
static const int IDENTIFIER;
static const int STRINGLITERAL;
static const int BOOLEAN;
static const int PRIVATE;
static const int IF;
static const int PACKAGE;
static const int THIS;
static const int BREAK;
static const int DOUBLE;
static const int BYTE;
static const int ELSE;
static const int PUBLIC;
static const int RETURN;
static const int INT;
static const int SHORT;
static const int ABSTRACT;
static const int INTEGERLITERAL;
static const int ADD_ASSIGN;
static const int SUB_ASSIGN;
static const int MUL_ASSIGN;
static const int DIV_ASSIGN;
static const int MOD_ASSIGN;
static const int AND_ASSIGN;
static const int OR_ASSIGN;
static const int XOR_ASSIGN;
static const int LEFT_ASSIGN;
static const int RIGHT_ASSIGN;
static const int UNSIGNED_RIGHT_ASSIGN;
static const int OR_OP;
static const int AND_OP;
static const int NE_OP;
static const int EQ_OP;
static const int LEFT_OP;
static const int RIGHT_OP;
static const int UNSIGNED_RIGHT_OP;
static const int GE_OP;
static const int LE_OP;
static const int INSTANCEOF;
static const int NEW;
static const int INC_OP;
static const int DEC_OP;
static const int PROPORTION;
static const int PTR_OP;


#line 212 "/usr/share/bison++/bison.h"
 /* decl const */
 #else
  enum YY_parse_ENUM_TOKEN { YY_parse_NULL_TOKEN=0
  
 #line 215 "/usr/share/bison++/bison.h"
	,CONTINUE=258
	,FOR=259
	,CHAR=260
	,FINAL=261
	,STATIC=262
	,VOID=263
	,CLASS=264
	,LONG=265
	,CONST=266
	,FLOAT=267
	,WHILE=268
	,FLOATINGPOINTLITERAL=269
	,TRUELITERAL=270
	,FALSELITERAL=271
	,NULLLITERAL=272
	,CHARACTERLITERAL=273
	,IDENTIFIER=274
	,STRINGLITERAL=275
	,BOOLEAN=276
	,PRIVATE=277
	,IF=278
	,PACKAGE=279
	,THIS=280
	,BREAK=281
	,DOUBLE=282
	,BYTE=283
	,ELSE=284
	,PUBLIC=285
	,RETURN=286
	,INT=287
	,SHORT=288
	,ABSTRACT=289
	,INTEGERLITERAL=290
	,ADD_ASSIGN=291
	,SUB_ASSIGN=292
	,MUL_ASSIGN=293
	,DIV_ASSIGN=294
	,MOD_ASSIGN=295
	,AND_ASSIGN=296
	,OR_ASSIGN=297
	,XOR_ASSIGN=298
	,LEFT_ASSIGN=299
	,RIGHT_ASSIGN=300
	,UNSIGNED_RIGHT_ASSIGN=301
	,OR_OP=302
	,AND_OP=303
	,NE_OP=304
	,EQ_OP=305
	,LEFT_OP=306
	,RIGHT_OP=307
	,UNSIGNED_RIGHT_OP=308
	,GE_OP=309
	,LE_OP=310
	,INSTANCEOF=311
	,NEW=312
	,INC_OP=313
	,DEC_OP=314
	,PROPORTION=315
	,PTR_OP=316


#line 215 "/usr/share/bison++/bison.h"
 /* enum token */
     }; /* end of enum declaration */
 #endif
public:
 int YY_parse_PARSE(YY_parse_PARSE_PARAM);
 virtual void YY_parse_ERROR(char *msg) YY_parse_ERROR_BODY;
 #ifdef YY_parse_PURE
  #ifdef YY_parse_LSP_NEEDED
   virtual int  YY_parse_LEX(YY_parse_STYPE *YY_parse_LVAL,YY_parse_LTYPE *YY_parse_LLOC) YY_parse_LEX_BODY;
  #else
   virtual int  YY_parse_LEX(YY_parse_STYPE *YY_parse_LVAL) YY_parse_LEX_BODY;
  #endif
 #else
  virtual int YY_parse_LEX() YY_parse_LEX_BODY;
  YY_parse_STYPE YY_parse_LVAL;
  #ifdef YY_parse_LSP_NEEDED
   YY_parse_LTYPE YY_parse_LLOC;
  #endif
  int YY_parse_NERRS;
  int YY_parse_CHAR;
 #endif
 #if YY_parse_DEBUG != 0
  public:
   int YY_parse_DEBUG_FLAG;	/*  nonzero means print parse trace	*/
 #endif
public:
 YY_parse_CLASS(YY_parse_CONSTRUCTOR_PARAM);
public:
 YY_parse_MEMBERS 
};
/* other declare folow */
#endif


#if YY_parse_COMPATIBILITY != 0
 /* backward compatibility */
 /* Removed due to bison problems
 /#ifndef YYSTYPE
 / #define YYSTYPE YY_parse_STYPE
 /#endif*/

 #ifndef YYLTYPE
  #define YYLTYPE YY_parse_LTYPE
 #endif
 #ifndef YYDEBUG
  #ifdef YY_parse_DEBUG 
   #define YYDEBUG YY_parse_DEBUG
  #endif
 #endif

#endif
/* END */

 #line 267 "/usr/share/bison++/bison.h"
#endif
