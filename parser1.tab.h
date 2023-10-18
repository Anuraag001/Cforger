/* A Bison parser, made by GNU Bison 2.4.2.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

extern YYSTYPE yylval;


