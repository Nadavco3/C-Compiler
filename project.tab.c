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


 #include "lex.yy.c"
 #include "header.h"
 #include <stdio.h>
 #include<stdlib.h>

 int tab=0;

#line 76 "project.tab.c" /* yacc.c:339  */

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
    RETURN = 263,
    MAIN = 264,
    BOOL = 265,
    STRING = 266,
    CHAR = 267,
    INTEGER = 268,
    PCHAR = 269,
    PINT = 270,
    PREAL = 271,
    NULLPOINTER = 272,
    REAL = 273,
    ID = 274,
    FUNCTION = 275,
    VAR = 276,
    VOID = 277,
    PLUS = 278,
    MINUS = 279,
    MUL = 280,
    DIV = 281,
    LEFTBRACE = 282,
    RIGHTBRACE = 283,
    GE = 284,
    LE = 285,
    NE = 286,
    EQ = 287,
    G = 288,
    L = 289,
    AND = 290,
    OR = 291,
    NOT = 292,
    ASSIGN = 293,
    BOOLVAL = 294,
    INTEGERNUM = 295,
    REALNUM = 296,
    STRINGVAL = 297,
    CHARVAL = 298,
    IFX = 299
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 11 "project.y" /* yacc.c:355  */

   struct node *node;
   char *string;

#line 163 "project.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 180 "project.tab.c" /* yacc.c:358  */

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
#define YYLAST   300

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  184

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   299

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    49,     2,
       2,     2,     2,     2,    48,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    47,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    50,     2,    51,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    45,    52,    46,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    42,    42,    50,    51,    52,    56,    57,    61,    65,
      69,    73,    74,    78,    82,    83,    87,    91,    92,    96,
      97,    98,    99,   100,   101,   102,   106,   107,   111,   112,
     116,   117,   120,   121,   125,   126,   130,   131,   132,   133,
     137,   138,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   157,   161,   162,   163,   167,   171,
     172,   177,   178,   182,   186,   187,   191,   192,   193,   197,
     198,   199,   200,   201,   205,   206,   210,   211,   212,   213,
     214,   215,   216,   217
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "WHILE", "IF", "ELSE", "FOR", "DO",
  "RETURN", "MAIN", "BOOL", "STRING", "CHAR", "INTEGER", "PCHAR", "PINT",
  "PREAL", "NULLPOINTER", "REAL", "ID", "FUNCTION", "VAR", "VOID", "PLUS",
  "MINUS", "MUL", "DIV", "LEFTBRACE", "RIGHTBRACE", "GE", "LE", "NE", "EQ",
  "G", "L", "AND", "OR", "NOT", "ASSIGN", "BOOLVAL", "INTEGERNUM",
  "REALNUM", "STRINGVAL", "CHARVAL", "IFX", "'{'", "'}'", "';'", "','",
  "'&'", "'['", "']'", "'|'", "$accept", "program", "process", "code",
  "proc", "func", "main", "function_var", "return_type", "arguments",
  "parmeters", "parm_id", "type", "body", "body_void", "declar_list",
  "declar", "var_declar", "var_list", "statement_list", "statement",
  "while", "do_while", "for", "function_call", "function_call_parm",
  "return_expr", "assignment_list", "assignment", "expr", "identifier",
  "val", YY_NULLPTR
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
     295,   296,   297,   298,   299,   123,   125,    59,    44,    38,
      91,    93,   124
};
# endif

#define YYPACT_NINF -131

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-131)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -9,   215,    18,  -131,    -9,  -131,  -131,  -131,  -131,  -131,
    -131,  -131,  -131,  -131,  -131,     4,    19,  -131,  -131,  -131,
      17,    25,    25,    27,   208,     1,    13,    24,  -131,    43,
      30,    67,    45,    45,    45,  -131,   248,    44,  -131,   228,
     241,  -131,    50,   153,    45,  -131,    54,   153,    58,  -131,
      67,    87,    88,    88,  -131,    81,    83,    92,    79,   164,
     -10,   108,    72,   112,  -131,   153,  -131,  -131,  -131,    96,
    -131,    98,    97,  -131,  -131,   131,  -131,  -131,   104,    99,
      12,   101,   164,   164,   -13,    95,  -131,  -131,  -131,  -131,
    -131,  -131,   123,   127,  -131,  -131,   145,   164,   120,  -131,
     122,   117,   128,  -131,  -131,  -131,   164,   164,  -131,   164,
      88,  -131,   244,   250,   118,   -13,   130,   124,   125,   164,
     164,   164,   164,  -131,  -131,   141,    64,     3,   164,  -131,
     134,  -131,   164,   274,   170,   166,  -131,   153,   153,   164,
    -131,   179,   154,   196,  -131,    57,    57,  -131,  -131,  -131,
     164,  -131,   274,  -131,   274,  -131,    88,  -131,   207,   185,
     174,   210,   188,  -131,  -131,   153,   -13,   164,   192,   164,
    -131,   206,   256,   164,   262,   153,   198,   268,   200,  -131,
    -131,   201,  -131,  -131
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     4,     6,     7,     5,    25,    20,
      19,    23,    22,    24,    21,     0,     0,    13,     1,     3,
       0,     0,     0,     0,     0,     0,     0,     0,    12,     0,
      14,     0,    31,    31,    31,    11,     0,    17,    16,     0,
       0,    32,     0,    29,    31,    33,     0,    27,     0,    15,
       0,     0,     0,     0,     8,     0,     0,     0,     0,     0,
      74,     0,     0,     0,    28,    41,    49,    50,    51,     0,
      53,     0,     0,    30,     9,     0,    10,    18,    74,     0,
      37,     0,     0,     0,     0,     0,    82,    81,    76,    77,
      79,    78,     0,     0,    80,    73,     0,     0,     0,    48,
       0,     0,     0,    40,    52,    44,     0,     0,    35,     0,
       0,    34,     0,     0,     0,    64,     0,     0,     0,     0,
       0,     0,     0,    63,    60,     0,    61,     0,     0,    46,
       0,    47,     0,    66,     0,    36,    39,     0,     0,     0,
      65,     0,     0,     0,    83,    69,    71,    70,    72,    59,
       0,    75,    68,    45,    67,    26,     0,    54,    42,     0,
       0,     0,     0,    62,    38,     0,     0,     0,     0,     0,
      43,     0,     0,     0,     0,     0,     0,     0,     0,    58,
      57,     0,    55,    56
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -131,  -131,   231,    16,  -131,  -131,  -131,   217,  -131,   213,
    -131,   221,     7,  -131,   243,   -12,  -131,   -48,   -51,   -32,
    -130,  -131,  -131,  -131,  -131,   115,  -131,  -110,   -81,   -58,
     -43,  -131
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,    41,     5,     6,     7,    25,    16,    29,
      30,    38,    17,    46,    42,    43,    44,    45,    79,    64,
      65,    66,    67,    68,    69,   125,    70,   114,    71,   126,
      94,    95
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      72,    93,    81,   115,    72,   140,    78,   157,   158,    80,
      80,     1,    61,    20,   100,    75,     4,    96,    18,    72,
       4,    47,    72,    21,   112,   113,   119,   120,   121,   122,
     101,    31,    73,   103,   115,   170,    63,   116,    22,   127,
      97,    72,    72,    31,    23,   179,    32,    53,   133,   134,
     109,   135,    24,   117,   151,    27,   171,    72,    33,   136,
     110,   145,   146,   147,   148,    39,    40,    80,   130,    34,
     152,    35,    72,    72,   154,    55,    56,    36,    57,    58,
      59,   159,   121,   122,   142,   115,    37,   119,   120,   121,
     122,    60,    50,    40,    72,    72,    54,    61,    55,    56,
      74,    57,    58,    59,    76,   164,    21,    78,    82,   172,
      83,   174,   150,    80,    60,   177,    40,    62,    99,    84,
      61,    63,    72,    72,    85,    55,    56,    98,    57,    58,
      59,   102,    72,    55,    56,   106,    57,    58,    59,   107,
      62,    60,   118,   104,    63,   105,   108,    61,   111,    60,
     119,   120,   121,   122,    97,    61,    55,    56,   128,    57,
      58,    59,    86,   131,    78,   139,   132,    62,   129,   149,
     143,    63,    60,   124,   123,    62,   141,   144,    61,    63,
     153,    86,   160,    78,    87,    88,    89,    90,    91,   119,
     120,   121,   122,   119,   120,   121,   122,    92,    62,   162,
     161,   167,    63,    87,    88,    89,    90,    91,   119,   120,
     121,   122,   165,   168,   156,   169,    92,   155,     8,   173,
       9,    10,    11,    12,    13,     8,    14,     9,    10,    11,
      12,    13,   166,    14,   175,    19,    28,    15,     8,    26,
       9,    10,    11,    12,    13,   180,    14,   182,   183,    49,
      51,     8,    52,     9,    10,    11,    12,    13,     8,    14,
       9,    10,    11,    12,    13,   163,    14,   119,   120,   121,
     122,    77,   137,   119,   120,   121,   122,    48,   138,   119,
     120,   121,   122,     0,   176,   119,   120,   121,   122,     0,
     178,   119,   120,   121,   122,     0,   181,   119,   120,   121,
     122
};

static const yytype_int16 yycheck[] =
{
      43,    59,    53,    84,    47,   115,    19,   137,   138,    52,
      53,    20,    25,     9,    62,    47,     0,    27,     0,    62,
       4,    33,    65,    19,    82,    83,    23,    24,    25,    26,
      62,    24,    44,    65,   115,   165,    49,    85,    19,    97,
      50,    84,    85,    36,    27,   175,    45,    40,   106,   107,
      38,   109,    27,    85,    51,    28,   166,   100,    45,   110,
      48,   119,   120,   121,   122,    20,    21,   110,   100,    45,
     128,    28,   115,   116,   132,     3,     4,    47,     6,     7,
       8,   139,    25,    26,   116,   166,    19,    23,    24,    25,
      26,    19,    48,    21,   137,   138,    46,    25,     3,     4,
      46,     6,     7,     8,    46,   156,    19,    19,    27,   167,
      27,   169,    48,   156,    19,   173,    21,    45,    46,    27,
      25,    49,   165,   166,    45,     3,     4,    19,     6,     7,
       8,    19,   175,     3,     4,    38,     6,     7,     8,     8,
      45,    19,    19,    47,    49,    47,    47,    25,    47,    19,
      23,    24,    25,    26,    50,    25,     3,     4,    38,     6,
       7,     8,    17,    46,    19,    47,    38,    45,    46,    28,
      46,    49,    19,    28,    47,    45,    46,    52,    25,    49,
      46,    17,     3,    19,    39,    40,    41,    42,    43,    23,
      24,    25,    26,    23,    24,    25,    26,    52,    45,     3,
      46,    27,    49,    39,    40,    41,    42,    43,    23,    24,
      25,    26,     5,     3,    48,    27,    52,    47,    10,    27,
      12,    13,    14,    15,    16,    10,    18,    12,    13,    14,
      15,    16,    47,    18,    28,     4,    28,    22,    10,    22,
      12,    13,    14,    15,    16,    47,    18,    47,    47,    36,
      22,    10,    11,    12,    13,    14,    15,    16,    10,    18,
      12,    13,    14,    15,    16,   150,    18,    23,    24,    25,
      26,    50,    28,    23,    24,    25,    26,    34,    28,    23,
      24,    25,    26,    -1,    28,    23,    24,    25,    26,    -1,
      28,    23,    24,    25,    26,    -1,    28,    23,    24,    25,
      26
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    20,    54,    55,    56,    57,    58,    59,    10,    12,
      13,    14,    15,    16,    18,    22,    61,    65,     0,    55,
       9,    19,    19,    27,    27,    60,    60,    28,    28,    62,
      63,    65,    45,    45,    45,    28,    47,    19,    64,    20,
      21,    56,    67,    68,    69,    70,    66,    68,    67,    62,
      48,    22,    11,    65,    46,     3,     4,     6,     7,     8,
      19,    25,    45,    49,    72,    73,    74,    75,    76,    77,
      79,    81,    83,    68,    46,    72,    46,    64,    19,    71,
      83,    71,    27,    27,    27,    45,    17,    39,    40,    41,
      42,    43,    52,    82,    83,    84,    27,    50,    19,    46,
      70,    72,    19,    72,    47,    47,    38,     8,    47,    38,
      48,    47,    82,    82,    80,    81,    70,    72,    19,    23,
      24,    25,    26,    47,    28,    78,    82,    82,    38,    46,
      72,    46,    38,    82,    82,    82,    71,    28,    28,    47,
      80,    46,    72,    46,    52,    82,    82,    82,    82,    28,
      48,    51,    82,    46,    82,    47,    48,    73,    73,    82,
       3,    46,     3,    78,    71,     5,    47,    27,     3,    27,
      73,    80,    82,    27,    82,    28,    28,    82,    28,    73,
      47,    28,    47,    47
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    55,    55,    56,    56,    57,    58,
      59,    60,    60,    61,    62,    62,    63,    64,    64,    65,
      65,    65,    65,    65,    65,    65,    66,    66,    67,    67,
      68,    68,    69,    69,    70,    70,    71,    71,    71,    71,
      72,    72,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    74,    75,    75,    75,    76,    77,
      77,    78,    78,    79,    80,    80,    81,    81,    81,    82,
      82,    82,    82,    82,    83,    83,    84,    84,    84,    84,
      84,    84,    84,    84
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     7,     7,
       8,     3,     2,     1,     1,     3,     2,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     5,     1,     2,     1,
       2,     0,     1,     1,     4,     4,     3,     1,     5,     3,
       2,     1,     5,     7,     2,     4,     3,     3,     2,     1,
       1,     1,     2,     1,     5,     9,    10,     9,     9,     4,
       3,     1,     3,     3,     1,     2,     3,     4,     4,     3,
       3,     3,     3,     1,     1,     4,     1,     1,     1,     1,
       1,     1,     1,     3
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
#line 43 "project.y" /* yacc.c:1646  */
    {
		node * asttree=mknode("CODE","",(yyvsp[0].node).NULL);
		printTree(asttree);
    }
#line 1412 "project.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 50 "project.y" /* yacc.c:1646  */
    { mknode("","",(yyvsp[-1].node),(yyvsp[0].node));}
#line 1418 "project.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 51 "project.y" /* yacc.c:1646  */
    { mknode("","",(yyvsp[0].node),NULL);}
#line 1424 "project.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 52 "project.y" /* yacc.c:1646  */
    { mknode("","",(yyvsp[0].node),NULL);}
#line 1430 "project.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 56 "project.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1436 "project.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 57 "project.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1442 "project.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 61 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode_new((yyvsp[-6].string),(yyvsp[-4].string),(yyvsp[-3].node),(yyvsp[-5].string),(yyvsp[-1].node),NULL);}
#line 1448 "project.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 65 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode_new((yyvsp[-6].string),(yyvsp[-4].string),(yyvsp[-3].node),(yyvsp[-5].node),(yyvsp[-1].node),NULL);}
#line 1454 "project.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 69 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("MAIN","",(yyvsp[-1].node),NULL);}
#line 1460 "project.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 73 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("var","",(yyvsp[-1].node),NULL);}
#line 1466 "project.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 74 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("var ","NONE",NULL,NULL);}
#line 1472 "project.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 78 "project.y" /* yacc.c:1646  */
    { (yyval.node) = mknode("TYPE ",(yyvsp[0].string),NULL,NULL); }
#line 1478 "project.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 82 "project.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1484 "project.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 83 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("","",(yyvsp[-2].node),(yyvsp[0].node));}
#line 1490 "project.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 87 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode((yyvsp[-1].string),"",(yyvsp[0].node),NULL);}
#line 1496 "project.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 91 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("",(yyvsp[0].string),NULL,NULL);}
#line 1502 "project.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 92 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("","",mknode("",(yyvsp[-2].string),NULL,NULL),(yyvsp[0].node));}
#line 1508 "project.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 96 "project.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 1514 "project.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 97 "project.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 1520 "project.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 98 "project.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 1526 "project.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 99 "project.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 1532 "project.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 100 "project.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 1538 "project.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 101 "project.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 1544 "project.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 102 "project.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 1550 "project.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 106 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode_new("BODY","",(yyvsp[-4].node),(yyvsp[-3].node),mknode((yyvsp[-2].string),"",(yyvsp[-1].node),NULL),NULL);}
#line 1556 "project.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 107 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("BODY","",(yyvsp[0].node),NULL);}
#line 1562 "project.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 111 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("BODY","",(yyvsp[-1].node),(yyvsp[0].node));}
#line 1568 "project.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 112 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("BODY","",(yyvsp[0].node),NULL);}
#line 1574 "project.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 116 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("","",(yyvsp[-1].node),(yyvsp[0].node));}
#line 1580 "project.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 117 "project.y" /* yacc.c:1646  */
    {(yyval.node)=NULL;}
#line 1586 "project.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 120 "project.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1592 "project.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 121 "project.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1598 "project.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 125 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("DECLAR",(yyvsp[-2].string),(yyvsp[-1].node),NULL);}
#line 1604 "project.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 126 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("DECLAR",(yyvsp[-2].string),(yyvsp[-1].node),NULL);}
#line 1610 "project.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 130 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("ASSIGN","=",mknode("",(yyvsp[-2].node),NULL,NULL),(yyvsp[0].node));}
#line 1616 "project.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 131 "project.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1622 "project.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 132 "project.y" /* yacc.c:1646  */
    {(yyval.node)mknode("","",mknode("ASSIGN","=",mknode("",(yyvsp[-4].node),NULL,NULL),(yyvsp[-2].node)),(yyvsp[-2].node));}
#line 1628 "project.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 133 "project.y" /* yacc.c:1646  */
    {(yyval.node)mknode("","",(yyvsp[-2].node),(yyvsp[0].node));}
#line 1634 "project.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 137 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("","",(yyvsp[-1].node),(yyvsp[0].node));}
#line 1640 "project.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 138 "project.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1646 "project.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 142 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("IF","",(yyvsp[-2].node),(yyvsp[0].node));}
#line 1652 "project.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 143 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode_new("IF-ELSE","",(yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 1658 "project.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 144 "project.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-1].node);}
#line 1664 "project.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 145 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("BLOCK","",(yyvsp[-2].node),(yyvsp[-1].node));}
#line 1670 "project.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 146 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("BLOCK","",(yyvsp[-1].node),NULL);}
#line 1676 "project.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 147 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("BLOCK","",(yyvsp[-1].node),NULL);}
#line 1682 "project.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 148 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("BLOCK","",NULL,NULL);}
#line 1688 "project.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 149 "project.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1694 "project.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 150 "project.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1700 "project.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 151 "project.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1706 "project.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 152 "project.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-1].node);}
#line 1712 "project.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 153 "project.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1718 "project.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 157 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("WHILE","",(yyvsp[-2].node),(yyvsp[0].node));}
#line 1724 "project.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 161 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("DO-WHILE","",mknode("BLOCK","",(yyvsp[-6].node),NULL),(yyvsp[-2].node));}
#line 1730 "project.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 162 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("DO-WHILE","",mknode("BLOCK","",(yyvsp[-7].node),(yyvsp[-6].node)),(yyvsp[-2].node));}
#line 1736 "project.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 163 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("DO-WHILE","",mknode("BLOCK","",(yyvsp[-6].node),NULL),(yyvsp[-2].node));}
#line 1742 "project.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 167 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode_new("FOR","",(yyvsp[-6].node),(yyvsp[-4].node),(yyvsp[0].node),(yyvsp[-2].node));}
#line 1748 "project.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 171 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("FUNCTION-CALL",(yyvsp[-3].string),mknode("var-CALL","",(yyvsp[-1].node),NULL),NULL);}
#line 1754 "project.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 172 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("FUNCTION-CALL",(yyvsp[-2].string),mknode("var-CALL","NONE",NULL,NULL),NULL);}
#line 1760 "project.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 177 "project.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1766 "project.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 178 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("","",(yyvsp[-2].node),(yyvsp[0].node));}
#line 1772 "project.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 182 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode((yyvsp[-2].string),"",(yyvsp[-1].node),NULL);}
#line 1778 "project.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 186 "project.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1784 "project.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 187 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("","",(yyvsp[-1].node),(yyvsp[0].node));}
#line 1790 "project.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 191 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("ASSIGN","=",mknode("",(yyvsp[-2].node),NULL,NULL),(yyvsp[0].node));}
#line 1796 "project.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 192 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("ASSIGN","=",mknode("POINTER-EXPR",'&',(yyvsp[-2].string),NULL),(yyvsp[-1].string));}
#line 1802 "project.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 193 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("ASSIGN","=",mknode("POINTER-EXPR",(yyvsp[-3].string),(yyvsp[-2].string),NULL),(yyvsp[-1].string));}
#line 1808 "project.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 197 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("EXPR",(yyvsp[-1].string),(yyvsp[-2].node),(yyvsp[0].node));}
#line 1814 "project.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 198 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("EXPR",(yyvsp[-1].string),(yyvsp[-2].node),(yyvsp[0].node));}
#line 1820 "project.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 199 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("EXPR",(yyvsp[-1].string),(yyvsp[-2].node),(yyvsp[0].node));}
#line 1826 "project.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 200 "project.y" /* yacc.c:1646  */
    {(yyval.node)=mknode("EXPR",(yyvsp[-1].string),(yyvsp[-2].node),(yyvsp[0].node));}
#line 1832 "project.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 201 "project.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1838 "project.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 205 "project.y" /* yacc.c:1646  */
    { (yyval.node) = mknode("",(yyvsp[0].string),NULL,NULL); }
#line 1844 "project.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 206 "project.y" /* yacc.c:1646  */
    {(yyval.node) = mknode("STR","",mknode("",(yyvsp[-3].string),NULL,NULL),(yyvsp[-1].node));}
#line 1850 "project.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 210 "project.y" /* yacc.c:1646  */
    { (yyval.node) = mknode("",(yyvsp[0].string),NULL,NULL); }
#line 1856 "project.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 211 "project.y" /* yacc.c:1646  */
    { (yyval.node) = mknode("",(yyvsp[0].string),NULL,NULL); }
#line 1862 "project.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 212 "project.y" /* yacc.c:1646  */
    { (yyval.node) = mknode("",(yyvsp[0].string),NULL,NULL); }
#line 1868 "project.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 213 "project.y" /* yacc.c:1646  */
    { (yyval.node) = mknode("",(yyvsp[0].string),NULL,NULL); }
#line 1874 "project.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 214 "project.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1880 "project.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 215 "project.y" /* yacc.c:1646  */
    { (yyval.node) = mknode("",(yyvsp[0].string),NULL,NULL); }
#line 1886 "project.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 216 "project.y" /* yacc.c:1646  */
    { (yyval.node) = mknode("",(yyvsp[0].string),NULL,NULL); }
#line 1892 "project.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 217 "project.y" /* yacc.c:1646  */
    { (yyval.node) =mknode("LEN",(yyvsp[-1].string),NULL,NULL);}
#line 1898 "project.tab.c" /* yacc.c:1646  */
    break;


#line 1902 "project.tab.c" /* yacc.c:1646  */
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
#line 220 "project.y" /* yacc.c:1906  */


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
	return newnode;
}

void printTree(node* root){	
	/*any nodeType node that has a value \n tab */	
	if(strcmp(root->nodeType,"")!=0){
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
	&&strcmp(root->nodeType,"DECLAR")!=0&&strcmp(root->nodeType,"POINTER")!=0)			
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
	
	if(strcmp(root->nodeType,"")!=0&&strcmp(root->nodeType,"POINTER")!=0){
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
