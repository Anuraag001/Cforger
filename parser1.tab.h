/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER1_TAB_H_INCLUDED
# define YY_YY_PARSER1_TAB_H_INCLUDED
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
    IF = 258,                      /* IF  */
    INT = 259,                     /* INT  */
    CHAR = 260,                    /* CHAR  */
    FLOAT = 261,                   /* FLOAT  */
    DOUBLE = 262,                  /* DOUBLE  */
    LONG = 263,                    /* LONG  */
    SHORT = 264,                   /* SHORT  */
    SIGNED = 265,                  /* SIGNED  */
    UNSIGNED = 266,                /* UNSIGNED  */
    STRUCT = 267,                  /* STRUCT  */
    UNION = 268,                   /* UNION  */
    RETURN = 269,                  /* RETURN  */
    MAIN = 270,                    /* MAIN  */
    INCLUDE = 271,                 /* INCLUDE  */
    DEFINE = 272,                  /* DEFINE  */
    VOID = 273,                    /* VOID  */
    WHILE = 274,                   /* WHILE  */
    FOR = 275,                     /* FOR  */
    DO = 276,                      /* DO  */
    BREAK = 277,                   /* BREAK  */
    CONTINUE = 278,                /* CONTINUE  */
    GOTO = 279,                    /* GOTO  */
    ENDIF = 280,                   /* ENDIF  */
    SWITCH = 281,                  /* SWITCH  */
    CASE = 282,                    /* CASE  */
    DEFAULT = 283,                 /* DEFAULT  */
    identifier = 284,              /* identifier  */
    integer_constant = 285,        /* integer_constant  */
    string_constant = 286,         /* string_constant  */
    float_constant = 287,          /* float_constant  */
    character_constant = 288,      /* character_constant  */
    ELSE = 289,                    /* ELSE  */
    MOD_EQUAL = 290,               /* MOD_EQUAL  */
    MULTIPLY_EQUAL = 291,          /* MULTIPLY_EQUAL  */
    DIVIDE_EQUAL = 292,            /* DIVIDE_EQUAL  */
    ADD_EQUAL = 293,               /* ADD_EQUAL  */
    SUBTRACT_EQUAL = 294,          /* SUBTRACT_EQUAL  */
    OR_OR = 295,                   /* OR_OR  */
    AND_AND = 296,                 /* AND_AND  */
    EQUAL = 297,                   /* EQUAL  */
    NOT_EQUAL = 298,               /* NOT_EQUAL  */
    LESS_EQUAL = 299,              /* LESS_EQUAL  */
    LESS = 300,                    /* LESS  */
    GREAT_EQUAL = 301,             /* GREAT_EQUAL  */
    GREAT = 302,                   /* GREAT  */
    SIZEOF = 303,                  /* SIZEOF  */
    NOT = 304,                     /* NOT  */
    INCREMENT = 305,               /* INCREMENT  */
    DECREMENT = 306                /* DECREMENT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER1_TAB_H_INCLUDED  */
