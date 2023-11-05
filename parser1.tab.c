/* A Bison parser, made by GNU Bison 2.4.2.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2006, 2009-2010 Free Software
   Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "parser1.y"

	void yyerror(char* s);
	int yylex();
	#include "stdio.h"
	#include "stdlib.h"
	#include "ctype.h"
	#include "string.h"
	extern int F;
	void insert_type();
	void insert_value();
	void insert_dimensions();
	void insert_parameters();
	extern int flag;
	int insert_flag = 0;

	extern char current_identifier[20];
	extern char current_type[20];
	extern char current_value[20];
    extern char current_function[20];
	extern char previous_operator[20];
	char temp[20];
	char fi[20];



/* Line 189 of yacc.c  */
#line 98 "parser1.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IF = 258,
     INT = 259,
     CHAR = 260,
     FLOAT = 261,
     DOUBLE = 262,
     LONG = 263,
     SHORT = 264,
     SIGNED = 265,
     UNSIGNED = 266,
     STRUCT = 267,
     RETURN = 268,
     MAIN = 269,
     INCLUDE = 270,
     DEFINE = 271,
     VOID = 272,
     WHILE = 273,
     FOR = 274,
     DO = 275,
     BREAK = 276,
     CONTINUE = 277,
     GOTO = 278,
     ENDIF = 279,
     SWITCH = 280,
     CASE = 281,
     DEFAULT = 282,
     identifier = 283,
     integer_constant = 284,
     string_constant = 285,
     float_constant = 286,
     character_constant = 287,
     ELSE = 288,
     MOD_EQUAL = 289,
     DIVIDE_EQUAL = 290,
     MULTIPLY_EQUAL = 291,
     SUBTRACT_EQUAL = 292,
     ADD_EQUAL = 293,
     OR_OR = 294,
     AND_AND = 295,
     NOT_EQUAL = 296,
     EQUAL = 297,
     GREAT = 298,
     GREAT_EQUAL = 299,
     LESS = 300,
     LESS_EQUAL = 301,
     SIZEOF = 302,
     NOT = 303,
     DECREMENT = 304,
     INCREMENT = 305
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 190 "parser1.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  42
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   261

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  84
/* YYNRULES -- Number of rules.  */
#define YYNRULES  169
/* YYNRULES -- Number of states.  */
#define YYNSTATES  261

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    53,     2,     2,
      67,    68,    51,    49,    64,    50,    69,    52,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    63,
      58,    39,    60,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    65,     2,    66,    42,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    61,     2,    62,     2,     2,     2,     2,
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
      35,    36,    37,    38,    40,    41,    43,    44,    45,    46,
      47,    48,    54,    55,    56,    57,    59
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    11,    13,    15,    17,
      19,    25,    29,    33,    37,    38,    46,    49,    50,    54,
      56,    60,    63,    66,    67,    68,    72,    74,    75,    79,
      82,    83,    84,    89,    92,    94,    96,    97,   103,   104,
     105,   109,   110,   116,   119,   122,   123,   125,   127,   129,
     131,   134,   137,   140,   143,   146,   149,   152,   154,   156,
     159,   162,   163,   165,   168,   171,   172,   174,   175,   177,
     178,   181,   185,   189,   192,   193,   196,   199,   200,   201,
     205,   208,   209,   211,   213,   215,   217,   219,   221,   223,
     227,   230,   231,   234,   236,   243,   246,   247,   253,   261,
     269,   271,   274,   276,   279,   281,   284,   287,   290,   292,
     293,   297,   298,   302,   303,   307,   308,   312,   313,   317,
     318,   322,   324,   326,   329,   333,   334,   337,   341,   342,
     345,   347,   350,   353,   354,   356,   358,   360,   362,   364,
     366,   370,   372,   374,   376,   380,   382,   384,   386,   388,
     390,   392,   394,   397,   401,   404,   405,   410,   412,   414,
     415,   421,   423,   424,   427,   431,   432,   434,   436,   438
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      71,     0,    -1,    72,    -1,    73,    72,    -1,    -1,    79,
      -1,   103,    -1,    76,    -1,    74,    -1,    75,    -1,    15,
      58,    28,    59,    60,    -1,    16,    28,    28,    -1,    16,
      28,     4,    -1,    16,    28,     6,    -1,    -1,    12,    28,
      77,    61,    78,    62,    63,    -1,    79,    78,    -1,    -1,
      98,    81,    63,    -1,    80,    -1,    12,    28,    81,    -1,
      83,    82,    -1,    64,    81,    -1,    -1,    -1,    28,    84,
      85,    -1,    87,    -1,    -1,    39,    86,   123,    -1,    65,
      88,    -1,    -1,    -1,    29,    66,    89,    90,    -1,    66,
      92,    -1,    92,    -1,    94,    -1,    -1,    65,    29,    91,
      66,    90,    -1,    -1,    -1,    39,    93,    30,    -1,    -1,
      39,    95,    61,    96,    62,    -1,    29,    97,    -1,    64,
      96,    -1,    -1,     4,    -1,     5,    -1,     6,    -1,     7,
      -1,     4,    51,    -1,     5,    51,    -1,     6,    51,    -1,
       8,   101,    -1,     9,   102,    -1,    11,    99,    -1,    10,
     100,    -1,    17,    -1,     4,    -1,     8,   101,    -1,     9,
     102,    -1,    -1,     4,    -1,     8,   101,    -1,     9,   102,
      -1,    -1,     4,    -1,    -1,     4,    -1,    -1,   104,   105,
      -1,    98,    28,    67,    -1,   106,    68,   112,    -1,    98,
     107,    -1,    -1,   109,   108,    -1,    64,   106,    -1,    -1,
      -1,    28,   110,   111,    -1,    65,    66,    -1,    -1,   115,
      -1,   113,    -1,   116,    -1,   118,    -1,   120,    -1,   122,
      -1,    79,    -1,    61,   114,    62,    -1,   112,   114,    -1,
      -1,   123,    63,    -1,    63,    -1,     3,    67,   131,    68,
     112,   117,    -1,    33,   112,    -1,    -1,    18,    67,   131,
      68,   112,    -1,    19,    67,   119,   131,    63,   123,    68,
      -1,    20,   112,    18,    67,   131,    68,    63,    -1,    79,
      -1,   123,    63,    -1,    63,    -1,    13,   121,    -1,    63,
      -1,   123,    63,    -1,    21,    63,    -1,   144,   124,    -1,
     131,    -1,    -1,    39,   125,   123,    -1,    -1,    38,   126,
     123,    -1,    -1,    37,   127,   123,    -1,    -1,    36,   128,
     123,    -1,    -1,    35,   129,   123,    -1,    -1,    34,   130,
     123,    -1,    57,    -1,    56,    -1,   133,   132,    -1,    40,
     133,   132,    -1,    -1,   135,   134,    -1,    41,   135,   134,
      -1,    -1,    55,   135,    -1,   136,    -1,   139,   137,    -1,
     138,   139,    -1,    -1,    46,    -1,    48,    -1,    45,    -1,
      47,    -1,    44,    -1,    43,    -1,   139,   140,   141,    -1,
     141,    -1,    49,    -1,    50,    -1,   141,   142,   143,    -1,
     143,    -1,    51,    -1,    52,    -1,    53,    -1,   146,    -1,
     144,    -1,    28,    -1,   144,   145,    -1,    65,   123,    66,
      -1,    69,    28,    -1,    -1,    67,   147,   123,    68,    -1,
     148,    -1,   153,    -1,    -1,    28,    67,   149,   150,    68,
      -1,   151,    -1,    -1,   123,   152,    -1,    64,   123,   152,
      -1,    -1,    29,    -1,    30,    -1,    31,    -1,    32,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    63,    63,    66,    67,    71,    72,    73,    74,    75,
      79,    83,    84,    85,    91,    91,    93,    93,    96,    97,
     100,   103,   106,   107,   110,   110,   112,   112,   112,   115,
     116,   119,   119,   120,   123,   124,   125,   125,   126,   129,
     129,   132,   132,   135,   138,   139,   143,   143,   143,   143,
     143,   143,   143,   144,   145,   146,   147,   148,   151,   151,
     151,   151,   154,   154,   154,   154,   157,   157,   160,   160,
     163,   166,   169,   172,   172,   175,   178,   179,   182,   182,
     185,   186,   189,   189,   190,   190,   191,   191,   192,   195,
     198,   199,   202,   203,   206,   209,   210,   213,   214,   215,
     218,   219,   220,   223,   226,   227,   230,   233,   234,   237,
     237,   238,   238,   239,   239,   240,   240,   241,   241,   242,
     242,   243,   244,   247,   250,   250,   253,   256,   257,   260,
     261,   264,   267,   268,   271,   272,   273,   274,   275,   276,
     279,   280,   283,   284,   287,   288,   291,   291,   291,   294,
     294,   297,   298,   301,   302,   305,   305,   306,   306,   309,
     309,   312,   312,   315,   318,   319,   322,   323,   324,   325
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "INT", "CHAR", "FLOAT", "DOUBLE",
  "LONG", "SHORT", "SIGNED", "UNSIGNED", "STRUCT", "RETURN", "MAIN",
  "INCLUDE", "DEFINE", "VOID", "WHILE", "FOR", "DO", "BREAK", "CONTINUE",
  "GOTO", "ENDIF", "SWITCH", "CASE", "DEFAULT", "identifier",
  "integer_constant", "string_constant", "float_constant",
  "character_constant", "ELSE", "MOD_EQUAL", "DIVIDE_EQUAL",
  "MULTIPLY_EQUAL", "SUBTRACT_EQUAL", "ADD_EQUAL", "'='", "OR_OR",
  "AND_AND", "'^'", "NOT_EQUAL", "EQUAL", "GREAT", "GREAT_EQUAL", "LESS",
  "LESS_EQUAL", "'+'", "'-'", "'*'", "'/'", "'%'", "SIZEOF", "NOT",
  "DECREMENT", "INCREMENT", "'<'", "\".h\"", "'>'", "'{'", "'}'", "';'",
  "','", "'['", "']'", "'('", "')'", "'.'", "$accept", "begin_parse",
  "declarations", "declaration", "file_dec", "define_dec", "structure_dec",
  "$@1", "structure_content", "variable_dec", "structure_initialize",
  "variables", "multiple_variables", "identifier_name", "$@2",
  "extended_identifier", "$@3", "array_identifier", "array_dims", "$@4",
  "initilization", "$@5", "string_initilization", "$@6",
  "array_initialization", "$@7", "array_values", "multiple_array_values",
  "datatype", "unsigned_grammar", "signed_grammar", "long_grammar",
  "short_grammar", "function_dec", "function_datatype",
  "function_parameters", "parameters", "all_parameter_identifiers",
  "multiple_parameters", "parameter_identifier", "$@8",
  "extended_parameter", "statement", "multiple_statement", "statments",
  "expression_statment", "conditional_statements",
  "extended_conditional_statements", "iterative_statements",
  "for_initialization", "return_statement", "return_suffix",
  "break_statement", "expression", "expressions", "$@9", "$@10", "$@11",
  "$@12", "$@13", "$@14", "simple_expression", "simple_expression_breakup",
  "and_expression", "and_expression_breakup", "unary_relation_expression",
  "regular_expression", "regular_expression_breakup",
  "relational_operators", "sum_expression", "sum_operators", "term",
  "multiply_operators", "factor", "iden", "extended_iden", "func", "$@15",
  "func_call", "$@16", "arguments", "arguments_list", "extended_arguments",
  "constant", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,    61,
     294,   295,    94,   296,   297,   298,   299,   300,   301,    43,
      45,    42,    47,    37,   302,   303,   304,   305,    60,   306,
      62,   123,   125,    59,    44,    91,    93,    40,    41,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    70,    71,    72,    72,    73,    73,    73,    73,    73,
      74,    75,    75,    75,    77,    76,    78,    78,    79,    79,
      80,    81,    82,    82,    84,    83,    85,    86,    85,    87,
      87,    89,    88,    88,    90,    90,    91,    90,    90,    93,
      92,    95,    94,    96,    97,    97,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    99,    99,
      99,    99,   100,   100,   100,   100,   101,   101,   102,   102,
     103,   104,   105,   106,   106,   107,   108,   108,   110,   109,
     111,   111,   112,   112,   112,   112,   112,   112,   112,   113,
     114,   114,   115,   115,   116,   117,   117,   118,   118,   118,
     119,   119,   119,   120,   121,   121,   122,   123,   123,   125,
     124,   126,   124,   127,   124,   128,   124,   129,   124,   130,
     124,   124,   124,   131,   132,   132,   133,   134,   134,   135,
     135,   136,   137,   137,   138,   138,   138,   138,   138,   138,
     139,   139,   140,   140,   141,   141,   142,   142,   142,   143,
     143,   144,   144,   145,   145,   147,   146,   146,   146,   149,
     148,   150,   150,   151,   152,   152,   153,   153,   153,   153
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     1,     1,
       5,     3,     3,     3,     0,     7,     2,     0,     3,     1,
       3,     2,     2,     0,     0,     3,     1,     0,     3,     2,
       0,     0,     4,     2,     1,     1,     0,     5,     0,     0,
       3,     0,     5,     2,     2,     0,     1,     1,     1,     1,
       2,     2,     2,     2,     2,     2,     2,     1,     1,     2,
       2,     0,     1,     2,     2,     0,     1,     0,     1,     0,
       2,     3,     3,     2,     0,     2,     2,     0,     0,     3,
       2,     0,     1,     1,     1,     1,     1,     1,     1,     3,
       2,     0,     2,     1,     6,     2,     0,     5,     7,     7,
       1,     2,     1,     2,     1,     2,     2,     2,     1,     0,
       3,     0,     3,     0,     3,     0,     3,     0,     3,     0,
       3,     1,     1,     2,     3,     0,     2,     3,     0,     2,
       1,     2,     2,     0,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     2,     3,     2,     0,     4,     1,     1,     0,
       5,     1,     0,     2,     3,     0,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,    46,    47,    48,    49,    67,    69,    65,    61,     0,
       0,     0,    57,     0,     2,     4,     8,     9,     7,     5,
      19,     0,     6,    74,    50,    51,    52,    66,    53,    68,
      54,    62,    67,    69,    56,    58,    67,    69,    55,    14,
       0,     0,     1,     3,    24,     0,    23,     0,    70,     0,
      63,    64,    59,    60,    24,     0,    20,     0,    12,    13,
      11,    71,    30,    18,     0,    21,    78,    73,    77,     0,
      17,     0,    27,     0,    25,    26,    22,    81,    74,    75,
       0,     0,     0,     0,     0,     0,     0,   151,   166,   167,
     168,   169,     0,    91,    93,   155,    88,     0,    72,    83,
      82,    84,    85,    86,    87,     0,   108,   125,   128,   130,
     133,   141,   145,   150,   149,   157,   158,     0,    17,    10,
       0,     0,     0,    29,     0,    79,    76,     0,     0,   104,
     103,     0,     0,     0,     0,   106,   159,   129,   150,    91,
       0,     0,    92,     0,   123,     0,   126,   139,   138,   136,
     134,   137,   135,   142,   143,   131,     0,     0,   146,   147,
     148,     0,   119,   117,   115,   113,   111,   109,   122,   121,
       0,     0,   107,   152,     0,    16,    28,    31,    39,    33,
      80,     0,   105,     0,   102,   100,     0,     0,     0,   162,
      90,    89,     0,   125,   128,   132,   140,   144,     0,     0,
       0,     0,     0,     0,     0,   154,    15,    38,     0,     0,
       0,     0,   101,     0,   165,     0,   161,   156,   124,   127,
     120,   118,   116,   114,   112,   110,   153,    39,     0,    32,
      34,    35,    40,    96,    97,     0,     0,     0,   163,   160,
       0,    36,     0,    94,     0,     0,   165,     0,     0,    95,
      98,    99,   164,    45,     0,    38,     0,    43,    42,    37,
      44
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    15,    16,    17,    18,    55,   117,    96,
      20,    45,    65,    46,    62,    74,   120,    75,   123,   207,
     229,   248,   230,   208,   231,   240,   254,   257,    97,    38,
      34,    28,    30,    22,    23,    48,    49,    67,    79,    68,
      77,   125,   139,    99,   140,   100,   101,   243,   102,   186,
     103,   130,   104,   105,   172,   203,   202,   201,   200,   199,
     198,   106,   144,   107,   146,   108,   109,   155,   156,   110,
     157,   111,   161,   112,   113,   173,   114,   141,   115,   189,
     215,   216,   238,   116
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -124
static const yytype_int16 yypact[] =
{
      94,   -25,   -16,    -9,  -124,    49,    54,    42,    62,    34,
      16,    45,  -124,    81,  -124,    94,  -124,  -124,  -124,  -124,
    -124,    55,  -124,   217,  -124,  -124,  -124,  -124,  -124,  -124,
    -124,  -124,    49,    54,  -124,  -124,    49,    54,  -124,    57,
      58,    19,  -124,  -124,    20,    25,    18,    64,  -124,    26,
    -124,  -124,  -124,  -124,  -124,    32,  -124,    36,  -124,  -124,
    -124,  -124,   -24,  -124,    57,  -124,  -124,  -124,    43,   140,
     122,    52,  -124,   -22,  -124,  -124,  -124,    31,   217,  -124,
      46,    86,   -18,    68,    69,   140,    53,    70,  -124,  -124,
    -124,  -124,     2,   140,  -124,  -124,  -124,    57,  -124,  -124,
    -124,  -124,  -124,  -124,  -124,    79,  -124,    85,   114,  -124,
     131,   -34,  -124,   181,  -124,  -124,  -124,   100,   122,  -124,
       2,    97,   125,  -124,    99,  -124,  -124,     2,    57,  -124,
    -124,   103,     2,   180,   149,  -124,  -124,  -124,   -41,   140,
     120,     2,  -124,     2,  -124,     2,  -124,  -124,  -124,  -124,
    -124,  -124,  -124,  -124,  -124,  -124,    48,    48,  -124,  -124,
    -124,    48,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,
       2,   155,  -124,  -124,   130,  -124,  -124,  -124,  -124,  -124,
    -124,   126,  -124,   128,  -124,  -124,     2,   135,   132,     2,
    -124,  -124,   134,    85,   114,    15,   -34,  -124,     2,     2,
       2,     2,     2,     2,   138,  -124,  -124,   -17,   170,   140,
     140,   142,  -124,     2,   150,   145,  -124,  -124,  -124,  -124,
    -124,  -124,  -124,  -124,  -124,  -124,  -124,   168,   177,  -124,
    -124,  -124,  -124,   197,  -124,     2,   163,     2,  -124,  -124,
     171,  -124,   140,  -124,   165,   173,   150,   210,   174,  -124,
    -124,  -124,  -124,   178,   179,   -17,   210,  -124,  -124,  -124,
    -124
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -124,  -124,   229,  -124,  -124,  -124,  -124,  -124,   127,     5,
    -124,   -37,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,
      -7,  -124,   129,  -124,  -124,  -124,    -4,  -124,     6,  -124,
    -124,     4,    22,  -124,  -124,  -124,   175,  -124,  -124,  -124,
    -124,  -124,   -69,  -124,   110,  -124,  -124,  -124,  -124,  -124,
    -124,  -124,  -124,   -81,  -124,  -124,  -124,  -124,  -124,  -124,
    -124,  -123,    61,   112,    63,   -84,  -124,  -124,  -124,   102,
    -124,   104,  -124,    95,   -89,  -124,  -124,  -124,  -124,  -124,
    -124,  -124,    13,  -124
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -42
static const yytype_int16 yytable[] =
{
      98,   131,    56,   138,   181,    19,    21,   121,   137,   183,
      87,    88,    89,    90,    91,    72,   134,   158,   159,   160,
      19,    21,   227,    58,   170,    59,    24,    76,   171,    47,
      87,    88,    89,    90,    91,    25,    50,    92,   138,   176,
      52,    73,    26,   138,   122,   129,    31,    60,   228,    95,
      32,    33,   187,    27,   138,    51,   138,    92,    29,    53,
     192,   194,    39,   211,   153,   154,    35,   138,   138,    95,
      36,    37,   138,    41,    40,   118,    87,    88,    89,    90,
      91,    42,    64,    44,    47,    54,    57,    61,    63,   204,
     236,    56,    66,    70,    69,    71,   124,   138,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    78,   214,    10,
      11,    12,   119,   127,   128,    95,   135,   220,   221,   222,
     223,   224,   225,   118,   138,   143,     1,     2,     3,     4,
       5,     6,     7,     8,    81,   132,   133,   136,   185,    12,
     233,   234,   142,    80,     1,     2,     3,     4,     5,     6,
       7,     8,    81,    82,   244,   145,   246,    12,    83,    84,
      85,    86,   174,   177,   178,   180,   182,   188,    87,    88,
      89,    90,    91,   249,   147,   148,   149,   150,   151,   152,
     153,   154,   191,   205,     1,     2,     3,     4,     5,     6,
       7,     8,    81,   206,   209,    92,   210,    12,   212,   213,
     232,    93,   217,    94,   226,   235,   241,    95,    87,    88,
      89,    90,    91,   239,   237,   162,   163,   164,   165,   166,
     167,     1,     2,     3,     4,     5,     6,     7,     8,   -41,
     242,   245,   247,   250,    12,    92,   251,   168,   169,   253,
     255,   258,   256,   184,    43,   175,   170,    95,   259,   190,
     171,   179,   260,   126,   218,   193,   197,   219,   195,   252,
       0,   196
};

static const yytype_int16 yycheck[] =
{
      69,    82,    39,    92,   127,     0,     0,    29,    92,   132,
      28,    29,    30,    31,    32,    39,    85,    51,    52,    53,
      15,    15,    39,     4,    65,     6,    51,    64,    69,    23,
      28,    29,    30,    31,    32,    51,    32,    55,   127,   120,
      36,    65,    51,   132,    66,    63,     4,    28,    65,    67,
       8,     9,   133,     4,   143,    33,   145,    55,     4,    37,
     141,   145,    28,   186,    49,    50,     4,   156,   157,    67,
       8,     9,   161,    28,    58,    70,    28,    29,    30,    31,
      32,     0,    64,    28,    78,    28,    28,    67,    63,   170,
     213,   128,    28,    61,    68,    59,    65,   186,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    64,   189,    15,
      16,    17,    60,    67,    28,    67,    63,   198,   199,   200,
     201,   202,   203,   118,   213,    40,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    67,    67,    67,   133,    17,
     209,   210,    63,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,   235,    41,   237,    17,    18,    19,
      20,    21,    62,    66,    39,    66,    63,    18,    28,    29,
      30,    31,    32,   242,    43,    44,    45,    46,    47,    48,
      49,    50,    62,    28,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    63,    68,    55,    68,    17,    63,    67,
      30,    61,    68,    63,    66,    63,    29,    67,    28,    29,
      30,    31,    32,    68,    64,    34,    35,    36,    37,    38,
      39,     4,     5,     6,     7,     8,     9,    10,    11,    61,
      33,    68,    61,    68,    17,    55,    63,    56,    57,    29,
      66,    62,    64,    63,    15,   118,    65,    67,   255,   139,
      69,   122,   256,    78,   193,   143,   161,   194,   156,   246,
      -1,   157
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      15,    16,    17,    71,    72,    73,    74,    75,    76,    79,
      80,    98,   103,   104,    51,    51,    51,     4,   101,     4,
     102,     4,     8,     9,   100,     4,     8,     9,    99,    28,
      58,    28,     0,    72,    28,    81,    83,    98,   105,   106,
     101,   102,   101,   102,    28,    77,    81,    28,     4,     6,
      28,    67,    84,    63,    64,    82,    28,   107,   109,    68,
      61,    59,    39,    65,    85,    87,    81,   110,    64,   108,
       3,    12,    13,    18,    19,    20,    21,    28,    29,    30,
      31,    32,    55,    61,    63,    67,    79,    98,   112,   113,
     115,   116,   118,   120,   122,   123,   131,   133,   135,   136,
     139,   141,   143,   144,   146,   148,   153,    78,    79,    60,
      86,    29,    66,    88,    65,   111,   106,    67,    28,    63,
     121,   123,    67,    67,   112,    63,    67,   135,   144,   112,
     114,   147,    63,    40,   132,    41,   134,    43,    44,    45,
      46,    47,    48,    49,    50,   137,   138,   140,    51,    52,
      53,   142,    34,    35,    36,    37,    38,    39,    56,    57,
      65,    69,   124,   145,    62,    78,   123,    66,    39,    92,
      66,   131,    63,   131,    63,    79,   119,   123,    18,   149,
     114,    62,   123,   133,   135,   139,   141,   143,   130,   129,
     128,   127,   126,   125,   123,    28,    63,    89,    93,    68,
      68,   131,    63,    67,   123,   150,   151,    68,   132,   134,
     123,   123,   123,   123,   123,   123,    66,    39,    65,    90,
      92,    94,    30,   112,   112,    63,   131,    64,   152,    68,
      95,    29,    33,   117,   123,    68,   123,    61,    91,   112,
      68,    63,   152,    29,    96,    66,    64,    97,    62,    90,
      96
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 14:

/* Line 1464 of yacc.c  */
#line 91 "parser1.y"
    { insert_type(); ;}
    break;

  case 24:

/* Line 1464 of yacc.c  */
#line 110 "parser1.y"
    { insert_type(); ;}
    break;

  case 27:

/* Line 1464 of yacc.c  */
#line 112 "parser1.y"
    {strcpy(previous_operator,"=");;}
    break;

  case 31:

/* Line 1464 of yacc.c  */
#line 119 "parser1.y"
    {sprintf(temp,"%d",(yyvsp[(1) - (2)])); printf("%d\n",(yyvsp[(1) - (2)])); strcat(fi,temp);;}
    break;

  case 32:

/* Line 1464 of yacc.c  */
#line 119 "parser1.y"
    {strcpy(current_value,fi); insert_dimensions();;}
    break;

  case 36:

/* Line 1464 of yacc.c  */
#line 125 "parser1.y"
    {strcat(fi,"*"); printf("%d\n",(yyvsp[(2) - (2)])); sprintf(temp,"%d",(yyvsp[(2) - (2)])); strcat(fi,temp); ;}
    break;

  case 39:

/* Line 1464 of yacc.c  */
#line 129 "parser1.y"
    {strcpy(previous_operator,"=");;}
    break;

  case 40:

/* Line 1464 of yacc.c  */
#line 129 "parser1.y"
    { insert_value(); ;}
    break;

  case 41:

/* Line 1464 of yacc.c  */
#line 132 "parser1.y"
    {strcpy(previous_operator,"=");;}
    break;

  case 50:

/* Line 1464 of yacc.c  */
#line 143 "parser1.y"
    {strcpy(current_type,"int*");;}
    break;

  case 51:

/* Line 1464 of yacc.c  */
#line 143 "parser1.y"
    {strcpy(current_type,"char*");;}
    break;

  case 52:

/* Line 1464 of yacc.c  */
#line 143 "parser1.y"
    {strcpy(current_type,"float*");;}
    break;

  case 71:

/* Line 1464 of yacc.c  */
#line 166 "parser1.y"
    {strcpy(current_function,current_identifier); insert_type();;}
    break;

  case 78:

/* Line 1464 of yacc.c  */
#line 182 "parser1.y"
    { insert_parameters(); insert_type(); ;}
    break;

  case 109:

/* Line 1464 of yacc.c  */
#line 237 "parser1.y"
    {strcpy(previous_operator,"=");;}
    break;

  case 111:

/* Line 1464 of yacc.c  */
#line 238 "parser1.y"
    {strcpy(previous_operator,"+=");;}
    break;

  case 113:

/* Line 1464 of yacc.c  */
#line 239 "parser1.y"
    {strcpy(previous_operator,"-=");;}
    break;

  case 115:

/* Line 1464 of yacc.c  */
#line 240 "parser1.y"
    {strcpy(previous_operator,"*=");;}
    break;

  case 117:

/* Line 1464 of yacc.c  */
#line 241 "parser1.y"
    {strcpy(previous_operator,"/=");;}
    break;

  case 119:

/* Line 1464 of yacc.c  */
#line 242 "parser1.y"
    {strcpy(previous_operator,"%=");;}
    break;

  case 134:

/* Line 1464 of yacc.c  */
#line 271 "parser1.y"
    {strcpy(previous_operator,">=");;}
    break;

  case 135:

/* Line 1464 of yacc.c  */
#line 272 "parser1.y"
    {strcpy(previous_operator,"<=");;}
    break;

  case 136:

/* Line 1464 of yacc.c  */
#line 273 "parser1.y"
    {strcpy(previous_operator,">");;}
    break;

  case 137:

/* Line 1464 of yacc.c  */
#line 274 "parser1.y"
    {strcpy(previous_operator,"<");;}
    break;

  case 138:

/* Line 1464 of yacc.c  */
#line 275 "parser1.y"
    {strcpy(previous_operator,"==");;}
    break;

  case 139:

/* Line 1464 of yacc.c  */
#line 276 "parser1.y"
    {strcpy(previous_operator,"!=");;}
    break;

  case 155:

/* Line 1464 of yacc.c  */
#line 305 "parser1.y"
    {strcpy(previous_operator,"(");;}
    break;

  case 159:

/* Line 1464 of yacc.c  */
#line 309 "parser1.y"
    {strcpy(previous_operator,"(");;}
    break;

  case 166:

/* Line 1464 of yacc.c  */
#line 322 "parser1.y"
    { insert_value(); ;}
    break;

  case 167:

/* Line 1464 of yacc.c  */
#line 323 "parser1.y"
    { insert_value(); ;}
    break;

  case 168:

/* Line 1464 of yacc.c  */
#line 324 "parser1.y"
    { insert_value(); ;}
    break;

  case 169:

/* Line 1464 of yacc.c  */
#line 325 "parser1.y"
    { insert_value(); ;}
    break;



/* Line 1464 of yacc.c  */
#line 1895 "parser1.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1684 of yacc.c  */
#line 327 "parser1.y"


extern FILE *yyin;
extern int yylineno;
extern char *yytext;
void insert_SymbolTable_type(char *,char *);
void insert_SymbolTable_value(char *, char *);
void insert_SymbolTable_arraydim(char *, char *);
void insert_SymbolTable_funcparam(char *, char *);
void printSymbolTable();


int main()
{
	yyin = fopen("input.txt", "r");
	int true=!yyparse();

	if(true && F)
	{
		printf("\033[6;32mVALID PARSE\033[0m\n");
		printf("%45s\t\033[33m SYMBOL TABLE\033[0m \n", " ");
		printf("%48s %s\n", " ", "\033[33m------------\033[0m");
		printSymbolTable();
	}	
}

void yyerror(char *s)
{
	printf("\033[6;31mINVALID PARSE\033[0m\n");
	printf("\033[31mLine No. : %d %s %s\033[0m\n",yylineno, s, yytext);
	flag=1;
}

void insert_type()
{
	insert_SymbolTable_type(current_identifier,current_type);
}

void insert_value()
{	
	if(strcmp(previous_operator, "=") == 0)
	{	insert_SymbolTable_value(current_identifier,current_value);
	}
}	

void insert_dimensions()
{
    insert_SymbolTable_arraydim(current_identifier, current_value);
}

void insert_parameters()
{
    insert_SymbolTable_funcparam(current_function, current_identifier);
}

int yywrap()
{
	return 1;
}
