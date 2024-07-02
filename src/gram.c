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
# define YYDEBUG 0
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
  YYSYMBOL_recursive = 124,                /* recursive  */
  YYSYMBOL_typespec = 125,                 /* typespec  */
  YYSYMBOL_typename = 126,                 /* typename  */
  YYSYMBOL_lengspec = 127,                 /* lengspec  */
  YYSYMBOL_common = 128,                   /* common  */
  YYSYMBOL_comblock = 129,                 /* comblock  */
  YYSYMBOL_external = 130,                 /* external  */
  YYSYMBOL_intrinsic = 131,                /* intrinsic  */
  YYSYMBOL_equivalence = 132,              /* equivalence  */
  YYSYMBOL_equivset = 133,                 /* equivset  */
  YYSYMBOL_equivlist = 134,                /* equivlist  */
  YYSYMBOL_data = 135,                     /* data  */
  YYSYMBOL_in_data = 136,                  /* in_data  */
  YYSYMBOL_datalist = 137,                 /* datalist  */
  YYSYMBOL_datainit = 138,                 /* datainit  */
  YYSYMBOL_datapop = 139,                  /* datapop  */
  YYSYMBOL_vallist = 140,                  /* vallist  */
  YYSYMBOL_141_1 = 141,                    /* $@1  */
  YYSYMBOL_val = 142,                      /* val  */
  YYSYMBOL_value = 143,                    /* value  */
  YYSYMBOL_savelist = 144,                 /* savelist  */
  YYSYMBOL_saveitem = 145,                 /* saveitem  */
  YYSYMBOL_paramlist = 146,                /* paramlist  */
  YYSYMBOL_paramitem = 147,                /* paramitem  */
  YYSYMBOL_var = 148,                      /* var  */
  YYSYMBOL_datavar = 149,                  /* datavar  */
  YYSYMBOL_datavarlist = 150,              /* datavarlist  */
  YYSYMBOL_dims = 151,                     /* dims  */
  YYSYMBOL_dimlist = 152,                  /* dimlist  */
  YYSYMBOL_153_2 = 153,                    /* $@2  */
  YYSYMBOL_dim = 154,                      /* dim  */
  YYSYMBOL_ubound = 155,                   /* ubound  */
  YYSYMBOL_labellist = 156,                /* labellist  */
  YYSYMBOL_label = 157,                    /* label  */
  YYSYMBOL_implicit = 158,                 /* implicit  */
  YYSYMBOL_implist = 159,                  /* implist  */
  YYSYMBOL_imptype = 160,                  /* imptype  */
  YYSYMBOL_161_3 = 161,                    /* $@3  */
  YYSYMBOL_letgroups = 162,                /* letgroups  */
  YYSYMBOL_letgroup = 163,                 /* letgroup  */
  YYSYMBOL_letter = 164,                   /* letter  */
  YYSYMBOL_namelist = 165,                 /* namelist  */
  YYSYMBOL_namelistentry = 166,            /* namelistentry  */
  YYSYMBOL_namelistlist = 167,             /* namelistlist  */
  YYSYMBOL_in_dcl = 168,                   /* in_dcl  */
  YYSYMBOL_funarglist = 169,               /* funarglist  */
  YYSYMBOL_funargs = 170,                  /* funargs  */
  YYSYMBOL_expr = 171,                     /* expr  */
  YYSYMBOL_uexpr = 172,                    /* uexpr  */
  YYSYMBOL_addop = 173,                    /* addop  */
  YYSYMBOL_relop = 174,                    /* relop  */
  YYSYMBOL_lhs = 175,                      /* lhs  */
  YYSYMBOL_substring = 176,                /* substring  */
  YYSYMBOL_opt_expr = 177,                 /* opt_expr  */
  YYSYMBOL_simple = 178,                   /* simple  */
  YYSYMBOL_simple_const = 179,             /* simple_const  */
  YYSYMBOL_complex_const = 180,            /* complex_const  */
  YYSYMBOL_bit_const = 181,                /* bit_const  */
  YYSYMBOL_fexpr = 182,                    /* fexpr  */
  YYSYMBOL_unpar_fexpr = 183,              /* unpar_fexpr  */
  YYSYMBOL_exec = 184,                     /* exec  */
  YYSYMBOL_185_4 = 185,                    /* $@4  */
  YYSYMBOL_logif = 186,                    /* logif  */
  YYSYMBOL_dospec = 187,                   /* dospec  */
  YYSYMBOL_dospecw = 188,                  /* dospecw  */
  YYSYMBOL_189_5 = 189,                    /* $@5  */
  YYSYMBOL_iffable = 190,                  /* iffable  */
  YYSYMBOL_assignlabel = 191,              /* assignlabel  */
  YYSYMBOL_let = 192,                      /* let  */
  YYSYMBOL_goto = 193,                     /* goto  */
  YYSYMBOL_opt_comma = 194,                /* opt_comma  */
  YYSYMBOL_call = 195,                     /* call  */
  YYSYMBOL_callarglist = 196,              /* callarglist  */
  YYSYMBOL_callarg = 197,                  /* callarg  */
  YYSYMBOL_stop = 198,                     /* stop  */
  YYSYMBOL_exprlist = 199,                 /* exprlist  */
  YYSYMBOL_end_spec = 200,                 /* end_spec  */
  YYSYMBOL_intonlyon = 201,                /* intonlyon  */
  YYSYMBOL_intonlyoff = 202,               /* intonlyoff  */
  YYSYMBOL_io = 203,                       /* io  */
  YYSYMBOL_io1 = 204,                      /* io1  */
  YYSYMBOL_iofmove = 205,                  /* iofmove  */
  YYSYMBOL_fmkwd = 206,                    /* fmkwd  */
  YYSYMBOL_iofctl = 207,                   /* iofctl  */
  YYSYMBOL_ctlkwd = 208,                   /* ctlkwd  */
  YYSYMBOL_infmt = 209,                    /* infmt  */
  YYSYMBOL_ioctl = 210,                    /* ioctl  */
  YYSYMBOL_ctllist = 211,                  /* ctllist  */
  YYSYMBOL_ioclause = 212,                 /* ioclause  */
  YYSYMBOL_nameeq = 213,                   /* nameeq  */
  YYSYMBOL_read = 214,                     /* read  */
  YYSYMBOL_write = 215,                    /* write  */
  YYSYMBOL_print = 216,                    /* print  */
  YYSYMBOL_inlist = 217,                   /* inlist  */
  YYSYMBOL_inelt = 218,                    /* inelt  */
  YYSYMBOL_outlist = 219,                  /* outlist  */
  YYSYMBOL_out2 = 220,                     /* out2  */
  YYSYMBOL_other = 221,                    /* other  */
  YYSYMBOL_in_ioctl = 222                  /* in_ioctl  */
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
#define YYLAST   1461

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  104
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  119
/* YYNRULES -- Number of rules.  */
#define YYNRULES  307
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  547

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
       0,   219,   219,   220,   223,   228,   229,   249,   257,   263,
     269,   274,   302,   304,   308,   311,   313,   315,   317,   326,
     329,   333,   337,   338,   342,   343,   346,   347,   350,   351,
     355,   356,   359,   363,   365,   369,   374,   390,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   409,   411,   413,
     417,   421,   425,   433,   435,   440,   441,   444,   450,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     465,   466,   493,   497,   499,   501,   503,   507,   509,   513,
     515,   519,   521,   525,   526,   529,   542,   546,   553,   554,
     558,   572,   581,   583,   585,   585,   586,   589,   591,   595,
     596,   601,   604,   605,   608,   615,   618,   619,   622,   629,
     633,   666,   682,   688,   693,   694,   697,   697,   698,   701,
     711,   723,   725,   728,   730,   734,   738,   740,   743,   744,
     750,   750,   754,   755,   758,   760,   764,   774,   775,   778,
     792,   794,   799,   821,   822,   826,   828,   833,   834,   836,
     839,   840,   841,   843,   845,   847,   849,   858,   860,   863,
     866,   868,   870,   872,   877,   878,   881,   882,   883,   884,
     885,   886,   889,   891,   894,   896,   901,   906,   907,   910,
     915,   918,   919,   920,   921,   922,   923,   924,   927,   931,
     934,   937,   942,   943,   947,   948,   949,   951,   953,   955,
     957,   962,   966,   967,   974,   979,   981,   983,   984,   984,
     986,   988,   992,   996,  1000,  1001,  1001,  1005,  1007,  1009,
    1010,  1011,  1013,  1015,  1017,  1019,  1025,  1027,  1031,  1035,
    1044,  1046,  1048,  1050,  1058,  1059,  1062,  1066,  1068,  1072,
    1073,  1077,  1079,  1083,  1085,  1090,  1103,  1107,  1111,  1115,
    1116,  1118,  1120,  1122,  1123,  1125,  1127,  1129,  1131,  1133,
    1135,  1137,  1139,  1141,  1145,  1148,  1150,  1152,  1156,  1159,
    1161,  1163,  1167,  1173,  1181,  1186,  1190,  1191,  1194,  1196,
    1198,  1200,  1202,  1204,  1208,  1212,  1216,  1220,  1227,  1236,
    1238,  1242,  1244,  1248,  1250,  1252,  1255,  1257,  1259,  1261,
    1263,  1265,  1269,  1271,  1273,  1275,  1277,  1282
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
  "arg", "filename", "spec", "dcl", "new_dcl", "type", "recursive",
  "typespec", "typename", "lengspec", "common", "comblock", "external",
  "intrinsic", "equivalence", "equivset", "equivlist", "data", "in_data",
  "datalist", "datainit", "datapop", "vallist", "$@1", "val", "value",
  "savelist", "saveitem", "paramlist", "paramitem", "var", "datavar",
  "datavarlist", "dims", "dimlist", "$@2", "dim", "ubound", "labellist",
  "label", "implicit", "implist", "imptype", "$@3", "letgroups",
  "letgroup", "letter", "namelist", "namelistentry", "namelistlist",
  "in_dcl", "funarglist", "funargs", "expr", "uexpr", "addop", "relop",
  "lhs", "substring", "opt_expr", "simple", "simple_const",
  "complex_const", "bit_const", "fexpr", "unpar_fexpr", "exec", "$@4",
  "logif", "dospec", "dospecw", "$@5", "iffable", "assignlabel", "let",
  "goto", "opt_comma", "call", "callarglist", "callarg", "stop",
  "exprlist", "end_spec", "intonlyon", "intonlyoff", "io", "io1",
  "iofmove", "fmkwd", "iofctl", "ctlkwd", "infmt", "ioctl", "ctllist",
  "ioclause", "nameeq", "read", "write", "print", "inlist", "inelt",
  "outlist", "out2", "other", "in_ioctl", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-411)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-304)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -411,   165,  -411,  -411,  -411,    31,   832,  -411,  -411,    38,
    -411,  -411,  -411,  -411,  -411,  -411,  -411,  -411,  -411,  -411,
    -411,  -411,  -411,  -411,  -411,  -411,  -411,  -411,  -411,  -411,
    -411,    53,  -411,  -411,  -411,  -411,  -411,  -411,  -411,  -411,
    -411,  -411,  -411,  -411,  -411,  -411,  -411,  -411,  -411,  -411,
    -411,  -411,  -411,  -411,  -411,  -411,    32,  -411,  -411,  -411,
    -411,  -411,  -411,  -411,  -411,  -411,   -41,    -2,    22,    16,
    -411,    15,    80,    84,    88,    17,   105,    51,  -411,   760,
    -411,    53,  -411,    69,  -411,  -411,  -411,  1037,  -411,    70,
    -411,  1067,    70,   111,  -411,  -411,   143,    53,    53,    32,
    -411,  -411,     9,  -411,   121,  -411,  -411,  -411,   123,  -411,
     128,    53,    53,   201,    53,   132,   137,   139,  -411,    53,
     154,  1145,    53,  -411,   691,   226,  -411,  -411,  -411,   164,
    -411,  -411,    53,  -411,  -411,  -411,    53,  -411,  -411,  -411,
      53,    71,    53,    53,   128,  -411,  -411,    53,  -411,  -411,
    -411,   172,   178,   427,   691,  -411,  -411,  -411,  -411,  -411,
    -411,  -411,  -411,  -411,   987,  -411,  -411,  -411,  -411,  1155,
    -411,  -411,  -411,    96,   247,  -411,  -411,   987,  -411,  -411,
    -411,    18,   182,    59,   564,   940,  -411,   185,  -411,  -411,
    -411,   188,    53,  -411,  -411,    10,  -411,   193,    -6,  -411,
      54,  -411,    53,  -411,  -411,   123,  -411,   -19,   201,   691,
     691,  -411,   205,  1031,  -411,    53,  1155,  -411,    96,  -411,
     219,  -411,   691,   691,  1346,  -411,   691,  -411,  -411,  -411,
    -411,   234,    32,  -411,   188,  -411,    53,  -411,    53,   951,
    -411,   193,  -411,  -411,  -411,  -411,  -411,   235,   665,  -411,
     691,  -411,   201,  1346,   113,  -411,  -411,  -411,  -411,  -411,
     142,   118,  -411,   540,   236,  1155,  1155,  1155,  1155,  1155,
    -411,   184,  -411,    58,    58,    58,  -411,   243,  -411,   940,
     940,  1346,    19,    33,  -411,   253,   269,  -411,    53,  -411,
    -411,  -411,    10,  -411,   -22,  -411,    -6,  -411,   273,  -411,
    -411,   691,  -411,  -411,  -411,   126,  -411,   163,  -411,  -411,
     276,   169,  -411,  1179,  1201,   352,  -411,   292,   183,  -411,
     244,  -411,  -411,    25,  -411,  1223,   291,   511,   691,   691,
     691,   691,   691,   691,   691,   691,  -411,  -411,  -411,  -411,
    -411,  -411,   691,   691,   290,  -411,  -411,    16,     5,  1165,
     123,  -411,   123,   680,  1346,    53,    53,   301,   299,  1309,
     306,  1346,  -411,  -411,   901,    46,  -411,   987,  -411,  -411,
    1346,   236,   236,   236,   152,   261,  -411,   243,   300,   243,
      58,  1245,   307,   308,   309,  -411,   940,   940,   940,  -411,
     195,   929,   311,    10,  -411,  -411,   310,   691,  1267,  -411,
      56,  -411,    53,   201,   193,   201,   201,  -411,  -411,   200,
    -411,   316,   691,  -411,    53,  -411,   314,  -411,   202,  -411,
    -411,   691,   290,   290,   290,   256,   511,   215,  1042,  1042,
     280,  1363,  -411,  1165,  -411,   691,  -411,  -411,  -411,   347,
     317,  -411,  -411,  -411,   188,  -411,   323,  -411,  -411,  -411,
     325,   327,   691,   691,  -411,    96,  -411,    58,  -411,    35,
     940,   940,   940,    40,  -411,    50,  -411,    52,  -411,  -411,
     929,  -411,  -411,  -411,  1329,    10,  -411,  -411,   691,  1346,
     326,   335,  -411,  -411,   216,   691,  -411,   329,  -411,   352,
     352,  1346,  -411,   396,  -411,   397,   337,  -411,  -411,  1165,
      16,  -411,    53,   691,  -411,  1346,   338,    65,   339,   237,
     340,   341,   343,  -411,   929,   345,   -21,  1289,   691,  -411,
    -411,  1346,   201,  -411,  -411,  -411,  -411,  -411,  -411,  -411,
    -411,  -411,  -411,  -411,  -411,  -411,  -411,  -411,  -411,  1346,
    -411,  -411,  -411,  1346,   344,   201,  -411
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       2,     0,     1,    10,    11,     0,    55,     3,     9,     0,
     229,   245,    67,   265,    19,   245,    64,   271,   142,    60,
     245,    90,    62,    66,   245,    61,   245,   245,   245,   267,
     245,     0,   142,   142,    48,    19,   245,   245,   245,   245,
     245,   142,   269,    58,   142,    63,   137,   270,   142,   241,
     245,    19,   245,    59,   245,   266,    46,    68,   242,    65,
     245,   205,    69,    56,     4,     5,    38,   234,     0,    70,
      57,   234,    40,    41,    42,   234,    44,    45,     6,     0,
     202,     0,   220,   223,   245,   221,   248,     0,   245,     0,
     245,     0,     0,   262,    37,     7,     0,    22,     0,     0,
     219,    92,   234,   210,     0,     8,   211,    21,    30,    20,
       0,     0,     0,     0,     0,     0,     0,     0,   130,     0,
       0,     0,    22,   307,   177,     0,    77,   104,   105,    47,
     102,   307,     0,    92,    19,   235,     0,    19,   246,    54,
     235,     0,     0,     0,     0,    92,   130,     0,   138,   207,
     206,   172,     0,     0,   177,   183,   184,   185,   186,   191,
     190,   189,   181,   182,     0,   164,   165,   251,   252,     0,
     194,   195,   187,     0,   192,   249,   307,     0,   253,   307,
     273,   192,   255,   254,   259,     0,   228,     0,    23,    14,
     236,   114,     0,    73,    88,     0,   125,   234,     0,   208,
       0,    18,     0,    83,    79,    30,   230,   231,     0,     0,
       0,   126,   129,     0,    81,     0,     0,   307,   307,   192,
      12,   285,     0,     0,   178,   147,     0,   150,   226,   151,
     149,     0,     0,   286,   114,    94,     0,   142,     0,     0,
      76,   234,    80,    82,    84,    89,   127,     0,   143,   173,
       0,   224,     0,   239,     0,   237,   227,   284,   279,   280,
     278,     0,   276,     0,   200,     0,     0,     0,     0,     0,
     264,   278,   268,     0,     0,     0,   291,   256,   289,     0,
       0,     0,   147,   149,   260,   295,   294,   263,     0,   116,
     109,    74,     0,   112,     0,   110,     0,   215,     0,   214,
     204,     0,    31,    36,    35,     0,    33,     0,    86,    16,
       0,     0,   123,     0,     0,     0,   131,     0,     0,   106,
       0,   288,   287,     0,    13,     0,   147,   162,     0,     0,
       0,     0,     0,     0,     0,     0,   166,   168,   167,   170,
     169,   171,     0,     0,   156,    78,   103,    70,     0,     0,
      30,    53,    30,     0,   247,     0,     0,     0,   144,   145,
       0,   217,   240,   225,     0,   193,   275,     0,   282,   283,
     281,   197,   198,   199,   201,   196,   274,   257,     0,   258,
       0,     0,   147,     0,     0,   261,     0,     0,     0,   218,
       0,     0,     0,     0,    93,   203,     0,     0,     0,    32,
       0,    85,     0,     0,   234,     0,     0,   212,   136,     0,
     132,   134,     0,    49,     0,   193,    28,    24,     0,    26,
     148,     0,   153,   154,   155,   163,   161,   160,   159,   158,
     152,   157,    51,     0,    52,     0,   179,    95,    97,     0,
      99,   180,   101,    17,   114,    15,     0,    71,    75,   140,
     139,   174,     0,   177,   238,   278,   277,     0,   290,   148,
       0,     0,     0,   147,   297,   147,   301,   147,   299,   115,
       0,   121,   117,   119,   122,     0,   113,    94,     0,   243,
     213,     0,    34,    87,     0,     0,   124,     0,   128,     0,
       0,   108,   107,     0,    25,     0,   147,    96,   100,     0,
      70,   247,     0,   177,   175,   146,     0,   172,     0,   147,
       0,     0,     0,   118,     0,     0,     0,     0,     0,   209,
     232,   233,     0,   133,   135,    29,    27,   188,    98,    99,
      50,    72,   141,   176,   292,   304,   306,   305,   120,   122,
     111,    91,   216,   244,     0,     0,   222
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -411,  -411,  -411,  -411,  -411,   -16,   -20,   -31,   305,  -411,
    -411,   -72,  -198,  -411,    28,  -411,  -411,  -411,  -411,   220,
    -411,  -411,  -411,  -341,  -411,   -62,  -411,  -411,  -411,   313,
    -411,  -411,  -411,   315,   328,  -411,   -18,  -411,    29,   -36,
    -411,   232,  -411,    44,  -138,  -379,   173,  -230,  -411,  -411,
      -1,   -44,    72,   -90,  -411,   330,  -411,  -411,  -411,   -15,
     -13,  -411,  -411,  -411,   -17,  -411,  -411,   257,  -176,    23,
    -411,   448,    21,  -121,  -357,   -14,  -155,  -411,   -93,    66,
    -411,  -411,  -411,  -410,   177,  -411,   402,  -411,  -411,  -411,
     -70,  -411,  -411,   120,  -411,  -411,  1170,  -411,   -12,  -411,
    -411,  -411,  -411,  -411,  -411,  -411,    97,  -411,   115,  -411,
    -411,  -411,  -411,   100,  -324,  -172,   207,  -239,   -89
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     5,     6,    64,    97,   188,   151,   189,   324,
     418,   419,   201,   305,   306,    95,    65,    66,   444,    67,
      68,    69,    70,   139,    71,   128,    72,    73,    74,   203,
     307,    75,   101,   194,   195,   477,   348,   349,   437,   438,
     129,   130,   318,   319,   193,   293,   294,   290,   390,   391,
     472,   473,   311,   312,    76,   211,   212,   213,   409,   410,
     411,    77,   148,   450,    99,   357,   358,   281,   225,   226,
     343,   227,   249,   360,   440,   229,   230,   172,   173,   219,
      78,   301,    79,   299,   300,   396,    80,   187,    81,    82,
     136,    83,   254,   255,    84,   480,    96,   239,   447,    85,
      86,    87,    88,    89,    90,   182,   175,   261,   262,   263,
      91,    92,    93,   277,   278,   284,   285,   286,   221
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     109,   141,   240,   228,   347,   145,   432,   309,   282,   282,
     107,   108,   197,   287,   476,   110,   111,   196,   -39,   112,
     -43,  -272,  -293,   206,   118,   127,   107,   119,   218,   283,
     283,   120,   198,   256,     7,   122,  -302,   192,  -303,   132,
     384,   416,   233,  -296,   134,    94,   326,   508,   107,  -274,
     510,   511,   512,  -300,   291,  -298,   458,  -234,   393,   433,
     133,   135,  -274,   394,   541,   515,   109,   190,   191,   107,
     107,   260,   107,   171,   107,   107,   264,   171,   135,   241,
     204,   109,   498,   207,   271,   433,   292,   270,   214,   135,
     272,   109,   205,   137,   297,   140,   476,   135,  -272,   386,
     138,   234,   417,   382,   282,   237,   434,   171,   385,   191,
     169,   242,   243,  -302,   169,  -303,   247,   125,   236,   126,
    -296,   238,  -274,   320,   283,   283,  -274,   296,   321,   322,
    -300,   302,  -298,   458,   274,   274,   147,   310,   303,   275,
     303,   248,   529,   397,   169,   153,   177,   464,   466,   468,
     171,   186,   443,   174,   445,   171,   125,   181,   126,   530,
     142,   191,   362,   171,   143,     2,     3,   298,   144,   304,
       4,   355,   371,   372,   373,   374,   375,   326,   165,   166,
     265,   266,   267,   268,   317,   146,   178,   169,   183,   184,
     363,   185,   169,   364,   442,   366,   269,   199,   367,   200,
     169,   127,   171,   399,   202,   109,   400,   109,   208,   196,
     463,   465,   467,   209,   500,   210,   350,   448,   352,   365,
     351,   464,   466,   468,   165,   166,   265,   266,   267,   268,
     215,   283,   283,   283,   165,   166,   265,   266,   267,   169,
     401,   269,   231,   402,   232,   496,   404,   342,   248,   405,
    -250,   171,   171,   171,   171,   171,   250,   389,   288,   326,
     413,   376,   273,   414,   289,   298,   165,   166,   265,   266,
     267,   268,   469,   135,   455,   470,   342,   488,   442,   494,
     489,   315,   495,   269,   509,   465,   467,   269,   169,   169,
     169,   169,   169,   520,   269,   323,   405,   165,   166,   328,
     329,   330,   331,   332,   342,   283,   283,   283,   336,   337,
     338,   339,   340,   341,   527,   486,   487,  -296,   436,   345,
     356,   415,   267,   380,   191,   449,   165,   166,   265,   266,
     267,   268,   506,   387,   485,   441,   342,   342,   165,   166,
     328,   329,   330,   269,   442,   265,   266,   267,   342,   388,
     342,   397,   403,   171,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   107,   328,   329,   330,   342,   408,   304,
     412,   421,   439,   377,   378,   379,   330,   342,   451,   452,
     457,   224,   342,   317,   342,   453,   478,   460,   461,   462,
     169,   475,   493,   342,   269,   269,   269,   269,   269,   490,
     501,   499,   436,   503,   342,   502,   518,   519,   436,   522,
     253,   224,   525,   416,   527,   533,   534,   535,   536,   441,
     537,   342,   540,   526,   545,   441,   507,   220,   482,   507,
     507,   507,   544,   316,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   107,   507,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   546,   439,   244,   492,   516,
     245,   235,   497,   528,   346,   392,   313,   314,   436,   513,
     538,   532,   504,   395,   523,   484,   246,   524,   269,   325,
     327,   150,   456,   344,   454,   441,   383,     0,     0,   531,
       0,     0,     0,     0,     0,     0,   354,   342,     0,     0,
       0,     0,   342,   222,   251,   359,     0,   361,     0,   165,
     166,   252,     0,     0,   342,     0,     0,     0,     0,   223,
     370,     0,   439,     0,     0,     0,     0,     0,   342,   152,
       0,     0,     0,     0,     0,   170,   381,     0,     0,   170,
     342,     0,     0,     0,   342,     0,     0,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   107,     0,   398,     0,
       0,     0,   342,     0,     0,     0,   342,     0,     0,   170,
       0,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     107,     0,     0,     0,     0,   422,   423,   424,   425,   426,
     427,   428,   429,   165,   166,   328,   329,   330,   331,   430,
     431,     0,     0,     0,   336,   337,   338,   339,   340,   341,
     325,     0,   170,     0,     0,     0,   222,   170,     0,     0,
       0,   253,   165,   166,   368,   170,   369,     0,     0,     0,
       0,   276,   223,     0,     0,     0,     0,     0,     0,     0,
     279,     0,     0,   295,   280,     0,   165,   166,   474,     0,
     308,     0,     0,     0,   479,     0,   223,     0,     0,     0,
       0,     0,     0,     0,   170,     0,     0,     0,     0,   491,
       0,     0,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   107,     0,     0,     0,     0,     0,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   107,     0,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   107,     0,   505,
     224,     0,     0,   170,   170,   170,   170,   170,     0,     0,
       0,   276,   276,   276,     0,     0,     0,   474,     0,     0,
       0,     0,     0,     0,     0,   517,     0,     0,     0,     0,
     295,   222,   521,     0,  -177,     0,     0,   165,   166,     0,
       0,     0,     0,     0,     0,     0,   222,   223,     0,     0,
     224,     0,   165,   166,   446,     0,     0,   222,     0,     0,
       0,   539,   223,   165,   166,   543,     0,     0,     0,     0,
       0,    10,    11,   223,    13,     0,    15,     0,    17,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
      29,     0,     0,     0,     0,     0,     0,    36,    37,    38,
      39,     0,     0,    42,     0,   170,     0,     0,    47,     0,
      49,    50,     0,     0,    52,     0,    54,    55,   276,     0,
      58,     0,   149,     0,     0,    60,     0,     0,     8,     0,
       0,   295,     0,     0,     0,     0,     0,     0,     0,     0,
     483,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,    52,    53,    54,    55,
      56,    57,    58,     0,     0,   276,    59,    60,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   107,     0,     0,
       0,     0,     0,   295,     0,     0,     0,     0,     0,     0,
       0,    61,     0,     0,    62,    63,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   107,     0,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   107,     0,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   107,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   222,     0,     0,
       0,     0,     0,   165,   166,   252,     0,     0,     0,     0,
       0,     0,     0,   223,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   107,   257,   222,     0,     0,     0,     0,
       0,   165,   166,   471,     0,     0,   279,     0,     0,     0,
       0,   223,   165,   166,     0,     0,     0,   353,     0,     0,
       0,     0,   223,   165,   166,     0,     0,     0,     0,     0,
       0,     0,     0,   223,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   107,    12,     0,     0,     0,    16,     0,
       0,    19,     0,   216,    22,    23,     0,    25,     0,   165,
     166,   258,     0,   259,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   107,     0,    43,     0,    45,     0,     0,
       0,     0,     0,     0,     0,     0,    53,     0,     0,     0,
      57,     0,     0,     0,     0,    59,     0,     0,     0,     0,
       0,     0,     0,   164,     0,     0,     0,     0,     0,   165,
     166,   167,     0,   168,   165,   166,   328,   329,   330,   331,
     332,   333,     0,    62,     0,   336,   337,   338,   339,   340,
     341,     0,     0,   164,     0,     0,     0,     0,     0,   165,
     166,   180,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   107,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   107,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   107,     0,     0,     0,    98,     0,     0,     0,     0,
     100,     0,     0,     0,   102,     0,   103,   104,   105,     0,
     106,     0,     0,     0,     0,     0,   113,   114,   115,   116,
     117,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     121,   216,   123,     0,   124,     0,     0,   165,   166,   217,
     131,   216,     0,     0,     0,     0,     0,   165,   166,     0,
       0,   435,     0,     0,     0,     0,     0,   165,   166,     0,
       0,     0,     0,     0,   154,     0,   406,     0,   176,     0,
     179,   165,   166,   328,   329,   330,   331,   332,   333,   334,
     335,     0,   336,   337,   338,   339,   340,   341,   407,     0,
       0,     0,     0,   165,   166,   328,   329,   330,   331,   332,
     333,   334,   335,     0,   336,   337,   338,   339,   340,   341,
     420,     0,     0,     0,     0,   165,   166,   328,   329,   330,
     331,   332,   333,   334,   335,     0,   336,   337,   338,   339,
     340,   341,   459,     0,     0,     0,     0,   165,   166,   328,
     329,   330,   331,   332,   333,   334,   335,     0,   336,   337,
     338,   339,   340,   341,   481,     0,     0,     0,     0,   165,
     166,   328,   329,   330,   331,   332,   333,   334,   335,     0,
     336,   337,   338,   339,   340,   341,   542,     0,     0,     0,
       0,   165,   166,   328,   329,   330,   331,   332,   333,   334,
     335,     0,   336,   337,   338,   339,   340,   341,  -178,     0,
       0,   165,   166,   328,   329,   330,   331,   332,   333,   334,
     335,     0,   336,   337,   338,   339,   340,   341,   514,     0,
       0,   165,   166,   328,   329,   330,   331,   332,   333,   334,
     335,     0,   336,   337,   338,   339,   340,   341,   165,   166,
     328,   329,   330,   331,   332,   333,   334,   335,     0,   336,
     337,   338,   339,   340,   341,   165,   166,   328,   329,   330,
     331,     0,     0,     0,     0,     0,  -304,  -304,  -304,  -304,
    -304,  -304
};

static const yytype_int16 yycheck[] =
{
      31,    71,   140,   124,   234,    75,   347,   205,   184,   185,
      16,    31,   102,   185,   393,    32,    33,     8,     3,    35,
       3,     3,     3,   113,    41,    56,    16,    44,   121,   184,
     185,    48,   102,   154,     3,    51,     3,    99,     3,    80,
     279,    16,   131,     3,    46,     7,   222,   457,    16,     3,
     460,   461,   462,     3,   192,     3,   380,    76,    80,    80,
     101,    80,    16,    85,    85,   475,    97,    98,    99,    16,
      16,   164,    16,    87,    16,    16,   169,    91,    80,   141,
     111,   112,   439,   114,   177,    80,    76,   176,   119,    80,
     179,   122,   112,    71,   100,    80,   475,    80,    80,    80,
      84,   132,    77,   279,   280,   136,   101,   121,   280,   140,
      87,   142,   143,    80,    91,    80,   147,    85,   134,    87,
      80,   137,    76,   216,   279,   280,    80,   197,   217,   218,
      80,    77,    80,   457,    76,    76,    85,   207,    84,    80,
      84,    76,   499,    78,   121,    76,    76,   386,   387,   388,
     164,     8,   350,    87,   352,   169,    85,    91,    87,   500,
      80,   192,   252,   177,    80,     0,     1,   198,    80,   200,
       5,   241,   265,   266,   267,   268,   269,   353,    82,    83,
      84,    85,    86,    87,   215,    80,    89,   164,    91,    92,
      77,    80,   169,    80,   349,    77,   173,    76,    80,    76,
     177,   232,   216,    77,    76,   236,    80,   238,    76,     8,
     386,   387,   388,    76,   444,    76,   236,   355,   238,    77,
     237,   460,   461,   462,    82,    83,    84,    85,    86,    87,
      76,   386,   387,   388,    82,    83,    84,    85,    86,   216,
      77,   218,    16,    80,    80,   421,    77,   224,    76,    80,
       3,   265,   266,   267,   268,   269,    78,   288,    73,   435,
      77,    77,    80,    80,    76,   296,    82,    83,    84,    85,
      86,    87,    77,    80,   367,    80,   253,    77,   433,    77,
      80,    76,    80,   260,   460,   461,   462,   264,   265,   266,
     267,   268,   269,    77,   271,    76,    80,    82,    83,    84,
      85,    86,    87,    88,   281,   460,   461,   462,    93,    94,
      95,    96,    97,    98,    77,   405,   406,    80,   349,    85,
      85,    77,    86,    80,   355,   356,    82,    83,    84,    85,
      86,    87,   453,    80,   404,   349,   313,   314,    82,    83,
      84,    85,    86,   320,   499,    84,    85,    86,   325,    80,
     327,    78,    76,   367,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    84,    85,    86,   344,    16,   400,
      78,    80,   349,   273,   274,   275,    86,   354,    77,    80,
      80,   124,   359,   414,   361,    79,    76,    80,    80,    80,
     367,    80,    78,   370,   371,   372,   373,   374,   375,    83,
      77,    84,   433,    76,   381,    80,    80,    72,   439,    80,
     153,   154,    16,    16,    77,    77,    77,    77,    77,   433,
      77,   398,    77,   495,    80,   439,   457,   122,   400,   460,
     461,   462,   522,   213,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,   475,   422,   423,   424,   425,   426,
     427,   428,   429,   430,   431,   545,   433,   144,   414,   477,
     145,   133,   433,   499,   232,   292,   209,   210,   499,   470,
     514,   502,   451,   296,   489,   403,   146,   490,   455,   222,
     223,    79,   367,   226,   364,   499,   279,    -1,    -1,   501,
      -1,    -1,    -1,    -1,    -1,    -1,   239,   474,    -1,    -1,
      -1,    -1,   479,    76,    77,   248,    -1,   250,    -1,    82,
      83,    84,    -1,    -1,   491,    -1,    -1,    -1,    -1,    92,
     263,    -1,   499,    -1,    -1,    -1,    -1,    -1,   505,    81,
      -1,    -1,    -1,    -1,    -1,    87,   279,    -1,    -1,    91,
     517,    -1,    -1,    -1,   521,    -1,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    -1,   301,    -1,
      -1,    -1,   539,    -1,    -1,    -1,   543,    -1,    -1,   121,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    -1,    -1,    -1,    -1,   328,   329,   330,   331,   332,
     333,   334,   335,    82,    83,    84,    85,    86,    87,   342,
     343,    -1,    -1,    -1,    93,    94,    95,    96,    97,    98,
     353,    -1,   164,    -1,    -1,    -1,    76,   169,    -1,    -1,
      -1,   364,    82,    83,    84,   177,    86,    -1,    -1,    -1,
      -1,   183,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    -1,    -1,   195,    80,    -1,    82,    83,   391,    -1,
     202,    -1,    -1,    -1,   397,    -1,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   216,    -1,    -1,    -1,    -1,   412,
      -1,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    -1,   452,
     453,    -1,    -1,   265,   266,   267,   268,   269,    -1,    -1,
      -1,   273,   274,   275,    -1,    -1,    -1,   470,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   478,    -1,    -1,    -1,    -1,
     292,    76,   485,    -1,    79,    -1,    -1,    82,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    92,    -1,    -1,
     503,    -1,    82,    83,    84,    -1,    -1,    76,    -1,    -1,
      -1,   514,    92,    82,    83,   518,    -1,    -1,    -1,    -1,
      -1,    21,    22,    92,    24,    -1,    26,    -1,    28,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
      50,    -1,    -1,    53,    -1,   367,    -1,    -1,    58,    -1,
      60,    61,    -1,    -1,    64,    -1,    66,    67,   380,    -1,
      70,    -1,    72,    -1,    -1,    75,    -1,    -1,     6,    -1,
      -1,   393,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     402,    -1,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    -1,    64,    65,    66,    67,
      68,    69,    70,    -1,    -1,   457,    74,    75,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    -1,    -1,   475,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,    -1,    -1,   102,   103,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    82,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    92,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    76,    -1,    -1,    -1,    -1,
      -1,    82,    83,    84,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    92,    82,    83,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    92,    82,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    92,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    23,    -1,    -1,    -1,    27,    -1,
      -1,    30,    -1,    76,    33,    34,    -1,    36,    -1,    82,
      83,    84,    -1,    86,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    -1,    54,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      69,    -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    82,
      83,    84,    -1,    86,    82,    83,    84,    85,    86,    87,
      88,    89,    -1,   102,    -1,    93,    94,    95,    96,    97,
      98,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    82,
      83,    84,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    24,    -1,    26,    27,    28,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    76,    52,    -1,    54,    -1,    -1,    82,    83,    84,
      60,    76,    -1,    -1,    -1,    -1,    -1,    82,    83,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    82,    83,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    77,    -1,    88,    -1,
      90,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    -1,    93,    94,    95,    96,    97,    98,    77,    -1,
      -1,    -1,    -1,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    -1,    93,    94,    95,    96,    97,    98,
      77,    -1,    -1,    -1,    -1,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    -1,    93,    94,    95,    96,
      97,    98,    77,    -1,    -1,    -1,    -1,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    -1,    93,    94,
      95,    96,    97,    98,    77,    -1,    -1,    -1,    -1,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    -1,
      93,    94,    95,    96,    97,    98,    77,    -1,    -1,    -1,
      -1,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    -1,    93,    94,    95,    96,    97,    98,    79,    -1,
      -1,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    -1,    93,    94,    95,    96,    97,    98,    79,    -1,
      -1,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    -1,    93,    94,    95,    96,    97,    98,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    -1,    93,
      94,    95,    96,    97,    98,    82,    83,    84,    85,    86,
      87,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,    96,
      97,    98
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
      61,    62,    64,    65,    66,    67,    68,    69,    70,    74,
      75,    99,   102,   103,   108,   120,   121,   123,   124,   125,
     126,   128,   130,   131,   132,   135,   158,   165,   184,   186,
     190,   192,   193,   195,   198,   203,   204,   205,   206,   207,
     208,   214,   215,   216,     7,   119,   200,   109,   200,   168,
     200,   136,   200,   200,   200,   200,   200,    16,   110,   111,
     168,   168,   109,   200,   200,   200,   200,   200,   168,   168,
     168,   200,   109,   200,   200,    85,    87,   111,   129,   144,
     145,   200,    80,   101,    46,    80,   194,    71,    84,   127,
      80,   194,    80,    80,    80,   194,    80,    85,   166,    72,
     190,   111,   175,    76,   200,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    76,    82,    83,    84,    86,   173,
     175,   179,   181,   182,   183,   210,   200,    76,   210,   200,
      84,   183,   209,   210,   210,    80,     8,   191,   110,   112,
     111,   111,   129,   148,   137,   138,     8,   157,   194,    76,
      76,   116,    76,   133,   111,   110,   157,   111,    76,    76,
      76,   159,   160,   161,   111,    76,    76,    84,   182,   183,
     112,   222,    76,    92,   171,   172,   173,   175,   177,   179,
     180,    16,    80,   222,   111,   138,   109,   111,   109,   201,
     148,   129,   111,   111,   133,   137,   159,   111,    76,   176,
      78,    77,    84,   171,   196,   197,   177,    17,    84,    86,
     182,   211,   212,   213,   182,    84,    85,    86,    87,   173,
     222,   182,   222,    80,    76,    80,   175,   217,   218,    76,
      80,   171,   172,   180,   219,   220,   221,   219,    73,    76,
     151,   148,    76,   149,   150,   175,   194,   100,   111,   187,
     188,   185,    77,    84,   111,   117,   118,   134,   175,   116,
     194,   156,   157,   171,   171,    76,   123,   111,   146,   147,
     182,   222,   222,    76,   113,   171,   172,   171,    84,    85,
      86,    87,    88,    89,    90,    91,    93,    94,    95,    96,
      97,    98,   173,   174,   171,    85,   145,   151,   140,   141,
     110,   168,   110,    76,   171,   194,    85,   169,   170,   171,
     177,   171,   157,    77,    80,    77,    77,    80,    84,    86,
     171,   182,   182,   182,   182,   182,    77,   217,   217,   217,
      80,   171,   172,   220,   221,   219,    80,    80,    80,   111,
     152,   153,   150,    80,    85,   188,   189,    78,   171,    77,
      80,    77,    80,    76,    77,    80,    77,    77,    16,   162,
     163,   164,    78,    77,    80,    77,    16,    77,   114,   115,
      77,    80,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   127,    80,   101,    76,   111,   142,   143,   173,
     178,   179,   180,   116,   122,   116,    84,   202,   148,   111,
     167,    77,    80,    79,   197,   182,   212,    80,   218,    77,
      80,    80,    80,   172,   221,   172,   221,   172,   221,    77,
      80,    84,   154,   155,   171,    80,   149,   139,    76,   171,
     199,    77,   118,   175,   156,   194,   157,   157,    77,    80,
      83,   171,   147,    78,    77,    80,   172,   142,   178,    84,
     151,    77,    80,    76,   176,   171,   177,   111,   187,   172,
     187,   187,   187,   154,    79,   187,   140,   171,    80,    72,
      77,   171,    80,   163,   164,    16,   115,    77,   143,   178,
     127,   202,   111,    77,    77,    77,    77,    77,   155,   171,
      77,    85,    77,   171,   157,    80,   157
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   104,   105,   105,   106,   106,   106,   106,   106,   106,
     106,   107,   108,   108,   108,   108,   108,   108,   108,   109,
     110,   111,   112,   112,   113,   113,   114,   114,   115,   115,
     116,   116,   116,   117,   117,   118,   118,   119,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     121,   121,   121,   122,   123,   124,   124,   125,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     127,   127,   127,   128,   128,   128,   128,   129,   129,   130,
     130,   131,   131,   132,   132,   133,   134,   134,   135,   135,
     136,   137,   138,   139,   141,   140,   140,   142,   142,   143,
     143,   143,   144,   144,   145,   145,   146,   146,   147,   148,
     149,   149,   150,   150,   151,   151,   153,   152,   152,   154,
     154,   155,   155,   156,   156,   157,   158,   158,   159,   159,
     161,   160,   162,   162,   163,   163,   164,   165,   165,   166,
     167,   167,   168,   169,   169,   170,   170,   171,   171,   171,
     172,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   173,   173,   174,   174,   174,   174,
     174,   174,   175,   175,   175,   175,   176,   177,   177,   178,
     178,   179,   179,   179,   179,   179,   179,   179,   180,   181,
     181,   181,   182,   182,   183,   183,   183,   183,   183,   183,
     183,   183,   184,   184,   184,   184,   184,   184,   185,   184,
     184,   184,   186,   187,   188,   189,   188,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   191,   192,
     193,   193,   193,   193,   194,   194,   195,   196,   196,   197,
     197,   198,   198,   199,   199,   200,   201,   202,   203,   204,
     204,   204,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   204,   204,   204,   205,   206,   206,   206,   207,   208,
     208,   208,   209,   209,   210,   210,   211,   211,   212,   212,
     212,   212,   212,   212,   213,   214,   215,   216,   216,   217,
     217,   218,   218,   219,   219,   219,   220,   220,   220,   220,
     220,   220,   221,   221,   221,   221,   221,   222
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     3,     2,     2,     2,     3,     3,     2,
       1,     1,     3,     4,     3,     5,     4,     5,     3,     0,
       1,     1,     0,     1,     2,     3,     1,     3,     1,     3,
       0,     2,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     5,
       7,     5,     5,     0,     2,     0,     1,     1,     1,     1,
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
  case 4: /* stat: thislabel entry  */
#line 224 "gram.in"
                {
/* stat:   is the nonterminal for Fortran statements */

		  lastwasbranch = NO; }
#line 2178 "y.tab.c"
    break;

  case 6: /* stat: thislabel exec  */
#line 230 "gram.in"
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
#line 2202 "y.tab.c"
    break;

  case 7: /* stat: thislabel SINCLUDE filename  */
#line 250 "gram.in"
                { if (can_include)
			doinclude( (yyvsp[0].charpval) );
		  else {
			fprintf(diagfile, "Cannot open file %s\n", (yyvsp[0].charpval));
			done(1);
			}
		}
#line 2214 "y.tab.c"
    break;

  case 8: /* stat: thislabel SEND end_spec  */
#line 258 "gram.in"
                { if ((yyvsp[-2].labval))
			lastwasbranch = NO;
		  endcheck();
		  endproc(); /* lastwasbranch = NO; -- set in endproc() */
		}
#line 2224 "y.tab.c"
    break;

  case 9: /* stat: thislabel SUNKNOWN  */
#line 264 "gram.in"
                { unclassifiable();

/* flline flushes the current line, ignoring the rest of the text there */

		  flline(); }
#line 2234 "y.tab.c"
    break;

  case 10: /* stat: error  */
#line 270 "gram.in"
                { flline();  needkwd = NO;  inioctl = NO;
		  yyerrok; yyclearin; }
#line 2241 "y.tab.c"
    break;

  case 11: /* thislabel: SLABEL  */
#line 275 "gram.in"
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
#line 2271 "y.tab.c"
    break;

  case 12: /* entry: SPROGRAM new_proc progname  */
#line 303 "gram.in"
                   {startproc((yyvsp[0].extval), CLMAIN); }
#line 2277 "y.tab.c"
    break;

  case 13: /* entry: SPROGRAM new_proc progname progarglist  */
#line 305 "gram.in"
                   {	warn("ignoring arguments to main program");
			/* hashclear(); */
			startproc((yyvsp[-1].extval), CLMAIN); }
#line 2285 "y.tab.c"
    break;

  case 14: /* entry: SBLOCK new_proc progname  */
#line 309 "gram.in"
                { if((yyvsp[0].extval)) NO66("named BLOCKDATA");
		  startproc((yyvsp[0].extval), CLBLOCK); }
#line 2292 "y.tab.c"
    break;

  case 15: /* entry: recursive SSUBROUTINE new_proc entryname arglist  */
#line 312 "gram.in"
                { entrypt(CLPROC, TYSUBR, (ftnint) 0,  (yyvsp[-1].extval), (yyvsp[0].chval), (yyvsp[-4].isrec)); }
#line 2298 "y.tab.c"
    break;

  case 16: /* entry: SFUNCTION new_proc entryname arglist  */
#line 314 "gram.in"
                { entrypt(CLPROC, TYUNKNOWN, (ftnint) 0, (yyvsp[-1].extval), (yyvsp[0].chval), 0); }
#line 2304 "y.tab.c"
    break;

  case 17: /* entry: type SFUNCTION new_proc entryname arglist  */
#line 316 "gram.in"
                { entrypt(CLPROC, (yyvsp[-4].ival), varleng, (yyvsp[-1].extval), (yyvsp[0].chval), 0); }
#line 2310 "y.tab.c"
    break;

  case 18: /* entry: SENTRY entryname arglist  */
#line 318 "gram.in"
                 { if(parstate==OUTSIDE || procclass==CLMAIN
			|| procclass==CLBLOCK)
				execerr("misplaced entry statement", CNULL);
		  entrypt(CLENTRY, 0, (ftnint) 0, (yyvsp[-1].extval), (yyvsp[0].chval), 0);
		}
#line 2320 "y.tab.c"
    break;

  case 19: /* new_proc: %empty  */
#line 326 "gram.in"
                { newproc(); }
#line 2326 "y.tab.c"
    break;

  case 20: /* entryname: name  */
#line 330 "gram.in"
                { (yyval.extval) = newentry((yyvsp[0].namval), 1); }
#line 2332 "y.tab.c"
    break;

  case 21: /* name: SNAME  */
#line 334 "gram.in"
                { (yyval.namval) = mkname(token); }
#line 2338 "y.tab.c"
    break;

  case 22: /* progname: %empty  */
#line 337 "gram.in"
                        { (yyval.extval) = NULL; }
#line 2344 "y.tab.c"
    break;

  case 30: /* arglist: %empty  */
#line 355 "gram.in"
                { (yyval.chval) = 0; }
#line 2350 "y.tab.c"
    break;

  case 31: /* arglist: SLPAR SRPAR  */
#line 357 "gram.in"
                { NO66(" () argument list");
		  (yyval.chval) = 0; }
#line 2357 "y.tab.c"
    break;

  case 32: /* arglist: SLPAR args SRPAR  */
#line 360 "gram.in"
                {(yyval.chval) = (yyvsp[-1].chval); }
#line 2363 "y.tab.c"
    break;

  case 33: /* args: arg  */
#line 364 "gram.in"
                { (yyval.chval) = ((yyvsp[0].namval) ? mkchain((char *)(yyvsp[0].namval),CHNULL) : CHNULL ); }
#line 2369 "y.tab.c"
    break;

  case 34: /* args: args SCOMMA arg  */
#line 366 "gram.in"
                { if((yyvsp[0].namval)) (yyvsp[-2].chval) = (yyval.chval) = mkchain((char *)(yyvsp[0].namval), (yyvsp[-2].chval)); }
#line 2375 "y.tab.c"
    break;

  case 35: /* arg: name  */
#line 370 "gram.in"
                { if((yyvsp[0].namval)->vstg!=STGUNKNOWN && (yyvsp[0].namval)->vstg!=STGARG)
			dclerr("name declared as argument after use", (yyvsp[0].namval));
		  (yyvsp[0].namval)->vstg = STGARG;
		}
#line 2384 "y.tab.c"
    break;

  case 36: /* arg: SSTAR  */
#line 375 "gram.in"
                { NO66("altenate return argument");

/* substars   means that '*'ed formal parameters should be replaced.
   This is used to specify alternate return labels; in theory, only
   parameter slots which have '*' should accept the statement labels.
   This compiler chooses to ignore the '*'s in the formal declaration, and
   always return the proper value anyway.

   This variable is only referred to in   proc.c   */

		  (yyval.namval) = 0;  substars = YES; }
#line 2400 "y.tab.c"
    break;

  case 37: /* filename: SHOLLERITH  */
#line 391 "gram.in"
                {
		char *s;
		s = copyn(toklen+1, token);
		s[toklen] = '\0';
		(yyval.charpval) = s;
		}
#line 2411 "y.tab.c"
    break;

  case 46: /* spec: SSAVE  */
#line 407 "gram.in"
                { NO66("SAVE statement");
		  saveall = YES; }
#line 2418 "y.tab.c"
    break;

  case 47: /* spec: SSAVE savelist  */
#line 410 "gram.in"
                { NO66("SAVE statement"); }
#line 2424 "y.tab.c"
    break;

  case 48: /* spec: SFORMAT  */
#line 412 "gram.in"
                { fmtstmt(thislabel); setfmt(thislabel); }
#line 2430 "y.tab.c"
    break;

  case 49: /* spec: SPARAM in_dcl SLPAR paramlist SRPAR  */
#line 414 "gram.in"
                { NO66("PARAMETER statement"); }
#line 2436 "y.tab.c"
    break;

  case 50: /* dcl: type opt_comma name in_dcl new_dcl dims lengspec  */
#line 418 "gram.in"
                { settype((yyvsp[-4].namval), (yyvsp[-6].ival), (yyvsp[0].lval));
		  if(ndim>0) setbound((yyvsp[-4].namval),ndim,dims);
		}
#line 2444 "y.tab.c"
    break;

  case 51: /* dcl: dcl SCOMMA name dims lengspec  */
#line 422 "gram.in"
                { settype((yyvsp[-2].namval), (yyvsp[-4].ival), (yyvsp[0].lval));
		  if(ndim>0) setbound((yyvsp[-2].namval),ndim,dims);
		}
#line 2452 "y.tab.c"
    break;

  case 52: /* dcl: dcl SSLASHD datainit vallist SSLASHD  */
#line 426 "gram.in"
                { if (new_dcl == 2) {
			err("attempt to give DATA in type-declaration");
			new_dcl = 1;
			}
		}
#line 2462 "y.tab.c"
    break;

  case 53: /* new_dcl: %empty  */
#line 433 "gram.in"
                { new_dcl = 2; }
#line 2468 "y.tab.c"
    break;

  case 54: /* type: typespec lengspec  */
#line 436 "gram.in"
                { varleng = (yyvsp[0].lval); }
#line 2474 "y.tab.c"
    break;

  case 55: /* recursive: %empty  */
#line 440 "gram.in"
        { (yyval.isrec) = 0; }
#line 2480 "y.tab.c"
    break;

  case 56: /* recursive: SRECURSIVE  */
#line 441 "gram.in"
                     { (yyval.isrec) = 1;  needkwd = 1; }
#line 2486 "y.tab.c"
    break;

  case 57: /* typespec: typename  */
#line 445 "gram.in"
                { varleng = ((yyvsp[0].ival)<0 || ONEOF((yyvsp[0].ival),M(TYLOGICAL)|M(TYLONG))
				? 0 : typesize[(yyvsp[0].ival)]);
		  vartype = (yyvsp[0].ival); }
#line 2494 "y.tab.c"
    break;

  case 58: /* typename: SINTEGER  */
#line 450 "gram.in"
                        { (yyval.ival) = lasttype = TYLONG; }
#line 2500 "y.tab.c"
    break;

  case 59: /* typename: SREAL  */
#line 451 "gram.in"
                        { (yyval.ival) = lasttype = tyreal; }
#line 2506 "y.tab.c"
    break;

  case 60: /* typename: SCOMPLEX  */
#line 452 "gram.in"
                        { ++complex_seen; (yyval.ival) = lasttype = tycomplex; }
#line 2512 "y.tab.c"
    break;

  case 61: /* typename: SDOUBLE  */
#line 453 "gram.in"
                        { (yyval.ival) = lasttype = TYDREAL; }
#line 2518 "y.tab.c"
    break;

  case 62: /* typename: SDCOMPLEX  */
#line 454 "gram.in"
                        { ++dcomplex_seen; NOEXT("DOUBLE COMPLEX statement"); (yyval.ival) = lasttype = TYDCOMPLEX; }
#line 2524 "y.tab.c"
    break;

  case 63: /* typename: SLOGICAL  */
#line 455 "gram.in"
                        { (yyval.ival) = lasttype = TYLOGICAL; }
#line 2530 "y.tab.c"
    break;

  case 64: /* typename: SCHARACTER  */
#line 456 "gram.in"
                        { NO66("CHARACTER statement"); (yyval.ival) = lasttype = TYCHAR; }
#line 2536 "y.tab.c"
    break;

  case 65: /* typename: SUNDEFINED  */
#line 457 "gram.in"
                        { (yyval.ival) = TYUNKNOWN; }
#line 2542 "y.tab.c"
    break;

  case 66: /* typename: SDIMENSION  */
#line 458 "gram.in"
                        { (yyval.ival) = TYUNKNOWN; }
#line 2548 "y.tab.c"
    break;

  case 67: /* typename: SAUTOMATIC  */
#line 459 "gram.in"
                        { NOEXT("AUTOMATIC statement"); (yyval.ival) = - STGAUTO; }
#line 2554 "y.tab.c"
    break;

  case 68: /* typename: SSTATIC  */
#line 460 "gram.in"
                        { NOEXT("STATIC statement"); (yyval.ival) = - STGBSS; }
#line 2560 "y.tab.c"
    break;

  case 69: /* typename: SBYTE  */
#line 461 "gram.in"
                        { (yyval.ival) = TYINT1; }
#line 2566 "y.tab.c"
    break;

  case 70: /* lengspec: %empty  */
#line 465 "gram.in"
                { (yyval.lval) = varleng; }
#line 2572 "y.tab.c"
    break;

  case 71: /* lengspec: SSTAR intonlyon expr intonlyoff  */
#line 467 "gram.in"
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
#line 2603 "y.tab.c"
    break;

  case 72: /* lengspec: SSTAR intonlyon SLPAR SSTAR SRPAR intonlyoff  */
#line 494 "gram.in"
                { NO66("length specification *(*)"); (yyval.lval) = -1; }
#line 2609 "y.tab.c"
    break;

  case 73: /* common: SCOMMON in_dcl var  */
#line 498 "gram.in"
                { incomm( (yyval.extval) = comblock("") , (yyvsp[0].namval) ); }
#line 2615 "y.tab.c"
    break;

  case 74: /* common: SCOMMON in_dcl comblock var  */
#line 500 "gram.in"
                { (yyval.extval) = (yyvsp[-1].extval);  incomm((yyvsp[-1].extval), (yyvsp[0].namval)); }
#line 2621 "y.tab.c"
    break;

  case 75: /* common: common opt_comma comblock opt_comma var  */
#line 502 "gram.in"
                { (yyval.extval) = (yyvsp[-2].extval);  incomm((yyvsp[-2].extval), (yyvsp[0].namval)); }
#line 2627 "y.tab.c"
    break;

  case 76: /* common: common SCOMMA var  */
#line 504 "gram.in"
                { incomm((yyvsp[-2].extval), (yyvsp[0].namval)); }
#line 2633 "y.tab.c"
    break;

  case 77: /* comblock: SCONCAT  */
#line 508 "gram.in"
                { (yyval.extval) = comblock(""); }
#line 2639 "y.tab.c"
    break;

  case 78: /* comblock: SSLASH SNAME SSLASH  */
#line 510 "gram.in"
                { (yyval.extval) = comblock(token); }
#line 2645 "y.tab.c"
    break;

  case 79: /* external: SEXTERNAL in_dcl name  */
#line 514 "gram.in"
                { setext((yyvsp[0].namval)); }
#line 2651 "y.tab.c"
    break;

  case 80: /* external: external SCOMMA name  */
#line 516 "gram.in"
                { setext((yyvsp[0].namval)); }
#line 2657 "y.tab.c"
    break;

  case 81: /* intrinsic: SINTRINSIC in_dcl name  */
#line 520 "gram.in"
                { NO66("INTRINSIC statement"); setintr((yyvsp[0].namval)); }
#line 2663 "y.tab.c"
    break;

  case 82: /* intrinsic: intrinsic SCOMMA name  */
#line 522 "gram.in"
                { setintr((yyvsp[0].namval)); }
#line 2669 "y.tab.c"
    break;

  case 85: /* equivset: SLPAR equivlist SRPAR  */
#line 530 "gram.in"
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
#line 2684 "y.tab.c"
    break;

  case 86: /* equivlist: lhs  */
#line 543 "gram.in"
                { (yyval.eqvval)=ALLOC(Eqvchain);
		  (yyval.eqvval)->eqvitem.eqvlhs = primchk((yyvsp[0].expval));
		}
#line 2692 "y.tab.c"
    break;

  case 87: /* equivlist: equivlist SCOMMA lhs  */
#line 547 "gram.in"
                { (yyval.eqvval)=ALLOC(Eqvchain);
		  (yyval.eqvval)->eqvitem.eqvlhs = primchk((yyvsp[0].expval));
		  (yyval.eqvval)->eqvnextp = (yyvsp[-2].eqvval);
		}
#line 2701 "y.tab.c"
    break;

  case 90: /* in_data: %empty  */
#line 558 "gram.in"
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
#line 2718 "y.tab.c"
    break;

  case 91: /* datalist: datainit datavarlist SSLASH datapop vallist SSLASH  */
#line 573 "gram.in"
                { ftnint junk;
		  if(nextdata(&junk) != NULL)
			err("too few initializers");
		  frdata((yyvsp[-4].chval));
		  frrpl();
		}
#line 2729 "y.tab.c"
    break;

  case 92: /* datainit: %empty  */
#line 581 "gram.in"
                        { frchain(&datastack); curdtp = 0; }
#line 2735 "y.tab.c"
    break;

  case 93: /* datapop: %empty  */
#line 583 "gram.in"
                       { pop_datastack(); }
#line 2741 "y.tab.c"
    break;

  case 94: /* $@1: %empty  */
#line 585 "gram.in"
          { toomanyinit = NO; }
#line 2747 "y.tab.c"
    break;

  case 97: /* val: value  */
#line 590 "gram.in"
                { dataval(ENULL, (yyvsp[0].expval)); }
#line 2753 "y.tab.c"
    break;

  case 98: /* val: simple SSTAR value  */
#line 592 "gram.in"
                { dataval((yyvsp[-2].expval), (yyvsp[0].expval)); }
#line 2759 "y.tab.c"
    break;

  case 100: /* value: addop simple  */
#line 597 "gram.in"
                { if( (yyvsp[-1].ival)==OPMINUS && ISCONST((yyvsp[0].expval)) )
			consnegop((Constp)(yyvsp[0].expval));
		  (yyval.expval) = (yyvsp[0].expval);
		}
#line 2768 "y.tab.c"
    break;

  case 104: /* saveitem: name  */
#line 609 "gram.in"
                { int k;
		  (yyvsp[0].namval)->vsave = YES;
		  k = (yyvsp[0].namval)->vstg;
		if( ! ONEOF(k, M(STGUNKNOWN)|M(STGBSS)|M(STGINIT)) )
			dclerr("can only save static variables", (yyvsp[0].namval));
		}
#line 2779 "y.tab.c"
    break;

  case 108: /* paramitem: name SEQUALS expr  */
#line 623 "gram.in"
                { if((yyvsp[-2].namval)->vclass == CLUNKNOWN)
			make_param((struct Paramblock *)(yyvsp[-2].namval), (yyvsp[0].expval));
		  else dclerr("cannot make into parameter", (yyvsp[-2].namval));
		}
#line 2788 "y.tab.c"
    break;

  case 109: /* var: name dims  */
#line 630 "gram.in"
                { if(ndim>0) setbound((yyvsp[-1].namval), ndim, dims); }
#line 2794 "y.tab.c"
    break;

  case 110: /* datavar: lhs  */
#line 634 "gram.in"
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
#line 2831 "y.tab.c"
    break;

  case 111: /* datavar: SLPAR datavarlist SCOMMA dospec SRPAR  */
#line 667 "gram.in"
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
#line 2849 "y.tab.c"
    break;

  case 112: /* datavarlist: datavar  */
#line 683 "gram.in"
                { if (!datastack)
			curdtp = 0;
		  datastack = mkchain((char *)curdtp, datastack);
		  curdtp = (yyvsp[0].chval); curdtelt = 0;
		  }
#line 2859 "y.tab.c"
    break;

  case 113: /* datavarlist: datavarlist SCOMMA datavar  */
#line 689 "gram.in"
                { (yyval.chval) = hookup((yyvsp[-2].chval), (yyvsp[0].chval)); }
#line 2865 "y.tab.c"
    break;

  case 114: /* dims: %empty  */
#line 693 "gram.in"
                { ndim = 0; }
#line 2871 "y.tab.c"
    break;

  case 116: /* $@2: %empty  */
#line 697 "gram.in"
           { ndim = 0; }
#line 2877 "y.tab.c"
    break;

  case 119: /* dim: ubound  */
#line 702 "gram.in"
                {
		  if(ndim == maxdim)
			err("too many dimensions");
		  else if(ndim < maxdim)
			{ dims[ndim].lb = 0;
			  dims[ndim].ub = (yyvsp[0].expval);
			}
		  ++ndim;
		}
#line 2891 "y.tab.c"
    break;

  case 120: /* dim: expr SCOLON ubound  */
#line 712 "gram.in"
                {
		  if(ndim == maxdim)
			err("too many dimensions");
		  else if(ndim < maxdim)
			{ dims[ndim].lb = (yyvsp[-2].expval);
			  dims[ndim].ub = (yyvsp[0].expval);
			}
		  ++ndim;
		}
#line 2905 "y.tab.c"
    break;

  case 121: /* ubound: SSTAR  */
#line 724 "gram.in"
                { (yyval.expval) = 0; }
#line 2911 "y.tab.c"
    break;

  case 123: /* labellist: label  */
#line 729 "gram.in"
                { nstars = 1; labarray[0] = (yyvsp[0].labval); }
#line 2917 "y.tab.c"
    break;

  case 124: /* labellist: labellist SCOMMA label  */
#line 731 "gram.in"
                { if(nstars < maxlablist)  labarray[nstars++] = (yyvsp[0].labval); }
#line 2923 "y.tab.c"
    break;

  case 125: /* label: SICON  */
#line 735 "gram.in"
                { (yyval.labval) = execlab( convci(toklen, token) ); }
#line 2929 "y.tab.c"
    break;

  case 126: /* implicit: SIMPLICIT in_dcl implist  */
#line 739 "gram.in"
                { NO66("IMPLICIT statement"); }
#line 2935 "y.tab.c"
    break;

  case 129: /* implist: imptype  */
#line 745 "gram.in"
                { if (vartype != TYUNKNOWN)
			dclerr("-- expected letter range",NPNULL);
		  setimpl(vartype, varleng, 'a', 'z'); }
#line 2943 "y.tab.c"
    break;

  case 130: /* $@3: %empty  */
#line 750 "gram.in"
           { needkwd = 1; }
#line 2949 "y.tab.c"
    break;

  case 134: /* letgroup: letter  */
#line 759 "gram.in"
                { setimpl(vartype, varleng, (yyvsp[0].ival), (yyvsp[0].ival)); }
#line 2955 "y.tab.c"
    break;

  case 135: /* letgroup: letter SMINUS letter  */
#line 761 "gram.in"
                { setimpl(vartype, varleng, (yyvsp[-2].ival), (yyvsp[0].ival)); }
#line 2961 "y.tab.c"
    break;

  case 136: /* letter: SNAME  */
#line 765 "gram.in"
                { if(toklen!=1 || token[0]<'a' || token[0]>'z')
			{
			dclerr("implicit item must be single letter", NPNULL);
			(yyval.ival) = 0;
			}
		  else (yyval.ival) = token[0];
		}
#line 2973 "y.tab.c"
    break;

  case 139: /* namelistentry: SSLASH name SSLASH namelistlist  */
#line 779 "gram.in"
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
#line 2989 "y.tab.c"
    break;

  case 140: /* namelistlist: name  */
#line 793 "gram.in"
                { (yyval.chval) = mkchain((char *)(yyvsp[0].namval), CHNULL); }
#line 2995 "y.tab.c"
    break;

  case 141: /* namelistlist: namelistlist SCOMMA name  */
#line 795 "gram.in"
                { (yyval.chval) = hookup((yyvsp[-2].chval), mkchain((char *)(yyvsp[0].namval), CHNULL)); }
#line 3001 "y.tab.c"
    break;

  case 142: /* in_dcl: %empty  */
#line 799 "gram.in"
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
#line 3026 "y.tab.c"
    break;

  case 143: /* funarglist: %empty  */
#line 821 "gram.in"
                { (yyval.chval) = 0; }
#line 3032 "y.tab.c"
    break;

  case 144: /* funarglist: funargs  */
#line 823 "gram.in"
                { (yyval.chval) = revchain((yyvsp[0].chval)); }
#line 3038 "y.tab.c"
    break;

  case 145: /* funargs: expr  */
#line 827 "gram.in"
                { (yyval.chval) = mkchain((char *)(yyvsp[0].expval), CHNULL); }
#line 3044 "y.tab.c"
    break;

  case 146: /* funargs: funargs SCOMMA expr  */
#line 829 "gram.in"
                { (yyval.chval) = mkchain((char *)(yyvsp[0].expval), (yyvsp[-2].chval)); }
#line 3050 "y.tab.c"
    break;

  case 148: /* expr: SLPAR expr SRPAR  */
#line 834 "gram.in"
                                { (yyval.expval) = (yyvsp[-1].expval); if ((yyval.expval)->tag == TPRIM)
					paren_used(&(yyval.expval)->primblock); }
#line 3057 "y.tab.c"
    break;

  case 152: /* uexpr: expr addop expr  */
#line 842 "gram.in"
                { (yyval.expval) = mkexpr((yyvsp[-1].ival), (yyvsp[-2].expval), (yyvsp[0].expval)); }
#line 3063 "y.tab.c"
    break;

  case 153: /* uexpr: expr SSTAR expr  */
#line 844 "gram.in"
                { (yyval.expval) = mkexpr(OPSTAR, (yyvsp[-2].expval), (yyvsp[0].expval)); }
#line 3069 "y.tab.c"
    break;

  case 154: /* uexpr: expr SSLASH expr  */
#line 846 "gram.in"
                { (yyval.expval) = mkexpr(OPSLASH, (yyvsp[-2].expval), (yyvsp[0].expval)); }
#line 3075 "y.tab.c"
    break;

  case 155: /* uexpr: expr SPOWER expr  */
#line 848 "gram.in"
                { (yyval.expval) = mkexpr(OPPOWER, (yyvsp[-2].expval), (yyvsp[0].expval)); }
#line 3081 "y.tab.c"
    break;

  case 156: /* uexpr: addop expr  */
#line 850 "gram.in"
                { if((yyvsp[-1].ival) == OPMINUS)
			(yyval.expval) = mkexpr(OPNEG, (yyvsp[0].expval), ENULL);
		  else {
			(yyval.expval) = (yyvsp[0].expval);
			if ((yyval.expval)->tag == TPRIM)
				paren_used(&(yyval.expval)->primblock);
			}
		}
#line 3094 "y.tab.c"
    break;

  case 157: /* uexpr: expr relop expr  */
#line 859 "gram.in"
                { (yyval.expval) = mkexpr((yyvsp[-1].ival), (yyvsp[-2].expval), (yyvsp[0].expval)); }
#line 3100 "y.tab.c"
    break;

  case 158: /* uexpr: expr SEQV expr  */
#line 861 "gram.in"
                { NO66(".EQV. operator");
		  (yyval.expval) = mkexpr(OPEQV, (yyvsp[-2].expval),(yyvsp[0].expval)); }
#line 3107 "y.tab.c"
    break;

  case 159: /* uexpr: expr SNEQV expr  */
#line 864 "gram.in"
                { NO66(".NEQV. operator");
		  (yyval.expval) = mkexpr(OPNEQV, (yyvsp[-2].expval), (yyvsp[0].expval)); }
#line 3114 "y.tab.c"
    break;

  case 160: /* uexpr: expr SOR expr  */
#line 867 "gram.in"
                { (yyval.expval) = mkexpr(OPOR, (yyvsp[-2].expval), (yyvsp[0].expval)); }
#line 3120 "y.tab.c"
    break;

  case 161: /* uexpr: expr SAND expr  */
#line 869 "gram.in"
                { (yyval.expval) = mkexpr(OPAND, (yyvsp[-2].expval), (yyvsp[0].expval)); }
#line 3126 "y.tab.c"
    break;

  case 162: /* uexpr: SNOT expr  */
#line 871 "gram.in"
                { (yyval.expval) = mkexpr(OPNOT, (yyvsp[0].expval), ENULL); }
#line 3132 "y.tab.c"
    break;

  case 163: /* uexpr: expr SCONCAT expr  */
#line 873 "gram.in"
                { NO66("concatenation operator //");
		  (yyval.expval) = mkexpr(OPCONCAT, (yyvsp[-2].expval), (yyvsp[0].expval)); }
#line 3139 "y.tab.c"
    break;

  case 164: /* addop: SPLUS  */
#line 877 "gram.in"
                        { (yyval.ival) = OPPLUS; }
#line 3145 "y.tab.c"
    break;

  case 165: /* addop: SMINUS  */
#line 878 "gram.in"
                        { (yyval.ival) = OPMINUS; }
#line 3151 "y.tab.c"
    break;

  case 166: /* relop: SEQ  */
#line 881 "gram.in"
                { (yyval.ival) = OPEQ; }
#line 3157 "y.tab.c"
    break;

  case 167: /* relop: SGT  */
#line 882 "gram.in"
                { (yyval.ival) = OPGT; }
#line 3163 "y.tab.c"
    break;

  case 168: /* relop: SLT  */
#line 883 "gram.in"
                { (yyval.ival) = OPLT; }
#line 3169 "y.tab.c"
    break;

  case 169: /* relop: SGE  */
#line 884 "gram.in"
                { (yyval.ival) = OPGE; }
#line 3175 "y.tab.c"
    break;

  case 170: /* relop: SLE  */
#line 885 "gram.in"
                { (yyval.ival) = OPLE; }
#line 3181 "y.tab.c"
    break;

  case 171: /* relop: SNE  */
#line 886 "gram.in"
                { (yyval.ival) = OPNE; }
#line 3187 "y.tab.c"
    break;

  case 172: /* lhs: name  */
#line 890 "gram.in"
                { (yyval.expval) = mkprim((yyvsp[0].namval), LBNULL, CHNULL); }
#line 3193 "y.tab.c"
    break;

  case 173: /* lhs: name substring  */
#line 892 "gram.in"
                { NO66("substring operator :");
		  (yyval.expval) = mkprim((yyvsp[-1].namval), LBNULL, (yyvsp[0].chval)); }
#line 3200 "y.tab.c"
    break;

  case 174: /* lhs: name SLPAR funarglist SRPAR  */
#line 895 "gram.in"
                { (yyval.expval) = mkprim((yyvsp[-3].namval), mklist((yyvsp[-1].chval)), CHNULL); }
#line 3206 "y.tab.c"
    break;

  case 175: /* lhs: name SLPAR funarglist SRPAR substring  */
#line 897 "gram.in"
                { NO66("substring operator :");
		  (yyval.expval) = mkprim((yyvsp[-4].namval), mklist((yyvsp[-2].chval)), (yyvsp[0].chval)); }
#line 3213 "y.tab.c"
    break;

  case 176: /* substring: SLPAR opt_expr SCOLON opt_expr SRPAR  */
#line 902 "gram.in"
                { (yyval.chval) = mkchain((char *)(yyvsp[-3].expval), mkchain((char *)(yyvsp[-1].expval),CHNULL)); }
#line 3219 "y.tab.c"
    break;

  case 177: /* opt_expr: %empty  */
#line 906 "gram.in"
                { (yyval.expval) = 0; }
#line 3225 "y.tab.c"
    break;

  case 179: /* simple: name  */
#line 911 "gram.in"
                { if((yyvsp[0].namval)->vclass == CLPARAM)
			(yyval.expval) = (expptr) cpexpr(
				( (struct Paramblock *) ((yyvsp[0].namval)) ) -> paramval);
		}
#line 3234 "y.tab.c"
    break;

  case 181: /* simple_const: STRUE  */
#line 918 "gram.in"
                        { (yyval.expval) = mklogcon(1); }
#line 3240 "y.tab.c"
    break;

  case 182: /* simple_const: SFALSE  */
#line 919 "gram.in"
                        { (yyval.expval) = mklogcon(0); }
#line 3246 "y.tab.c"
    break;

  case 183: /* simple_const: SHOLLERITH  */
#line 920 "gram.in"
                      { (yyval.expval) = mkstrcon(toklen, token); }
#line 3252 "y.tab.c"
    break;

  case 184: /* simple_const: SICON  */
#line 921 "gram.in"
                { (yyval.expval) = mkintqcon(toklen, token); }
#line 3258 "y.tab.c"
    break;

  case 185: /* simple_const: SRCON  */
#line 922 "gram.in"
                { (yyval.expval) = mkrealcon(tyreal, token); }
#line 3264 "y.tab.c"
    break;

  case 186: /* simple_const: SDCON  */
#line 923 "gram.in"
                { (yyval.expval) = mkrealcon(TYDREAL, token); }
#line 3270 "y.tab.c"
    break;

  case 188: /* complex_const: SLPAR uexpr SCOMMA uexpr SRPAR  */
#line 928 "gram.in"
                { (yyval.expval) = mkcxcon((yyvsp[-3].expval),(yyvsp[-1].expval)); }
#line 3276 "y.tab.c"
    break;

  case 189: /* bit_const: SHEXCON  */
#line 932 "gram.in"
                { NOEXT("hex constant");
		  (yyval.expval) = mkbitcon(4, toklen, token); }
#line 3283 "y.tab.c"
    break;

  case 190: /* bit_const: SOCTCON  */
#line 935 "gram.in"
                { NOEXT("octal constant");
		  (yyval.expval) = mkbitcon(3, toklen, token); }
#line 3290 "y.tab.c"
    break;

  case 191: /* bit_const: SBITCON  */
#line 938 "gram.in"
                { NOEXT("binary constant");
		  (yyval.expval) = mkbitcon(1, toklen, token); }
#line 3297 "y.tab.c"
    break;

  case 193: /* fexpr: SLPAR fexpr SRPAR  */
#line 944 "gram.in"
                { (yyval.expval) = (yyvsp[-1].expval); }
#line 3303 "y.tab.c"
    break;

  case 196: /* unpar_fexpr: fexpr addop fexpr  */
#line 950 "gram.in"
                { (yyval.expval) = mkexpr((yyvsp[-1].ival), (yyvsp[-2].expval), (yyvsp[0].expval)); }
#line 3309 "y.tab.c"
    break;

  case 197: /* unpar_fexpr: fexpr SSTAR fexpr  */
#line 952 "gram.in"
                { (yyval.expval) = mkexpr(OPSTAR, (yyvsp[-2].expval), (yyvsp[0].expval)); }
#line 3315 "y.tab.c"
    break;

  case 198: /* unpar_fexpr: fexpr SSLASH fexpr  */
#line 954 "gram.in"
                { (yyval.expval) = mkexpr(OPSLASH, (yyvsp[-2].expval), (yyvsp[0].expval)); }
#line 3321 "y.tab.c"
    break;

  case 199: /* unpar_fexpr: fexpr SPOWER fexpr  */
#line 956 "gram.in"
                { (yyval.expval) = mkexpr(OPPOWER, (yyvsp[-2].expval), (yyvsp[0].expval)); }
#line 3327 "y.tab.c"
    break;

  case 200: /* unpar_fexpr: addop fexpr  */
#line 958 "gram.in"
                { if((yyvsp[-1].ival) == OPMINUS)
			(yyval.expval) = mkexpr(OPNEG, (yyvsp[0].expval), ENULL);
		  else (yyval.expval) = (yyvsp[0].expval);
		}
#line 3336 "y.tab.c"
    break;

  case 201: /* unpar_fexpr: fexpr SCONCAT fexpr  */
#line 963 "gram.in"
                { NO66("concatenation operator //");
		  (yyval.expval) = mkexpr(OPCONCAT, (yyvsp[-2].expval), (yyvsp[0].expval)); }
#line 3343 "y.tab.c"
    break;

  case 203: /* exec: SDO end_spec label opt_comma dospecw  */
#line 968 "gram.in"
                {
		if((yyvsp[-2].labval)->labdefined)
			execerr("no backward DO loops", CNULL);
		(yyvsp[-2].labval)->blklevel = blklevel+1;
		exdo((yyvsp[-2].labval)->labelno, NPNULL, (yyvsp[0].chval));
		}
#line 3354 "y.tab.c"
    break;

  case 204: /* exec: SDO end_spec opt_comma dospecw  */
#line 975 "gram.in"
                {
		exdo((int)(ctls - ctlstack - 2), NPNULL, (yyvsp[0].chval));
		NOEXT("DO without label");
		}
#line 3363 "y.tab.c"
    break;

  case 205: /* exec: SENDDO  */
#line 980 "gram.in"
                { exenddo(NPNULL); }
#line 3369 "y.tab.c"
    break;

  case 206: /* exec: logif iffable  */
#line 982 "gram.in"
                { exendif();  thiswasbranch = NO; }
#line 3375 "y.tab.c"
    break;

  case 208: /* $@4: %empty  */
#line 984 "gram.in"
                                 {westart(1);}
#line 3381 "y.tab.c"
    break;

  case 209: /* exec: SELSEIF end_spec SLPAR $@4 expr SRPAR STHEN  */
#line 985 "gram.in"
                { exelif((yyvsp[-2].expval)); lastwasbranch = NO; }
#line 3387 "y.tab.c"
    break;

  case 210: /* exec: SELSE end_spec  */
#line 987 "gram.in"
                { exelse(); lastwasbranch = NO; }
#line 3393 "y.tab.c"
    break;

  case 211: /* exec: SENDIF end_spec  */
#line 989 "gram.in"
                { exendif(); lastwasbranch = NO; }
#line 3399 "y.tab.c"
    break;

  case 212: /* logif: SLOGIF end_spec SLPAR expr SRPAR  */
#line 993 "gram.in"
                { exif((yyvsp[-1].expval)); }
#line 3405 "y.tab.c"
    break;

  case 213: /* dospec: name SEQUALS exprlist  */
#line 997 "gram.in"
                { (yyval.chval) = mkchain((char *)(yyvsp[-2].namval), (yyvsp[0].chval)); }
#line 3411 "y.tab.c"
    break;

  case 215: /* $@5: %empty  */
#line 1001 "gram.in"
                 {westart(0);}
#line 3417 "y.tab.c"
    break;

  case 216: /* dospecw: SWHILE $@5 SLPAR expr SRPAR  */
#line 1002 "gram.in"
                { (yyval.chval) = mkchain(CNULL, (chainp)(yyvsp[-1].expval)); }
#line 3423 "y.tab.c"
    break;

  case 217: /* iffable: let lhs SEQUALS expr  */
#line 1006 "gram.in"
                { exequals((struct Primblock *)(yyvsp[-2].expval), (yyvsp[0].expval)); }
#line 3429 "y.tab.c"
    break;

  case 218: /* iffable: SASSIGN end_spec assignlabel STO name  */
#line 1008 "gram.in"
                { exassign((yyvsp[0].namval), (yyvsp[-2].labval)); }
#line 3435 "y.tab.c"
    break;

  case 221: /* iffable: io  */
#line 1012 "gram.in"
                { inioctl = NO; }
#line 3441 "y.tab.c"
    break;

  case 222: /* iffable: SARITHIF end_spec SLPAR expr SRPAR label SCOMMA label SCOMMA label  */
#line 1014 "gram.in"
                { exarif((yyvsp[-6].expval), (yyvsp[-4].labval), (yyvsp[-2].labval), (yyvsp[0].labval));  thiswasbranch = YES; }
#line 3447 "y.tab.c"
    break;

  case 223: /* iffable: call  */
#line 1016 "gram.in"
                { excall((yyvsp[0].namval), LBNULL, 0, labarray); }
#line 3453 "y.tab.c"
    break;

  case 224: /* iffable: call SLPAR SRPAR  */
#line 1018 "gram.in"
                { excall((yyvsp[-2].namval), LBNULL, 0, labarray); }
#line 3459 "y.tab.c"
    break;

  case 225: /* iffable: call SLPAR callarglist SRPAR  */
#line 1020 "gram.in"
                { if(nstars < maxlablist)
			excall((yyvsp[-3].namval), mklist(revchain((yyvsp[-1].chval))), nstars, labarray);
		  else
			many("alternate returns", 'l', maxlablist);
		}
#line 3469 "y.tab.c"
    break;

  case 226: /* iffable: SRETURN end_spec opt_expr  */
#line 1026 "gram.in"
                { exreturn((yyvsp[0].expval));  thiswasbranch = YES; }
#line 3475 "y.tab.c"
    break;

  case 227: /* iffable: stop end_spec opt_expr  */
#line 1028 "gram.in"
                { exstop((yyvsp[-2].ival), (yyvsp[0].expval));  thiswasbranch = (yyvsp[-2].ival); }
#line 3481 "y.tab.c"
    break;

  case 228: /* assignlabel: SICON  */
#line 1032 "gram.in"
                { (yyval.labval) = mklabel( convci(toklen, token) ); }
#line 3487 "y.tab.c"
    break;

  case 229: /* let: SLET  */
#line 1036 "gram.in"
                { if(parstate == OUTSIDE)
			{
			newproc();
			startproc(ESNULL, CLMAIN);
			}
		}
#line 3498 "y.tab.c"
    break;

  case 230: /* goto: SGOTO end_spec label  */
#line 1045 "gram.in"
                { exgoto((yyvsp[0].labval));  thiswasbranch = YES; }
#line 3504 "y.tab.c"
    break;

  case 231: /* goto: SASGOTO end_spec name  */
#line 1047 "gram.in"
                { exasgoto((yyvsp[0].namval));  thiswasbranch = YES; }
#line 3510 "y.tab.c"
    break;

  case 232: /* goto: SASGOTO end_spec name opt_comma SLPAR labellist SRPAR  */
#line 1049 "gram.in"
                { exasgoto((yyvsp[-4].namval));  thiswasbranch = YES; }
#line 3516 "y.tab.c"
    break;

  case 233: /* goto: SCOMPGOTO end_spec SLPAR labellist SRPAR opt_comma expr  */
#line 1051 "gram.in"
                { if(nstars < maxlablist)
			putcmgo(putx(fixtype((yyvsp[0].expval))), nstars, labarray);
		  else
			many("labels in computed GOTO list", 'l', maxlablist);
		}
#line 3526 "y.tab.c"
    break;

  case 236: /* call: SCALL end_spec name  */
#line 1063 "gram.in"
                { nstars = 0; (yyval.namval) = (yyvsp[0].namval); }
#line 3532 "y.tab.c"
    break;

  case 237: /* callarglist: callarg  */
#line 1067 "gram.in"
                { (yyval.chval) = (yyvsp[0].expval) ? mkchain((char *)(yyvsp[0].expval),CHNULL) : CHNULL; }
#line 3538 "y.tab.c"
    break;

  case 238: /* callarglist: callarglist SCOMMA callarg  */
#line 1069 "gram.in"
                { (yyval.chval) = (yyvsp[0].expval) ? mkchain((char *)(yyvsp[0].expval), (yyvsp[-2].chval)) : (yyvsp[-2].chval); }
#line 3544 "y.tab.c"
    break;

  case 240: /* callarg: SSTAR label  */
#line 1074 "gram.in"
                { if(nstars < maxlablist) labarray[nstars++] = (yyvsp[0].labval); (yyval.expval) = 0; }
#line 3550 "y.tab.c"
    break;

  case 241: /* stop: SPAUSE  */
#line 1078 "gram.in"
                { (yyval.ival) = 0; }
#line 3556 "y.tab.c"
    break;

  case 242: /* stop: SSTOP  */
#line 1080 "gram.in"
                { (yyval.ival) = 2; }
#line 3562 "y.tab.c"
    break;

  case 243: /* exprlist: expr  */
#line 1084 "gram.in"
                { (yyval.chval) = mkchain((char *)(yyvsp[0].expval), CHNULL); }
#line 3568 "y.tab.c"
    break;

  case 244: /* exprlist: exprlist SCOMMA expr  */
#line 1086 "gram.in"
                { (yyval.chval) = hookup((yyvsp[-2].chval), mkchain((char *)(yyvsp[0].expval),CHNULL) ); }
#line 3574 "y.tab.c"
    break;

  case 245: /* end_spec: %empty  */
#line 1090 "gram.in"
                { if(parstate == OUTSIDE)
			{
			newproc();
			startproc(ESNULL, CLMAIN);
			}

/* This next statement depends on the ordering of the state table encoding */

		  if(parstate < INDATA) enddcl();
		}
#line 3589 "y.tab.c"
    break;

  case 246: /* intonlyon: %empty  */
#line 1103 "gram.in"
                { intonly = YES; }
#line 3595 "y.tab.c"
    break;

  case 247: /* intonlyoff: %empty  */
#line 1107 "gram.in"
                { intonly = NO; }
#line 3601 "y.tab.c"
    break;

  case 248: /* io: io1  */
#line 1112 "gram.in"
                { endio(); }
#line 3607 "y.tab.c"
    break;

  case 250: /* io1: iofmove unpar_fexpr  */
#line 1117 "gram.in"
                { ioclause(IOSUNIT, (yyvsp[0].expval)); endioctl(); }
#line 3613 "y.tab.c"
    break;

  case 251: /* io1: iofmove SSTAR  */
#line 1119 "gram.in"
                { ioclause(IOSUNIT, ENULL); endioctl(); }
#line 3619 "y.tab.c"
    break;

  case 252: /* io1: iofmove SPOWER  */
#line 1121 "gram.in"
                { ioclause(IOSUNIT, IOSTDERR); endioctl(); }
#line 3625 "y.tab.c"
    break;

  case 254: /* io1: read ioctl  */
#line 1124 "gram.in"
                { doio(CHNULL); }
#line 3631 "y.tab.c"
    break;

  case 255: /* io1: read infmt  */
#line 1126 "gram.in"
                { doio(CHNULL); }
#line 3637 "y.tab.c"
    break;

  case 256: /* io1: read ioctl inlist  */
#line 1128 "gram.in"
                { doio(revchain((yyvsp[0].chval))); }
#line 3643 "y.tab.c"
    break;

  case 257: /* io1: read infmt SCOMMA inlist  */
#line 1130 "gram.in"
                { doio(revchain((yyvsp[0].chval))); }
#line 3649 "y.tab.c"
    break;

  case 258: /* io1: read ioctl SCOMMA inlist  */
#line 1132 "gram.in"
                { doio(revchain((yyvsp[0].chval))); }
#line 3655 "y.tab.c"
    break;

  case 259: /* io1: write ioctl  */
#line 1134 "gram.in"
                { doio(CHNULL); }
#line 3661 "y.tab.c"
    break;

  case 260: /* io1: write ioctl outlist  */
#line 1136 "gram.in"
                { doio(revchain((yyvsp[0].chval))); }
#line 3667 "y.tab.c"
    break;

  case 261: /* io1: write ioctl SCOMMA outlist  */
#line 1138 "gram.in"
                { doio(revchain((yyvsp[0].chval))); }
#line 3673 "y.tab.c"
    break;

  case 262: /* io1: print  */
#line 1140 "gram.in"
                { doio(CHNULL); }
#line 3679 "y.tab.c"
    break;

  case 263: /* io1: print SCOMMA outlist  */
#line 1142 "gram.in"
                { doio(revchain((yyvsp[0].chval))); }
#line 3685 "y.tab.c"
    break;

  case 265: /* fmkwd: SBACKSPACE  */
#line 1149 "gram.in"
                { iostmt = IOBACKSPACE; }
#line 3691 "y.tab.c"
    break;

  case 266: /* fmkwd: SREWIND  */
#line 1151 "gram.in"
                { iostmt = IOREWIND; }
#line 3697 "y.tab.c"
    break;

  case 267: /* fmkwd: SENDFILE  */
#line 1153 "gram.in"
                { iostmt = IOENDFILE; }
#line 3703 "y.tab.c"
    break;

  case 269: /* ctlkwd: SINQUIRE  */
#line 1160 "gram.in"
                { iostmt = IOINQUIRE; }
#line 3709 "y.tab.c"
    break;

  case 270: /* ctlkwd: SOPEN  */
#line 1162 "gram.in"
                { iostmt = IOOPEN; }
#line 3715 "y.tab.c"
    break;

  case 271: /* ctlkwd: SCLOSE  */
#line 1164 "gram.in"
                { iostmt = IOCLOSE; }
#line 3721 "y.tab.c"
    break;

  case 272: /* infmt: unpar_fexpr  */
#line 1168 "gram.in"
                {
		ioclause(IOSUNIT, ENULL);
		ioclause(IOSFMT, (yyvsp[0].expval));
		endioctl();
		}
#line 3731 "y.tab.c"
    break;

  case 273: /* infmt: SSTAR  */
#line 1174 "gram.in"
                {
		ioclause(IOSUNIT, ENULL);
		ioclause(IOSFMT, ENULL);
		endioctl();
		}
#line 3741 "y.tab.c"
    break;

  case 274: /* ioctl: SLPAR fexpr SRPAR  */
#line 1182 "gram.in"
                {
		  ioclause(IOSUNIT, (yyvsp[-1].expval));
		  endioctl();
		}
#line 3750 "y.tab.c"
    break;

  case 275: /* ioctl: SLPAR ctllist SRPAR  */
#line 1187 "gram.in"
                { endioctl(); }
#line 3756 "y.tab.c"
    break;

  case 278: /* ioclause: fexpr  */
#line 1195 "gram.in"
                { ioclause(IOSPOSITIONAL, (yyvsp[0].expval)); }
#line 3762 "y.tab.c"
    break;

  case 279: /* ioclause: SSTAR  */
#line 1197 "gram.in"
                { ioclause(IOSPOSITIONAL, ENULL); }
#line 3768 "y.tab.c"
    break;

  case 280: /* ioclause: SPOWER  */
#line 1199 "gram.in"
                { ioclause(IOSPOSITIONAL, IOSTDERR); }
#line 3774 "y.tab.c"
    break;

  case 281: /* ioclause: nameeq expr  */
#line 1201 "gram.in"
                { ioclause((yyvsp[-1].ival), (yyvsp[0].expval)); }
#line 3780 "y.tab.c"
    break;

  case 282: /* ioclause: nameeq SSTAR  */
#line 1203 "gram.in"
                { ioclause((yyvsp[-1].ival), ENULL); }
#line 3786 "y.tab.c"
    break;

  case 283: /* ioclause: nameeq SPOWER  */
#line 1205 "gram.in"
                { ioclause((yyvsp[-1].ival), IOSTDERR); }
#line 3792 "y.tab.c"
    break;

  case 284: /* nameeq: SNAMEEQ  */
#line 1209 "gram.in"
                { (yyval.ival) = iocname(); }
#line 3798 "y.tab.c"
    break;

  case 285: /* read: SREAD end_spec in_ioctl  */
#line 1213 "gram.in"
                { iostmt = IOREAD; }
#line 3804 "y.tab.c"
    break;

  case 286: /* write: SWRITE end_spec in_ioctl  */
#line 1217 "gram.in"
                { iostmt = IOWRITE; }
#line 3810 "y.tab.c"
    break;

  case 287: /* print: SPRINT end_spec fexpr in_ioctl  */
#line 1221 "gram.in"
                {
		iostmt = IOWRITE;
		ioclause(IOSUNIT, ENULL);
		ioclause(IOSFMT, (yyvsp[-1].expval));
		endioctl();
		}
#line 3821 "y.tab.c"
    break;

  case 288: /* print: SPRINT end_spec SSTAR in_ioctl  */
#line 1228 "gram.in"
                {
		iostmt = IOWRITE;
		ioclause(IOSUNIT, ENULL);
		ioclause(IOSFMT, ENULL);
		endioctl();
		}
#line 3832 "y.tab.c"
    break;

  case 289: /* inlist: inelt  */
#line 1237 "gram.in"
                { (yyval.chval) = mkchain((char *)(yyvsp[0].tagval), CHNULL); }
#line 3838 "y.tab.c"
    break;

  case 290: /* inlist: inlist SCOMMA inelt  */
#line 1239 "gram.in"
                { (yyval.chval) = mkchain((char *)(yyvsp[0].tagval), (yyvsp[-2].chval)); }
#line 3844 "y.tab.c"
    break;

  case 291: /* inelt: lhs  */
#line 1243 "gram.in"
                { (yyval.tagval) = (tagptr) (yyvsp[0].expval); }
#line 3850 "y.tab.c"
    break;

  case 292: /* inelt: SLPAR inlist SCOMMA dospec SRPAR  */
#line 1245 "gram.in"
                { (yyval.tagval) = (tagptr) mkiodo((yyvsp[-1].chval),revchain((yyvsp[-3].chval))); }
#line 3856 "y.tab.c"
    break;

  case 293: /* outlist: uexpr  */
#line 1249 "gram.in"
                { (yyval.chval) = mkchain((char *)(yyvsp[0].expval), CHNULL); }
#line 3862 "y.tab.c"
    break;

  case 294: /* outlist: other  */
#line 1251 "gram.in"
                { (yyval.chval) = mkchain((char *)(yyvsp[0].tagval), CHNULL); }
#line 3868 "y.tab.c"
    break;

  case 296: /* out2: uexpr SCOMMA uexpr  */
#line 1256 "gram.in"
                { (yyval.chval) = mkchain((char *)(yyvsp[0].expval), mkchain((char *)(yyvsp[-2].expval), CHNULL) ); }
#line 3874 "y.tab.c"
    break;

  case 297: /* out2: uexpr SCOMMA other  */
#line 1258 "gram.in"
                { (yyval.chval) = mkchain((char *)(yyvsp[0].tagval), mkchain((char *)(yyvsp[-2].expval), CHNULL) ); }
#line 3880 "y.tab.c"
    break;

  case 298: /* out2: other SCOMMA uexpr  */
#line 1260 "gram.in"
                { (yyval.chval) = mkchain((char *)(yyvsp[0].expval), mkchain((char *)(yyvsp[-2].tagval), CHNULL) ); }
#line 3886 "y.tab.c"
    break;

  case 299: /* out2: other SCOMMA other  */
#line 1262 "gram.in"
                { (yyval.chval) = mkchain((char *)(yyvsp[0].tagval), mkchain((char *)(yyvsp[-2].tagval), CHNULL) ); }
#line 3892 "y.tab.c"
    break;

  case 300: /* out2: out2 SCOMMA uexpr  */
#line 1264 "gram.in"
                { (yyval.chval) = mkchain((char *)(yyvsp[0].expval), (yyvsp[-2].chval)); }
#line 3898 "y.tab.c"
    break;

  case 301: /* out2: out2 SCOMMA other  */
#line 1266 "gram.in"
                { (yyval.chval) = mkchain((char *)(yyvsp[0].tagval), (yyvsp[-2].chval)); }
#line 3904 "y.tab.c"
    break;

  case 302: /* other: complex_const  */
#line 1270 "gram.in"
                { (yyval.tagval) = (tagptr) (yyvsp[0].expval); }
#line 3910 "y.tab.c"
    break;

  case 303: /* other: SLPAR expr SRPAR  */
#line 1272 "gram.in"
                { (yyval.tagval) = (tagptr) (yyvsp[-1].expval); }
#line 3916 "y.tab.c"
    break;

  case 304: /* other: SLPAR uexpr SCOMMA dospec SRPAR  */
#line 1274 "gram.in"
                { (yyval.tagval) = (tagptr) mkiodo((yyvsp[-1].chval), mkchain((char *)(yyvsp[-3].expval), CHNULL) ); }
#line 3922 "y.tab.c"
    break;

  case 305: /* other: SLPAR other SCOMMA dospec SRPAR  */
#line 1276 "gram.in"
                { (yyval.tagval) = (tagptr) mkiodo((yyvsp[-1].chval), mkchain((char *)(yyvsp[-3].tagval), CHNULL) ); }
#line 3928 "y.tab.c"
    break;

  case 306: /* other: SLPAR out2 SCOMMA dospec SRPAR  */
#line 1278 "gram.in"
                { (yyval.tagval) = (tagptr) mkiodo((yyvsp[-1].chval), revchain((yyvsp[-3].chval))); }
#line 3934 "y.tab.c"
    break;

  case 307: /* in_ioctl: %empty  */
#line 1282 "gram.in"
                { startioctl(); }
#line 3940 "y.tab.c"
    break;


#line 3944 "y.tab.c"

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

