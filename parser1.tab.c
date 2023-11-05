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


#line 96 "parser1.tab.c"

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

#include "parser1.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IF = 3,                         /* IF  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_CHAR = 5,                       /* CHAR  */
  YYSYMBOL_FLOAT = 6,                      /* FLOAT  */
  YYSYMBOL_DOUBLE = 7,                     /* DOUBLE  */
  YYSYMBOL_LONG = 8,                       /* LONG  */
  YYSYMBOL_SHORT = 9,                      /* SHORT  */
  YYSYMBOL_SIGNED = 10,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 11,                  /* UNSIGNED  */
  YYSYMBOL_STRUCT = 12,                    /* STRUCT  */
  YYSYMBOL_UNION = 13,                     /* UNION  */
  YYSYMBOL_RETURN = 14,                    /* RETURN  */
  YYSYMBOL_MAIN = 15,                      /* MAIN  */
  YYSYMBOL_INCLUDE = 16,                   /* INCLUDE  */
  YYSYMBOL_DEFINE = 17,                    /* DEFINE  */
  YYSYMBOL_VOID = 18,                      /* VOID  */
  YYSYMBOL_WHILE = 19,                     /* WHILE  */
  YYSYMBOL_FOR = 20,                       /* FOR  */
  YYSYMBOL_DO = 21,                        /* DO  */
  YYSYMBOL_BREAK = 22,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 23,                  /* CONTINUE  */
  YYSYMBOL_GOTO = 24,                      /* GOTO  */
  YYSYMBOL_ENDIF = 25,                     /* ENDIF  */
  YYSYMBOL_SWITCH = 26,                    /* SWITCH  */
  YYSYMBOL_CASE = 27,                      /* CASE  */
  YYSYMBOL_DEFAULT = 28,                   /* DEFAULT  */
  YYSYMBOL_identifier = 29,                /* identifier  */
  YYSYMBOL_integer_constant = 30,          /* integer_constant  */
  YYSYMBOL_string_constant = 31,           /* string_constant  */
  YYSYMBOL_float_constant = 32,            /* float_constant  */
  YYSYMBOL_character_constant = 33,        /* character_constant  */
  YYSYMBOL_ELSE = 34,                      /* ELSE  */
  YYSYMBOL_MOD_EQUAL = 35,                 /* MOD_EQUAL  */
  YYSYMBOL_MULTIPLY_EQUAL = 36,            /* MULTIPLY_EQUAL  */
  YYSYMBOL_DIVIDE_EQUAL = 37,              /* DIVIDE_EQUAL  */
  YYSYMBOL_ADD_EQUAL = 38,                 /* ADD_EQUAL  */
  YYSYMBOL_SUBTRACT_EQUAL = 39,            /* SUBTRACT_EQUAL  */
  YYSYMBOL_40_ = 40,                       /* '='  */
  YYSYMBOL_OR_OR = 41,                     /* OR_OR  */
  YYSYMBOL_AND_AND = 42,                   /* AND_AND  */
  YYSYMBOL_43_ = 43,                       /* '^'  */
  YYSYMBOL_EQUAL = 44,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 45,                 /* NOT_EQUAL  */
  YYSYMBOL_LESS_EQUAL = 46,                /* LESS_EQUAL  */
  YYSYMBOL_LESS = 47,                      /* LESS  */
  YYSYMBOL_GREAT_EQUAL = 48,               /* GREAT_EQUAL  */
  YYSYMBOL_GREAT = 49,                     /* GREAT  */
  YYSYMBOL_50_ = 50,                       /* '+'  */
  YYSYMBOL_51_ = 51,                       /* '-'  */
  YYSYMBOL_52_ = 52,                       /* '*'  */
  YYSYMBOL_53_ = 53,                       /* '/'  */
  YYSYMBOL_54_ = 54,                       /* '%'  */
  YYSYMBOL_SIZEOF = 55,                    /* SIZEOF  */
  YYSYMBOL_NOT = 56,                       /* NOT  */
  YYSYMBOL_INCREMENT = 57,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 58,                 /* DECREMENT  */
  YYSYMBOL_59_ = 59,                       /* '<'  */
  YYSYMBOL_60_h_ = 60,                     /* ".h"  */
  YYSYMBOL_61_ = 61,                       /* '>'  */
  YYSYMBOL_62_ = 62,                       /* '{'  */
  YYSYMBOL_63_ = 63,                       /* '}'  */
  YYSYMBOL_64_ = 64,                       /* ';'  */
  YYSYMBOL_65_ = 65,                       /* ','  */
  YYSYMBOL_66_ = 66,                       /* '['  */
  YYSYMBOL_67_ = 67,                       /* ']'  */
  YYSYMBOL_68_ = 68,                       /* '('  */
  YYSYMBOL_69_ = 69,                       /* ')'  */
  YYSYMBOL_70_ = 70,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 71,                  /* $accept  */
  YYSYMBOL_begin_parse = 72,               /* begin_parse  */
  YYSYMBOL_declarations = 73,              /* declarations  */
  YYSYMBOL_declaration = 74,               /* declaration  */
  YYSYMBOL_file_dec = 75,                  /* file_dec  */
  YYSYMBOL_define_dec = 76,                /* define_dec  */
  YYSYMBOL_structure_dec = 77,             /* structure_dec  */
  YYSYMBOL_78_1 = 78,                      /* $@1  */
  YYSYMBOL_structure_content = 79,         /* structure_content  */
  YYSYMBOL_union_dec = 80,                 /* union_dec  */
  YYSYMBOL_81_2 = 81,                      /* $@2  */
  YYSYMBOL_union_content = 82,             /* union_content  */
  YYSYMBOL_variable_dec = 83,              /* variable_dec  */
  YYSYMBOL_structure_initialize = 84,      /* structure_initialize  */
  YYSYMBOL_union_initialize = 85,          /* union_initialize  */
  YYSYMBOL_variables = 86,                 /* variables  */
  YYSYMBOL_multiple_variables = 87,        /* multiple_variables  */
  YYSYMBOL_identifier_name = 88,           /* identifier_name  */
  YYSYMBOL_89_3 = 89,                      /* $@3  */
  YYSYMBOL_extended_identifier = 90,       /* extended_identifier  */
  YYSYMBOL_91_4 = 91,                      /* $@4  */
  YYSYMBOL_array_identifier = 92,          /* array_identifier  */
  YYSYMBOL_array_dims = 93,                /* array_dims  */
  YYSYMBOL_94_5 = 94,                      /* $@5  */
  YYSYMBOL_initilization = 95,             /* initilization  */
  YYSYMBOL_96_6 = 96,                      /* $@6  */
  YYSYMBOL_string_initilization = 97,      /* string_initilization  */
  YYSYMBOL_98_7 = 98,                      /* $@7  */
  YYSYMBOL_array_initialization = 99,      /* array_initialization  */
  YYSYMBOL_100_8 = 100,                    /* $@8  */
  YYSYMBOL_array_values = 101,             /* array_values  */
  YYSYMBOL_multiple_array_values = 102,    /* multiple_array_values  */
  YYSYMBOL_datatype = 103,                 /* datatype  */
  YYSYMBOL_unsigned_grammar = 104,         /* unsigned_grammar  */
  YYSYMBOL_signed_grammar = 105,           /* signed_grammar  */
  YYSYMBOL_long_grammar = 106,             /* long_grammar  */
  YYSYMBOL_short_grammar = 107,            /* short_grammar  */
  YYSYMBOL_function_dec = 108,             /* function_dec  */
  YYSYMBOL_function_datatype = 109,        /* function_datatype  */
  YYSYMBOL_function_parameters = 110,      /* function_parameters  */
  YYSYMBOL_parameters = 111,               /* parameters  */
  YYSYMBOL_all_parameter_identifiers = 112, /* all_parameter_identifiers  */
  YYSYMBOL_multiple_parameters = 113,      /* multiple_parameters  */
  YYSYMBOL_parameter_identifier = 114,     /* parameter_identifier  */
  YYSYMBOL_115_9 = 115,                    /* $@9  */
  YYSYMBOL_extended_parameter = 116,       /* extended_parameter  */
  YYSYMBOL_statement = 117,                /* statement  */
  YYSYMBOL_multiple_statement = 118,       /* multiple_statement  */
  YYSYMBOL_statments = 119,                /* statments  */
  YYSYMBOL_expression_statment = 120,      /* expression_statment  */
  YYSYMBOL_conditional_statements = 121,   /* conditional_statements  */
  YYSYMBOL_extended_conditional_statements = 122, /* extended_conditional_statements  */
  YYSYMBOL_iterative_statements = 123,     /* iterative_statements  */
  YYSYMBOL_for_initialization = 124,       /* for_initialization  */
  YYSYMBOL_for_updation = 125,             /* for_updation  */
  YYSYMBOL_return_statement = 126,         /* return_statement  */
  YYSYMBOL_return_suffix = 127,            /* return_suffix  */
  YYSYMBOL_break_statement = 128,          /* break_statement  */
  YYSYMBOL_expression = 129,               /* expression  */
  YYSYMBOL_expressions = 130,              /* expressions  */
  YYSYMBOL_131_10 = 131,                   /* $@10  */
  YYSYMBOL_132_11 = 132,                   /* $@11  */
  YYSYMBOL_133_12 = 133,                   /* $@12  */
  YYSYMBOL_134_13 = 134,                   /* $@13  */
  YYSYMBOL_135_14 = 135,                   /* $@14  */
  YYSYMBOL_136_15 = 136,                   /* $@15  */
  YYSYMBOL_simple_expression = 137,        /* simple_expression  */
  YYSYMBOL_simple_expression_breakup = 138, /* simple_expression_breakup  */
  YYSYMBOL_and_expression = 139,           /* and_expression  */
  YYSYMBOL_and_expression_breakup = 140,   /* and_expression_breakup  */
  YYSYMBOL_unary_relation_expression = 141, /* unary_relation_expression  */
  YYSYMBOL_regular_expression = 142,       /* regular_expression  */
  YYSYMBOL_regular_expression_breakup = 143, /* regular_expression_breakup  */
  YYSYMBOL_relational_operators = 144,     /* relational_operators  */
  YYSYMBOL_sum_expression = 145,           /* sum_expression  */
  YYSYMBOL_sum_operators = 146,            /* sum_operators  */
  YYSYMBOL_term = 147,                     /* term  */
  YYSYMBOL_multiply_operators = 148,       /* multiply_operators  */
  YYSYMBOL_factor = 149,                   /* factor  */
  YYSYMBOL_iden = 150,                     /* iden  */
  YYSYMBOL_extended_iden = 151,            /* extended_iden  */
  YYSYMBOL_func = 152,                     /* func  */
  YYSYMBOL_153_16 = 153,                   /* $@16  */
  YYSYMBOL_func_call = 154,                /* func_call  */
  YYSYMBOL_155_17 = 155,                   /* $@17  */
  YYSYMBOL_arguments = 156,                /* arguments  */
  YYSYMBOL_arguments_list = 157,           /* arguments_list  */
  YYSYMBOL_extended_arguments = 158,       /* extended_arguments  */
  YYSYMBOL_constant = 159                  /* constant  */
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
#define YYFINAL  46
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   276

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  89
/* YYNRULES -- Number of rules.  */
#define YYNRULES  178
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  278

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   307


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
       2,     2,     2,     2,     2,     2,     2,    54,     2,     2,
      68,    69,    52,    50,    65,    51,    70,    53,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    64,
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
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
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
     213,   216,   219,   220,   223,   224,   225,   228,   229,   230,
     233,   234,   238,   241,   242,   245,   248,   249,   252,   252,
     253,   253,   254,   254,   255,   255,   256,   256,   257,   257,
     258,   259,   262,   265,   265,   268,   271,   272,   275,   276,
     279,   282,   283,   286,   287,   288,   289,   290,   291,   294,
     295,   298,   299,   302,   303,   306,   306,   306,   309,   309,
     312,   313,   316,   317,   320,   320,   321,   321,   324,   324,
     327,   327,   330,   333,   334,   337,   338,   339,   340
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
  "\"end of file\"", "error", "\"invalid token\"", "IF", "INT", "CHAR",
  "FLOAT", "DOUBLE", "LONG", "SHORT", "SIGNED", "UNSIGNED", "STRUCT",
  "UNION", "RETURN", "MAIN", "INCLUDE", "DEFINE", "VOID", "WHILE", "FOR",
  "DO", "BREAK", "CONTINUE", "GOTO", "ENDIF", "SWITCH", "CASE", "DEFAULT",
  "identifier", "integer_constant", "string_constant", "float_constant",
  "character_constant", "ELSE", "MOD_EQUAL", "MULTIPLY_EQUAL",
  "DIVIDE_EQUAL", "ADD_EQUAL", "SUBTRACT_EQUAL", "'='", "OR_OR", "AND_AND",
  "'^'", "EQUAL", "NOT_EQUAL", "LESS_EQUAL", "LESS", "GREAT_EQUAL",
  "GREAT", "'+'", "'-'", "'*'", "'/'", "'%'", "SIZEOF", "NOT", "INCREMENT",
  "DECREMENT", "'<'", "\".h\"", "'>'", "'{'", "'}'", "';'", "','", "'['",
  "']'", "'('", "')'", "'.'", "$accept", "begin_parse", "declarations",
  "declaration", "file_dec", "define_dec", "structure_dec", "$@1",
  "structure_content", "union_dec", "$@2", "union_content", "variable_dec",
  "structure_initialize", "union_initialize", "variables",
  "multiple_variables", "identifier_name", "$@3", "extended_identifier",
  "$@4", "array_identifier", "array_dims", "$@5", "initilization", "$@6",
  "string_initilization", "$@7", "array_initialization", "$@8",
  "array_values", "multiple_array_values", "datatype", "unsigned_grammar",
  "signed_grammar", "long_grammar", "short_grammar", "function_dec",
  "function_datatype", "function_parameters", "parameters",
  "all_parameter_identifiers", "multiple_parameters",
  "parameter_identifier", "$@9", "extended_parameter", "statement",
  "multiple_statement", "statments", "expression_statment",
  "conditional_statements", "extended_conditional_statements",
  "iterative_statements", "for_initialization", "for_updation",
  "return_statement", "return_suffix", "break_statement", "expression",
  "expressions", "$@10", "$@11", "$@12", "$@13", "$@14", "$@15",
  "simple_expression", "simple_expression_breakup", "and_expression",
  "and_expression_breakup", "unary_relation_expression",
  "regular_expression", "regular_expression_breakup",
  "relational_operators", "sum_expression", "sum_operators", "term",
  "multiply_operators", "factor", "iden", "extended_iden", "func", "$@16",
  "func_call", "$@17", "arguments", "arguments_list", "extended_arguments",
  "constant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-134)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-49)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     161,   -32,   -26,   -24,  -134,    34,    48,    45,    66,    21,
      28,    17,    33,  -134,    78,  -134,   161,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,    62,  -134,   244,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,    34,    48,  -134,  -134,    34,
      48,  -134,    82,    82,    83,    40,  -134,  -134,    53,    50,
      63,   101,  -134,    67,  -134,  -134,  -134,  -134,  -134,    72,
    -134,    73,  -134,    79,  -134,  -134,  -134,  -134,   -31,  -134,
      82,  -134,  -134,  -134,    75,   179,   209,   209,    81,  -134,
     -22,  -134,  -134,  -134,    93,   244,  -134,    76,   114,   132,
     -17,    95,    96,   179,   111,   112,  -134,  -134,  -134,  -134,
       0,   179,  -134,  -134,  -134,    82,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,   130,  -134,   154,   160,  -134,   107,    46,
    -134,    80,  -134,  -134,  -134,   133,   209,   140,   209,  -134,
       0,   137,   165,  -134,   139,  -134,  -134,     0,    82,    82,
    -134,  -134,   143,     0,    77,   204,  -134,  -134,  -134,   -30,
     179,   162,     0,  -134,     0,  -134,     0,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,    -8,    -8,  -134,
    -134,  -134,    -8,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,     0,   195,  -134,  -134,   164,  -134,   166,  -134,  -134,
    -134,  -134,  -134,  -134,   157,  -134,   163,  -134,  -134,     0,
     167,   168,     0,  -134,  -134,   169,   154,   160,    14,    46,
    -134,     0,     0,     0,     0,     0,     0,   170,  -134,  -134,
    -134,   -23,   198,   179,   179,   175,  -134,     0,   177,   171,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,   172,   203,  -134,  -134,  -134,  -134,   210,  -134,     0,
     176,     0,  -134,  -134,   184,  -134,   179,  -134,     2,  -134,
     192,   177,   227,   191,  -134,     0,  -134,  -134,  -134,   194,
     197,   -23,  -134,   227,  -134,  -134,  -134,  -134
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
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
       0,     0,     0,     0,     0,   160,   175,   176,   177,   178,
       0,    98,   100,   164,    95,     0,    79,    90,    89,    91,
      92,    93,    94,     0,   117,   134,   137,   139,   142,   150,
     154,   159,   158,   166,   167,     0,    18,     0,    22,    11,
       0,     0,     0,    36,     0,    86,    83,     0,     0,     0,
     113,   112,     0,     0,     0,     0,   115,   168,   138,   159,
      98,     0,     0,    99,     0,   132,     0,   135,   147,   148,
     144,   146,   143,   145,   151,   152,   140,     0,     0,   155,
     156,   157,     0,   128,   124,   126,   120,   122,   118,   130,
     131,     0,     0,   116,   161,     0,    17,     0,    21,    35,
      38,    46,    40,    87,     0,   114,     0,   109,   107,     0,
       0,     0,   171,    97,    96,     0,   134,   137,   141,   149,
     153,     0,     0,     0,     0,     0,     0,     0,   163,    16,
      20,    45,     0,     0,     0,     0,   108,     0,   174,     0,
     170,   165,   133,   136,   129,   125,   127,   121,   123,   119,
     162,    46,     0,    39,    41,    42,    47,   103,   104,     0,
       0,     0,   172,   169,     0,    43,     0,   101,     0,   111,
       0,   174,     0,     0,   102,     0,   105,   106,   173,    52,
       0,    45,   110,     0,    50,    49,    44,    51
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -134,  -134,   245,  -134,  -134,  -134,  -134,  -134,   138,  -134,
    -134,   135,     3,  -134,  -134,   -36,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,    -6,  -134,   134,  -134,  -134,  -134,
      -5,  -134,    11,  -134,  -134,    58,    65,  -134,  -134,  -134,
     182,  -134,  -134,  -134,  -134,  -134,   -75,  -134,   119,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,   -89,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -133,    64,   117,    68,
     -98,  -134,  -134,  -134,   105,  -134,   106,  -134,   104,   -95,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,    12,  -134
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    14,    15,    16,    17,    18,    19,    59,   125,    20,
      61,   127,   104,    22,    23,    49,    71,    50,    68,    81,
     130,    82,   133,   221,   243,   263,   244,   222,   245,   254,
     270,   274,   105,    41,    37,    31,    33,    25,    26,    52,
      53,    73,    86,    74,    84,   135,   150,   107,   151,   108,
     109,   257,   110,   199,   258,   111,   141,   112,   113,   183,
     216,   214,   215,   212,   213,   211,   114,   155,   115,   157,
     116,   117,   166,   167,   118,   168,   119,   172,   120,   121,
     184,   122,   152,   123,   202,   229,   230,   252,   124
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     106,   142,   148,    21,   194,   149,    60,    62,   131,    79,
     196,    24,    95,    96,    97,    98,    99,   241,   145,    21,
      27,    95,    96,    97,    98,    99,    28,    24,    29,    95,
      96,    97,    98,    99,    83,    80,   181,    51,    30,   100,
     182,   189,   149,   242,    64,   132,    65,   140,   149,    34,
      42,   103,    32,    35,    36,   200,   100,    43,   207,   149,
     103,   149,    45,   205,   164,   165,   225,   265,   103,    66,
      38,   266,   149,   149,    39,    40,    44,   149,    46,   126,
     128,     1,     2,     3,     4,     5,     6,     7,     8,    88,
      89,    48,   217,    54,   250,    13,    51,    56,   169,   170,
     171,    55,    60,    62,   149,    57,    95,    96,    97,    98,
      99,    58,    63,   228,    69,   173,   174,   175,   176,   177,
     178,    67,   234,   235,   236,   237,   238,   239,    70,   126,
      72,   128,   149,   100,    76,    77,    75,   179,   180,    78,
      85,   197,   129,   138,   137,   103,   181,   198,   247,   248,
     182,   158,   159,   160,   161,   162,   163,   164,   165,   134,
     259,   139,   261,   143,   144,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,   146,   272,    11,    12,    13,
     147,   264,    87,     1,     2,     3,     4,     5,     6,     7,
       8,    88,    89,    90,   153,   154,   185,    13,    91,    92,
      93,    94,   156,   187,   190,   191,   193,   195,    95,    96,
      97,    98,    99,     1,     2,     3,     4,     5,     6,     7,
       8,    88,    89,   201,   218,   204,   223,    13,   219,   246,
     220,   226,   224,   255,   -48,   100,   227,   240,   231,   249,
     253,   101,   251,   102,   256,   260,   262,   103,     1,     2,
       3,     4,     5,     6,     7,     8,   267,   269,   271,   273,
     275,    47,    13,   188,   186,   276,   192,   136,   277,   203,
     232,   206,   208,   268,   209,   233,   210
};

static const yytype_int16 yycheck[] =
{
      75,    90,   100,     0,   137,   100,    42,    43,    30,    40,
     143,     0,    29,    30,    31,    32,    33,    40,    93,    16,
      52,    29,    30,    31,    32,    33,    52,    16,    52,    29,
      30,    31,    32,    33,    70,    66,    66,    26,     4,    56,
      70,   130,   137,    66,     4,    67,     6,    64,   143,     4,
      29,    68,     4,     8,     9,   144,    56,    29,   156,   154,
      68,   156,    29,   152,    50,    51,   199,    65,    68,    29,
       4,    69,   167,   168,     8,     9,    59,   172,     0,    76,
      77,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    29,   181,    35,   227,    18,    85,    39,    52,    53,
      54,    36,   138,   139,   199,    40,    29,    30,    31,    32,
      33,    29,    29,   202,    64,    35,    36,    37,    38,    39,
      40,    68,   211,   212,   213,   214,   215,   216,    65,   126,
      29,   128,   227,    56,    62,    62,    69,    57,    58,    60,
      65,    64,    61,    29,    68,    68,    66,   144,   223,   224,
      70,    44,    45,    46,    47,    48,    49,    50,    51,    66,
     249,    29,   251,    68,    68,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    64,   265,    16,    17,    18,
      68,   256,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    64,    41,    63,    18,    19,    20,
      21,    22,    42,    63,    67,    40,    67,    64,    29,    30,
      31,    32,    33,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    19,    29,    63,    69,    18,    64,    31,
      64,    64,    69,    30,    62,    56,    68,    67,    69,    64,
      69,    62,    65,    64,    34,    69,    62,    68,     4,     5,
       6,     7,     8,     9,    10,    11,    64,    30,    67,    65,
      63,    16,    18,   128,   126,   271,   132,    85,   273,   150,
     206,   154,   167,   261,   168,   207,   172
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    16,    17,    18,    72,    73,    74,    75,    76,    77,
      80,    83,    84,    85,   103,   108,   109,    52,    52,    52,
       4,   106,     4,   107,     4,     8,     9,   105,     4,     8,
       9,   104,    29,    29,    59,    29,     0,    73,    29,    86,
      88,   103,   110,   111,   106,   107,   106,   107,    29,    78,
      86,    81,    86,    29,     4,     6,    29,    68,    89,    64,
      65,    87,    29,   112,   114,    69,    62,    62,    60,    40,
      66,    90,    92,    86,   115,    65,   113,     3,    12,    13,
      14,    19,    20,    21,    22,    29,    30,    31,    32,    33,
      56,    62,    64,    68,    83,   103,   117,   118,   120,   121,
     123,   126,   128,   129,   137,   139,   141,   142,   145,   147,
     149,   150,   152,   154,   159,    79,    83,    82,    83,    61,
      91,    30,    67,    93,    66,   116,   111,    68,    29,    29,
      64,   127,   129,    68,    68,   117,    64,    68,   141,   150,
     117,   119,   153,    64,    41,   138,    42,   140,    44,    45,
      46,    47,    48,    49,    50,    51,   143,   144,   146,    52,
      53,    54,   148,    35,    36,    37,    38,    39,    40,    57,
      58,    66,    70,   130,   151,    63,    79,    63,    82,   129,
      67,    40,    97,    67,   137,    64,   137,    64,    83,   124,
     129,    19,   155,   119,    63,   129,   139,   141,   145,   147,
     149,   136,   134,   135,   132,   133,   131,   129,    29,    64,
      64,    94,    98,    69,    69,   137,    64,    68,   129,   156,
     157,    69,   138,   140,   129,   129,   129,   129,   129,   129,
      67,    40,    66,    95,    97,    99,    31,   117,   117,    64,
     137,    65,   158,    69,   100,    30,    34,   122,   125,   129,
      69,   129,    62,    96,   117,    65,    69,    64,   158,    30,
     101,    67,   129,    65,   102,    63,    95,   101
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    73,    73,    74,    74,    74,    74,    74,
      74,    75,    76,    76,    76,    78,    77,    79,    79,    81,
      80,    82,    82,    83,    83,    83,    84,    85,    86,    87,
      87,    89,    88,    90,    91,    90,    92,    92,    94,    93,
      93,    95,    95,    96,    95,    95,    98,    97,   100,    99,
     101,   102,   102,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   104,   104,   104,   104,   105,
     105,   105,   105,   106,   106,   107,   107,   108,   109,   110,
     111,   111,   112,   113,   113,   115,   114,   116,   116,   117,
     117,   117,   117,   117,   117,   117,   118,   119,   119,   120,
     120,   121,   122,   122,   123,   123,   123,   124,   124,   124,
     125,   125,   126,   127,   127,   128,   129,   129,   131,   130,
     132,   130,   133,   130,   134,   130,   135,   130,   136,   130,
     130,   130,   137,   138,   138,   139,   140,   140,   141,   141,
     142,   143,   143,   144,   144,   144,   144,   144,   144,   145,
     145,   146,   146,   147,   147,   148,   148,   148,   149,   149,
     150,   150,   151,   151,   153,   152,   152,   152,   155,   154,
     156,   156,   157,   158,   158,   159,   159,   159,   159
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
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
       1,     6,     2,     0,     5,     7,     7,     1,     2,     1,
       3,     1,     2,     1,     2,     2,     2,     1,     0,     3,
       0,     3,     0,     3,     0,     3,     0,     3,     0,     3,
       1,     1,     2,     3,     0,     2,     3,     0,     2,     1,
       2,     2,     0,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     2,     0,     4,     1,     1,     0,     5,
       1,     0,     2,     3,     0,     1,     1,     1,     1
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
  case 15: /* $@1: %empty  */
#line 92 "parser1.y"
                                            { insert_type(); }
#line 1467 "parser1.tab.c"
    break;

  case 19: /* $@2: %empty  */
#line 97 "parser1.y"
                             { insert_type(); }
#line 1473 "parser1.tab.c"
    break;

  case 31: /* $@3: %empty  */
#line 120 "parser1.y"
                                     { insert_type(); }
#line 1479 "parser1.tab.c"
    break;

  case 34: /* $@4: %empty  */
#line 122 "parser1.y"
                                            {strcpy(previous_operator,"=");}
#line 1485 "parser1.tab.c"
    break;

  case 38: /* $@5: %empty  */
#line 129 "parser1.y"
                                               {sprintf(temp,"%d",yyvsp[-1]); printf("%d\n",yyvsp[-1]); strcat(fi,temp);}
#line 1491 "parser1.tab.c"
    break;

  case 39: /* array_dims: integer_constant ']' $@5 initilization  */
#line 129 "parser1.y"
                                                                                                                          {strcpy(current_value,fi); insert_dimensions();}
#line 1497 "parser1.tab.c"
    break;

  case 43: /* $@6: %empty  */
#line 135 "parser1.y"
                                               {strcat(fi,"*"); sprintf(temp,"%d",yyvsp[0]); strcat(fi,temp); }
#line 1503 "parser1.tab.c"
    break;

  case 46: /* $@7: %empty  */
#line 139 "parser1.y"
                             {strcpy(previous_operator,"=");}
#line 1509 "parser1.tab.c"
    break;

  case 47: /* string_initilization: '=' $@7 string_constant  */
#line 139 "parser1.y"
                                                                              { insert_value(); }
#line 1515 "parser1.tab.c"
    break;

  case 48: /* $@8: %empty  */
#line 142 "parser1.y"
                             {strcpy(previous_operator,"=");}
#line 1521 "parser1.tab.c"
    break;

  case 57: /* datatype: INT '*'  */
#line 153 "parser1.y"
                                                                {strcpy(current_type,"int*");}
#line 1527 "parser1.tab.c"
    break;

  case 58: /* datatype: CHAR '*'  */
#line 153 "parser1.y"
                                                                                                         {strcpy(current_type,"char*");}
#line 1533 "parser1.tab.c"
    break;

  case 59: /* datatype: FLOAT '*'  */
#line 153 "parser1.y"
                                                                                                                                                     {strcpy(current_type,"float*");}
#line 1539 "parser1.tab.c"
    break;

  case 78: /* function_datatype: datatype identifier '('  */
#line 176 "parser1.y"
                                                   {strcpy(current_function,current_identifier); insert_type();}
#line 1545 "parser1.tab.c"
    break;

  case 85: /* $@9: %empty  */
#line 192 "parser1.y"
                                     { insert_parameters(); insert_type(); }
#line 1551 "parser1.tab.c"
    break;

  case 118: /* $@10: %empty  */
#line 252 "parser1.y"
                             {strcpy(previous_operator,"=");}
#line 1557 "parser1.tab.c"
    break;

  case 120: /* $@11: %empty  */
#line 253 "parser1.y"
                                   {strcpy(previous_operator,"+=");}
#line 1563 "parser1.tab.c"
    break;

  case 122: /* $@12: %empty  */
#line 254 "parser1.y"
                                        {strcpy(previous_operator,"-=");}
#line 1569 "parser1.tab.c"
    break;

  case 124: /* $@13: %empty  */
#line 255 "parser1.y"
                                        {strcpy(previous_operator,"*=");}
#line 1575 "parser1.tab.c"
    break;

  case 126: /* $@14: %empty  */
#line 256 "parser1.y"
                                      {strcpy(previous_operator,"/=");}
#line 1581 "parser1.tab.c"
    break;

  case 128: /* $@15: %empty  */
#line 257 "parser1.y"
                                   {strcpy(previous_operator,"%=");}
#line 1587 "parser1.tab.c"
    break;

  case 143: /* relational_operators: GREAT_EQUAL  */
#line 286 "parser1.y"
                                     {strcpy(previous_operator,">=");}
#line 1593 "parser1.tab.c"
    break;

  case 144: /* relational_operators: LESS_EQUAL  */
#line 287 "parser1.y"
                                    {strcpy(previous_operator,"<=");}
#line 1599 "parser1.tab.c"
    break;

  case 145: /* relational_operators: GREAT  */
#line 288 "parser1.y"
                               {strcpy(previous_operator,">");}
#line 1605 "parser1.tab.c"
    break;

  case 146: /* relational_operators: LESS  */
#line 289 "parser1.y"
                              {strcpy(previous_operator,"<");}
#line 1611 "parser1.tab.c"
    break;

  case 147: /* relational_operators: EQUAL  */
#line 290 "parser1.y"
                               {strcpy(previous_operator,"==");}
#line 1617 "parser1.tab.c"
    break;

  case 148: /* relational_operators: NOT_EQUAL  */
#line 291 "parser1.y"
                                   {strcpy(previous_operator,"!=");}
#line 1623 "parser1.tab.c"
    break;

  case 164: /* $@16: %empty  */
#line 320 "parser1.y"
                             {strcpy(previous_operator,"(");}
#line 1629 "parser1.tab.c"
    break;

  case 168: /* $@17: %empty  */
#line 324 "parser1.y"
                                        {strcpy(previous_operator,"(");}
#line 1635 "parser1.tab.c"
    break;

  case 175: /* constant: integer_constant  */
#line 337 "parser1.y"
                                                { insert_value(); }
#line 1641 "parser1.tab.c"
    break;

  case 176: /* constant: string_constant  */
#line 338 "parser1.y"
                                                { insert_value(); }
#line 1647 "parser1.tab.c"
    break;

  case 177: /* constant: float_constant  */
#line 339 "parser1.y"
                                                { insert_value(); }
#line 1653 "parser1.tab.c"
    break;

  case 178: /* constant: character_constant  */
#line 340 "parser1.y"
                                            { insert_value(); }
#line 1659 "parser1.tab.c"
    break;


#line 1663 "parser1.tab.c"

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

#line 342 "parser1.y"


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
