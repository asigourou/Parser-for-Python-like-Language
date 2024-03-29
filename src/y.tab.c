/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "bison.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*#include "lex.yy.c"*/

#include "symtab.h"

void yyerror(char *); 



extern FILE *yyin;								
extern FILE *yyout;

extern int yylex();

extern int mylineno;

int counter=1;
int cv=1;


Param* cool;
						

#line 99 "y.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
    BLOCK = 258,
    DEF = 259,
    IF = 260,
    ELIF = 261,
    ELSE = 262,
    PRINT = 263,
    FOR = 264,
    IN = 265,
    CLASS = 266,
    INIT = 267,
    Q = 268,
    ITEMS = 269,
    SETDEFAULT = 270,
    NONE = 271,
    LAMBDA = 272,
    FROM = 273,
    AS = 274,
    INT = 275,
    FLOAT = 276,
    STRINGA = 277,
    STRINGB = 278,
    VAR = 279,
    SELF = 280,
    FILEVAR = 281,
    IMPORT = 282,
    EQ = 283,
    NOTEQ = 284,
    LESS = 285,
    GREATER = 286,
    LESSEQ = 287,
    GREATEREQ = 288
  };
#endif
/* Tokens.  */
#define BLOCK 258
#define DEF 259
#define IF 260
#define ELIF 261
#define ELSE 262
#define PRINT 263
#define FOR 264
#define IN 265
#define CLASS 266
#define INIT 267
#define Q 268
#define ITEMS 269
#define SETDEFAULT 270
#define NONE 271
#define LAMBDA 272
#define FROM 273
#define AS 274
#define INT 275
#define FLOAT 276
#define STRINGA 277
#define STRINGB 278
#define VAR 279
#define SELF 280
#define FILEVAR 281
#define IMPORT 282
#define EQ 283
#define NOTEQ 284
#define LESS 285
#define GREATER 286
#define LESSEQ 287
#define GREATEREQ 288

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 33 "bison.y"

	
	int ival;
	float fval;
	char* sval;
	struct list_t* symtab_item;
	struct Param* parameter;



#line 228 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#define YYFINAL  58
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   465

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  160
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  354

#define YYUNDEFTOK  2
#define YYMAXUTOK   288


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      28,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      30,    31,    47,    45,    37,    46,    32,    48,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    29,     2,
       2,    38,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    35,     2,    36,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    33,     2,    34,     2,     2,     2,     2,
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
      25,    26,    27,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   102,   102,   103,   104,   109,   110,   111,   112,   113,
     121,   122,   123,   124,   125,   126,   127,   128,   132,   145,
     152,   162,   178,   181,   184,   189,   190,   193,   194,   195,
     200,   206,   207,   208,   209,   210,   211,   214,   215,   219,
     222,   227,   232,   233,   234,   235,   244,   248,   251,   254,
     255,   258,   259,   263,   272,   276,   277,   278,   282,   283,
     288,   289,   290,   291,   294,   295,   296,   297,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   318,   319,   320,
     321,   322,   326,   327,   328,   329,   331,   332,   333,   334,
     339,   340,   343,   344,   348,   348,   348,   348,   351,   352,
     355,   356,   357,   364,   372,   381,   385,   390,   397,   400,
     401,   404,   404,   404,   410,   414,   414,   415,   416,   416,
     416,   419,   420,   421,   422,   423,   431,   435,   446,   449,
     452,   455,   458,   464,   470,   476,   505,   506,   507,   508,
     509,   514,   515,   516,   517,   518,   520,   521,   522,   523,
     524,   533,   534,   535,   536,   539,   540,   541,   542,   543,
     545
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BLOCK", "DEF", "IF", "ELIF", "ELSE",
  "PRINT", "FOR", "IN", "CLASS", "INIT", "Q", "ITEMS", "SETDEFAULT",
  "NONE", "LAMBDA", "FROM", "AS", "INT", "FLOAT", "STRINGA", "STRINGB",
  "VAR", "SELF", "FILEVAR", "IMPORT", "'\\n'", "':'", "'('", "')'", "'.'",
  "'{'", "'}'", "'['", "']'", "','", "'='", "EQ", "NOTEQ", "LESS",
  "GREATER", "LESSEQ", "GREATEREQ", "'+'", "'-'", "'*'", "'/'", "$accept",
  "program", "summerBodies", "expr_import", "returns", "call", "class_def",
  "class_head", "class_name", "clbody", "method_def", "method_body",
  "member", "method_head", "method_name", "class_param", "func_def",
  "func_head", "func_name", "param", "args", "for_stmt", "if_stmt",
  "else_if", "optional_else", "body", "stmt", "line", "lc_expression",
  "lc_practical", "lc_ID", "lc_expr", "praxi", "lc_args", "lc_exp_parts",
  "dictionary", "obs", "func_items", "func_setdefault", "dvar",
  "bool_expr", "bools", "print", "assign", "expr", "expr_f", "expr_i", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,    10,    58,
      40,    41,    46,   123,   125,    91,    93,    44,    61,   283,
     284,   285,   286,   287,   288,    43,    45,    42,    47
};
# endif

#define YYPACT_NINF (-209)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-3)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     102,    47,     0,   354,    84,   101,   104,   107,   126,   115,
      50,  -209,   140,   206,   102,   191,   202,  -209,  -209,    45,
    -209,   113,  -209,  -209,   102,   207,  -209,   209,   241,   247,
     251,   269,  -209,  -209,   151,  -209,  -209,  -209,  -209,  -209,
     277,   329,   278,   310,   143,   297,  -209,   288,   122,   299,
     302,   311,    13,   322,    44,   142,  -209,   324,  -209,  -209,
    -209,  -209,   100,  -209,    45,    31,  -209,   113,  -209,  -209,
    -209,  -209,  -209,  -209,  -209,   311,   113,  -209,  -209,  -209,
    -209,  -209,  -209,   354,   168,   168,    -4,   168,   168,   168,
       5,   168,   303,   332,   370,   371,   239,   245,   379,   325,
     380,   381,    88,    -1,   369,   376,  -209,   378,   382,   383,
    -209,   372,  -209,  -209,   383,     7,  -209,   278,   310,   153,
     385,   133,   386,   103,   180,  -209,   114,  -209,    45,  -209,
    -209,   113,  -209,  -209,  -209,   113,   387,    26,  -209,   181,
     196,   181,   196,   391,  -209,  -209,  -209,  -209,   181,   196,
     181,   196,   391,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,   388,  -209,   344,   377,  -209,  -209,   389,
     390,   348,   278,   310,   392,  -209,  -209,   311,  -209,   393,
     187,   168,   394,   398,   395,  -209,  -209,  -209,   401,    88,
    -209,  -209,   396,   359,    16,  -209,   114,   399,   354,   271,
    -209,  -209,   113,   391,   391,   391,   391,   275,   275,  -209,
    -209,  -209,  -209,   275,  -209,  -209,  -209,  -209,  -209,  -209,
     397,    24,   201,   187,   402,   403,   352,   405,   406,   227,
    -209,   130,  -209,  -209,   114,   120,   114,   404,   408,   354,
     409,  -209,   391,   391,     2,   391,    35,   138,   146,   167,
     175,   410,   407,   411,  -209,   331,   168,   168,   412,   413,
    -209,   391,   391,   391,   391,   275,   275,   414,   415,  -209,
     416,   417,   120,  -209,  -209,   113,   421,   113,   253,   253,
    -209,  -209,  -209,   391,   391,   391,   391,  -209,   275,  -209,
     422,   423,   278,   310,   278,   310,   152,   424,   179,   186,
     220,   226,   425,   426,   311,   429,   419,  -209,   113,   113,
     113,   257,   263,   267,   285,  -209,  -209,  -209,   398,  -209,
    -209,   391,   391,   391,   391,   428,   430,  -209,   427,   384,
     113,  -209,  -209,  -209,  -209,  -209,   291,   296,   314,   319,
    -209,  -209,  -209,   364,   431,   432,   433,   434,  -209,  -209,
    -209,  -209,  -209,  -209
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    68,     0,     0,     0,     0,     0,    19,     8,     0,
       7,     0,     6,     5,     0,     0,    81,     0,     0,     0,
       0,     0,    76,    48,     0,   155,   141,   138,   139,   140,
       0,     0,   137,   136,     0,     0,    24,     0,     0,     0,
       0,    49,     0,     0,     0,    12,    10,     0,     1,     4,
       9,    71,    28,    29,    22,     0,    63,    46,     3,    75,
      72,    73,    74,    70,    69,    49,     0,   115,   116,   117,
     118,   119,   120,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    51,     0,    50,     0,     0,     0,
      20,     0,   130,   131,   127,     0,    18,   128,   129,     0,
       0,     0,     0,     0,     0,    26,     0,    25,    27,    66,
      67,    61,    60,    65,    64,    62,     0,    55,   114,   142,
     146,   144,   148,     0,   143,   147,   145,   149,   151,   156,
     153,   158,     0,   152,   157,   154,   159,   126,   121,   122,
     125,   124,   123,     0,    23,     0,    90,    91,   102,     0,
       0,    92,   101,   100,     0,    14,    16,     0,    21,     0,
       0,     0,     0,     0,     0,    17,    11,    13,     0,     0,
      41,    40,     0,     0,     0,    36,    30,     0,     0,    58,
     150,   160,     0,     0,     0,     0,     0,     0,     0,    94,
      96,    95,    97,     0,    15,    52,   108,   112,   113,   111,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    42,
     127,     0,    36,    34,    35,     0,    33,     0,     0,     0,
       0,    54,     0,     0,     0,     0,    58,     0,     0,     0,
       0,     0,    98,     0,    93,     0,     0,     0,   105,     0,
     104,     0,     0,     0,     0,     0,     0,    43,     0,    45,
       0,     0,     0,    31,    47,     0,     0,     0,   156,   158,
     157,   159,    53,     0,     0,     0,     0,    79,     0,    80,
       0,     0,   133,   135,   134,   132,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    32,    56,     0,
      59,     0,     0,     0,     0,    99,   110,   109,     0,   107,
     103,     0,     0,     0,     0,     0,     0,    44,     0,     0,
      57,    82,    83,    84,    85,   106,     0,     0,     0,     0,
      77,    78,    39,     0,     0,     0,     0,     0,    38,    37,
      86,    87,    88,    89
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -209,   132,  -209,  -209,  -209,   144,  -209,  -209,  -209,   420,
     365,   -95,  -209,  -209,  -209,  -209,  -209,  -209,  -209,   358,
    -167,   -62,   -59,  -209,   194,   -20,  -209,  -209,   -89,  -209,
     -43,  -156,  -209,  -187,   -91,  -209,  -175,  -209,  -209,  -208,
    -186,  -209,   -58,   -60,   -79,     6,    -3
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    15,    16,    17,    18,    19,    47,   128,
     233,   236,   271,   126,   192,   268,    20,    21,    34,   105,
     106,    22,    23,   199,   241,   135,   132,    24,    25,    26,
      49,   170,   213,   251,   252,    27,   184,    28,    29,   220,
      40,    83,    30,    31,    41,   172,   173
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      43,    67,   127,   129,   138,   134,   130,   133,   224,    42,
     215,   171,   238,   169,   122,   258,    35,    36,   174,   231,
     123,   253,    35,   175,    33,    35,    36,   107,   108,    65,
     182,   196,   198,   228,    65,   183,     3,   109,    65,     4,
       5,    97,   240,   143,   232,   131,   176,   291,    62,   152,
      96,   118,   152,   276,    66,   124,   137,   254,   167,    66,
     117,   256,   269,    66,    35,    36,   112,   113,   114,    84,
      85,    86,    87,    63,    55,    32,    56,   115,   302,   303,
      43,   140,   142,   145,   147,   149,   151,   154,   156,    42,
     139,   141,   144,   146,   148,   150,   153,   155,   171,   234,
     227,   315,    -2,     1,   123,     7,     2,     3,    35,    36,
       4,     5,   168,     6,    44,   190,    65,   194,    12,     7,
       8,   319,   171,    65,   124,    45,     9,   191,    46,    10,
      11,    48,    12,   231,   123,     3,   234,   327,     4,     5,
     200,    66,   195,   335,    92,    51,    59,    52,   273,   201,
      50,   100,    53,    54,   124,   270,    68,    57,   232,   101,
     119,   120,   188,    35,    36,    93,    94,    95,   283,   129,
     101,   134,   130,   133,   235,   182,   284,   185,   222,   186,
     318,    75,   246,   242,   243,   244,   245,   221,    35,    36,
     118,   242,   243,   244,   245,    43,   110,   285,   116,   117,
     247,   248,   249,   250,    42,   286,    58,   217,   218,   321,
     219,   272,   242,   243,   244,   245,   322,    53,   193,    60,
     242,   243,   244,   245,   242,   243,   244,   245,    86,    87,
      61,   242,   243,   244,   245,    69,    43,    70,   257,   278,
     279,   280,   281,    90,    91,    42,    88,    89,    90,    91,
     323,   104,   267,   293,   295,   308,   324,   310,   298,   299,
     300,   301,   292,   294,   349,   242,   243,   244,   245,    71,
     161,   242,   243,   244,   245,    72,   162,   239,   240,    73,
     311,   312,   313,   314,    84,    85,    86,    87,   331,   330,
      88,    89,    90,    91,   332,    35,    36,    74,   333,   168,
     244,   245,   242,   243,   244,   245,    76,    98,   242,   243,
     244,   245,   242,   243,   244,   245,   334,    99,   336,   337,
     338,   339,   344,    84,    85,    86,    87,   345,   102,   103,
     242,   243,   244,   245,   157,   104,   242,   243,   244,   245,
      43,   242,   243,   244,   245,   346,   111,   290,   121,    42,
     347,   217,   218,   164,   219,    88,    89,    90,    91,   242,
     243,   244,   245,   158,   242,   243,   244,   245,    77,    78,
      79,    80,    81,    82,    35,    36,    37,    38,    39,    35,
      36,   112,   113,   230,    35,    36,    37,    38,   348,   203,
     204,   205,   206,   209,   210,   211,   212,   261,   262,   263,
     264,   159,   160,   163,   165,   166,   177,   178,   179,   187,
     181,    35,   180,    51,   101,   189,   214,   202,   197,   207,
     208,   182,   343,   223,   216,   226,   229,   125,   237,   225,
     259,   260,   274,   136,   255,   265,   266,   275,   277,    64,
     282,   287,   289,   329,   288,   307,   305,   297,   306,   296,
     309,   304,   320,   316,   317,   342,   325,   326,   328,   340,
       0,   341,   350,   351,   352,   353
};

static const yytype_int16 yycheck[] =
{
       3,    21,    62,    65,    83,    65,    65,    65,   183,     3,
     177,   102,   198,   102,    57,   223,    20,    21,    19,     3,
       4,   208,    20,    24,    24,    20,    21,    14,    15,     3,
      23,   126,     6,   189,     3,    28,     5,    24,     3,     8,
       9,    44,     7,    47,    28,    65,    47,   255,     3,    47,
      44,    54,    47,   239,    28,    24,    76,   213,   101,    28,
      54,    37,   229,    28,    20,    21,    22,    23,    24,    45,
      46,    47,    48,    28,    24,    28,    26,    33,   265,   266,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    83,
      84,    85,    86,    87,    88,    89,    90,    91,   189,   194,
     189,   288,     0,     1,     4,    17,     4,     5,    20,    21,
       8,     9,    24,    11,    30,    12,     3,     3,    30,    17,
      18,   296,   213,     3,    24,    24,    24,    24,    24,    27,
      28,    24,    30,     3,     4,     5,   231,   304,     8,     9,
     143,    28,    28,   318,     1,    30,    14,    32,    28,   152,
      24,    29,    37,    38,    24,    25,    24,    17,    28,    37,
      18,    19,    29,    20,    21,    22,    23,    24,    30,   231,
      37,   231,   231,   231,   194,    23,    30,    24,   181,    26,
      28,    30,   202,    45,    46,    47,    48,   181,    20,    21,
     193,    45,    46,    47,    48,   198,    52,    30,    54,   193,
     203,   204,   205,   206,   198,    30,     0,    20,    21,    30,
      23,   231,    45,    46,    47,    48,    30,    37,    38,    28,
      45,    46,    47,    48,    45,    46,    47,    48,    47,    48,
      28,    45,    46,    47,    48,    28,   239,    28,    37,   242,
     243,   244,   245,    47,    48,   239,    45,    46,    47,    48,
      30,    24,    25,   256,   257,   275,    30,   277,   261,   262,
     263,   264,   256,   257,   343,    45,    46,    47,    48,    28,
      31,    45,    46,    47,    48,    28,    31,     6,     7,    28,
     283,   284,   285,   286,    45,    46,    47,    48,    31,   309,
      45,    46,    47,    48,    31,    20,    21,    28,    31,    24,
      47,    48,    45,    46,    47,    48,    29,    10,    45,    46,
      47,    48,    45,    46,    47,    48,    31,    29,   321,   322,
     323,   324,    31,    45,    46,    47,    48,    31,    29,    27,
      45,    46,    47,    48,    31,    24,    45,    46,    47,    48,
     343,    45,    46,    47,    48,    31,    24,    16,    24,   343,
      31,    20,    21,    28,    23,    45,    46,    47,    48,    45,
      46,    47,    48,    31,    45,    46,    47,    48,    39,    40,
      41,    42,    43,    44,    20,    21,    22,    23,    24,    20,
      21,    22,    23,    24,    20,    21,    22,    23,    24,    45,
      46,    47,    48,    45,    46,    47,    48,    45,    46,    47,
      48,    31,    31,    24,    24,    24,    37,    31,    30,    24,
      38,    20,    30,    30,    37,    29,    24,    29,    31,    30,
      30,    23,    38,    29,    31,    24,    30,    62,    29,    34,
      28,    28,    28,    75,    37,    30,    30,    29,    29,    19,
     246,    31,    31,    24,    37,    28,    31,    34,    32,    37,
      29,    37,    28,    31,    31,    28,    31,    31,    29,    31,
      -1,    31,    31,    31,    31,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     4,     5,     8,     9,    11,    17,    18,    24,
      27,    28,    30,    50,    51,    52,    53,    54,    55,    56,
      65,    66,    70,    71,    76,    77,    78,    84,    86,    87,
      91,    92,    28,    24,    67,    20,    21,    22,    23,    24,
      89,    93,    94,    95,    30,    24,    24,    57,    24,    79,
      24,    30,    32,    37,    38,    24,    26,    17,     0,    50,
      28,    28,     3,    28,    58,     3,    28,    74,    50,    28,
      28,    28,    28,    28,    28,    30,    29,    39,    40,    41,
      42,    43,    44,    90,    45,    46,    47,    48,    45,    46,
      47,    48,     1,    22,    23,    24,    94,    95,    10,    29,
      29,    37,    29,    27,    24,    68,    69,    14,    15,    24,
      54,    24,    22,    23,    24,    33,    54,    94,    95,    18,
      19,    24,    79,     4,    24,    59,    62,    92,    58,    70,
      71,    74,    75,    91,    92,    74,    68,    74,    93,    94,
      95,    94,    95,    47,    94,    95,    94,    95,    94,    95,
      94,    95,    47,    94,    95,    94,    95,    31,    31,    31,
      31,    31,    31,    24,    28,    24,    24,    79,    24,    77,
      80,    83,    94,    95,    19,    24,    47,    37,    31,    30,
      30,    38,    23,    28,    85,    24,    26,    24,    29,    29,
      12,    24,    63,    38,     3,    28,    60,    31,     6,    72,
      95,    95,    29,    45,    46,    47,    48,    30,    30,    45,
      46,    47,    48,    81,    24,    69,    31,    20,    21,    23,
      88,    94,    95,    29,    85,    34,    24,    77,    80,    30,
      24,     3,    28,    59,    60,    74,    60,    29,    89,     6,
       7,    73,    45,    46,    47,    48,    74,    95,    95,    95,
      95,    82,    83,    82,    80,    37,    37,    37,    88,    28,
      28,    45,    46,    47,    48,    30,    30,    25,    64,    69,
      25,    61,    74,    28,    28,    29,    89,    29,    95,    95,
      95,    95,    73,    30,    30,    30,    30,    31,    37,    31,
      16,    88,    94,    95,    94,    95,    37,    34,    95,    95,
      95,    95,    82,    82,    37,    31,    32,    28,    74,    29,
      74,    95,    95,    95,    95,    82,    31,    31,    28,    85,
      28,    30,    30,    30,    30,    31,    31,    69,    29,    24,
      74,    31,    31,    31,    31,    85,    95,    95,    95,    95,
      31,    31,    28,    38,    31,    31,    31,    31,    24,    93,
      31,    31,    31,    31
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    50,    50,    51,    51,    51,    51,    51,
      52,    52,    52,    52,    52,    52,    52,    52,    53,    53,
      53,    54,    55,    56,    57,    58,    58,    58,    58,    58,
      59,    60,    60,    60,    60,    60,    60,    61,    61,    62,
      63,    63,    64,    64,    64,    64,    65,    66,    67,    68,
      68,    69,    69,    70,    71,    72,    72,    72,    73,    73,
      74,    74,    74,    74,    75,    75,    75,    75,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    77,    77,    77,
      77,    77,    78,    78,    78,    78,    78,    78,    78,    78,
      79,    79,    80,    80,    81,    81,    81,    81,    82,    82,
      83,    83,    83,    84,    84,    85,    85,    85,    86,    87,
      87,    88,    88,    88,    89,    90,    90,    90,    90,    90,
      90,    91,    91,    91,    91,    91,    91,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    93,    93,    93,    93,
      93,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    95,    95,    95,    95,    95,
      95
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     1,     1,     1,     1,     2,
       2,     4,     2,     4,     4,     5,     4,     4,     3,     1,
       3,     4,     2,     4,     1,     2,     2,     2,     1,     1,
       2,     3,     4,     2,     2,     2,     1,     5,     5,     7,
       1,     1,     0,     1,     3,     1,     2,     7,     1,     0,
       1,     1,     3,     7,     6,     0,     4,     5,     0,     3,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     9,     9,     7,
       7,     1,     9,     9,     9,     9,    11,    11,    11,    11,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     8,     6,     3,     6,     5,     5,     8,
       8,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     4,     4,     4,     4,     4,     4,     3,     3,     3,
       3,     3,     7,     7,     7,     7,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       4,     3,     3,     3,     3,     1,     3,     3,     3,     3,
       4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
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
  case 5:
#line 109 "bison.y"
                                                { printf("If diagnosed\n"); }
#line 1662 "y.tab.c"
    break;

  case 6:
#line 110 "bison.y"
                                                { printf("For diagnosed\n"); }
#line 1668 "y.tab.c"
    break;

  case 7:
#line 111 "bison.y"
                                                { printf("Function Definition ENDED at line :%d\n\n\n",mylineno-1); }
#line 1674 "y.tab.c"
    break;

  case 8:
#line 112 "bison.y"
                                                { printf("Class Definition ENDED at line :%d\n\n\n",mylineno-1); }
#line 1680 "y.tab.c"
    break;

  case 10:
#line 121 "bison.y"
                            {	printf("Import Python File: %s \n",(yyvsp[0].sval));	}
#line 1686 "y.tab.c"
    break;

  case 11:
#line 122 "bison.y"
                                  {	printf("Import Python File: %s  from : %s\n",(yyvsp[-2].symtab_item)->st_name,(yyvsp[0].sval)); }
#line 1692 "y.tab.c"
    break;

  case 12:
#line 123 "bison.y"
                                {	printf("Import OK \n");	}
#line 1698 "y.tab.c"
    break;

  case 13:
#line 124 "bison.y"
                                        {	printf("Import OK \n");	}
#line 1704 "y.tab.c"
    break;

  case 14:
#line 125 "bison.y"
                                {	printf("Import OK \n");	}
#line 1710 "y.tab.c"
    break;

  case 15:
#line 126 "bison.y"
                                        {	printf("Import OK \n");	}
#line 1716 "y.tab.c"
    break;

  case 16:
#line 127 "bison.y"
                                {	printf("Import OK \n");	}
#line 1722 "y.tab.c"
    break;

  case 17:
#line 128 "bison.y"
                                {	printf("Import OK \n");	}
#line 1728 "y.tab.c"
    break;

  case 18:
#line 132 "bison.y"
                                        { 
					if((yyvsp[0].symtab_item)->st_type=="Function")
						{
						printf("%s's Function Call at line:%d\t",(yyvsp[0].symtab_item)->st_name,mylineno);
						printf("(Function Value is stored to %s)\n\n",(yyvsp[-2].symtab_item)->st_name);
						}
					else if((yyvsp[0].symtab_item)->st_type=="Class")
						{
						printf("%s is %s Object\n",(yyvsp[-2].symtab_item)->st_name,(yyvsp[0].symtab_item)->st_name);					
						(yyvsp[-2].symtab_item)->st_type=(yyvsp[0].symtab_item)->st_name;
						}
					}
#line 1745 "y.tab.c"
    break;

  case 19:
#line 145 "bison.y"
                                        {
					if(strcmp(lookup((yyvsp[0].symtab_item)->st_name)->st_type,"Function")==0)
						// if(st_return=="")
						printf("%s's Function Call at line:%d\t(VOID)\n\n",(yyvsp[0].symtab_item)->st_name,mylineno);
					
					}
#line 1756 "y.tab.c"
    break;

  case 20:
#line 152 "bison.y"
                                        {
					if((yyvsp[0].symtab_item)->st_type=="Method")
						{
						printf("%s's Method Call at line:%d\t",(yyvsp[0].symtab_item)->st_name,mylineno);
						printf("(called by Object %s)\n\n",(yyvsp[-2].symtab_item)->st_name);
						}
					}
#line 1768 "y.tab.c"
    break;

  case 21:
#line 162 "bison.y"
                                        { 
					if(lookup((yyvsp[-3].symtab_item)->st_name)->st_type=="Function"||lookup((yyvsp[-3].symtab_item)->st_name)->st_type=="Class"||lookup((yyvsp[-3].symtab_item)->st_name)->st_type=="Method")
					
						(yyval.symtab_item)=(yyvsp[-3].symtab_item);
					
					else
						printf("\t\tNOT a Class or a Function member\n\n\n");
					}
#line 1781 "y.tab.c"
    break;

  case 23:
#line 181 "bison.y"
                                        {printf("%s's Class Definition STARTED at line :%d\n",(yyvsp[-2].symtab_item)->st_name,mylineno); }
#line 1787 "y.tab.c"
    break;

  case 24:
#line 184 "bison.y"
                                        {/*printf("Function's Name: %s\n",$1->st_name); */	
					(yyvsp[0].symtab_item)->st_type="Class"; 
					}
#line 1795 "y.tab.c"
    break;

  case 26:
#line 190 "bison.y"
                                        {
					printf("Method Definition ENDED at line :%d\n",mylineno-1);
					 }
#line 1803 "y.tab.c"
    break;

  case 34:
#line 209 "bison.y"
                                {printf("Method Definition ENDED at line %d",mylineno); }
#line 1809 "y.tab.c"
    break;

  case 37:
#line 214 "bison.y"
                                        {	printf("Object's member\n");	}
#line 1815 "y.tab.c"
    break;

  case 38:
#line 215 "bison.y"
                                        {	printf("Object's member\n");	}
#line 1821 "y.tab.c"
    break;

  case 39:
#line 219 "bison.y"
                                                                { }
#line 1827 "y.tab.c"
    break;

  case 40:
#line 222 "bison.y"
                                                { 
						printf("%s's Method Definition STARTED at line :%d\n",(yyvsp[0].symtab_item)->st_name,mylineno); 
						/*printf("Function's Name: %s\n",$1->st_name); */	
						(yyvsp[0].symtab_item)->st_type="Method"; 
						}
#line 1837 "y.tab.c"
    break;

  case 41:
#line 227 "bison.y"
                                        {
					printf("Constructor Definition STARTED at line :%d\n",mylineno);
					 }
#line 1845 "y.tab.c"
    break;

  case 47:
#line 248 "bison.y"
                                                        {printf("%s's Function Definition STARTED at line :%d\n",(yyvsp[-5].symtab_item)->st_name,mylineno); }
#line 1851 "y.tab.c"
    break;

  case 48:
#line 251 "bison.y"
                                        {/*printf("Function's Name: %s\n",$1->st_name); */	(yyvsp[0].symtab_item)->st_type="Function"; }
#line 1857 "y.tab.c"
    break;

  case 53:
#line 263 "bison.y"
                                                  { printf("%s Control Type \t",(yyvsp[-3].symtab_item)->st_type);
							 printf("Can be executed properly");
								printf("\tFOR\n");
	}
#line 1866 "y.tab.c"
    break;

  case 56:
#line 277 "bison.y"
                                        { printf("\tELSE IF\n");}
#line 1872 "y.tab.c"
    break;

  case 57:
#line 278 "bison.y"
                                         { printf("\tELSE IF\n");}
#line 1878 "y.tab.c"
    break;

  case 59:
#line 283 "bison.y"
                                                { printf("\tELSE\n");}
#line 1884 "y.tab.c"
    break;

  case 77:
#line 318 "bison.y"
                                                                     { 		}
#line 1890 "y.tab.c"
    break;

  case 78:
#line 319 "bison.y"
                                                                        { printf("%s at line:%d\n",(yyvsp[-6].symtab_item)->st_type,mylineno);	}
#line 1896 "y.tab.c"
    break;

  case 79:
#line 320 "bison.y"
                                                                { 		}
#line 1902 "y.tab.c"
    break;

  case 80:
#line 321 "bison.y"
                                                                        { printf("%s at line:%d\n",(yyvsp[-5].symtab_item)->st_type,mylineno);	}
#line 1908 "y.tab.c"
    break;

  case 81:
#line 322 "bison.y"
                                                                        { 	}
#line 1914 "y.tab.c"
    break;

  case 82:
#line 326 "bison.y"
                                                                        { (yyvsp[-7].symtab_item)->st_ival=(yyvsp[-1].ival);	printf("LAMBDA at line:%d\t%s\t%d:\t",mylineno,(yyvsp[-7].symtab_item)->st_name,(yyvsp[-7].symtab_item)->st_ival); printf("%d\n",(yyvsp[-5].symtab_item)->st_ival+(yyvsp[-3].ival));	}
#line 1920 "y.tab.c"
    break;

  case 83:
#line 327 "bison.y"
                                                                        { (yyvsp[-7].symtab_item)->st_ival=(yyvsp[-1].ival);	printf("LAMBDA at line:%d\t%s\t%d:\t",mylineno,(yyvsp[-7].symtab_item)->st_name,(yyvsp[-7].symtab_item)->st_ival); printf("%d\n",(yyvsp[-5].symtab_item)->st_ival-(yyvsp[-3].ival));	}
#line 1926 "y.tab.c"
    break;

  case 84:
#line 328 "bison.y"
                                                                        { (yyvsp[-7].symtab_item)->st_ival=(yyvsp[-1].ival);	printf("LAMBDA at line:%d\t%s\t%d:\t",mylineno,(yyvsp[-7].symtab_item)->st_name,(yyvsp[-7].symtab_item)->st_ival); printf("%d\n",(yyvsp[-5].symtab_item)->st_ival*(yyvsp[-3].ival));	}
#line 1932 "y.tab.c"
    break;

  case 85:
#line 329 "bison.y"
                                                                        { (yyvsp[-7].symtab_item)->st_ival=(yyvsp[-1].ival);	printf("LAMBDA at line:%d\t%s\t%d:\t",mylineno,(yyvsp[-7].symtab_item)->st_name,(yyvsp[-7].symtab_item)->st_ival); printf("%d\n",(yyvsp[-5].symtab_item)->st_ival/(yyvsp[-3].ival));	}
#line 1938 "y.tab.c"
    break;

  case 86:
#line 331 "bison.y"
                                                                                { (yyvsp[-8].symtab_item)->st_ival=(yyvsp[-2].ival);	printf("LAMBDA at line:%d\t%s\t%d:\t",mylineno,(yyvsp[-8].symtab_item)->st_name,(yyvsp[-8].symtab_item)->st_ival); printf("%d\n",(yyvsp[-6].symtab_item)->st_ival+(yyvsp[-4].ival));}
#line 1944 "y.tab.c"
    break;

  case 87:
#line 332 "bison.y"
                                                                                { (yyvsp[-8].symtab_item)->st_ival=(yyvsp[-2].ival);	printf("LAMBDA at line:%d\t%s\t%d:\t",mylineno,(yyvsp[-8].symtab_item)->st_name,(yyvsp[-8].symtab_item)->st_ival); printf("%d\n",(yyvsp[-6].symtab_item)->st_ival-(yyvsp[-4].ival));}
#line 1950 "y.tab.c"
    break;

  case 88:
#line 333 "bison.y"
                                                                                { (yyvsp[-8].symtab_item)->st_ival=(yyvsp[-2].ival);	printf("LAMBDA at line:%d\t%s\t%d:\t",mylineno,(yyvsp[-8].symtab_item)->st_name,(yyvsp[-8].symtab_item)->st_ival); printf("%d\n",(yyvsp[-6].symtab_item)->st_ival*(yyvsp[-4].ival));}
#line 1956 "y.tab.c"
    break;

  case 89:
#line 334 "bison.y"
                                                                                { (yyvsp[-8].symtab_item)->st_ival=(yyvsp[-2].ival);	printf("LAMBDA at line:%d\t%s\t%d:\t",mylineno,(yyvsp[-8].symtab_item)->st_name,(yyvsp[-8].symtab_item)->st_ival); printf("%d\n",(yyvsp[-6].symtab_item)->st_ival/(yyvsp[-4].ival));}
#line 1962 "y.tab.c"
    break;

  case 90:
#line 339 "bison.y"
                                { (yyvsp[0].symtab_item)->st_type="Lambda";	(yyval.symtab_item)=(yyvsp[0].symtab_item);	}
#line 1968 "y.tab.c"
    break;

  case 91:
#line 340 "bison.y"
                        { (yyvsp[-2].symtab_item)->st_type="Lambda";	(yyval.symtab_item)=(yyvsp[-2].symtab_item);	}
#line 1974 "y.tab.c"
    break;

  case 98:
#line 351 "bison.y"
                                        { /*$$=$1;*/ }
#line 1980 "y.tab.c"
    break;

  case 99:
#line 352 "bison.y"
                                        { /*$$=$1;*/ }
#line 1986 "y.tab.c"
    break;

  case 103:
#line 364 "bison.y"
                                                  { (yyvsp[-7].symtab_item)->st_type="Dictionary\n"; 
						//	printf("OBS=%s\n",$5); 
		//				strcpy(lookup_P($1)->param_name,$5); 
		//	printf("Parameter : %s\n",	print_P($1->parameters)->param_name);
		//print_P($1);
							 (yyval.symtab_item)=(yyvsp[-7].symtab_item); printf("Dictionary : %s\n",(yyval.symtab_item)->st_name); 	
							 
							 }
#line 1999 "y.tab.c"
    break;

  case 104:
#line 372 "bison.y"
                                                { (yyvsp[-5].symtab_item)->st_type="Dictionary"; 
					//		printf("OBS=%s\n",$4); 
					//	strcpy(lookup_P($1)->param_name,$4); 
		//		printf("Parameter : %s\n",lookup_P($1)->param_name);
	//	print_P($1);
			//				 $$=$1;
							  printf("Dictionary : %s\n",(yyval.symtab_item)->st_name); 	
							 }
#line 2012 "y.tab.c"
    break;

  case 105:
#line 381 "bison.y"
                                                { // printf("OBS=%s\n",$$->param_name); 
							//$$=insert_P($1);
							//$$->val=$3;		
							}
#line 2021 "y.tab.c"
    break;

  case 106:
#line 385 "bison.y"
                                                {  //printf("OBS=%s\n",$$->param_name); 
							//$$=insert_P($1);
							//$$->val=$3;
							//$$->next=$6;		
							}
#line 2031 "y.tab.c"
    break;

  case 107:
#line 390 "bison.y"
                                                {  //printf("OBS=%s\n",$$->param_name); 
							//$$=insert_P($1);
							//$$->val=$3;
							//$$->next=$5;	
								}
#line 2041 "y.tab.c"
    break;

  case 108:
#line 397 "bison.y"
                                                {printf("Func Item\n");}
#line 2047 "y.tab.c"
    break;

  case 109:
#line 400 "bison.y"
                                                                {printf("Func Set Default !!\n");}
#line 2053 "y.tab.c"
    break;

  case 110:
#line 401 "bison.y"
                                                                {printf("Func Set Default\tYou got it bitch !!\n");}
#line 2059 "y.tab.c"
    break;

  case 111:
#line 404 "bison.y"
              {(yyval.sval)=(yyvsp[0].sval);}
#line 2065 "y.tab.c"
    break;

  case 112:
#line 404 "bison.y"
                                  {(yyval.ival)=(yyvsp[0].ival);}
#line 2071 "y.tab.c"
    break;

  case 113:
#line 404 "bison.y"
                                                        {(yyval.fval)=(yyvsp[0].fval);}
#line 2077 "y.tab.c"
    break;

  case 121:
#line 419 "bison.y"
                                { printf("PRINT:\t%s\n",(yyvsp[-1].sval)); }
#line 2083 "y.tab.c"
    break;

  case 122:
#line 420 "bison.y"
                                { printf("PRINT:\t%s\n",(yyvsp[-1].sval)); }
#line 2089 "y.tab.c"
    break;

  case 123:
#line 421 "bison.y"
                                { printf("PRINT:\t%d\n",(yyvsp[-1].ival)); }
#line 2095 "y.tab.c"
    break;

  case 124:
#line 422 "bison.y"
                                { printf("PRINT:\t%f\n",(yyvsp[-1].fval)); }
#line 2101 "y.tab.c"
    break;

  case 125:
#line 423 "bison.y"
                                { 
				if((yyvsp[-1].symtab_item)->st_type=="Float")
					printf("PRINT:\t%f  (%s)\n",(yyvsp[-1].symtab_item)->st_fval,(yyvsp[-1].symtab_item)->st_name);
				if((yyvsp[-1].symtab_item)->st_type=="Integer")
					printf("PRINT:\t%d  (%s)\n",(yyvsp[-1].symtab_item)->st_ival,(yyvsp[-1].symtab_item)->st_name);
				if((yyvsp[-1].symtab_item)->st_type=="String")
					printf("PRINT:\t%s  (%s)\n",(yyvsp[-1].symtab_item)->st_sval,(yyvsp[-1].symtab_item)->st_name);	
				 }
#line 2114 "y.tab.c"
    break;

  case 126:
#line 431 "bison.y"
                                { yyerrok;printf("You can't print that %d\n ",yyerrok);}
#line 2120 "y.tab.c"
    break;

  case 127:
#line 435 "bison.y"
                                        {

					(yyvsp[-2].symtab_item)->st_type=(yyvsp[0].symtab_item)->st_type;
					if((yyvsp[-2].symtab_item)->st_type=="Float")
						(yyvsp[-2].symtab_item)->st_fval=(yyvsp[0].symtab_item)->st_fval;
					if((yyvsp[-2].symtab_item)->st_type=="Integer")
						(yyvsp[-2].symtab_item)->st_ival=(yyvsp[0].symtab_item)->st_ival;
					if((yyvsp[-2].symtab_item)->st_type=="String")
						(yyvsp[-2].symtab_item)->st_sval=(yyvsp[0].symtab_item)->st_sval; 
					}
#line 2135 "y.tab.c"
    break;

  case 128:
#line 446 "bison.y"
                                {(yyvsp[-2].symtab_item)->st_type="Float"; (yyvsp[-2].symtab_item)->st_fval=(yyvsp[0].fval);
					//printf("\tVariable: %s \tValue:%f \tType:%s\n",$1->st_name,$1->st_fval,$1->st_type); 
					}
#line 2143 "y.tab.c"
    break;

  case 129:
#line 449 "bison.y"
                                        {(yyvsp[-2].symtab_item)->st_type="Integer"; (yyvsp[-2].symtab_item)->st_ival=(yyvsp[0].ival);
					//printf("\tVariable: %s \tValue:%d \tType:%s\n",$1->st_name,$1->st_ival,$1->st_type);  
					 }
#line 2151 "y.tab.c"
    break;

  case 130:
#line 452 "bison.y"
                                        {(yyvsp[-2].symtab_item)->st_type="String"; (yyvsp[-2].symtab_item)->st_sval=(yyvsp[0].sval);
				//	printf("\tVariable: %s \tValue:%s \tType:%s\n",$1->st_name,$1->st_sval,$1->st_type);  
					 }
#line 2159 "y.tab.c"
    break;

  case 131:
#line 455 "bison.y"
                                        {(yyvsp[-2].symtab_item)->st_type="String"; (yyvsp[-2].symtab_item)->st_sval=(yyvsp[0].sval);
				//	printf("\tVariable: %s \tValue:%s \tType:%s\n",$1->st_name,$1->st_sval,$1->st_type);  
					 }
#line 2167 "y.tab.c"
    break;

  case 132:
#line 458 "bison.y"
                                                {
						(yyvsp[-6].symtab_item)->st_type="Integer"; (yyvsp[-6].symtab_item)->st_ival=(yyvsp[-2].ival);
						(yyvsp[-4].symtab_item)->st_type="Integer"; (yyvsp[-4].symtab_item)->st_ival=(yyvsp[0].ival);
					//	printf("\tVariable: %s \tValue:%d \tType:%s\n",$1->st_name,$1->st_ival,$1->st_type); 
					//	printf("\tVariable: %s \tValue:%d \tType:%s\n",$3->st_name,$3->st_ival,$3->st_type); 
						}
#line 2178 "y.tab.c"
    break;

  case 133:
#line 464 "bison.y"
                                                {
						(yyvsp[-6].symtab_item)->st_type="Float"; (yyvsp[-6].symtab_item)->st_fval=(yyvsp[-2].fval);
						(yyvsp[-4].symtab_item)->st_type="Float"; (yyvsp[-4].symtab_item)->st_fval=(yyvsp[0].fval);
					//	printf("\tVariable: %s \tValue:%f \tType:%s\n",$1->st_name,$1->st_fval,$1->st_type); 
					//	printf("\tVariable: %s \tValue:%f \tType:%s\n",$3->st_name,$3->st_fval,$3->st_type); 
						}
#line 2189 "y.tab.c"
    break;

  case 134:
#line 470 "bison.y"
                                                {
						(yyvsp[-6].symtab_item)->st_type="Integer"; (yyvsp[-6].symtab_item)->st_ival=(yyvsp[-2].ival);
						(yyvsp[-4].symtab_item)->st_type="Float"; (yyvsp[-4].symtab_item)->st_fval=(yyvsp[0].fval);
						printf("\tVariable: %s \tValue:%d \tType:%s\n",(yyvsp[-6].symtab_item)->st_name,(yyvsp[-6].symtab_item)->st_ival,(yyvsp[-6].symtab_item)->st_type); 
						printf("\tVariable: %s \tValue:%f \tType:%s\n",(yyvsp[-4].symtab_item)->st_name,(yyvsp[-4].symtab_item)->st_fval,(yyvsp[-4].symtab_item)->st_type); 
						}
#line 2200 "y.tab.c"
    break;

  case 135:
#line 476 "bison.y"
                                                {
						(yyvsp[-6].symtab_item)->st_type="Float"; (yyvsp[-6].symtab_item)->st_fval=(yyvsp[-2].fval);
						(yyvsp[-4].symtab_item)->st_type="Integer"; (yyvsp[-4].symtab_item)->st_ival=(yyvsp[0].ival);
					//	printf("\tVariable: %s \tValue:%f \tType:%s\n",$1->st_name,$1->st_fval,$1->st_type); 
					//	printf("\tVariable: %s \tValue:%d \tType:%s\n",$3->st_name,$3->st_ival,$3->st_type); 
						}
#line 2211 "y.tab.c"
    break;

  case 136:
#line 505 "bison.y"
                                        { /*fprintf(yyout, "%i\n", $1); printf("%i\n",$1); */}
#line 2217 "y.tab.c"
    break;

  case 137:
#line 506 "bison.y"
                                        { /*fprintf(yyout, "%f\n", $1); printf("%f\n",$1); */}
#line 2223 "y.tab.c"
    break;

  case 138:
#line 507 "bison.y"
                                        { /*fprintf(yyout, "%s\n", $1); printf("%s\n",$1); */}
#line 2229 "y.tab.c"
    break;

  case 139:
#line 508 "bison.y"
                                        { /*fprintf(yyout, "%s\n", $1); printf("%s\n",$1); */}
#line 2235 "y.tab.c"
    break;

  case 140:
#line 509 "bison.y"
                                        {  }
#line 2241 "y.tab.c"
    break;

  case 141:
#line 514 "bison.y"
                                        { (yyval.fval) = (yyvsp[0].fval); /*printf("\t\t\t\t\t\t%f \n",$1);*/ }
#line 2247 "y.tab.c"
    break;

  case 142:
#line 515 "bison.y"
                                       { (yyval.fval) = (yyvsp[-2].fval) + (yyvsp[0].fval); printf("%f + %f\n",(yyvsp[-2].fval),(yyvsp[0].fval)); }
#line 2253 "y.tab.c"
    break;

  case 143:
#line 516 "bison.y"
                                       { (yyval.fval) = (yyvsp[-2].fval) * (yyvsp[0].fval); printf("%f * %f\n",(yyvsp[-2].fval),(yyvsp[0].fval));}
#line 2259 "y.tab.c"
    break;

  case 144:
#line 517 "bison.y"
                                       { (yyval.fval) = (yyvsp[-2].fval) - (yyvsp[0].fval); printf("%f - %f\n",(yyvsp[-2].fval),(yyvsp[0].fval)); }
#line 2265 "y.tab.c"
    break;

  case 145:
#line 518 "bison.y"
                                       { (yyval.fval) = (yyvsp[-2].fval) / (yyvsp[0].fval); printf("%f / %f\n",(yyvsp[-2].fval),(yyvsp[0].fval));}
#line 2271 "y.tab.c"
    break;

  case 146:
#line 520 "bison.y"
                                       { (yyval.fval) = (yyvsp[-2].fval) + (yyvsp[0].ival); printf("%f + %i\n",(yyvsp[-2].fval),(yyvsp[0].ival)); }
#line 2277 "y.tab.c"
    break;

  case 147:
#line 521 "bison.y"
                                       { (yyval.fval) = (yyvsp[-2].fval) * (yyvsp[0].ival); printf("%f * %i\n",(yyvsp[-2].fval),(yyvsp[0].ival));}
#line 2283 "y.tab.c"
    break;

  case 148:
#line 522 "bison.y"
                                       { (yyval.fval) = (yyvsp[-2].fval) - (yyvsp[0].ival); printf("%f - %i\n",(yyvsp[-2].fval),(yyvsp[0].ival)); }
#line 2289 "y.tab.c"
    break;

  case 149:
#line 523 "bison.y"
                                       { (yyval.fval) = (yyvsp[-2].fval) / (yyvsp[0].ival); printf("%f / %i\n",(yyvsp[-2].fval),(yyvsp[0].ival));}
#line 2295 "y.tab.c"
    break;

  case 150:
#line 524 "bison.y"
                                       { 
					  float temp=1;
					  printf("%f ** %i\n",(yyvsp[-3].fval),(yyvsp[0].ival)) ;
					  while((yyvsp[0].ival)!=0){
						temp=temp*(yyvsp[-3].fval);
						(yyvsp[0].ival)--;}	
					  (yyval.fval)=temp;
					}
#line 2308 "y.tab.c"
    break;

  case 151:
#line 533 "bison.y"
                                       { (yyval.fval) = (yyvsp[-2].ival) + (yyvsp[0].fval); printf("%i + %f\n",(yyvsp[-2].ival),(yyvsp[0].fval)); }
#line 2314 "y.tab.c"
    break;

  case 152:
#line 534 "bison.y"
                                       { (yyval.fval) = (yyvsp[-2].ival) * (yyvsp[0].fval); printf("%i * %f\n",(yyvsp[-2].ival),(yyvsp[0].fval));}
#line 2320 "y.tab.c"
    break;

  case 153:
#line 535 "bison.y"
                                       { (yyval.fval) = (yyvsp[-2].ival) - (yyvsp[0].fval); printf("%i - %f\n",(yyvsp[-2].ival),(yyvsp[0].fval)); }
#line 2326 "y.tab.c"
    break;

  case 154:
#line 536 "bison.y"
                                       { (yyval.fval) = (yyvsp[-2].ival) / (yyvsp[0].fval); printf("%i / %f\n",(yyvsp[-2].ival),(yyvsp[0].fval));}
#line 2332 "y.tab.c"
    break;

  case 155:
#line 539 "bison.y"
                                { (yyval.ival) = (yyvsp[0].ival); /*printf("\t\t\t\t\t%i \n",$1);*/}
#line 2338 "y.tab.c"
    break;

  case 156:
#line 540 "bison.y"
                                        { (yyval.ival) = (yyvsp[-2].ival) + (yyvsp[0].ival); printf("%i + %i\n",(yyvsp[-2].ival),(yyvsp[0].ival)); }
#line 2344 "y.tab.c"
    break;

  case 157:
#line 541 "bison.y"
                                        { (yyval.ival) = (yyvsp[-2].ival) * (yyvsp[0].ival); printf("%i * %i\n",(yyvsp[-2].ival),(yyvsp[0].ival));}
#line 2350 "y.tab.c"
    break;

  case 158:
#line 542 "bison.y"
                                        { (yyval.ival) = (yyvsp[-2].ival) - (yyvsp[0].ival); printf("%i - %i\n",(yyvsp[-2].ival),(yyvsp[0].ival)); }
#line 2356 "y.tab.c"
    break;

  case 159:
#line 543 "bison.y"
                                        { (yyval.ival) = (yyvsp[-2].ival) / (yyvsp[0].ival); printf("%i / %i\n",(yyvsp[-2].ival),(yyvsp[0].ival));}
#line 2362 "y.tab.c"
    break;

  case 160:
#line 545 "bison.y"
                                       { 
					  int temp=1;
					  printf("%i ** %i\n",(yyvsp[-3].ival),(yyvsp[0].ival)) ;
					  while((yyvsp[0].ival)!=0){
						temp=temp*(yyvsp[-3].ival);
						(yyvsp[0].ival)--;}	
					  (yyval.ival)=temp;
					}
#line 2375 "y.tab.c"
    break;


#line 2379 "y.tab.c"

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 555 "bison.y"
								    
    

void yyerror(char *s) {
    fprintf(stderr, "%s\n", s);
    exit(1);
}									


int main ( int argc, char **argv  ) 
  {
  
	  init_hash_table();
	  
	   
	  ++argv; --argc;
	  if ( argc > 0 )
		yyin = fopen( argv[0], "r" );
	  else
		yyin = stdin;
		
	  	
	  do {
		yyparse();
		} while(!feof(yyin));   
	   
	   
	  yyout = fopen ( "output", "wb" );	
	  symtab_dump(yyout); 
	  fclose(yyout);
	   
	  exit(0);
  }   
										
