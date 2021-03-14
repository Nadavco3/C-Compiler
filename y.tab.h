/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    WHILE = 258,
    IF = 259,
    ELSE = 260,
    FOR = 261,
    DO = 262,
    ADRS = 263,
    RETURN = 264,
    MAIN = 265,
    BOOL = 266,
    STRING = 267,
    CHAR = 268,
    INTEGER = 269,
    PCHAR = 270,
    PINT = 271,
    PREAL = 272,
    NULLPOINTER = 273,
    REAL = 274,
    ID = 275,
    FUNCTION = 276,
    VAR = 277,
    VOID = 278,
    PLUS = 279,
    MINUS = 280,
    MUL = 281,
    DIV = 282,
    LEFTBRACE = 283,
    RIGHTBRACE = 284,
    GE = 285,
    LE = 286,
    NE = 287,
    EQ = 288,
    G = 289,
    L = 290,
    AND = 291,
    OR = 292,
    NOT = 293,
    ASSIGN = 294,
    BOOLVAL = 295,
    INTEGERNUM = 296,
    REALNUM = 297,
    STRINGVAL = 298,
    CHARVAL = 299,
    IFX = 300
  };
#endif
/* Tokens.  */
#define WHILE 258
#define IF 259
#define ELSE 260
#define FOR 261
#define DO 262
#define ADRS 263
#define RETURN 264
#define MAIN 265
#define BOOL 266
#define STRING 267
#define CHAR 268
#define INTEGER 269
#define PCHAR 270
#define PINT 271
#define PREAL 272
#define NULLPOINTER 273
#define REAL 274
#define ID 275
#define FUNCTION 276
#define VAR 277
#define VOID 278
#define PLUS 279
#define MINUS 280
#define MUL 281
#define DIV 282
#define LEFTBRACE 283
#define RIGHTBRACE 284
#define GE 285
#define LE 286
#define NE 287
#define EQ 288
#define G 289
#define L 290
#define AND 291
#define OR 292
#define NOT 293
#define ASSIGN 294
#define BOOLVAL 295
#define INTEGERNUM 296
#define REALNUM 297
#define STRINGVAL 298
#define CHARVAL 299
#define IFX 300

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 11 "project.y" /* yacc.c:1909  */

   struct node *node;
   char *string;

#line 149 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
