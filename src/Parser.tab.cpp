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

#include "Parser.tab.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_SIZEOF = 3,                     /* SIZEOF  */
  YYSYMBOL_PTR_OP = 4,                     /* PTR_OP  */
  YYSYMBOL_INC_OP = 5,                     /* INC_OP  */
  YYSYMBOL_DEC_OP = 6,                     /* DEC_OP  */
  YYSYMBOL_LEFT_OP = 7,                    /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 8,                   /* RIGHT_OP  */
  YYSYMBOL_LE_OP = 9,                      /* LE_OP  */
  YYSYMBOL_GE_OP = 10,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 11,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 12,                     /* NE_OP  */
  YYSYMBOL_AND_OP = 13,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 14,                     /* OR_OP  */
  YYSYMBOL_LEFT_ASSIGN = 15,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 16,              /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 17,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 18,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 19,                 /* OR_ASSIGN  */
  YYSYMBOL_TYPEDEF = 20,                   /* TYPEDEF  */
  YYSYMBOL_EXTERN = 21,                    /* EXTERN  */
  YYSYMBOL_STATIC = 22,                    /* STATIC  */
  YYSYMBOL_AUTO = 23,                      /* AUTO  */
  YYSYMBOL_REGISTER = 24,                  /* REGISTER  */
  YYSYMBOL_CONST = 25,                     /* CONST  */
  YYSYMBOL_VOLATILE = 26,                  /* VOLATILE  */
  YYSYMBOL_STRUCT = 27,                    /* STRUCT  */
  YYSYMBOL_UNION = 28,                     /* UNION  */
  YYSYMBOL_ENUM = 29,                      /* ENUM  */
  YYSYMBOL_ELLIPSIS = 30,                  /* ELLIPSIS  */
  YYSYMBOL_CASE = 31,                      /* CASE  */
  YYSYMBOL_DEFAULT = 32,                   /* DEFAULT  */
  YYSYMBOL_IF = 33,                        /* IF  */
  YYSYMBOL_ELSE = 34,                      /* ELSE  */
  YYSYMBOL_SWITCH = 35,                    /* SWITCH  */
  YYSYMBOL_WHILE = 36,                     /* WHILE  */
  YYSYMBOL_DO = 37,                        /* DO  */
  YYSYMBOL_FOR = 38,                       /* FOR  */
  YYSYMBOL_GOTO = 39,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 40,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 41,                     /* BREAK  */
  YYSYMBOL_MUL_ASSIGN = 42,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 43,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 44,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 45,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 46,                /* SUB_ASSIGN  */
  YYSYMBOL_IDENTIFIER = 47,                /* IDENTIFIER  */
  YYSYMBOL_CONSTANT = 48,                  /* CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 49,            /* STRING_LITERAL  */
  YYSYMBOL_CHAR = 50,                      /* CHAR  */
  YYSYMBOL_SHORT = 51,                     /* SHORT  */
  YYSYMBOL_INT = 52,                       /* INT  */
  YYSYMBOL_LONG = 53,                      /* LONG  */
  YYSYMBOL_SIGNED = 54,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 55,                  /* UNSIGNED  */
  YYSYMBOL_FLOAT = 56,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 57,                    /* DOUBLE  */
  YYSYMBOL_VOID = 58,                      /* VOID  */
  YYSYMBOL_TYPE_NAME = 59,                 /* TYPE_NAME  */
  YYSYMBOL_RETURN = 60,                    /* RETURN  */
  YYSYMBOL_LOWER_THAN_ELSE = 61,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_62_ = 62,                       /* ';'  */
  YYSYMBOL_63_ = 63,                       /* '='  */
  YYSYMBOL_64_ = 64,                       /* '{'  */
  YYSYMBOL_65_ = 65,                       /* '}'  */
  YYSYMBOL_66_ = 66,                       /* ','  */
  YYSYMBOL_67_ = 67,                       /* '('  */
  YYSYMBOL_68_ = 68,                       /* ')'  */
  YYSYMBOL_69_ = 69,                       /* '['  */
  YYSYMBOL_70_ = 70,                       /* ']'  */
  YYSYMBOL_71_ = 71,                       /* '&'  */
  YYSYMBOL_72_ = 72,                       /* '*'  */
  YYSYMBOL_73_ = 73,                       /* '+'  */
  YYSYMBOL_74_ = 74,                       /* '-'  */
  YYSYMBOL_75_ = 75,                       /* '~'  */
  YYSYMBOL_76_ = 76,                       /* '!'  */
  YYSYMBOL_77_ = 77,                       /* '/'  */
  YYSYMBOL_78_ = 78,                       /* '%'  */
  YYSYMBOL_79_ = 79,                       /* '<'  */
  YYSYMBOL_80_ = 80,                       /* '>'  */
  YYSYMBOL_81_ = 81,                       /* '^'  */
  YYSYMBOL_82_ = 82,                       /* '|'  */
  YYSYMBOL_YYACCEPT = 83,                  /* $accept  */
  YYSYMBOL_ROOT = 84,                      /* ROOT  */
  YYSYMBOL_translation_unit = 85,          /* translation_unit  */
  YYSYMBOL_external_declaration = 86,      /* external_declaration  */
  YYSYMBOL_declaration_list = 87,          /* declaration_list  */
  YYSYMBOL_declaration = 88,               /* declaration  */
  YYSYMBOL_init_declarator = 89,           /* init_declarator  */
  YYSYMBOL_initializer = 90,               /* initializer  */
  YYSYMBOL_initializer_list = 91,          /* initializer_list  */
  YYSYMBOL_function_definition = 92,       /* function_definition  */
  YYSYMBOL_declaration_specifiers = 93,    /* declaration_specifiers  */
  YYSYMBOL_type_specifier = 94,            /* type_specifier  */
  YYSYMBOL_declarator = 95,                /* declarator  */
  YYSYMBOL_direct_declarator = 96,         /* direct_declarator  */
  YYSYMBOL_parameter_list = 97,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 98,     /* parameter_declaration  */
  YYSYMBOL_compound_statement = 99,        /* compound_statement  */
  YYSYMBOL_statement_list = 100,           /* statement_list  */
  YYSYMBOL_statement = 101,                /* statement  */
  YYSYMBOL_jump_statement = 102,           /* jump_statement  */
  YYSYMBOL_expression_statement = 103,     /* expression_statement  */
  YYSYMBOL_selection_statement = 104,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 105,      /* iteration_statement  */
  YYSYMBOL_expression = 106,               /* expression  */
  YYSYMBOL_postfix_expression = 107,       /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 108, /* argument_expression_list  */
  YYSYMBOL_unary_expression = 109,         /* unary_expression  */
  YYSYMBOL_unary_operator = 110,           /* unary_operator  */
  YYSYMBOL_multiplicative_expression = 111, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 112,      /* additive_expression  */
  YYSYMBOL_shift_expression = 113,         /* shift_expression  */
  YYSYMBOL_relational_expression = 114,    /* relational_expression  */
  YYSYMBOL_equality_expression = 115,      /* equality_expression  */
  YYSYMBOL_and_expression = 116,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 117,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 118,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 119,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 120,    /* logical_or_expression  */
  YYSYMBOL_assignment_expression = 121,    /* assignment_expression  */
  YYSYMBOL_primary_expression = 122        /* primary_expression  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  18
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   461

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  83
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  114
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  195

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   316


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
       2,     2,     2,    76,     2,     2,     2,    78,    71,     2,
      67,    68,    72,    73,    66,    74,     2,    77,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    62,
      79,    63,    80,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    69,     2,    70,    81,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    64,    82,    65,    75,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   104,   104,   108,   109,   113,   114,   118,   119,   125,
     129,   130,   134,   135,   141,   142,   146,   155,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   172,   176,
     177,   178,   179,   181,   187,   188,   192,   194,   198,   200,
     201,   202,   206,   207,   212,   213,   214,   215,   216,   220,
     224,   225,   229,   230,   234,   235,   236,   237,   241,   245,
     246,   247,   248,   249,   250,   254,   255,   259,   260,   261,
     262,   268,   269,   270,   271,   272,   273,   277,   278,   279,
     280,   284,   285,   286,   290,   291,   292,   297,   298,   299,
     300,   301,   305,   306,   307,   311,   312,   316,   317,   321,
     322,   326,   327,   331,   332,   336,   338,   339,   340,   341,
     342,   343,   348,   349,   351
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
  "\"end of file\"", "error", "\"invalid token\"", "SIZEOF", "PTR_OP",
  "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP",
  "NE_OP", "AND_OP", "OR_OP", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "TYPEDEF", "EXTERN", "STATIC", "AUTO",
  "REGISTER", "CONST", "VOLATILE", "STRUCT", "UNION", "ENUM", "ELLIPSIS",
  "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "IDENTIFIER", "CONSTANT", "STRING_LITERAL",
  "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE",
  "VOID", "TYPE_NAME", "RETURN", "LOWER_THAN_ELSE", "';'", "'='", "'{'",
  "'}'", "','", "'('", "')'", "'['", "']'", "'&'", "'*'", "'+'", "'-'",
  "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "$accept",
  "ROOT", "translation_unit", "external_declaration", "declaration_list",
  "declaration", "init_declarator", "initializer", "initializer_list",
  "function_definition", "declaration_specifiers", "type_specifier",
  "declarator", "direct_declarator", "parameter_list",
  "parameter_declaration", "compound_statement", "statement_list",
  "statement", "jump_statement", "expression_statement",
  "selection_statement", "iteration_statement", "expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "assignment_expression", "primary_expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-116)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     193,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,
    -116,    11,   193,  -116,  -116,  -116,   -21,  -116,  -116,  -116,
    -116,   -21,    -8,   -34,   -24,   -43,  -116,   322,   103,  -116,
     130,   385,  -116,   385,   385,  -116,  -116,   322,   385,  -116,
    -116,  -116,  -116,  -116,  -116,  -116,    13,   -22,   385,   -45,
     -14,    44,    -3,    50,   -31,   -25,   -38,    45,    49,  -116,
    -116,     7,    14,   301,    39,   385,  -116,  -116,   166,  -116,
     -21,  -116,   229,  -116,  -116,  -116,  -116,  -116,    51,  -116,
    -116,   -21,   -19,  -116,  -116,    -5,  -116,  -116,  -116,    38,
      46,  -116,  -116,   335,   385,   385,   385,   385,   385,   385,
     385,  -116,   385,   385,   385,   385,   385,   385,   385,   385,
     385,   385,   385,   385,   385,   385,   385,   385,   385,   385,
     385,   385,    79,   352,    54,  -116,  -116,   250,    57,  -116,
    -116,  -116,  -116,   193,  -116,  -116,  -116,   322,  -116,  -116,
     -18,  -116,    47,  -116,  -116,  -116,  -116,  -116,  -116,  -116,
    -116,  -116,   -45,   -45,   -14,   -14,   -14,   -14,   -14,   -14,
      -3,    -3,    50,   -31,   -25,   -38,    45,    53,    55,    58,
     352,  -116,  -116,  -116,  -116,   385,  -116,  -116,   301,   301,
     385,   373,  -116,    88,  -116,    56,   301,    59,   301,    67,
    -116,   301,  -116,  -116,  -116
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    19,    20,    21,    22,    25,    26,    23,    24,    18,
      27,     0,     2,     3,     6,     5,     0,    17,     1,     4,
      29,     0,     0,    10,    28,     0,     9,     0,     0,    16,
       0,     0,    30,     0,     0,   112,   113,     0,     0,    71,
      72,    73,    74,    75,    76,    11,    67,    77,     0,    81,
      84,    87,    92,    95,    97,    99,   101,   103,   105,    12,
      59,     0,     0,     0,     0,     0,    50,    38,     0,     7,
       0,    46,     0,    42,    44,    45,    47,    48,     0,    58,
      32,    37,     0,    34,    77,     0,    68,    69,    14,     0,
       0,    63,    64,     0,     0,     0,     0,     0,     0,     0,
       0,    70,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    41,     8,     0,    10,    39,
      43,    51,    36,     0,    31,    33,    13,     0,   114,    61,
       0,    65,     0,   107,   108,   109,   110,   111,   106,    78,
      79,    80,    82,    83,    85,    86,    90,    91,    88,    89,
      93,    94,    96,    98,   100,   102,   104,     0,     0,     0,
       0,    49,    40,    35,    15,     0,    62,    60,     0,     0,
       0,     0,    66,    52,    54,     0,     0,     0,     0,     0,
      56,     0,    53,    55,    57
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -116,  -116,  -116,   118,  -116,   -15,  -116,   -32,  -116,  -116,
     -26,  -116,    -6,  -116,  -116,    -1,   110,    66,   -60,  -116,
    -115,  -116,  -116,   -37,  -116,  -116,   -17,  -116,     6,   -73,
    -116,   -35,    20,    21,    25,    27,    19,   115,   -27,  -116
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    11,    12,    13,    68,    14,    22,    45,    89,    15,
      16,    17,    23,    24,    82,    83,    71,    72,    73,    74,
      75,    76,    77,    78,    46,   140,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    79,    60
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      59,    90,    70,   122,    81,    88,   109,   110,   170,   119,
      59,    18,   130,    69,    84,    25,    86,    87,    91,    92,
      95,    96,    97,    98,    99,    32,    20,   102,   124,    27,
      28,   101,   103,   104,   154,   155,   156,   157,   158,   159,
     115,   100,    70,    30,   117,    31,    21,   133,   175,   134,
     176,   107,   108,   126,    26,   181,   116,   142,   118,   105,
     106,   113,   114,   119,   128,   135,   141,   130,   143,   144,
     145,   146,   147,   148,   120,   132,   111,   112,   160,   161,
      93,   121,    94,   167,   168,   149,   150,   151,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,   136,   137,   174,   123,    81,    33,    34,
      59,   152,   153,   131,   138,   169,   171,   177,   183,   184,
      27,   178,   188,   179,   189,   180,   190,   191,   192,   193,
      19,   194,   173,    29,   127,   162,    61,   163,   166,    62,
      63,    64,   164,   185,   187,   165,    85,     0,   182,     0,
      35,    36,     0,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    65,     0,    66,     0,    28,    67,     0,
      38,    33,    34,     0,    39,    40,    41,    42,    43,    44,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
       0,     0,     0,     0,     0,     0,     0,     0,    80,    61,
       0,     0,    62,    63,    64,     0,     0,     0,     0,     0,
       0,     0,     0,    35,    36,     0,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    65,     0,    66,     0,
      28,   125,     0,    38,    33,    34,     0,    39,    40,    41,
      42,    43,    44,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,     0,     0,    33,    34,     0,     0,     0,
       0,     0,    61,     0,     0,    62,    63,    64,     0,     0,
       0,     0,     0,     0,     0,     0,    35,    36,     0,     0,
       0,     0,     0,    61,     0,     0,    62,    63,    64,    65,
       0,    66,     0,    28,   129,     0,    38,    35,    36,     0,
      39,    40,    41,    42,    43,    44,    33,    34,     0,     0,
      65,     0,    66,     0,    28,   172,     0,    38,     0,     0,
       0,    39,    40,    41,    42,    43,    44,    33,    34,     0,
       0,     0,     0,     0,    61,     0,     0,    62,    63,    64,
      33,    34,     0,     0,     0,     0,     0,     0,    35,    36,
       0,     0,     0,     0,     0,     0,     0,    33,    34,     0,
       0,    65,     0,    66,     0,    28,     0,     0,    38,    35,
      36,     0,    39,    40,    41,    42,    43,    44,    33,    34,
       0,     0,    35,    36,     0,     0,    37,     0,     0,    38,
      33,    34,     0,    39,    40,    41,    42,    43,    44,    35,
      36,     0,    38,   139,     0,     0,    39,    40,    41,    42,
      43,    44,     0,     0,    66,     0,     0,     0,     0,    38,
      35,    36,     0,    39,    40,    41,    42,    43,    44,     0,
       0,     0,    35,    36,     0,     0,     0,     0,     0,     0,
      38,   186,     0,     0,    39,    40,    41,    42,    43,    44,
       0,     0,    38,     0,     0,     0,    39,    40,    41,    42,
      43,    44
};

static const yytype_int16 yycheck[] =
{
      27,    38,    28,    63,    30,    37,     9,    10,   123,    14,
      37,     0,    72,    28,    31,    21,    33,    34,     5,     6,
      42,    43,    44,    45,    46,    68,    47,    72,    65,    63,
      64,    48,    77,    78,   107,   108,   109,   110,   111,   112,
      71,    63,    68,    67,    82,    69,    67,    66,    66,    68,
      68,     7,     8,    68,    62,   170,    81,    94,    13,    73,
      74,    11,    12,    14,    70,    70,    93,   127,    95,    96,
      97,    98,    99,   100,    67,    81,    79,    80,   113,   114,
      67,    67,    69,   120,   121,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,    65,    66,   137,    67,   133,     5,     6,
     137,   105,   106,    62,    68,    36,    62,    70,   178,   179,
      63,    68,    34,    68,    68,    67,   186,    68,   188,    62,
      12,   191,   133,    23,    68,   115,    33,   116,   119,    36,
      37,    38,   117,   180,   181,   118,    31,    -1,   175,    -1,
      47,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    -1,    64,    65,    -1,
      67,     5,     6,    -1,    71,    72,    73,    74,    75,    76,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    33,
      -1,    -1,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    -1,
      64,    65,    -1,    67,     5,     6,    -1,    71,    72,    73,
      74,    75,    76,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    -1,     5,     6,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    36,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    36,    37,    38,    60,
      -1,    62,    -1,    64,    65,    -1,    67,    47,    48,    -1,
      71,    72,    73,    74,    75,    76,     5,     6,    -1,    -1,
      60,    -1,    62,    -1,    64,    65,    -1,    67,    -1,    -1,
      -1,    71,    72,    73,    74,    75,    76,     5,     6,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    36,    37,    38,
       5,     6,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,    -1,
      -1,    60,    -1,    62,    -1,    64,    -1,    -1,    67,    47,
      48,    -1,    71,    72,    73,    74,    75,    76,     5,     6,
      -1,    -1,    47,    48,    -1,    -1,    64,    -1,    -1,    67,
       5,     6,    -1,    71,    72,    73,    74,    75,    76,    47,
      48,    -1,    67,    68,    -1,    -1,    71,    72,    73,    74,
      75,    76,    -1,    -1,    62,    -1,    -1,    -1,    -1,    67,
      47,    48,    -1,    71,    72,    73,    74,    75,    76,    -1,
      -1,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68,    -1,    -1,    71,    72,    73,    74,    75,    76,
      -1,    -1,    67,    -1,    -1,    -1,    71,    72,    73,    74,
      75,    76
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    84,    85,    86,    88,    92,    93,    94,     0,    86,
      47,    67,    89,    95,    96,    95,    62,    63,    64,    99,
      67,    69,    68,     5,     6,    47,    48,    64,    67,    71,
      72,    73,    74,    75,    76,    90,   107,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,    33,    36,    37,    38,    60,    62,    65,    87,    88,
      93,    99,   100,   101,   102,   103,   104,   105,   106,   121,
      68,    93,    97,    98,   109,   120,   109,   109,    90,    91,
     106,     5,     6,    67,    69,    42,    43,    44,    45,    46,
      63,   109,    72,    77,    78,    73,    74,     7,     8,     9,
      10,    79,    80,    11,    12,    71,    81,    82,    13,    14,
      67,    67,   101,    67,   106,    65,    88,   100,    95,    65,
     101,    62,    95,    66,    68,    70,    65,    66,    68,    68,
     108,   121,   106,   121,   121,   121,   121,   121,   121,   109,
     109,   109,   111,   111,   112,   112,   112,   112,   112,   112,
     114,   114,   115,   116,   117,   118,   119,   106,   106,    36,
     103,    62,    65,    98,    90,    66,    68,    70,    68,    68,
      67,   103,   121,   101,   101,   106,    68,   106,    34,    68,
     101,    68,   101,    62,   101
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    83,    84,    85,    85,    86,    86,    87,    87,    88,
      89,    89,    90,    90,    91,    91,    92,    93,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    95,    96,
      96,    96,    96,    96,    97,    97,    98,    98,    99,    99,
      99,    99,   100,   100,   101,   101,   101,   101,   101,   102,
     103,   103,   104,   104,   105,   105,   105,   105,   106,   107,
     107,   107,   107,   107,   107,   108,   108,   109,   109,   109,
     109,   110,   110,   110,   110,   110,   110,   111,   111,   111,
     111,   112,   112,   112,   113,   113,   113,   114,   114,   114,
     114,   114,   115,   115,   115,   116,   116,   117,   117,   118,
     118,   119,   119,   120,   120,   121,   121,   121,   121,   121,
     121,   121,   122,   122,   122
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     2,     3,
       1,     3,     1,     3,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     4,     1,     3,     2,     1,     2,     3,
       4,     3,     1,     2,     1,     1,     1,     1,     1,     3,
       1,     2,     5,     7,     5,     7,     6,     7,     1,     1,
       4,     3,     4,     2,     2,     1,     3,     1,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     3,     3,     3,
       3,     3,     1,     1,     3
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
  case 2: /* ROOT: translation_unit  */
#line 104 "src/Parser.y"
                        { g_root = (yyvsp[0].block); }
#line 1381 "src/Parser.tab.cpp"
    break;

  case 3: /* translation_unit: external_declaration  */
#line 108 "src/Parser.y"
                               { (yyval.block) = (yyvsp[0].block); }
#line 1387 "src/Parser.tab.cpp"
    break;

  case 4: /* translation_unit: translation_unit external_declaration  */
#line 109 "src/Parser.y"
                                                { (yyval.block) = new TranslationUnit((yyvsp[0].block), (yyvsp[-1].block)); }
#line 1393 "src/Parser.tab.cpp"
    break;

  case 5: /* external_declaration: function_definition  */
#line 113 "src/Parser.y"
                              { (yyval.block) = (yyvsp[0].block);}
#line 1399 "src/Parser.tab.cpp"
    break;

  case 6: /* external_declaration: declaration  */
#line 114 "src/Parser.y"
                        { (yyval.block) = (yyvsp[0].block);}
#line 1405 "src/Parser.tab.cpp"
    break;

  case 7: /* declaration_list: declaration  */
#line 118 "src/Parser.y"
                      { std::vector<BlockPtr>* BlockList = new std::vector<BlockPtr>(); BlockList->push_back((yyvsp[0].block));  (yyval.list) = BlockList; }
#line 1411 "src/Parser.tab.cpp"
    break;

  case 8: /* declaration_list: declaration_list declaration  */
#line 119 "src/Parser.y"
                                       { (yyvsp[-1].list)->push_back((yyvsp[0].block)); (yyval.list) = (yyvsp[-1].list); }
#line 1417 "src/Parser.tab.cpp"
    break;

  case 9: /* declaration: declaration_specifiers init_declarator ';'  */
#line 125 "src/Parser.y"
                                                     { (yyval.block) = new Declaration(*(yyvsp[-2].string), (yyvsp[-1].block));}
#line 1423 "src/Parser.tab.cpp"
    break;

  case 10: /* init_declarator: declarator  */
#line 129 "src/Parser.y"
                     { (yyval.block) = new Init_Declarator((yyvsp[0].block));}
#line 1429 "src/Parser.tab.cpp"
    break;

  case 11: /* init_declarator: declarator '=' initializer  */
#line 130 "src/Parser.y"
                                     { (yyval.block) = new Init_Declarator((yyvsp[-2].block), (yyvsp[0].block));}
#line 1435 "src/Parser.tab.cpp"
    break;

  case 12: /* initializer: assignment_expression  */
#line 134 "src/Parser.y"
                                { (yyval.block) = (yyvsp[0].block);}
#line 1441 "src/Parser.tab.cpp"
    break;

  case 13: /* initializer: '{' initializer_list '}'  */
#line 135 "src/Parser.y"
                                   { (yyval.block) = new ArrayInitializer((yyvsp[-1].list));}
#line 1447 "src/Parser.tab.cpp"
    break;

  case 14: /* initializer_list: initializer  */
#line 141 "src/Parser.y"
                      { std::vector<BlockPtr>* BlockList = new std::vector<BlockPtr>(); BlockList->push_back((yyvsp[0].block));  (yyval.list) = BlockList; }
#line 1453 "src/Parser.tab.cpp"
    break;

  case 15: /* initializer_list: initializer_list ',' initializer  */
#line 142 "src/Parser.y"
                                           { (yyvsp[-2].list)->push_back((yyvsp[0].block)); (yyval.list) = (yyvsp[-2].list); }
#line 1459 "src/Parser.tab.cpp"
    break;

  case 16: /* function_definition: declaration_specifiers declarator compound_statement  */
#line 146 "src/Parser.y"
                                                               { (yyval.block) = new Function(*(yyvsp[-2].string), (yyvsp[-1].block), (yyvsp[0].block)); }
#line 1465 "src/Parser.tab.cpp"
    break;

  case 17: /* declaration_specifiers: type_specifier  */
#line 155 "src/Parser.y"
                         { (yyval.string) = (yyvsp[0].string);}
#line 1471 "src/Parser.tab.cpp"
    break;

  case 18: /* type_specifier: VOID  */
#line 159 "src/Parser.y"
                    { (yyval.string) = (yyvsp[0].string); }
#line 1477 "src/Parser.tab.cpp"
    break;

  case 19: /* type_specifier: CHAR  */
#line 160 "src/Parser.y"
                    { (yyval.string) = (yyvsp[0].string); }
#line 1483 "src/Parser.tab.cpp"
    break;

  case 20: /* type_specifier: SHORT  */
#line 161 "src/Parser.y"
                    { (yyval.string) = (yyvsp[0].string); }
#line 1489 "src/Parser.tab.cpp"
    break;

  case 21: /* type_specifier: INT  */
#line 162 "src/Parser.y"
                    { (yyval.string) = (yyvsp[0].string); }
#line 1495 "src/Parser.tab.cpp"
    break;

  case 22: /* type_specifier: LONG  */
#line 163 "src/Parser.y"
                    { (yyval.string) = (yyvsp[0].string); }
#line 1501 "src/Parser.tab.cpp"
    break;

  case 23: /* type_specifier: FLOAT  */
#line 164 "src/Parser.y"
                    { (yyval.string) = (yyvsp[0].string); }
#line 1507 "src/Parser.tab.cpp"
    break;

  case 24: /* type_specifier: DOUBLE  */
#line 165 "src/Parser.y"
                    { (yyval.string) = (yyvsp[0].string); }
#line 1513 "src/Parser.tab.cpp"
    break;

  case 25: /* type_specifier: SIGNED  */
#line 166 "src/Parser.y"
                    { (yyval.string) = (yyvsp[0].string); }
#line 1519 "src/Parser.tab.cpp"
    break;

  case 26: /* type_specifier: UNSIGNED  */
#line 167 "src/Parser.y"
                    { (yyval.string) = (yyvsp[0].string); }
#line 1525 "src/Parser.tab.cpp"
    break;

  case 27: /* type_specifier: TYPE_NAME  */
#line 168 "src/Parser.y"
                    { (yyval.string) = (yyvsp[0].string); }
#line 1531 "src/Parser.tab.cpp"
    break;

  case 28: /* declarator: direct_declarator  */
#line 172 "src/Parser.y"
                            { (yyval.block) = (yyvsp[0].block);}
#line 1537 "src/Parser.tab.cpp"
    break;

  case 29: /* direct_declarator: IDENTIFIER  */
#line 176 "src/Parser.y"
                     { (yyval.block) = new Declarator(*(yyvsp[0].string)); delete (yyvsp[0].string);}
#line 1543 "src/Parser.tab.cpp"
    break;

  case 30: /* direct_declarator: '(' declarator ')'  */
#line 177 "src/Parser.y"
                             { (yyval.block) = (yyvsp[-1].block); }
#line 1549 "src/Parser.tab.cpp"
    break;

  case 31: /* direct_declarator: direct_declarator '(' parameter_list ')'  */
#line 178 "src/Parser.y"
                                                   { (yyval.block) = new FunctionDeclarator((yyvsp[-3].block), (yyvsp[-1].list)); }
#line 1555 "src/Parser.tab.cpp"
    break;

  case 32: /* direct_declarator: direct_declarator '(' ')'  */
#line 179 "src/Parser.y"
                                    { (yyval.block) = new FunctionDeclarator((yyvsp[-2].block));}
#line 1561 "src/Parser.tab.cpp"
    break;

  case 33: /* direct_declarator: direct_declarator '[' logical_or_expression ']'  */
#line 181 "src/Parser.y"
                                                          { (yyval.block) = new ArrayDeclarator((yyvsp[-3].block), (yyvsp[-1].block));}
#line 1567 "src/Parser.tab.cpp"
    break;

  case 34: /* parameter_list: parameter_declaration  */
#line 187 "src/Parser.y"
                                { std::vector<BlockPtr>* BlockList = new std::vector<BlockPtr>(); BlockList->push_back((yyvsp[0].block));  (yyval.list) = BlockList; }
#line 1573 "src/Parser.tab.cpp"
    break;

  case 35: /* parameter_list: parameter_list ',' parameter_declaration  */
#line 188 "src/Parser.y"
                                                   { (yyvsp[-2].list)->push_back((yyvsp[0].block)); (yyval.list) = (yyvsp[-2].list);}
#line 1579 "src/Parser.tab.cpp"
    break;

  case 36: /* parameter_declaration: declaration_specifiers declarator  */
#line 192 "src/Parser.y"
                                            { (yyval.block) = new ParameterDeclaration(*(yyvsp[-1].string), (yyvsp[0].block));}
#line 1585 "src/Parser.tab.cpp"
    break;

  case 37: /* parameter_declaration: declaration_specifiers  */
#line 194 "src/Parser.y"
                                 { (yyval.block) = new ParameterDeclaration(*(yyvsp[0].string));}
#line 1591 "src/Parser.tab.cpp"
    break;

  case 38: /* compound_statement: '{' '}'  */
#line 198 "src/Parser.y"
                  { (yyval.block) = new Expression("null"); }
#line 1597 "src/Parser.tab.cpp"
    break;

  case 39: /* compound_statement: '{' statement_list '}'  */
#line 200 "src/Parser.y"
                                 {(yyval.block) = new Compound_Statement((yyvsp[-1].list),"slist");}
#line 1603 "src/Parser.tab.cpp"
    break;

  case 40: /* compound_statement: '{' declaration_list statement_list '}'  */
#line 201 "src/Parser.y"
                                                  {(yyval.block) = new Compound_Statement((yyvsp[-2].list), (yyvsp[-1].list));}
#line 1609 "src/Parser.tab.cpp"
    break;

  case 41: /* compound_statement: '{' declaration_list '}'  */
#line 202 "src/Parser.y"
                                   {(yyval.block) = new Compound_Statement((yyvsp[-1].list),"dlist");}
#line 1615 "src/Parser.tab.cpp"
    break;

  case 42: /* statement_list: statement  */
#line 206 "src/Parser.y"
                        { std::vector<BlockPtr>* BlockList = new std::vector<BlockPtr>(); BlockList->push_back((yyvsp[0].block));  (yyval.list) = BlockList; }
#line 1621 "src/Parser.tab.cpp"
    break;

  case 43: /* statement_list: statement_list statement  */
#line 207 "src/Parser.y"
                                   { (yyvsp[-1].list)->push_back((yyvsp[0].block)); (yyval.list) = (yyvsp[-1].list); }
#line 1627 "src/Parser.tab.cpp"
    break;

  case 44: /* statement: jump_statement  */
#line 212 "src/Parser.y"
                         {(yyval.block) = (yyvsp[0].block);}
#line 1633 "src/Parser.tab.cpp"
    break;

  case 45: /* statement: expression_statement  */
#line 213 "src/Parser.y"
                               { (yyval.block) = (yyvsp[0].block); }
#line 1639 "src/Parser.tab.cpp"
    break;

  case 46: /* statement: compound_statement  */
#line 214 "src/Parser.y"
                             { (yyval.block) = (yyvsp[0].block); }
#line 1645 "src/Parser.tab.cpp"
    break;

  case 47: /* statement: selection_statement  */
#line 215 "src/Parser.y"
                              { (yyval.block) = (yyvsp[0].block); }
#line 1651 "src/Parser.tab.cpp"
    break;

  case 48: /* statement: iteration_statement  */
#line 216 "src/Parser.y"
                              { (yyval.block) = (yyvsp[0].block); }
#line 1657 "src/Parser.tab.cpp"
    break;

  case 49: /* jump_statement: RETURN expression ';'  */
#line 220 "src/Parser.y"
                                {(yyval.block)= new jump_statement(*(yyvsp[-2].string),(yyvsp[-1].block)); delete (yyvsp[-2].string);}
#line 1663 "src/Parser.tab.cpp"
    break;

  case 50: /* expression_statement: ';'  */
#line 224 "src/Parser.y"
                { (yyval.block) = new Expression("null"); }
#line 1669 "src/Parser.tab.cpp"
    break;

  case 51: /* expression_statement: expression ';'  */
#line 225 "src/Parser.y"
                         { (yyval.block) = (yyvsp[-1].block); }
#line 1675 "src/Parser.tab.cpp"
    break;

  case 52: /* selection_statement: IF '(' expression ')' statement  */
#line 229 "src/Parser.y"
                                          { (yyval.block) = new IfElse((yyvsp[-2].block), (yyvsp[0].block));}
#line 1681 "src/Parser.tab.cpp"
    break;

  case 53: /* selection_statement: IF '(' expression ')' statement ELSE statement  */
#line 230 "src/Parser.y"
                                                         { (yyval.block) = new IfElse((yyvsp[-4].block), (yyvsp[-2].block), (yyvsp[0].block));}
#line 1687 "src/Parser.tab.cpp"
    break;

  case 54: /* iteration_statement: WHILE '(' expression ')' statement  */
#line 234 "src/Parser.y"
                                             { (yyval.block) = new While((yyvsp[-2].block), (yyvsp[0].block));}
#line 1693 "src/Parser.tab.cpp"
    break;

  case 55: /* iteration_statement: DO statement WHILE '(' expression ')' ';'  */
#line 235 "src/Parser.y"
                                                    { (yyval.block) = new While((yyvsp[-2].block), (yyvsp[-5].block));}
#line 1699 "src/Parser.tab.cpp"
    break;

  case 56: /* iteration_statement: FOR '(' expression_statement expression_statement ')' statement  */
#line 236 "src/Parser.y"
                                                                          { (yyval.block) = new For((yyvsp[-3].block), (yyvsp[-2].block), (yyvsp[0].block));}
#line 1705 "src/Parser.tab.cpp"
    break;

  case 57: /* iteration_statement: FOR '(' expression_statement expression_statement expression ')' statement  */
#line 237 "src/Parser.y"
                                                                                     { (yyval.block) = new For((yyvsp[-4].block), (yyvsp[-3].block), (yyvsp[-2].block), (yyvsp[0].block));}
#line 1711 "src/Parser.tab.cpp"
    break;

  case 58: /* expression: assignment_expression  */
#line 241 "src/Parser.y"
                                { (yyval.block) = (yyvsp[0].block); }
#line 1717 "src/Parser.tab.cpp"
    break;

  case 59: /* postfix_expression: primary_expression  */
#line 245 "src/Parser.y"
                             { (yyval.block) = (yyvsp[0].block);}
#line 1723 "src/Parser.tab.cpp"
    break;

  case 60: /* postfix_expression: postfix_expression '[' expression ']'  */
#line 246 "src/Parser.y"
                                                { (yyval.block) = new ArrayExpression((yyvsp[-3].block), (yyvsp[-1].block));}
#line 1729 "src/Parser.tab.cpp"
    break;

  case 61: /* postfix_expression: postfix_expression '(' ')'  */
#line 247 "src/Parser.y"
                                     { (yyval.block) = new FunctionCall((yyvsp[-2].block));}
#line 1735 "src/Parser.tab.cpp"
    break;

  case 62: /* postfix_expression: postfix_expression '(' argument_expression_list ')'  */
#line 248 "src/Parser.y"
                                                              { (yyval.block) = new FunctionCall((yyvsp[-3].block), (yyvsp[-1].list));}
#line 1741 "src/Parser.tab.cpp"
    break;

  case 63: /* postfix_expression: postfix_expression INC_OP  */
#line 249 "src/Parser.y"
                                    { (yyval.block) = new Inc((yyvsp[-1].block));}
#line 1747 "src/Parser.tab.cpp"
    break;

  case 64: /* postfix_expression: postfix_expression DEC_OP  */
#line 250 "src/Parser.y"
                                    { (yyval.block) = new Dec((yyvsp[-1].block));}
#line 1753 "src/Parser.tab.cpp"
    break;

  case 65: /* argument_expression_list: assignment_expression  */
#line 254 "src/Parser.y"
                                { std::vector<BlockPtr>* BlockList = new std::vector<BlockPtr>(); BlockList->push_back((yyvsp[0].block));  (yyval.list) = BlockList; }
#line 1759 "src/Parser.tab.cpp"
    break;

  case 66: /* argument_expression_list: argument_expression_list ',' assignment_expression  */
#line 255 "src/Parser.y"
                                                             { (yyvsp[-2].list)->push_back((yyvsp[0].block)); (yyval.list) = (yyvsp[-2].list); }
#line 1765 "src/Parser.tab.cpp"
    break;

  case 67: /* unary_expression: postfix_expression  */
#line 259 "src/Parser.y"
                             { (yyval.block) = (yyvsp[0].block);}
#line 1771 "src/Parser.tab.cpp"
    break;

  case 68: /* unary_expression: INC_OP unary_expression  */
#line 260 "src/Parser.y"
                                  { (yyval.block) = new Inc((yyvsp[0].block));}
#line 1777 "src/Parser.tab.cpp"
    break;

  case 69: /* unary_expression: DEC_OP unary_expression  */
#line 261 "src/Parser.y"
                                  { (yyval.block) = new Dec((yyvsp[0].block));}
#line 1783 "src/Parser.tab.cpp"
    break;

  case 70: /* unary_expression: unary_operator unary_expression  */
#line 262 "src/Parser.y"
                                          { (yyval.block) = new UnaryOperator(*(yyvsp[-1].string), (yyvsp[0].block));}
#line 1789 "src/Parser.tab.cpp"
    break;

  case 71: /* unary_operator: '&'  */
#line 268 "src/Parser.y"
              { (yyval.string) = new std::string("=");}
#line 1795 "src/Parser.tab.cpp"
    break;

  case 72: /* unary_operator: '*'  */
#line 269 "src/Parser.y"
              { (yyval.string) = new std::string("*");}
#line 1801 "src/Parser.tab.cpp"
    break;

  case 73: /* unary_operator: '+'  */
#line 270 "src/Parser.y"
              { (yyval.string) = new std::string("+");}
#line 1807 "src/Parser.tab.cpp"
    break;

  case 74: /* unary_operator: '-'  */
#line 271 "src/Parser.y"
              { (yyval.string) = new std::string("-");}
#line 1813 "src/Parser.tab.cpp"
    break;

  case 75: /* unary_operator: '~'  */
#line 272 "src/Parser.y"
              { (yyval.string) = new std::string("~");}
#line 1819 "src/Parser.tab.cpp"
    break;

  case 76: /* unary_operator: '!'  */
#line 273 "src/Parser.y"
              { (yyval.string) = new std::string("!");}
#line 1825 "src/Parser.tab.cpp"
    break;

  case 77: /* multiplicative_expression: unary_expression  */
#line 277 "src/Parser.y"
                           { (yyval.block) = (yyvsp[0].block);}
#line 1831 "src/Parser.tab.cpp"
    break;

  case 78: /* multiplicative_expression: multiplicative_expression '*' unary_expression  */
#line 278 "src/Parser.y"
                                                          { (yyval.block) = new Multiplication((yyvsp[-2].block), (yyvsp[0].block));}
#line 1837 "src/Parser.tab.cpp"
    break;

  case 79: /* multiplicative_expression: multiplicative_expression '/' unary_expression  */
#line 279 "src/Parser.y"
                                                         { (yyval.block) = new Division((yyvsp[-2].block), (yyvsp[0].block));}
#line 1843 "src/Parser.tab.cpp"
    break;

  case 80: /* multiplicative_expression: multiplicative_expression '%' unary_expression  */
#line 280 "src/Parser.y"
                                                         { (yyval.block) = new Modulo((yyvsp[-2].block), (yyvsp[0].block));}
#line 1849 "src/Parser.tab.cpp"
    break;

  case 81: /* additive_expression: multiplicative_expression  */
#line 284 "src/Parser.y"
                                    { (yyval.block) = (yyvsp[0].block);}
#line 1855 "src/Parser.tab.cpp"
    break;

  case 82: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 285 "src/Parser.y"
                                                            { (yyval.block) = new Addition((yyvsp[-2].block), (yyvsp[0].block));}
#line 1861 "src/Parser.tab.cpp"
    break;

  case 83: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 286 "src/Parser.y"
                                                            { (yyval.block) = new Subtraction((yyvsp[-2].block), (yyvsp[0].block));}
#line 1867 "src/Parser.tab.cpp"
    break;

  case 84: /* shift_expression: additive_expression  */
#line 290 "src/Parser.y"
                              { (yyval.block) = (yyvsp[0].block);}
#line 1873 "src/Parser.tab.cpp"
    break;

  case 85: /* shift_expression: shift_expression LEFT_OP additive_expression  */
#line 291 "src/Parser.y"
                                                       { (yyval.block) = new LeftShift((yyvsp[-2].block), (yyvsp[0].block));}
#line 1879 "src/Parser.tab.cpp"
    break;

  case 86: /* shift_expression: shift_expression RIGHT_OP additive_expression  */
#line 292 "src/Parser.y"
                                                        { (yyval.block) = new RightShift((yyvsp[-2].block), (yyvsp[0].block));}
#line 1885 "src/Parser.tab.cpp"
    break;

  case 87: /* relational_expression: shift_expression  */
#line 297 "src/Parser.y"
                           { (yyval.block) = (yyvsp[0].block);}
#line 1891 "src/Parser.tab.cpp"
    break;

  case 88: /* relational_expression: relational_expression '<' additive_expression  */
#line 298 "src/Parser.y"
                                                        { (yyval.block) = new LessThan((yyvsp[-2].block), (yyvsp[0].block));}
#line 1897 "src/Parser.tab.cpp"
    break;

  case 89: /* relational_expression: relational_expression '>' additive_expression  */
#line 299 "src/Parser.y"
                                                        { (yyval.block) = new GreaterThan((yyvsp[-2].block), (yyvsp[0].block));}
#line 1903 "src/Parser.tab.cpp"
    break;

  case 90: /* relational_expression: relational_expression LE_OP additive_expression  */
#line 300 "src/Parser.y"
                                                          { (yyval.block) = new LessThanEqual((yyvsp[-2].block), (yyvsp[0].block));}
#line 1909 "src/Parser.tab.cpp"
    break;

  case 91: /* relational_expression: relational_expression GE_OP additive_expression  */
#line 301 "src/Parser.y"
                                                          { (yyval.block) = new GreaterThanEqual((yyvsp[-2].block), (yyvsp[0].block));}
#line 1915 "src/Parser.tab.cpp"
    break;

  case 92: /* equality_expression: relational_expression  */
#line 305 "src/Parser.y"
                                { (yyval.block) = (yyvsp[0].block);}
#line 1921 "src/Parser.tab.cpp"
    break;

  case 93: /* equality_expression: equality_expression EQ_OP relational_expression  */
#line 306 "src/Parser.y"
                                                          { (yyval.block) = new Equal((yyvsp[-2].block), (yyvsp[0].block));}
#line 1927 "src/Parser.tab.cpp"
    break;

  case 94: /* equality_expression: equality_expression NE_OP relational_expression  */
#line 307 "src/Parser.y"
                                                          { (yyval.block) = new NotEqual((yyvsp[-2].block), (yyvsp[0].block));}
#line 1933 "src/Parser.tab.cpp"
    break;

  case 95: /* and_expression: equality_expression  */
#line 311 "src/Parser.y"
                              { (yyval.block) = (yyvsp[0].block);}
#line 1939 "src/Parser.tab.cpp"
    break;

  case 96: /* and_expression: and_expression '&' equality_expression  */
#line 312 "src/Parser.y"
                                                 { (yyval.block) = new BitwiseAnd((yyvsp[-2].block), (yyvsp[0].block));}
#line 1945 "src/Parser.tab.cpp"
    break;

  case 97: /* exclusive_or_expression: and_expression  */
#line 316 "src/Parser.y"
                         { (yyval.block) = (yyvsp[0].block);}
#line 1951 "src/Parser.tab.cpp"
    break;

  case 98: /* exclusive_or_expression: exclusive_or_expression '^' and_expression  */
#line 317 "src/Parser.y"
                                                     { (yyval.block) = new BitwiseXor((yyvsp[-2].block), (yyvsp[0].block));}
#line 1957 "src/Parser.tab.cpp"
    break;

  case 99: /* inclusive_or_expression: exclusive_or_expression  */
#line 321 "src/Parser.y"
                                  { (yyval.block) = (yyvsp[0].block);}
#line 1963 "src/Parser.tab.cpp"
    break;

  case 100: /* inclusive_or_expression: inclusive_or_expression '|' exclusive_or_expression  */
#line 322 "src/Parser.y"
                                                              { (yyval.block) = new BitwiseOr((yyvsp[-2].block), (yyvsp[0].block));}
#line 1969 "src/Parser.tab.cpp"
    break;

  case 101: /* logical_and_expression: inclusive_or_expression  */
#line 326 "src/Parser.y"
                                  { (yyval.block) = (yyvsp[0].block);}
#line 1975 "src/Parser.tab.cpp"
    break;

  case 102: /* logical_and_expression: logical_and_expression AND_OP inclusive_or_expression  */
#line 327 "src/Parser.y"
                                                                { (yyval.block) = new LogicalAnd((yyvsp[-2].block), (yyvsp[0].block));}
#line 1981 "src/Parser.tab.cpp"
    break;

  case 103: /* logical_or_expression: logical_and_expression  */
#line 331 "src/Parser.y"
                                 { (yyval.block) = (yyvsp[0].block);}
#line 1987 "src/Parser.tab.cpp"
    break;

  case 104: /* logical_or_expression: logical_or_expression OR_OP logical_and_expression  */
#line 332 "src/Parser.y"
                                                             { (yyval.block) = new LogicalOr((yyvsp[-2].block), (yyvsp[0].block));}
#line 1993 "src/Parser.tab.cpp"
    break;

  case 105: /* assignment_expression: logical_or_expression  */
#line 336 "src/Parser.y"
                                { (yyval.block) = (yyvsp[0].block);}
#line 1999 "src/Parser.tab.cpp"
    break;

  case 106: /* assignment_expression: unary_expression '=' assignment_expression  */
#line 338 "src/Parser.y"
                                                     { (yyval.block) = new Assignment((yyvsp[-2].block), "=", (yyvsp[0].block));}
#line 2005 "src/Parser.tab.cpp"
    break;

  case 107: /* assignment_expression: unary_expression MUL_ASSIGN assignment_expression  */
#line 339 "src/Parser.y"
                                                            { (yyval.block) = new Assignment((yyvsp[-2].block), "*=", new Multiplication((yyvsp[-2].block), (yyvsp[0].block)));}
#line 2011 "src/Parser.tab.cpp"
    break;

  case 108: /* assignment_expression: unary_expression DIV_ASSIGN assignment_expression  */
#line 340 "src/Parser.y"
                                                            { (yyval.block) = new Assignment((yyvsp[-2].block), "/=", new Division((yyvsp[-2].block), (yyvsp[0].block)));}
#line 2017 "src/Parser.tab.cpp"
    break;

  case 109: /* assignment_expression: unary_expression MOD_ASSIGN assignment_expression  */
#line 341 "src/Parser.y"
                                                            { (yyval.block) = new Assignment((yyvsp[-2].block), "%=", new Modulo((yyvsp[-2].block), (yyvsp[0].block)));}
#line 2023 "src/Parser.tab.cpp"
    break;

  case 110: /* assignment_expression: unary_expression ADD_ASSIGN assignment_expression  */
#line 342 "src/Parser.y"
                                                            { (yyval.block) = new Assignment((yyvsp[-2].block), "+=", new Addition((yyvsp[-2].block), (yyvsp[0].block)));}
#line 2029 "src/Parser.tab.cpp"
    break;

  case 111: /* assignment_expression: unary_expression SUB_ASSIGN assignment_expression  */
#line 343 "src/Parser.y"
                                                            { (yyval.block) = new Assignment((yyvsp[-2].block), "-=", new Subtraction((yyvsp[-2].block), (yyvsp[0].block)));}
#line 2035 "src/Parser.tab.cpp"
    break;

  case 112: /* primary_expression: IDENTIFIER  */
#line 348 "src/Parser.y"
                     { (yyval.block) = new Expression(*(yyvsp[0].string)); delete (yyvsp[0].string);}
#line 2041 "src/Parser.tab.cpp"
    break;

  case 113: /* primary_expression: CONSTANT  */
#line 349 "src/Parser.y"
                   { (yyval.block) = new Expression(stoi(*(yyvsp[0].string))); delete (yyvsp[0].string);}
#line 2047 "src/Parser.tab.cpp"
    break;

  case 114: /* primary_expression: '(' expression ')'  */
#line 351 "src/Parser.y"
                             { (yyval.block) = (yyvsp[-1].block); }
#line 2053 "src/Parser.tab.cpp"
    break;


#line 2057 "src/Parser.tab.cpp"

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

#line 363 "src/Parser.y"


const Block *g_root;

const Block *parseAST() {
    g_root = 0;
    yyparse();
    return g_root;
}
