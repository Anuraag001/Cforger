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



/* Line 189 of yacc.c  */
#line 96 "parser1.tab.c"

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
#line 188 "parser1.tab.c"

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
#define YYFINAL  39
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   262

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  83
/* YYNRULES -- Number of rules.  */
#define YYNRULES  164
/* YYNRULES -- Number of states.  */
#define YYNSTATES  253

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
      82,    83,    84,    89,    92,    94,    96,    97,    98,   102,
     103,   109,   112,   115,   116,   118,   120,   122,   124,   127,
     130,   133,   136,   138,   140,   143,   146,   147,   149,   152,
     155,   156,   158,   159,   161,   162,   165,   169,   173,   176,
     177,   180,   183,   184,   185,   189,   192,   193,   195,   197,
     199,   201,   203,   205,   207,   211,   214,   215,   218,   220,
     227,   230,   231,   237,   245,   253,   255,   258,   260,   263,
     265,   268,   271,   274,   276,   277,   281,   282,   286,   287,
     291,   292,   296,   297,   301,   302,   306,   308,   310,   313,
     317,   318,   321,   325,   326,   329,   331,   334,   337,   338,
     340,   342,   344,   346,   348,   350,   354,   356,   358,   360,
     364,   366,   368,   370,   372,   374,   376,   378,   381,   385,
     388,   389,   394,   396,   398,   399,   405,   407,   408,   411,
     415,   416,   418,   420,   422
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      71,     0,    -1,    72,    -1,    73,    72,    -1,    -1,    79,
      -1,   102,    -1,    76,    -1,    74,    -1,    75,    -1,    15,
      58,    28,    59,    60,    -1,    16,    28,    28,    -1,    16,
      28,     4,    -1,    16,    28,     6,    -1,    -1,    12,    28,
      77,    61,    78,    62,    63,    -1,    79,    78,    -1,    -1,
      97,    81,    63,    -1,    80,    -1,    12,    28,    81,    -1,
      83,    82,    -1,    64,    81,    -1,    -1,    -1,    28,    84,
      85,    -1,    87,    -1,    -1,    39,    86,   122,    -1,    65,
      88,    -1,    -1,    -1,    29,    89,    66,    90,    -1,    66,
      91,    -1,    91,    -1,    93,    -1,    -1,    -1,    39,    92,
      30,    -1,    -1,    39,    94,    61,    95,    62,    -1,    29,
      96,    -1,    64,    95,    -1,    -1,     4,    -1,     5,    -1,
       6,    -1,     7,    -1,     8,   100,    -1,     9,   101,    -1,
      11,    98,    -1,    10,    99,    -1,    17,    -1,     4,    -1,
       8,   100,    -1,     9,   101,    -1,    -1,     4,    -1,     8,
     100,    -1,     9,   101,    -1,    -1,     4,    -1,    -1,     4,
      -1,    -1,   103,   104,    -1,    97,    28,    67,    -1,   105,
      68,   111,    -1,    97,   106,    -1,    -1,   108,   107,    -1,
      64,   105,    -1,    -1,    -1,    28,   109,   110,    -1,    65,
      66,    -1,    -1,   114,    -1,   112,    -1,   115,    -1,   117,
      -1,   119,    -1,   121,    -1,    79,    -1,    61,   113,    62,
      -1,   111,   113,    -1,    -1,   122,    63,    -1,    63,    -1,
       3,    67,   130,    68,   111,   116,    -1,    33,   111,    -1,
      -1,    18,    67,   130,    68,   111,    -1,    19,    67,   118,
     130,    63,   122,    68,    -1,    20,   111,    18,    67,   130,
      68,    63,    -1,    79,    -1,   122,    63,    -1,    63,    -1,
      13,   120,    -1,    63,    -1,   122,    63,    -1,    21,    63,
      -1,   143,   123,    -1,   130,    -1,    -1,    39,   124,   122,
      -1,    -1,    38,   125,   122,    -1,    -1,    37,   126,   122,
      -1,    -1,    36,   127,   122,    -1,    -1,    35,   128,   122,
      -1,    -1,    34,   129,   122,    -1,    57,    -1,    56,    -1,
     132,   131,    -1,    40,   132,   131,    -1,    -1,   134,   133,
      -1,    41,   134,   133,    -1,    -1,    55,   134,    -1,   135,
      -1,   138,   136,    -1,   137,   138,    -1,    -1,    46,    -1,
      48,    -1,    45,    -1,    47,    -1,    44,    -1,    43,    -1,
     138,   139,   140,    -1,   140,    -1,    49,    -1,    50,    -1,
     140,   141,   142,    -1,   142,    -1,    51,    -1,    52,    -1,
      53,    -1,   145,    -1,   143,    -1,    28,    -1,   143,   144,
      -1,    65,   122,    66,    -1,    69,    28,    -1,    -1,    67,
     146,   122,    68,    -1,   147,    -1,   152,    -1,    -1,    28,
      67,   148,   149,    68,    -1,   150,    -1,    -1,   122,   151,
      -1,    64,   122,   151,    -1,    -1,    29,    -1,    30,    -1,
      31,    -1,    32,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    61,    61,    64,    65,    69,    70,    71,    72,    73,
      77,    81,    82,    83,    89,    89,    91,    91,    94,    95,
      98,   101,   104,   105,   108,   108,   110,   110,   110,   113,
     114,   117,   117,   118,   121,   122,   123,   126,   126,   129,
     129,   132,   135,   136,   140,   140,   140,   140,   141,   142,
     143,   144,   145,   148,   148,   148,   148,   151,   151,   151,
     151,   154,   154,   157,   157,   160,   163,   166,   169,   169,
     172,   175,   176,   179,   179,   182,   183,   186,   186,   187,
     187,   188,   188,   189,   192,   195,   196,   199,   200,   203,
     206,   207,   210,   211,   212,   215,   216,   217,   220,   223,
     224,   227,   230,   231,   234,   234,   235,   235,   236,   236,
     237,   237,   238,   238,   239,   239,   240,   241,   244,   247,
     247,   250,   253,   254,   257,   258,   261,   264,   265,   268,
     269,   270,   271,   272,   273,   276,   277,   280,   281,   284,
     285,   288,   288,   288,   291,   291,   294,   295,   298,   299,
     302,   302,   303,   303,   306,   306,   309,   309,   312,   315,
     316,   319,   320,   321,   322
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
  "initilization", "string_initilization", "$@5", "array_initialization",
  "$@6", "array_values", "multiple_array_values", "datatype",
  "unsigned_grammar", "signed_grammar", "long_grammar", "short_grammar",
  "function_dec", "function_datatype", "function_parameters", "parameters",
  "all_parameter_identifiers", "multiple_parameters",
  "parameter_identifier", "$@7", "extended_parameter", "statement",
  "multiple_statement", "statments", "expression_statment",
  "conditional_statements", "extended_conditional_statements",
  "iterative_statements", "for_initialization", "return_statement",
  "return_suffix", "break_statement", "expression", "expressions", "$@8",
  "$@9", "$@10", "$@11", "$@12", "$@13", "simple_expression",
  "simple_expression_breakup", "and_expression", "and_expression_breakup",
  "unary_relation_expression", "regular_expression",
  "regular_expression_breakup", "relational_operators", "sum_expression",
  "sum_operators", "term", "multiply_operators", "factor", "iden",
  "extended_iden", "func", "$@14", "func_call", "$@15", "arguments",
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
      87,    89,    88,    88,    90,    90,    90,    92,    91,    94,
      93,    95,    96,    96,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    98,    98,    98,    98,    99,    99,    99,
      99,   100,   100,   101,   101,   102,   103,   104,   105,   105,
     106,   107,   107,   109,   108,   110,   110,   111,   111,   111,
     111,   111,   111,   111,   112,   113,   113,   114,   114,   115,
     116,   116,   117,   117,   117,   118,   118,   118,   119,   120,
     120,   121,   122,   122,   124,   123,   125,   123,   126,   123,
     127,   123,   128,   123,   129,   123,   123,   123,   130,   131,
     131,   132,   133,   133,   134,   134,   135,   136,   136,   137,
     137,   137,   137,   137,   137,   138,   138,   139,   139,   140,
     140,   141,   141,   141,   142,   142,   143,   143,   144,   144,
     146,   145,   145,   145,   148,   147,   149,   149,   150,   151,
     151,   152,   152,   152,   152
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     1,     1,
       5,     3,     3,     3,     0,     7,     2,     0,     3,     1,
       3,     2,     2,     0,     0,     3,     1,     0,     3,     2,
       0,     0,     4,     2,     1,     1,     0,     0,     3,     0,
       5,     2,     2,     0,     1,     1,     1,     1,     2,     2,
       2,     2,     1,     1,     2,     2,     0,     1,     2,     2,
       0,     1,     0,     1,     0,     2,     3,     3,     2,     0,
       2,     2,     0,     0,     3,     2,     0,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     0,     2,     1,     6,
       2,     0,     5,     7,     7,     1,     2,     1,     2,     1,
       2,     2,     2,     1,     0,     3,     0,     3,     0,     3,
       0,     3,     0,     3,     0,     3,     1,     1,     2,     3,
       0,     2,     3,     0,     2,     1,     2,     2,     0,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     2,     3,     2,
       0,     4,     1,     1,     0,     5,     1,     0,     2,     3,
       0,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,    44,    45,    46,    47,    62,    64,    60,    56,     0,
       0,     0,    52,     0,     2,     4,     8,     9,     7,     5,
      19,     0,     6,    69,    61,    48,    63,    49,    57,    62,
      64,    51,    53,    62,    64,    50,    14,     0,     0,     1,
       3,    24,     0,    23,     0,    65,     0,    58,    59,    54,
      55,    24,     0,    20,     0,    12,    13,    11,    66,    30,
      18,     0,    21,    73,    68,    72,     0,    17,     0,    27,
       0,    25,    26,    22,    76,    69,    70,     0,     0,     0,
       0,     0,     0,     0,   146,   161,   162,   163,   164,     0,
      86,    88,   150,    83,     0,    67,    78,    77,    79,    80,
      81,    82,     0,   103,   120,   123,   125,   128,   136,   140,
     145,   144,   152,   153,     0,    17,    10,     0,    31,     0,
      29,     0,    74,    71,     0,     0,    99,    98,     0,     0,
       0,     0,   101,   154,   124,   145,    86,     0,     0,    87,
       0,   118,     0,   121,   134,   133,   131,   129,   132,   130,
     137,   138,   126,     0,     0,   141,   142,   143,     0,   114,
     112,   110,   108,   106,   104,   117,   116,     0,     0,   102,
     147,     0,    16,    28,     0,    37,    33,    75,     0,   100,
       0,    97,    95,     0,     0,     0,   157,    85,    84,     0,
     120,   123,   127,   135,   139,     0,     0,     0,     0,     0,
       0,     0,   149,    15,    36,     0,     0,     0,     0,    96,
       0,   160,     0,   156,   151,   119,   122,   115,   113,   111,
     109,   107,   105,   148,    37,    32,    34,    35,    38,    91,
      92,     0,     0,     0,   158,   155,     0,     0,    89,     0,
       0,   160,     0,    90,    93,    94,   159,    43,     0,     0,
      41,    40,    42
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    15,    16,    17,    18,    52,   114,    93,
      20,    42,    62,    43,    59,    71,   117,    72,   120,   174,
     225,   176,   205,   227,   236,   248,   250,    94,    35,    31,
      25,    27,    22,    23,    45,    46,    64,    76,    65,    74,
     122,   136,    96,   137,    97,    98,   238,    99,   183,   100,
     127,   101,   102,   169,   200,   199,   198,   197,   196,   195,
     103,   141,   104,   143,   105,   106,   152,   153,   107,   154,
     108,   158,   109,   110,   170,   111,   138,   112,   186,   212,
     213,   234,   113
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -121
static const yytype_int16 yypact[] =
{
     224,  -121,  -121,  -121,  -121,    15,    31,    17,    57,     1,
     -16,    19,  -121,    48,  -121,   224,  -121,  -121,  -121,  -121,
    -121,    36,  -121,   238,  -121,  -121,  -121,  -121,  -121,    15,
      31,  -121,  -121,    15,    31,  -121,    42,    43,    18,  -121,
    -121,   -17,   -10,     9,    46,  -121,    11,  -121,  -121,  -121,
    -121,  -121,    26,  -121,    29,  -121,  -121,  -121,  -121,   -24,
    -121,    42,  -121,  -121,  -121,    34,   155,   139,    39,  -121,
     -22,  -121,  -121,  -121,    35,   238,  -121,    38,    73,   -18,
      40,    44,   155,    50,    58,  -121,  -121,  -121,  -121,     2,
     155,  -121,  -121,  -121,    42,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,    51,  -121,    62,    65,  -121,   145,    25,  -121,
      47,  -121,  -121,  -121,    53,   139,  -121,     2,  -121,    70,
    -121,    60,  -121,  -121,     2,    42,  -121,  -121,    66,     2,
     195,    92,  -121,  -121,  -121,   -29,   155,    68,     2,  -121,
       2,  -121,     2,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,    64,    64,  -121,  -121,  -121,    64,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,     2,    99,  -121,
    -121,    69,  -121,  -121,    67,  -121,  -121,  -121,    71,  -121,
      74,  -121,  -121,     2,    72,    61,     2,  -121,  -121,    84,
      62,    65,   -32,    25,  -121,     2,     2,     2,     2,     2,
       2,    88,  -121,  -121,    95,   106,   155,   155,    94,  -121,
       2,   105,   102,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,    76,  -121,  -121,  -121,  -121,   144,
    -121,     2,   110,     2,  -121,  -121,   118,   155,  -121,   112,
     119,   105,   152,  -121,  -121,  -121,  -121,   132,   135,   152,
    -121,  -121,  -121
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -121,  -121,   183,  -121,  -121,  -121,  -121,  -121,    93,     8,
    -121,   -34,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,     7,  -121,  -121,  -121,   -40,  -121,     5,  -121,  -121,
      22,    28,  -121,  -121,  -121,   138,  -121,  -121,  -121,  -121,
    -121,   -66,  -121,    78,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,   -78,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -120,    27,    75,    30,   -83,  -121,  -121,  -121,    85,  -121,
      83,  -121,    96,   -86,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,   -21,  -121
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -40
static const yytype_int16 yytable[] =
{
      95,   128,    53,   135,   178,    21,   134,   118,    19,   180,
      84,    85,    86,    87,    88,    69,   131,   150,   151,    24,
      21,    28,    55,    19,    56,    29,    30,    73,    44,    36,
      84,    85,    86,    87,    88,    26,   167,    89,   135,   173,
     168,    70,    37,   135,   119,   126,    57,    38,    39,    92,
      58,    47,   184,    60,   135,    49,   135,    89,    48,   191,
     189,    32,    50,   208,    41,    33,    34,   135,   135,    92,
      51,    54,   135,    61,    63,   115,   155,   156,   157,    66,
      44,   159,   160,   161,   162,   163,   164,    67,    68,   201,
     232,    53,    84,    85,    86,    87,    88,   135,    75,   116,
     121,   125,   140,   165,   166,   124,   142,   129,   211,   175,
     185,   130,   167,   132,   139,   171,   168,   217,   218,   219,
     220,   221,   222,   115,   135,   133,   177,   202,   210,   179,
     188,    92,   203,   204,   224,   209,   228,   -39,   182,   206,
     229,   230,   207,     1,     2,     3,     4,     5,     6,     7,
       8,    78,   214,   239,   223,   241,    12,   231,    77,     1,
       2,     3,     4,     5,     6,     7,     8,    78,    79,   233,
     235,   243,    12,    80,    81,    82,    83,   237,   240,   242,
     244,   247,   245,    84,    85,    86,    87,    88,   144,   145,
     146,   147,   148,   149,   150,   151,   249,   251,    40,     1,
       2,     3,     4,     5,     6,     7,     8,    78,   172,   252,
      89,   226,    12,   123,   187,   190,    90,   215,    91,     0,
     246,   216,    92,    84,    85,    86,    87,    88,     1,     2,
       3,     4,     5,     6,     7,     8,     9,   193,   192,    10,
      11,    12,     1,     2,     3,     4,     5,     6,     7,     8,
      89,     0,     0,     0,   194,    12,     0,     0,   181,     0,
       0,     0,    92
};

static const yytype_int16 yycheck[] =
{
      66,    79,    36,    89,   124,     0,    89,    29,     0,   129,
      28,    29,    30,    31,    32,    39,    82,    49,    50,     4,
      15,     4,     4,    15,     6,     8,     9,    61,    23,    28,
      28,    29,    30,    31,    32,     4,    65,    55,   124,   117,
      69,    65,    58,   129,    66,    63,    28,    28,     0,    67,
      67,    29,   130,    63,   140,    33,   142,    55,    30,   142,
     138,     4,    34,   183,    28,     8,     9,   153,   154,    67,
      28,    28,   158,    64,    28,    67,    51,    52,    53,    68,
      75,    34,    35,    36,    37,    38,    39,    61,    59,   167,
     210,   125,    28,    29,    30,    31,    32,   183,    64,    60,
      65,    28,    40,    56,    57,    67,    41,    67,   186,    39,
      18,    67,    65,    63,    63,    62,    69,   195,   196,   197,
     198,   199,   200,   115,   210,    67,    66,    28,    67,    63,
      62,    67,    63,    66,    39,    63,    30,    61,   130,    68,
     206,   207,    68,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    68,   231,    66,   233,    17,    63,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    64,
      68,   237,    17,    18,    19,    20,    21,    33,    68,    61,
      68,    29,    63,    28,    29,    30,    31,    32,    43,    44,
      45,    46,    47,    48,    49,    50,    64,    62,    15,     4,
       5,     6,     7,     8,     9,    10,    11,    12,   115,   249,
      55,   204,    17,    75,   136,   140,    61,   190,    63,    -1,
     241,   191,    67,    28,    29,    30,    31,    32,     4,     5,
       6,     7,     8,     9,    10,    11,    12,   154,   153,    15,
      16,    17,     4,     5,     6,     7,     8,     9,    10,    11,
      55,    -1,    -1,    -1,   158,    17,    -1,    -1,    63,    -1,
      -1,    -1,    67
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      15,    16,    17,    71,    72,    73,    74,    75,    76,    79,
      80,    97,   102,   103,     4,   100,     4,   101,     4,     8,
       9,    99,     4,     8,     9,    98,    28,    58,    28,     0,
      72,    28,    81,    83,    97,   104,   105,   100,   101,   100,
     101,    28,    77,    81,    28,     4,     6,    28,    67,    84,
      63,    64,    82,    28,   106,   108,    68,    61,    59,    39,
      65,    85,    87,    81,   109,    64,   107,     3,    12,    13,
      18,    19,    20,    21,    28,    29,    30,    31,    32,    55,
      61,    63,    67,    79,    97,   111,   112,   114,   115,   117,
     119,   121,   122,   130,   132,   134,   135,   138,   140,   142,
     143,   145,   147,   152,    78,    79,    60,    86,    29,    66,
      88,    65,   110,   105,    67,    28,    63,   120,   122,    67,
      67,   111,    63,    67,   134,   143,   111,   113,   146,    63,
      40,   131,    41,   133,    43,    44,    45,    46,    47,    48,
      49,    50,   136,   137,   139,    51,    52,    53,   141,    34,
      35,    36,    37,    38,    39,    56,    57,    65,    69,   123,
     144,    62,    78,   122,    89,    39,    91,    66,   130,    63,
     130,    63,    79,   118,   122,    18,   148,   113,    62,   122,
     132,   134,   138,   140,   142,   129,   128,   127,   126,   125,
     124,   122,    28,    63,    66,    92,    68,    68,   130,    63,
      67,   122,   149,   150,    68,   131,   133,   122,   122,   122,
     122,   122,   122,    66,    39,    90,    91,    93,    30,   111,
     111,    63,   130,    64,   151,    68,    94,    33,   116,   122,
      68,   122,    61,   111,    68,    63,   151,    29,    95,    64,
      96,    62,    95
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
#line 89 "parser1.y"
    { insert_type(); ;}
    break;

  case 24:

/* Line 1464 of yacc.c  */
#line 108 "parser1.y"
    { insert_type(); ;}
    break;

  case 27:

/* Line 1464 of yacc.c  */
#line 110 "parser1.y"
    {strcpy(previous_operator,"=");;}
    break;

  case 31:

/* Line 1464 of yacc.c  */
#line 117 "parser1.y"
    {insert_dimensions();;}
    break;

  case 37:

/* Line 1464 of yacc.c  */
#line 126 "parser1.y"
    {strcpy(previous_operator,"=");;}
    break;

  case 38:

/* Line 1464 of yacc.c  */
#line 126 "parser1.y"
    { insert_value(); ;}
    break;

  case 39:

/* Line 1464 of yacc.c  */
#line 129 "parser1.y"
    {strcpy(previous_operator,"=");;}
    break;

  case 66:

/* Line 1464 of yacc.c  */
#line 163 "parser1.y"
    {strcpy(current_function,current_identifier); insert_type();;}
    break;

  case 73:

/* Line 1464 of yacc.c  */
#line 179 "parser1.y"
    { insert_parameters(); insert_type(); ;}
    break;

  case 104:

/* Line 1464 of yacc.c  */
#line 234 "parser1.y"
    {strcpy(previous_operator,"=");;}
    break;

  case 106:

/* Line 1464 of yacc.c  */
#line 235 "parser1.y"
    {strcpy(previous_operator,"+=");;}
    break;

  case 108:

/* Line 1464 of yacc.c  */
#line 236 "parser1.y"
    {strcpy(previous_operator,"-=");;}
    break;

  case 110:

/* Line 1464 of yacc.c  */
#line 237 "parser1.y"
    {strcpy(previous_operator,"*=");;}
    break;

  case 112:

/* Line 1464 of yacc.c  */
#line 238 "parser1.y"
    {strcpy(previous_operator,"/=");;}
    break;

  case 114:

/* Line 1464 of yacc.c  */
#line 239 "parser1.y"
    {strcpy(previous_operator,"%=");;}
    break;

  case 129:

/* Line 1464 of yacc.c  */
#line 268 "parser1.y"
    {strcpy(previous_operator,">=");;}
    break;

  case 130:

/* Line 1464 of yacc.c  */
#line 269 "parser1.y"
    {strcpy(previous_operator,"<=");;}
    break;

  case 131:

/* Line 1464 of yacc.c  */
#line 270 "parser1.y"
    {strcpy(previous_operator,">");;}
    break;

  case 132:

/* Line 1464 of yacc.c  */
#line 271 "parser1.y"
    {strcpy(previous_operator,"<");;}
    break;

  case 133:

/* Line 1464 of yacc.c  */
#line 272 "parser1.y"
    {strcpy(previous_operator,"==");;}
    break;

  case 134:

/* Line 1464 of yacc.c  */
#line 273 "parser1.y"
    {strcpy(previous_operator,"!=");;}
    break;

  case 150:

/* Line 1464 of yacc.c  */
#line 302 "parser1.y"
    {strcpy(previous_operator,"(");;}
    break;

  case 154:

/* Line 1464 of yacc.c  */
#line 306 "parser1.y"
    {strcpy(previous_operator,"(");;}
    break;

  case 161:

/* Line 1464 of yacc.c  */
#line 319 "parser1.y"
    { insert_value(); ;}
    break;

  case 162:

/* Line 1464 of yacc.c  */
#line 320 "parser1.y"
    { insert_value(); ;}
    break;

  case 163:

/* Line 1464 of yacc.c  */
#line 321 "parser1.y"
    { insert_value(); ;}
    break;

  case 164:

/* Line 1464 of yacc.c  */
#line 322 "parser1.y"
    { insert_value(); ;}
    break;



/* Line 1464 of yacc.c  */
#line 1853 "parser1.tab.c"
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
#line 324 "parser1.y"


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
