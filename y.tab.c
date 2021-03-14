/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "project.y" /* yacc.c:339  */

 #define _GNU_SOURCE
 #include "lex.yy.c"
 #include "semantics.c"
 #include "3AC.c"
 #include "header.h"

 int tab=0;

#line 76 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 11 "project.y" /* yacc.c:355  */

   struct node *node;
   char *string;

#line 211 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 228 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  18
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   580

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  106
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  225

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    49,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    48,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    50,     2,    51,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    46,    52,    47,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    43,    43,    58,    59,    60,    61,    65,    66,    70,
      74,    78,    82,    83,    87,    91,    92,    96,   100,   101,
     105,   106,   107,   108,   109,   110,   111,   115,   116,   120,
     121,   125,   126,   129,   130,   134,   135,   139,   140,   141,
     142,   146,   147,   148,   149,   153,   157,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   176,
     180,   181,   182,   186,   190,   191,   196,   197,   201,   205,
     206,   210,   211,   212,   213,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   238,   242,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "WHILE", "IF", "ELSE", "FOR", "DO",
  "ADRS", "RETURN", "MAIN", "BOOL", "STRING", "CHAR", "INTEGER", "PCHAR",
  "PINT", "PREAL", "NULLPOINTER", "REAL", "ID", "FUNCTION", "VAR", "VOID",
  "PLUS", "MINUS", "MUL", "DIV", "LEFTBRACE", "RIGHTBRACE", "GE", "LE",
  "NE", "EQ", "G", "L", "AND", "OR", "NOT", "ASSIGN", "BOOLVAL",
  "INTEGERNUM", "REALNUM", "STRINGVAL", "CHARVAL", "IFX", "'{'", "'}'",
  "';'", "','", "'['", "']'", "'|'", "$accept", "program", "process",
  "code", "proc", "func", "main", "function_var", "return_type",
  "arguments", "parmeters", "parm_id", "type", "body", "body_void",
  "declar_list", "declar", "var_declar", "var_list_string", "var_list",
  "statement_list", "statement", "while", "do_while", "for",
  "function_call", "function_call_parm", "return_expr", "assignment_list",
  "assignment", "expr", "identifier", "identifier_string", "val", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   123,   125,    59,    44,
      91,    93,   124
};
# endif

#define YYPACT_NINF -153

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-153)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -14,   539,    24,  -153,   -14,  -153,  -153,   -14,  -153,  -153,
    -153,  -153,  -153,  -153,  -153,    38,     2,  -153,  -153,  -153,
    -153,    14,    35,    35,    39,   414,    25,    26,    28,  -153,
      48,    32,    62,    22,    22,    22,  -153,   561,    36,  -153,
      64,   550,   561,  -153,    41,   212,    22,  -153,    42,   212,
      44,  -153,    62,    47,    46,    12,    78,    82,  -153,    79,
      80,    87,    40,    94,   234,   -11,    98,    97,  -153,   212,
    -153,  -153,  -153,    72,  -153,    74,    85,    89,  -153,  -153,
    -153,  -153,  -153,   234,  -153,   234,    64,  -153,    77,    18,
     234,   234,     5,   291,    90,   234,  -153,    -4,   234,   234,
     234,  -153,  -153,  -153,  -153,  -153,   106,  -153,   368,  -153,
    -153,  -153,   205,    93,  -153,   276,    88,  -153,  -153,  -153,
     234,   234,   163,   308,  -153,  -153,   234,    82,   415,   429,
      47,    91,     5,   284,    99,   234,  -153,  -153,  -153,  -153,
    -153,   443,  -153,   101,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,  -153,  -153,   109,   328,
     234,  -153,   102,  -153,   499,   499,  -153,    64,   348,  -153,
     212,   212,   234,  -153,   138,   103,   142,   499,  -153,  -153,
      23,    23,  -153,  -153,    86,    86,    86,    86,    86,    86,
     294,   513,  -153,   234,   499,  -153,  -153,    82,  -153,   146,
     387,   126,   155,   131,  -153,  -153,   212,     5,   234,   133,
     234,  -153,   134,   457,   234,   471,   212,   114,   485,   116,
    -153,  -153,   117,  -153,  -153
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     4,     7,     8,     5,    26,    21,
      20,    24,    23,    25,    22,     0,     0,    14,     1,     3,
       6,     0,     0,     0,     0,     0,     0,     0,     0,    13,
       0,    15,     0,    32,    32,    32,    12,     0,    18,    17,
       0,     0,     0,    33,     0,    30,    32,    34,     0,    28,
       0,    16,     0,     0,     0,    38,     0,     0,     9,     0,
       0,     0,     0,     0,     0,    93,     0,     0,    29,    46,
      54,    55,    56,     0,    58,     0,     0,     0,    31,    10,
      27,    11,    19,     0,    36,     0,     0,    93,     0,    42,
       0,     0,     0,     0,     0,     0,   105,     0,     0,     0,
       0,   104,    95,    99,   101,   100,     0,    92,     0,   102,
     103,    91,     0,     0,    53,     0,     0,    45,    57,    49,
       0,     0,     0,    37,    40,    35,     0,     0,     0,     0,
      93,     0,    69,     0,     0,     0,    88,    96,    97,    98,
      89,     0,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    68,    65,     0,    66,
       0,    51,     0,    52,    71,    72,    94,     0,    41,    44,
       0,     0,     0,    70,     0,     0,     0,    73,    90,   106,
      75,    77,    76,    78,    82,    81,    83,    84,    80,    79,
      85,    86,    64,     0,    74,    50,    39,     0,    59,    47,
       0,     0,     0,     0,    67,    43,     0,     0,     0,     0,
       0,    48,     0,     0,     0,     0,     0,     0,     0,     0,
      63,    62,     0,    60,    61
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -153,  -153,    58,    66,  -153,  -153,  -153,   145,  -153,   136,
    -153,   119,     3,  -153,   139,   -20,  -153,   -57,   -84,  -121,
     -46,  -152,  -153,  -153,  -153,   -34,   -18,  -153,  -128,   -91,
      57,   -37,   -40,  -153
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    43,     5,     6,     7,    26,    16,    30,
      31,    39,    17,    48,    44,    45,    46,    47,    54,    88,
      68,    69,    70,    71,    72,   107,   158,    74,   131,    75,
     159,   109,   110,   111
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      55,   132,   124,    80,   173,    77,   169,     1,    76,    77,
     115,    73,    76,    63,    49,    73,    87,   112,   198,   199,
      89,   116,    23,   117,    18,   130,    78,    77,    32,    77,
      76,    66,    76,    73,    40,    73,   133,   137,   138,    83,
      32,   132,    24,    41,    42,    57,    55,   134,    21,   146,
     147,    85,    77,    77,   211,    76,    76,   126,    22,    73,
     139,    86,    19,    25,   220,    20,     4,   127,    28,   162,
       4,    33,    34,     4,    35,    77,   205,    36,    76,   212,
      37,    73,    38,   196,    53,    52,    93,   175,    58,    79,
      89,    81,    77,    77,    84,    76,    76,    83,    22,    73,
      59,    60,    87,    61,    62,    63,    64,    90,    91,    40,
     144,   145,   146,   147,    94,    92,   132,    65,   113,    42,
     118,   108,   119,    66,   120,   125,   143,    55,   121,   135,
      77,    77,   160,    76,    76,   163,    73,    73,   192,   172,
     122,   201,   123,    67,   114,   203,   176,   128,   129,   195,
     202,   206,   136,   179,   208,   140,   141,   142,   209,   210,
      89,   214,   221,   216,   223,   224,    77,    77,    27,    76,
      76,    82,    73,    51,    50,   204,    77,   164,   165,    76,
       0,     0,    73,   168,     0,     0,     0,   144,   145,   146,
     147,     0,   177,   148,   149,   150,   151,   152,   153,   154,
     155,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,    95,   166,    59,    60,   194,    61,    62,
      63,    64,     0,    96,     0,    65,     0,     0,     0,   200,
      97,    98,    65,    99,   157,     0,     0,     0,    66,     0,
       0,     0,    95,   100,     0,   101,   102,   103,   104,   105,
       0,     0,    96,     0,    65,     0,     0,   106,    67,    97,
      98,     0,    99,     0,     0,   213,     0,   215,     0,     0,
       0,   218,   100,     0,   101,   102,   103,   104,   105,    59,
      60,     0,    61,    62,    63,    64,   106,    59,    60,     0,
      61,    62,    63,    64,    59,    60,    65,    61,    62,    63,
      64,     0,    66,    40,    65,     0,     0,     0,     0,     0,
      66,    65,     0,    42,     0,     0,     0,    66,   144,   145,
     146,   147,    67,   161,   148,   149,   150,   151,   152,   153,
      67,   174,   144,   145,   146,   147,     0,    67,   148,   149,
     150,   151,   152,   153,   154,   155,     0,     0,     0,     0,
       0,     0,   144,   145,   146,   147,     0,   167,   148,   149,
     150,   151,   152,   153,   154,   155,     0,     0,     0,     0,
       0,     0,   144,   145,   146,   147,     0,   193,   148,   149,
     150,   151,   152,   153,   154,   155,     0,     0,     0,     0,
       0,     0,   144,   145,   146,   147,     0,   197,   148,   149,
     150,   151,   152,   153,   154,   155,     0,     0,     0,     0,
       0,   144,   145,   146,   147,     0,   156,   148,   149,   150,
     151,   152,   153,   154,   155,     8,     0,     9,    10,    11,
      12,    13,     0,    14,     0,   207,     0,     0,     0,   144,
     145,   146,   147,    29,   170,   148,   149,   150,   151,   152,
     153,   154,   155,   144,   145,   146,   147,     0,   171,   148,
     149,   150,   151,   152,   153,   154,   155,   144,   145,   146,
     147,     0,   178,   148,   149,   150,   151,   152,   153,   154,
     155,   144,   145,   146,   147,     0,   217,   148,   149,   150,
     151,   152,   153,   154,   155,   144,   145,   146,   147,     0,
     219,   148,   149,   150,   151,   152,   153,   154,   155,   144,
     145,   146,   147,     0,   222,   148,   149,   150,   151,   152,
     153,   154,   155,   144,   145,   146,   147,     0,     0,   148,
     149,   150,   151,   152,   153,   154,   155,   144,   145,   146,
     147,     0,     0,   148,   149,   150,   151,   152,   153,   154,
       8,     0,     9,    10,    11,    12,    13,     0,    14,     0,
       0,     8,    15,     9,    10,    11,    12,    13,     0,    14,
       0,     0,     8,    56,     9,    10,    11,    12,    13,     0,
      14
};

static const yytype_int16 yycheck[] =
{
      40,    92,    86,    49,   132,    45,   127,    21,    45,    49,
      67,    45,    49,     8,    34,    49,    20,    28,   170,   171,
      57,    67,    20,    69,     0,    20,    46,    67,    25,    69,
      67,    26,    69,    67,    12,    69,    93,    41,    42,    50,
      37,   132,    28,    21,    22,    42,    86,    93,    10,    26,
      27,    39,    92,    93,   206,    92,    93,    39,    20,    93,
      97,    49,     4,    28,   216,     7,     0,    49,    29,   115,
       4,    46,    46,     7,    46,   115,   197,    29,   115,   207,
      48,   115,    20,   167,    20,    49,    46,   133,    47,    47,
     127,    47,   132,   133,    48,   132,   133,    50,    20,   133,
       3,     4,    20,     6,     7,     8,     9,    28,    28,    12,
      24,    25,    26,    27,    20,    28,   207,    20,    20,    22,
      48,    64,    48,    26,    39,    48,    20,   167,    39,    39,
     170,   171,    39,   170,   171,    47,   170,   171,    29,    48,
      83,     3,    85,    46,    47,     3,    47,    90,    91,    47,
      47,     5,    95,    52,    28,    98,    99,   100,     3,    28,
     197,    28,    48,    29,    48,    48,   206,   207,    23,   206,
     207,    52,   206,    37,    35,   193,   216,   120,   121,   216,
      -1,    -1,   216,   126,    -1,    -1,    -1,    24,    25,    26,
      27,    -1,   135,    30,    31,    32,    33,    34,    35,    36,
      37,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,     8,    51,     3,     4,   160,     6,     7,
       8,     9,    -1,    18,    -1,    20,    -1,    -1,    -1,   172,
      25,    26,    20,    28,    29,    -1,    -1,    -1,    26,    -1,
      -1,    -1,     8,    38,    -1,    40,    41,    42,    43,    44,
      -1,    -1,    18,    -1,    20,    -1,    -1,    52,    46,    25,
      26,    -1,    28,    -1,    -1,   208,    -1,   210,    -1,    -1,
      -1,   214,    38,    -1,    40,    41,    42,    43,    44,     3,
       4,    -1,     6,     7,     8,     9,    52,     3,     4,    -1,
       6,     7,     8,     9,     3,     4,    20,     6,     7,     8,
       9,    -1,    26,    12,    20,    -1,    -1,    -1,    -1,    -1,
      26,    20,    -1,    22,    -1,    -1,    -1,    26,    24,    25,
      26,    27,    46,    47,    30,    31,    32,    33,    34,    35,
      46,    47,    24,    25,    26,    27,    -1,    46,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    -1,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    -1,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    -1,    49,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    -1,    48,    30,    31,    32,
      33,    34,    35,    36,    37,    11,    -1,    13,    14,    15,
      16,    17,    -1,    19,    -1,    48,    -1,    -1,    -1,    24,
      25,    26,    27,    29,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    24,    25,    26,    27,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    24,    25,    26,
      27,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    24,    25,    26,    27,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    24,    25,    26,    27,    -1,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    24,
      25,    26,    27,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    24,    25,    26,    27,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    24,    25,    26,
      27,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      11,    -1,    13,    14,    15,    16,    17,    -1,    19,    -1,
      -1,    11,    23,    13,    14,    15,    16,    17,    -1,    19,
      -1,    -1,    11,    23,    13,    14,    15,    16,    17,    -1,
      19
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    21,    54,    55,    56,    57,    58,    59,    11,    13,
      14,    15,    16,    17,    19,    23,    61,    65,     0,    55,
      55,    10,    20,    20,    28,    28,    60,    60,    29,    29,
      62,    63,    65,    46,    46,    46,    29,    48,    20,    64,
      12,    21,    22,    56,    67,    68,    69,    70,    66,    68,
      67,    62,    49,    20,    71,    85,    23,    65,    47,     3,
       4,     6,     7,     8,     9,    20,    26,    46,    73,    74,
      75,    76,    77,    78,    80,    82,    84,    85,    68,    47,
      73,    47,    64,    50,    48,    39,    49,    20,    72,    84,
      28,    28,    28,    46,    20,     8,    18,    25,    26,    28,
      38,    40,    41,    42,    43,    44,    52,    78,    83,    84,
      85,    86,    28,    20,    47,    70,    73,    73,    48,    48,
      39,    39,    83,    83,    71,    48,    39,    49,    83,    83,
      20,    81,    82,    70,    73,    39,    83,    41,    42,    84,
      83,    83,    83,    20,    24,    25,    26,    27,    30,    31,
      32,    33,    34,    35,    36,    37,    48,    29,    79,    83,
      39,    47,    73,    47,    83,    83,    51,    49,    83,    72,
      29,    29,    48,    81,    47,    73,    47,    83,    29,    52,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    29,    49,    83,    47,    71,    49,    74,    74,
      83,     3,    47,     3,    79,    72,     5,    48,    28,     3,
      28,    74,    81,    83,    28,    83,    29,    29,    83,    29,
      74,    48,    29,    48,    48
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    55,    55,    55,    56,    56,    57,
      58,    59,    60,    60,    61,    62,    62,    63,    64,    64,
      65,    65,    65,    65,    65,    65,    65,    66,    66,    67,
      67,    68,    68,    69,    69,    70,    70,    71,    71,    71,
      71,    72,    72,    72,    72,    73,    73,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    75,
      76,    76,    76,    77,    78,    78,    79,    79,    80,    81,
      81,    82,    82,    82,    82,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    84,    85,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     2,     1,     1,     7,
       7,     8,     3,     2,     1,     1,     3,     2,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     2,
       1,     2,     0,     1,     1,     4,     3,     3,     1,     5,
       3,     3,     1,     5,     3,     2,     1,     5,     7,     2,
       4,     3,     3,     2,     1,     1,     1,     2,     1,     5,
       9,    10,     9,     9,     4,     3,     1,     3,     3,     1,
       2,     3,     3,     4,     4,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       3,     1,     1,     1,     4,     1,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 2:
#line 44 "project.y" /* yacc.c:1646  */
    {
		node * asttree=mknode("CODE","",(yyvsp[0].node),NULL);
		//printf("\nchecking semantics...\n");
		//initializeGlobalScope(asttree);
		//printf("\nprint ast:\n");
		//printTree(asttree);
		printf("\nprint 3AC:\n");
		generateLabels(asttree);
		generate3AC(asttree);

    }
#line 1542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 58 "project.y" /* yacc.c:1646  */
    {(yyval.node)= mknode("","",(yyvsp[-1].node),(yyvsp[0].node));}
#line 1548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 59 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("","",(yyvsp[0].node),NULL);}
#line 1554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 60 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("","",(yyvsp[0].node),NULL);}
#line 1560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 61 "project.y" /* yacc.c:1646  */
    {(yyval.node)= mknode("","",(yyvsp[-1].node),(yyvsp[0].node));}
#line 1566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 65 "project.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 66 "project.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 70 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode_new("FUNCTION",(yyvsp[-4].string),(yyvsp[-3].node),mknode("TYPE ",(yyvsp[-5].string),NULL,NULL),(yyvsp[-1].node),NULL);}
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 74 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode_new("FUNCTION",(yyvsp[-4].string),(yyvsp[-3].node),(yyvsp[-5].node),(yyvsp[-1].node),NULL);}
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 78 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("MAIN","",mknode("TYPE ",(yyvsp[-6].string),NULL,NULL),(yyvsp[-1].node));}
#line 1596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 82 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("ARGS","",(yyvsp[-1].node),NULL);}
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 83 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("ARGS","NONE",NULL,NULL);}
#line 1608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 87 "project.y" /* yacc.c:1646  */
    { (yyval.node) = mknode("TYPE ",(yyvsp[0].string),NULL,NULL); }
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 91 "project.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 92 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("","",(yyvsp[-2].node),(yyvsp[0].node));}
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 96 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode((yyvsp[-1].string),"",(yyvsp[0].node),NULL);}
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 100 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("",(yyvsp[0].string),NULL,NULL);}
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 101 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("","",mknode("",(yyvsp[-2].string),NULL,NULL),(yyvsp[0].node));}
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 105 "project.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 106 "project.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 107 "project.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 1662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 108 "project.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 1668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 109 "project.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 110 "project.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 1680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 111 "project.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 1686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 115 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode_new("BODY","",(yyvsp[-1].node),(yyvsp[0].node),NULL,NULL);}
#line 1692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 116 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("BODY","",(yyvsp[0].node),NULL);}
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 120 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("BODY","",(yyvsp[-1].node),(yyvsp[0].node));}
#line 1704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 121 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("BODY","",(yyvsp[0].node),NULL);}
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 125 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("","",(yyvsp[-1].node),(yyvsp[0].node));}
#line 1716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 126 "project.y" /* yacc.c:1646  */
    {(yyval.node)=NULL;}
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 129 "project.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 130 "project.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 134 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("DECLAR",(yyvsp[-2].string),(yyvsp[-1].node),NULL);}
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 135 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("DECLAR",(yyvsp[-2].string),(yyvsp[-1].node),NULL);}
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 139 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("ASSIGN","=",(yyvsp[-2].node),(yyvsp[0].node));}
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 140 "project.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 141 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("","",mknode("ASSIGN","=",(yyvsp[-4].node),(yyvsp[-2].node)),(yyvsp[0].node));}
#line 1764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 142 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("","",(yyvsp[-2].node),(yyvsp[0].node));}
#line 1770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 146 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("ASSIGN","=",(yyvsp[-2].node),(yyvsp[0].node));}
#line 1776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 147 "project.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 148 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("","",mknode("ASSIGN","=",(yyvsp[-4].node),(yyvsp[-2].node)),(yyvsp[0].node));}
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 149 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("","",(yyvsp[-2].node),(yyvsp[0].node));}
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 153 "project.y" /* yacc.c:1646  */
    {node* newnode=(yyvsp[-1].node);
										 newnode->next=(yyvsp[0].node);
										 (yyval.node)=mknode("","",(yyvsp[-1].node),(yyvsp[0].node));
										 }
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 157 "project.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 161 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("IF","",(yyvsp[-2].node),(yyvsp[0].node));}
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 162 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode_new("IF-ELSE","",(yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 163 "project.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-1].node);}
#line 1827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 164 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("BLOCK","",(yyvsp[-2].node),(yyvsp[-1].node));}
#line 1833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 165 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("BLOCK","",(yyvsp[-1].node),NULL);}
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 166 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("BLOCK","",(yyvsp[-1].node),NULL);}
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 167 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("BLOCK","",NULL,NULL);}
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 168 "project.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 169 "project.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 170 "project.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 171 "project.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-1].node);}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 172 "project.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 176 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("WHILE","",(yyvsp[-2].node),(yyvsp[0].node));}
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 180 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("DO-WHILE","",mknode("BLOCK","",(yyvsp[-6].node),NULL),(yyvsp[-2].node));}
#line 1893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 181 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("DO-WHILE","",mknode("BLOCK","",(yyvsp[-7].node),(yyvsp[-6].node)),(yyvsp[-2].node));}
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 182 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("DO-WHILE","",mknode("BLOCK","",(yyvsp[-6].node),NULL),(yyvsp[-2].node));}
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 186 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode_new("FOR","",(yyvsp[-6].node),(yyvsp[-4].node),(yyvsp[0].node),(yyvsp[-2].node));}
#line 1911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 190 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("FUNCTION-CALL",(yyvsp[-3].string),mknode("var-CALL","",(yyvsp[-1].node),NULL),NULL);}
#line 1917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 191 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("FUNCTION-CALL",(yyvsp[-2].string),mknode("var-CALL","NONE",NULL,NULL),NULL);}
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 196 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("PARM","",(yyvsp[0].node),NULL);}
#line 1929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 197 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("","",mknode("PARM","",(yyvsp[-2].node),NULL),(yyvsp[0].node));}
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 201 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode((yyvsp[-2].string),"",(yyvsp[-1].node),NULL);}
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 205 "project.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 206 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("","",(yyvsp[-1].node),(yyvsp[0].node));}
#line 1953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 210 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("ASSIGN","=",(yyvsp[-2].node),(yyvsp[0].node));}
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 211 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("ASSIGN","=",(yyvsp[-2].node),(yyvsp[0].node));}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 212 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("ASSIGN","=",mknode("POINTER-EXPR",(yyvsp[-3].string),mknode("ID",(yyvsp[-2].string),NULL,NULL),NULL),(yyvsp[0].node));}
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 213 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("ASSIGN","=",mknode("POINTER-EXPR",(yyvsp[-3].string),mknode("ID",(yyvsp[-2].string),NULL,NULL),NULL),(yyvsp[0].node));}
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 217 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("EXPR",(yyvsp[-1].string),(yyvsp[-2].node),(yyvsp[0].node));}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 218 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("EXPR",(yyvsp[-1].string),(yyvsp[-2].node),(yyvsp[0].node));}
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 219 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("EXPR",(yyvsp[-1].string),(yyvsp[-2].node),(yyvsp[0].node));}
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 220 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("EXPR",(yyvsp[-1].string),(yyvsp[-2].node),(yyvsp[0].node));}
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 221 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("EXPR",(yyvsp[-1].string),(yyvsp[-2].node),(yyvsp[0].node));}
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 222 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("EXPR",(yyvsp[-1].string),(yyvsp[-2].node),(yyvsp[0].node));}
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 223 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("EXPR",(yyvsp[-1].string),(yyvsp[-2].node),(yyvsp[0].node));}
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 224 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("EXPR",(yyvsp[-1].string),(yyvsp[-2].node),(yyvsp[0].node));}
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 225 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("EXPR",(yyvsp[-1].string),(yyvsp[-2].node),(yyvsp[0].node));}
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 226 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("EXPR",(yyvsp[-1].string),(yyvsp[-2].node),(yyvsp[0].node));}
#line 2037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 227 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("EXPR",(yyvsp[-1].string),(yyvsp[-2].node),(yyvsp[0].node));}
#line 2043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 228 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("EXPR",(yyvsp[-1].string),(yyvsp[-2].node),(yyvsp[0].node));}
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 229 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("EXPR",(yyvsp[-1].string),(yyvsp[0].node),NULL);}
#line 2055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 230 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("POINTER-EXPR","&",(yyvsp[0].node),NULL);}
#line 2061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 231 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("POINTER-EXPR",(yyvsp[-1].string),(yyvsp[0].node),NULL);}
#line 2067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 232 "project.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-1].node);}
#line 2073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 233 "project.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 234 "project.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 238 "project.y" /* yacc.c:1646  */
    { (yyval.node) = mknode("ID",(yyvsp[0].string),NULL,NULL); }
#line 2091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 242 "project.y" /* yacc.c:1646  */
    {(yyval.node) = mknode("STR","",mknode("ID",(yyvsp[-3].string),NULL,NULL),(yyvsp[-1].node));}
#line 2097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 246 "project.y" /* yacc.c:1646  */
    { (yyval.node) = mknode("INT",(yyvsp[0].string),NULL,NULL);}
#line 2103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 247 "project.y" /* yacc.c:1646  */
    { (yyval.node) = mknode("UMINUS","",mknode("INT",(yyvsp[0].string),NULL,NULL),NULL); }
#line 2109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 248 "project.y" /* yacc.c:1646  */
    { (yyval.node) = mknode("UMINUS","",mknode("REAL",(yyvsp[0].string),NULL,NULL),NULL);}
#line 2115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 249 "project.y" /* yacc.c:1646  */
    { (yyval.node) = mknode("UMINUS","",(yyvsp[0].node),NULL);}
#line 2121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 250 "project.y" /* yacc.c:1646  */
    { (yyval.node) = mknode("REAL",(yyvsp[0].string),NULL,NULL); }
#line 2127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 251 "project.y" /* yacc.c:1646  */
    { (yyval.node) = mknode("CHAR",(yyvsp[0].string),NULL,NULL); }
#line 2133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 252 "project.y" /* yacc.c:1646  */
    { (yyval.node) = mknode("STRING",(yyvsp[0].string),NULL,NULL); }
#line 2139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 253 "project.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 254 "project.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 255 "project.y" /* yacc.c:1646  */
    { (yyval.node) = mknode("BOOL",(yyvsp[0].string),NULL,NULL); }
#line 2157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 256 "project.y" /* yacc.c:1646  */
    { (yyval.node) = mknode("NULL",(yyvsp[0].string),NULL,NULL); }
#line 2163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 257 "project.y" /* yacc.c:1646  */
    { (yyval.node) =mknode("LEN",(yyvsp[-1].string),NULL,NULL);}
#line 2169 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2173 "y.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
  return yyresult;
}
#line 260 "project.y" /* yacc.c:1906  */


void yyerror(char *s){
	if(strcmp(s,"syntax error")==0)
		fprintf(stderr, "%s\n in line%d\ngramer can't reduce %s with gramers rule \n",s,yylineno,(yytext));
	else
		fprintf(stderr, "%s\n%s\n",s,yytext);
	exit(1);
}

node *mknode(char* type,char* id, node *node1, node *node2){
		return mknode_new (type,id,node1,node2,NULL,NULL);
	}

node* mknode_new (char* type,char* id,node *node1, node *node2,node* node3,node* node4){
	node *newnode = (node*)malloc(sizeof(node));
	char* newtype = (char*)malloc(sizeof(type)+1);
	char* newid = (char*)malloc(sizeof(id)+1);	
	strcpy(newtype,type);
	strcpy(newid,id);
	newnode->id=newid;
	newnode->strsize=-1;
	newnode->nodeType=newtype;
	newnode->node1=node1;
	newnode->node2=node2;
	newnode->node3=node3;
	newnode->node4=node4;
	newnode->code=strdup("");
	newnode->var=strdup("");
	newnode->truelabel=strdup("");
	newnode->falselabel=strdup("");
	newnode->next=NULL;
	newnode->flag=false;
	return newnode;
}

void printTree(node* root){	
	/*any nodeType node that has a value \n tab */	
	if(strcmp(root->nodeType,"")!=0&&strcmp(root->nodeType,"ID")!=0&&strcmp(root->nodeType,"INT")!=0&&strcmp(root->nodeType,"LEN")!=0&&
	strcmp(root->nodeType,"CHAR")!=0&&strcmp(root->nodeType,"STRING")!=0
	&&strcmp(root->nodeType,"REAL")!=0&&strcmp(root->nodeType,"REAL*")!=0&&strcmp(root->nodeType,"INT*")!=0&&strcmp(root->nodeType,"CHAR*")!=0){
		if(strcmp(root->nodeType,"var-CALL")!=0){
			printf("\n");		
			for(int i=0;i<tab;i++)
				printf("    ");
		}
		printf("(");
		tab++;
	}
	/*print any nodeType except EXPR ASSIGN expr DECLAR FUCNTION-CALL var-CALL*/
	if(strcmp(root->nodeType,"EXPR")!=0&&strcmp(root->nodeType,"ASSIGN")!=0&&strcmp(root->nodeType,"FUNCTION-CALL")!=0
	&&strcmp(root->nodeType,"var-CALL")!=0&&strcmp(root->nodeType,"expr")!=0
	&&strcmp(root->nodeType,"DECLAR")!=0&&strcmp(root->nodeType,"POINTER")!=0&&strcmp(root->nodeType,"POINTER-EXPR")!=0&&
	strcmp(root->nodeType,"STR")!=0&&strcmp(root->nodeType,"ID")!=0&&strcmp(root->nodeType,"INT")!=0&&strcmp(root->nodeType,"LEN")!=0&&
	strcmp(root->nodeType,"CHAR")!=0&&strcmp(root->nodeType,"STRING")!=0
	&&strcmp(root->nodeType,"REAL")!=0&&strcmp(root->nodeType,"REAL*")!=0&&strcmp(root->nodeType,"INT*")!=0&&strcmp(root->nodeType,"CHAR*")!=0)			
		printf("%s",root->nodeType);

	/*every time in tree we see "" print space */
	if(strcmp(root->nodeType,"")==0&&strcmp(root->id,"")!=0)
		printf(" ");
	

	if(strcmp(root->nodeType,"FUNCTION")==0){
		printf("\n");
		for(int i=0;i<tab;i++)
			printf("    ");	
	}

	/*prints the id type of the node even if empty(dont have an id -> "") */	
	printf("%s",root->id);
	
	if(root->node1){
		printTree(root->node1);
	}
	if(root->node2){
		printTree(root->node2);
	}
	if(root->node3){
		printTree(root->node3);
	}
	if(root->node4){
		printTree(root->node4);
	}
	
	if(strcmp(root->nodeType,"")!=0&&strcmp(root->nodeType,"POINTER")!=0&&strcmp(root->nodeType,"ID")!=0&&strcmp(root->nodeType,"INT")!=0&&strcmp(root->nodeType,"LEN")!=0&&
	strcmp(root->nodeType,"CHAR")!=0&&strcmp(root->nodeType,"STRING")!=0
	&&strcmp(root->nodeType,"REAL")!=0&&strcmp(root->nodeType,"REAL*")!=0&&strcmp(root->nodeType,"INT*")!=0&&strcmp(root->nodeType,"CHAR*")!=0){
		tab--;
		if((strcmp(root->nodeType,"FUNCTION")==0||strcmp(root->nodeType,"MAIN")==0||strcmp(root->nodeType,"DO-WHILE")==0||strcmp(root->nodeType,"FOR")==0
		||strcmp(root->nodeType,"CODE")==0||strcmp(root->nodeType,"BODY")==0||strcmp(root->nodeType,"var")==0
		||strcmp(root->nodeType,"IF")==0||strcmp(root->nodeType,"BLOCK")==0||strcmp(root->nodeType,"DECLAR")==0||strcmp(root->nodeType,"IF-ELSE")==0
		||(root->node1&&strcmp(root->node1->nodeType,"EXPR")==0||root->node2&&strcmp(root->node2->nodeType,"EXPR")==0))
		&&(root->node1||root->node2||root->node3||root->node3)){
			printf("\n");		
			for(int i=0;i<tab;i++)
				printf("    ");		
			printf(")");
		}
		else				
			printf(")");
	}
}

int main(){
	yyparse();
	printf("\n");
	return 0;
}
