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
#line 125 "gram.in"

#include "defs.h"
#include "p1defs.h"

static int nstars;			/* Number of labels in an
					   alternate return CALL */
static int datagripe;
static int lasttype;
static int ndim;
static int vartype;
int new_dcl;
static ftnint varleng;
static struct Dims dims[MAXDIM+1];
extern struct Labelblock **labarray;	/* Labels in an alternate
						   return CALL */
extern int maxlablist;

/* The next two variables are used to verify that each statement might be reached
   during runtime.   lastwasbranch   is tested only in the defintion of the
   stat:   nonterminal. */

int lastwasbranch = NO;
static int thiswasbranch = NO;
extern ftnint yystno;
extern flag intonly;
static chainp datastack;
extern long laststfcn, thisstno;
extern int can_include;	/* for netlib */
extern void endcheck Argdcl((void));
extern struct Primblock *primchk Argdcl((expptr));

#define ESNULL (Extsym *)0
#define NPNULL (Namep)0
#define LBNULL (struct Listblock *)0

 static void
pop_datastack(Void) {
	chainp d0 = datastack;
	if (d0->datap)
		curdtp = (chainp)d0->datap;
	datastack = d0->nextp;
	d0->nextp = 0;
	frchain(&d0);
	}


#line 118 "y.tab.c"

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


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    SEOS = 1,                      /* SEOS  */
    SCOMMENT = 2,                  /* SCOMMENT  */
    SLABEL = 3,                    /* SLABEL  */
    SUNKNOWN = 4,                  /* SUNKNOWN  */
    SHOLLERITH = 5,                /* SHOLLERITH  */
    SICON = 6,                     /* SICON  */
    SRCON = 7,                     /* SRCON  */
    SDCON = 8,                     /* SDCON  */
    SBITCON = 9,                   /* SBITCON  */
    SOCTCON = 10,                  /* SOCTCON  */
    SHEXCON = 11,                  /* SHEXCON  */
    STRUE = 12,                    /* STRUE  */
    SFALSE = 13,                   /* SFALSE  */
    SNAME = 14,                    /* SNAME  */
    SNAMEEQ = 15,                  /* SNAMEEQ  */
    SFIELD = 16,                   /* SFIELD  */
    SSCALE = 17,                   /* SSCALE  */
    SINCLUDE = 18,                 /* SINCLUDE  */
    SLET = 19,                     /* SLET  */
    SASSIGN = 20,                  /* SASSIGN  */
    SAUTOMATIC = 21,               /* SAUTOMATIC  */
    SBACKSPACE = 22,               /* SBACKSPACE  */
    SBLOCK = 23,                   /* SBLOCK  */
    SCALL = 24,                    /* SCALL  */
    SCHARACTER = 25,               /* SCHARACTER  */
    SCLOSE = 26,                   /* SCLOSE  */
    SCOMMON = 27,                  /* SCOMMON  */
    SCOMPLEX = 28,                 /* SCOMPLEX  */
    SCONTINUE = 29,                /* SCONTINUE  */
    SDATA = 30,                    /* SDATA  */
    SDCOMPLEX = 31,                /* SDCOMPLEX  */
    SDIMENSION = 32,               /* SDIMENSION  */
    SDO = 33,                      /* SDO  */
    SDOUBLE = 34,                  /* SDOUBLE  */
    SELSE = 35,                    /* SELSE  */
    SELSEIF = 36,                  /* SELSEIF  */
    SEND = 37,                     /* SEND  */
    SENDFILE = 38,                 /* SENDFILE  */
    SENDIF = 39,                   /* SENDIF  */
    SENTRY = 40,                   /* SENTRY  */
    SEQUIV = 41,                   /* SEQUIV  */
    SEXTERNAL = 42,                /* SEXTERNAL  */
    SFORMAT = 43,                  /* SFORMAT  */
    SFUNCTION = 44,                /* SFUNCTION  */
    SGOTO = 45,                    /* SGOTO  */
    SASGOTO = 46,                  /* SASGOTO  */
    SCOMPGOTO = 47,                /* SCOMPGOTO  */
    SARITHIF = 48,                 /* SARITHIF  */
    SLOGIF = 49,                   /* SLOGIF  */
    SIMPLICIT = 50,                /* SIMPLICIT  */
    SINQUIRE = 51,                 /* SINQUIRE  */
    SINTEGER = 52,                 /* SINTEGER  */
    SINTRINSIC = 53,               /* SINTRINSIC  */
    SLOGICAL = 54,                 /* SLOGICAL  */
    SNAMELIST = 55,                /* SNAMELIST  */
    SOPEN = 56,                    /* SOPEN  */
    SPARAM = 57,                   /* SPARAM  */
    SPAUSE = 58,                   /* SPAUSE  */
    SPRINT = 59,                   /* SPRINT  */
    SPROGRAM = 60,                 /* SPROGRAM  */
    SPUNCH = 61,                   /* SPUNCH  */
    SREAD = 62,                    /* SREAD  */
    SREAL = 63,                    /* SREAL  */
    SRETURN = 64,                  /* SRETURN  */
    SREWIND = 65,                  /* SREWIND  */
    SSAVE = 66,                    /* SSAVE  */
    SSTATIC = 67,                  /* SSTATIC  */
    SSTOP = 68,                    /* SSTOP  */
    SSUBROUTINE = 69,              /* SSUBROUTINE  */
    STHEN = 70,                    /* STHEN  */
    STO = 71,                      /* STO  */
    SUNDEFINED = 72,               /* SUNDEFINED  */
    SWRITE = 73,                   /* SWRITE  */
    SLPAR = 74,                    /* SLPAR  */
    SRPAR = 75,                    /* SRPAR  */
    SEQUALS = 76,                  /* SEQUALS  */
    SCOLON = 77,                   /* SCOLON  */
    SCOMMA = 78,                   /* SCOMMA  */
    SCURRENCY = 79,                /* SCURRENCY  */
    SPLUS = 80,                    /* SPLUS  */
    SMINUS = 81,                   /* SMINUS  */
    SSTAR = 82,                    /* SSTAR  */
    SSLASH = 83,                   /* SSLASH  */
    SPOWER = 84,                   /* SPOWER  */
    SCONCAT = 85,                  /* SCONCAT  */
    SAND = 86,                     /* SAND  */
    SOR = 87,                      /* SOR  */
    SNEQV = 88,                    /* SNEQV  */
    SEQV = 89,                     /* SEQV  */
    SNOT = 90,                     /* SNOT  */
    SEQ = 91,                      /* SEQ  */
    SLT = 92,                      /* SLT  */
    SGT = 93,                      /* SGT  */
    SLE = 94,                      /* SLE  */
    SGE = 95,                      /* SGE  */
    SNE = 96,                      /* SNE  */
    SENDDO = 97,                   /* SENDDO  */
    SWHILE = 98,                   /* SWHILE  */
    SSLASHD = 99,                  /* SSLASHD  */
    SBYTE = 100,                   /* SBYTE  */
    SRECURSIVE = 101               /* SRECURSIVE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define SEOS 1
#define SCOMMENT 2
#define SLABEL 3
#define SUNKNOWN 4
#define SHOLLERITH 5
#define SICON 6
#define SRCON 7
#define SDCON 8
#define SBITCON 9
#define SOCTCON 10
#define SHEXCON 11
#define STRUE 12
#define SFALSE 13
#define SNAME 14
#define SNAMEEQ 15
#define SFIELD 16
#define SSCALE 17
#define SINCLUDE 18
#define SLET 19
#define SASSIGN 20
#define SAUTOMATIC 21
#define SBACKSPACE 22
#define SBLOCK 23
#define SCALL 24
#define SCHARACTER 25
#define SCLOSE 26
#define SCOMMON 27
#define SCOMPLEX 28
#define SCONTINUE 29
#define SDATA 30
#define SDCOMPLEX 31
#define SDIMENSION 32
#define SDO 33
#define SDOUBLE 34
#define SELSE 35
#define SELSEIF 36
#define SEND 37
#define SENDFILE 38
#define SENDIF 39
#define SENTRY 40
#define SEQUIV 41
#define SEXTERNAL 42
#define SFORMAT 43
#define SFUNCTION 44
#define SGOTO 45
#define SASGOTO 46
#define SCOMPGOTO 47
#define SARITHIF 48
#define SLOGIF 49
#define SIMPLICIT 50
#define SINQUIRE 51
#define SINTEGER 52
#define SINTRINSIC 53
#define SLOGICAL 54
#define SNAMELIST 55
#define SOPEN 56
#define SPARAM 57
#define SPAUSE 58
#define SPRINT 59
#define SPROGRAM 60
#define SPUNCH 61
#define SREAD 62
#define SREAL 63
#define SRETURN 64
#define SREWIND 65
#define SSAVE 66
#define SSTATIC 67
#define SSTOP 68
#define SSUBROUTINE 69
#define STHEN 70
#define STO 71
#define SUNDEFINED 72
#define SWRITE 73
#define SLPAR 74
#define SRPAR 75
#define SEQUALS 76
#define SCOLON 77
#define SCOMMA 78
#define SCURRENCY 79
#define SPLUS 80
#define SMINUS 81
#define SSTAR 82
#define SSLASH 83
#define SPOWER 84
#define SCONCAT 85
#define SAND 86
#define SOR 87
#define SNEQV 88
#define SEQV 89
#define SNOT 90
#define SEQ 91
#define SLT 92
#define SGT 93
#define SLE 94
#define SGE 95
#define SNE 96
#define SENDDO 97
#define SWHILE 98
#define SSLASHD 99
#define SBYTE 100
#define SRECURSIVE 101

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 174 "gram.in"

	int ival;
	ftnint lval;
	char *charpval;
	chainp chval;
	tagptr tagval;
	expptr expval;
	struct Labelblock *labval;
	struct Nameblock *namval;
	struct Eqvchain *eqvval;
	Extsym *extval;
	int isrec;
	

#line 389 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_SEOS = 3,                       /* SEOS  */
  YYSYMBOL_SCOMMENT = 4,                   /* SCOMMENT  */
  YYSYMBOL_SLABEL = 5,                     /* SLABEL  */
  YYSYMBOL_SUNKNOWN = 6,                   /* SUNKNOWN  */
  YYSYMBOL_SHOLLERITH = 7,                 /* SHOLLERITH  */
  YYSYMBOL_SICON = 8,                      /* SICON  */
  YYSYMBOL_SRCON = 9,                      /* SRCON  */
  YYSYMBOL_SDCON = 10,                     /* SDCON  */
  YYSYMBOL_SBITCON = 11,                   /* SBITCON  */
  YYSYMBOL_SOCTCON = 12,                   /* SOCTCON  */
  YYSYMBOL_SHEXCON = 13,                   /* SHEXCON  */
  YYSYMBOL_STRUE = 14,                     /* STRUE  */
  YYSYMBOL_SFALSE = 15,                    /* SFALSE  */
  YYSYMBOL_SNAME = 16,                     /* SNAME  */
  YYSYMBOL_SNAMEEQ = 17,                   /* SNAMEEQ  */
  YYSYMBOL_SFIELD = 18,                    /* SFIELD  */
  YYSYMBOL_SSCALE = 19,                    /* SSCALE  */
  YYSYMBOL_SINCLUDE = 20,                  /* SINCLUDE  */
  YYSYMBOL_SLET = 21,                      /* SLET  */
  YYSYMBOL_SASSIGN = 22,                   /* SASSIGN  */
  YYSYMBOL_SAUTOMATIC = 23,                /* SAUTOMATIC  */
  YYSYMBOL_SBACKSPACE = 24,                /* SBACKSPACE  */
  YYSYMBOL_SBLOCK = 25,                    /* SBLOCK  */
  YYSYMBOL_SCALL = 26,                     /* SCALL  */
  YYSYMBOL_SCHARACTER = 27,                /* SCHARACTER  */
  YYSYMBOL_SCLOSE = 28,                    /* SCLOSE  */
  YYSYMBOL_SCOMMON = 29,                   /* SCOMMON  */
  YYSYMBOL_SCOMPLEX = 30,                  /* SCOMPLEX  */
  YYSYMBOL_SCONTINUE = 31,                 /* SCONTINUE  */
  YYSYMBOL_SDATA = 32,                     /* SDATA  */
  YYSYMBOL_SDCOMPLEX = 33,                 /* SDCOMPLEX  */
  YYSYMBOL_SDIMENSION = 34,                /* SDIMENSION  */
  YYSYMBOL_SDO = 35,                       /* SDO  */
  YYSYMBOL_SDOUBLE = 36,                   /* SDOUBLE  */
  YYSYMBOL_SELSE = 37,                     /* SELSE  */
  YYSYMBOL_SELSEIF = 38,                   /* SELSEIF  */
  YYSYMBOL_SEND = 39,                      /* SEND  */
  YYSYMBOL_SENDFILE = 40,                  /* SENDFILE  */
  YYSYMBOL_SENDIF = 41,                    /* SENDIF  */
  YYSYMBOL_SENTRY = 42,                    /* SENTRY  */
  YYSYMBOL_SEQUIV = 43,                    /* SEQUIV  */
  YYSYMBOL_SEXTERNAL = 44,                 /* SEXTERNAL  */
  YYSYMBOL_SFORMAT = 45,                   /* SFORMAT  */
  YYSYMBOL_SFUNCTION = 46,                 /* SFUNCTION  */
  YYSYMBOL_SGOTO = 47,                     /* SGOTO  */
  YYSYMBOL_SASGOTO = 48,                   /* SASGOTO  */
  YYSYMBOL_SCOMPGOTO = 49,                 /* SCOMPGOTO  */
  YYSYMBOL_SARITHIF = 50,                  /* SARITHIF  */
  YYSYMBOL_SLOGIF = 51,                    /* SLOGIF  */
  YYSYMBOL_SIMPLICIT = 52,                 /* SIMPLICIT  */
  YYSYMBOL_SINQUIRE = 53,                  /* SINQUIRE  */
  YYSYMBOL_SINTEGER = 54,                  /* SINTEGER  */
  YYSYMBOL_SINTRINSIC = 55,                /* SINTRINSIC  */
  YYSYMBOL_SLOGICAL = 56,                  /* SLOGICAL  */
  YYSYMBOL_SNAMELIST = 57,                 /* SNAMELIST  */
  YYSYMBOL_SOPEN = 58,                     /* SOPEN  */
  YYSYMBOL_SPARAM = 59,                    /* SPARAM  */
  YYSYMBOL_SPAUSE = 60,                    /* SPAUSE  */
  YYSYMBOL_SPRINT = 61,                    /* SPRINT  */
  YYSYMBOL_SPROGRAM = 62,                  /* SPROGRAM  */
  YYSYMBOL_SPUNCH = 63,                    /* SPUNCH  */
  YYSYMBOL_SREAD = 64,                     /* SREAD  */
  YYSYMBOL_SREAL = 65,                     /* SREAL  */
  YYSYMBOL_SRETURN = 66,                   /* SRETURN  */
  YYSYMBOL_SREWIND = 67,                   /* SREWIND  */
  YYSYMBOL_SSAVE = 68,                     /* SSAVE  */
  YYSYMBOL_SSTATIC = 69,                   /* SSTATIC  */
  YYSYMBOL_SSTOP = 70,                     /* SSTOP  */
  YYSYMBOL_SSUBROUTINE = 71,               /* SSUBROUTINE  */
  YYSYMBOL_STHEN = 72,                     /* STHEN  */
  YYSYMBOL_STO = 73,                       /* STO  */
  YYSYMBOL_SUNDEFINED = 74,                /* SUNDEFINED  */
  YYSYMBOL_SWRITE = 75,                    /* SWRITE  */
  YYSYMBOL_SLPAR = 76,                     /* SLPAR  */
  YYSYMBOL_SRPAR = 77,                     /* SRPAR  */
  YYSYMBOL_SEQUALS = 78,                   /* SEQUALS  */
  YYSYMBOL_SCOLON = 79,                    /* SCOLON  */
  YYSYMBOL_SCOMMA = 80,                    /* SCOMMA  */
  YYSYMBOL_SCURRENCY = 81,                 /* SCURRENCY  */
  YYSYMBOL_SPLUS = 82,                     /* SPLUS  */
  YYSYMBOL_SMINUS = 83,                    /* SMINUS  */
  YYSYMBOL_SSTAR = 84,                     /* SSTAR  */
  YYSYMBOL_SSLASH = 85,                    /* SSLASH  */
  YYSYMBOL_SPOWER = 86,                    /* SPOWER  */
  YYSYMBOL_SCONCAT = 87,                   /* SCONCAT  */
  YYSYMBOL_SAND = 88,                      /* SAND  */
  YYSYMBOL_SOR = 89,                       /* SOR  */
  YYSYMBOL_SNEQV = 90,                     /* SNEQV  */
  YYSYMBOL_SEQV = 91,                      /* SEQV  */
  YYSYMBOL_SNOT = 92,                      /* SNOT  */
  YYSYMBOL_SEQ = 93,                       /* SEQ  */
  YYSYMBOL_SLT = 94,                       /* SLT  */
  YYSYMBOL_SGT = 95,                       /* SGT  */
  YYSYMBOL_SLE = 96,                       /* SLE  */
  YYSYMBOL_SGE = 97,                       /* SGE  */
  YYSYMBOL_SNE = 98,                       /* SNE  */
  YYSYMBOL_SENDDO = 99,                    /* SENDDO  */
  YYSYMBOL_SWHILE = 100,                   /* SWHILE  */
  YYSYMBOL_SSLASHD = 101,                  /* SSLASHD  */
  YYSYMBOL_SBYTE = 102,                    /* SBYTE  */
  YYSYMBOL_SRECURSIVE = 103,               /* SRECURSIVE  */
  YYSYMBOL_YYACCEPT = 104,                 /* $accept  */
  YYSYMBOL_program = 105,                  /* program  */
  YYSYMBOL_stat = 106,                     /* stat  */
  YYSYMBOL_thislabel = 107,                /* thislabel  */
  YYSYMBOL_entry = 108,                    /* entry  */
  YYSYMBOL_new_proc = 109,                 /* new_proc  */
  YYSYMBOL_entryname = 110,                /* entryname  */
  YYSYMBOL_name = 111,                     /* name  */
  YYSYMBOL_progname = 112,                 /* progname  */
  YYSYMBOL_progarglist = 113,              /* progarglist  */
  YYSYMBOL_progargs = 114,                 /* progargs  */
  YYSYMBOL_progarg = 115,                  /* progarg  */
  YYSYMBOL_arglist = 116,                  /* arglist  */
  YYSYMBOL_args = 117,                     /* args  */
  YYSYMBOL_arg = 118,                      /* arg  */
  YYSYMBOL_filename = 119,                 /* filename  */
  YYSYMBOL_spec = 120,                     /* spec  */
  YYSYMBOL_dcl = 121,                      /* dcl  */
  YYSYMBOL_new_dcl = 122,                  /* new_dcl  */
  YYSYMBOL_type = 123,                     /* type  */
  YYSYMBOL_typespec = 124,                 /* typespec  */
  YYSYMBOL_typename = 125,                 /* typename  */
  YYSYMBOL_lengspec = 126,                 /* lengspec  */
  YYSYMBOL_common = 127,                   /* common  */
  YYSYMBOL_comblock = 128,                 /* comblock  */
  YYSYMBOL_external = 129,                 /* external  */
  YYSYMBOL_intrinsic = 130,                /* intrinsic  */
  YYSYMBOL_equivalence = 131,              /* equivalence  */
  YYSYMBOL_equivset = 132,                 /* equivset  */
  YYSYMBOL_equivlist = 133,                /* equivlist  */
  YYSYMBOL_data = 134,                     /* data  */
  YYSYMBOL_in_data = 135,                  /* in_data  */
  YYSYMBOL_datalist = 136,                 /* datalist  */
  YYSYMBOL_datainit = 137,                 /* datainit  */
  YYSYMBOL_datapop = 138,                  /* datapop  */
  YYSYMBOL_vallist = 139,                  /* vallist  */
  YYSYMBOL_140_1 = 140,                    /* $@1  */
  YYSYMBOL_val = 141,                      /* val  */
  YYSYMBOL_value = 142,                    /* value  */
  YYSYMBOL_savelist = 143,                 /* savelist  */
  YYSYMBOL_saveitem = 144,                 /* saveitem  */
  YYSYMBOL_paramlist = 145,                /* paramlist  */
  YYSYMBOL_paramitem = 146,                /* paramitem  */
  YYSYMBOL_var = 147,                      /* var  */
  YYSYMBOL_datavar = 148,                  /* datavar  */
  YYSYMBOL_datavarlist = 149,              /* datavarlist  */
  YYSYMBOL_dims = 150,                     /* dims  */
  YYSYMBOL_dimlist = 151,                  /* dimlist  */
  YYSYMBOL_152_2 = 152,                    /* $@2  */
  YYSYMBOL_dim = 153,                      /* dim  */
  YYSYMBOL_ubound = 154,                   /* ubound  */
  YYSYMBOL_labellist = 155,                /* labellist  */
  YYSYMBOL_label = 156,                    /* label  */
  YYSYMBOL_implicit = 157,                 /* implicit  */
  YYSYMBOL_implist = 158,                  /* implist  */
  YYSYMBOL_imptype = 159,                  /* imptype  */
  YYSYMBOL_160_3 = 160,                    /* $@3  */
  YYSYMBOL_letgroups = 161,                /* letgroups  */
  YYSYMBOL_letgroup = 162,                 /* letgroup  */
  YYSYMBOL_letter = 163,                   /* letter  */
  YYSYMBOL_namelist = 164,                 /* namelist  */
  YYSYMBOL_namelistentry = 165,            /* namelistentry  */
  YYSYMBOL_namelistlist = 166,             /* namelistlist  */
  YYSYMBOL_in_dcl = 167,                   /* in_dcl  */
  YYSYMBOL_funarglist = 168,               /* funarglist  */
  YYSYMBOL_funargs = 169,                  /* funargs  */
  YYSYMBOL_expr = 170,                     /* expr  */
  YYSYMBOL_uexpr = 171,                    /* uexpr  */
  YYSYMBOL_addop = 172,                    /* addop  */
  YYSYMBOL_relop = 173,                    /* relop  */
  YYSYMBOL_lhs = 174,                      /* lhs  */
  YYSYMBOL_substring = 175,                /* substring  */
  YYSYMBOL_opt_expr = 176,                 /* opt_expr  */
  YYSYMBOL_simple = 177,                   /* simple  */
  YYSYMBOL_simple_const = 178,             /* simple_const  */
  YYSYMBOL_complex_const = 179,            /* complex_const  */
  YYSYMBOL_bit_const = 180,                /* bit_const  */
  YYSYMBOL_fexpr = 181,                    /* fexpr  */
  YYSYMBOL_unpar_fexpr = 182,              /* unpar_fexpr  */
  YYSYMBOL_exec = 183,                     /* exec  */
  YYSYMBOL_184_4 = 184,                    /* $@4  */
  YYSYMBOL_logif = 185,                    /* logif  */
  YYSYMBOL_dospec = 186,                   /* dospec  */
  YYSYMBOL_dospecw = 187,                  /* dospecw  */
  YYSYMBOL_188_5 = 188,                    /* $@5  */
  YYSYMBOL_iffable = 189,                  /* iffable  */
  YYSYMBOL_assignlabel = 190,              /* assignlabel  */
  YYSYMBOL_let = 191,                      /* let  */
  YYSYMBOL_goto = 192,                     /* goto  */
  YYSYMBOL_opt_comma = 193,                /* opt_comma  */
  YYSYMBOL_call = 194,                     /* call  */
  YYSYMBOL_callarglist = 195,              /* callarglist  */
  YYSYMBOL_callarg = 196,                  /* callarg  */
  YYSYMBOL_stop = 197,                     /* stop  */
  YYSYMBOL_exprlist = 198,                 /* exprlist  */
  YYSYMBOL_end_spec = 199,                 /* end_spec  */
  YYSYMBOL_intonlyon = 200,                /* intonlyon  */
  YYSYMBOL_intonlyoff = 201,               /* intonlyoff  */
  YYSYMBOL_io = 202,                       /* io  */
  YYSYMBOL_io1 = 203,                      /* io1  */
  YYSYMBOL_iofmove = 204,                  /* iofmove  */
  YYSYMBOL_fmkwd = 205,                    /* fmkwd  */
  YYSYMBOL_iofctl = 206,                   /* iofctl  */
  YYSYMBOL_ctlkwd = 207,                   /* ctlkwd  */
  YYSYMBOL_infmt = 208,                    /* infmt  */
  YYSYMBOL_ioctl = 209,                    /* ioctl  */
  YYSYMBOL_ctllist = 210,                  /* ctllist  */
  YYSYMBOL_ioclause = 211,                 /* ioclause  */
  YYSYMBOL_nameeq = 212,                   /* nameeq  */
  YYSYMBOL_read = 213,                     /* read  */
  YYSYMBOL_write = 214,                    /* write  */
  YYSYMBOL_print = 215,                    /* print  */
  YYSYMBOL_inlist = 216,                   /* inlist  */
  YYSYMBOL_inelt = 217,                    /* inelt  */
  YYSYMBOL_outlist = 218,                  /* outlist  */
  YYSYMBOL_out2 = 219,                     /* out2  */
  YYSYMBOL_other = 220,                    /* other  */
  YYSYMBOL_in_ioctl = 221                  /* in_ioctl  */
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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1409

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  104
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  118
/* YYNRULES -- Number of rules.  */
#define YYNRULES  307
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  555

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   257


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
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   218,   218,   219,   222,   227,   228,   248,   256,   262,
     268,   273,   301,   303,   307,   310,   312,   314,   316,   318,
     320,   329,   332,   336,   340,   341,   345,   346,   349,   350,
     353,   354,   358,   359,   362,   366,   368,   372,   377,   393,
     401,   402,   403,   404,   405,   406,   407,   408,   409,   412,
     414,   416,   420,   424,   428,   436,   438,   442,   448,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     463,   464,   491,   495,   497,   499,   501,   505,   507,   511,
     513,   517,   519,   523,   524,   527,   540,   544,   551,   552,
     556,   570,   579,   581,   583,   583,   584,   587,   589,   593,
     594,   599,   602,   603,   606,   613,   616,   617,   620,   627,
     631,   664,   680,   686,   691,   692,   695,   695,   696,   699,
     709,   721,   723,   726,   728,   732,   736,   738,   741,   742,
     748,   748,   752,   753,   756,   758,   762,   772,   773,   776,
     790,   792,   797,   819,   820,   824,   826,   831,   832,   834,
     837,   838,   839,   841,   843,   845,   847,   856,   858,   861,
     864,   866,   868,   870,   875,   876,   879,   880,   881,   882,
     883,   884,   887,   889,   892,   894,   899,   904,   905,   908,
     913,   916,   917,   918,   919,   920,   921,   922,   925,   929,
     932,   935,   940,   941,   945,   946,   947,   949,   951,   953,
     955,   960,   964,   965,   972,   977,   979,   981,   982,   982,
     984,   986,   990,   994,   998,   999,   999,  1003,  1005,  1007,
    1008,  1009,  1011,  1013,  1015,  1017,  1023,  1025,  1029,  1033,
    1042,  1044,  1046,  1048,  1056,  1057,  1060,  1064,  1066,  1070,
    1071,  1075,  1077,  1081,  1083,  1088,  1101,  1105,  1109,  1113,
    1114,  1116,  1118,  1120,  1121,  1123,  1125,  1127,  1129,  1131,
    1133,  1135,  1137,  1139,  1143,  1146,  1148,  1150,  1154,  1157,
    1159,  1161,  1165,  1171,  1179,  1184,  1188,  1189,  1192,  1194,
    1196,  1198,  1200,  1202,  1206,  1210,  1214,  1218,  1225,  1234,
    1236,  1240,  1242,  1246,  1248,  1250,  1253,  1255,  1257,  1259,
    1261,  1263,  1267,  1269,  1271,  1273,  1275,  1280
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
  "\"end of file\"", "error", "\"invalid token\"", "SEOS", "SCOMMENT",
  "SLABEL", "SUNKNOWN", "SHOLLERITH", "SICON", "SRCON", "SDCON", "SBITCON",
  "SOCTCON", "SHEXCON", "STRUE", "SFALSE", "SNAME", "SNAMEEQ", "SFIELD",
  "SSCALE", "SINCLUDE", "SLET", "SASSIGN", "SAUTOMATIC", "SBACKSPACE",
  "SBLOCK", "SCALL", "SCHARACTER", "SCLOSE", "SCOMMON", "SCOMPLEX",
  "SCONTINUE", "SDATA", "SDCOMPLEX", "SDIMENSION", "SDO", "SDOUBLE",
  "SELSE", "SELSEIF", "SEND", "SENDFILE", "SENDIF", "SENTRY", "SEQUIV",
  "SEXTERNAL", "SFORMAT", "SFUNCTION", "SGOTO", "SASGOTO", "SCOMPGOTO",
  "SARITHIF", "SLOGIF", "SIMPLICIT", "SINQUIRE", "SINTEGER", "SINTRINSIC",
  "SLOGICAL", "SNAMELIST", "SOPEN", "SPARAM", "SPAUSE", "SPRINT",
  "SPROGRAM", "SPUNCH", "SREAD", "SREAL", "SRETURN", "SREWIND", "SSAVE",
  "SSTATIC", "SSTOP", "SSUBROUTINE", "STHEN", "STO", "SUNDEFINED",
  "SWRITE", "SLPAR", "SRPAR", "SEQUALS", "SCOLON", "SCOMMA", "SCURRENCY",
  "SPLUS", "SMINUS", "SSTAR", "SSLASH", "SPOWER", "SCONCAT", "SAND", "SOR",
  "SNEQV", "SEQV", "SNOT", "SEQ", "SLT", "SGT", "SLE", "SGE", "SNE",
  "SENDDO", "SWHILE", "SSLASHD", "SBYTE", "SRECURSIVE", "$accept",
  "program", "stat", "thislabel", "entry", "new_proc", "entryname", "name",
  "progname", "progarglist", "progargs", "progarg", "arglist", "args",
  "arg", "filename", "spec", "dcl", "new_dcl", "type", "typespec",
  "typename", "lengspec", "common", "comblock", "external", "intrinsic",
  "equivalence", "equivset", "equivlist", "data", "in_data", "datalist",
  "datainit", "datapop", "vallist", "$@1", "val", "value", "savelist",
  "saveitem", "paramlist", "paramitem", "var", "datavar", "datavarlist",
  "dims", "dimlist", "$@2", "dim", "ubound", "labellist", "label",
  "implicit", "implist", "imptype", "$@3", "letgroups", "letgroup",
  "letter", "namelist", "namelistentry", "namelistlist", "in_dcl",
  "funarglist", "funargs", "expr", "uexpr", "addop", "relop", "lhs",
  "substring", "opt_expr", "simple", "simple_const", "complex_const",
  "bit_const", "fexpr", "unpar_fexpr", "exec", "$@4", "logif", "dospec",
  "dospecw", "$@5", "iffable", "assignlabel", "let", "goto", "opt_comma",
  "call", "callarglist", "callarg", "stop", "exprlist", "end_spec",
  "intonlyon", "intonlyoff", "io", "io1", "iofmove", "fmkwd", "iofctl",
  "ctlkwd", "infmt", "ioctl", "ctllist", "ioclause", "nameeq", "read",
  "write", "print", "inlist", "inelt", "outlist", "out2", "other",
  "in_ioctl", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-384)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-304)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -384,   165,  -384,  -384,  -384,    18,   663,  -384,  -384,    38,
    -384,  -384,  -384,  -384,  -384,  -384,  -384,  -384,  -384,  -384,
    -384,  -384,  -384,  -384,  -384,  -384,  -384,  -384,  -384,  -384,
    -384,     6,  -384,  -384,  -384,  -384,  -384,  -384,  -384,  -384,
    -384,  -384,  -384,  -384,  -384,  -384,  -384,  -384,  -384,  -384,
    -384,  -384,  -384,  -384,  -384,  -384,    66,  -384,  -384,  -384,
    -384,  -384,  -384,  -384,   391,  -384,  -384,   -49,   -22,   -30,
    -384,    17,   -18,    -1,    26,    23,    27,     7,  -384,  1089,
    -384,     6,  -384,    50,  -384,  -384,  -384,   927,  -384,    80,
    -384,   938,    80,    52,  -384,  -384,    85,     6,     6,    66,
    -384,  -384,    15,  -384,   108,  -384,  -384,  -384,   109,  -384,
     119,     6,     6,   135,     6,   120,   126,   131,  -384,     6,
     132,  1016,     6,  -384,   883,   159,  -384,  -384,  -384,   121,
    -384,     6,  -384,  -384,   166,     6,  -384,  -384,  -384,     6,
    -384,  -384,     6,    77,     6,     6,   119,  -384,  -384,     6,
    -384,  -384,  -384,   137,   140,   578,   883,  -384,  -384,  -384,
    -384,  -384,  -384,  -384,  -384,  -384,   916,  -384,  -384,  -384,
    -384,  1026,  -384,  -384,  -384,   531,   220,  -384,  -384,   916,
    -384,  -384,  -384,    41,   144,    68,   742,   894,  -384,   158,
    -384,  -384,  -384,   157,     6,  -384,  -384,    34,  -384,   162,
       1,  -384,    25,  -384,     6,  -384,  -384,   109,  -384,   -41,
     135,   883,   883,  -384,   169,   504,  -384,     6,  1026,  -384,
     531,  -384,   170,  -384,   883,   883,  1250,  -384,   883,  -384,
    -384,  -384,  -384,   167,    66,   109,  -384,     6,  -384,   157,
    -384,     6,  -384,   905,  -384,   162,  -384,  -384,  -384,  -384,
    -384,   168,   764,  -384,   883,  -384,   135,  1250,    -4,  -384,
    -384,  -384,  -384,  -384,   172,   142,  -384,   589,   180,  1026,
    1026,  1026,  1026,  1026,  -384,   251,  -384,    44,    44,    44,
    -384,   192,  -384,   894,   894,  1250,    48,    53,  -384,   201,
     213,  -384,     6,  -384,  -384,  -384,    34,  -384,   -11,  -384,
       1,  -384,   216,  -384,  -384,   883,  -384,  -384,  -384,   155,
    -384,   164,  -384,  -384,   233,   183,  -384,  1083,  1105,   300,
    -384,   243,   191,  -384,   301,  -384,  -384,    12,  -384,  1127,
     244,   419,   883,   883,   883,   883,   883,   883,   883,   883,
    -384,  -384,  -384,  -384,  -384,  -384,   883,   883,   240,  -384,
    -384,  -384,   109,     6,   -30,    60,  1036,   109,  -384,   775,
    1250,     6,     6,   255,   259,  1213,   262,  1250,  -384,  -384,
     786,    39,  -384,   916,  -384,  -384,  1250,   180,   180,   180,
      96,   219,  -384,   192,   263,   192,    44,  1149,   277,   278,
     279,  -384,   894,   894,   894,  -384,   197,   797,   281,    34,
    -384,  -384,   286,   883,  1171,  -384,     3,  -384,     6,   135,
     162,   135,   135,  -384,  -384,   203,  -384,   282,   883,  -384,
       6,  -384,   288,  -384,   205,  -384,  -384,   883,   240,   240,
     240,   308,   419,  1284,  1267,  1267,   234,  1301,  -384,   109,
    -384,  1036,  -384,   883,  -384,  -384,  -384,  1393,   283,  -384,
    -384,  -384,   157,   296,  -384,  -384,  -384,   294,   303,   883,
     883,  -384,   531,  -384,    44,  -384,    54,   894,   894,   894,
      56,  -384,    58,  -384,    62,  -384,  -384,   797,  -384,  -384,
    -384,  1233,    34,  -384,  -384,   883,  1250,   302,   324,  -384,
    -384,   210,   883,  -384,   321,  -384,   300,   300,  1250,  -384,
     386,  -384,   392,   330,  -384,  -384,  -384,  1036,   -30,  -384,
       6,   883,  -384,  1250,   332,   186,   334,   211,   335,   336,
     338,  -384,   797,   343,    88,  1193,   883,  -384,  -384,  1250,
     135,  -384,  -384,  -384,  -384,  -384,  -384,  -384,  -384,  -384,
    -384,  -384,  -384,  -384,  -384,  -384,  -384,  1250,  -384,  -384,
    -384,  1250,   342,   135,  -384
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       2,     0,     1,    10,    11,     0,     0,     3,     9,     0,
     229,   245,    67,   265,    21,   245,    64,   271,   142,    60,
     245,    90,    62,    66,   245,    61,   245,   245,   245,   267,
     245,     0,   142,   142,    50,    21,   245,   245,   245,   245,
     245,   142,   269,    58,   142,    63,   137,   270,   142,   241,
     245,    21,   245,    59,   245,   266,    48,    68,   242,    21,
      65,   245,   205,    69,     0,     4,     5,    40,   234,    70,
      57,   234,    42,    43,    44,   234,    46,    47,     6,     0,
     202,     0,   220,   223,   245,   221,   248,     0,   245,     0,
     245,     0,     0,   262,    39,     7,     0,    24,     0,     0,
     219,    92,   234,   210,     0,     8,   211,    23,    32,    22,
       0,     0,     0,     0,     0,     0,     0,     0,   130,     0,
       0,     0,    24,   307,   177,     0,    77,   104,   105,    49,
     102,     0,   307,    21,     0,     0,    92,    21,   235,     0,
     246,    56,   235,     0,     0,     0,     0,    92,   130,     0,
     138,   207,   206,   172,     0,     0,   177,   183,   184,   185,
     186,   191,   190,   189,   181,   182,     0,   164,   165,   251,
     252,     0,   194,   195,   187,     0,   192,   249,   307,     0,
     253,   307,   273,   192,   255,   254,   259,     0,   228,     0,
      25,    14,   236,   114,     0,    73,    88,     0,   125,   234,
       0,   208,     0,    20,     0,    83,    79,    32,   230,   231,
       0,     0,     0,   126,   129,     0,    81,     0,     0,   307,
     307,   192,    12,   285,     0,     0,   178,   147,     0,   150,
     226,   151,   149,     0,     0,    32,   286,     0,    21,   114,
      94,     0,   142,     0,    76,   234,    80,    82,    84,    89,
     127,     0,   143,   173,     0,   224,     0,   239,     0,   237,
     227,   284,   279,   280,   278,     0,   276,     0,   200,     0,
       0,     0,     0,     0,   264,   278,   268,     0,     0,     0,
     291,   256,   289,     0,     0,     0,   147,   149,   260,   295,
     294,   263,     0,   116,   109,    74,     0,   112,     0,   110,
       0,   215,     0,   214,   204,     0,    33,    38,    37,     0,
      35,     0,    86,    17,     0,     0,   123,     0,     0,     0,
     131,     0,     0,   106,     0,   288,   287,     0,    13,     0,
     147,   162,     0,     0,     0,     0,     0,     0,     0,     0,
     166,   168,   167,   170,   169,   171,     0,     0,   156,    78,
     103,    15,    32,     0,    70,     0,     0,    32,    55,     0,
     247,     0,     0,     0,   144,   145,     0,   217,   240,   225,
       0,   193,   275,     0,   282,   283,   281,   197,   198,   199,
     201,   196,   274,   257,     0,   258,     0,     0,   147,     0,
       0,   261,     0,     0,     0,   218,     0,     0,     0,     0,
      93,   203,     0,     0,     0,    34,     0,    85,     0,     0,
     234,     0,     0,   212,   136,     0,   132,   134,     0,    51,
       0,   193,    30,    26,     0,    28,   148,     0,   153,   154,
     155,   163,   161,   160,   159,   158,   152,   157,    16,    32,
      53,     0,    54,     0,   179,    95,    97,     0,    99,   180,
     101,    18,   114,     0,    71,    75,   140,   139,   174,     0,
     177,   238,   278,   277,     0,   290,   148,     0,     0,     0,
     147,   297,   147,   301,   147,   299,   115,     0,   121,   117,
     119,   122,     0,   113,    94,     0,   243,   213,     0,    36,
      87,     0,     0,   124,     0,   128,     0,     0,   108,   107,
       0,    27,     0,   147,    19,    96,   100,     0,    70,   247,
       0,   177,   175,   146,     0,   172,     0,   147,     0,     0,
       0,   118,     0,     0,     0,     0,     0,   209,   232,   233,
       0,   133,   135,    31,    29,   188,    98,    99,    52,    72,
     141,   176,   292,   304,   306,   305,   120,   122,   111,    91,
     216,   244,     0,     0,   222
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -384,  -384,  -384,  -384,  -384,    13,   -26,   -31,   306,  -384,
    -384,   -79,  -205,  -384,    24,  -384,  -384,  -384,  -384,   -55,
    -384,  -384,  -341,  -384,   -72,  -384,  -384,  -384,   285,  -384,
    -384,  -384,   287,   304,  -384,   -45,  -384,     0,   -65,  -384,
     212,  -384,    30,  -131,  -383,   163,  -231,  -384,  -384,   -23,
     -67,    49,  -101,  -384,   313,  -384,  -384,  -384,   -32,   -29,
    -384,  -384,  -384,     5,  -384,  -384,   152,  -154,   -81,  -384,
     362,     9,  -120,  -298,   -44,   115,  -384,    99,   106,  -384,
    -384,  -384,  -310,   173,  -384,   390,  -384,  -384,  -384,   -68,
    -384,  -384,   104,  -384,  -384,  1043,  -384,   -34,  -384,  -384,
    -384,  -384,  -384,  -384,  -384,   125,  -384,   105,  -384,  -384,
    -384,  -384,    67,  -368,  -172,   194,  -269,  -103
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     5,     6,    65,    97,   190,   153,   191,   328,
     424,   425,   203,   309,   310,    95,    66,    67,   452,    68,
      69,    70,   141,    71,   128,    72,    73,    74,   205,   311,
      75,   101,   196,   197,   484,   355,   356,   445,   446,   129,
     130,   322,   323,   195,   297,   298,   294,   396,   397,   479,
     480,   315,   316,    76,   213,   214,   215,   415,   416,   417,
      77,   150,   457,    99,   363,   364,   285,   227,   228,   347,
     229,   253,   366,   448,   231,   232,   174,   175,   221,    78,
     305,    79,   303,   304,   402,    80,   189,    81,    82,   139,
      83,   258,   259,    84,   487,    96,   243,   454,    85,    86,
      87,    88,    89,    90,   184,   177,   265,   266,   267,    91,
      92,    93,   281,   282,   288,   289,   290,   223
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     109,   199,   313,   143,   230,   108,   171,   147,   354,   134,
     171,   244,   208,   440,   390,   291,   483,   107,   465,   107,
     -41,     7,   107,   198,   137,   127,   -45,   194,   422,   236,
     351,   135,   286,   286,   200,  -234,   260,   110,   111,   138,
     171,   107,  -274,   173,  -272,    94,   118,   173,   112,   119,
     107,  -293,   136,   120,   140,  -274,  -302,  -303,   138,  -296,
     107,  -300,   144,   295,   122,  -298,   109,   192,   193,   399,
     330,   245,   131,   369,   400,   274,   370,   173,   276,   145,
     206,   109,   107,   209,   107,   171,   207,   307,   216,   423,
     171,   109,   149,   188,   273,   138,   465,   142,   171,   483,
     109,   301,   306,   138,   239,   235,   146,   148,   242,   307,
     296,   193,   391,   246,   247,  -274,   325,   326,   251,  -274,
     278,  -272,   173,   471,   473,   475,   155,   173,   392,   388,
     286,   300,   187,  -302,  -303,   173,  -296,   171,  -300,   273,
     441,   314,  -298,   198,   278,   346,   237,   438,   279,   506,
     241,   125,   451,   126,   516,   368,   179,   518,   519,   520,
     320,   442,   125,   193,   126,     2,     3,   538,   441,   302,
       4,   308,   523,   549,   173,   233,   346,   361,   167,   168,
     269,   270,   271,   273,   201,   202,   321,   273,   171,   171,
     171,   171,   171,   176,   273,   204,   210,   183,   471,   473,
     475,   234,   211,   127,   346,   330,   109,   212,   217,   537,
     109,   352,   238,   252,   180,   357,   185,   186,   254,   372,
     220,   508,   373,  -250,   277,   173,   173,   173,   173,   173,
     455,   292,   405,   293,   504,   406,   346,   346,   470,   472,
     474,   407,   138,   273,   408,   319,   327,   358,   346,   371,
     346,   353,   349,   362,   167,   168,   269,   270,   271,   272,
     410,   395,   252,   411,   403,   264,   271,   346,   419,   302,
     268,   420,   386,   503,   476,   447,   226,   477,   275,   346,
     495,   393,   501,   496,   346,   502,   346,   528,   535,   330,
     411,  -296,   171,   394,   403,   346,   273,   273,   273,   273,
     273,   287,   287,   269,   270,   271,   346,   257,   226,   409,
     493,   494,   449,   517,   472,   474,   414,   324,   332,   333,
     334,   418,   109,   346,   427,   444,   334,   439,   382,   173,
     193,   456,   458,   167,   168,   269,   270,   271,   272,   459,
     514,   460,   492,   464,   383,   384,   385,   346,   346,   346,
     346,   346,   346,   346,   346,   346,   346,   467,   468,   469,
     447,   482,   485,   317,   318,   497,   500,   507,   377,   378,
     379,   380,   381,   509,   510,   308,   329,   331,   421,   511,
     348,   273,   526,   167,   168,   269,   270,   271,   272,   321,
     167,   168,   332,   333,   334,   360,   527,   449,   287,   287,
     346,   530,   533,   449,   365,   346,   367,   535,   422,   541,
     444,   542,   543,   544,    12,   545,   444,   346,    16,   376,
     548,    19,   553,   534,    22,    23,   447,    25,   222,   552,
     489,   248,   346,   515,   249,   387,   515,   515,   515,   524,
     240,   505,   536,   154,   346,    43,   350,    45,   346,   172,
     499,   515,   554,   172,   521,   546,    53,   404,   491,   398,
      57,   250,   133,   449,   531,    60,   346,   512,   532,   152,
     346,   450,   462,   401,   461,   539,   444,   389,   463,   540,
       0,     0,     0,   172,   428,   429,   430,   431,   432,   433,
     434,   435,     0,    63,     0,     0,     0,     0,   436,   437,
       0,   167,   168,   332,   333,   334,   335,   287,   287,   287,
       0,   329,   340,   341,   342,   343,   344,   345,     0,     0,
       0,     0,   257,     0,     0,     0,     0,    12,   172,     0,
       0,    16,     0,   172,    19,     0,     0,    22,    23,     0,
      25,   172,     0,     0,     0,     0,     0,   280,     0,   481,
       0,     0,     0,     0,     0,   486,   450,     0,    43,   299,
      45,     0,     0,     0,     0,     0,   312,     0,     0,    53,
     498,     0,     0,    57,     0,     0,     0,     0,    60,     0,
     172,     0,   287,   287,   287,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   107,     0,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   107,    63,     0,     0,     0,
       0,   513,   226,   167,   168,   269,   270,   271,   272,     0,
       0,     0,   450,     0,     0,     0,     0,     0,     0,   481,
       0,   172,   172,   172,   172,   172,     0,   525,     0,   280,
     280,   280,     0,     0,   529,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   224,   255,     0,     0,   299,     0,
     167,   168,   256,   226,     0,   224,     0,     0,     0,     8,
     225,   167,   168,   374,   547,   375,     0,     0,   551,     0,
       0,   225,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,     0,    52,    53,    54,
      55,    56,    57,    58,    59,   172,     0,    60,    61,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   280,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   107,     0,
       0,   299,    62,     0,     0,    63,    64,     0,     0,     0,
     490,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     107,     0,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   107,     0,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   107,     0,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   107,     0,     0,     0,     0,   283,     0,
       0,     0,   284,     0,   167,   168,   280,     0,     0,     0,
       0,     0,     0,     0,   225,     0,     0,     0,     0,     0,
     224,     0,     0,  -177,   299,     0,   167,   168,     0,     0,
       0,   224,     0,     0,     0,     0,   225,   167,   168,   453,
       0,     0,   224,     0,     0,     0,     0,   225,   167,   168,
     256,     0,     0,   224,     0,     0,     0,     0,   225,   167,
     168,   478,     0,     0,     0,     0,     0,     0,     0,   225,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   107,
       0,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     107,     0,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   107,     0,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   107,   261,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   107,     0,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   107,     0,     0,     0,     0,   224,
       0,     0,     0,     0,     0,   167,   168,     0,     0,     0,
     283,     0,     0,     0,     0,   225,   167,   168,     0,     0,
       0,   359,     0,     0,     0,     0,   225,   167,   168,     0,
       0,     0,   218,     0,     0,     0,     0,   225,   167,   168,
     262,     0,   263,   166,     0,     0,     0,     0,     0,   167,
     168,   169,     0,   170,   166,     0,     0,     0,     0,     0,
     167,   168,   182,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   107,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   107,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   107,     0,     0,     0,     0,     0,    98,     0,
       0,     0,     0,   100,     0,     0,     0,   102,     0,   103,
     104,   105,     0,   106,     0,     0,     0,     0,     0,   113,
     114,   115,   116,   117,     0,     0,     0,     0,     0,     0,
       0,     0,   218,   121,     0,   123,     0,   124,   167,   168,
     219,     0,   218,     0,   132,     0,     0,     0,   167,   168,
      10,    11,   443,    13,     0,    15,     0,    17,   167,   168,
      20,     0,     0,     0,     0,     0,     0,   156,     0,    29,
       0,   178,     0,   181,     0,     0,    36,    37,    38,    39,
       0,     0,    42,     0,     0,     0,     0,    47,     0,    49,
      50,     0,     0,    52,     0,    54,    55,     0,     0,    58,
     412,   151,     0,     0,    61,   167,   168,   332,   333,   334,
     335,   336,   337,   338,   339,     0,   340,   341,   342,   343,
     344,   345,   413,     0,     0,     0,     0,   167,   168,   332,
     333,   334,   335,   336,   337,   338,   339,     0,   340,   341,
     342,   343,   344,   345,   426,     0,     0,     0,     0,   167,
     168,   332,   333,   334,   335,   336,   337,   338,   339,     0,
     340,   341,   342,   343,   344,   345,   466,     0,     0,     0,
       0,   167,   168,   332,   333,   334,   335,   336,   337,   338,
     339,     0,   340,   341,   342,   343,   344,   345,   488,     0,
       0,     0,     0,   167,   168,   332,   333,   334,   335,   336,
     337,   338,   339,     0,   340,   341,   342,   343,   344,   345,
     550,     0,     0,     0,     0,   167,   168,   332,   333,   334,
     335,   336,   337,   338,   339,     0,   340,   341,   342,   343,
     344,   345,  -178,     0,     0,   167,   168,   332,   333,   334,
     335,   336,   337,   338,   339,     0,   340,   341,   342,   343,
     344,   345,   522,     0,     0,   167,   168,   332,   333,   334,
     335,   336,   337,   338,   339,     0,   340,   341,   342,   343,
     344,   345,   167,   168,   332,   333,   334,   335,   336,   337,
     338,   339,     0,   340,   341,   342,   343,   344,   345,   167,
     168,   332,   333,   334,   335,   336,   337,     0,     0,     0,
     340,   341,   342,   343,   344,   345,   167,   168,   332,   333,
     334,   335,   336,     0,     0,     0,     0,   340,   341,   342,
     343,   344,   345,   167,   168,   332,   333,   334,   335,     0,
       0,     0,     0,     0,  -304,  -304,  -304,  -304,  -304,  -304,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   107
};

static const yytype_int16 yycheck[] =
{
      31,   102,   207,    71,   124,    31,    87,    75,   239,    64,
      91,   142,   113,   354,   283,   187,   399,    16,   386,    16,
       3,     3,    16,     8,    46,    56,     3,    99,    16,   132,
     235,    80,   186,   187,   102,    76,   156,    32,    33,    80,
     121,    16,     3,    87,     3,     7,    41,    91,    35,    44,
      16,     3,   101,    48,    84,    16,     3,     3,    80,     3,
      16,     3,    80,   194,    51,     3,    97,    98,    99,    80,
     224,   143,    59,    77,    85,   178,    80,   121,   181,    80,
     111,   112,    16,   114,    16,   166,   112,    84,   119,    77,
     171,   122,    85,     8,   175,    80,   464,    80,   179,   482,
     131,   100,    77,    80,   135,   131,    80,    80,   139,    84,
      76,   142,   284,   144,   145,    76,   219,   220,   149,    80,
      76,    80,   166,   392,   393,   394,    76,   171,    80,   283,
     284,   199,    80,    80,    80,   179,    80,   218,    80,   220,
      80,   209,    80,     8,    76,   226,   133,   352,    80,   447,
     137,    85,   357,    87,   464,   256,    76,   467,   468,   469,
     215,   101,    85,   194,    87,     0,     1,   508,    80,   200,
       5,   202,   482,    85,   218,    16,   257,   245,    82,    83,
      84,    85,    86,   264,    76,    76,   217,   268,   269,   270,
     271,   272,   273,    87,   275,    76,    76,    91,   467,   468,
     469,    80,    76,   234,   285,   359,   237,    76,    76,   507,
     241,   237,    46,    76,    89,   241,    91,    92,    78,    77,
     121,   452,    80,     3,    80,   269,   270,   271,   272,   273,
     361,    73,    77,    76,   439,    80,   317,   318,   392,   393,
     394,    77,    80,   324,    80,    76,    76,   242,   329,    77,
     331,   238,    85,    85,    82,    83,    84,    85,    86,    87,
      77,   292,    76,    80,    78,   166,    86,   348,    77,   300,
     171,    80,    80,   427,    77,   356,   124,    80,   179,   360,
      77,    80,    77,    80,   365,    80,   367,    77,    77,   443,
      80,    80,   373,    80,    78,   376,   377,   378,   379,   380,
     381,   186,   187,    84,    85,    86,   387,   155,   156,    76,
     411,   412,   356,   467,   468,   469,    16,   218,    84,    85,
      86,    78,   353,   404,    80,   356,    86,   353,    77,   373,
     361,   362,    77,    82,    83,    84,    85,    86,    87,    80,
     460,    79,   410,    80,   277,   278,   279,   428,   429,   430,
     431,   432,   433,   434,   435,   436,   437,    80,    80,    80,
     441,    80,    76,   211,   212,    83,    78,    84,   269,   270,
     271,   272,   273,    77,    80,   406,   224,   225,    77,    76,
     228,   462,    80,    82,    83,    84,    85,    86,    87,   420,
      82,    83,    84,    85,    86,   243,    72,   441,   283,   284,
     481,    80,    16,   447,   252,   486,   254,    77,    16,    77,
     441,    77,    77,    77,    23,    77,   447,   498,    27,   267,
      77,    30,    80,   502,    33,    34,   507,    36,   122,   530,
     406,   146,   513,   464,   147,   283,   467,   468,   469,   484,
     136,   441,   507,    81,   525,    54,   234,    56,   529,    87,
     420,   482,   553,    91,   477,   522,    65,   305,   409,   296,
      69,   148,    71,   507,   496,    74,   547,   458,   497,    79,
     551,   356,   373,   300,   370,   509,   507,   283,   373,   510,
      -1,    -1,    -1,   121,   332,   333,   334,   335,   336,   337,
     338,   339,    -1,   102,    -1,    -1,    -1,    -1,   346,   347,
      -1,    82,    83,    84,    85,    86,    87,   392,   393,   394,
      -1,   359,    93,    94,    95,    96,    97,    98,    -1,    -1,
      -1,    -1,   370,    -1,    -1,    -1,    -1,    23,   166,    -1,
      -1,    27,    -1,   171,    30,    -1,    -1,    33,    34,    -1,
      36,   179,    -1,    -1,    -1,    -1,    -1,   185,    -1,   397,
      -1,    -1,    -1,    -1,    -1,   403,   441,    -1,    54,   197,
      56,    -1,    -1,    -1,    -1,    -1,   204,    -1,    -1,    65,
     418,    -1,    -1,    69,    -1,    -1,    -1,    -1,    74,    -1,
     218,    -1,   467,   468,   469,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,   102,    -1,    -1,    -1,
      -1,   459,   460,    82,    83,    84,    85,    86,    87,    -1,
      -1,    -1,   507,    -1,    -1,    -1,    -1,    -1,    -1,   477,
      -1,   269,   270,   271,   272,   273,    -1,   485,    -1,   277,
     278,   279,    -1,    -1,   492,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    77,    -1,    -1,   296,    -1,
      82,    83,    84,   511,    -1,    76,    -1,    -1,    -1,     6,
      92,    82,    83,    84,   522,    86,    -1,    -1,   526,    -1,
      -1,    92,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    64,    65,    66,
      67,    68,    69,    70,    71,   373,    -1,    74,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   386,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    -1,
      -1,   399,    99,    -1,    -1,   102,   103,    -1,    -1,    -1,
     408,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    -1,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    -1,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    80,    -1,    82,    83,   464,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,
      76,    -1,    -1,    79,   482,    -1,    82,    83,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    92,    82,    83,    84,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    92,    82,    83,
      84,    -1,    -1,    76,    -1,    -1,    -1,    -1,    92,    82,
      83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    -1,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    -1,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    82,    83,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    92,    82,    83,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    92,    82,    83,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    92,    82,    83,
      84,    -1,    86,    76,    -1,    -1,    -1,    -1,    -1,    82,
      83,    84,    -1,    86,    76,    -1,    -1,    -1,    -1,    -1,
      82,    83,    84,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    -1,    -1,    -1,    -1,    -1,    15,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    24,    -1,    26,
      27,    28,    -1,    30,    -1,    -1,    -1,    -1,    -1,    36,
      37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    50,    -1,    52,    -1,    54,    82,    83,
      84,    -1,    76,    -1,    61,    -1,    -1,    -1,    82,    83,
      21,    22,    76,    24,    -1,    26,    -1,    28,    82,    83,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    40,
      -1,    88,    -1,    90,    -1,    -1,    47,    48,    49,    50,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    58,    -1,    60,
      61,    -1,    -1,    64,    -1,    66,    67,    -1,    -1,    70,
      77,    72,    -1,    -1,    75,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    -1,    93,    94,    95,    96,
      97,    98,    77,    -1,    -1,    -1,    -1,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    -1,    93,    94,
      95,    96,    97,    98,    77,    -1,    -1,    -1,    -1,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    -1,
      93,    94,    95,    96,    97,    98,    77,    -1,    -1,    -1,
      -1,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    -1,    93,    94,    95,    96,    97,    98,    77,    -1,
      -1,    -1,    -1,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    -1,    93,    94,    95,    96,    97,    98,
      77,    -1,    -1,    -1,    -1,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    -1,    93,    94,    95,    96,
      97,    98,    79,    -1,    -1,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    -1,    93,    94,    95,    96,
      97,    98,    79,    -1,    -1,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    -1,    93,    94,    95,    96,
      97,    98,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    -1,    93,    94,    95,    96,    97,    98,    82,
      83,    84,    85,    86,    87,    88,    89,    -1,    -1,    -1,
      93,    94,    95,    96,    97,    98,    82,    83,    84,    85,
      86,    87,    88,    -1,    -1,    -1,    -1,    93,    94,    95,
      96,    97,    98,    82,    83,    84,    85,    86,    87,    -1,
      -1,    -1,    -1,    -1,    93,    94,    95,    96,    97,    98,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   105,     0,     1,     5,   106,   107,     3,     6,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    64,    65,    66,    67,    68,    69,    70,    71,
      74,    75,    99,   102,   103,   108,   120,   121,   123,   124,
     125,   127,   129,   130,   131,   134,   157,   164,   183,   185,
     189,   191,   192,   194,   197,   202,   203,   204,   205,   206,
     207,   213,   214,   215,     7,   119,   199,   109,   199,   167,
     199,   135,   199,   199,   199,   199,   199,    16,   110,   111,
     167,   167,   109,   199,   199,   199,   199,   199,   167,   167,
     167,   199,   109,   199,   199,    85,    87,   111,   128,   143,
     144,   109,   199,    71,   123,    80,   101,    46,    80,   193,
      84,   126,    80,   193,    80,    80,    80,   193,    80,    85,
     165,    72,   189,   111,   174,    76,   199,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    76,    82,    83,    84,
      86,   172,   174,   178,   180,   181,   182,   209,   199,    76,
     209,   199,    84,   182,   208,   209,   209,    80,     8,   190,
     110,   112,   111,   111,   128,   147,   136,   137,     8,   156,
     193,    76,    76,   116,    76,   132,   111,   110,   156,   111,
      76,    76,    76,   158,   159,   160,   111,    76,    76,    84,
     181,   182,   112,   221,    76,    92,   170,   171,   172,   174,
     176,   178,   179,    16,    80,   110,   221,   109,    46,   111,
     137,   109,   111,   200,   147,   128,   111,   111,   132,   136,
     158,   111,    76,   175,    78,    77,    84,   170,   195,   196,
     176,    17,    84,    86,   181,   210,   211,   212,   181,    84,
      85,    86,    87,   172,   221,   181,   221,    80,    76,    80,
     174,   216,   217,    76,    80,   170,   171,   179,   218,   219,
     220,   218,    73,    76,   150,   147,    76,   148,   149,   174,
     193,   100,   111,   186,   187,   184,    77,    84,   111,   117,
     118,   133,   174,   116,   193,   155,   156,   170,   170,    76,
     123,   111,   145,   146,   181,   221,   221,    76,   113,   170,
     171,   170,    84,    85,    86,    87,    88,    89,    90,    91,
      93,    94,    95,    96,    97,    98,   172,   173,   170,    85,
     144,   116,   110,   109,   150,   139,   140,   110,   167,    76,
     170,   193,    85,   168,   169,   170,   176,   170,   156,    77,
      80,    77,    77,    80,    84,    86,   170,   181,   181,   181,
     181,   181,    77,   216,   216,   216,    80,   170,   171,   219,
     220,   218,    80,    80,    80,   111,   151,   152,   149,    80,
      85,   187,   188,    78,   170,    77,    80,    77,    80,    76,
      77,    80,    77,    77,    16,   161,   162,   163,    78,    77,
      80,    77,    16,    77,   114,   115,    77,    80,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   116,   110,
     126,    80,   101,    76,   111,   141,   142,   172,   177,   178,
     179,   116,   122,    84,   201,   147,   111,   166,    77,    80,
      79,   196,   181,   211,    80,   217,    77,    80,    80,    80,
     171,   220,   171,   220,   171,   220,    77,    80,    84,   153,
     154,   170,    80,   148,   138,    76,   170,   198,    77,   118,
     174,   155,   193,   156,   156,    77,    80,    83,   170,   146,
      78,    77,    80,   171,   116,   141,   177,    84,   150,    77,
      80,    76,   175,   170,   176,   111,   186,   171,   186,   186,
     186,   153,    79,   186,   139,   170,    80,    72,    77,   170,
      80,   162,   163,    16,   115,    77,   142,   177,   126,   201,
     111,    77,    77,    77,    77,    77,   154,   170,    77,    85,
      77,   170,   156,    80,   156
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   104,   105,   105,   106,   106,   106,   106,   106,   106,
     106,   107,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   109,   110,   111,   112,   112,   113,   113,   114,   114,
     115,   115,   116,   116,   116,   117,   117,   118,   118,   119,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   121,   121,   121,   122,   123,   124,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     126,   126,   126,   127,   127,   127,   127,   128,   128,   129,
     129,   130,   130,   131,   131,   132,   133,   133,   134,   134,
     135,   136,   137,   138,   140,   139,   139,   141,   141,   142,
     142,   142,   143,   143,   144,   144,   145,   145,   146,   147,
     148,   148,   149,   149,   150,   150,   152,   151,   151,   153,
     153,   154,   154,   155,   155,   156,   157,   157,   158,   158,
     160,   159,   161,   161,   162,   162,   163,   164,   164,   165,
     166,   166,   167,   168,   168,   169,   169,   170,   170,   170,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   172,   172,   173,   173,   173,   173,
     173,   173,   174,   174,   174,   174,   175,   176,   176,   177,
     177,   178,   178,   178,   178,   178,   178,   178,   179,   180,
     180,   180,   181,   181,   182,   182,   182,   182,   182,   182,
     182,   182,   183,   183,   183,   183,   183,   183,   184,   183,
     183,   183,   185,   186,   187,   188,   187,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   190,   191,
     192,   192,   192,   192,   193,   193,   194,   195,   195,   196,
     196,   197,   197,   198,   198,   199,   200,   201,   202,   203,
     203,   203,   203,   203,   203,   203,   203,   203,   203,   203,
     203,   203,   203,   203,   204,   205,   205,   205,   206,   207,
     207,   207,   208,   208,   209,   209,   210,   210,   211,   211,
     211,   211,   211,   211,   212,   213,   214,   215,   215,   216,
     216,   217,   217,   218,   218,   218,   219,   219,   219,   219,
     219,   219,   220,   220,   220,   220,   220,   221
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     3,     2,     2,     2,     3,     3,     2,
       1,     1,     3,     4,     3,     4,     5,     4,     5,     6,
       3,     0,     1,     1,     0,     1,     2,     3,     1,     3,
       1,     3,     0,     2,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     5,     7,     5,     5,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     4,     6,     3,     4,     5,     3,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     3,
       0,     6,     0,     0,     0,     2,     3,     1,     3,     1,
       2,     1,     1,     3,     1,     1,     1,     3,     3,     2,
       1,     5,     1,     3,     0,     3,     0,     2,     3,     1,
       3,     1,     1,     1,     3,     1,     3,     3,     4,     1,
       0,     2,     1,     3,     1,     3,     1,     1,     2,     4,
       1,     3,     0,     0,     1,     1,     3,     1,     3,     1,
       1,     1,     3,     3,     3,     3,     2,     3,     3,     3,
       3,     3,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     4,     5,     5,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     1,
       1,     1,     1,     3,     1,     1,     3,     3,     3,     3,
       2,     3,     1,     5,     4,     1,     2,     2,     0,     7,
       2,     2,     5,     3,     1,     0,     5,     4,     5,     2,
       1,     1,    10,     1,     3,     4,     3,     3,     1,     1,
       3,     3,     7,     7,     0,     1,     3,     1,     3,     1,
       2,     1,     1,     1,     3,     0,     0,     0,     1,     2,
       2,     2,     2,     2,     2,     2,     3,     4,     4,     2,
       3,     4,     1,     3,     3,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     3,     3,     1,     3,     1,     1,
       1,     2,     2,     2,     1,     3,     3,     4,     4,     1,
       3,     1,     5,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     1,     3,     5,     5,     5,     0
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
int yydebug = 1;
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
  case 4: /* stat: thislabel entry  */
#line 223 "gram.in"
                {
/* stat:   is the nonterminal for Fortran statements */

		  lastwasbranch = NO; }
#line 2168 "y.tab.c"
    break;

  case 6: /* stat: thislabel exec  */
#line 229 "gram.in"
                { /* forbid further statement function definitions... */
		  if (parstate == INDATA && laststfcn != thisstno)
			parstate = INEXEC;
		  thisstno++;
		  if((yyvsp[-1].labval) && ((yyvsp[-1].labval)->labelno==dorange))
			enddo((yyvsp[-1].labval)->labelno);
		  if(lastwasbranch && thislabel==NULL)
			warn("statement cannot be reached");
		  lastwasbranch = thiswasbranch;
		  thiswasbranch = NO;
		  if((yyvsp[-1].labval))
			{
			if((yyvsp[-1].labval)->labtype == LABFORMAT)
				err("label already that of a format");
			else
				(yyvsp[-1].labval)->labtype = LABEXEC;
			}
		  freetemps();
		}
#line 2192 "y.tab.c"
    break;

  case 7: /* stat: thislabel SINCLUDE filename  */
#line 249 "gram.in"
                { if (can_include)
			doinclude( (yyvsp[0].charpval) );
		  else {
			fprintf(diagfile, "Cannot open file %s\n", (yyvsp[0].charpval));
			done(1);
			}
		}
#line 2204 "y.tab.c"
    break;

  case 8: /* stat: thislabel SEND end_spec  */
#line 257 "gram.in"
                { if ((yyvsp[-2].labval))
			lastwasbranch = NO;
		  endcheck();
		  endproc(); /* lastwasbranch = NO; -- set in endproc() */
		}
#line 2214 "y.tab.c"
    break;

  case 9: /* stat: thislabel SUNKNOWN  */
#line 263 "gram.in"
                { unclassifiable();

/* flline flushes the current line, ignoring the rest of the text there */

		  flline(); }
#line 2224 "y.tab.c"
    break;

  case 10: /* stat: error  */
#line 269 "gram.in"
                { flline();  needkwd = NO;  inioctl = NO;
		  yyerrok; yyclearin; }
#line 2231 "y.tab.c"
    break;

  case 11: /* thislabel: SLABEL  */
#line 274 "gram.in"
                {
		if(yystno != 0)
			{
			(yyval.labval) = thislabel =  mklabel(yystno);
			if( ! headerdone ) {
				if (procclass == CLUNKNOWN)
					procclass = CLMAIN;
				puthead(CNULL, procclass);
				}
			if(thislabel->labdefined)
				execerr("label %s already defined",
					convic(thislabel->stateno) );
			else	{
				if(thislabel->blklevel!=0 && thislabel->blklevel<blklevel
				    && thislabel->labtype!=LABFORMAT)
					warn1("there is a branch to label %s from outside block",
					      convic( (ftnint) (thislabel->stateno) ) );
				thislabel->blklevel = blklevel;
				thislabel->labdefined = YES;
				if(thislabel->labtype != LABFORMAT)
					p1_label((long)(thislabel - labeltab));
				}
			}
		else    (yyval.labval) = thislabel = NULL;
		}
#line 2261 "y.tab.c"
    break;

  case 12: /* entry: SPROGRAM new_proc progname  */
#line 302 "gram.in"
                   {startproc((yyvsp[0].extval), CLMAIN); }
#line 2267 "y.tab.c"
    break;

  case 13: /* entry: SPROGRAM new_proc progname progarglist  */
#line 304 "gram.in"
                   {	warn("ignoring arguments to main program");
			/* hashclear(); */
			startproc((yyvsp[-1].extval), CLMAIN); }
#line 2275 "y.tab.c"
    break;

  case 14: /* entry: SBLOCK new_proc progname  */
#line 308 "gram.in"
                { if((yyvsp[0].extval)) NO66("named BLOCKDATA");
		  startproc((yyvsp[0].extval), CLBLOCK); }
#line 2282 "y.tab.c"
    break;

  case 15: /* entry: SSUBROUTINE new_proc entryname arglist  */
#line 311 "gram.in"
                { entrypt(CLPROC, TYSUBR, (ftnint) 0,  (yyvsp[-1].extval), (yyvsp[0].chval), 0); }
#line 2288 "y.tab.c"
    break;

  case 16: /* entry: SRECURSIVE SSUBROUTINE new_proc entryname arglist  */
#line 313 "gram.in"
                { entrypt(CLPROC, TYSUBR, (ftnint) 0,  (yyvsp[-1].extval), (yyvsp[0].chval), 1); }
#line 2294 "y.tab.c"
    break;

  case 17: /* entry: SFUNCTION new_proc entryname arglist  */
#line 315 "gram.in"
                { entrypt(CLPROC, TYUNKNOWN, (ftnint) 0, (yyvsp[-1].extval), (yyvsp[0].chval), 0); }
#line 2300 "y.tab.c"
    break;

  case 18: /* entry: type SFUNCTION new_proc entryname arglist  */
#line 317 "gram.in"
                { entrypt(CLPROC, (yyvsp[-4].ival), varleng, (yyvsp[-1].extval), (yyvsp[0].chval), 0); }
#line 2306 "y.tab.c"
    break;

  case 19: /* entry: SRECURSIVE type SFUNCTION new_proc entryname arglist  */
#line 319 "gram.in"
                { entrypt(CLPROC, (yyvsp[-4].ival), varleng, (yyvsp[-1].extval), (yyvsp[0].chval), 1); }
#line 2312 "y.tab.c"
    break;

  case 20: /* entry: SENTRY entryname arglist  */
#line 321 "gram.in"
                 { if(parstate==OUTSIDE || procclass==CLMAIN
			|| procclass==CLBLOCK)
				execerr("misplaced entry statement", CNULL);
		  entrypt(CLENTRY, 0, (ftnint) 0, (yyvsp[-1].extval), (yyvsp[0].chval), 0);
		}
#line 2322 "y.tab.c"
    break;

  case 21: /* new_proc: %empty  */
#line 329 "gram.in"
                { newproc(); }
#line 2328 "y.tab.c"
    break;

  case 22: /* entryname: name  */
#line 333 "gram.in"
                { (yyval.extval) = newentry((yyvsp[0].namval), 1); }
#line 2334 "y.tab.c"
    break;

  case 23: /* name: SNAME  */
#line 337 "gram.in"
                { (yyval.namval) = mkname(token); }
#line 2340 "y.tab.c"
    break;

  case 24: /* progname: %empty  */
#line 340 "gram.in"
                        { (yyval.extval) = NULL; }
#line 2346 "y.tab.c"
    break;

  case 32: /* arglist: %empty  */
#line 358 "gram.in"
                { (yyval.chval) = 0; }
#line 2352 "y.tab.c"
    break;

  case 33: /* arglist: SLPAR SRPAR  */
#line 360 "gram.in"
                { NO66(" () argument list");
		  (yyval.chval) = 0; }
#line 2359 "y.tab.c"
    break;

  case 34: /* arglist: SLPAR args SRPAR  */
#line 363 "gram.in"
                {(yyval.chval) = (yyvsp[-1].chval); }
#line 2365 "y.tab.c"
    break;

  case 35: /* args: arg  */
#line 367 "gram.in"
                { (yyval.chval) = ((yyvsp[0].namval) ? mkchain((char *)(yyvsp[0].namval),CHNULL) : CHNULL ); }
#line 2371 "y.tab.c"
    break;

  case 36: /* args: args SCOMMA arg  */
#line 369 "gram.in"
                { if((yyvsp[0].namval)) (yyvsp[-2].chval) = (yyval.chval) = mkchain((char *)(yyvsp[0].namval), (yyvsp[-2].chval)); }
#line 2377 "y.tab.c"
    break;

  case 37: /* arg: name  */
#line 373 "gram.in"
                { if((yyvsp[0].namval)->vstg!=STGUNKNOWN && (yyvsp[0].namval)->vstg!=STGARG)
			dclerr("name declared as argument after use", (yyvsp[0].namval));
		  (yyvsp[0].namval)->vstg = STGARG;
		}
#line 2386 "y.tab.c"
    break;

  case 38: /* arg: SSTAR  */
#line 378 "gram.in"
                { NO66("altenate return argument");

/* substars   means that '*'ed formal parameters should be replaced.
   This is used to specify alternate return labels; in theory, only
   parameter slots which have '*' should accept the statement labels.
   This compiler chooses to ignore the '*'s in the formal declaration, and
   always return the proper value anyway.

   This variable is only referred to in   proc.c   */

		  (yyval.namval) = 0;  substars = YES; }
#line 2402 "y.tab.c"
    break;

  case 39: /* filename: SHOLLERITH  */
#line 394 "gram.in"
                {
		char *s;
		s = copyn(toklen+1, token);
		s[toklen] = '\0';
		(yyval.charpval) = s;
		}
#line 2413 "y.tab.c"
    break;

  case 48: /* spec: SSAVE  */
#line 410 "gram.in"
                { NO66("SAVE statement");
		  saveall = YES; }
#line 2420 "y.tab.c"
    break;

  case 49: /* spec: SSAVE savelist  */
#line 413 "gram.in"
                { NO66("SAVE statement"); }
#line 2426 "y.tab.c"
    break;

  case 50: /* spec: SFORMAT  */
#line 415 "gram.in"
                { fmtstmt(thislabel); setfmt(thislabel); }
#line 2432 "y.tab.c"
    break;

  case 51: /* spec: SPARAM in_dcl SLPAR paramlist SRPAR  */
#line 417 "gram.in"
                { NO66("PARAMETER statement"); }
#line 2438 "y.tab.c"
    break;

  case 52: /* dcl: type opt_comma name in_dcl new_dcl dims lengspec  */
#line 421 "gram.in"
                { settype((yyvsp[-4].namval), (yyvsp[-6].ival), (yyvsp[0].lval));
		  if(ndim>0) setbound((yyvsp[-4].namval),ndim,dims);
		}
#line 2446 "y.tab.c"
    break;

  case 53: /* dcl: dcl SCOMMA name dims lengspec  */
#line 425 "gram.in"
                { settype((yyvsp[-2].namval), (yyvsp[-4].ival), (yyvsp[0].lval));
		  if(ndim>0) setbound((yyvsp[-2].namval),ndim,dims);
		}
#line 2454 "y.tab.c"
    break;

  case 54: /* dcl: dcl SSLASHD datainit vallist SSLASHD  */
#line 429 "gram.in"
                { if (new_dcl == 2) {
			err("attempt to give DATA in type-declaration");
			new_dcl = 1;
			}
		}
#line 2464 "y.tab.c"
    break;

  case 55: /* new_dcl: %empty  */
#line 436 "gram.in"
                { new_dcl = 2; }
#line 2470 "y.tab.c"
    break;

  case 56: /* type: typespec lengspec  */
#line 439 "gram.in"
                { varleng = (yyvsp[0].lval); }
#line 2476 "y.tab.c"
    break;

  case 57: /* typespec: typename  */
#line 443 "gram.in"
                { varleng = ((yyvsp[0].ival)<0 || ONEOF((yyvsp[0].ival),M(TYLOGICAL)|M(TYLONG))
				? 0 : typesize[(yyvsp[0].ival)]);
		  vartype = (yyvsp[0].ival); }
#line 2484 "y.tab.c"
    break;

  case 58: /* typename: SINTEGER  */
#line 448 "gram.in"
                        { (yyval.ival) = lasttype = TYLONG; }
#line 2490 "y.tab.c"
    break;

  case 59: /* typename: SREAL  */
#line 449 "gram.in"
                        { (yyval.ival) = lasttype = tyreal; }
#line 2496 "y.tab.c"
    break;

  case 60: /* typename: SCOMPLEX  */
#line 450 "gram.in"
                        { ++complex_seen; (yyval.ival) = lasttype = tycomplex; }
#line 2502 "y.tab.c"
    break;

  case 61: /* typename: SDOUBLE  */
#line 451 "gram.in"
                        { (yyval.ival) = lasttype = TYDREAL; }
#line 2508 "y.tab.c"
    break;

  case 62: /* typename: SDCOMPLEX  */
#line 452 "gram.in"
                        { ++dcomplex_seen; NOEXT("DOUBLE COMPLEX statement"); (yyval.ival) = lasttype = TYDCOMPLEX; }
#line 2514 "y.tab.c"
    break;

  case 63: /* typename: SLOGICAL  */
#line 453 "gram.in"
                        { (yyval.ival) = lasttype = TYLOGICAL; }
#line 2520 "y.tab.c"
    break;

  case 64: /* typename: SCHARACTER  */
#line 454 "gram.in"
                        { NO66("CHARACTER statement"); (yyval.ival) = lasttype = TYCHAR; }
#line 2526 "y.tab.c"
    break;

  case 65: /* typename: SUNDEFINED  */
#line 455 "gram.in"
                        { (yyval.ival) = TYUNKNOWN; }
#line 2532 "y.tab.c"
    break;

  case 66: /* typename: SDIMENSION  */
#line 456 "gram.in"
                        { (yyval.ival) = TYUNKNOWN; }
#line 2538 "y.tab.c"
    break;

  case 67: /* typename: SAUTOMATIC  */
#line 457 "gram.in"
                        { NOEXT("AUTOMATIC statement"); (yyval.ival) = - STGAUTO; }
#line 2544 "y.tab.c"
    break;

  case 68: /* typename: SSTATIC  */
#line 458 "gram.in"
                        { NOEXT("STATIC statement"); (yyval.ival) = - STGBSS; }
#line 2550 "y.tab.c"
    break;

  case 69: /* typename: SBYTE  */
#line 459 "gram.in"
                        { (yyval.ival) = TYINT1; }
#line 2556 "y.tab.c"
    break;

  case 70: /* lengspec: %empty  */
#line 463 "gram.in"
                { (yyval.lval) = varleng; }
#line 2562 "y.tab.c"
    break;

  case 71: /* lengspec: SSTAR intonlyon expr intonlyoff  */
#line 465 "gram.in"
                {
		expptr p;
		p = (yyvsp[-1].expval);
		NO66("length specification *n");
		if( ! ISICON(p) || p->constblock.Const.ci <= 0 )
			{
			(yyval.lval) = 0;
			dclerr("length must be a positive integer constant",
				NPNULL);
			}
		else {
			if (vartype == TYCHAR)
				(yyval.lval) = p->constblock.Const.ci;
			else switch((int)p->constblock.Const.ci) {
				case 1:	(yyval.lval) = 1; break;
				case 2: (yyval.lval) = typesize[TYSHORT];	break;
				case 4: (yyval.lval) = lasttype == TYREAL ? typesize[TYREAL] : typesize[TYLONG];
					break;
				case 8: (yyval.lval) = typesize[TYDREAL];	break;
				case 16: (yyval.lval) = typesize[TYDCOMPLEX]; break;
				default:
					dclerr("invalid length",NPNULL);
					(yyval.lval) = varleng;
				}
			}
		}
#line 2593 "y.tab.c"
    break;

  case 72: /* lengspec: SSTAR intonlyon SLPAR SSTAR SRPAR intonlyoff  */
#line 492 "gram.in"
                { NO66("length specification *(*)"); (yyval.lval) = -1; }
#line 2599 "y.tab.c"
    break;

  case 73: /* common: SCOMMON in_dcl var  */
#line 496 "gram.in"
                { incomm( (yyval.extval) = comblock("") , (yyvsp[0].namval) ); }
#line 2605 "y.tab.c"
    break;

  case 74: /* common: SCOMMON in_dcl comblock var  */
#line 498 "gram.in"
                { (yyval.extval) = (yyvsp[-1].extval);  incomm((yyvsp[-1].extval), (yyvsp[0].namval)); }
#line 2611 "y.tab.c"
    break;

  case 75: /* common: common opt_comma comblock opt_comma var  */
#line 500 "gram.in"
                { (yyval.extval) = (yyvsp[-2].extval);  incomm((yyvsp[-2].extval), (yyvsp[0].namval)); }
#line 2617 "y.tab.c"
    break;

  case 76: /* common: common SCOMMA var  */
#line 502 "gram.in"
                { incomm((yyvsp[-2].extval), (yyvsp[0].namval)); }
#line 2623 "y.tab.c"
    break;

  case 77: /* comblock: SCONCAT  */
#line 506 "gram.in"
                { (yyval.extval) = comblock(""); }
#line 2629 "y.tab.c"
    break;

  case 78: /* comblock: SSLASH SNAME SSLASH  */
#line 508 "gram.in"
                { (yyval.extval) = comblock(token); }
#line 2635 "y.tab.c"
    break;

  case 79: /* external: SEXTERNAL in_dcl name  */
#line 512 "gram.in"
                { setext((yyvsp[0].namval)); }
#line 2641 "y.tab.c"
    break;

  case 80: /* external: external SCOMMA name  */
#line 514 "gram.in"
                { setext((yyvsp[0].namval)); }
#line 2647 "y.tab.c"
    break;

  case 81: /* intrinsic: SINTRINSIC in_dcl name  */
#line 518 "gram.in"
                { NO66("INTRINSIC statement"); setintr((yyvsp[0].namval)); }
#line 2653 "y.tab.c"
    break;

  case 82: /* intrinsic: intrinsic SCOMMA name  */
#line 520 "gram.in"
                { setintr((yyvsp[0].namval)); }
#line 2659 "y.tab.c"
    break;

  case 85: /* equivset: SLPAR equivlist SRPAR  */
#line 528 "gram.in"
                {
		struct Equivblock *p;
		if(nequiv >= maxequiv)
			many("equivalences", 'q', maxequiv);
		p  =  & eqvclass[nequiv++];
		p->eqvinit = NO;
		p->eqvbottom = 0;
		p->eqvtop = 0;
		p->equivs = (yyvsp[-1].eqvval);
		}
#line 2674 "y.tab.c"
    break;

  case 86: /* equivlist: lhs  */
#line 541 "gram.in"
                { (yyval.eqvval)=ALLOC(Eqvchain);
		  (yyval.eqvval)->eqvitem.eqvlhs = primchk((yyvsp[0].expval));
		}
#line 2682 "y.tab.c"
    break;

  case 87: /* equivlist: equivlist SCOMMA lhs  */
#line 545 "gram.in"
                { (yyval.eqvval)=ALLOC(Eqvchain);
		  (yyval.eqvval)->eqvitem.eqvlhs = primchk((yyvsp[0].expval));
		  (yyval.eqvval)->eqvnextp = (yyvsp[-2].eqvval);
		}
#line 2691 "y.tab.c"
    break;

  case 90: /* in_data: %empty  */
#line 556 "gram.in"
                { if(parstate == OUTSIDE)
			{
			newproc();
			startproc(ESNULL, CLMAIN);
			}
		  if(parstate < INDATA)
			{
			enddcl();
			parstate = INDATA;
			datagripe = 1;
			}
		}
#line 2708 "y.tab.c"
    break;

  case 91: /* datalist: datainit datavarlist SSLASH datapop vallist SSLASH  */
#line 571 "gram.in"
                { ftnint junk;
		  if(nextdata(&junk) != NULL)
			err("too few initializers");
		  frdata((yyvsp[-4].chval));
		  frrpl();
		}
#line 2719 "y.tab.c"
    break;

  case 92: /* datainit: %empty  */
#line 579 "gram.in"
                        { frchain(&datastack); curdtp = 0; }
#line 2725 "y.tab.c"
    break;

  case 93: /* datapop: %empty  */
#line 581 "gram.in"
                       { pop_datastack(); }
#line 2731 "y.tab.c"
    break;

  case 94: /* $@1: %empty  */
#line 583 "gram.in"
          { toomanyinit = NO; }
#line 2737 "y.tab.c"
    break;

  case 97: /* val: value  */
#line 588 "gram.in"
                { dataval(ENULL, (yyvsp[0].expval)); }
#line 2743 "y.tab.c"
    break;

  case 98: /* val: simple SSTAR value  */
#line 590 "gram.in"
                { dataval((yyvsp[-2].expval), (yyvsp[0].expval)); }
#line 2749 "y.tab.c"
    break;

  case 100: /* value: addop simple  */
#line 595 "gram.in"
                { if( (yyvsp[-1].ival)==OPMINUS && ISCONST((yyvsp[0].expval)) )
			consnegop((Constp)(yyvsp[0].expval));
		  (yyval.expval) = (yyvsp[0].expval);
		}
#line 2758 "y.tab.c"
    break;

  case 104: /* saveitem: name  */
#line 607 "gram.in"
                { int k;
		  (yyvsp[0].namval)->vsave = YES;
		  k = (yyvsp[0].namval)->vstg;
		if( ! ONEOF(k, M(STGUNKNOWN)|M(STGBSS)|M(STGINIT)) )
			dclerr("can only save static variables", (yyvsp[0].namval));
		}
#line 2769 "y.tab.c"
    break;

  case 108: /* paramitem: name SEQUALS expr  */
#line 621 "gram.in"
                { if((yyvsp[-2].namval)->vclass == CLUNKNOWN)
			make_param((struct Paramblock *)(yyvsp[-2].namval), (yyvsp[0].expval));
		  else dclerr("cannot make into parameter", (yyvsp[-2].namval));
		}
#line 2778 "y.tab.c"
    break;

  case 109: /* var: name dims  */
#line 628 "gram.in"
                { if(ndim>0) setbound((yyvsp[-1].namval), ndim, dims); }
#line 2784 "y.tab.c"
    break;

  case 110: /* datavar: lhs  */
#line 632 "gram.in"
                { Namep np;
		  struct Primblock *pp = (struct Primblock *)(yyvsp[0].expval);
		  int tt = (yyvsp[0].expval)->tag;
		  if (tt != TPRIM) {
			if (tt == TCONST)
				err("parameter in data statement");
			else
				erri("tag %d in data statement",tt);
			(yyval.chval) = 0;
			err_lineno = lineno;
			break;
			}
		  np = pp -> namep;
		  vardcl(np);
		  if ((pp->fcharp || pp->lcharp)
		   && (np->vtype != TYCHAR || np->vdim && !pp->argsp))
			sserr(np);
		  if(np->vstg == STGCOMMON)
			extsymtab[np->vardesc.varno].extinit = YES;
		  else if(np->vstg==STGEQUIV)
			eqvclass[np->vardesc.varno].eqvinit = YES;
		  else if(np->vstg!=STGINIT && np->vstg!=STGBSS) {
			errstr(np->vstg == STGARG
				? "Dummy argument \"%.60s\" in data statement."
				: "Cannot give data to \"%.75s\"",
				np->fvarname);
			(yyval.chval) = 0;
			err_lineno = lineno;
			break;
			}
		  (yyval.chval) = mkchain((char *)(yyvsp[0].expval), CHNULL);
		}
#line 2821 "y.tab.c"
    break;

  case 111: /* datavar: SLPAR datavarlist SCOMMA dospec SRPAR  */
#line 665 "gram.in"
                { chainp p; struct Impldoblock *q;
		pop_datastack();
		q = ALLOC(Impldoblock);
		q->tag = TIMPLDO;
		(q->varnp = (Namep) ((yyvsp[-1].chval)->datap))->vimpldovar = 1;
		p = (yyvsp[-1].chval)->nextp;
		if(p)  { q->implb = (expptr)(p->datap); p = p->nextp; }
		if(p)  { q->impub = (expptr)(p->datap); p = p->nextp; }
		if(p)  { q->impstep = (expptr)(p->datap); }
		frchain( & ((yyvsp[-1].chval)) );
		(yyval.chval) = mkchain((char *)q, CHNULL);
		q->datalist = hookup((yyvsp[-3].chval), (yyval.chval));
		}
#line 2839 "y.tab.c"
    break;

  case 112: /* datavarlist: datavar  */
#line 681 "gram.in"
                { if (!datastack)
			curdtp = 0;
		  datastack = mkchain((char *)curdtp, datastack);
		  curdtp = (yyvsp[0].chval); curdtelt = 0;
		  }
#line 2849 "y.tab.c"
    break;

  case 113: /* datavarlist: datavarlist SCOMMA datavar  */
#line 687 "gram.in"
                { (yyval.chval) = hookup((yyvsp[-2].chval), (yyvsp[0].chval)); }
#line 2855 "y.tab.c"
    break;

  case 114: /* dims: %empty  */
#line 691 "gram.in"
                { ndim = 0; }
#line 2861 "y.tab.c"
    break;

  case 116: /* $@2: %empty  */
#line 695 "gram.in"
           { ndim = 0; }
#line 2867 "y.tab.c"
    break;

  case 119: /* dim: ubound  */
#line 700 "gram.in"
                {
		  if(ndim == maxdim)
			err("too many dimensions");
		  else if(ndim < maxdim)
			{ dims[ndim].lb = 0;
			  dims[ndim].ub = (yyvsp[0].expval);
			}
		  ++ndim;
		}
#line 2881 "y.tab.c"
    break;

  case 120: /* dim: expr SCOLON ubound  */
#line 710 "gram.in"
                {
		  if(ndim == maxdim)
			err("too many dimensions");
		  else if(ndim < maxdim)
			{ dims[ndim].lb = (yyvsp[-2].expval);
			  dims[ndim].ub = (yyvsp[0].expval);
			}
		  ++ndim;
		}
#line 2895 "y.tab.c"
    break;

  case 121: /* ubound: SSTAR  */
#line 722 "gram.in"
                { (yyval.expval) = 0; }
#line 2901 "y.tab.c"
    break;

  case 123: /* labellist: label  */
#line 727 "gram.in"
                { nstars = 1; labarray[0] = (yyvsp[0].labval); }
#line 2907 "y.tab.c"
    break;

  case 124: /* labellist: labellist SCOMMA label  */
#line 729 "gram.in"
                { if(nstars < maxlablist)  labarray[nstars++] = (yyvsp[0].labval); }
#line 2913 "y.tab.c"
    break;

  case 125: /* label: SICON  */
#line 733 "gram.in"
                { (yyval.labval) = execlab( convci(toklen, token) ); }
#line 2919 "y.tab.c"
    break;

  case 126: /* implicit: SIMPLICIT in_dcl implist  */
#line 737 "gram.in"
                { NO66("IMPLICIT statement"); }
#line 2925 "y.tab.c"
    break;

  case 129: /* implist: imptype  */
#line 743 "gram.in"
                { if (vartype != TYUNKNOWN)
			dclerr("-- expected letter range",NPNULL);
		  setimpl(vartype, varleng, 'a', 'z'); }
#line 2933 "y.tab.c"
    break;

  case 130: /* $@3: %empty  */
#line 748 "gram.in"
           { needkwd = 1; }
#line 2939 "y.tab.c"
    break;

  case 134: /* letgroup: letter  */
#line 757 "gram.in"
                { setimpl(vartype, varleng, (yyvsp[0].ival), (yyvsp[0].ival)); }
#line 2945 "y.tab.c"
    break;

  case 135: /* letgroup: letter SMINUS letter  */
#line 759 "gram.in"
                { setimpl(vartype, varleng, (yyvsp[-2].ival), (yyvsp[0].ival)); }
#line 2951 "y.tab.c"
    break;

  case 136: /* letter: SNAME  */
#line 763 "gram.in"
                { if(toklen!=1 || token[0]<'a' || token[0]>'z')
			{
			dclerr("implicit item must be single letter", NPNULL);
			(yyval.ival) = 0;
			}
		  else (yyval.ival) = token[0];
		}
#line 2963 "y.tab.c"
    break;

  case 139: /* namelistentry: SSLASH name SSLASH namelistlist  */
#line 777 "gram.in"
                {
		if((yyvsp[-2].namval)->vclass == CLUNKNOWN)
			{
			(yyvsp[-2].namval)->vclass = CLNAMELIST;
			(yyvsp[-2].namval)->vtype = TYINT;
			(yyvsp[-2].namval)->vstg = STGBSS;
			(yyvsp[-2].namval)->varxptr.namelist = (yyvsp[0].chval);
			(yyvsp[-2].namval)->vardesc.varno = ++lastvarno;
			}
		else dclerr("cannot be a namelist name", (yyvsp[-2].namval));
		}
#line 2979 "y.tab.c"
    break;

  case 140: /* namelistlist: name  */
#line 791 "gram.in"
                { (yyval.chval) = mkchain((char *)(yyvsp[0].namval), CHNULL); }
#line 2985 "y.tab.c"
    break;

  case 141: /* namelistlist: namelistlist SCOMMA name  */
#line 793 "gram.in"
                { (yyval.chval) = hookup((yyvsp[-2].chval), mkchain((char *)(yyvsp[0].namval), CHNULL)); }
#line 2991 "y.tab.c"
    break;

  case 142: /* in_dcl: %empty  */
#line 797 "gram.in"
                { switch(parstate)
			{
			case OUTSIDE:	newproc();
					startproc(ESNULL, CLMAIN);
			case INSIDE:	parstate = INDCL;
			case INDCL:	break;

			case INDATA:
				if (datagripe) {
					errstr(
				"Statement order error: declaration after DATA",
						CNULL);
					datagripe = 0;
					}
				break;

			default:
				dclerr("declaration among executables", NPNULL);
			}
		}
#line 3016 "y.tab.c"
    break;

  case 143: /* funarglist: %empty  */
#line 819 "gram.in"
                { (yyval.chval) = 0; }
#line 3022 "y.tab.c"
    break;

  case 144: /* funarglist: funargs  */
#line 821 "gram.in"
                { (yyval.chval) = revchain((yyvsp[0].chval)); }
#line 3028 "y.tab.c"
    break;

  case 145: /* funargs: expr  */
#line 825 "gram.in"
                { (yyval.chval) = mkchain((char *)(yyvsp[0].expval), CHNULL); }
#line 3034 "y.tab.c"
    break;

  case 146: /* funargs: funargs SCOMMA expr  */
#line 827 "gram.in"
                { (yyval.chval) = mkchain((char *)(yyvsp[0].expval), (yyvsp[-2].chval)); }
#line 3040 "y.tab.c"
    break;

  case 148: /* expr: SLPAR expr SRPAR  */
#line 832 "gram.in"
                                { (yyval.expval) = (yyvsp[-1].expval); if ((yyval.expval)->tag == TPRIM)
					paren_used(&(yyval.expval)->primblock); }
#line 3047 "y.tab.c"
    break;

  case 152: /* uexpr: expr addop expr  */
#line 840 "gram.in"
                { (yyval.expval) = mkexpr((yyvsp[-1].ival), (yyvsp[-2].expval), (yyvsp[0].expval)); }
#line 3053 "y.tab.c"
    break;

  case 153: /* uexpr: expr SSTAR expr  */
#line 842 "gram.in"
                { (yyval.expval) = mkexpr(OPSTAR, (yyvsp[-2].expval), (yyvsp[0].expval)); }
#line 3059 "y.tab.c"
    break;

  case 154: /* uexpr: expr SSLASH expr  */
#line 844 "gram.in"
                { (yyval.expval) = mkexpr(OPSLASH, (yyvsp[-2].expval), (yyvsp[0].expval)); }
#line 3065 "y.tab.c"
    break;

  case 155: /* uexpr: expr SPOWER expr  */
#line 846 "gram.in"
                { (yyval.expval) = mkexpr(OPPOWER, (yyvsp[-2].expval), (yyvsp[0].expval)); }
#line 3071 "y.tab.c"
    break;

  case 156: /* uexpr: addop expr  */
#line 848 "gram.in"
                { if((yyvsp[-1].ival) == OPMINUS)
			(yyval.expval) = mkexpr(OPNEG, (yyvsp[0].expval), ENULL);
		  else {
			(yyval.expval) = (yyvsp[0].expval);
			if ((yyval.expval)->tag == TPRIM)
				paren_used(&(yyval.expval)->primblock);
			}
		}
#line 3084 "y.tab.c"
    break;

  case 157: /* uexpr: expr relop expr  */
#line 857 "gram.in"
                { (yyval.expval) = mkexpr((yyvsp[-1].ival), (yyvsp[-2].expval), (yyvsp[0].expval)); }
#line 3090 "y.tab.c"
    break;

  case 158: /* uexpr: expr SEQV expr  */
#line 859 "gram.in"
                { NO66(".EQV. operator");
		  (yyval.expval) = mkexpr(OPEQV, (yyvsp[-2].expval),(yyvsp[0].expval)); }
#line 3097 "y.tab.c"
    break;

  case 159: /* uexpr: expr SNEQV expr  */
#line 862 "gram.in"
                { NO66(".NEQV. operator");
		  (yyval.expval) = mkexpr(OPNEQV, (yyvsp[-2].expval), (yyvsp[0].expval)); }
#line 3104 "y.tab.c"
    break;

  case 160: /* uexpr: expr SOR expr  */
#line 865 "gram.in"
                { (yyval.expval) = mkexpr(OPOR, (yyvsp[-2].expval), (yyvsp[0].expval)); }
#line 3110 "y.tab.c"
    break;

  case 161: /* uexpr: expr SAND expr  */
#line 867 "gram.in"
                { (yyval.expval) = mkexpr(OPAND, (yyvsp[-2].expval), (yyvsp[0].expval)); }
#line 3116 "y.tab.c"
    break;

  case 162: /* uexpr: SNOT expr  */
#line 869 "gram.in"
                { (yyval.expval) = mkexpr(OPNOT, (yyvsp[0].expval), ENULL); }
#line 3122 "y.tab.c"
    break;

  case 163: /* uexpr: expr SCONCAT expr  */
#line 871 "gram.in"
                { NO66("concatenation operator //");
		  (yyval.expval) = mkexpr(OPCONCAT, (yyvsp[-2].expval), (yyvsp[0].expval)); }
#line 3129 "y.tab.c"
    break;

  case 164: /* addop: SPLUS  */
#line 875 "gram.in"
                        { (yyval.ival) = OPPLUS; }
#line 3135 "y.tab.c"
    break;

  case 165: /* addop: SMINUS  */
#line 876 "gram.in"
                        { (yyval.ival) = OPMINUS; }
#line 3141 "y.tab.c"
    break;

  case 166: /* relop: SEQ  */
#line 879 "gram.in"
                { (yyval.ival) = OPEQ; }
#line 3147 "y.tab.c"
    break;

  case 167: /* relop: SGT  */
#line 880 "gram.in"
                { (yyval.ival) = OPGT; }
#line 3153 "y.tab.c"
    break;

  case 168: /* relop: SLT  */
#line 881 "gram.in"
                { (yyval.ival) = OPLT; }
#line 3159 "y.tab.c"
    break;

  case 169: /* relop: SGE  */
#line 882 "gram.in"
                { (yyval.ival) = OPGE; }
#line 3165 "y.tab.c"
    break;

  case 170: /* relop: SLE  */
#line 883 "gram.in"
                { (yyval.ival) = OPLE; }
#line 3171 "y.tab.c"
    break;

  case 171: /* relop: SNE  */
#line 884 "gram.in"
                { (yyval.ival) = OPNE; }
#line 3177 "y.tab.c"
    break;

  case 172: /* lhs: name  */
#line 888 "gram.in"
                { (yyval.expval) = mkprim((yyvsp[0].namval), LBNULL, CHNULL); }
#line 3183 "y.tab.c"
    break;

  case 173: /* lhs: name substring  */
#line 890 "gram.in"
                { NO66("substring operator :");
		  (yyval.expval) = mkprim((yyvsp[-1].namval), LBNULL, (yyvsp[0].chval)); }
#line 3190 "y.tab.c"
    break;

  case 174: /* lhs: name SLPAR funarglist SRPAR  */
#line 893 "gram.in"
                { (yyval.expval) = mkprim((yyvsp[-3].namval), mklist((yyvsp[-1].chval)), CHNULL); }
#line 3196 "y.tab.c"
    break;

  case 175: /* lhs: name SLPAR funarglist SRPAR substring  */
#line 895 "gram.in"
                { NO66("substring operator :");
		  (yyval.expval) = mkprim((yyvsp[-4].namval), mklist((yyvsp[-2].chval)), (yyvsp[0].chval)); }
#line 3203 "y.tab.c"
    break;

  case 176: /* substring: SLPAR opt_expr SCOLON opt_expr SRPAR  */
#line 900 "gram.in"
                { (yyval.chval) = mkchain((char *)(yyvsp[-3].expval), mkchain((char *)(yyvsp[-1].expval),CHNULL)); }
#line 3209 "y.tab.c"
    break;

  case 177: /* opt_expr: %empty  */
#line 904 "gram.in"
                { (yyval.expval) = 0; }
#line 3215 "y.tab.c"
    break;

  case 179: /* simple: name  */
#line 909 "gram.in"
                { if((yyvsp[0].namval)->vclass == CLPARAM)
			(yyval.expval) = (expptr) cpexpr(
				( (struct Paramblock *) ((yyvsp[0].namval)) ) -> paramval);
		}
#line 3224 "y.tab.c"
    break;

  case 181: /* simple_const: STRUE  */
#line 916 "gram.in"
                        { (yyval.expval) = mklogcon(1); }
#line 3230 "y.tab.c"
    break;

  case 182: /* simple_const: SFALSE  */
#line 917 "gram.in"
                        { (yyval.expval) = mklogcon(0); }
#line 3236 "y.tab.c"
    break;

  case 183: /* simple_const: SHOLLERITH  */
#line 918 "gram.in"
                      { (yyval.expval) = mkstrcon(toklen, token); }
#line 3242 "y.tab.c"
    break;

  case 184: /* simple_const: SICON  */
#line 919 "gram.in"
                { (yyval.expval) = mkintqcon(toklen, token); }
#line 3248 "y.tab.c"
    break;

  case 185: /* simple_const: SRCON  */
#line 920 "gram.in"
                { (yyval.expval) = mkrealcon(tyreal, token); }
#line 3254 "y.tab.c"
    break;

  case 186: /* simple_const: SDCON  */
#line 921 "gram.in"
                { (yyval.expval) = mkrealcon(TYDREAL, token); }
#line 3260 "y.tab.c"
    break;

  case 188: /* complex_const: SLPAR uexpr SCOMMA uexpr SRPAR  */
#line 926 "gram.in"
                { (yyval.expval) = mkcxcon((yyvsp[-3].expval),(yyvsp[-1].expval)); }
#line 3266 "y.tab.c"
    break;

  case 189: /* bit_const: SHEXCON  */
#line 930 "gram.in"
                { NOEXT("hex constant");
		  (yyval.expval) = mkbitcon(4, toklen, token); }
#line 3273 "y.tab.c"
    break;

  case 190: /* bit_const: SOCTCON  */
#line 933 "gram.in"
                { NOEXT("octal constant");
		  (yyval.expval) = mkbitcon(3, toklen, token); }
#line 3280 "y.tab.c"
    break;

  case 191: /* bit_const: SBITCON  */
#line 936 "gram.in"
                { NOEXT("binary constant");
		  (yyval.expval) = mkbitcon(1, toklen, token); }
#line 3287 "y.tab.c"
    break;

  case 193: /* fexpr: SLPAR fexpr SRPAR  */
#line 942 "gram.in"
                { (yyval.expval) = (yyvsp[-1].expval); }
#line 3293 "y.tab.c"
    break;

  case 196: /* unpar_fexpr: fexpr addop fexpr  */
#line 948 "gram.in"
                { (yyval.expval) = mkexpr((yyvsp[-1].ival), (yyvsp[-2].expval), (yyvsp[0].expval)); }
#line 3299 "y.tab.c"
    break;

  case 197: /* unpar_fexpr: fexpr SSTAR fexpr  */
#line 950 "gram.in"
                { (yyval.expval) = mkexpr(OPSTAR, (yyvsp[-2].expval), (yyvsp[0].expval)); }
#line 3305 "y.tab.c"
    break;

  case 198: /* unpar_fexpr: fexpr SSLASH fexpr  */
#line 952 "gram.in"
                { (yyval.expval) = mkexpr(OPSLASH, (yyvsp[-2].expval), (yyvsp[0].expval)); }
#line 3311 "y.tab.c"
    break;

  case 199: /* unpar_fexpr: fexpr SPOWER fexpr  */
#line 954 "gram.in"
                { (yyval.expval) = mkexpr(OPPOWER, (yyvsp[-2].expval), (yyvsp[0].expval)); }
#line 3317 "y.tab.c"
    break;

  case 200: /* unpar_fexpr: addop fexpr  */
#line 956 "gram.in"
                { if((yyvsp[-1].ival) == OPMINUS)
			(yyval.expval) = mkexpr(OPNEG, (yyvsp[0].expval), ENULL);
		  else (yyval.expval) = (yyvsp[0].expval);
		}
#line 3326 "y.tab.c"
    break;

  case 201: /* unpar_fexpr: fexpr SCONCAT fexpr  */
#line 961 "gram.in"
                { NO66("concatenation operator //");
		  (yyval.expval) = mkexpr(OPCONCAT, (yyvsp[-2].expval), (yyvsp[0].expval)); }
#line 3333 "y.tab.c"
    break;

  case 203: /* exec: SDO end_spec label opt_comma dospecw  */
#line 966 "gram.in"
                {
		if((yyvsp[-2].labval)->labdefined)
			execerr("no backward DO loops", CNULL);
		(yyvsp[-2].labval)->blklevel = blklevel+1;
		exdo((yyvsp[-2].labval)->labelno, NPNULL, (yyvsp[0].chval));
		}
#line 3344 "y.tab.c"
    break;

  case 204: /* exec: SDO end_spec opt_comma dospecw  */
#line 973 "gram.in"
                {
		exdo((int)(ctls - ctlstack - 2), NPNULL, (yyvsp[0].chval));
		NOEXT("DO without label");
		}
#line 3353 "y.tab.c"
    break;

  case 205: /* exec: SENDDO  */
#line 978 "gram.in"
                { exenddo(NPNULL); }
#line 3359 "y.tab.c"
    break;

  case 206: /* exec: logif iffable  */
#line 980 "gram.in"
                { exendif();  thiswasbranch = NO; }
#line 3365 "y.tab.c"
    break;

  case 208: /* $@4: %empty  */
#line 982 "gram.in"
                                 {westart(1);}
#line 3371 "y.tab.c"
    break;

  case 209: /* exec: SELSEIF end_spec SLPAR $@4 expr SRPAR STHEN  */
#line 983 "gram.in"
                { exelif((yyvsp[-2].expval)); lastwasbranch = NO; }
#line 3377 "y.tab.c"
    break;

  case 210: /* exec: SELSE end_spec  */
#line 985 "gram.in"
                { exelse(); lastwasbranch = NO; }
#line 3383 "y.tab.c"
    break;

  case 211: /* exec: SENDIF end_spec  */
#line 987 "gram.in"
                { exendif(); lastwasbranch = NO; }
#line 3389 "y.tab.c"
    break;

  case 212: /* logif: SLOGIF end_spec SLPAR expr SRPAR  */
#line 991 "gram.in"
                { exif((yyvsp[-1].expval)); }
#line 3395 "y.tab.c"
    break;

  case 213: /* dospec: name SEQUALS exprlist  */
#line 995 "gram.in"
                { (yyval.chval) = mkchain((char *)(yyvsp[-2].namval), (yyvsp[0].chval)); }
#line 3401 "y.tab.c"
    break;

  case 215: /* $@5: %empty  */
#line 999 "gram.in"
                 {westart(0);}
#line 3407 "y.tab.c"
    break;

  case 216: /* dospecw: SWHILE $@5 SLPAR expr SRPAR  */
#line 1000 "gram.in"
                { (yyval.chval) = mkchain(CNULL, (chainp)(yyvsp[-1].expval)); }
#line 3413 "y.tab.c"
    break;

  case 217: /* iffable: let lhs SEQUALS expr  */
#line 1004 "gram.in"
                { exequals((struct Primblock *)(yyvsp[-2].expval), (yyvsp[0].expval)); }
#line 3419 "y.tab.c"
    break;

  case 218: /* iffable: SASSIGN end_spec assignlabel STO name  */
#line 1006 "gram.in"
                { exassign((yyvsp[0].namval), (yyvsp[-2].labval)); }
#line 3425 "y.tab.c"
    break;

  case 221: /* iffable: io  */
#line 1010 "gram.in"
                { inioctl = NO; }
#line 3431 "y.tab.c"
    break;

  case 222: /* iffable: SARITHIF end_spec SLPAR expr SRPAR label SCOMMA label SCOMMA label  */
#line 1012 "gram.in"
                { exarif((yyvsp[-6].expval), (yyvsp[-4].labval), (yyvsp[-2].labval), (yyvsp[0].labval));  thiswasbranch = YES; }
#line 3437 "y.tab.c"
    break;

  case 223: /* iffable: call  */
#line 1014 "gram.in"
                { excall((yyvsp[0].namval), LBNULL, 0, labarray); }
#line 3443 "y.tab.c"
    break;

  case 224: /* iffable: call SLPAR SRPAR  */
#line 1016 "gram.in"
                { excall((yyvsp[-2].namval), LBNULL, 0, labarray); }
#line 3449 "y.tab.c"
    break;

  case 225: /* iffable: call SLPAR callarglist SRPAR  */
#line 1018 "gram.in"
                { if(nstars < maxlablist)
			excall((yyvsp[-3].namval), mklist(revchain((yyvsp[-1].chval))), nstars, labarray);
		  else
			many("alternate returns", 'l', maxlablist);
		}
#line 3459 "y.tab.c"
    break;

  case 226: /* iffable: SRETURN end_spec opt_expr  */
#line 1024 "gram.in"
                { exreturn((yyvsp[0].expval));  thiswasbranch = YES; }
#line 3465 "y.tab.c"
    break;

  case 227: /* iffable: stop end_spec opt_expr  */
#line 1026 "gram.in"
                { exstop((yyvsp[-2].ival), (yyvsp[0].expval));  thiswasbranch = (yyvsp[-2].ival); }
#line 3471 "y.tab.c"
    break;

  case 228: /* assignlabel: SICON  */
#line 1030 "gram.in"
                { (yyval.labval) = mklabel( convci(toklen, token) ); }
#line 3477 "y.tab.c"
    break;

  case 229: /* let: SLET  */
#line 1034 "gram.in"
                { if(parstate == OUTSIDE)
			{
			newproc();
			startproc(ESNULL, CLMAIN);
			}
		}
#line 3488 "y.tab.c"
    break;

  case 230: /* goto: SGOTO end_spec label  */
#line 1043 "gram.in"
                { exgoto((yyvsp[0].labval));  thiswasbranch = YES; }
#line 3494 "y.tab.c"
    break;

  case 231: /* goto: SASGOTO end_spec name  */
#line 1045 "gram.in"
                { exasgoto((yyvsp[0].namval));  thiswasbranch = YES; }
#line 3500 "y.tab.c"
    break;

  case 232: /* goto: SASGOTO end_spec name opt_comma SLPAR labellist SRPAR  */
#line 1047 "gram.in"
                { exasgoto((yyvsp[-4].namval));  thiswasbranch = YES; }
#line 3506 "y.tab.c"
    break;

  case 233: /* goto: SCOMPGOTO end_spec SLPAR labellist SRPAR opt_comma expr  */
#line 1049 "gram.in"
                { if(nstars < maxlablist)
			putcmgo(putx(fixtype((yyvsp[0].expval))), nstars, labarray);
		  else
			many("labels in computed GOTO list", 'l', maxlablist);
		}
#line 3516 "y.tab.c"
    break;

  case 236: /* call: SCALL end_spec name  */
#line 1061 "gram.in"
                { nstars = 0; (yyval.namval) = (yyvsp[0].namval); }
#line 3522 "y.tab.c"
    break;

  case 237: /* callarglist: callarg  */
#line 1065 "gram.in"
                { (yyval.chval) = (yyvsp[0].expval) ? mkchain((char *)(yyvsp[0].expval),CHNULL) : CHNULL; }
#line 3528 "y.tab.c"
    break;

  case 238: /* callarglist: callarglist SCOMMA callarg  */
#line 1067 "gram.in"
                { (yyval.chval) = (yyvsp[0].expval) ? mkchain((char *)(yyvsp[0].expval), (yyvsp[-2].chval)) : (yyvsp[-2].chval); }
#line 3534 "y.tab.c"
    break;

  case 240: /* callarg: SSTAR label  */
#line 1072 "gram.in"
                { if(nstars < maxlablist) labarray[nstars++] = (yyvsp[0].labval); (yyval.expval) = 0; }
#line 3540 "y.tab.c"
    break;

  case 241: /* stop: SPAUSE  */
#line 1076 "gram.in"
                { (yyval.ival) = 0; }
#line 3546 "y.tab.c"
    break;

  case 242: /* stop: SSTOP  */
#line 1078 "gram.in"
                { (yyval.ival) = 2; }
#line 3552 "y.tab.c"
    break;

  case 243: /* exprlist: expr  */
#line 1082 "gram.in"
                { (yyval.chval) = mkchain((char *)(yyvsp[0].expval), CHNULL); }
#line 3558 "y.tab.c"
    break;

  case 244: /* exprlist: exprlist SCOMMA expr  */
#line 1084 "gram.in"
                { (yyval.chval) = hookup((yyvsp[-2].chval), mkchain((char *)(yyvsp[0].expval),CHNULL) ); }
#line 3564 "y.tab.c"
    break;

  case 245: /* end_spec: %empty  */
#line 1088 "gram.in"
                { if(parstate == OUTSIDE)
			{
			newproc();
			startproc(ESNULL, CLMAIN);
			}

/* This next statement depends on the ordering of the state table encoding */

		  if(parstate < INDATA) enddcl();
		}
#line 3579 "y.tab.c"
    break;

  case 246: /* intonlyon: %empty  */
#line 1101 "gram.in"
                { intonly = YES; }
#line 3585 "y.tab.c"
    break;

  case 247: /* intonlyoff: %empty  */
#line 1105 "gram.in"
                { intonly = NO; }
#line 3591 "y.tab.c"
    break;

  case 248: /* io: io1  */
#line 1110 "gram.in"
                { endio(); }
#line 3597 "y.tab.c"
    break;

  case 250: /* io1: iofmove unpar_fexpr  */
#line 1115 "gram.in"
                { ioclause(IOSUNIT, (yyvsp[0].expval)); endioctl(); }
#line 3603 "y.tab.c"
    break;

  case 251: /* io1: iofmove SSTAR  */
#line 1117 "gram.in"
                { ioclause(IOSUNIT, ENULL); endioctl(); }
#line 3609 "y.tab.c"
    break;

  case 252: /* io1: iofmove SPOWER  */
#line 1119 "gram.in"
                { ioclause(IOSUNIT, IOSTDERR); endioctl(); }
#line 3615 "y.tab.c"
    break;

  case 254: /* io1: read ioctl  */
#line 1122 "gram.in"
                { doio(CHNULL); }
#line 3621 "y.tab.c"
    break;

  case 255: /* io1: read infmt  */
#line 1124 "gram.in"
                { doio(CHNULL); }
#line 3627 "y.tab.c"
    break;

  case 256: /* io1: read ioctl inlist  */
#line 1126 "gram.in"
                { doio(revchain((yyvsp[0].chval))); }
#line 3633 "y.tab.c"
    break;

  case 257: /* io1: read infmt SCOMMA inlist  */
#line 1128 "gram.in"
                { doio(revchain((yyvsp[0].chval))); }
#line 3639 "y.tab.c"
    break;

  case 258: /* io1: read ioctl SCOMMA inlist  */
#line 1130 "gram.in"
                { doio(revchain((yyvsp[0].chval))); }
#line 3645 "y.tab.c"
    break;

  case 259: /* io1: write ioctl  */
#line 1132 "gram.in"
                { doio(CHNULL); }
#line 3651 "y.tab.c"
    break;

  case 260: /* io1: write ioctl outlist  */
#line 1134 "gram.in"
                { doio(revchain((yyvsp[0].chval))); }
#line 3657 "y.tab.c"
    break;

  case 261: /* io1: write ioctl SCOMMA outlist  */
#line 1136 "gram.in"
                { doio(revchain((yyvsp[0].chval))); }
#line 3663 "y.tab.c"
    break;

  case 262: /* io1: print  */
#line 1138 "gram.in"
                { doio(CHNULL); }
#line 3669 "y.tab.c"
    break;

  case 263: /* io1: print SCOMMA outlist  */
#line 1140 "gram.in"
                { doio(revchain((yyvsp[0].chval))); }
#line 3675 "y.tab.c"
    break;

  case 265: /* fmkwd: SBACKSPACE  */
#line 1147 "gram.in"
                { iostmt = IOBACKSPACE; }
#line 3681 "y.tab.c"
    break;

  case 266: /* fmkwd: SREWIND  */
#line 1149 "gram.in"
                { iostmt = IOREWIND; }
#line 3687 "y.tab.c"
    break;

  case 267: /* fmkwd: SENDFILE  */
#line 1151 "gram.in"
                { iostmt = IOENDFILE; }
#line 3693 "y.tab.c"
    break;

  case 269: /* ctlkwd: SINQUIRE  */
#line 1158 "gram.in"
                { iostmt = IOINQUIRE; }
#line 3699 "y.tab.c"
    break;

  case 270: /* ctlkwd: SOPEN  */
#line 1160 "gram.in"
                { iostmt = IOOPEN; }
#line 3705 "y.tab.c"
    break;

  case 271: /* ctlkwd: SCLOSE  */
#line 1162 "gram.in"
                { iostmt = IOCLOSE; }
#line 3711 "y.tab.c"
    break;

  case 272: /* infmt: unpar_fexpr  */
#line 1166 "gram.in"
                {
		ioclause(IOSUNIT, ENULL);
		ioclause(IOSFMT, (yyvsp[0].expval));
		endioctl();
		}
#line 3721 "y.tab.c"
    break;

  case 273: /* infmt: SSTAR  */
#line 1172 "gram.in"
                {
		ioclause(IOSUNIT, ENULL);
		ioclause(IOSFMT, ENULL);
		endioctl();
		}
#line 3731 "y.tab.c"
    break;

  case 274: /* ioctl: SLPAR fexpr SRPAR  */
#line 1180 "gram.in"
                {
		  ioclause(IOSUNIT, (yyvsp[-1].expval));
		  endioctl();
		}
#line 3740 "y.tab.c"
    break;

  case 275: /* ioctl: SLPAR ctllist SRPAR  */
#line 1185 "gram.in"
                { endioctl(); }
#line 3746 "y.tab.c"
    break;

  case 278: /* ioclause: fexpr  */
#line 1193 "gram.in"
                { ioclause(IOSPOSITIONAL, (yyvsp[0].expval)); }
#line 3752 "y.tab.c"
    break;

  case 279: /* ioclause: SSTAR  */
#line 1195 "gram.in"
                { ioclause(IOSPOSITIONAL, ENULL); }
#line 3758 "y.tab.c"
    break;

  case 280: /* ioclause: SPOWER  */
#line 1197 "gram.in"
                { ioclause(IOSPOSITIONAL, IOSTDERR); }
#line 3764 "y.tab.c"
    break;

  case 281: /* ioclause: nameeq expr  */
#line 1199 "gram.in"
                { ioclause((yyvsp[-1].ival), (yyvsp[0].expval)); }
#line 3770 "y.tab.c"
    break;

  case 282: /* ioclause: nameeq SSTAR  */
#line 1201 "gram.in"
                { ioclause((yyvsp[-1].ival), ENULL); }
#line 3776 "y.tab.c"
    break;

  case 283: /* ioclause: nameeq SPOWER  */
#line 1203 "gram.in"
                { ioclause((yyvsp[-1].ival), IOSTDERR); }
#line 3782 "y.tab.c"
    break;

  case 284: /* nameeq: SNAMEEQ  */
#line 1207 "gram.in"
                { (yyval.ival) = iocname(); }
#line 3788 "y.tab.c"
    break;

  case 285: /* read: SREAD end_spec in_ioctl  */
#line 1211 "gram.in"
                { iostmt = IOREAD; }
#line 3794 "y.tab.c"
    break;

  case 286: /* write: SWRITE end_spec in_ioctl  */
#line 1215 "gram.in"
                { iostmt = IOWRITE; }
#line 3800 "y.tab.c"
    break;

  case 287: /* print: SPRINT end_spec fexpr in_ioctl  */
#line 1219 "gram.in"
                {
		iostmt = IOWRITE;
		ioclause(IOSUNIT, ENULL);
		ioclause(IOSFMT, (yyvsp[-1].expval));
		endioctl();
		}
#line 3811 "y.tab.c"
    break;

  case 288: /* print: SPRINT end_spec SSTAR in_ioctl  */
#line 1226 "gram.in"
                {
		iostmt = IOWRITE;
		ioclause(IOSUNIT, ENULL);
		ioclause(IOSFMT, ENULL);
		endioctl();
		}
#line 3822 "y.tab.c"
    break;

  case 289: /* inlist: inelt  */
#line 1235 "gram.in"
                { (yyval.chval) = mkchain((char *)(yyvsp[0].tagval), CHNULL); }
#line 3828 "y.tab.c"
    break;

  case 290: /* inlist: inlist SCOMMA inelt  */
#line 1237 "gram.in"
                { (yyval.chval) = mkchain((char *)(yyvsp[0].tagval), (yyvsp[-2].chval)); }
#line 3834 "y.tab.c"
    break;

  case 291: /* inelt: lhs  */
#line 1241 "gram.in"
                { (yyval.tagval) = (tagptr) (yyvsp[0].expval); }
#line 3840 "y.tab.c"
    break;

  case 292: /* inelt: SLPAR inlist SCOMMA dospec SRPAR  */
#line 1243 "gram.in"
                { (yyval.tagval) = (tagptr) mkiodo((yyvsp[-1].chval),revchain((yyvsp[-3].chval))); }
#line 3846 "y.tab.c"
    break;

  case 293: /* outlist: uexpr  */
#line 1247 "gram.in"
                { (yyval.chval) = mkchain((char *)(yyvsp[0].expval), CHNULL); }
#line 3852 "y.tab.c"
    break;

  case 294: /* outlist: other  */
#line 1249 "gram.in"
                { (yyval.chval) = mkchain((char *)(yyvsp[0].tagval), CHNULL); }
#line 3858 "y.tab.c"
    break;

  case 296: /* out2: uexpr SCOMMA uexpr  */
#line 1254 "gram.in"
                { (yyval.chval) = mkchain((char *)(yyvsp[0].expval), mkchain((char *)(yyvsp[-2].expval), CHNULL) ); }
#line 3864 "y.tab.c"
    break;

  case 297: /* out2: uexpr SCOMMA other  */
#line 1256 "gram.in"
                { (yyval.chval) = mkchain((char *)(yyvsp[0].tagval), mkchain((char *)(yyvsp[-2].expval), CHNULL) ); }
#line 3870 "y.tab.c"
    break;

  case 298: /* out2: other SCOMMA uexpr  */
#line 1258 "gram.in"
                { (yyval.chval) = mkchain((char *)(yyvsp[0].expval), mkchain((char *)(yyvsp[-2].tagval), CHNULL) ); }
#line 3876 "y.tab.c"
    break;

  case 299: /* out2: other SCOMMA other  */
#line 1260 "gram.in"
                { (yyval.chval) = mkchain((char *)(yyvsp[0].tagval), mkchain((char *)(yyvsp[-2].tagval), CHNULL) ); }
#line 3882 "y.tab.c"
    break;

  case 300: /* out2: out2 SCOMMA uexpr  */
#line 1262 "gram.in"
                { (yyval.chval) = mkchain((char *)(yyvsp[0].expval), (yyvsp[-2].chval)); }
#line 3888 "y.tab.c"
    break;

  case 301: /* out2: out2 SCOMMA other  */
#line 1264 "gram.in"
                { (yyval.chval) = mkchain((char *)(yyvsp[0].tagval), (yyvsp[-2].chval)); }
#line 3894 "y.tab.c"
    break;

  case 302: /* other: complex_const  */
#line 1268 "gram.in"
                { (yyval.tagval) = (tagptr) (yyvsp[0].expval); }
#line 3900 "y.tab.c"
    break;

  case 303: /* other: SLPAR expr SRPAR  */
#line 1270 "gram.in"
                { (yyval.tagval) = (tagptr) (yyvsp[-1].expval); }
#line 3906 "y.tab.c"
    break;

  case 304: /* other: SLPAR uexpr SCOMMA dospec SRPAR  */
#line 1272 "gram.in"
                { (yyval.tagval) = (tagptr) mkiodo((yyvsp[-1].chval), mkchain((char *)(yyvsp[-3].expval), CHNULL) ); }
#line 3912 "y.tab.c"
    break;

  case 305: /* other: SLPAR other SCOMMA dospec SRPAR  */
#line 1274 "gram.in"
                { (yyval.tagval) = (tagptr) mkiodo((yyvsp[-1].chval), mkchain((char *)(yyvsp[-3].tagval), CHNULL) ); }
#line 3918 "y.tab.c"
    break;

  case 306: /* other: SLPAR out2 SCOMMA dospec SRPAR  */
#line 1276 "gram.in"
                { (yyval.tagval) = (tagptr) mkiodo((yyvsp[-1].chval), revchain((yyvsp[-3].chval))); }
#line 3924 "y.tab.c"
    break;

  case 307: /* in_ioctl: %empty  */
#line 1280 "gram.in"
                { startioctl(); }
#line 3930 "y.tab.c"
    break;


#line 3934 "y.tab.c"

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

