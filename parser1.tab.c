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
#line 95 "parser1.tab.c"

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
     VOID = 270,
     WHILE = 271,
     FOR = 272,
     DO = 273,
     BREAK = 274,
     CONTINUE = 275,
     GOTO = 276,
     ENDIF = 277,
     SWITCH = 278,
     CASE = 279,
     DEFAULT = 280,
     identifier = 281,
     integer_constant = 282,
     string_constant = 283,
     float_constant = 284,
     character_constant = 285,
     ELSE = 286,
     MOD_EQUAL = 287,
     DIVIDE_EQUAL = 288,
     MULTIPLY_EQUAL = 289,
     SUBTRACT_EQUAL = 290,
     ADD_EQUAL = 291,
     OR_OR = 292,
     AND_AND = 293,
     NOT_EQUAL = 294,
     EQUAL = 295,
     GREAT = 296,
     GREAT_EQUAL = 297,
     LESS = 298,
     LESS_EQUAL = 299,
     SIZEOF = 300,
     NOT = 301,
     DECREMENT = 302,
     INCREMENT = 303
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
#line 185 "parser1.tab.c"

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
#define YYFINAL  33
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   249

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  81
/* YYNRULES -- Number of rules.  */
#define YYNRULES  158
/* YYNRULES -- Number of states.  */
#define YYNSTATES  241

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   303

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    51,     2,     2,
      62,    63,    49,    47,    59,    48,    64,    50,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    58,
       2,    37,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    60,     2,    61,    40,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,     2,    57,     2,     2,     2,     2,
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
      35,    36,    38,    39,    41,    42,    43,    44,    45,    46,
      52,    53,    54,    55
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    11,    13,    15,    16,
      24,    27,    28,    32,    34,    38,    41,    44,    45,    46,
      50,    52,    53,    57,    60,    61,    62,    67,    70,    72,
      74,    75,    76,    80,    81,    87,    90,    93,    94,    96,
      98,   100,   102,   105,   108,   111,   114,   116,   118,   121,
     124,   125,   127,   130,   133,   134,   136,   137,   139,   140,
     143,   147,   151,   154,   155,   158,   161,   162,   163,   167,
     170,   171,   173,   175,   177,   179,   181,   183,   185,   189,
     192,   193,   196,   198,   205,   208,   209,   215,   223,   231,
     233,   236,   238,   241,   243,   246,   249,   252,   254,   255,
     259,   260,   264,   265,   269,   270,   274,   275,   279,   280,
     284,   286,   288,   291,   295,   296,   299,   303,   304,   307,
     309,   312,   315,   316,   318,   320,   322,   324,   326,   328,
     332,   334,   336,   338,   342,   344,   346,   348,   350,   352,
     354,   356,   359,   363,   366,   367,   372,   374,   376,   377,
     383,   385,   386,   389,   393,   394,   396,   398,   400
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      66,     0,    -1,    67,    -1,    68,    67,    -1,    -1,    72,
      -1,    95,    -1,    69,    -1,    -1,    12,    26,    70,    56,
      71,    57,    58,    -1,    72,    71,    -1,    -1,    90,    74,
      58,    -1,    73,    -1,    12,    26,    74,    -1,    76,    75,
      -1,    59,    74,    -1,    -1,    -1,    26,    77,    78,    -1,
      80,    -1,    -1,    37,    79,   115,    -1,    60,    81,    -1,
      -1,    -1,    27,    82,    61,    83,    -1,    61,    84,    -1,
      84,    -1,    86,    -1,    -1,    -1,    37,    85,    28,    -1,
      -1,    37,    87,    56,    88,    57,    -1,    27,    89,    -1,
      59,    88,    -1,    -1,     4,    -1,     5,    -1,     6,    -1,
       7,    -1,     8,    93,    -1,     9,    94,    -1,    11,    91,
      -1,    10,    92,    -1,    15,    -1,     4,    -1,     8,    93,
      -1,     9,    94,    -1,    -1,     4,    -1,     8,    93,    -1,
       9,    94,    -1,    -1,     4,    -1,    -1,     4,    -1,    -1,
      96,    97,    -1,    90,    26,    62,    -1,    98,    63,   104,
      -1,    90,    99,    -1,    -1,   101,   100,    -1,    59,    98,
      -1,    -1,    -1,    26,   102,   103,    -1,    60,    61,    -1,
      -1,   107,    -1,   105,    -1,   108,    -1,   110,    -1,   112,
      -1,   114,    -1,    72,    -1,    56,   106,    57,    -1,   104,
     106,    -1,    -1,   115,    58,    -1,    58,    -1,     3,    62,
     123,    63,   104,   109,    -1,    31,   104,    -1,    -1,    16,
      62,   123,    63,   104,    -1,    17,    62,   111,   123,    58,
     115,    63,    -1,    18,   104,    16,    62,   123,    63,    58,
      -1,    72,    -1,   115,    58,    -1,    58,    -1,    13,   113,
      -1,    58,    -1,   115,    58,    -1,    19,    58,    -1,   136,
     116,    -1,   123,    -1,    -1,    37,   117,   115,    -1,    -1,
      36,   118,   115,    -1,    -1,    35,   119,   115,    -1,    -1,
      34,   120,   115,    -1,    -1,    33,   121,   115,    -1,    -1,
      32,   122,   115,    -1,    55,    -1,    54,    -1,   125,   124,
      -1,    38,   125,   124,    -1,    -1,   127,   126,    -1,    39,
     127,   126,    -1,    -1,    53,   127,    -1,   128,    -1,   131,
     129,    -1,   130,   131,    -1,    -1,    44,    -1,    46,    -1,
      43,    -1,    45,    -1,    42,    -1,    41,    -1,   131,   132,
     133,    -1,   133,    -1,    47,    -1,    48,    -1,   133,   134,
     135,    -1,   135,    -1,    49,    -1,    50,    -1,    51,    -1,
     138,    -1,   136,    -1,    26,    -1,   136,   137,    -1,    60,
     115,    61,    -1,    64,    26,    -1,    -1,    62,   139,   115,
      63,    -1,   140,    -1,   145,    -1,    -1,    26,    62,   141,
     142,    63,    -1,   143,    -1,    -1,   115,   144,    -1,    59,
     115,   144,    -1,    -1,    27,    -1,    28,    -1,    29,    -1,
      30,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    60,    60,    63,    64,    68,    69,    70,    73,    73,
      75,    75,    78,    79,    82,    85,    88,    89,    92,    92,
      94,    94,    94,    97,    98,   101,   101,   102,   105,   106,
     107,   110,   110,   113,   113,   116,   119,   120,   124,   124,
     124,   124,   125,   126,   127,   128,   129,   132,   132,   132,
     132,   135,   135,   135,   135,   138,   138,   141,   141,   144,
     147,   150,   153,   153,   156,   159,   160,   163,   163,   166,
     167,   170,   170,   171,   171,   172,   172,   173,   176,   179,
     180,   183,   184,   187,   190,   191,   194,   195,   196,   199,
     200,   201,   204,   207,   208,   211,   214,   215,   218,   218,
     219,   219,   220,   220,   221,   221,   222,   222,   223,   223,
     224,   225,   228,   231,   231,   234,   237,   238,   241,   242,
     245,   248,   249,   252,   253,   254,   255,   256,   257,   260,
     261,   264,   265,   268,   269,   272,   272,   272,   275,   275,
     278,   279,   282,   283,   286,   286,   287,   287,   290,   290,
     293,   293,   296,   299,   300,   303,   304,   305,   306
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "INT", "CHAR", "FLOAT", "DOUBLE",
  "LONG", "SHORT", "SIGNED", "UNSIGNED", "STRUCT", "RETURN", "MAIN",
  "VOID", "WHILE", "FOR", "DO", "BREAK", "CONTINUE", "GOTO", "ENDIF",
  "SWITCH", "CASE", "DEFAULT", "identifier", "integer_constant",
  "string_constant", "float_constant", "character_constant", "ELSE",
  "MOD_EQUAL", "DIVIDE_EQUAL", "MULTIPLY_EQUAL", "SUBTRACT_EQUAL",
  "ADD_EQUAL", "'='", "OR_OR", "AND_AND", "'^'", "NOT_EQUAL", "EQUAL",
  "GREAT", "GREAT_EQUAL", "LESS", "LESS_EQUAL", "'+'", "'-'", "'*'", "'/'",
  "'%'", "SIZEOF", "NOT", "DECREMENT", "INCREMENT", "'{'", "'}'", "';'",
  "','", "'['", "']'", "'('", "')'", "'.'", "$accept", "begin_parse",
  "declarations", "declaration", "structure_dec", "$@1",
  "structure_content", "variable_dec", "structure_initialize", "variables",
  "multiple_variables", "identifier_name", "$@2", "extended_identifier",
  "$@3", "array_identifier", "array_dims", "$@4", "initilization",
  "string_initilization", "$@5", "array_initialization", "$@6",
  "array_values", "multiple_array_values", "datatype", "unsigned_grammar",
  "signed_grammar", "long_grammar", "short_grammar", "function_dec",
  "function_datatype", "function_parameters", "parameters",
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
     285,   286,   287,   288,   289,   290,   291,    61,   292,   293,
      94,   294,   295,   296,   297,   298,   299,    43,    45,    42,
      47,    37,   300,   301,   302,   303,   123,   125,    59,    44,
      91,    93,    40,    41,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    67,    67,    68,    68,    68,    70,    69,
      71,    71,    72,    72,    73,    74,    75,    75,    77,    76,
      78,    79,    78,    80,    80,    82,    81,    81,    83,    83,
      83,    85,    84,    87,    86,    88,    89,    89,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    91,    91,    91,
      91,    92,    92,    92,    92,    93,    93,    94,    94,    95,
      96,    97,    98,    98,    99,   100,   100,   102,   101,   103,
     103,   104,   104,   104,   104,   104,   104,   104,   105,   106,
     106,   107,   107,   108,   109,   109,   110,   110,   110,   111,
     111,   111,   112,   113,   113,   114,   115,   115,   117,   116,
     118,   116,   119,   116,   120,   116,   121,   116,   122,   116,
     116,   116,   123,   124,   124,   125,   126,   126,   127,   127,
     128,   129,   129,   130,   130,   130,   130,   130,   130,   131,
     131,   132,   132,   133,   133,   134,   134,   134,   135,   135,
     136,   136,   137,   137,   139,   138,   138,   138,   141,   140,
     142,   142,   143,   144,   144,   145,   145,   145,   145
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     0,     7,
       2,     0,     3,     1,     3,     2,     2,     0,     0,     3,
       1,     0,     3,     2,     0,     0,     4,     2,     1,     1,
       0,     0,     3,     0,     5,     2,     2,     0,     1,     1,
       1,     1,     2,     2,     2,     2,     1,     1,     2,     2,
       0,     1,     2,     2,     0,     1,     0,     1,     0,     2,
       3,     3,     2,     0,     2,     2,     0,     0,     3,     2,
       0,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       0,     2,     1,     6,     2,     0,     5,     7,     7,     1,
       2,     1,     2,     1,     2,     2,     2,     1,     0,     3,
       0,     3,     0,     3,     0,     3,     0,     3,     0,     3,
       1,     1,     2,     3,     0,     2,     3,     0,     2,     1,
       2,     2,     0,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     2,     0,     4,     1,     1,     0,     5,
       1,     0,     2,     3,     0,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,    38,    39,    40,    41,    56,    58,    54,    50,     0,
      46,     0,     2,     4,     7,     5,    13,     0,     6,    63,
      55,    42,    57,    43,    51,    56,    58,    45,    47,    56,
      58,    44,     8,     1,     3,    18,     0,    17,     0,    59,
       0,    52,    53,    48,    49,    18,     0,    14,    60,    24,
      12,     0,    15,    67,    62,    66,     0,    11,    21,     0,
      19,    20,    16,    70,    63,    64,     0,     0,     0,     0,
       0,     0,     0,   140,   155,   156,   157,   158,     0,    80,
      82,   144,    77,     0,    61,    72,    71,    73,    74,    75,
      76,     0,    97,   114,   117,   119,   122,   130,   134,   139,
     138,   146,   147,     0,    11,     0,    25,     0,    23,     0,
      68,    65,     0,     0,    93,    92,     0,     0,     0,     0,
      95,   148,   118,   139,    80,     0,     0,    81,     0,   112,
       0,   115,   128,   127,   125,   123,   126,   124,   131,   132,
     120,     0,     0,   135,   136,   137,     0,   108,   106,   104,
     102,   100,    98,   111,   110,     0,     0,    96,   141,     0,
      10,    22,     0,    31,    27,    69,     0,    94,     0,    91,
      89,     0,     0,     0,   151,    79,    78,     0,   114,   117,
     121,   129,   133,     0,     0,     0,     0,     0,     0,     0,
     143,     9,    30,     0,     0,     0,     0,    90,     0,   154,
       0,   150,   145,   113,   116,   109,   107,   105,   103,   101,
      99,   142,    31,    26,    28,    29,    32,    85,    86,     0,
       0,     0,   152,   149,     0,     0,    83,     0,     0,   154,
       0,    84,    87,    88,   153,    37,     0,     0,    35,    34,
      36
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    46,   103,    82,    16,    36,
      52,    37,    49,    60,   105,    61,   108,   162,   213,   164,
     193,   215,   224,   236,   238,    83,    31,    27,    21,    23,
      18,    19,    39,    40,    54,    65,    55,    63,   110,   124,
      85,   125,    86,    87,   226,    88,   171,    89,   115,    90,
      91,   157,   188,   187,   186,   185,   184,   183,    92,   129,
      93,   131,    94,    95,   140,   141,    96,   142,    97,   146,
      98,    99,   158,   100,   126,   101,   174,   200,   201,   222,
     102
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -109
static const yytype_int16 yypact[] =
{
     184,  -109,  -109,  -109,  -109,     4,    23,    15,    35,     9,
    -109,    47,  -109,   184,  -109,  -109,  -109,    22,  -109,   226,
    -109,  -109,  -109,  -109,  -109,     4,    23,  -109,  -109,     4,
      23,  -109,    30,  -109,  -109,    -2,     3,    13,    48,  -109,
      10,  -109,  -109,  -109,  -109,  -109,    29,  -109,  -109,   -20,
    -109,    30,  -109,  -109,  -109,    28,   155,   214,  -109,   -11,
    -109,  -109,  -109,    31,   226,  -109,    32,    63,   -16,    34,
      40,   155,    45,    42,  -109,  -109,  -109,  -109,     2,   155,
    -109,  -109,  -109,    30,  -109,  -109,  -109,  -109,  -109,  -109,
    -109,    50,  -109,    54,    66,  -109,   201,    18,  -109,   143,
    -109,  -109,  -109,    36,   214,     2,  -109,    69,  -109,    64,
    -109,  -109,     2,    30,  -109,  -109,    57,     2,    71,   110,
    -109,  -109,  -109,   -39,   155,    70,     2,  -109,     2,  -109,
       2,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,
    -109,    84,    84,  -109,  -109,  -109,    84,  -109,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,     2,   102,  -109,  -109,    72,
    -109,  -109,    73,  -109,  -109,  -109,    68,  -109,    74,  -109,
    -109,     2,    77,    78,     2,  -109,  -109,    79,    54,    66,
     -14,    18,  -109,     2,     2,     2,     2,     2,     2,    75,
    -109,  -109,    95,   113,   155,   155,    85,  -109,     2,    86,
      81,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,
    -109,  -109,    91,  -109,  -109,  -109,  -109,   117,  -109,     2,
      87,     2,  -109,  -109,    93,   155,  -109,    88,    97,    86,
     126,  -109,  -109,  -109,  -109,    98,    99,   126,  -109,  -109,
    -109
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -109,  -109,   173,  -109,  -109,  -109,    83,     5,  -109,   -29,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,     8,
    -109,  -109,  -109,   -36,  -109,     7,  -109,  -109,    20,    27,
    -109,  -109,  -109,   138,  -109,  -109,  -109,  -109,  -109,   -56,
    -109,    80,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,
     -67,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -108,    37,
      82,    26,   -72,  -109,  -109,  -109,    65,  -109,    67,  -109,
      92,   -76,  -109,  -109,  -109,  -109,  -109,  -109,  -109,   -17,
    -109
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -34
static const yytype_int16 yytable[] =
{
      84,   116,   123,    47,   166,    15,   122,    17,    20,   168,
      73,    74,    75,    76,    77,   119,   106,    58,    15,    24,
      17,   155,    62,    25,    26,   156,    38,    22,    73,    74,
      75,    76,    77,   138,   139,    32,   123,    78,   161,    28,
      59,   123,   114,    29,    30,    41,    81,    33,    35,    43,
     107,   172,   123,    42,   123,    78,    45,    44,   179,   177,
      48,    50,   104,   196,    81,   123,   123,   143,   144,   145,
     123,    38,    51,    56,    53,     1,     2,     3,     4,     5,
       6,     7,     8,    67,    47,    57,    10,    64,   189,   113,
     220,   109,   128,   159,   112,   123,   117,    73,    74,    75,
      76,    77,   118,   120,   121,   130,   163,   199,   127,   104,
      73,    74,    75,    76,    77,   167,   205,   206,   207,   208,
     209,   210,   123,   170,    78,   165,   173,   176,   190,   169,
     191,   194,   212,    81,   192,   197,   211,   195,   217,   218,
     198,   216,   202,   219,   223,   221,    81,   -33,   225,   230,
     228,   232,   227,   235,   229,   233,   239,   237,    66,     1,
       2,     3,     4,     5,     6,     7,     8,    67,    68,   231,
      10,    69,    70,    71,    72,   147,   148,   149,   150,   151,
     152,    73,    74,    75,    76,    77,    34,   160,     1,     2,
       3,     4,     5,     6,     7,     8,     9,   153,   154,    10,
     214,   240,   111,   155,   175,   204,   180,   156,    78,   181,
     178,    79,   234,    80,     0,   203,     0,    81,     1,     2,
       3,     4,     5,     6,     7,     8,    67,     0,     0,    10,
       1,     2,     3,     4,     5,     6,     7,     8,   182,     0,
       0,    10,   132,   133,   134,   135,   136,   137,   138,   139
};

static const yytype_int16 yycheck[] =
{
      56,    68,    78,    32,   112,     0,    78,     0,     4,   117,
      26,    27,    28,    29,    30,    71,    27,    37,    13,     4,
      13,    60,    51,     8,     9,    64,    19,     4,    26,    27,
      28,    29,    30,    47,    48,    26,   112,    53,   105,     4,
      60,   117,    58,     8,     9,    25,    62,     0,    26,    29,
      61,   118,   128,    26,   130,    53,    26,    30,   130,   126,
      62,    58,    57,   171,    62,   141,   142,    49,    50,    51,
     146,    64,    59,    63,    26,     4,     5,     6,     7,     8,
       9,    10,    11,    12,   113,    56,    15,    59,   155,    26,
     198,    60,    38,    57,    62,   171,    62,    26,    27,    28,
      29,    30,    62,    58,    62,    39,    37,   174,    58,   104,
      26,    27,    28,    29,    30,    58,   183,   184,   185,   186,
     187,   188,   198,   118,    53,    61,    16,    57,    26,    58,
      58,    63,    37,    62,    61,    58,    61,    63,   194,   195,
      62,    28,    63,    58,    63,    59,    62,    56,    31,    56,
      63,    63,   219,    27,   221,    58,    57,    59,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,   225,
      15,    16,    17,    18,    19,    32,    33,    34,    35,    36,
      37,    26,    27,    28,    29,    30,    13,   104,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    54,    55,    15,
     192,   237,    64,    60,   124,   179,   141,    64,    53,   142,
     128,    56,   229,    58,    -1,   178,    -1,    62,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    -1,    -1,    15,
       4,     5,     6,     7,     8,     9,    10,    11,   146,    -1,
      -1,    15,    41,    42,    43,    44,    45,    46,    47,    48
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      15,    66,    67,    68,    69,    72,    73,    90,    95,    96,
       4,    93,     4,    94,     4,     8,     9,    92,     4,     8,
       9,    91,    26,     0,    67,    26,    74,    76,    90,    97,
      98,    93,    94,    93,    94,    26,    70,    74,    62,    77,
      58,    59,    75,    26,    99,   101,    63,    56,    37,    60,
      78,    80,    74,   102,    59,   100,     3,    12,    13,    16,
      17,    18,    19,    26,    27,    28,    29,    30,    53,    56,
      58,    62,    72,    90,   104,   105,   107,   108,   110,   112,
     114,   115,   123,   125,   127,   128,   131,   133,   135,   136,
     138,   140,   145,    71,    72,    79,    27,    61,    81,    60,
     103,    98,    62,    26,    58,   113,   115,    62,    62,   104,
      58,    62,   127,   136,   104,   106,   139,    58,    38,   124,
      39,   126,    41,    42,    43,    44,    45,    46,    47,    48,
     129,   130,   132,    49,    50,    51,   134,    32,    33,    34,
      35,    36,    37,    54,    55,    60,    64,   116,   137,    57,
      71,   115,    82,    37,    84,    61,   123,    58,   123,    58,
      72,   111,   115,    16,   141,   106,    57,   115,   125,   127,
     131,   133,   135,   122,   121,   120,   119,   118,   117,   115,
      26,    58,    61,    85,    63,    63,   123,    58,    62,   115,
     142,   143,    63,   124,   126,   115,   115,   115,   115,   115,
     115,    61,    37,    83,    84,    86,    28,   104,   104,    58,
     123,    59,   144,    63,    87,    31,   109,   115,    63,   115,
      56,   104,    63,    58,   144,    27,    88,    59,    89,    57,
      88
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
        case 8:

/* Line 1464 of yacc.c  */
#line 73 "parser1.y"
    { insert_type(); ;}
    break;

  case 18:

/* Line 1464 of yacc.c  */
#line 92 "parser1.y"
    { insert_type(); ;}
    break;

  case 21:

/* Line 1464 of yacc.c  */
#line 94 "parser1.y"
    {strcpy(previous_operator,"=");;}
    break;

  case 25:

/* Line 1464 of yacc.c  */
#line 101 "parser1.y"
    {insert_dimensions();;}
    break;

  case 31:

/* Line 1464 of yacc.c  */
#line 110 "parser1.y"
    {strcpy(previous_operator,"=");;}
    break;

  case 32:

/* Line 1464 of yacc.c  */
#line 110 "parser1.y"
    { insert_value(); ;}
    break;

  case 33:

/* Line 1464 of yacc.c  */
#line 113 "parser1.y"
    {strcpy(previous_operator,"=");;}
    break;

  case 60:

/* Line 1464 of yacc.c  */
#line 147 "parser1.y"
    {strcpy(current_function,current_identifier); insert_type();;}
    break;

  case 67:

/* Line 1464 of yacc.c  */
#line 163 "parser1.y"
    { insert_parameters(); insert_type(); ;}
    break;

  case 98:

/* Line 1464 of yacc.c  */
#line 218 "parser1.y"
    {strcpy(previous_operator,"=");;}
    break;

  case 100:

/* Line 1464 of yacc.c  */
#line 219 "parser1.y"
    {strcpy(previous_operator,"+=");;}
    break;

  case 102:

/* Line 1464 of yacc.c  */
#line 220 "parser1.y"
    {strcpy(previous_operator,"-=");;}
    break;

  case 104:

/* Line 1464 of yacc.c  */
#line 221 "parser1.y"
    {strcpy(previous_operator,"*=");;}
    break;

  case 106:

/* Line 1464 of yacc.c  */
#line 222 "parser1.y"
    {strcpy(previous_operator,"/=");;}
    break;

  case 108:

/* Line 1464 of yacc.c  */
#line 223 "parser1.y"
    {strcpy(previous_operator,"%=");;}
    break;

  case 123:

/* Line 1464 of yacc.c  */
#line 252 "parser1.y"
    {strcpy(previous_operator,">=");;}
    break;

  case 124:

/* Line 1464 of yacc.c  */
#line 253 "parser1.y"
    {strcpy(previous_operator,"<=");;}
    break;

  case 125:

/* Line 1464 of yacc.c  */
#line 254 "parser1.y"
    {strcpy(previous_operator,">");;}
    break;

  case 126:

/* Line 1464 of yacc.c  */
#line 255 "parser1.y"
    {strcpy(previous_operator,"<");;}
    break;

  case 127:

/* Line 1464 of yacc.c  */
#line 256 "parser1.y"
    {strcpy(previous_operator,"==");;}
    break;

  case 128:

/* Line 1464 of yacc.c  */
#line 257 "parser1.y"
    {strcpy(previous_operator,"!=");;}
    break;

  case 144:

/* Line 1464 of yacc.c  */
#line 286 "parser1.y"
    {strcpy(previous_operator,"(");;}
    break;

  case 148:

/* Line 1464 of yacc.c  */
#line 290 "parser1.y"
    {strcpy(previous_operator,"(");;}
    break;

  case 155:

/* Line 1464 of yacc.c  */
#line 303 "parser1.y"
    { insert_value(); ;}
    break;

  case 156:

/* Line 1464 of yacc.c  */
#line 304 "parser1.y"
    { insert_value(); ;}
    break;

  case 157:

/* Line 1464 of yacc.c  */
#line 305 "parser1.y"
    { insert_value(); ;}
    break;

  case 158:

/* Line 1464 of yacc.c  */
#line 306 "parser1.y"
    { insert_value(); ;}
    break;



/* Line 1464 of yacc.c  */
#line 1836 "parser1.tab.c"
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
#line 308 "parser1.y"


extern FILE *yyin;
extern int yylineno;
extern char *yytext;
void insert_SymbolTable_type(char *,char *);
void insert_SymbolTable_value(char *, char *);
void insert_ConstantTable(char *, char *);
void insert_SymbolTable_arraydim(char *, char *);
void insert_SymbolTable_funcparam(char *, char *);
void printSymbolTable();
void printConstantTable();


int main()
{
	yyin = fopen("input.txt", "r");
	int true=!yyparse();

	if(true)
	{
		printf("VALID PARSE\n");
		printf("%30s\t SYMBOL TABLE \n", " ");
		printf("%30s %s\n", " ", "------------");
		printSymbolTable();
	}	
}

void yyerror(char *s)
{
	printf("Line No. : %d %s %s\n",yylineno, s, yytext);
	flag=1;
	printf("INVALID PARSE\n");
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
