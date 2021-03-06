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
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         quickstep_yyparse
#define yylex           quickstep_yylex
#define yyerror         quickstep_yyerror
#define yydebug         quickstep_yydebug
#define yynerrs         quickstep_yynerrs


/* Copy the first part of user declarations.  */
#line 35 "../SqlParser.ypp" /* yacc.c:339  */


/* Override the default definition, as we only need <first_line> and <first_column>. */
typedef struct YYLTYPE {
  int first_line;
  int first_column;
} YYLTYPE;

#define YYLTYPE_IS_DECLARED 1

/*
 * Modified from the default YYLLOC_DEFAULT
 * (http://www.gnu.org/software/bison/manual/html_node/Location-Default-Action.html).
 * The assignments for last_line and last_column are removed as they are not used.
 */
#define YYLLOC_DEFAULT(current, rhs, n)                         \
  do {                                                          \
    if (n) {                                                    \
      (current).first_line   = YYRHSLOC(rhs, 1).first_line;     \
      (current).first_column = YYRHSLOC(rhs, 1).first_column;   \
    } else {                                                    \
      /* empty RHS */                                           \
      (current).first_line = YYRHSLOC(rhs, 0).first_line;       \
      (current).first_column = YYRHSLOC(rhs, 0).first_column;   \
    }                                                           \
  } while (0)

#line 64 "../SqlParser.ypp" /* yacc.c:339  */

#include <cstdlib>
#include <string>
#include <utility>

#include "catalog/PartitionSchemeHeader.hpp"
#include "parser/ParseAssignment.hpp"
#include "parser/ParseAttributeDefinition.hpp"
#include "parser/ParseBasicExpressions.hpp"
#include "parser/ParseBlockProperties.hpp"
#include "parser/ParseCaseExpressions.hpp"
#include "parser/ParseExpression.hpp"
#include "parser/ParseGeneratorTableReference.hpp"
#include "parser/ParseGroupBy.hpp"
#include "parser/ParseHaving.hpp"
#include "parser/ParseJoinedTableReference.hpp"
#include "parser/ParseKeyValue.hpp"
#include "parser/ParseLimit.hpp"
#include "parser/ParseLiteralValue.hpp"
#include "parser/ParseOrderBy.hpp"
#include "parser/ParsePartitionClause.hpp"
#include "parser/ParsePredicate.hpp"
#include "parser/ParsePredicateExists.hpp"
#include "parser/ParsePredicateInTableQuery.hpp"
#include "parser/ParsePriority.hpp"
#include "parser/ParserUtil.hpp"
#include "parser/ParseSample.hpp"
#include "parser/ParseSelect.hpp"
#include "parser/ParseSelectionClause.hpp"
#include "parser/ParseSetOperation.hpp"
#include "parser/ParseSimpleTableReference.hpp"
#include "parser/ParseStatement.hpp"
#include "parser/ParseString.hpp"
#include "parser/ParseSubqueryExpression.hpp"
#include "parser/ParseSubqueryTableReference.hpp"
#include "parser/ParseTableReference.hpp"
#include "parser/ParseWindow.hpp"
#include "storage/StorageBlockInfo.hpp"
#include "types/Type.hpp"
#include "types/TypeFactory.hpp"
#include "types/TypeID.hpp"
#include "types/operations/binary_operations/BinaryOperation.hpp"
#include "types/operations/binary_operations/BinaryOperationFactory.hpp"
#include "types/operations/binary_operations/BinaryOperationID.hpp"
#include "types/operations/comparisons/Comparison.hpp"
#include "types/operations/comparisons/ComparisonFactory.hpp"
#include "types/operations/comparisons/ComparisonID.hpp"
#include "types/operations/unary_operations/UnaryOperation.hpp"
#include "types/operations/unary_operations/UnaryOperationFactory.hpp"
#include "types/operations/unary_operations/UnaryOperationID.hpp"
#include "utility/PtrList.hpp"
#include "utility/PtrVector.hpp"

// Needed for Bison 2.6 and higher, which do not automatically provide this typedef.
typedef void* yyscan_t;

#line 157 "SqlParser_gen.cpp" /* yacc.c:339  */

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
   by #include "SqlParser_gen.hpp".  */
#ifndef YY_QUICKSTEP_YY_SQLPARSER_GEN_HPP_INCLUDED
# define YY_QUICKSTEP_YY_SQLPARSER_GEN_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int quickstep_yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOKEN_COMMAND = 258,
    TOKEN_NAME = 259,
    TOKEN_STRING_SINGLE_QUOTED = 260,
    TOKEN_STRING_DOUBLE_QUOTED = 261,
    TOKEN_UNSIGNED_NUMVAL = 262,
    TOKEN_OR = 263,
    TOKEN_AND = 264,
    TOKEN_NOT = 265,
    TOKEN_EQ = 266,
    TOKEN_LT = 267,
    TOKEN_LEQ = 268,
    TOKEN_GT = 269,
    TOKEN_GEQ = 270,
    TOKEN_NEQ = 271,
    TOKEN_LIKE = 272,
    TOKEN_REGEXP = 273,
    TOKEN_BETWEEN = 274,
    TOKEN_IS = 275,
    UNARY_PLUS = 276,
    UNARY_MINUS = 277,
    TOKEN_ALL = 278,
    TOKEN_UNION = 279,
    TOKEN_INTERSECT = 280,
    TOKEN_ADD = 281,
    TOKEN_ALTER = 282,
    TOKEN_AS = 283,
    TOKEN_ASC = 284,
    TOKEN_BIGINT = 285,
    TOKEN_BIT = 286,
    TOKEN_BITWEAVING = 287,
    TOKEN_BLOCKPROPERTIES = 288,
    TOKEN_BLOCKSAMPLE = 289,
    TOKEN_BLOOM_FILTER = 290,
    TOKEN_CSB_TREE = 291,
    TOKEN_BY = 292,
    TOKEN_CASE = 293,
    TOKEN_CHARACTER = 294,
    TOKEN_CHECK = 295,
    TOKEN_COLUMN = 296,
    TOKEN_CONSTRAINT = 297,
    TOKEN_COPY = 298,
    TOKEN_CREATE = 299,
    TOKEN_CURRENT = 300,
    TOKEN_DATE = 301,
    TOKEN_DATETIME = 302,
    TOKEN_DAY = 303,
    TOKEN_DECIMAL = 304,
    TOKEN_DEFAULT = 305,
    TOKEN_DELETE = 306,
    TOKEN_DESC = 307,
    TOKEN_DISTINCT = 308,
    TOKEN_DOUBLE = 309,
    TOKEN_DROP = 310,
    TOKEN_ELSE = 311,
    TOKEN_END = 312,
    TOKEN_EXISTS = 313,
    TOKEN_EXTRACT = 314,
    TOKEN_FALSE = 315,
    TOKEN_FIRST = 316,
    TOKEN_FLOAT = 317,
    TOKEN_FOLLOWING = 318,
    TOKEN_FOR = 319,
    TOKEN_FOREIGN = 320,
    TOKEN_FROM = 321,
    TOKEN_FULL = 322,
    TOKEN_GROUP = 323,
    TOKEN_HASH = 324,
    TOKEN_HAVING = 325,
    TOKEN_HOUR = 326,
    TOKEN_IN = 327,
    TOKEN_INDEX = 328,
    TOKEN_INNER = 329,
    TOKEN_INSERT = 330,
    TOKEN_INTEGER = 331,
    TOKEN_INTERVAL = 332,
    TOKEN_INTO = 333,
    TOKEN_JOIN = 334,
    TOKEN_KEY = 335,
    TOKEN_LAST = 336,
    TOKEN_LEFT = 337,
    TOKEN_LIMIT = 338,
    TOKEN_LONG = 339,
    TOKEN_MINUTE = 340,
    TOKEN_MONTH = 341,
    TOKEN_NULL = 342,
    TOKEN_NULLS = 343,
    TOKEN_OFF = 344,
    TOKEN_ON = 345,
    TOKEN_ORDER = 346,
    TOKEN_OUTER = 347,
    TOKEN_OVER = 348,
    TOKEN_PARTITION = 349,
    TOKEN_PARTITIONS = 350,
    TOKEN_PERCENT = 351,
    TOKEN_PRECEDING = 352,
    TOKEN_PRIMARY = 353,
    TOKEN_PRIORITY = 354,
    TOKEN_QUIT = 355,
    TOKEN_RANGE = 356,
    TOKEN_REAL = 357,
    TOKEN_REFERENCES = 358,
    TOKEN_RIGHT = 359,
    TOKEN_ROW = 360,
    TOKEN_ROW_DELIMITER = 361,
    TOKEN_ROWS = 362,
    TOKEN_SECOND = 363,
    TOKEN_SELECT = 364,
    TOKEN_SET = 365,
    TOKEN_SMA = 366,
    TOKEN_SMALLINT = 367,
    TOKEN_STDERR = 368,
    TOKEN_STDOUT = 369,
    TOKEN_SUBSTRING = 370,
    TOKEN_TABLE = 371,
    TOKEN_THEN = 372,
    TOKEN_TIME = 373,
    TOKEN_TIMESTAMP = 374,
    TOKEN_TO = 375,
    TOKEN_TRUE = 376,
    TOKEN_TUPLESAMPLE = 377,
    TOKEN_UNBOUNDED = 378,
    TOKEN_UNIQUE = 379,
    TOKEN_UPDATE = 380,
    TOKEN_USING = 381,
    TOKEN_VALUES = 382,
    TOKEN_VARCHAR = 383,
    TOKEN_WHEN = 384,
    TOKEN_WHERE = 385,
    TOKEN_WINDOW = 386,
    TOKEN_WITH = 387,
    TOKEN_YEAR = 388,
    TOKEN_YEARMONTH = 389,
    TOKEN_EOF = 390,
    TOKEN_LEX_ERROR = 391
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 121 "../SqlParser.ypp" /* yacc.c:355  */

  quickstep::ParseString *string_value_;

  quickstep::PtrList<quickstep::ParseString> *string_list_;

  bool boolean_value_;

  quickstep::NumericParseLiteralValue *numeric_literal_value_;
  quickstep::ParseLiteralValue *literal_value_;
  quickstep::PtrList<quickstep::ParseScalarLiteral> *literal_value_list_;

  quickstep::ParseExpression *expression_;

  quickstep::ParseScalarLiteral *scalar_literal_;
  quickstep::ParseAttribute *attribute_;
  quickstep::PtrList<quickstep::ParseAttribute> *attribute_list_;

  quickstep::ParsePredicate *predicate_;

  quickstep::ParseSubqueryExpression *subquery_expression_;

  quickstep::PtrVector<quickstep::ParseSimpleWhenClause> *simple_when_clause_list_;
  quickstep::ParseSimpleWhenClause *simple_when_clause_;

  quickstep::PtrVector<quickstep::ParseSearchedWhenClause> *searched_when_clause_list_;
  quickstep::ParseSearchedWhenClause *searched_when_clause_;

  quickstep::ParseSelectionClause *selection_;
  quickstep::ParseSelectionItem *selection_item_;
  quickstep::ParseSelectionList *selection_list_;

  quickstep::ParseSetOperation *set_operation_;

  quickstep::ParseTableReference *table_reference_;
  quickstep::PtrList<quickstep::ParseTableReference> *table_reference_list_;
  quickstep::ParseTableReferenceSignature *table_reference_signature_;

  quickstep::ParseJoinedTableReference::JoinType join_type_;

  quickstep::ParseDataType *data_type_;
  quickstep::ParseAttributeDefinition *attribute_definition_;
  quickstep::ParseColumnConstraint *column_constraint_;
  quickstep::PtrList<quickstep::ParseColumnConstraint> *column_constraint_list_;
  quickstep::PtrList<quickstep::ParseAttributeDefinition> *attribute_definition_list_;

  quickstep::ParseKeyValue *key_value_;
  quickstep::PtrList<quickstep::ParseKeyValue> *key_value_list_;
  quickstep::ParseKeyStringValue *key_string_value_;
  quickstep::ParseKeyStringList *key_string_list_;
  quickstep::ParseKeyIntegerValue *key_integer_value_;
  quickstep::ParseKeyBoolValue *key_bool_value_;

  quickstep::ParseAssignment *assignment_;
  quickstep::PtrList<quickstep::ParseAssignment> *assignment_list_;

  quickstep::ParseCommand *command_;
  quickstep::PtrVector<quickstep::ParseString> *command_argument_list_;

  quickstep::ParseStatement *statement_;
  quickstep::ParseStatementSetOperation *set_operation_statement_;
  quickstep::ParseStatementUpdate *update_statement_;
  quickstep::ParseStatementInsert *insert_statement_;
  quickstep::ParseStatementDelete *delete_statement_;
  quickstep::ParseStatementCopy *copy_statement_;
  quickstep::ParseStatementCreateTable *create_table_statement_;
  quickstep::ParsePartitionClause *partition_clause_;
  quickstep::ParseBlockProperties *block_properties_;
  quickstep::ParseStatementDropTable *drop_table_statement_;
  quickstep::ParseStatementQuit *quit_statement_;

  const quickstep::Comparison *comparison_;
  const quickstep::UnaryOperation *unary_operation_;
  const quickstep::BinaryOperation *binary_operation_;

  quickstep::ParseFunctionCall *function_call_;
  quickstep::PtrList<quickstep::ParseExpression> *expression_list_;

  quickstep::ParseSelect *select_query_;
  quickstep::ParseGroupBy *opt_group_by_clause_;
  quickstep::ParseHaving *opt_having_clause_;
  quickstep::ParseOrderBy *opt_order_by_clause_;
  bool *order_direction_;
  quickstep::ParseLimit *opt_limit_clause_;

  quickstep::ParseSample *opt_sample_clause_;

  quickstep::PtrList<quickstep::ParseWindow> *opt_window_clause_;
  quickstep::ParseWindow *window_definition_;
  quickstep::PtrList<quickstep::ParseExpression> *window_partition_by_list_;
  quickstep::PtrList<quickstep::ParseOrderByItem> *window_order_by_list_;
  quickstep::ParseFrameInfo *window_frame_info_;

  quickstep::PtrList<quickstep::ParseOrderByItem> *order_commalist_;
  quickstep::ParseOrderByItem *order_item_;

  quickstep::PtrVector<quickstep::ParseSubqueryTableReference> *with_list_;
  quickstep::ParseSubqueryTableReference *with_list_element_;

  quickstep::ParsePriority *opt_priority_clause_;

#line 435 "SqlParser_gen.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int quickstep_yyparse (yyscan_t yyscanner, quickstep::ParseStatement **parsedStatement);

#endif /* !YY_QUICKSTEP_YY_SQLPARSER_GEN_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 222 "../SqlParser.ypp" /* yacc.c:358  */

/* This header needs YYSTYPE, which is defined by the %union directive above */
#include "SqlLexer_gen.hpp"
void NotSupported(const YYLTYPE *location, yyscan_t yyscanner, const std::string &feature);

#line 470 "SqlParser_gen.cpp" /* yacc.c:358  */

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  50
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1391

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  148
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  110
/* YYNRULES -- Number of rules.  */
#define YYNRULES  298
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  550

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   391

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     143,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   147,     2,     2,
     144,   145,    23,    21,   146,    22,    27,    24,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   142,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    25,    26,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   640,   640,   644,   648,   652,   656,   659,   666,   669,
     672,   675,   678,   681,   684,   687,   690,   693,   699,   705,
     712,   718,   725,   734,   739,   748,   753,   758,   762,   768,
     773,   776,   779,   784,   787,   790,   793,   796,   799,   802,
     805,   808,   811,   823,   826,   829,   847,   867,   870,   873,
     878,   883,   889,   895,   904,   908,   914,   917,   922,   927,
     932,   939,   946,   950,   956,   959,   964,   967,   972,   975,
     980,   983,  1002,  1005,  1010,  1014,  1020,  1023,  1026,  1029,
    1034,  1037,  1040,  1047,  1052,  1063,  1068,  1073,  1077,  1081,
    1087,  1090,  1096,  1104,  1107,  1110,  1116,  1121,  1126,  1130,
    1136,  1140,  1143,  1148,  1151,  1156,  1161,  1166,  1170,  1176,
    1185,  1188,  1193,  1196,  1215,  1220,  1224,  1230,  1236,  1245,
    1250,  1258,  1264,  1270,  1273,  1276,  1281,  1284,  1289,  1293,
    1299,  1302,  1305,  1310,  1315,  1320,  1323,  1326,  1331,  1334,
    1337,  1340,  1343,  1346,  1349,  1352,  1357,  1360,  1365,  1369,
    1373,  1376,  1380,  1383,  1388,  1391,  1396,  1399,  1404,  1408,
    1414,  1417,  1422,  1425,  1430,  1433,  1438,  1441,  1460,  1463,
    1468,  1472,  1478,  1484,  1489,  1492,  1497,  1500,  1505,  1508,
    1513,  1516,  1521,  1522,  1525,  1530,  1531,  1534,  1539,  1543,
    1549,  1556,  1559,  1562,  1567,  1570,  1573,  1579,  1582,  1587,
    1592,  1601,  1606,  1615,  1620,  1623,  1628,  1631,  1636,  1642,
    1648,  1651,  1654,  1657,  1660,  1663,  1669,  1678,  1681,  1686,
    1689,  1694,  1697,  1702,  1705,  1708,  1711,  1715,  1719,  1722,
    1725,  1728,  1731,  1736,  1740,  1744,  1747,  1752,  1757,  1761,
    1767,  1770,  1775,  1779,  1785,  1790,  1794,  1800,  1805,  1808,
    1813,  1817,  1823,  1826,  1829,  1832,  1844,  1848,  1867,  1880,
    1895,  1898,  1901,  1904,  1907,  1910,  1915,  1919,  1925,  1928,
    1933,  1937,  1944,  1947,  1950,  1953,  1956,  1959,  1962,  1965,
    1968,  1971,  1976,  1987,  1990,  1995,  1998,  2001,  2007,  2011,
    2017,  2020,  2028,  2031,  2034,  2037,  2043,  2048,  2053
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOKEN_COMMAND", "TOKEN_NAME",
  "TOKEN_STRING_SINGLE_QUOTED", "TOKEN_STRING_DOUBLE_QUOTED",
  "TOKEN_UNSIGNED_NUMVAL", "TOKEN_OR", "TOKEN_AND", "TOKEN_NOT",
  "TOKEN_EQ", "TOKEN_LT", "TOKEN_LEQ", "TOKEN_GT", "TOKEN_GEQ",
  "TOKEN_NEQ", "TOKEN_LIKE", "TOKEN_REGEXP", "TOKEN_BETWEEN", "TOKEN_IS",
  "'+'", "'-'", "'*'", "'/'", "UNARY_PLUS", "UNARY_MINUS", "'.'",
  "TOKEN_ALL", "TOKEN_UNION", "TOKEN_INTERSECT", "TOKEN_ADD",
  "TOKEN_ALTER", "TOKEN_AS", "TOKEN_ASC", "TOKEN_BIGINT", "TOKEN_BIT",
  "TOKEN_BITWEAVING", "TOKEN_BLOCKPROPERTIES", "TOKEN_BLOCKSAMPLE",
  "TOKEN_BLOOM_FILTER", "TOKEN_CSB_TREE", "TOKEN_BY", "TOKEN_CASE",
  "TOKEN_CHARACTER", "TOKEN_CHECK", "TOKEN_COLUMN", "TOKEN_CONSTRAINT",
  "TOKEN_COPY", "TOKEN_CREATE", "TOKEN_CURRENT", "TOKEN_DATE",
  "TOKEN_DATETIME", "TOKEN_DAY", "TOKEN_DECIMAL", "TOKEN_DEFAULT",
  "TOKEN_DELETE", "TOKEN_DESC", "TOKEN_DISTINCT", "TOKEN_DOUBLE",
  "TOKEN_DROP", "TOKEN_ELSE", "TOKEN_END", "TOKEN_EXISTS", "TOKEN_EXTRACT",
  "TOKEN_FALSE", "TOKEN_FIRST", "TOKEN_FLOAT", "TOKEN_FOLLOWING",
  "TOKEN_FOR", "TOKEN_FOREIGN", "TOKEN_FROM", "TOKEN_FULL", "TOKEN_GROUP",
  "TOKEN_HASH", "TOKEN_HAVING", "TOKEN_HOUR", "TOKEN_IN", "TOKEN_INDEX",
  "TOKEN_INNER", "TOKEN_INSERT", "TOKEN_INTEGER", "TOKEN_INTERVAL",
  "TOKEN_INTO", "TOKEN_JOIN", "TOKEN_KEY", "TOKEN_LAST", "TOKEN_LEFT",
  "TOKEN_LIMIT", "TOKEN_LONG", "TOKEN_MINUTE", "TOKEN_MONTH", "TOKEN_NULL",
  "TOKEN_NULLS", "TOKEN_OFF", "TOKEN_ON", "TOKEN_ORDER", "TOKEN_OUTER",
  "TOKEN_OVER", "TOKEN_PARTITION", "TOKEN_PARTITIONS", "TOKEN_PERCENT",
  "TOKEN_PRECEDING", "TOKEN_PRIMARY", "TOKEN_PRIORITY", "TOKEN_QUIT",
  "TOKEN_RANGE", "TOKEN_REAL", "TOKEN_REFERENCES", "TOKEN_RIGHT",
  "TOKEN_ROW", "TOKEN_ROW_DELIMITER", "TOKEN_ROWS", "TOKEN_SECOND",
  "TOKEN_SELECT", "TOKEN_SET", "TOKEN_SMA", "TOKEN_SMALLINT",
  "TOKEN_STDERR", "TOKEN_STDOUT", "TOKEN_SUBSTRING", "TOKEN_TABLE",
  "TOKEN_THEN", "TOKEN_TIME", "TOKEN_TIMESTAMP", "TOKEN_TO", "TOKEN_TRUE",
  "TOKEN_TUPLESAMPLE", "TOKEN_UNBOUNDED", "TOKEN_UNIQUE", "TOKEN_UPDATE",
  "TOKEN_USING", "TOKEN_VALUES", "TOKEN_VARCHAR", "TOKEN_WHEN",
  "TOKEN_WHERE", "TOKEN_WINDOW", "TOKEN_WITH", "TOKEN_YEAR",
  "TOKEN_YEARMONTH", "TOKEN_EOF", "TOKEN_LEX_ERROR", "';'", "'\\n'", "'('",
  "')'", "','", "'%'", "$accept", "start", "sql_statement",
  "quit_statement", "alter_table_statement", "create_table_statement",
  "create_index_statement", "drop_table_statement", "column_def",
  "column_def_commalist", "data_type", "column_constraint_def",
  "column_constraint_def_list", "opt_column_constraint_def_list",
  "table_constraint_def", "table_constraint_def_commalist",
  "opt_table_constraint_def_commalist", "opt_column_list",
  "opt_block_properties", "opt_partition_clause", "partition_type",
  "key_value_list", "key_value", "key_string_value", "key_string_list",
  "key_integer_value", "key_bool_value", "index_type",
  "opt_index_properties", "insert_statement", "copy_statement",
  "copy_to_target", "opt_copy_params", "update_statement",
  "delete_statement", "assignment_list", "assignment_item",
  "set_operation_statement", "opt_priority_clause", "with_clause",
  "with_list", "with_list_element", "set_operation_union",
  "set_operation_intersect", "select_query", "opt_all_distinct",
  "selection", "selection_item_commalist", "selection_item", "from_clause",
  "subquery_expression", "opt_sample_clause", "join_type",
  "joined_table_reference", "table_reference", "table_reference_signature",
  "table_reference_signature_primary", "joined_table_reference_commalist",
  "opt_group_by_clause", "opt_having_clause", "opt_order_by_clause",
  "opt_limit_clause", "opt_window_clause", "window_declaration_list",
  "window_declaration", "window_definition", "opt_window_partition",
  "opt_window_order", "opt_window_frame", "frame_mode", "frame_preceding",
  "frame_following", "order_commalist", "order_item",
  "opt_order_direction", "opt_nulls_first", "opt_where_clause",
  "where_clause", "or_expression", "and_expression", "not_expression",
  "predicate_expression_base", "add_expression", "multiply_expression",
  "unary_expression", "expression_base", "function_call",
  "extract_function", "substr_function", "case_expression",
  "simple_when_clause_list", "simple_when_clause",
  "searched_when_clause_list", "searched_when_clause", "opt_else_clause",
  "expression_list", "literal_value", "datetime_unit",
  "literal_value_commalist", "attribute_ref", "attribute_ref_list",
  "comparison_operation", "unary_operation", "add_operation",
  "multiply_operation", "name_commalist", "any_name", "boolean_value",
  "command", "command_argument_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,    43,    45,    42,    47,   276,   277,    46,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,    59,    10,    40,    41,    44,    37
};
# endif

#define YYPACT_NINF -395

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-395)))

#define YYTABLE_NINF -139

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     174,  -395,  -395,   -64,    85,   -26,    14,   -31,   -16,  -395,
      40,   196,   196,  -395,   109,   102,  -395,  -395,  -395,  -395,
    -395,  -395,  -395,  -395,  -395,  -395,   148,    -3,    87,  -395,
     -40,   121,   196,  -395,  -395,     1,    -5,   196,   196,   196,
     196,   196,  -395,  -395,   716,    82,     2,  -395,   153,    63,
    -395,  -395,  -395,    98,   152,    -3,    40,   141,  -395,    98,
    -395,  -395,  -395,    12,    97,   116,   261,   116,   169,   126,
     138,  -395,   176,  -395,  -395,   270,   274,  -395,  -395,  -395,
     807,   139,  -395,   210,  -395,  -395,   154,  -395,  -395,   297,
    -395,  -395,  -395,  -395,   172,  -395,  -395,   177,   231,   901,
     313,   265,   192,  -395,  -395,   338,    23,  -395,  -395,   243,
    -395,  -395,  -395,  -395,  -395,  1083,    -7,   196,   196,   214,
     196,     1,   196,  -395,    98,   363,  -395,   205,   263,  -395,
    -395,  -395,   255,  -395,   116,  -395,   196,   196,   625,  -395,
    -395,   262,   196,  -395,  -395,  -395,   625,    33,   -29,  -395,
     409,  -395,   165,   165,  1174,   411,  -395,   -14,    28,  -395,
      13,   138,  1174,  -395,  -395,   196,  1174,  -395,  -395,  -395,
    -395,  1174,    18,   274,  -395,   196,   398,    59,  -395,   417,
    -395,    98,  -395,   202,  -395,   116,    98,    87,  -395,   196,
      80,   196,   196,   196,  -395,   285,  -395,   211,  1241,   992,
     214,   534,   422,   423,  -395,  -395,   312,   415,  1252,   219,
      43,  1174,    61,  -395,  1174,  -395,   369,   292,  -395,  -395,
    -395,  -395,  -395,  -395,   367,  -395,   216,   294,  -395,  -395,
       7,   186,   267,  -395,   298,   186,     3,   372,  -395,  -395,
      23,  -395,   347,  -395,  -395,   295,  1174,  -395,   351,   229,
     196,  -395,  1174,  -395,   196,  -395,  -395,  -395,   303,   366,
     368,   304,  -395,  -395,  -395,   232,  -395,  -395,  -395,  -395,
    -395,    34,   196,   323,    80,   196,  -395,   188,  -395,  -395,
       4,    65,   625,   625,   276,  -395,  -395,  -395,  -395,  -395,
    -395,  -395,  -395,  1174,   311,  1174,    51,  -395,   234,   326,
    1174,    71,  -395,   399,   351,  -395,  -395,  1174,   453,  -395,
     160,   196,  -395,  -395,   370,  -395,   373,   374,   379,    13,
    -395,   457,   462,   186,   430,   400,   431,   329,   380,  -395,
     236,  -395,  1174,  -395,   351,  -395,   625,   333,   334,   196,
    -395,   196,  -395,  -395,  -395,  -395,  -395,  -395,  -395,   196,
    -395,  -395,  -395,   238,   454,   184,  -395,   336,   348,  -395,
     391,   342,  1252,  -395,   403,   196,  -395,  -395,   188,  -395,
    -395,   423,  -395,  -395,  -395,  1174,   345,   341,   901,  -395,
     351,   401,  -395,  -395,  1252,   350,   351,  1174,  -395,    37,
      35,  -395,  -395,  -395,  -395,  -395,    13,   267,   390,   395,
    -395,  1174,   625,   396,  1174,  -395,   455,   108,  -395,   351,
       8,   196,   196,   240,  -395,   242,  -395,   196,  -395,  -395,
    -395,  -395,   354,    80,   461,   402,  -395,   625,  -395,  -395,
     356,  -395,   346,   901,  -395,  1174,   245,  -395,  -395,  1252,
     351,  -395,   495,  -395,   408,  -395,  -395,   358,   422,   464,
     420,   358,  1174,  -395,  -395,  -395,   490,  -395,   249,   251,
    -395,  -395,  -395,   196,  -395,  -395,   375,   468,  -395,    19,
     196,  1174,   264,   351,  -395,   266,   371,   625,  1174,   504,
     376,   377,  -395,   227,    46,   405,  -395,   269,   196,    -9,
    -395,   381,   351,  -395,  -395,  -395,   422,   377,  -395,   196,
    -395,   376,  -395,  1174,  -395,  -395,   421,   418,   407,   425,
     515,   196,  -395,   277,  -395,  -395,   384,  -395,   496,  -395,
    -395,    49,  -395,  -395,  -395,  -395,    56,   386,  -395,   196,
     388,  -395,  -395,   466,   426,   467,  -395,   196,   279,   347,
    -395,  -395,  -395,   281,   445,   404,  -395,   539,  -395,  -395
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     6,   298,     0,     0,     0,     0,     0,     0,    18,
     123,     0,     0,     7,     0,     0,    15,     8,    10,    11,
      13,    14,     9,    17,    12,    16,     0,   112,   119,   121,
       0,   296,     0,   290,   291,     0,     0,     0,     0,     0,
       0,     0,   124,   125,     0,     0,   114,   115,     0,   156,
       1,     3,     2,     0,     0,   112,   123,     0,   110,     0,
       5,     4,   297,     0,     0,   103,     0,   103,     0,     0,
     197,    25,     0,   256,   253,     0,   282,   126,    40,    29,
       0,     0,    30,    31,    34,    36,     0,    37,    39,     0,
      41,   252,    35,    38,     0,    32,    33,     0,     0,     0,
       0,     0,   127,   128,   232,   132,   218,   220,   222,   225,
     228,   229,   230,   224,   223,     0,   268,     0,     0,     0,
       0,     0,     0,   111,     0,     0,   120,     0,     0,   100,
     102,   101,     0,    98,   103,    97,     0,     0,     0,   106,
     198,     0,     0,    94,   254,   255,     0,     0,   248,   245,
       0,    43,     0,   257,     0,     0,    44,     0,     0,   259,
       0,   197,     0,   283,   284,     0,     0,   131,   286,   287,
     285,     0,     0,     0,   221,     0,     0,   197,   108,     0,
     116,     0,   117,     0,   288,   103,     0,   118,   113,     0,
       0,     0,     0,     0,    96,    66,    27,     0,     0,     0,
       0,     0,   199,   201,   203,   205,     0,   223,     0,     0,
       0,     0,   248,   242,     0,   246,     0,     0,   262,   263,
     264,   261,   265,   260,     0,   258,     0,     0,   134,   231,
       0,     0,   158,   147,   133,   152,   135,   160,   129,   130,
     217,   219,   174,   226,   269,     0,     0,   233,   250,     0,
       0,   105,     0,   157,     0,    99,    95,    19,     0,     0,
       0,     0,    20,    21,    22,     0,    74,    76,    77,    78,
      79,     0,     0,     0,    64,     0,    42,    56,   204,   212,
       0,     0,     0,     0,     0,   272,   274,   275,   276,   277,
     273,   278,   280,     0,     0,     0,     0,   266,     0,     0,
       0,     0,   243,     0,   249,   241,    45,     0,     0,    46,
     138,     0,   148,   154,   144,   139,   140,   142,     0,     0,
     151,     0,     0,   150,     0,   162,     0,     0,   176,   234,
       0,   235,     0,   107,   109,   289,     0,     0,     0,     0,
     104,     0,    81,    84,    82,   294,   295,   293,   292,     0,
      80,    85,   270,     0,   268,     0,    63,    65,    68,    28,
       0,     0,     0,    47,     0,     0,    49,    55,    57,    26,
     211,   200,   202,   279,   281,     0,     0,     0,     0,   213,
     210,     0,   209,    93,     0,     0,   247,     0,   240,     0,
       0,   153,   155,   145,   141,   143,     0,   159,     0,     0,
     149,     0,     0,   164,     0,   227,     0,   178,   236,   251,
       0,     0,     0,     0,    75,     0,    67,     0,    86,    87,
      88,    89,    90,     0,     0,    70,    48,     0,    51,    50,
       0,    54,     0,     0,   215,     0,     0,   208,   267,     0,
     244,   237,     0,   238,     0,   136,   137,   161,   163,     0,
     166,   175,     0,   181,   180,   173,     0,    61,     0,     0,
      58,    83,   271,     0,    24,    62,     0,     0,    23,     0,
       0,     0,     0,   206,   214,     0,     0,     0,     0,     0,
     168,   177,   188,   191,     0,     0,    59,     0,     0,     0,
      52,     0,   207,   216,    92,   239,   146,   165,   167,     0,
     122,   169,   170,     0,   192,   193,   194,     0,     0,     0,
       0,     0,    91,     0,    72,    73,     0,    53,     0,   171,
     189,     0,   190,   182,   184,   183,     0,     0,    69,     0,
       0,   195,   196,     0,     0,     0,   179,     0,     0,   174,
     185,   187,   186,     0,     0,     0,    60,     0,   172,    71
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -395,  -395,  -395,  -395,  -395,  -395,  -395,  -395,  -164,  -395,
     349,   180,  -395,  -395,  -271,  -395,  -395,  -395,  -395,  -395,
    -395,  -394,   209,  -395,  -395,  -395,  -395,  -395,  -395,  -395,
    -395,    24,   -46,  -395,  -395,  -395,   301,  -395,   497,  -395,
    -395,   435,   259,   433,   -28,   498,  -395,  -395,   397,  -395,
     -90,  -395,  -395,  -207,   162,  -187,   -10,  -395,  -395,  -395,
    -395,  -395,  -395,  -395,    60,    21,  -395,  -395,  -395,  -395,
    -395,  -395,    84,    62,  -395,  -395,   -54,  -395,  -145,   282,
     280,   382,   -35,   406,   412,   451,  -156,  -395,  -395,  -395,
    -395,   355,  -395,   427,   359,  -232,  -203,   429,   129,  -128,
    -395,  -395,  -395,  -395,  -395,  -136,    -4,  -395,  -395,  -395
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,    15,    16,    17,    18,    19,    20,   196,   197,
     100,   367,   368,   369,   262,   357,   358,   273,   425,   468,
     516,   265,   266,   267,   268,   269,   270,   422,   464,    21,
      22,    65,   133,    23,    24,   177,   178,    25,    58,    26,
      46,    47,   157,    28,    29,    44,   101,   102,   103,   161,
     104,   323,   318,   232,   233,   312,   313,   234,   325,   403,
     450,   480,   500,   501,   502,   327,   328,   407,   455,   456,
     510,   536,   481,   482,   506,   522,   139,   140,   202,   203,
     204,   205,   206,   106,   107,   108,   109,   110,   111,   112,
     212,   213,   148,   149,   216,   249,   113,   224,   298,   114,
     353,   295,   115,   166,   171,   183,   116,   351,    30,    31
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      36,   210,    48,   356,   235,   297,   209,    45,    49,   105,
     207,    33,   282,    34,   330,    56,   282,    33,   207,    34,
     175,   135,    33,   310,    34,   257,    56,   282,    63,   182,
      56,   126,   214,    68,    69,    70,    71,    72,    33,   342,
      34,   343,   321,   127,   143,   147,   168,   169,   320,   163,
     164,   282,    37,   507,   163,   164,   280,    32,   163,   164,
      67,   381,   344,   533,   158,   514,    66,    41,    42,   487,
     231,   207,   128,   207,   235,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,    39,   163,   164,   194,    33,
      40,    34,   163,   164,   513,    38,   508,   515,    43,   345,
      60,   167,   129,    61,   442,   146,   534,   237,    48,    50,
     279,   359,   397,   179,    49,   531,   184,    59,   186,   226,
      64,    10,   214,   251,    62,   258,    64,   105,   346,   347,
     322,   228,   195,   198,    57,   532,   400,   176,   184,   255,
     231,   248,   294,   382,   352,   185,   436,   176,   118,   370,
     259,   230,   465,   457,   207,   207,   236,   230,   256,   428,
     348,   239,   242,   235,   490,   300,   281,   211,   243,   447,
     170,   244,   451,   229,   509,     1,   301,     2,   349,   304,
     443,   438,   441,   260,   535,   198,   119,   263,   264,   271,
      33,   410,    34,   387,   138,   211,    53,   117,   360,    10,
      33,   472,    34,   413,   379,   250,     3,   120,   207,   261,
     229,   248,    10,   415,   453,   130,   131,   334,   218,   311,
     454,   418,     4,     5,   419,   420,   236,    49,    54,   231,
       6,    49,   314,   361,     7,   122,   297,   163,   164,   315,
     235,   219,    51,   362,    52,   125,   179,   316,   163,   164,
     335,   189,   190,   132,     8,   220,   221,   448,   377,    27,
     380,   504,    10,    35,   136,   386,   134,   350,   354,   317,
     137,   198,   389,   138,   207,   458,   459,   144,   222,     9,
     363,   145,   469,   150,   505,    55,   434,   308,    10,   462,
      10,   364,   151,   373,   374,   375,   365,   409,   152,   207,
     421,   392,   153,   223,    11,   391,   231,    49,   141,   191,
     192,    12,   121,   156,    13,   236,   154,   366,   159,    49,
     142,   155,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   496,   163,   164,   184,   160,   271,   162,   314,
     432,   172,    33,   248,    34,   184,   315,   253,   254,   207,
     435,  -138,   440,   376,   316,   471,   274,   275,   181,   163,
     164,   430,   163,   164,   299,   254,   248,   163,   164,   248,
     188,   165,   163,   164,   331,   332,   317,   340,   341,   383,
     384,   408,   332,   416,   417,   460,   254,   461,   254,   294,
     474,   332,   236,   538,   485,   254,   486,   254,   248,   193,
     473,   543,    33,    73,    34,    74,   208,   184,   184,   493,
     332,   494,   384,   354,   512,   341,   217,   483,   227,    75,
      76,   245,   528,   341,   544,   254,   546,   254,   252,   272,
     282,   305,   283,    78,    79,   296,   492,   306,   307,   309,
     329,    80,    81,   483,   319,   324,   326,   336,   339,    82,
      83,   337,    84,   338,   355,   378,   246,    85,   385,   271,
     390,   388,    86,   396,   398,    87,   491,   393,   483,   399,
     394,   395,   401,   404,   405,   402,   406,   411,   412,    88,
      89,   175,   423,   426,   271,   424,   427,    90,   429,   433,
      91,   445,   449,   437,   439,   518,   446,   452,   463,   466,
     470,   467,   476,   477,   332,    92,   478,   527,   479,   484,
     489,   498,   499,   511,   521,    93,   495,   524,    94,   488,
     523,    95,    96,   503,   526,   184,   517,   525,   529,   530,
     537,    97,   539,   184,   540,   542,   541,    98,    33,    73,
      34,    74,    99,   247,   199,   547,   549,   277,   431,   548,
     414,   333,   123,   180,   124,    75,    76,   187,   444,   238,
     545,   519,   497,   372,   371,   520,   174,   302,   475,    78,
      79,   303,   240,     0,     0,   215,     0,    80,    81,     0,
       0,   278,   225,   241,     0,    82,    83,     0,    84,     0,
       0,     0,     0,    85,     0,     0,     0,   200,    86,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    89,     0,     0,     0,
       0,     0,     0,    90,     0,     0,    91,     0,     0,    33,
      73,    34,    74,     0,     0,   199,     0,     0,     0,     0,
       0,    92,     0,     0,     0,     0,    75,    76,    10,     0,
       0,    93,     0,     0,    94,     0,     0,    95,    96,     0,
      78,    79,     0,     0,     0,     0,     0,    97,    80,    81,
       0,     0,     0,    98,     0,     0,    82,    83,   201,    84,
       0,     0,     0,     0,    85,     0,     0,     0,   200,    86,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    88,    89,     0,     0,
       0,     0,     0,     0,    90,     0,     0,    91,     0,     0,
      33,    73,    34,    74,     0,     0,     0,     0,     0,     0,
       0,     0,    92,     0,     0,     0,     0,    75,    76,    77,
       0,     0,    93,     0,     0,    94,     0,     0,    95,    96,
       0,    78,    79,     0,     0,     0,     0,     0,    97,    80,
      81,     0,     0,     0,    98,     0,     0,    82,    83,   201,
      84,     0,     0,     0,     0,    85,     0,     0,     0,     0,
      86,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,    89,     0,
       0,     0,     0,     0,     0,    90,     0,     0,    91,     0,
       0,    33,    73,    34,    74,     0,     0,     0,     0,     0,
       0,     0,     0,    92,     0,     0,     0,     0,    75,    76,
       0,     0,     0,    93,     0,     0,    94,     0,     0,    95,
      96,     0,    78,    79,     0,     0,     0,     0,     0,    97,
      80,    81,     0,     0,     0,    98,     0,     0,    82,    83,
      99,    84,     0,     0,     0,     0,    85,     0,     0,     0,
       0,    86,     0,     0,    87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,    89,
       0,     0,     0,     0,     0,     0,    90,     0,     0,    91,
       0,     0,     0,     0,     0,    33,    73,    34,    74,     0,
       0,     0,     0,     0,    92,     0,     0,     0,     0,     0,
       0,     0,    75,    76,    93,     0,     0,    94,     0,     0,
      95,    96,     0,     0,     0,     0,    78,    79,     0,     0,
      97,   146,     0,     0,    80,    81,    98,     0,     0,     0,
       0,    99,    82,    83,     0,    84,     0,     0,     0,     0,
      85,     0,     0,     0,     0,    86,     0,     0,    87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    88,    89,     0,     0,     0,     0,     0,     0,
      90,     0,     0,    91,     0,     0,    33,    73,    34,    74,
       0,     0,     0,     0,     0,     0,     0,     0,    92,     0,
       0,     0,     0,    75,    76,    10,     0,     0,    93,     0,
       0,    94,     0,     0,    95,    96,     0,    78,    79,     0,
       0,     0,     0,     0,    97,    80,    81,     0,     0,     0,
      98,     0,     0,    82,    83,    99,    84,     0,     0,     0,
       0,    85,     0,     0,     0,   200,    86,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,    89,     0,     0,     0,     0,     0,
       0,    90,     0,     0,    91,     0,     0,    33,    73,    34,
      74,     0,     0,     0,     0,     0,     0,     0,     0,    92,
       0,     0,     0,     0,    75,   173,     0,     0,     0,    93,
       0,     0,    94,     0,     0,    95,    96,     0,    78,    79,
       0,     0,     0,     0,     0,    97,    80,    81,     0,     0,
       0,    98,     0,     0,    82,    83,   201,    84,     0,     0,
       0,     0,    85,     0,     0,     0,     0,    86,     0,     0,
      87,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    88,    89,     0,     0,     0,     0,
       0,     0,    90,     0,     0,    91,     0,     0,    33,    73,
      34,    74,     0,     0,     0,     0,     0,     0,     0,     0,
      92,     0,     0,     0,     0,    75,    76,     0,     0,     0,
      93,     0,     0,    94,     0,     0,    95,    96,     0,    78,
      79,     0,     0,     0,     0,     0,    97,    80,    81,     0,
       0,     0,    98,     0,     0,    82,    83,    99,    84,     0,
       0,     0,     0,    85,     0,     0,     0,     0,    86,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    89,    73,     0,    74,
       0,     0,     0,    90,     0,     0,    91,     0,     0,     0,
       0,     0,     0,    75,   173,     0,    78,    79,     0,     0,
       0,    92,     0,     0,     0,    81,     0,    78,    79,     0,
       0,    93,    82,    83,    94,    84,    81,    95,    96,     0,
      85,     0,     0,    82,    83,     0,    84,    97,    87,     0,
       0,    85,     0,    98,     0,     0,     0,     0,    99,    87,
       0,     0,    88,   276,     0,     0,     0,     0,     0,     0,
      90,     0,     0,    88,    89,     0,     0,     0,     0,     0,
       0,    90,     0,     0,    91,     0,     0,     0,    92,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    93,    92,
       0,     0,     0,     0,    95,    96,     0,     0,     0,    93,
       0,     0,     0,     0,    97,    95,    96,     0,     0,     0,
      98,     0,     0,     0,     0,    97,     0,     0,     0,     0,
       0,    98
};

static const yytype_int16 yycheck[] =
{
       4,   146,    12,   274,   160,   208,   142,    11,    12,    44,
     138,     4,     8,     6,   246,    29,     8,     4,   146,     6,
      27,    67,     4,   230,     6,   189,    29,     8,    32,   119,
      29,    59,    61,    37,    38,    39,    40,    41,     4,     5,
       6,     7,    39,    31,    72,    80,    23,    24,   235,    21,
      22,     8,    78,     7,    21,    22,   201,   121,    21,    22,
      36,    10,    28,     7,    99,    74,    71,    83,    28,   463,
     160,   199,    60,   201,   230,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    71,    21,    22,   134,     4,
     121,     6,    21,    22,   488,   121,    50,   106,    58,    65,
     140,   105,     5,   143,    69,   134,    50,   161,   118,     0,
     200,   275,   319,   117,   118,    66,   120,    30,   122,   154,
     125,   114,    61,   177,     3,    45,   125,   162,    94,    95,
     127,   145,   136,   137,   137,    86,   323,   144,   142,   185,
     230,   176,    77,    92,   272,   121,   378,   144,   146,   145,
      70,   144,   423,   145,   282,   283,   160,   144,   186,   362,
     126,   165,   144,   319,   145,   122,   201,   134,   172,   401,
     147,   175,   404,   145,   128,     1,   211,     3,   144,   214,
     145,   384,   145,   103,   128,   189,    33,   191,   192,   193,
       4,   336,     6,   122,   135,   134,    48,   115,    10,   114,
       4,   433,     6,   339,   294,   146,    32,   144,   336,   129,
     145,   246,   114,   349,   106,   118,   119,   252,    53,    33,
     112,    37,    48,    49,    40,    41,   230,   231,    80,   319,
      56,   235,    72,    45,    60,    83,   439,    21,    22,    79,
     396,    76,   140,    55,   142,   104,   250,    87,    21,    22,
     254,    46,    47,   137,    80,    90,    91,   402,   293,     0,
     295,    34,   114,     4,    95,   300,     5,   271,   272,   109,
     144,   275,   307,   135,   402,   411,   412,     7,   113,   105,
      92,     7,   427,   144,    57,    26,   376,    71,   114,   417,
     114,   103,    82,    17,    18,    19,   108,   332,   144,   427,
     116,   311,     5,   138,   130,   145,   396,   311,   132,    46,
      47,   137,    53,    82,   140,   319,   144,   129,     5,   323,
     144,   144,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,   477,    21,    22,   339,    71,   341,   146,    72,
     375,    98,     4,   378,     6,   349,    79,   145,   146,   477,
       9,    84,   387,    77,    87,     9,   145,   146,   144,    21,
      22,   365,    21,    22,   145,   146,   401,    21,    22,   404,
       7,    33,    21,    22,   145,   146,   109,   145,   146,   145,
     146,   145,   146,   145,   146,   145,   146,   145,   146,    77,
     145,   146,   396,   529,   145,   146,   145,   146,   433,   144,
     435,   537,     4,     5,     6,     7,   144,   411,   412,   145,
     146,   145,   146,   417,   145,   146,     7,   452,     7,    21,
      22,    23,   145,   146,   145,   146,   145,   146,    11,   144,
       8,    62,     9,    35,    36,    20,   471,   145,    71,   145,
     145,    43,    44,   478,   146,    73,    99,   144,   144,    51,
      52,    85,    54,    85,   131,   144,    58,    59,   132,   463,
       7,    62,    64,    84,     7,    67,   470,    97,   503,     7,
      97,    97,    42,    42,   145,    75,    96,   144,   144,    81,
      82,    27,   146,    92,   488,   137,   144,    89,    85,   144,
      92,   101,    96,    92,   144,   499,   101,    42,   144,    38,
     144,    99,     7,    95,   146,   107,    42,   511,    88,    19,
      42,     7,   136,   108,    93,   117,   145,   110,   120,   144,
     102,   123,   124,   146,     9,   529,   145,   102,   144,    33,
     144,   133,   144,   537,    68,    68,   110,   139,     4,     5,
       6,     7,   144,   145,    10,   100,     7,   198,   368,   145,
     341,   250,    55,   118,    56,    21,    22,   124,   396,   162,
     539,   501,   478,   283,   282,   503,   115,   212,   439,    35,
      36,   212,   166,    -1,    -1,   148,    -1,    43,    44,    -1,
      -1,   199,   153,   171,    -1,    51,    52,    -1,    54,    -1,
      -1,    -1,    -1,    59,    -1,    -1,    -1,    63,    64,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    92,    -1,    -1,     4,
       5,     6,     7,    -1,    -1,    10,    -1,    -1,    -1,    -1,
      -1,   107,    -1,    -1,    -1,    -1,    21,    22,   114,    -1,
      -1,   117,    -1,    -1,   120,    -1,    -1,   123,   124,    -1,
      35,    36,    -1,    -1,    -1,    -1,    -1,   133,    43,    44,
      -1,    -1,    -1,   139,    -1,    -1,    51,    52,   144,    54,
      -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    63,    64,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    92,    -1,    -1,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   107,    -1,    -1,    -1,    -1,    21,    22,    23,
      -1,    -1,   117,    -1,    -1,   120,    -1,    -1,   123,   124,
      -1,    35,    36,    -1,    -1,    -1,    -1,    -1,   133,    43,
      44,    -1,    -1,    -1,   139,    -1,    -1,    51,    52,   144,
      54,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    92,    -1,
      -1,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   107,    -1,    -1,    -1,    -1,    21,    22,
      -1,    -1,    -1,   117,    -1,    -1,   120,    -1,    -1,   123,
     124,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,   133,
      43,    44,    -1,    -1,    -1,   139,    -1,    -1,    51,    52,
     144,    54,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    -1,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,   117,    -1,    -1,   120,    -1,    -1,
     123,   124,    -1,    -1,    -1,    -1,    35,    36,    -1,    -1,
     133,   134,    -1,    -1,    43,    44,   139,    -1,    -1,    -1,
      -1,   144,    51,    52,    -1,    54,    -1,    -1,    -1,    -1,
      59,    -1,    -1,    -1,    -1,    64,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    92,    -1,    -1,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,
      -1,    -1,    -1,    21,    22,   114,    -1,    -1,   117,    -1,
      -1,   120,    -1,    -1,   123,   124,    -1,    35,    36,    -1,
      -1,    -1,    -1,    -1,   133,    43,    44,    -1,    -1,    -1,
     139,    -1,    -1,    51,    52,   144,    54,    -1,    -1,    -1,
      -1,    59,    -1,    -1,    -1,    63,    64,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    92,    -1,    -1,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
      -1,    -1,    -1,    -1,    21,    22,    -1,    -1,    -1,   117,
      -1,    -1,   120,    -1,    -1,   123,   124,    -1,    35,    36,
      -1,    -1,    -1,    -1,    -1,   133,    43,    44,    -1,    -1,
      -1,   139,    -1,    -1,    51,    52,   144,    54,    -1,    -1,
      -1,    -1,    59,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    -1,    -1,    92,    -1,    -1,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     107,    -1,    -1,    -1,    -1,    21,    22,    -1,    -1,    -1,
     117,    -1,    -1,   120,    -1,    -1,   123,   124,    -1,    35,
      36,    -1,    -1,    -1,    -1,    -1,   133,    43,    44,    -1,
      -1,    -1,   139,    -1,    -1,    51,    52,   144,    54,    -1,
      -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,     5,    -1,     7,
      -1,    -1,    -1,    89,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    -1,    35,    36,    -1,    -1,
      -1,   107,    -1,    -1,    -1,    44,    -1,    35,    36,    -1,
      -1,   117,    51,    52,   120,    54,    44,   123,   124,    -1,
      59,    -1,    -1,    51,    52,    -1,    54,   133,    67,    -1,
      -1,    59,    -1,   139,    -1,    -1,    -1,    -1,   144,    67,
      -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    92,    -1,    -1,    -1,   107,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,   107,
      -1,    -1,    -1,    -1,   123,   124,    -1,    -1,    -1,   117,
      -1,    -1,    -1,    -1,   133,   123,   124,    -1,    -1,    -1,
     139,    -1,    -1,    -1,    -1,   133,    -1,    -1,    -1,    -1,
      -1,   139
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,     3,    32,    48,    49,    56,    60,    80,   105,
     114,   130,   137,   140,   149,   150,   151,   152,   153,   154,
     155,   177,   178,   181,   182,   185,   187,   190,   191,   192,
     256,   257,   121,     4,     6,   190,   254,    78,   121,    71,
     121,    83,    28,    58,   193,   254,   188,   189,   204,   254,
       0,   140,   142,    48,    80,   190,    29,   137,   186,    30,
     140,   143,     3,   254,   125,   179,    71,   179,   254,   254,
     254,   254,   254,     5,     7,    21,    22,    23,    35,    36,
      43,    44,    51,    52,    54,    59,    64,    67,    81,    82,
      89,    92,   107,   117,   120,   123,   124,   133,   139,   144,
     158,   194,   195,   196,   198,   230,   231,   232,   233,   234,
     235,   236,   237,   244,   247,   250,   254,   115,   146,    33,
     144,   190,    83,   186,   193,   104,   192,    31,    60,     5,
     118,   119,   137,   180,     5,   180,    95,   144,   135,   224,
     225,   132,   144,   192,     7,     7,   134,   230,   240,   241,
     144,    82,   144,     5,   144,   144,    82,   190,   230,     5,
      71,   197,   146,    21,    22,    33,   251,   254,    23,    24,
     147,   252,    98,    22,   233,    27,   144,   183,   184,   254,
     189,   144,   198,   253,   254,   179,   254,   191,     7,    46,
      47,    46,    47,   144,   180,   254,   156,   157,   254,    10,
      63,   144,   226,   227,   228,   229,   230,   247,   144,   253,
     226,   134,   238,   239,    61,   241,   242,     7,    53,    76,
      90,    91,   113,   138,   245,   245,   230,     7,   145,   145,
     144,   198,   201,   202,   205,   234,   254,   224,   196,   254,
     231,   232,   144,   254,   254,    23,    58,   145,   230,   243,
     146,   224,    11,   145,   146,   180,   192,   156,    45,    70,
     103,   129,   162,   254,   254,   169,   170,   171,   172,   173,
     174,   254,   144,   165,   145,   146,    82,   158,   229,   198,
     226,   230,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    77,   249,    20,   244,   246,   145,
     122,   230,   239,   242,   230,    62,   145,    71,    71,   145,
     201,    33,   203,   204,    72,    79,    87,   109,   200,   146,
     203,    39,   127,   199,    73,   206,    99,   213,   214,   145,
     243,   145,   146,   184,   230,   254,   144,    85,    85,   144,
     145,   146,     5,     7,    28,    65,    94,    95,   126,   144,
     254,   255,   247,   248,   254,   131,   162,   163,   164,   156,
      10,    45,    55,    92,   103,   108,   129,   159,   160,   161,
     145,   227,   228,    17,    18,    19,    77,   230,   144,   198,
     230,    10,    92,   145,   146,   132,   230,   122,    62,   230,
       7,   145,   204,    97,    97,    97,    84,   201,     7,     7,
     203,    42,    75,   207,    42,   145,    96,   215,   145,   230,
     226,   144,   144,   253,   170,   253,   145,   146,    37,    40,
      41,   116,   175,   146,   137,   166,    92,   144,   244,    85,
     254,   159,   230,   144,   198,     9,   243,    92,   244,   144,
     230,   145,    69,   145,   202,   101,   101,   243,   226,    96,
     208,   243,    42,   106,   112,   216,   217,   145,   253,   253,
     145,   145,   247,   144,   176,   162,    38,    99,   167,   226,
     144,     9,   243,   230,   145,   246,     7,    95,    42,    88,
     209,   220,   221,   230,    19,   145,   145,   169,   144,    42,
     145,   254,   230,   145,   145,   145,   226,   220,     7,   136,
     210,   211,   212,   146,    34,    57,   222,     7,    50,   128,
     218,   108,   145,   169,    74,   106,   168,   145,   254,   212,
     221,    93,   223,   102,   110,   102,     9,   254,   145,   144,
      33,    66,    86,     7,    50,   128,   219,   144,   253,   144,
      68,   110,    68,   253,   145,   213,   145,   100,   145,     7
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   148,   149,   149,   149,   149,   149,   149,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   151,   152,
     152,   152,   152,   153,   154,   155,   156,   157,   157,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   159,   159,   159,
     159,   159,   159,   159,   160,   160,   161,   161,   162,   162,
     162,   162,   163,   163,   164,   164,   165,   165,   166,   166,
     167,   167,   168,   168,   169,   169,   170,   170,   170,   170,
     171,   171,   171,   172,   173,   174,   175,   175,   175,   175,
     176,   176,   177,   177,   177,   177,   178,   178,   178,   178,
     179,   179,   179,   180,   180,   181,   182,   183,   183,   184,
     185,   185,   186,   186,   187,   188,   188,   189,   190,   190,
     191,   191,   192,   193,   193,   193,   194,   194,   195,   195,
     196,   196,   196,   197,   198,   199,   199,   199,   200,   200,
     200,   200,   200,   200,   200,   200,   201,   201,   202,   202,
     202,   202,   202,   202,   203,   203,   204,   204,   205,   205,
     206,   206,   207,   207,   208,   208,   209,   209,   210,   210,
     211,   211,   212,   213,   214,   214,   215,   215,   216,   216,
     217,   217,   218,   218,   218,   219,   219,   219,   220,   220,
     221,   222,   222,   222,   223,   223,   223,   224,   224,   225,
     226,   226,   227,   227,   228,   228,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   230,   230,   231,
     231,   232,   232,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   234,   234,   234,   234,   235,   236,   236,
     237,   237,   238,   238,   239,   240,   240,   241,   242,   242,
     243,   243,   244,   244,   244,   244,   244,   244,   244,   244,
     245,   245,   245,   245,   245,   245,   246,   246,   247,   247,
     248,   248,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   250,   251,   251,   252,   252,   252,   253,   253,
     254,   254,   255,   255,   255,   255,   256,   257,   257
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     6,
       6,     6,     6,     9,     9,     3,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     4,     4,     1,     2,     1,
       2,     2,     4,     5,     2,     1,     0,     1,     4,     5,
      10,     4,     3,     1,     0,     1,     0,     3,     0,     5,
       0,     8,     1,     1,     1,     3,     1,     1,     1,     1,
       2,     2,     2,     4,     2,     2,     1,     1,     1,     1,
       0,     3,    10,     7,     4,     5,     5,     4,     4,     5,
       2,     2,     2,     0,     4,     5,     4,     3,     1,     3,
       2,     3,     0,     3,     2,     1,     3,     3,     4,     1,
       3,     1,    10,     0,     1,     1,     1,     1,     1,     3,
       3,     2,     1,     2,     3,     0,     3,     3,     0,     1,
       1,     2,     1,     2,     1,     2,     6,     1,     2,     3,
       2,     2,     1,     3,     1,     2,     1,     4,     1,     3,
       0,     3,     0,     2,     0,     3,     0,     2,     0,     1,
       1,     2,     6,     3,     0,     3,     0,     3,     0,     5,
       1,     1,     2,     2,     2,     2,     2,     2,     1,     3,
       3,     0,     1,     1,     0,     2,     2,     0,     1,     2,
       3,     1,     3,     1,     2,     1,     5,     6,     4,     3,
       3,     3,     2,     3,     5,     4,     6,     3,     1,     3,
       1,     2,     1,     1,     1,     1,     3,     5,     1,     1,
       1,     3,     1,     3,     4,     4,     5,     6,     6,     8,
       5,     4,     1,     2,     4,     1,     2,     4,     0,     2,
       1,     3,     1,     1,     2,     2,     1,     2,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     2,     2,     0
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
      yyerror (&yylloc, yyscanner, parsedStatement, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, yyscanner, parsedStatement); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t yyscanner, quickstep::ParseStatement **parsedStatement)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (yyscanner);
  YYUSE (parsedStatement);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t yyscanner, quickstep::ParseStatement **parsedStatement)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, yyscanner, parsedStatement);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, yyscan_t yyscanner, quickstep::ParseStatement **parsedStatement)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , yyscanner, parsedStatement);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, yyscanner, parsedStatement); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, yyscan_t yyscanner, quickstep::ParseStatement **parsedStatement)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (yyscanner);
  YYUSE (parsedStatement);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 3: /* TOKEN_COMMAND  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 2004 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 4: /* TOKEN_NAME  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 2014 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 5: /* TOKEN_STRING_SINGLE_QUOTED  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 2024 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 6: /* TOKEN_STRING_DOUBLE_QUOTED  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 2034 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 7: /* TOKEN_UNSIGNED_NUMVAL  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).numeric_literal_value_) != nullptr) {
    delete ((*yyvaluep).numeric_literal_value_);
  }
}
#line 2044 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 150: /* sql_statement  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).statement_) != nullptr) {
    delete ((*yyvaluep).statement_);
  }
}
#line 2054 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 151: /* quit_statement  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).quit_statement_) != nullptr) {
    delete ((*yyvaluep).quit_statement_);
  }
}
#line 2064 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 152: /* alter_table_statement  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).statement_) != nullptr) {
    delete ((*yyvaluep).statement_);
  }
}
#line 2074 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 153: /* create_table_statement  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).create_table_statement_) != nullptr) {
    delete ((*yyvaluep).create_table_statement_);
  }
}
#line 2084 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 154: /* create_index_statement  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).statement_) != nullptr) {
    delete ((*yyvaluep).statement_);
  }
}
#line 2094 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 155: /* drop_table_statement  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).drop_table_statement_) != nullptr) {
    delete ((*yyvaluep).drop_table_statement_);
  }
}
#line 2104 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 156: /* column_def  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).attribute_definition_) != nullptr) {
    delete ((*yyvaluep).attribute_definition_);
  }
}
#line 2114 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 157: /* column_def_commalist  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).attribute_definition_list_) != nullptr) {
    delete ((*yyvaluep).attribute_definition_list_);
  }
}
#line 2124 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 158: /* data_type  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).data_type_) != nullptr) {
    delete ((*yyvaluep).data_type_);
  }
}
#line 2134 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 159: /* column_constraint_def  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).column_constraint_) != nullptr) {
    delete ((*yyvaluep).column_constraint_);
  }
}
#line 2144 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 160: /* column_constraint_def_list  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).column_constraint_list_) != nullptr) {
    delete ((*yyvaluep).column_constraint_list_);
  }
}
#line 2154 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 161: /* opt_column_constraint_def_list  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).column_constraint_list_) != nullptr) {
    delete ((*yyvaluep).column_constraint_list_);
  }
}
#line 2164 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 165: /* opt_column_list  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).attribute_list_) != nullptr) {
    delete ((*yyvaluep).attribute_list_);
  }
}
#line 2174 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 166: /* opt_block_properties  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).block_properties_) != nullptr) {
    delete ((*yyvaluep).block_properties_);
  }
}
#line 2184 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 167: /* opt_partition_clause  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).partition_clause_) != nullptr) {
    delete ((*yyvaluep).partition_clause_);
  }
}
#line 2194 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 168: /* partition_type  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 2204 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 169: /* key_value_list  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).key_value_list_) != nullptr) {
    delete ((*yyvaluep).key_value_list_);
  }
}
#line 2214 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 170: /* key_value  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).key_value_) != nullptr) {
    delete ((*yyvaluep).key_value_);
  }
}
#line 2224 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 171: /* key_string_value  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).key_string_value_) != nullptr) {
    delete ((*yyvaluep).key_string_value_);
  }
}
#line 2234 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 172: /* key_string_list  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).key_string_list_) != nullptr) {
    delete ((*yyvaluep).key_string_list_);
  }
}
#line 2244 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 173: /* key_integer_value  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).key_integer_value_) != nullptr) {
    delete ((*yyvaluep).key_integer_value_);
  }
}
#line 2254 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 174: /* key_bool_value  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).key_bool_value_) != nullptr) {
    delete ((*yyvaluep).key_bool_value_);
  }
}
#line 2264 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 175: /* index_type  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 2274 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 176: /* opt_index_properties  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).key_value_list_) != nullptr) {
    delete ((*yyvaluep).key_value_list_);
  }
}
#line 2284 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 177: /* insert_statement  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).insert_statement_) != nullptr) {
    delete ((*yyvaluep).insert_statement_);
  }
}
#line 2294 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 178: /* copy_statement  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).copy_statement_) != nullptr) {
    delete ((*yyvaluep).copy_statement_);
  }
}
#line 2304 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 179: /* copy_to_target  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 2314 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 180: /* opt_copy_params  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).key_value_list_) != nullptr) {
    delete ((*yyvaluep).key_value_list_);
  }
}
#line 2324 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 181: /* update_statement  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).update_statement_) != nullptr) {
    delete ((*yyvaluep).update_statement_);
  }
}
#line 2334 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 182: /* delete_statement  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).delete_statement_) != nullptr) {
    delete ((*yyvaluep).delete_statement_);
  }
}
#line 2344 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 183: /* assignment_list  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).assignment_list_) != nullptr) {
    delete ((*yyvaluep).assignment_list_);
  }
}
#line 2354 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 184: /* assignment_item  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).assignment_) != nullptr) {
    delete ((*yyvaluep).assignment_);
  }
}
#line 2364 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 185: /* set_operation_statement  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).set_operation_statement_) != nullptr) {
    delete ((*yyvaluep).set_operation_statement_);
  }
}
#line 2374 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 186: /* opt_priority_clause  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_priority_clause_) != nullptr) {
    delete ((*yyvaluep).opt_priority_clause_);
  }
}
#line 2384 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 187: /* with_clause  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).with_list_) != nullptr) {
    delete ((*yyvaluep).with_list_);
  }
}
#line 2394 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 188: /* with_list  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).with_list_) != nullptr) {
    delete ((*yyvaluep).with_list_);
  }
}
#line 2404 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 189: /* with_list_element  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).with_list_element_) != nullptr) {
    delete ((*yyvaluep).with_list_element_);
  }
}
#line 2414 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 190: /* set_operation_union  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).set_operation_) != nullptr) {
    delete ((*yyvaluep).set_operation_);
  }
}
#line 2424 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 191: /* set_operation_intersect  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).set_operation_) != nullptr) {
    delete ((*yyvaluep).set_operation_);
  }
}
#line 2434 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 192: /* select_query  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).select_query_) != nullptr) {
    delete ((*yyvaluep).select_query_);
  }
}
#line 2444 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 193: /* opt_all_distinct  */
#line 625 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 2450 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 194: /* selection  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).selection_) != nullptr) {
    delete ((*yyvaluep).selection_);
  }
}
#line 2460 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 195: /* selection_item_commalist  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).selection_list_) != nullptr) {
    delete ((*yyvaluep).selection_list_);
  }
}
#line 2470 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 196: /* selection_item  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).selection_item_) != nullptr) {
    delete ((*yyvaluep).selection_item_);
  }
}
#line 2480 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 197: /* from_clause  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_reference_list_) != nullptr) {
    delete ((*yyvaluep).table_reference_list_);
  }
}
#line 2490 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 198: /* subquery_expression  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).subquery_expression_) != nullptr) {
    delete ((*yyvaluep).subquery_expression_);
  }
}
#line 2500 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 199: /* opt_sample_clause  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_sample_clause_) != nullptr) {
    delete ((*yyvaluep).opt_sample_clause_);
  }
}
#line 2510 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 200: /* join_type  */
#line 629 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 2516 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 201: /* joined_table_reference  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_reference_) != nullptr) {
    delete ((*yyvaluep).table_reference_);
  }
}
#line 2526 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 202: /* table_reference  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_reference_) != nullptr) {
    delete ((*yyvaluep).table_reference_);
  }
}
#line 2536 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 203: /* table_reference_signature  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_reference_signature_) != nullptr) {
    delete ((*yyvaluep).table_reference_signature_);
  }
}
#line 2546 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 204: /* table_reference_signature_primary  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_reference_signature_) != nullptr) {
    delete ((*yyvaluep).table_reference_signature_);
  }
}
#line 2556 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 205: /* joined_table_reference_commalist  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_reference_list_) != nullptr) {
    delete ((*yyvaluep).table_reference_list_);
  }
}
#line 2566 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 206: /* opt_group_by_clause  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_group_by_clause_) != nullptr) {
    delete ((*yyvaluep).opt_group_by_clause_);
  }
}
#line 2576 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 207: /* opt_having_clause  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_having_clause_) != nullptr) {
    delete ((*yyvaluep).opt_having_clause_);
  }
}
#line 2586 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 208: /* opt_order_by_clause  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_order_by_clause_) != nullptr) {
    delete ((*yyvaluep).opt_order_by_clause_);
  }
}
#line 2596 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 209: /* opt_limit_clause  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_limit_clause_) != nullptr) {
    delete ((*yyvaluep).opt_limit_clause_);
  }
}
#line 2606 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 210: /* opt_window_clause  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_window_clause_) != nullptr) {
    delete ((*yyvaluep).opt_window_clause_);
  }
}
#line 2616 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 211: /* window_declaration_list  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_window_clause_) != nullptr) {
    delete ((*yyvaluep).opt_window_clause_);
  }
}
#line 2626 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 212: /* window_declaration  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).window_definition_) != nullptr) {
    delete ((*yyvaluep).window_definition_);
  }
}
#line 2636 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 213: /* window_definition  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).window_definition_) != nullptr) {
    delete ((*yyvaluep).window_definition_);
  }
}
#line 2646 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 214: /* opt_window_partition  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).window_partition_by_list_) != nullptr) {
    delete ((*yyvaluep).window_partition_by_list_);
  }
}
#line 2656 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 215: /* opt_window_order  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).window_order_by_list_) != nullptr) {
    delete ((*yyvaluep).window_order_by_list_);
  }
}
#line 2666 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 216: /* opt_window_frame  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).window_frame_info_) != nullptr) {
    delete ((*yyvaluep).window_frame_info_);
  }
}
#line 2676 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 217: /* frame_mode  */
#line 625 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 2682 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 218: /* frame_preceding  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).numeric_literal_value_) != nullptr) {
    delete ((*yyvaluep).numeric_literal_value_);
  }
}
#line 2692 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 219: /* frame_following  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).numeric_literal_value_) != nullptr) {
    delete ((*yyvaluep).numeric_literal_value_);
  }
}
#line 2702 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 220: /* order_commalist  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).order_commalist_) != nullptr) {
    delete ((*yyvaluep).order_commalist_);
  }
}
#line 2712 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 221: /* order_item  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).order_item_) != nullptr) {
    delete ((*yyvaluep).order_item_);
  }
}
#line 2722 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 222: /* opt_order_direction  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).order_direction_) != nullptr) {
    delete ((*yyvaluep).order_direction_);
  }
}
#line 2732 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 223: /* opt_nulls_first  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).order_direction_) != nullptr) {
    delete ((*yyvaluep).order_direction_);
  }
}
#line 2742 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 224: /* opt_where_clause  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2752 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 225: /* where_clause  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2762 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 226: /* or_expression  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2772 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 227: /* and_expression  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2782 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 228: /* not_expression  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2792 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 229: /* predicate_expression_base  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2802 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 230: /* add_expression  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2812 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 231: /* multiply_expression  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2822 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 232: /* unary_expression  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2832 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 233: /* expression_base  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2842 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 234: /* function_call  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).function_call_) != nullptr) {
    delete ((*yyvaluep).function_call_);
  }
}
#line 2852 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 235: /* extract_function  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2862 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 236: /* substr_function  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2872 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 237: /* case_expression  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2882 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 238: /* simple_when_clause_list  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).simple_when_clause_list_) != nullptr) {
    delete ((*yyvaluep).simple_when_clause_list_);
  }
}
#line 2892 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 239: /* simple_when_clause  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).simple_when_clause_) != nullptr) {
    delete ((*yyvaluep).simple_when_clause_);
  }
}
#line 2902 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 240: /* searched_when_clause_list  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).searched_when_clause_list_) != nullptr) {
    delete ((*yyvaluep).searched_when_clause_list_);
  }
}
#line 2912 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 241: /* searched_when_clause  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).searched_when_clause_) != nullptr) {
    delete ((*yyvaluep).searched_when_clause_);
  }
}
#line 2922 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 242: /* opt_else_clause  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2932 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 243: /* expression_list  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_list_) != nullptr) {
    delete ((*yyvaluep).expression_list_);
  }
}
#line 2942 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 244: /* literal_value  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).literal_value_) != nullptr) {
    delete ((*yyvaluep).literal_value_);
  }
}
#line 2952 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 245: /* datetime_unit  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 2962 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 246: /* literal_value_commalist  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).literal_value_list_) != nullptr) {
    delete ((*yyvaluep).literal_value_list_);
  }
}
#line 2972 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 247: /* attribute_ref  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).attribute_) != nullptr) {
    delete ((*yyvaluep).attribute_);
  }
}
#line 2982 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 248: /* attribute_ref_list  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).attribute_list_) != nullptr) {
    delete ((*yyvaluep).attribute_list_);
  }
}
#line 2992 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 249: /* comparison_operation  */
#line 626 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 2998 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 250: /* unary_operation  */
#line 627 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 3004 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 251: /* add_operation  */
#line 628 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 3010 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 252: /* multiply_operation  */
#line 628 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 3016 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 253: /* name_commalist  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_list_) != nullptr) {
    delete ((*yyvaluep).string_list_);
  }
}
#line 3026 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 254: /* any_name  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 3036 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 255: /* boolean_value  */
#line 625 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 3042 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 256: /* command  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).command_) != nullptr) {
    delete ((*yyvaluep).command_);
  }
}
#line 3052 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 257: /* command_argument_list  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).command_argument_list_) != nullptr) {
    delete ((*yyvaluep).command_argument_list_);
  }
}
#line 3062 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t yyscanner, quickstep::ParseStatement **parsedStatement)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yychar = yylex (&yylval, &yylloc, yyscanner);
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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 640 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    *parsedStatement = (yyvsp[-1].statement_);
    YYACCEPT;
  }
#line 3359 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 3:
#line 644 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    *parsedStatement = (yyvsp[-1].statement_);
    YYACCEPT;
  }
#line 3368 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 4:
#line 648 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    *parsedStatement = (yyvsp[-1].command_);
    YYACCEPT;
  }
#line 3377 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 5:
#line 652 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    *parsedStatement = (yyvsp[-1].command_);
    YYACCEPT;
  }
#line 3386 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 6:
#line 656 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    YYABORT;
  }
#line 3394 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 7:
#line 659 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    // Regular yyparse() return codes are non-negative, so use a negative one here.
    return -1;
  }
#line 3403 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 8:
#line 666 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.statement_) = (yyvsp[0].statement_);
  }
#line 3411 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 9:
#line 669 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.statement_) = (yyvsp[0].copy_statement_);
  }
#line 3419 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 10:
#line 672 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.statement_) = (yyvsp[0].create_table_statement_);
  }
#line 3427 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 11:
#line 675 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.statement_) = (yyvsp[0].statement_);
  }
#line 3435 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 12:
#line 678 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.statement_) = (yyvsp[0].delete_statement_);
  }
#line 3443 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 13:
#line 681 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.statement_) = (yyvsp[0].drop_table_statement_);
  }
#line 3451 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 14:
#line 684 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.statement_) = (yyvsp[0].insert_statement_);
  }
#line 3459 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 15:
#line 687 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.statement_) = (yyvsp[0].quit_statement_);
  }
#line 3467 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 16:
#line 690 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.statement_) = (yyvsp[0].set_operation_statement_);
  }
#line 3475 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 17:
#line 693 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.statement_) = (yyvsp[0].update_statement_);
  }
#line 3483 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 18:
#line 699 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.quit_statement_) = new quickstep::ParseStatementQuit((yylsp[0]).first_line, (yylsp[0]).first_column);
  }
#line 3491 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 19:
#line 705 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-3].string_value_);
    delete (yyvsp[0].attribute_definition_);
    (yyval.statement_) = nullptr;
    NotSupported(&(yylsp[-5]), yyscanner, "ALTER statements");
    YYERROR;
  }
#line 3503 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 20:
#line 712 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-3].string_value_);
    (yyval.statement_) = nullptr;
    NotSupported(&(yylsp[-5]), yyscanner, "ALTER statements");
    YYERROR;
  }
#line 3514 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 21:
#line 718 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-3].string_value_);
    delete (yyvsp[0].string_value_);
    (yyval.statement_) = nullptr;
    NotSupported(&(yylsp[-5]), yyscanner, "ALTER statements");
    YYERROR;
  }
#line 3526 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 22:
#line 725 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-3].string_value_);
    delete (yyvsp[0].string_value_);
    (yyval.statement_) = nullptr;
    NotSupported(&(yylsp[-5]), yyscanner, "ALTER statements");
    YYERROR;
  }
#line 3538 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 23:
#line 734 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.create_table_statement_) = new quickstep::ParseStatementCreateTable((yylsp[-8]).first_line, (yylsp[-8]).first_column, (yyvsp[-6].string_value_), (yyvsp[-4].attribute_definition_list_), (yyvsp[-1].block_properties_), (yyvsp[0].partition_clause_));
  }
#line 3546 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 24:
#line 739 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    if ((yyvsp[0].key_value_list_)) {
      (yyval.statement_) = new quickstep::ParseStatementCreateIndex((yylsp[-8]).first_line, (yylsp[-8]).first_column, (yyvsp[-6].string_value_), (yyvsp[-4].string_value_), (yyvsp[-3].attribute_list_), (yyvsp[-1].string_value_), (yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].key_value_list_));
    } else {
      (yyval.statement_) = new quickstep::ParseStatementCreateIndex((yylsp[-8]).first_line, (yylsp[-8]).first_column, (yyvsp[-6].string_value_), (yyvsp[-4].string_value_), (yyvsp[-3].attribute_list_), (yyvsp[-1].string_value_));
    }
  }
#line 3558 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 25:
#line 748 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.drop_table_statement_) = new quickstep::ParseStatementDropTable((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[0].string_value_));
  }
#line 3566 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 26:
#line 753 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.attribute_definition_) = new quickstep::ParseAttributeDefinition((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-2].string_value_), (yyvsp[-1].data_type_), (yyvsp[0].column_constraint_list_));
  }
#line 3574 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 27:
#line 758 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.attribute_definition_list_) = new quickstep::PtrList<quickstep::ParseAttributeDefinition>();
    (yyval.attribute_definition_list_)->push_back((yyvsp[0].attribute_definition_));
  }
#line 3583 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 28:
#line 762 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.attribute_definition_list_) = (yyvsp[-2].attribute_definition_list_);
    (yyval.attribute_definition_list_)->push_back((yyvsp[0].attribute_definition_));
  }
#line 3592 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 29:
#line 768 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = nullptr;
    NotSupported(&(yylsp[0]), yyscanner, "BIT data type");
    YYERROR;
  }
#line 3602 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 30:
#line 773 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDate));
  }
#line 3610 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 31:
#line 776 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDatetime));
  }
#line 3618 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 32:
#line 779 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = nullptr;
    NotSupported(&(yylsp[0]), yyscanner, "TIME data type");
    YYERROR;
  }
#line 3628 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 33:
#line 784 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDatetime));
  }
#line 3636 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 34:
#line 787 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDouble));
  }
#line 3644 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 35:
#line 790 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDouble));
  }
#line 3652 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 36:
#line 793 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDouble));
  }
#line 3660 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 37:
#line 796 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kFloat));
  }
#line 3668 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 38:
#line 799 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kInt));
  }
#line 3676 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 39:
#line 802 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kInt));
  }
#line 3684 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 40:
#line 805 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kLong));
  }
#line 3692 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 41:
#line 808 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kLong));
  }
#line 3700 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 42:
#line 811 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    /**
     * NOTE(chasseur): This pattern exhibits a shift/reduce conflict with the
     * TOKEN_INTERVAL case in 'literal_value'. Bison prefers to shift rather
     * than reduce, so the case in 'literal_value' has precedence over this.
     **/
    (yyval.data_type_) = nullptr;
    quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr,
        "INTERVAL is ambiguous as a column type. Specify either DATETIME INTERVAL "
        "or YEARMONTH INTERVAL");
    YYERROR;
  }
#line 3717 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 43:
#line 823 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDatetimeInterval));
  }
#line 3725 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 44:
#line 826 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kYearMonthInterval));
  }
#line 3733 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 45:
#line 829 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    if ((yyvsp[-1].numeric_literal_value_)->float_like()) {
      delete (yyvsp[-1].numeric_literal_value_);
      (yyval.data_type_) = NULL;
      quickstep_yyerror(&(yylsp[-1]), yyscanner, nullptr, "Non-integer length supplied for CHAR type");
      YYERROR;
    } else {
      if ((yyvsp[-1].numeric_literal_value_)->long_value() <= 0) {
        delete (yyvsp[-1].numeric_literal_value_);
        (yyval.data_type_) = NULL;
        quickstep_yyerror(&(yylsp[-1]), yyscanner, nullptr, "Length for CHAR type must be at least 1");
        YYERROR;
      } else {
        (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kChar, (yyvsp[-1].numeric_literal_value_)->long_value(), false));
        delete (yyvsp[-1].numeric_literal_value_);
      }
    }
  }
#line 3756 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 46:
#line 847 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    if ((yyvsp[-1].numeric_literal_value_)->float_like()) {
      delete (yyvsp[-1].numeric_literal_value_);
      (yyval.data_type_) = NULL;
      quickstep_yyerror(&(yylsp[-1]), yyscanner, nullptr, "Non-integer length supplied for VARCHAR type");
      YYERROR;
    } else {
      if ((yyvsp[-1].numeric_literal_value_)->long_value() < 0) {
        delete (yyvsp[-1].numeric_literal_value_);
        (yyval.data_type_) = NULL;
        quickstep_yyerror(&(yylsp[-1]), yyscanner, nullptr, "Negative length supplied for VARCHAR type");
        YYERROR;
      } else {
        (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kVarChar, (yyvsp[-1].numeric_literal_value_)->long_value(), false));
        delete (yyvsp[-1].numeric_literal_value_);
      }
    }
  }
#line 3779 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 47:
#line 867 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.column_constraint_) = new quickstep::ParseColumnConstraintNull((yylsp[0]).first_line, (yylsp[0]).first_column);
  }
#line 3787 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 48:
#line 870 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.column_constraint_) = new quickstep::ParseColumnConstraintNotNull((yylsp[-1]).first_line, (yylsp[-1]).first_column);
  }
#line 3795 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 49:
#line 873 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.column_constraint_) = nullptr;
    NotSupported(&(yylsp[0]), yyscanner, "Column Constraints (UNIQUE)");
    YYERROR;
  }
#line 3805 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 50:
#line 878 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.column_constraint_) = nullptr;
    NotSupported(&(yylsp[-1]), yyscanner, "Column Constraints (PRIMARY KEY)");
    YYERROR;
  }
#line 3815 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 51:
#line 883 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.column_constraint_) = nullptr;
    delete (yyvsp[0].literal_value_);
    NotSupported(&(yylsp[-1]), yyscanner, "Column Constraints (DEFAULT)");
    YYERROR;
  }
#line 3826 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 52:
#line 889 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.column_constraint_) = nullptr;
    delete (yyvsp[-1].predicate_);
    NotSupported(&(yylsp[-3]), yyscanner, "Column Constraints (CHECK)");
    YYERROR;
  }
#line 3837 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 53:
#line 895 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.column_constraint_) = nullptr;
    delete (yyvsp[-3].string_value_);
    delete (yyvsp[-1].string_value_);
    NotSupported(&(yylsp[-4]), yyscanner, "Foreign Keys");
    YYERROR;
  }
#line 3849 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 54:
#line 904 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.column_constraint_list_) = (yyvsp[-1].column_constraint_list_);
    (yyval.column_constraint_list_)->push_back((yyvsp[0].column_constraint_));
  }
#line 3858 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 55:
#line 908 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.column_constraint_list_) = new quickstep::PtrList<quickstep::ParseColumnConstraint>();
    (yyval.column_constraint_list_)->push_back((yyvsp[0].column_constraint_));
  }
#line 3867 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 56:
#line 914 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.column_constraint_list_) = nullptr;
  }
#line 3875 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 57:
#line 917 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.column_constraint_list_) = (yyvsp[0].column_constraint_list_);
  }
#line 3883 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 58:
#line 922 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-1].string_list_);
    NotSupported(&(yylsp[-3]), yyscanner, "Table Constraints (UNIQUE)");
    YYERROR;
  }
#line 3893 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 59:
#line 927 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-1].string_list_);
    NotSupported(&(yylsp[-4]), yyscanner, "Table Constraints (PRIMARY KEY)");
    YYERROR;
  }
#line 3903 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 60:
#line 932 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-6].string_list_);
    delete (yyvsp[-3].string_value_);
    delete (yyvsp[-1].string_list_);
    NotSupported(&(yylsp[-9]), yyscanner, "Table Constraints (FOREIGN KEY)");
    YYERROR;
  }
#line 3915 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 61:
#line 939 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-1].predicate_);
    NotSupported(&(yylsp[-3]), yyscanner, "Table Constraints (CHECK)");
    YYERROR;
  }
#line 3925 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 62:
#line 946 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    NotSupported(&(yylsp[-2]), yyscanner, "Table Constraints");
    YYERROR;
  }
#line 3934 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 63:
#line 950 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    NotSupported(&(yylsp[0]), yyscanner, "Table Constraints");
    YYERROR;
  }
#line 3943 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 64:
#line 956 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    /* $$ = nullptr; */
  }
#line 3951 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 65:
#line 959 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    /* $$ = $1; */
  }
#line 3959 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 66:
#line 964 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.attribute_list_) = nullptr;
  }
#line 3967 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 67:
#line 967 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.attribute_list_) = (yyvsp[-1].attribute_list_);
  }
#line 3975 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 68:
#line 972 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.block_properties_) = nullptr;
  }
#line 3983 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 69:
#line 975 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.block_properties_) = new quickstep::ParseBlockProperties((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-1].key_value_list_));
  }
#line 3991 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 70:
#line 980 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.partition_clause_) = nullptr;
  }
#line 3999 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 71:
#line 983 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    if ((yyvsp[0].numeric_literal_value_)->float_like()) {
      delete (yyvsp[0].numeric_literal_value_);
      (yyval.partition_clause_) = NULL;
      quickstep_yyerror(&(yylsp[0]), yyscanner, NULL, "NUMBER OF PARTITIONS must be an integer");
      YYERROR;
    } else {
      if ((yyvsp[0].numeric_literal_value_)->long_value() <= 0 || (yyvsp[0].numeric_literal_value_)->long_value() > 64) {
        delete (yyvsp[0].numeric_literal_value_);
        (yyval.partition_clause_) = NULL;
        quickstep_yyerror(&(yylsp[0]), yyscanner, NULL, "NUMBER OF PARITIONS must be between 1 and 64");
        YYERROR;
      } else {
        (yyval.partition_clause_) = new quickstep::ParsePartitionClause((yylsp[-7]).first_line, (yylsp[-7]).first_column, (yyvsp[-5].string_value_), (yyvsp[-3].string_list_), (yyvsp[0].numeric_literal_value_));
      }
    }
  }
#line 4021 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 72:
#line 1002 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column, quickstep::kHashPartitionType);
  }
#line 4029 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 73:
#line 1005 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column, quickstep::kRangePartitionType);
  }
#line 4037 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 74:
#line 1010 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.key_value_list_) = new quickstep::PtrList<quickstep::ParseKeyValue>();
    (yyval.key_value_list_)->push_back((yyvsp[0].key_value_));
  }
#line 4046 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 75:
#line 1014 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.key_value_list_) = (yyvsp[-2].key_value_list_);
    (yyval.key_value_list_)->push_back((yyvsp[0].key_value_));
  }
#line 4055 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 76:
#line 1020 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.key_value_) = (yyvsp[0].key_string_value_);
  }
#line 4063 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 77:
#line 1023 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.key_value_) = (yyvsp[0].key_string_list_);
  }
#line 4071 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 78:
#line 1026 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.key_value_) = (yyvsp[0].key_integer_value_);
  }
#line 4079 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 79:
#line 1029 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.key_value_) = (yyvsp[0].key_bool_value_);
  }
#line 4087 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 80:
#line 1034 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.key_string_value_) = new quickstep::ParseKeyStringValue((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].string_value_));
  }
#line 4095 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 81:
#line 1037 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.key_string_value_) = new quickstep::ParseKeyStringValue((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].string_value_));
  }
#line 4103 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 82:
#line 1040 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    // This is a special case to handle the COMPRESS ALL option of the BLOCK PROPERTIES.
    (yyval.key_string_value_) = new quickstep::ParseKeyStringValue((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string_value_),
        new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column, "ALL"));
  }
#line 4113 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 83:
#line 1047 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.key_string_list_) = new quickstep::ParseKeyStringList((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-3].string_value_), (yyvsp[-1].string_list_));
  }
#line 4121 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 84:
#line 1052 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    if ((yyvsp[0].numeric_literal_value_)->float_like()) {
      delete (yyvsp[0].numeric_literal_value_);
      (yyval.key_integer_value_) = nullptr;
      quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "Value must be an integer");
      YYERROR;
    }
    (yyval.key_integer_value_) = new quickstep::ParseKeyIntegerValue((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].numeric_literal_value_));
  }
#line 4135 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 85:
#line 1063 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.key_bool_value_) = new quickstep::ParseKeyBoolValue((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].boolean_value_));
  }
#line 4143 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 86:
#line 1068 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    // Defaults to BitWeavingV, but IndexProperties can change this to H.
    (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column,
           std::to_string(quickstep::IndexSubBlockType::kBitWeavingV));
  }
#line 4153 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 87:
#line 1073 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column,
           std::to_string(quickstep::IndexSubBlockType::kBloomFilter));
  }
#line 4162 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 88:
#line 1077 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column,
           std::to_string(quickstep::IndexSubBlockType::kCSBTree));
  }
#line 4171 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 89:
#line 1081 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column,
           std::to_string(quickstep::IndexSubBlockType::kSMA));
  }
#line 4180 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 90:
#line 1087 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.key_value_list_) = nullptr;
  }
#line 4188 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 91:
#line 1090 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.key_value_list_) = (yyvsp[-1].key_value_list_);
  }
#line 4196 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 92:
#line 1096 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-7].string_value_);
    delete (yyvsp[-5].string_list_);
    delete (yyvsp[-1].literal_value_list_);
    (yyval.insert_statement_) = nullptr;
    NotSupported(&(yylsp[-6]), yyscanner, "list of column names in INSERT statement");
    YYERROR;
  }
#line 4209 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 93:
#line 1104 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.insert_statement_) = new quickstep::ParseStatementInsertTuple((yylsp[-6]).first_line, (yylsp[-6]).first_column, (yyvsp[-4].string_value_), (yyvsp[-1].literal_value_list_));
  }
#line 4217 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 94:
#line 1107 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.insert_statement_) = new quickstep::ParseStatementInsertSelection((yylsp[-3]).first_line, (yylsp[-2]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].select_query_), nullptr);
  }
#line 4225 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 95:
#line 1110 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.insert_statement_) = new quickstep::ParseStatementInsertSelection((yylsp[-4]).first_line, (yylsp[-3]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].select_query_), (yyvsp[-4].with_list_));
  }
#line 4233 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 96:
#line 1116 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.copy_statement_) = new quickstep::ParseStatementCopy((yylsp[-4]).first_line, (yylsp[-4]).first_column,
                                           quickstep::ParseStatementCopy::kFrom,
                                           (yyvsp[-3].string_value_), (yyvsp[-1].string_value_), (yyvsp[0].key_value_list_));
  }
#line 4243 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 97:
#line 1121 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.copy_statement_) = new quickstep::ParseStatementCopy((yylsp[-3]).first_line, (yylsp[-3]).first_column,
                                           quickstep::ParseStatementCopy::kTo,
                                           (yyvsp[-2].string_value_), (yyvsp[-1].string_value_), (yyvsp[0].key_value_list_));
  }
#line 4253 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 98:
#line 1126 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.copy_statement_) = new quickstep::ParseStatementCopy((yylsp[-3]).first_line, (yylsp[-3]).first_column,
                                           (yyvsp[-2].set_operation_), nullptr, (yyvsp[-1].string_value_), (yyvsp[0].key_value_list_));
  }
#line 4262 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 99:
#line 1130 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.copy_statement_) = new quickstep::ParseStatementCopy((yylsp[-4]).first_line, (yylsp[-4]).first_column,
                                           (yyvsp[-2].set_operation_), (yyvsp[-4].with_list_), (yyvsp[-1].string_value_), (yyvsp[0].key_value_list_));
  }
#line 4271 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 100:
#line 1136 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.string_value_) = new quickstep::ParseString((yyvsp[0].string_value_)->line_number(), (yyvsp[0].string_value_)->column_number(), "@" + (yyvsp[0].string_value_)->value());
    delete (yyvsp[0].string_value_);
  }
#line 4280 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 101:
#line 1140 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column, "$stdout");
  }
#line 4288 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 102:
#line 1143 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column, "$stderr");
  }
#line 4296 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 103:
#line 1148 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.key_value_list_) = nullptr;
  }
#line 4304 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 104:
#line 1151 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.key_value_list_) = (yyvsp[-1].key_value_list_);
  }
#line 4312 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 105:
#line 1156 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.update_statement_) = new quickstep::ParseStatementUpdate((yylsp[-4]).first_line, (yylsp[-4]).first_column, (yyvsp[-3].string_value_), (yyvsp[-1].assignment_list_), (yyvsp[0].predicate_));
  }
#line 4320 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 106:
#line 1161 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.delete_statement_) = new quickstep::ParseStatementDelete((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].predicate_));
  }
#line 4328 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 107:
#line 1166 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.assignment_list_) = (yyvsp[-2].assignment_list_);
    (yyval.assignment_list_)->push_back((yyvsp[0].assignment_));
  }
#line 4337 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 108:
#line 1170 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.assignment_list_) = new quickstep::PtrList<quickstep::ParseAssignment>();
    (yyval.assignment_list_)->push_back((yyvsp[0].assignment_));
  }
#line 4346 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 109:
#line 1176 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.assignment_) = new quickstep::ParseAssignment((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-2].string_value_), (yyvsp[0].expression_));
  }
#line 4354 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 110:
#line 1185 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.set_operation_statement_) = new quickstep::ParseStatementSetOperation((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].set_operation_), nullptr, (yyvsp[0].opt_priority_clause_));
  }
#line 4362 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 111:
#line 1188 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.set_operation_statement_) = new quickstep::ParseStatementSetOperation((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-1].set_operation_), (yyvsp[-2].with_list_), (yyvsp[0].opt_priority_clause_));
  }
#line 4370 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 112:
#line 1193 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.opt_priority_clause_) = nullptr;
  }
#line 4378 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 113:
#line 1196 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    if ((yyvsp[0].numeric_literal_value_)->float_like()) {
      delete (yyvsp[0].numeric_literal_value_);
      (yyval.opt_priority_clause_) = nullptr;
      quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "PRIORITY value must be an integer");
      YYERROR;
    } else {
      if ((yyvsp[0].numeric_literal_value_)->long_value() <= 0) {
        delete (yyvsp[0].numeric_literal_value_);
        (yyval.opt_priority_clause_) = nullptr;
        quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "PRIORITY value must be positive");
        YYERROR;
      } else {
        (yyval.opt_priority_clause_) = new quickstep::ParsePriority((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[0].numeric_literal_value_));
      }
    }
  }
#line 4400 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 114:
#line 1215 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.with_list_) = (yyvsp[0].with_list_);
  }
#line 4408 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 115:
#line 1220 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.with_list_) = new quickstep::PtrVector<quickstep::ParseSubqueryTableReference>();
    (yyval.with_list_)->push_back((yyvsp[0].with_list_element_));
  }
#line 4417 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 116:
#line 1224 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.with_list_) = (yyvsp[-2].with_list_);
    (yyval.with_list_)->push_back((yyvsp[0].with_list_element_));
  }
#line 4426 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 117:
#line 1230 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.with_list_element_) = new quickstep::ParseSubqueryTableReference((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[0].subquery_expression_));
    (yyval.with_list_element_)->set_table_reference_signature((yyvsp[-2].table_reference_signature_));
  }
#line 4435 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 118:
#line 1236 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    if ((yyvsp[-1].boolean_value_)) {
      (yyval.set_operation_) = new quickstep::ParseSetOperation((yylsp[-3]).first_line, (yylsp[-3]).first_column, quickstep::ParseSetOperation::kUnion);
    } else {
      (yyval.set_operation_) = new quickstep::ParseSetOperation((yylsp[-3]).first_line, (yylsp[-3]).first_column, quickstep::ParseSetOperation::kUnionAll);
    }
    (yyval.set_operation_)->addOperand((yyvsp[-3].set_operation_));
    (yyval.set_operation_)->addOperand((yyvsp[0].set_operation_));
  }
#line 4449 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 119:
#line 1245 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.set_operation_) = (yyvsp[0].set_operation_);
  }
#line 4457 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 120:
#line 1250 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.set_operation_) = new quickstep::ParseSetOperation((yylsp[-2]).first_line, (yylsp[-2]).first_column, quickstep::ParseSetOperation::kIntersect);
    quickstep::ParseSetOperation *op = new quickstep::ParseSetOperation(
        (yylsp[0]).first_line, (yylsp[0]).first_column, quickstep::ParseSetOperation::kSelect);
    op->addOperand((yyvsp[0].select_query_));
    (yyval.set_operation_)->addOperand((yyvsp[-2].set_operation_));
    (yyval.set_operation_)->addOperand(op);
  }
#line 4470 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 121:
#line 1258 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.set_operation_) = new quickstep::ParseSetOperation((yylsp[0]).first_line, (yylsp[0]).first_column, quickstep::ParseSetOperation::kSelect);
    (yyval.set_operation_)->addOperand((yyvsp[0].select_query_));
  }
#line 4479 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 122:
#line 1265 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.select_query_) = new quickstep::ParseSelect((yylsp[-9]).first_line, (yylsp[-9]).first_column, (yyvsp[-7].selection_), (yyvsp[-6].table_reference_list_), (yyvsp[-5].predicate_), (yyvsp[-4].opt_group_by_clause_), (yyvsp[-3].opt_having_clause_), (yyvsp[-2].opt_order_by_clause_), (yyvsp[-1].opt_limit_clause_), (yyvsp[0].opt_window_clause_));
  }
#line 4487 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 123:
#line 1270 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.boolean_value_) = true;  // Distinct
  }
#line 4495 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 124:
#line 1273 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.boolean_value_) = false;  // All
  }
#line 4503 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 125:
#line 1276 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.boolean_value_) = true;  // Distinct
  }
#line 4511 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 126:
#line 1281 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.selection_) = new quickstep::ParseSelectionStar((yylsp[0]).first_line, (yylsp[0]).first_column);
  }
#line 4519 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 127:
#line 1284 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.selection_) = (yyvsp[0].selection_list_);
  }
#line 4527 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 128:
#line 1289 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.selection_list_) = new quickstep::ParseSelectionList((yylsp[0]).first_line, (yylsp[0]).first_column);
    (yyval.selection_list_)->add((yyvsp[0].selection_item_));
  }
#line 4536 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 129:
#line 1293 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.selection_list_) = (yyvsp[-2].selection_list_);
    (yyval.selection_list_)->add((yyvsp[0].selection_item_));
  }
#line 4545 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 130:
#line 1299 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.selection_item_) = new quickstep::ParseSelectionItem((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-2].expression_), (yyvsp[0].string_value_));
  }
#line 4553 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 131:
#line 1302 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.selection_item_) = new quickstep::ParseSelectionItem((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].expression_), (yyvsp[0].string_value_));
  }
#line 4561 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 132:
#line 1305 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.selection_item_) = new quickstep::ParseSelectionItem((yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].expression_));
  }
#line 4569 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 133:
#line 1310 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_list_) = (yyvsp[0].table_reference_list_);
  }
#line 4577 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 134:
#line 1315 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.subquery_expression_) = new quickstep::ParseSubqueryExpression((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-1].set_operation_));
  }
#line 4585 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 135:
#line 1320 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.opt_sample_clause_) = NULL;
  }
#line 4593 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 136:
#line 1323 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.opt_sample_clause_) = new quickstep::ParseSample((yylsp[-2]).first_line, (yylsp[-2]).first_column, true, (yyvsp[-1].numeric_literal_value_));
  }
#line 4601 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 137:
#line 1326 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.opt_sample_clause_) = new quickstep::ParseSample((yylsp[-2]).first_line, (yylsp[-2]).first_column, false, (yyvsp[-1].numeric_literal_value_));
  }
#line 4609 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 138:
#line 1331 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.join_type_) = quickstep::ParseJoinedTableReference::JoinType::kInnerJoin;
  }
#line 4617 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 139:
#line 1334 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.join_type_) = quickstep::ParseJoinedTableReference::JoinType::kInnerJoin;
  }
#line 4625 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 140:
#line 1337 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.join_type_) = quickstep::ParseJoinedTableReference::JoinType::kLeftOuterJoin;
  }
#line 4633 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 141:
#line 1340 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.join_type_) = quickstep::ParseJoinedTableReference::JoinType::kLeftOuterJoin;
  }
#line 4641 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 142:
#line 1343 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.join_type_) = quickstep::ParseJoinedTableReference::JoinType::kRightOuterJoin;
  }
#line 4649 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 143:
#line 1346 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.join_type_) = quickstep::ParseJoinedTableReference::JoinType::kRightOuterJoin;
  }
#line 4657 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 144:
#line 1349 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.join_type_) = quickstep::ParseJoinedTableReference::JoinType::kFullOuterJoin;
  }
#line 4665 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 145:
#line 1352 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.join_type_) = quickstep::ParseJoinedTableReference::JoinType::kFullOuterJoin;
  }
#line 4673 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 146:
#line 1357 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_) = new quickstep::ParseJoinedTableReference((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-4].join_type_), (yyvsp[-5].table_reference_), (yyvsp[-2].table_reference_), (yyvsp[0].predicate_));
  }
#line 4681 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 147:
#line 1360 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_) = (yyvsp[0].table_reference_);
  }
#line 4689 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 148:
#line 1365 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_) = new quickstep::ParseSubqueryTableReference((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].subquery_expression_));
    (yyval.table_reference_)->set_table_reference_signature((yyvsp[0].table_reference_signature_));
  }
#line 4698 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 149:
#line 1369 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_) = new quickstep::ParseSimpleTableReference((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-2].string_value_), (yyvsp[-1].opt_sample_clause_));
    (yyval.table_reference_)->set_table_reference_signature((yyvsp[0].table_reference_signature_));
  }
#line 4707 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 150:
#line 1373 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_) = new quickstep::ParseSimpleTableReference((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].opt_sample_clause_));
  }
#line 4715 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 151:
#line 1376 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_) = new quickstep::ParseGeneratorTableReference((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].function_call_));
    (yyval.table_reference_)->set_table_reference_signature((yyvsp[0].table_reference_signature_));
  }
#line 4724 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 152:
#line 1380 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_) = new quickstep::ParseGeneratorTableReference((yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].function_call_));
  }
#line 4732 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 153:
#line 1383 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_) = (yyvsp[-1].table_reference_);
  }
#line 4740 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 154:
#line 1388 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_signature_) = (yyvsp[0].table_reference_signature_);
  }
#line 4748 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 155:
#line 1391 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_signature_) = (yyvsp[0].table_reference_signature_);
  }
#line 4756 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 156:
#line 1396 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_signature_) = new ::quickstep::ParseTableReferenceSignature((yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].string_value_));
  }
#line 4764 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 157:
#line 1399 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_signature_) = new ::quickstep::ParseTableReferenceSignature((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-3].string_value_), (yyvsp[-1].string_list_));
  }
#line 4772 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 158:
#line 1404 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_list_) = new quickstep::PtrList<quickstep::ParseTableReference>();
    (yyval.table_reference_list_)->push_back((yyvsp[0].table_reference_));
  }
#line 4781 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 159:
#line 1408 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_list_) = (yyvsp[-2].table_reference_list_);
    (yyval.table_reference_list_)->push_back((yyvsp[0].table_reference_));
  }
#line 4790 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 160:
#line 1414 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.opt_group_by_clause_) = nullptr;
  }
#line 4798 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 161:
#line 1417 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.opt_group_by_clause_) = new quickstep::ParseGroupBy((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[0].expression_list_));
  }
#line 4806 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 162:
#line 1422 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.opt_having_clause_) = nullptr;
  }
#line 4814 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 163:
#line 1425 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.opt_having_clause_) = new quickstep::ParseHaving((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[0].predicate_));
  }
#line 4822 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 164:
#line 1430 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.opt_order_by_clause_) = nullptr;
  }
#line 4830 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 165:
#line 1433 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.opt_order_by_clause_) = new quickstep::ParseOrderBy((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[0].order_commalist_));
  }
#line 4838 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 166:
#line 1438 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.opt_limit_clause_) = nullptr;
  }
#line 4846 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 167:
#line 1441 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    if ((yyvsp[0].numeric_literal_value_)->float_like()) {
      delete (yyvsp[0].numeric_literal_value_);
      (yyval.opt_limit_clause_) = nullptr;
      quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "LIMIT value must be an integer");
      YYERROR;
    } else {
      if ((yyvsp[0].numeric_literal_value_)->long_value() <= 0) {
        delete (yyvsp[0].numeric_literal_value_);
        (yyval.opt_limit_clause_) = nullptr;
        quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "LIMIT value must be positive");
        YYERROR;
      } else {
        (yyval.opt_limit_clause_) = new quickstep::ParseLimit((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[0].numeric_literal_value_));
      }
    }
  }
#line 4868 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 168:
#line 1460 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.opt_window_clause_) = nullptr;
  }
#line 4876 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 169:
#line 1463 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.opt_window_clause_) = (yyvsp[0].opt_window_clause_);
  }
#line 4884 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 170:
#line 1468 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.opt_window_clause_) = new quickstep::PtrList<quickstep::ParseWindow>();
    (yyval.opt_window_clause_)->push_back((yyvsp[0].window_definition_));
  }
#line 4893 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 171:
#line 1472 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.opt_window_clause_) = (yyvsp[-1].opt_window_clause_);
    (yyval.opt_window_clause_)->push_back((yyvsp[0].window_definition_));
  }
#line 4902 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 172:
#line 1478 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.window_definition_) = (yyvsp[-1].window_definition_);
    (yyval.window_definition_)->setName((yyvsp[-4].string_value_));
  }
#line 4911 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 173:
#line 1484 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.window_definition_) = new quickstep::ParseWindow((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-2].window_partition_by_list_), (yyvsp[-1].window_order_by_list_), (yyvsp[0].window_frame_info_));
  }
#line 4919 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 174:
#line 1489 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.window_partition_by_list_) = nullptr;
  }
#line 4927 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 175:
#line 1492 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.window_partition_by_list_) = (yyvsp[0].expression_list_);
  }
#line 4935 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 176:
#line 1497 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.window_order_by_list_) = nullptr;
  }
#line 4943 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 177:
#line 1500 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.window_order_by_list_) = (yyvsp[0].order_commalist_);
  }
#line 4951 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 178:
#line 1505 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.window_frame_info_) = nullptr;
  }
#line 4959 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 179:
#line 1508 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.window_frame_info_) = new quickstep::ParseFrameInfo((yylsp[-4]).first_line, (yylsp[-4]).first_column, (yyvsp[-4].boolean_value_), (yyvsp[-2].numeric_literal_value_)->long_value(), (yyvsp[0].numeric_literal_value_)->long_value());
  }
#line 4967 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 180:
#line 1513 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.boolean_value_) = true;
  }
#line 4975 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 181:
#line 1516 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.boolean_value_) = false;
  }
#line 4983 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 183:
#line 1522 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.numeric_literal_value_) = new quickstep::NumericParseLiteralValue((yylsp[-1]).first_line, (yylsp[-1]).first_column, "-1");
  }
#line 4991 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 184:
#line 1525 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.numeric_literal_value_) = new quickstep::NumericParseLiteralValue((yylsp[-1]).first_line, (yylsp[-1]).first_column, "0");
  }
#line 4999 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 186:
#line 1531 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.numeric_literal_value_) = new quickstep::NumericParseLiteralValue((yylsp[-1]).first_line, (yylsp[-1]).first_column, "-1");
  }
#line 5007 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 187:
#line 1534 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.numeric_literal_value_) = new quickstep::NumericParseLiteralValue((yylsp[-1]).first_line, (yylsp[-1]).first_column, "0");
  }
#line 5015 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 188:
#line 1539 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.order_commalist_) = new quickstep::PtrList<quickstep::ParseOrderByItem>();
    (yyval.order_commalist_)->push_back((yyvsp[0].order_item_));
  }
#line 5024 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 189:
#line 1543 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.order_commalist_) = (yyvsp[-2].order_commalist_);
    (yyval.order_commalist_)->push_back((yyvsp[0].order_item_));
  }
#line 5033 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 190:
#line 1549 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.order_item_) = new quickstep::ParseOrderByItem((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-2].expression_), (yyvsp[-1].order_direction_), (yyvsp[0].order_direction_));
    delete (yyvsp[-1].order_direction_);
    delete (yyvsp[0].order_direction_);
  }
#line 5043 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 191:
#line 1556 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.order_direction_) = nullptr;
  }
#line 5051 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 192:
#line 1559 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.order_direction_) = new bool(true);
  }
#line 5059 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 193:
#line 1562 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.order_direction_) = new bool(false);
  }
#line 5067 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 194:
#line 1567 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.order_direction_) = nullptr;
  }
#line 5075 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 195:
#line 1570 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.order_direction_) = new bool(true);
  }
#line 5083 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 196:
#line 1573 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.order_direction_) = new bool(false);
  }
#line 5091 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 197:
#line 1579 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = nullptr;
  }
#line 5099 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 198:
#line 1582 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = (yyvsp[0].predicate_);
  }
#line 5107 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 199:
#line 1587 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = (yyvsp[0].predicate_);
  }
#line 5115 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 200:
#line 1592 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    if ((yyvsp[-2].predicate_)->getParsePredicateType() == quickstep::ParsePredicate::kDisjunction) {
      (yyval.predicate_) = (yyvsp[-2].predicate_);
    } else {
      (yyval.predicate_) = new quickstep::ParsePredicateDisjunction((yylsp[-2]).first_line, (yylsp[-2]).first_column);
      static_cast<quickstep::ParsePredicateDisjunction *>((yyval.predicate_))->addPredicate((yyvsp[-2].predicate_));
    }
    static_cast<quickstep::ParsePredicateDisjunction *>((yyval.predicate_))->addPredicate((yyvsp[0].predicate_));
  }
#line 5129 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 201:
#line 1601 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = (yyvsp[0].predicate_);
  }
#line 5137 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 202:
#line 1606 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    if ((yyvsp[-2].predicate_)->getParsePredicateType() == quickstep::ParsePredicate::kConjunction) {
      (yyval.predicate_) = (yyvsp[-2].predicate_);
    } else {
      (yyval.predicate_) = new quickstep::ParsePredicateConjunction((yylsp[-2]).first_line, (yylsp[-2]).first_column);
      static_cast<quickstep::ParsePredicateConjunction *>((yyval.predicate_))->addPredicate((yyvsp[-2].predicate_));
    }
    static_cast<quickstep::ParsePredicateConjunction *>((yyval.predicate_))->addPredicate((yyvsp[0].predicate_));
  }
#line 5151 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 203:
#line 1615 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = (yyvsp[0].predicate_);
  }
#line 5159 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 204:
#line 1620 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateNegation((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[0].predicate_));
  }
#line 5167 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 205:
#line 1623 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = (yyvsp[0].predicate_);
  }
#line 5175 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 206:
#line 1628 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateBetween((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-4].expression_), (yyvsp[-2].expression_), (yyvsp[0].expression_));
  }
#line 5183 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 207:
#line 1631 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateNegation(
        (yylsp[-4]).first_line, (yylsp[-4]).first_column,
        new quickstep::ParsePredicateBetween((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-5].expression_), (yyvsp[-2].expression_), (yyvsp[0].expression_)));
  }
#line 5193 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 208:
#line 1636 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-3].attribute_);
    (yyval.predicate_) = nullptr;
    NotSupported(&(yylsp[-2]), yyscanner, "NULL comparison predicates");
    YYERROR;
  }
#line 5204 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 209:
#line 1642 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-2].attribute_);
    (yyval.predicate_) = nullptr;
    NotSupported(&(yylsp[-1]), yyscanner, "NULL comparison predicates");
    YYERROR;
  }
#line 5215 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 210:
#line 1648 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateComparison((yylsp[-1]).first_line, (yylsp[-1]).first_column, *(yyvsp[-1].comparison_), (yyvsp[-2].expression_), (yyvsp[0].expression_));
  }
#line 5223 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 211:
#line 1651 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = (yyvsp[-1].predicate_);
  }
#line 5231 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 212:
#line 1654 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateExists((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[0].subquery_expression_));
  }
#line 5239 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 213:
#line 1657 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateInTableQuery((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-2].expression_), (yyvsp[0].subquery_expression_));
  }
#line 5247 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 214:
#line 1660 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateInValueList((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-4].expression_), (yyvsp[-1].expression_list_));
  }
#line 5255 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 215:
#line 1663 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateNegation(
        (yylsp[-2]).first_line,
        (yylsp[-2]).first_column,
        new quickstep::ParsePredicateInTableQuery((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-3].expression_), (yyvsp[0].subquery_expression_)));
  }
#line 5266 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 216:
#line 1669 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateNegation(
        (yylsp[-4]).first_line,
        (yylsp[-4]).first_column,
        new quickstep::ParsePredicateInValueList((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-5].expression_), (yyvsp[-1].expression_list_)));
  }
#line 5277 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 217:
#line 1678 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = new quickstep::ParseBinaryExpression((yylsp[-1]).first_line, (yylsp[-1]).first_column, *(yyvsp[-1].binary_operation_), (yyvsp[-2].expression_), (yyvsp[0].expression_));
  }
#line 5285 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 218:
#line 1681 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = (yyvsp[0].expression_);
  }
#line 5293 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 219:
#line 1686 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = new quickstep::ParseBinaryExpression((yylsp[-1]).first_line, (yylsp[-1]).first_column, *(yyvsp[-1].binary_operation_), (yyvsp[-2].expression_), (yyvsp[0].expression_));
  }
#line 5301 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 220:
#line 1689 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = (yyvsp[0].expression_);
  }
#line 5309 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 221:
#line 1694 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = new quickstep::ParseUnaryExpression((yylsp[-1]).first_line, (yylsp[-1]).first_column, *(yyvsp[-1].unary_operation_), (yyvsp[0].expression_));
  }
#line 5317 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 222:
#line 1697 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = (yyvsp[0].expression_);
  }
#line 5325 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 223:
#line 1702 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = (yyvsp[0].attribute_);
  }
#line 5333 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 224:
#line 1705 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = new quickstep::ParseScalarLiteral((yyvsp[0].literal_value_));
  }
#line 5341 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 225:
#line 1708 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = (yyvsp[0].function_call_);
  }
#line 5349 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 226:
#line 1711 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyvsp[-2].function_call_)->setWindowName((yyvsp[0].string_value_));
    (yyval.expression_) = (yyvsp[-2].function_call_);
  }
#line 5358 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 227:
#line 1715 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyvsp[-4].function_call_)->setWindow((yyvsp[-1].window_definition_));
    (yyval.expression_) = (yyvsp[-4].function_call_);
  }
#line 5367 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 228:
#line 1719 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = (yyvsp[0].expression_);
  }
#line 5375 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 229:
#line 1722 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = (yyvsp[0].expression_);
  }
#line 5383 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 230:
#line 1725 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = (yyvsp[0].expression_);
  }
#line 5391 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 231:
#line 1728 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = (yyvsp[-1].expression_);
  }
#line 5399 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 232:
#line 1731 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = (yyvsp[0].subquery_expression_);
  }
#line 5407 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 233:
#line 1736 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.function_call_) = new quickstep::ParseFunctionCall(
        (yylsp[-2]).first_line, (yylsp[-2]).first_column, false, (yyvsp[-2].string_value_), new quickstep::PtrList<quickstep::ParseExpression>());
  }
#line 5416 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 234:
#line 1740 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.function_call_) = new quickstep::ParseFunctionCall(
        (yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-3].string_value_), new quickstep::ParseStar((yylsp[-1]).first_line, (yylsp[-1]).first_column));
  }
#line 5425 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 235:
#line 1744 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.function_call_) = new quickstep::ParseFunctionCall((yylsp[-3]).first_line, (yylsp[-3]).first_column, false, (yyvsp[-3].string_value_), (yyvsp[-1].expression_list_));
  }
#line 5433 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 236:
#line 1747 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.function_call_) = new quickstep::ParseFunctionCall((yylsp[-4]).first_line, (yylsp[-4]).first_column, true, (yyvsp[-4].string_value_), (yyvsp[-1].expression_list_));
  }
#line 5441 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 237:
#line 1752 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = new quickstep::ParseExtractFunction((yylsp[-5]).first_line, (yylsp[-5]).first_column, (yyvsp[-3].string_value_), (yyvsp[-1].expression_));
  }
#line 5449 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 238:
#line 1757 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = new quickstep::ParseSubstringFunction(
        (yylsp[-5]).first_line, (yylsp[-5]).first_column, (yyvsp[-3].expression_), (yyvsp[-1].numeric_literal_value_)->long_value());
  }
#line 5458 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 239:
#line 1761 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = new quickstep::ParseSubstringFunction(
        (yylsp[-7]).first_line, (yylsp[-7]).first_column, (yyvsp[-5].expression_), (yyvsp[-3].numeric_literal_value_)->long_value(), (yyvsp[-1].numeric_literal_value_)->long_value());
  }
#line 5467 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 240:
#line 1767 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = new quickstep::ParseSimpleCaseExpression((yylsp[-4]).first_line, (yylsp[-4]).first_column, (yyvsp[-3].expression_), (yyvsp[-2].simple_when_clause_list_), (yyvsp[-1].expression_));
  }
#line 5475 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 241:
#line 1770 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = new quickstep::ParseSearchedCaseExpression((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-2].searched_when_clause_list_), (yyvsp[-1].expression_));
  }
#line 5483 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 242:
#line 1775 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.simple_when_clause_list_) = new quickstep::PtrVector<quickstep::ParseSimpleWhenClause>;
    (yyval.simple_when_clause_list_)->push_back((yyvsp[0].simple_when_clause_));
  }
#line 5492 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 243:
#line 1779 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.simple_when_clause_list_) = (yyvsp[-1].simple_when_clause_list_);
    (yyval.simple_when_clause_list_)->push_back((yyvsp[0].simple_when_clause_));
  }
#line 5501 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 244:
#line 1785 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.simple_when_clause_) = new quickstep::ParseSimpleWhenClause((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-2].expression_), (yyvsp[0].expression_));
  }
#line 5509 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 245:
#line 1790 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.searched_when_clause_list_) = new quickstep::PtrVector<quickstep::ParseSearchedWhenClause>;
    (yyval.searched_when_clause_list_)->push_back((yyvsp[0].searched_when_clause_));
  }
#line 5518 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 246:
#line 1794 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.searched_when_clause_list_) = (yyvsp[-1].searched_when_clause_list_);
    (yyval.searched_when_clause_list_)->push_back((yyvsp[0].searched_when_clause_));
  }
#line 5527 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 247:
#line 1800 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.searched_when_clause_) = new quickstep::ParseSearchedWhenClause((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-2].predicate_), (yyvsp[0].expression_));
  }
#line 5535 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 248:
#line 1805 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = NULL;
  }
#line 5543 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 249:
#line 1808 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = (yyvsp[0].expression_);
  }
#line 5551 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 250:
#line 1813 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_list_) = new quickstep::PtrList<quickstep::ParseExpression>();
    (yyval.expression_list_)->push_back((yyvsp[0].expression_));
  }
#line 5560 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 251:
#line 1817 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_list_) = (yyvsp[-2].expression_list_);
    (yyval.expression_list_)->push_back((yyvsp[0].expression_));
  }
#line 5569 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 252:
#line 1823 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.literal_value_) = new quickstep::NullParseLiteralValue((yylsp[0]).first_line, (yylsp[0]).first_column);
  }
#line 5577 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 253:
#line 1826 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.literal_value_) = (yyvsp[0].numeric_literal_value_);
  }
#line 5585 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 254:
#line 1829 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.literal_value_) = (yyvsp[0].numeric_literal_value_);
  }
#line 5593 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 255:
#line 1832 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    /**
     * NOTE(chasseur): This case exhibits a shift/reduce conflict with the
     * minus character as a 'unary_operation' followed by a numeric literal.
     * Because Bison prefers to shift rather than reduce, this case has
     * precedence (i.e. the parser will prefer to interpret the ambiguous
     * pattern as a negative number literal rather than a unary minus operation
     * applied to a non-negative number literal).
     **/
    (yyvsp[0].numeric_literal_value_)->prependMinus();
    (yyval.literal_value_) = (yyvsp[0].numeric_literal_value_);
  }
#line 5610 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 256:
#line 1844 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.literal_value_) = new quickstep::StringParseLiteralValue((yyvsp[0].string_value_),
                                                nullptr);  // No explicit type.
  }
#line 5619 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 257:
#line 1848 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    /**
     * NOTE(chasseur): This case exhibits a shift/reduce conflict with the
     * plain TOKEN_INTERVAL case in 'data_type' reduced and used in the case
     * below. Because Bison prefers to shift rather than reduce, this case has
     * precedence (i.e. the special
     * StringParseLiteralValue::ParseAmbiguousInterval() method will be used to
     * parse the string as either one of the interval types, rather than an
     * error being emitted because of an ambiguous type).
     **/
    quickstep::StringParseLiteralValue *parse_value;
    if (quickstep::StringParseLiteralValue::ParseAmbiguousInterval((yyvsp[0].string_value_), &parse_value)) {
      (yyval.literal_value_) = parse_value;
    } else {
      (yyval.literal_value_) = nullptr;
      quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "Failed to parse literal as specified type");
      YYERROR;
    }
  }
#line 5643 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 258:
#line 1867 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    quickstep::StringParseLiteralValue *parse_value;
    const std::string &datetime_type_value = (yyvsp[0].string_value_)->value();
    if (quickstep::StringParseLiteralValue::ParseAmbiguousInterval(
        &((yyvsp[-1].string_value_)->append((" " + datetime_type_value).c_str(), datetime_type_value.length() + 1)),
        &parse_value)) {
      (yyval.literal_value_) = parse_value;
    } else {
      (yyval.literal_value_) = nullptr;
      quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "Failed to parse literal as specified type");
      YYERROR;
    }
  }
#line 5661 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 259:
#line 1880 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    quickstep::StringParseLiteralValue *parse_value
        = new quickstep::StringParseLiteralValue((yyvsp[0].string_value_), &((yyvsp[-1].data_type_)->getType()));
    delete (yyvsp[-1].data_type_);
    if (!parse_value->tryExplicitTypeParse()) {
      delete parse_value;
      (yyval.literal_value_) = nullptr;
      quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "Failed to parse literal as specified type");
      YYERROR;
    } else {
      (yyval.literal_value_) = parse_value;
    }
  }
#line 5679 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 260:
#line 1895 "../SqlParser.ypp" /* yacc.c:1661  */
    {
     (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column, std::string("YEAR"));
  }
#line 5687 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 261:
#line 1898 "../SqlParser.ypp" /* yacc.c:1661  */
    {
     (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column, std::string("MONTH"));
  }
#line 5695 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 262:
#line 1901 "../SqlParser.ypp" /* yacc.c:1661  */
    {
     (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column, std::string("DAY"));
  }
#line 5703 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 263:
#line 1904 "../SqlParser.ypp" /* yacc.c:1661  */
    {
     (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column, std::string("HOUR"));
  }
#line 5711 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 264:
#line 1907 "../SqlParser.ypp" /* yacc.c:1661  */
    {
     (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column, std::string("MINUTE"));
  }
#line 5719 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 265:
#line 1910 "../SqlParser.ypp" /* yacc.c:1661  */
    {
     (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column, std::string("SECOND"));
  }
#line 5727 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 266:
#line 1915 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.literal_value_list_) = new quickstep::PtrList<quickstep::ParseScalarLiteral>();
    (yyval.literal_value_list_)->push_back(new quickstep::ParseScalarLiteral((yyvsp[0].literal_value_)));
  }
#line 5736 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 267:
#line 1919 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.literal_value_list_) = (yyvsp[-2].literal_value_list_);
    (yyval.literal_value_list_)->push_back(new quickstep::ParseScalarLiteral((yyvsp[0].literal_value_)));
  }
#line 5745 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 268:
#line 1925 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.attribute_) = new quickstep::ParseAttribute((yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].string_value_));
  }
#line 5753 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 269:
#line 1928 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.attribute_) = new quickstep::ParseAttribute((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[0].string_value_), (yyvsp[-2].string_value_));
  }
#line 5761 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 270:
#line 1933 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.attribute_list_) = new quickstep::PtrList<quickstep::ParseAttribute>();
    (yyval.attribute_list_)->push_back((yyvsp[0].attribute_));
  }
#line 5770 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 271:
#line 1937 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.attribute_list_) = (yyvsp[-2].attribute_list_);
    (yyval.attribute_list_)->push_back((yyvsp[0].attribute_));
  }
#line 5779 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 272:
#line 1944 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kEqual);
  }
#line 5787 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 273:
#line 1947 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kNotEqual);
  }
#line 5795 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 274:
#line 1950 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kLess);
  }
#line 5803 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 275:
#line 1953 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kLessOrEqual);
  }
#line 5811 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 276:
#line 1956 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kGreater);
  }
#line 5819 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 277:
#line 1959 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kGreaterOrEqual);
  }
#line 5827 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 278:
#line 1962 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.comparison_) =  &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kLike);
  }
#line 5835 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 279:
#line 1965 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.comparison_) =  &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kNotLike);
  }
#line 5843 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 280:
#line 1968 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.comparison_) =  &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kRegexMatch);
  }
#line 5851 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 281:
#line 1971 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.comparison_) =  &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kNotRegexMatch);
  }
#line 5859 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 282:
#line 1976 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    /**
     * NOTE(chasseur): This case exhibits a shift/reduce conflict with the
     * '-' TOKEN_UNSIGNED_NUMVAL case in 'literal_value'. Because Bison prefers
     * to shift rather than reduce, the case in 'literal_value' has precedence
     * over this one.
     **/
    (yyval.unary_operation_) = &quickstep::UnaryOperationFactory::GetUnaryOperation(quickstep::UnaryOperationID::kNegate);
  }
#line 5873 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 283:
#line 1987 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.binary_operation_) = &quickstep::BinaryOperationFactory::GetBinaryOperation(quickstep::BinaryOperationID::kAdd);
  }
#line 5881 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 284:
#line 1990 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.binary_operation_) = &quickstep::BinaryOperationFactory::GetBinaryOperation(quickstep::BinaryOperationID::kSubtract);
  }
#line 5889 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 285:
#line 1995 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.binary_operation_) = &quickstep::BinaryOperationFactory::GetBinaryOperation(quickstep::BinaryOperationID::kModulo);
  }
#line 5897 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 286:
#line 1998 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.binary_operation_) = &quickstep::BinaryOperationFactory::GetBinaryOperation(quickstep::BinaryOperationID::kMultiply);
  }
#line 5905 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 287:
#line 2001 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.binary_operation_) = &quickstep::BinaryOperationFactory::GetBinaryOperation(quickstep::BinaryOperationID::kDivide);
  }
#line 5913 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 288:
#line 2007 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.string_list_) = new quickstep::PtrList<quickstep::ParseString>();
    (yyval.string_list_)->push_back((yyvsp[0].string_value_));
  }
#line 5922 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 289:
#line 2011 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.string_list_) = (yyvsp[-2].string_list_);
    (yyval.string_list_)->push_back((yyvsp[0].string_value_));
  }
#line 5931 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 290:
#line 2017 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.string_value_) = (yyvsp[0].string_value_);
  }
#line 5939 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 291:
#line 2020 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    if ((yyvsp[0].string_value_)->value().empty()) {
      quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "Zero-length identifier");
    }
    (yyval.string_value_) = (yyvsp[0].string_value_);
  }
#line 5950 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 292:
#line 2028 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.boolean_value_) = true;
  }
#line 5958 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 293:
#line 2031 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.boolean_value_) = true;
  }
#line 5966 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 294:
#line 2034 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.boolean_value_) = false;
  }
#line 5974 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 295:
#line 2037 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.boolean_value_) = false;
  }
#line 5982 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 296:
#line 2043 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.command_) = new quickstep::ParseCommand((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].command_argument_list_));
  }
#line 5990 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 297:
#line 2048 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    quickstep::PtrVector<quickstep::ParseString> *argument_list = (yyvsp[-1].command_argument_list_);
    argument_list->push_back((yyvsp[0].string_value_));
    (yyval.command_argument_list_) = argument_list;
  }
#line 6000 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 298:
#line 2053 "../SqlParser.ypp" /* yacc.c:1661  */
    { /* Epsilon, an empy match. */
    (yyval.command_argument_list_) = new quickstep::PtrVector<quickstep::ParseString>();
  }
#line 6008 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;


#line 6012 "SqlParser_gen.cpp" /* yacc.c:1661  */
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
  *++yylsp = yyloc;

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
      yyerror (&yylloc, yyscanner, parsedStatement, YY_("syntax error"));
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
        yyerror (&yylloc, yyscanner, parsedStatement, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc, yyscanner, parsedStatement);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, yyscanner, parsedStatement);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
  yyerror (&yylloc, yyscanner, parsedStatement, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, yyscanner, parsedStatement);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, yyscanner, parsedStatement);
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
#line 2057 "../SqlParser.ypp" /* yacc.c:1906  */


void NotSupported(const YYLTYPE *location, yyscan_t yyscanner, const std::string &feature) {
  std::string msg;
  msg.append(feature);
  msg.append(" is not supported yet");

  quickstep_yyerror(location, yyscanner, nullptr, msg.c_str());
}

int quickstep_yyget_line_number(const YYLTYPE *yyloc) {
  return yyloc->first_line;
}

int quickstep_yyget_column_number(const YYLTYPE *yyloc) {
  return yyloc->first_column;
}
