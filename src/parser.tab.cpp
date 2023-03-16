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

#include "parser.tab.hpp"
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
  YYSYMBOL_64_ = 64,                       /* '('  */
  YYSYMBOL_65_ = 65,                       /* ')'  */
  YYSYMBOL_66_ = 66,                       /* '{'  */
  YYSYMBOL_67_ = 67,                       /* '}'  */
  YYSYMBOL_68_ = 68,                       /* '*'  */
  YYSYMBOL_69_ = 69,                       /* '/'  */
  YYSYMBOL_70_ = 70,                       /* '+'  */
  YYSYMBOL_71_ = 71,                       /* '-'  */
  YYSYMBOL_72_ = 72,                       /* '<'  */
  YYSYMBOL_73_ = 73,                       /* '>'  */
  YYSYMBOL_74_ = 74,                       /* '&'  */
  YYSYMBOL_75_ = 75,                       /* '^'  */
  YYSYMBOL_76_ = 76,                       /* '|'  */
  YYSYMBOL_YYACCEPT = 77,                  /* $accept  */
  YYSYMBOL_ROOT = 78,                      /* ROOT  */
  YYSYMBOL_translation_unit = 79,          /* translation_unit  */
  YYSYMBOL_external_declaration = 80,      /* external_declaration  */
  YYSYMBOL_declaration_list = 81,          /* declaration_list  */
  YYSYMBOL_declaration = 82,               /* declaration  */
  YYSYMBOL_init_declarator = 83,           /* init_declarator  */
  YYSYMBOL_function_definition = 84,       /* function_definition  */
  YYSYMBOL_declaration_specifiers = 85,    /* declaration_specifiers  */
  YYSYMBOL_type_specifier = 86,            /* type_specifier  */
  YYSYMBOL_declarator = 87,                /* declarator  */
  YYSYMBOL_direct_declarator = 88,         /* direct_declarator  */
  YYSYMBOL_compound_statement = 89,        /* compound_statement  */
  YYSYMBOL_statement_list = 90,            /* statement_list  */
  YYSYMBOL_statement = 91,                 /* statement  */
  YYSYMBOL_jump_statement = 92,            /* jump_statement  */
  YYSYMBOL_expression_statement = 93,      /* expression_statement  */
  YYSYMBOL_selection_statement = 94,       /* selection_statement  */
  YYSYMBOL_iteration_statement = 95,       /* iteration_statement  */
  YYSYMBOL_expression = 96,                /* expression  */
  YYSYMBOL_postfix_expression = 97,        /* postfix_expression  */
  YYSYMBOL_unary_expression = 98,          /* unary_expression  */
  YYSYMBOL_multiplicative_expression = 99, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 100,      /* additive_expression  */
  YYSYMBOL_relational_expression = 101,    /* relational_expression  */
  YYSYMBOL_equality_expression = 102,      /* equality_expression  */
  YYSYMBOL_and_expression = 103,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 104,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 105,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 106,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 107,    /* logical_or_expression  */
  YYSYMBOL_assignment_expression = 108,    /* assignment_expression  */
  YYSYMBOL_primary_expression = 109,       /* primary_expression  */
  YYSYMBOL_assignment_operator = 110       /* assignment_operator  */
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
#define YYFINAL  40
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   240

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  77
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  141

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
       2,     2,     2,     2,     2,     2,     2,     2,    74,     2,
      64,    65,    68,    70,     2,    71,     2,    69,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    62,
      72,    63,    73,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    75,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    66,    76,    67,     2,     2,     2,     2,
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
       0,    94,    94,    98,    99,   103,   107,   108,   112,   116,
     117,   122,   125,   129,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   146,   150,   151,   152,   157,   159,
     160,   161,   165,   166,   171,   172,   173,   174,   175,   179,
     183,   184,   188,   189,   193,   194,   198,   207,   213,   214,
     218,   219,   220,   227,   228,   229,   233,   234,   235,   239,
     240,   241,   242,   243,   247,   248,   249,   253,   254,   258,
     259,   263,   264,   268,   269,   273,   274,   279,   280,   284,
     285,   286,   287,   291,   292,   293,   294,   295,   296
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
  "VOID", "TYPE_NAME", "RETURN", "LOWER_THAN_ELSE", "';'", "'='", "'('",
  "')'", "'{'", "'}'", "'*'", "'/'", "'+'", "'-'", "'<'", "'>'", "'&'",
  "'^'", "'|'", "$accept", "ROOT", "translation_unit",
  "external_declaration", "declaration_list", "declaration",
  "init_declarator", "function_definition", "declaration_specifiers",
  "type_specifier", "declarator", "direct_declarator",
  "compound_statement", "statement_list", "statement", "jump_statement",
  "expression_statement", "selection_statement", "iteration_statement",
  "expression", "postfix_expression", "unary_expression",
  "multiplicative_expression", "additive_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "assignment_expression", "primary_expression", "assignment_operator", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-71)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     180,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,    33,    31,   -71,   -71,   -71,   -71,   -32,   -71,   -71,
      33,    33,   -71,   -71,   -71,    33,   -49,    16,   -34,   -42,
       0,    -5,    25,   -46,   -50,   -36,    30,    44,   -71,   -71,
     -71,   -71,   -32,    -2,   -43,     1,   -71,   -71,    11,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,    33,    33,
      33,    33,    33,    33,    33,    33,    33,    33,    33,    33,
      33,    33,    33,    33,    14,   -71,    33,    -3,   -71,    34,
     -71,   -71,   -71,   -71,   -71,   -42,   -42,     0,     0,     0,
       0,    -5,    -5,    25,   -46,   -50,   -36,    30,   -71,   -71,
      37,    40,   142,   -71,   -71,    36,   -71,   -32,   -71,    72,
     -71,   -71,   -71,   -71,   -71,    52,   -71,    33,    33,    26,
     -71,   -71,   107,    53,   -71,   -71,   -71,    50,    58,    54,
     -71,   142,   142,    33,    83,   -71,    59,   142,    63,   -71,
     -71
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    15,    16,    17,    18,    21,    22,    19,    20,    14,
      23,     0,     0,     2,     3,     4,     5,     0,    13,    12,
       0,     0,    79,    80,    81,     0,     0,    50,    53,    56,
      59,    64,    67,    69,    71,    73,    75,    77,    46,    47,
       1,    25,     0,     0,     9,    24,    51,    52,     0,    39,
      48,    49,    84,    85,    86,    87,    88,    83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     8,     0,     0,    11,     0,
      82,    78,    54,    55,    53,    57,    58,    62,    63,    60,
      61,    65,    66,    68,    70,    72,    74,    76,    26,    10,
       0,     0,     0,    40,    28,     0,     6,     0,    36,     0,
      32,    34,    35,    37,    38,     0,    27,     0,     0,     0,
      31,     7,     0,     9,    29,    33,    41,     0,     0,     0,
      30,     0,     0,     0,    42,    44,     0,     0,     0,    43,
      45
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -71,   -71,   -71,   -71,   -71,   -70,   -71,   -71,   126,   -71,
     -41,   -71,    84,    22,    28,   129,   -71,   -71,   -71,   -11,
     -71,   156,    13,   -47,    43,    62,    65,    70,    61,    69,
     -71,   -52,   -71,   -71
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    12,    13,    14,   105,    15,    43,    16,   107,    18,
      44,    45,   108,   109,   110,   111,   112,   113,   114,   115,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    58
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      26,    74,    20,    21,    63,    64,    81,   106,    52,    53,
      54,    55,    56,    49,    48,    41,    87,    88,    89,    90,
      76,    50,    51,    77,    99,    70,    59,    60,    69,    57,
     100,    40,    42,   101,   102,   121,    67,    68,    20,    21,
      71,    20,    21,    72,    22,    23,    24,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    73,   103,
      75,    25,   129,    77,   104,    79,   123,    65,    66,   100,
      61,    62,   101,   102,    85,    86,    80,    20,    21,    98,
      22,    23,    24,    22,    23,    24,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    25,   103,   116,
      25,   117,    77,   120,   118,   100,   127,   128,   101,   102,
      91,    92,    20,    21,   126,   131,    76,   137,   133,    22,
      23,    24,   136,   132,   138,   140,    17,   122,    78,    19,
     119,    93,    11,    96,   103,    94,    25,   125,    77,   124,
     100,    95,    97,   101,   102,     0,     0,    20,    21,     0,
     125,     0,     0,     0,    22,    23,    24,     0,     0,   134,
     135,     0,     0,     0,     0,   139,     0,    11,     0,   103,
       0,    25,     0,    77,   130,   100,    46,    47,   101,   102,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
      23,    24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,     0,   103,     0,    25,     0,    77,     0,
       0,     0,     0,     0,     0,    82,    83,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11
};

static const yytype_int16 yycheck[] =
{
      11,    42,     5,     6,     9,    10,    58,    77,    42,    43,
      44,    45,    46,    62,    25,    47,    63,    64,    65,    66,
      63,     5,     6,    66,    76,    75,    68,    69,    74,    63,
      33,     0,    64,    36,    37,   105,    11,    12,     5,     6,
      76,     5,     6,    13,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    14,    62,
      62,    64,    36,    66,    67,    64,   107,    72,    73,    33,
      70,    71,    36,    37,    61,    62,    65,     5,     6,    65,
      47,    48,    49,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    64,    62,    65,
      64,    64,    66,    67,    64,    33,   117,   118,    36,    37,
      67,    68,     5,     6,    62,    65,    63,    34,    64,    47,
      48,    49,   133,    65,    65,    62,     0,   105,    44,     0,
     102,    69,    60,    72,    62,    70,    64,   109,    66,    67,
      33,    71,    73,    36,    37,    -1,    -1,     5,     6,    -1,
     122,    -1,    -1,    -1,    47,    48,    49,    -1,    -1,   131,
     132,    -1,    -1,    -1,    -1,   137,    -1,    60,    -1,    62,
      -1,    64,    -1,    66,    67,    33,    20,    21,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    62,    -1,    64,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    78,    79,    80,    82,    84,    85,    86,    92,
       5,     6,    47,    48,    49,    64,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
       0,    47,    64,    83,    87,    88,    98,    98,    96,    62,
       5,     6,    42,    43,    44,    45,    46,    63,   110,    68,
      69,    70,    71,     9,    10,    72,    73,    11,    12,    74,
      75,    76,    13,    14,    87,    62,    63,    66,    89,    64,
      65,   108,    98,    98,    98,    99,    99,   100,   100,   100,
     100,   101,   101,   102,   103,   104,   105,   106,    65,   108,
      33,    36,    37,    62,    67,    81,    82,    85,    89,    90,
      91,    92,    93,    94,    95,    96,    65,    64,    64,    91,
      67,    82,    90,    87,    67,    91,    62,    96,    96,    36,
      67,    65,    65,    64,    91,    91,    96,    34,    65,    91,
      62
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    77,    78,    79,    79,    80,    81,    81,    82,    83,
      83,    84,    84,    85,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    87,    88,    88,    88,    89,    89,
      89,    89,    90,    90,    91,    91,    91,    91,    91,    92,
      93,    93,    94,    94,    95,    95,    96,    97,    97,    97,
      98,    98,    98,    99,    99,    99,   100,   100,   100,   101,
     101,   101,   101,   101,   102,   102,   102,   103,   103,   104,
     104,   105,   105,   106,   106,   107,   107,   108,   108,   109,
     109,   109,   109,   110,   110,   110,   110,   110,   110
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     2,     3,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     2,     3,
       4,     3,     1,     2,     1,     1,     1,     1,     1,     3,
       1,     2,     5,     7,     5,     7,     1,     1,     2,     2,
       1,     2,     2,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1
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
#line 94 "src/parser.y"
                        { g_root = (yyvsp[0].block); }
#line 1299 "src/parser.tab.cpp"
    break;

  case 3: /* translation_unit: external_declaration  */
#line 98 "src/parser.y"
                               { (yyval.block) = (yyvsp[0].block); }
#line 1305 "src/parser.tab.cpp"
    break;

  case 4: /* translation_unit: declaration  */
#line 99 "src/parser.y"
                        { (yyval.block) = (yyvsp[0].block);}
#line 1311 "src/parser.tab.cpp"
    break;

  case 5: /* external_declaration: function_definition  */
#line 103 "src/parser.y"
                              { (yyval.block) = (yyvsp[0].block);}
#line 1317 "src/parser.tab.cpp"
    break;

  case 6: /* declaration_list: declaration  */
#line 107 "src/parser.y"
                      { std::vector<BlockPtr>* BlockList = new std::vector<BlockPtr>(); BlockList->push_back((yyvsp[0].block));  (yyval.list) = BlockList; }
#line 1323 "src/parser.tab.cpp"
    break;

  case 7: /* declaration_list: declaration_list declaration  */
#line 108 "src/parser.y"
                                       { (yyvsp[-1].list)->push_back((yyvsp[0].block)); (yyval.list) = (yyvsp[-1].list); }
#line 1329 "src/parser.tab.cpp"
    break;

  case 8: /* declaration: declaration_specifiers init_declarator ';'  */
#line 112 "src/parser.y"
                                                     { (yyval.block) = new Declaration(*(yyvsp[-2].string), (yyvsp[-1].block));}
#line 1335 "src/parser.tab.cpp"
    break;

  case 9: /* init_declarator: declarator  */
#line 116 "src/parser.y"
                     { (yyval.block) = new Init_Declarator((yyvsp[0].block));}
#line 1341 "src/parser.tab.cpp"
    break;

  case 10: /* init_declarator: declarator '=' assignment_expression  */
#line 117 "src/parser.y"
                                               { (yyval.block) = new Init_Declarator((yyvsp[-2].block), (yyvsp[0].block));}
#line 1347 "src/parser.tab.cpp"
    break;

  case 11: /* function_definition: declaration_specifiers declarator compound_statement  */
#line 122 "src/parser.y"
                                                               { (yyval.block) = new Function(*(yyvsp[-2].string), (yyvsp[-1].block), (yyvsp[0].block)); }
#line 1353 "src/parser.tab.cpp"
    break;

  case 12: /* function_definition: jump_statement  */
#line 125 "src/parser.y"
                         { (yyval.block) = (yyvsp[0].block); }
#line 1359 "src/parser.tab.cpp"
    break;

  case 13: /* declaration_specifiers: type_specifier  */
#line 129 "src/parser.y"
                         { (yyval.string) = (yyvsp[0].string);}
#line 1365 "src/parser.tab.cpp"
    break;

  case 14: /* type_specifier: VOID  */
#line 133 "src/parser.y"
                    { (yyval.string) = (yyvsp[0].string); }
#line 1371 "src/parser.tab.cpp"
    break;

  case 15: /* type_specifier: CHAR  */
#line 134 "src/parser.y"
                    { (yyval.string) = (yyvsp[0].string); }
#line 1377 "src/parser.tab.cpp"
    break;

  case 16: /* type_specifier: SHORT  */
#line 135 "src/parser.y"
                    { (yyval.string) = (yyvsp[0].string); }
#line 1383 "src/parser.tab.cpp"
    break;

  case 17: /* type_specifier: INT  */
#line 136 "src/parser.y"
                    { (yyval.string) = (yyvsp[0].string); }
#line 1389 "src/parser.tab.cpp"
    break;

  case 18: /* type_specifier: LONG  */
#line 137 "src/parser.y"
                    { (yyval.string) = (yyvsp[0].string); }
#line 1395 "src/parser.tab.cpp"
    break;

  case 19: /* type_specifier: FLOAT  */
#line 138 "src/parser.y"
                    { (yyval.string) = (yyvsp[0].string); }
#line 1401 "src/parser.tab.cpp"
    break;

  case 20: /* type_specifier: DOUBLE  */
#line 139 "src/parser.y"
                    { (yyval.string) = (yyvsp[0].string); }
#line 1407 "src/parser.tab.cpp"
    break;

  case 21: /* type_specifier: SIGNED  */
#line 140 "src/parser.y"
                    { (yyval.string) = (yyvsp[0].string); }
#line 1413 "src/parser.tab.cpp"
    break;

  case 22: /* type_specifier: UNSIGNED  */
#line 141 "src/parser.y"
                    { (yyval.string) = (yyvsp[0].string); }
#line 1419 "src/parser.tab.cpp"
    break;

  case 23: /* type_specifier: TYPE_NAME  */
#line 142 "src/parser.y"
                    { (yyval.string) = (yyvsp[0].string); }
#line 1425 "src/parser.tab.cpp"
    break;

  case 24: /* declarator: direct_declarator  */
#line 146 "src/parser.y"
                            { (yyval.block) = (yyvsp[0].block);}
#line 1431 "src/parser.tab.cpp"
    break;

  case 25: /* direct_declarator: IDENTIFIER  */
#line 150 "src/parser.y"
                     { (yyval.block) = new Declarator(*(yyvsp[0].string)); delete (yyvsp[0].string);}
#line 1437 "src/parser.tab.cpp"
    break;

  case 26: /* direct_declarator: '(' declarator ')'  */
#line 151 "src/parser.y"
                             { (yyval.block) = (yyvsp[-1].block); }
#line 1443 "src/parser.tab.cpp"
    break;

  case 27: /* direct_declarator: direct_declarator '(' ')'  */
#line 152 "src/parser.y"
                                    { (yyval.block) = (yyvsp[-2].block);}
#line 1449 "src/parser.tab.cpp"
    break;

  case 28: /* compound_statement: '{' '}'  */
#line 157 "src/parser.y"
                  { (yyval.block) = new Expression("null"); }
#line 1455 "src/parser.tab.cpp"
    break;

  case 29: /* compound_statement: '{' statement_list '}'  */
#line 159 "src/parser.y"
                                 {(yyval.block) = new Compound_Statement((yyvsp[-1].list));}
#line 1461 "src/parser.tab.cpp"
    break;

  case 30: /* compound_statement: '{' declaration_list statement_list '}'  */
#line 160 "src/parser.y"
                                                  {(yyval.block) = new Compound_Statement((yyvsp[-2].list), (yyvsp[-1].list));}
#line 1467 "src/parser.tab.cpp"
    break;

  case 31: /* compound_statement: '{' declaration_list '}'  */
#line 161 "src/parser.y"
                                   {(yyval.block) = new Compound_Statement((yyvsp[-1].list));}
#line 1473 "src/parser.tab.cpp"
    break;

  case 32: /* statement_list: statement  */
#line 165 "src/parser.y"
                        { std::vector<BlockPtr>* BlockList = new std::vector<BlockPtr>(); BlockList->push_back((yyvsp[0].block));  (yyval.list) = BlockList; }
#line 1479 "src/parser.tab.cpp"
    break;

  case 33: /* statement_list: statement_list statement  */
#line 166 "src/parser.y"
                                   { (yyvsp[-1].list)->push_back((yyvsp[0].block)); (yyval.list) = (yyvsp[-1].list); }
#line 1485 "src/parser.tab.cpp"
    break;

  case 34: /* statement: jump_statement  */
#line 171 "src/parser.y"
                         {(yyval.block) = (yyvsp[0].block);}
#line 1491 "src/parser.tab.cpp"
    break;

  case 35: /* statement: expression_statement  */
#line 172 "src/parser.y"
                               { (yyval.block) = (yyvsp[0].block); }
#line 1497 "src/parser.tab.cpp"
    break;

  case 36: /* statement: compound_statement  */
#line 173 "src/parser.y"
                             { (yyval.block) = (yyvsp[0].block); }
#line 1503 "src/parser.tab.cpp"
    break;

  case 37: /* statement: selection_statement  */
#line 174 "src/parser.y"
                              { (yyval.block) = (yyvsp[0].block); }
#line 1509 "src/parser.tab.cpp"
    break;

  case 38: /* statement: iteration_statement  */
#line 175 "src/parser.y"
                              { (yyval.block) = (yyvsp[0].block); }
#line 1515 "src/parser.tab.cpp"
    break;

  case 39: /* jump_statement: RETURN expression ';'  */
#line 179 "src/parser.y"
                                {(yyval.block)= new jump_statement(*(yyvsp[-2].string),(yyvsp[-1].block)); delete (yyvsp[-2].string);}
#line 1521 "src/parser.tab.cpp"
    break;

  case 40: /* expression_statement: ';'  */
#line 183 "src/parser.y"
                { (yyval.block) = new Expression("null"); }
#line 1527 "src/parser.tab.cpp"
    break;

  case 41: /* expression_statement: expression ';'  */
#line 184 "src/parser.y"
                         { (yyval.block) = (yyvsp[-1].block); }
#line 1533 "src/parser.tab.cpp"
    break;

  case 42: /* selection_statement: IF '(' expression ')' statement  */
#line 188 "src/parser.y"
                                          { (yyval.block) = new IfElse((yyvsp[-2].block), (yyvsp[0].block));}
#line 1539 "src/parser.tab.cpp"
    break;

  case 43: /* selection_statement: IF '(' expression ')' statement ELSE statement  */
#line 189 "src/parser.y"
                                                         { (yyval.block) = new IfElse((yyvsp[-4].block), (yyvsp[-2].block), (yyvsp[0].block));}
#line 1545 "src/parser.tab.cpp"
    break;

  case 44: /* iteration_statement: WHILE '(' expression ')' statement  */
#line 193 "src/parser.y"
                                             { (yyval.block) = new While((yyvsp[-2].block), (yyvsp[0].block));}
#line 1551 "src/parser.tab.cpp"
    break;

  case 45: /* iteration_statement: DO statement WHILE '(' expression ')' ';'  */
#line 194 "src/parser.y"
                                                    { (yyval.block) = new While((yyvsp[-2].block), (yyvsp[-5].block));}
#line 1557 "src/parser.tab.cpp"
    break;

  case 46: /* expression: assignment_expression  */
#line 198 "src/parser.y"
                                { (yyval.block) = (yyvsp[0].block); }
#line 1563 "src/parser.tab.cpp"
    break;

  case 47: /* postfix_expression: primary_expression  */
#line 207 "src/parser.y"
                             { (yyval.block) = (yyvsp[0].block);}
#line 1569 "src/parser.tab.cpp"
    break;

  case 48: /* postfix_expression: postfix_expression INC_OP  */
#line 213 "src/parser.y"
                                    { (yyval.block) = new Inc((yyvsp[-1].block));}
#line 1575 "src/parser.tab.cpp"
    break;

  case 49: /* postfix_expression: postfix_expression DEC_OP  */
#line 214 "src/parser.y"
                                    { (yyval.block) = new Dec((yyvsp[-1].block));}
#line 1581 "src/parser.tab.cpp"
    break;

  case 50: /* unary_expression: postfix_expression  */
#line 218 "src/parser.y"
                             { (yyval.block) = (yyvsp[0].block);}
#line 1587 "src/parser.tab.cpp"
    break;

  case 51: /* unary_expression: INC_OP unary_expression  */
#line 219 "src/parser.y"
                                  { (yyval.block) = new Inc((yyvsp[0].block));}
#line 1593 "src/parser.tab.cpp"
    break;

  case 52: /* unary_expression: DEC_OP unary_expression  */
#line 220 "src/parser.y"
                                  { (yyval.block) = new Dec((yyvsp[0].block));}
#line 1599 "src/parser.tab.cpp"
    break;

  case 53: /* multiplicative_expression: unary_expression  */
#line 227 "src/parser.y"
                           { (yyval.block) = (yyvsp[0].block);}
#line 1605 "src/parser.tab.cpp"
    break;

  case 54: /* multiplicative_expression: multiplicative_expression '*' unary_expression  */
#line 228 "src/parser.y"
                                                          { (yyval.block) = new Multiplication((yyvsp[-2].block), (yyvsp[0].block));}
#line 1611 "src/parser.tab.cpp"
    break;

  case 55: /* multiplicative_expression: multiplicative_expression '/' unary_expression  */
#line 229 "src/parser.y"
                                                         { (yyval.block) = new Division((yyvsp[-2].block), (yyvsp[0].block));}
#line 1617 "src/parser.tab.cpp"
    break;

  case 56: /* additive_expression: multiplicative_expression  */
#line 233 "src/parser.y"
                                    { (yyval.block) = (yyvsp[0].block);}
#line 1623 "src/parser.tab.cpp"
    break;

  case 57: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 234 "src/parser.y"
                                                            { (yyval.block) = new Addition((yyvsp[-2].block), (yyvsp[0].block));}
#line 1629 "src/parser.tab.cpp"
    break;

  case 58: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 235 "src/parser.y"
                                                            { (yyval.block) = new Subtraction((yyvsp[-2].block), (yyvsp[0].block));}
#line 1635 "src/parser.tab.cpp"
    break;

  case 59: /* relational_expression: additive_expression  */
#line 239 "src/parser.y"
                              { (yyval.block) = (yyvsp[0].block);}
#line 1641 "src/parser.tab.cpp"
    break;

  case 60: /* relational_expression: relational_expression '<' additive_expression  */
#line 240 "src/parser.y"
                                                        { (yyval.block) = new LessThan((yyvsp[-2].block), (yyvsp[0].block));}
#line 1647 "src/parser.tab.cpp"
    break;

  case 61: /* relational_expression: relational_expression '>' additive_expression  */
#line 241 "src/parser.y"
                                                        { (yyval.block) = new GreaterThan((yyvsp[-2].block), (yyvsp[0].block));}
#line 1653 "src/parser.tab.cpp"
    break;

  case 62: /* relational_expression: relational_expression LE_OP additive_expression  */
#line 242 "src/parser.y"
                                                          { (yyval.block) = new LessThanEqual((yyvsp[-2].block), (yyvsp[0].block));}
#line 1659 "src/parser.tab.cpp"
    break;

  case 63: /* relational_expression: relational_expression GE_OP additive_expression  */
#line 243 "src/parser.y"
                                                          { (yyval.block) = new GreaterThanEqual((yyvsp[-2].block), (yyvsp[0].block));}
#line 1665 "src/parser.tab.cpp"
    break;

  case 64: /* equality_expression: relational_expression  */
#line 247 "src/parser.y"
                                { (yyval.block) = (yyvsp[0].block);}
#line 1671 "src/parser.tab.cpp"
    break;

  case 65: /* equality_expression: equality_expression EQ_OP relational_expression  */
#line 248 "src/parser.y"
                                                          { (yyval.block) = new Equal((yyvsp[-2].block), (yyvsp[0].block));}
#line 1677 "src/parser.tab.cpp"
    break;

  case 66: /* equality_expression: equality_expression NE_OP relational_expression  */
#line 249 "src/parser.y"
                                                          { (yyval.block) = new NotEqual((yyvsp[-2].block), (yyvsp[0].block));}
#line 1683 "src/parser.tab.cpp"
    break;

  case 67: /* and_expression: equality_expression  */
#line 253 "src/parser.y"
                              { (yyval.block) = (yyvsp[0].block);}
#line 1689 "src/parser.tab.cpp"
    break;

  case 68: /* and_expression: and_expression '&' equality_expression  */
#line 254 "src/parser.y"
                                                 { (yyval.block) = new BitwiseAnd((yyvsp[-2].block), (yyvsp[0].block));}
#line 1695 "src/parser.tab.cpp"
    break;

  case 69: /* exclusive_or_expression: and_expression  */
#line 258 "src/parser.y"
                         { (yyval.block) = (yyvsp[0].block);}
#line 1701 "src/parser.tab.cpp"
    break;

  case 70: /* exclusive_or_expression: exclusive_or_expression '^' and_expression  */
#line 259 "src/parser.y"
                                                     { (yyval.block) = new BitwiseXor((yyvsp[-2].block), (yyvsp[0].block));}
#line 1707 "src/parser.tab.cpp"
    break;

  case 71: /* inclusive_or_expression: exclusive_or_expression  */
#line 263 "src/parser.y"
                                  { (yyval.block) = (yyvsp[0].block);}
#line 1713 "src/parser.tab.cpp"
    break;

  case 72: /* inclusive_or_expression: inclusive_or_expression '|' exclusive_or_expression  */
#line 264 "src/parser.y"
                                                              { (yyval.block) = new BitwiseOr((yyvsp[-2].block), (yyvsp[0].block));}
#line 1719 "src/parser.tab.cpp"
    break;

  case 73: /* logical_and_expression: inclusive_or_expression  */
#line 268 "src/parser.y"
                                  { (yyval.block) = (yyvsp[0].block);}
#line 1725 "src/parser.tab.cpp"
    break;

  case 74: /* logical_and_expression: logical_and_expression AND_OP inclusive_or_expression  */
#line 269 "src/parser.y"
                                                                { (yyval.block) = new LogicalAnd((yyvsp[-2].block), (yyvsp[0].block));}
#line 1731 "src/parser.tab.cpp"
    break;

  case 75: /* logical_or_expression: logical_and_expression  */
#line 273 "src/parser.y"
                                 { (yyval.block) = (yyvsp[0].block);}
#line 1737 "src/parser.tab.cpp"
    break;

  case 76: /* logical_or_expression: logical_or_expression OR_OP logical_and_expression  */
#line 274 "src/parser.y"
                                                             { (yyval.block) = new LogicalOr((yyvsp[-2].block), (yyvsp[0].block));}
#line 1743 "src/parser.tab.cpp"
    break;

  case 77: /* assignment_expression: logical_or_expression  */
#line 279 "src/parser.y"
                                { (yyval.block) = (yyvsp[0].block);}
#line 1749 "src/parser.tab.cpp"
    break;

  case 78: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 280 "src/parser.y"
                                                                     { (yyval.block) = new Assignment((yyvsp[-2].block), *(yyvsp[-1].string), (yyvsp[0].block));}
#line 1755 "src/parser.tab.cpp"
    break;

  case 79: /* primary_expression: IDENTIFIER  */
#line 284 "src/parser.y"
                     { (yyval.block) = new Expression(*(yyvsp[0].string)); delete (yyvsp[0].string);}
#line 1761 "src/parser.tab.cpp"
    break;

  case 80: /* primary_expression: CONSTANT  */
#line 285 "src/parser.y"
                   { (yyval.block) = new Expression(stoi(*(yyvsp[0].string))); delete (yyvsp[0].string);}
#line 1767 "src/parser.tab.cpp"
    break;

  case 81: /* primary_expression: STRING_LITERAL  */
#line 286 "src/parser.y"
                         { (yyval.block) = new Expression(*(yyvsp[0].string)); delete (yyvsp[0].string);}
#line 1773 "src/parser.tab.cpp"
    break;

  case 82: /* primary_expression: '(' expression ')'  */
#line 287 "src/parser.y"
                             { (yyval.block) = (yyvsp[-1].block); }
#line 1779 "src/parser.tab.cpp"
    break;

  case 83: /* assignment_operator: '='  */
#line 291 "src/parser.y"
               { (yyval.string) = new std::string("=");}
#line 1785 "src/parser.tab.cpp"
    break;

  case 84: /* assignment_operator: MUL_ASSIGN  */
#line 292 "src/parser.y"
                     { (yyval.string) = (yyvsp[0].string);}
#line 1791 "src/parser.tab.cpp"
    break;

  case 85: /* assignment_operator: DIV_ASSIGN  */
#line 293 "src/parser.y"
                     { (yyval.string) = (yyvsp[0].string);}
#line 1797 "src/parser.tab.cpp"
    break;

  case 86: /* assignment_operator: MOD_ASSIGN  */
#line 294 "src/parser.y"
                     { (yyval.string) = (yyvsp[0].string);}
#line 1803 "src/parser.tab.cpp"
    break;

  case 87: /* assignment_operator: ADD_ASSIGN  */
#line 295 "src/parser.y"
                     { (yyval.string) = (yyvsp[0].string);}
#line 1809 "src/parser.tab.cpp"
    break;

  case 88: /* assignment_operator: SUB_ASSIGN  */
#line 296 "src/parser.y"
                     { (yyval.string) = (yyvsp[0].string);}
#line 1815 "src/parser.tab.cpp"
    break;


#line 1819 "src/parser.tab.cpp"

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

#line 298 "src/parser.y"




const Block *g_root; 

const Block *parseAST() {
    g_root = 0;
    yyparse();
    return g_root;
}
