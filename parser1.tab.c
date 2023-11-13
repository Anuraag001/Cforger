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
     UNION = 268,
     RETURN = 269,
     MAIN = 270,
     INCLUDE = 271,
     DEFINE = 272,
     VOID = 273,
     WHILE = 274,
     FOR = 275,
     DO = 276,
     BREAK = 277,
     CONTINUE = 278,
     GOTO = 279,
     ENDIF = 280,
     SWITCH = 281,
     CASE = 282,
     DEFAULT = 283,
     identifier = 284,
     integer_constant = 285,
     string_constant = 286,
     float_constant = 287,
     character_constant = 288,
     ELSE = 289,
     MOD_EQUAL = 290,
     DIVIDE_EQUAL = 291,
     MULTIPLY_EQUAL = 292,
     SUBTRACT_EQUAL = 293,
     ADD_EQUAL = 294,
     OR_OR = 295,
     AND_AND = 296,
     NOT_EQUAL = 297,
     EQUAL = 298,
     GREAT = 299,
     GREAT_EQUAL = 300,
     LESS = 301,
     LESS_EQUAL = 302,
     SIZEOF = 303,
     NOT = 304,
     DECREMENT = 305,
     INCREMENT = 306
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
#line 191 "parser1.tab.c"

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
#define YYFINAL  46
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   298

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  90
/* YYNRULES -- Number of rules.  */
#define YYNRULES  182
/* YYNRULES -- Number of states.  */
#define YYNSTATES  296

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    54,     2,     2,
      68,    69,    52,    50,    65,    51,    71,    53,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    70,    64,
      59,    40,    61,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    66,     2,    67,    43,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    62,     2,    63,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    41,    42,    44,    45,    46,
      47,    48,    49,    55,    56,    57,    58,    60
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    11,    13,    15,    17,
      19,    21,    27,    31,    35,    39,    40,    48,    51,    52,
      53,    61,    64,    65,    69,    71,    73,    77,    81,    84,
      87,    88,    89,    93,    95,    96,   100,   103,   104,   105,
     110,   113,   115,   117,   118,   124,   125,   126,   130,   131,
     137,   140,   143,   144,   146,   148,   150,   152,   155,   158,
     161,   164,   167,   170,   173,   175,   177,   180,   183,   184,
     186,   189,   192,   193,   195,   196,   198,   199,   202,   206,
     210,   213,   214,   217,   220,   221,   222,   226,   229,   230,
     232,   234,   236,   238,   240,   242,   244,   248,   251,   252,
     255,   257,   264,   267,   268,   274,   282,   290,   298,   300,
     303,   305,   309,   311,   317,   322,   327,   330,   332,   335,
     338,   341,   343,   344,   348,   349,   353,   354,   358,   359,
     363,   364,   368,   369,   373,   375,   377,   380,   384,   385,
     388,   392,   393,   396,   398,   401,   404,   405,   407,   409,
     411,   413,   415,   417,   421,   423,   425,   427,   431,   433,
     435,   437,   439,   441,   443,   445,   448,   452,   455,   456,
     461,   463,   465,   466,   472,   474,   475,   478,   482,   483,
     485,   487,   489
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      73,     0,    -1,    74,    -1,    75,    74,    -1,    -1,    84,
      -1,   109,    -1,    78,    -1,    76,    -1,    77,    -1,    81,
      -1,    16,    59,    29,    60,    61,    -1,    17,    29,    29,
      -1,    17,    29,     4,    -1,    17,    29,     6,    -1,    -1,
      12,    29,    79,    62,    80,    63,    64,    -1,    84,    80,
      -1,    -1,    -1,    13,    29,    82,    62,    83,    63,    64,
      -1,    84,    83,    -1,    -1,   104,    87,    64,    -1,    85,
      -1,    86,    -1,    12,    29,    87,    -1,    13,    29,    87,
      -1,    89,    88,    -1,    65,    87,    -1,    -1,    -1,    29,
      90,    91,    -1,    93,    -1,    -1,    40,    92,   131,    -1,
      66,    94,    -1,    -1,    -1,    30,    67,    95,    96,    -1,
      67,    98,    -1,    98,    -1,   100,    -1,    -1,    66,    30,
      97,    67,    96,    -1,    -1,    -1,    40,    99,    31,    -1,
      -1,    40,   101,    62,   102,    63,    -1,    30,   103,    -1,
      65,   102,    -1,    -1,     4,    -1,     5,    -1,     6,    -1,
       7,    -1,     4,    52,    -1,     5,    52,    -1,     6,    52,
      -1,     8,   107,    -1,     9,   108,    -1,    11,   105,    -1,
      10,   106,    -1,    18,    -1,     4,    -1,     8,   107,    -1,
       9,   108,    -1,    -1,     4,    -1,     8,   107,    -1,     9,
     108,    -1,    -1,     4,    -1,    -1,     4,    -1,    -1,   110,
     111,    -1,   104,    29,    68,    -1,   112,    69,   118,    -1,
     104,   113,    -1,    -1,   115,   114,    -1,    65,   112,    -1,
      -1,    -1,    29,   116,   117,    -1,    66,    67,    -1,    -1,
     121,    -1,   119,    -1,   122,    -1,   124,    -1,   128,    -1,
     130,    -1,    84,    -1,    62,   120,    63,    -1,   118,   120,
      -1,    -1,   131,    64,    -1,    64,    -1,     3,    68,   139,
      69,   118,   123,    -1,    34,   118,    -1,    -1,    19,    68,
     139,    69,   118,    -1,    20,    68,   125,   139,    64,   126,
      69,    -1,    21,   118,    19,    68,   139,    69,    64,    -1,
      26,    68,    29,    69,    62,   127,    63,    -1,    84,    -1,
     131,    64,    -1,    64,    -1,   126,    65,   131,    -1,   131,
      -1,   127,    27,   161,    70,   120,    -1,   127,    28,    70,
     120,    -1,    27,   161,    70,   120,    -1,    14,   129,    -1,
      64,    -1,   131,    64,    -1,    22,    64,    -1,   152,   132,
      -1,   139,    -1,    -1,    40,   133,   131,    -1,    -1,    39,
     134,   131,    -1,    -1,    38,   135,   131,    -1,    -1,    37,
     136,   131,    -1,    -1,    36,   137,   131,    -1,    -1,    35,
     138,   131,    -1,    58,    -1,    57,    -1,   141,   140,    -1,
      41,   141,   140,    -1,    -1,   143,   142,    -1,    42,   143,
     142,    -1,    -1,    56,   143,    -1,   144,    -1,   147,   145,
      -1,   146,   147,    -1,    -1,    47,    -1,    49,    -1,    46,
      -1,    48,    -1,    45,    -1,    44,    -1,   147,   148,   149,
      -1,   149,    -1,    50,    -1,    51,    -1,   149,   150,   151,
      -1,   151,    -1,    52,    -1,    53,    -1,    54,    -1,   154,
      -1,   152,    -1,    29,    -1,   152,   153,    -1,    66,   131,
      67,    -1,    71,    29,    -1,    -1,    68,   155,   131,    69,
      -1,   156,    -1,   161,    -1,    -1,    29,    68,   157,   158,
      69,    -1,   159,    -1,    -1,   131,   160,    -1,    65,   131,
     160,    -1,    -1,    30,    -1,    31,    -1,    32,    -1,    33,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    63,    63,    66,    67,    71,    72,    73,    74,    75,
      76,    80,    84,    85,    86,    92,    92,    94,    94,    97,
      97,    99,    99,   102,   103,   104,   107,   110,   113,   116,
     117,   120,   120,   122,   122,   122,   125,   126,   129,   129,
     130,   133,   134,   135,   135,   136,   139,   139,   142,   142,
     145,   148,   149,   153,   153,   153,   153,   153,   153,   153,
     154,   155,   156,   157,   158,   161,   161,   161,   161,   164,
     164,   164,   164,   167,   167,   170,   170,   173,   176,   179,
     182,   182,   185,   188,   189,   192,   192,   195,   196,   199,
     199,   200,   200,   201,   201,   202,   205,   208,   209,   212,
     213,   216,   219,   220,   223,   224,   225,   226,   229,   230,
     231,   234,   235,   238,   239,   240,   243,   246,   247,   250,
     253,   254,   257,   257,   258,   258,   259,   259,   260,   260,
     261,   261,   262,   262,   263,   264,   267,   270,   270,   273,
     276,   277,   280,   281,   284,   287,   288,   291,   292,   293,
     294,   295,   296,   299,   300,   303,   304,   307,   308,   311,
     311,   311,   314,   314,   317,   318,   321,   322,   325,   325,
     326,   326,   329,   329,   332,   332,   335,   338,   339,   342,
     343,   344,   345
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "INT", "CHAR", "FLOAT", "DOUBLE",
  "LONG", "SHORT", "SIGNED", "UNSIGNED", "STRUCT", "UNION", "RETURN",
  "MAIN", "INCLUDE", "DEFINE", "VOID", "WHILE", "FOR", "DO", "BREAK",
  "CONTINUE", "GOTO", "ENDIF", "SWITCH", "CASE", "DEFAULT", "identifier",
  "integer_constant", "string_constant", "float_constant",
  "character_constant", "ELSE", "MOD_EQUAL", "DIVIDE_EQUAL",
  "MULTIPLY_EQUAL", "SUBTRACT_EQUAL", "ADD_EQUAL", "'='", "OR_OR",
  "AND_AND", "'^'", "NOT_EQUAL", "EQUAL", "GREAT", "GREAT_EQUAL", "LESS",
  "LESS_EQUAL", "'+'", "'-'", "'*'", "'/'", "'%'", "SIZEOF", "NOT",
  "DECREMENT", "INCREMENT", "'<'", "\".h\"", "'>'", "'{'", "'}'", "';'",
  "','", "'['", "']'", "'('", "')'", "':'", "'.'", "$accept",
  "begin_parse", "declarations", "declaration", "file_dec", "define_dec",
  "structure_dec", "$@1", "structure_content", "union_dec", "$@2",
  "union_content", "variable_dec", "structure_initialize",
  "union_initialize", "variables", "multiple_variables", "identifier_name",
  "$@3", "extended_identifier", "$@4", "array_identifier", "array_dims",
  "$@5", "initilization", "$@6", "string_initilization", "$@7",
  "array_initialization", "$@8", "array_values", "multiple_array_values",
  "datatype", "unsigned_grammar", "signed_grammar", "long_grammar",
  "short_grammar", "function_dec", "function_datatype",
  "function_parameters", "parameters", "all_parameter_identifiers",
  "multiple_parameters", "parameter_identifier", "$@9",
  "extended_parameter", "statement", "multiple_statement", "statments",
  "expression_statment", "conditional_statements",
  "extended_conditional_statements", "iterative_statements",
  "for_initialization", "for_updation", "switch_cases", "return_statement",
  "return_suffix", "break_statement", "expression", "expressions", "$@10",
  "$@11", "$@12", "$@13", "$@14", "$@15", "simple_expression",
  "simple_expression_breakup", "and_expression", "and_expression_breakup",
  "unary_relation_expression", "regular_expression",
  "regular_expression_breakup", "relational_operators", "sum_expression",
  "sum_operators", "term", "multiply_operators", "factor", "iden",
  "extended_iden", "func", "$@16", "func_call", "$@17", "arguments",
  "arguments_list", "extended_arguments", "constant", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
      61,   295,   296,    94,   297,   298,   299,   300,   301,   302,
      43,    45,    42,    47,    37,   303,   304,   305,   306,    60,
     307,    62,   123,   125,    59,    44,    91,    93,    40,    41,
      58,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    72,    73,    74,    74,    75,    75,    75,    75,    75,
      75,    76,    77,    77,    77,    79,    78,    80,    80,    82,
      81,    83,    83,    84,    84,    84,    85,    86,    87,    88,
      88,    90,    89,    91,    92,    91,    93,    93,    95,    94,
      94,    96,    96,    97,    96,    96,    99,    98,   101,   100,
     102,   103,   103,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   105,   105,   105,   105,   106,
     106,   106,   106,   107,   107,   108,   108,   109,   110,   111,
     112,   112,   113,   114,   114,   116,   115,   117,   117,   118,
     118,   118,   118,   118,   118,   118,   119,   120,   120,   121,
     121,   122,   123,   123,   124,   124,   124,   124,   125,   125,
     125,   126,   126,   127,   127,   127,   128,   129,   129,   130,
     131,   131,   133,   132,   134,   132,   135,   132,   136,   132,
     137,   132,   138,   132,   132,   132,   139,   140,   140,   141,
     142,   142,   143,   143,   144,   145,   145,   146,   146,   146,
     146,   146,   146,   147,   147,   148,   148,   149,   149,   150,
     150,   150,   151,   151,   152,   152,   153,   153,   155,   154,
     154,   154,   157,   156,   158,   158,   159,   160,   160,   161,
     161,   161,   161
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     1,     1,
       1,     5,     3,     3,     3,     0,     7,     2,     0,     0,
       7,     2,     0,     3,     1,     1,     3,     3,     2,     2,
       0,     0,     3,     1,     0,     3,     2,     0,     0,     4,
       2,     1,     1,     0,     5,     0,     0,     3,     0,     5,
       2,     2,     0,     1,     1,     1,     1,     2,     2,     2,
       2,     2,     2,     2,     1,     1,     2,     2,     0,     1,
       2,     2,     0,     1,     0,     1,     0,     2,     3,     3,
       2,     0,     2,     2,     0,     0,     3,     2,     0,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     0,     2,
       1,     6,     2,     0,     5,     7,     7,     7,     1,     2,
       1,     3,     1,     5,     4,     4,     2,     1,     2,     2,
       2,     1,     0,     3,     0,     3,     0,     3,     0,     3,
       0,     3,     0,     3,     1,     1,     2,     3,     0,     2,
       3,     0,     2,     1,     2,     2,     0,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     2,     3,     2,     0,     4,
       1,     1,     0,     5,     1,     0,     2,     3,     0,     1,
       1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,    53,    54,    55,    56,    74,    76,    72,    68,     0,
       0,     0,     0,    64,     0,     2,     4,     8,     9,     7,
      10,     5,    24,    25,     0,     6,    81,    57,    58,    59,
      73,    60,    75,    61,    69,    74,    76,    63,    65,    74,
      76,    62,    15,    19,     0,     0,     1,     3,    31,     0,
      30,     0,    77,     0,    70,    71,    66,    67,    31,     0,
      26,     0,    27,     0,    13,    14,    12,    78,    37,    23,
       0,    28,    85,    80,    84,     0,    18,    22,     0,    34,
       0,    32,    33,    29,    88,    81,    82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   164,   179,   180,   181,
     182,     0,    98,   100,   168,    95,     0,    79,    90,    89,
      91,    92,    93,    94,     0,   121,   138,   141,   143,   146,
     154,   158,   163,   162,   170,   171,     0,    18,     0,    22,
      11,     0,     0,     0,    36,     0,    86,    83,     0,     0,
       0,   117,   116,     0,     0,     0,     0,   119,     0,   172,
     142,   163,    98,     0,     0,    99,     0,   136,     0,   139,
     152,   151,   149,   147,   150,   148,   155,   156,   144,     0,
       0,   159,   160,   161,     0,   132,   130,   128,   126,   124,
     122,   135,   134,     0,     0,   120,   165,     0,    17,     0,
      21,    35,    38,    46,    40,    87,     0,   118,     0,   110,
     108,     0,     0,     0,     0,   175,    97,    96,     0,   138,
     141,   145,   153,   157,     0,     0,     0,     0,     0,     0,
       0,   167,    16,    20,    45,     0,     0,     0,     0,   109,
       0,     0,   178,     0,   174,   169,   137,   140,   133,   131,
     129,   127,   125,   123,   166,    46,     0,    39,    41,    42,
      47,   103,   104,     0,     0,     0,     0,   176,   173,     0,
      43,     0,   101,     0,   112,     0,     0,     0,   178,     0,
       0,   102,     0,   105,   106,     0,     0,     0,   107,   177,
      52,     0,    45,   111,    98,     0,    98,     0,    50,    49,
      44,   115,    98,   114,    51,   113
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,    15,    16,    17,    18,    19,    59,   126,    20,
      61,   128,   105,    22,    23,    49,    71,    50,    68,    81,
     131,    82,   134,   224,   247,   270,   248,   225,   249,   259,
     281,   288,   106,    41,    37,    31,    33,    25,    26,    52,
      53,    73,    86,    74,    84,   136,   152,   108,   153,   109,
     110,   262,   111,   201,   263,   267,   112,   142,   113,   114,
     185,   219,   218,   217,   216,   215,   214,   115,   157,   116,
     159,   117,   118,   168,   169,   119,   170,   120,   174,   121,
     122,   186,   123,   154,   124,   205,   233,   234,   257,   125
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -246
static const yytype_int16 yypact[] =
{
     102,   -11,    -9,     7,  -246,    66,    73,    29,    40,    32,
      50,    34,    63,  -246,    95,  -246,   102,  -246,  -246,  -246,
    -246,  -246,  -246,  -246,    67,  -246,   254,  -246,  -246,  -246,
    -246,  -246,  -246,  -246,  -246,    66,    73,  -246,  -246,    66,
      73,  -246,    72,    72,    88,    49,  -246,  -246,    54,    38,
      58,   106,  -246,    55,  -246,  -246,  -246,  -246,  -246,    75,
    -246,    76,  -246,    79,  -246,  -246,  -246,  -246,   -30,  -246,
      72,  -246,  -246,  -246,    85,   184,   150,   150,    80,  -246,
     -13,  -246,  -246,  -246,    74,   254,  -246,   101,   124,   141,
     -17,   103,   104,   184,   109,   107,   110,  -246,  -246,  -246,
    -246,    -6,   184,  -246,  -246,  -246,    72,  -246,  -246,  -246,
    -246,  -246,  -246,  -246,   112,  -246,   136,   138,  -246,   174,
      46,  -246,   108,  -246,  -246,  -246,   118,   150,   119,   150,
    -246,    -6,   117,   145,  -246,   132,  -246,  -246,    -6,    72,
      72,  -246,  -246,   137,    -6,   224,   181,  -246,   178,  -246,
    -246,   -14,   184,   146,    -6,  -246,    -6,  -246,    -6,  -246,
    -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,    53,
      53,  -246,  -246,  -246,    53,  -246,  -246,  -246,  -246,  -246,
    -246,  -246,  -246,    -6,   179,  -246,  -246,   147,  -246,   148,
    -246,  -246,  -246,  -246,  -246,  -246,   157,  -246,   158,  -246,
    -246,    -6,   175,   170,   172,    -6,  -246,  -246,   176,   136,
     138,    24,    46,  -246,    -6,    -6,    -6,    -6,    -6,    -6,
     177,  -246,  -246,  -246,   -21,   212,   184,   184,   183,  -246,
      -6,   187,   185,   182,  -246,  -246,  -246,  -246,  -246,  -246,
    -246,  -246,  -246,  -246,  -246,   204,   237,  -246,  -246,  -246,
    -246,   234,  -246,    -6,   200,   243,    -6,  -246,  -246,   209,
    -246,   184,  -246,    -2,  -246,   210,    57,     1,   185,   245,
     206,  -246,    -6,  -246,  -246,   207,    57,   208,  -246,  -246,
     211,   216,   -21,  -246,   184,   213,   184,   245,  -246,  -246,
    -246,  -246,   184,  -246,  -246,  -246
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -246,  -246,   265,  -246,  -246,  -246,  -246,  -246,   155,  -246,
    -246,   156,     4,  -246,  -246,   -35,  -246,  -246,  -246,  -246,
    -246,  -246,  -246,  -246,     2,  -246,   153,  -246,  -246,  -246,
       0,  -246,     6,  -246,  -246,    -5,    33,  -246,  -246,  -246,
     205,  -246,  -246,  -246,  -246,  -246,   -75,  -246,  -150,  -246,
    -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,   -89,
    -246,  -246,  -246,  -246,  -246,  -246,  -246,  -133,    82,   133,
      83,   -92,  -246,  -246,  -246,   125,  -246,   126,  -246,   121,
     -98,  -246,  -246,  -246,  -246,  -246,  -246,  -246,    30,  -245
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -49
static const yytype_int16 yytable[] =
{
     107,   143,   206,   151,    21,   196,    24,    60,    62,   150,
      79,   198,    96,    97,    98,    99,   100,   132,   146,   245,
      21,   275,    24,    96,    97,    98,    99,   100,   276,   277,
      54,   285,    51,    34,    56,    83,    80,    35,    36,   101,
     151,    27,   191,    28,    38,   246,   151,   141,    39,    40,
     101,   104,   183,    64,   133,    65,   202,   184,   151,    29,
     151,    42,   104,   272,   278,   208,   210,   273,   228,    55,
      30,   151,   151,    57,   166,   167,   151,    32,    66,    43,
     127,   129,    96,    97,    98,    99,   100,    97,    98,    99,
     100,    51,    45,    44,   220,    46,    48,   254,   171,   172,
     173,    58,    69,   151,    60,    62,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,   232,    63,    11,    12,
      13,   104,    67,    70,    75,   238,   239,   240,   241,   242,
     243,   127,   151,   129,   291,    72,   293,    76,    77,    78,
     135,   130,   295,   175,   176,   177,   178,   179,   180,   200,
      85,   251,   252,   139,     1,     2,     3,     4,     5,     6,
       7,     8,    88,    89,   264,   181,   182,   268,    13,   138,
     140,   144,   145,   147,   183,   148,   155,   156,   149,   184,
     158,   187,   189,   283,   192,   193,   271,    87,     1,     2,
       3,     4,     5,     6,     7,     8,    88,    89,    90,   195,
     203,   197,    13,    91,    92,    93,    94,   204,   221,   207,
      95,   222,   223,    96,    97,    98,    99,   100,   160,   161,
     162,   163,   164,   165,   166,   167,   226,   227,     1,     2,
       3,     4,     5,     6,     7,     8,    88,    89,   230,   229,
     101,   231,    13,   250,   244,   235,   102,   253,   103,   255,
     256,   258,   104,    96,    97,    98,    99,   100,     1,     2,
       3,     4,     5,     6,     7,     8,   -48,   260,   261,   265,
     266,   269,    13,   282,   274,   280,   287,   284,   286,   289,
     101,    47,   188,   292,   290,   190,   194,   294,   199,   209,
     137,   236,   104,   237,   211,   213,   212,     0,   279
};

static const yytype_int16 yycheck[] =
{
      75,    90,   152,   101,     0,   138,     0,    42,    43,   101,
      40,   144,    29,    30,    31,    32,    33,    30,    93,    40,
      16,   266,    16,    29,    30,    31,    32,    33,    27,    28,
      35,   276,    26,     4,    39,    70,    66,     8,     9,    56,
     138,    52,   131,    52,     4,    66,   144,    64,     8,     9,
      56,    68,    66,     4,    67,     6,   145,    71,   156,    52,
     158,    29,    68,    65,    63,   154,   158,    69,   201,    36,
       4,   169,   170,    40,    50,    51,   174,     4,    29,    29,
      76,    77,    29,    30,    31,    32,    33,    30,    31,    32,
      33,    85,    29,    59,   183,     0,    29,   230,    52,    53,
      54,    29,    64,   201,   139,   140,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,   205,    29,    16,    17,
      18,    68,    68,    65,    69,   214,   215,   216,   217,   218,
     219,   127,   230,   129,   284,    29,   286,    62,    62,    60,
      66,    61,   292,    35,    36,    37,    38,    39,    40,   145,
      65,   226,   227,    29,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,   253,    57,    58,   256,    18,    68,
      29,    68,    68,    64,    66,    68,    64,    41,    68,    71,
      42,    63,    63,   272,    67,    40,   261,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    67,
      19,    64,    18,    19,    20,    21,    22,    29,    29,    63,
      26,    64,    64,    29,    30,    31,    32,    33,    44,    45,
      46,    47,    48,    49,    50,    51,    69,    69,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    68,    64,
      56,    69,    18,    31,    67,    69,    62,    64,    64,    62,
      65,    69,    68,    29,    30,    31,    32,    33,     4,     5,
       6,     7,     8,     9,    10,    11,    62,    30,    34,    69,
      27,    62,    18,    67,    64,    30,    65,    70,    70,    63,
      56,    16,   127,    70,   282,   129,   133,   287,    64,   156,
      85,   209,    68,   210,   169,   174,   170,    -1,   268
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    16,    17,    18,    73,    74,    75,    76,    77,    78,
      81,    84,    85,    86,   104,   109,   110,    52,    52,    52,
       4,   107,     4,   108,     4,     8,     9,   106,     4,     8,
       9,   105,    29,    29,    59,    29,     0,    74,    29,    87,
      89,   104,   111,   112,   107,   108,   107,   108,    29,    79,
      87,    82,    87,    29,     4,     6,    29,    68,    90,    64,
      65,    88,    29,   113,   115,    69,    62,    62,    60,    40,
      66,    91,    93,    87,   116,    65,   114,     3,    12,    13,
      14,    19,    20,    21,    22,    26,    29,    30,    31,    32,
      33,    56,    62,    64,    68,    84,   104,   118,   119,   121,
     122,   124,   128,   130,   131,   139,   141,   143,   144,   147,
     149,   151,   152,   154,   156,   161,    80,    84,    83,    84,
      61,    92,    30,    67,    94,    66,   117,   112,    68,    29,
      29,    64,   129,   131,    68,    68,   118,    64,    68,    68,
     143,   152,   118,   120,   155,    64,    41,   140,    42,   142,
      44,    45,    46,    47,    48,    49,    50,    51,   145,   146,
     148,    52,    53,    54,   150,    35,    36,    37,    38,    39,
      40,    57,    58,    66,    71,   132,   153,    63,    80,    63,
      83,   131,    67,    40,    98,    67,   139,    64,   139,    64,
      84,   125,   131,    19,    29,   157,   120,    63,   131,   141,
     143,   147,   149,   151,   138,   137,   136,   135,   134,   133,
     131,    29,    64,    64,    95,    99,    69,    69,   139,    64,
      68,    69,   131,   158,   159,    69,   140,   142,   131,   131,
     131,   131,   131,   131,    67,    40,    66,    96,    98,   100,
      31,   118,   118,    64,   139,    62,    65,   160,    69,   101,
      30,    34,   123,   126,   131,    69,    27,   127,   131,    62,
      97,   118,    65,    69,    64,   161,    27,    28,    63,   160,
      30,   102,    67,   131,    70,   161,    70,    65,   103,    63,
      96,   120,    70,   120,   102,   120
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
        case 15:

/* Line 1464 of yacc.c  */
#line 92 "parser1.y"
    { insert_type(); ;}
    break;

  case 19:

/* Line 1464 of yacc.c  */
#line 97 "parser1.y"
    { insert_type(); ;}
    break;

  case 31:

/* Line 1464 of yacc.c  */
#line 120 "parser1.y"
    { insert_type(); ;}
    break;

  case 34:

/* Line 1464 of yacc.c  */
#line 122 "parser1.y"
    {strcpy(previous_operator,"=");;}
    break;

  case 38:

/* Line 1464 of yacc.c  */
#line 129 "parser1.y"
    {sprintf(temp,"%d",(yyvsp[(1) - (2)])); printf("%d\n",(yyvsp[(1) - (2)])); strcat(fi,temp);;}
    break;

  case 39:

/* Line 1464 of yacc.c  */
#line 129 "parser1.y"
    {strcpy(current_value,fi); insert_dimensions();;}
    break;

  case 43:

/* Line 1464 of yacc.c  */
#line 135 "parser1.y"
    {strcat(fi,"*"); sprintf(temp,"%d",(yyvsp[(2) - (2)])); strcat(fi,temp); ;}
    break;

  case 46:

/* Line 1464 of yacc.c  */
#line 139 "parser1.y"
    {strcpy(previous_operator,"=");;}
    break;

  case 47:

/* Line 1464 of yacc.c  */
#line 139 "parser1.y"
    { insert_value(); ;}
    break;

  case 48:

/* Line 1464 of yacc.c  */
#line 142 "parser1.y"
    {strcpy(previous_operator,"=");;}
    break;

  case 57:

/* Line 1464 of yacc.c  */
#line 153 "parser1.y"
    {strcpy(current_type,"int*");;}
    break;

  case 58:

/* Line 1464 of yacc.c  */
#line 153 "parser1.y"
    {strcpy(current_type,"char*");;}
    break;

  case 59:

/* Line 1464 of yacc.c  */
#line 153 "parser1.y"
    {strcpy(current_type,"float*");;}
    break;

  case 78:

/* Line 1464 of yacc.c  */
#line 176 "parser1.y"
    {strcpy(current_function,current_identifier); insert_type();;}
    break;

  case 85:

/* Line 1464 of yacc.c  */
#line 192 "parser1.y"
    { insert_parameters(); insert_type(); ;}
    break;

  case 122:

/* Line 1464 of yacc.c  */
#line 257 "parser1.y"
    {strcpy(previous_operator,"=");;}
    break;

  case 124:

/* Line 1464 of yacc.c  */
#line 258 "parser1.y"
    {strcpy(previous_operator,"+=");;}
    break;

  case 126:

/* Line 1464 of yacc.c  */
#line 259 "parser1.y"
    {strcpy(previous_operator,"-=");;}
    break;

  case 128:

/* Line 1464 of yacc.c  */
#line 260 "parser1.y"
    {strcpy(previous_operator,"*=");;}
    break;

  case 130:

/* Line 1464 of yacc.c  */
#line 261 "parser1.y"
    {strcpy(previous_operator,"/=");;}
    break;

  case 132:

/* Line 1464 of yacc.c  */
#line 262 "parser1.y"
    {strcpy(previous_operator,"%=");;}
    break;

  case 147:

/* Line 1464 of yacc.c  */
#line 291 "parser1.y"
    {strcpy(previous_operator,">=");;}
    break;

  case 148:

/* Line 1464 of yacc.c  */
#line 292 "parser1.y"
    {strcpy(previous_operator,"<=");;}
    break;

  case 149:

/* Line 1464 of yacc.c  */
#line 293 "parser1.y"
    {strcpy(previous_operator,">");;}
    break;

  case 150:

/* Line 1464 of yacc.c  */
#line 294 "parser1.y"
    {strcpy(previous_operator,"<");;}
    break;

  case 151:

/* Line 1464 of yacc.c  */
#line 295 "parser1.y"
    {strcpy(previous_operator,"==");;}
    break;

  case 152:

/* Line 1464 of yacc.c  */
#line 296 "parser1.y"
    {strcpy(previous_operator,"!=");;}
    break;

  case 168:

/* Line 1464 of yacc.c  */
#line 325 "parser1.y"
    {strcpy(previous_operator,"(");;}
    break;

  case 172:

/* Line 1464 of yacc.c  */
#line 329 "parser1.y"
    {strcpy(previous_operator,"(");;}
    break;

  case 179:

/* Line 1464 of yacc.c  */
#line 342 "parser1.y"
    { insert_value(); ;}
    break;

  case 180:

/* Line 1464 of yacc.c  */
#line 343 "parser1.y"
    { insert_value(); ;}
    break;

  case 181:

/* Line 1464 of yacc.c  */
#line 344 "parser1.y"
    { insert_value(); ;}
    break;

  case 182:

/* Line 1464 of yacc.c  */
#line 345 "parser1.y"
    { insert_value(); ;}
    break;



/* Line 1464 of yacc.c  */
#line 1934 "parser1.tab.c"
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
#line 347 "parser1.y"


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
