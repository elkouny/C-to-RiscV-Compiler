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
  YYSYMBOL_64_ = 64,                       /* '('  */
  YYSYMBOL_65_ = 65,                       /* ')'  */
  YYSYMBOL_66_ = 66,                       /* ','  */
  YYSYMBOL_67_ = 67,                       /* '{'  */
  YYSYMBOL_68_ = 68,                       /* '}'  */
  YYSYMBOL_69_ = 69,                       /* '*'  */
  YYSYMBOL_70_ = 70,                       /* '/'  */
  YYSYMBOL_71_ = 71,                       /* '+'  */
  YYSYMBOL_72_ = 72,                       /* '-'  */
  YYSYMBOL_73_ = 73,                       /* '<'  */
  YYSYMBOL_74_ = 74,                       /* '>'  */
  YYSYMBOL_75_ = 75,                       /* '&'  */
  YYSYMBOL_76_ = 76,                       /* '^'  */
  YYSYMBOL_77_ = 77,                       /* '|'  */
  YYSYMBOL_YYACCEPT = 78,                  /* $accept  */
  YYSYMBOL_ROOT = 79,                      /* ROOT  */
  YYSYMBOL_translation_unit = 80,          /* translation_unit  */
  YYSYMBOL_external_declaration = 81,      /* external_declaration  */
  YYSYMBOL_declaration_list = 82,          /* declaration_list  */
  YYSYMBOL_declaration = 83,               /* declaration  */
  YYSYMBOL_init_declarator = 84,           /* init_declarator  */
  YYSYMBOL_function_definition = 85,       /* function_definition  */
  YYSYMBOL_declaration_specifiers = 86,    /* declaration_specifiers  */
  YYSYMBOL_type_specifier = 87,            /* type_specifier  */
  YYSYMBOL_declarator = 88,                /* declarator  */
  YYSYMBOL_direct_declarator = 89,         /* direct_declarator  */
  YYSYMBOL_parameter_list = 90,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 91,     /* parameter_declaration  */
  YYSYMBOL_compound_statement = 92,        /* compound_statement  */
  YYSYMBOL_statement_list = 93,            /* statement_list  */
  YYSYMBOL_statement = 94,                 /* statement  */
  YYSYMBOL_jump_statement = 95,            /* jump_statement  */
  YYSYMBOL_expression_statement = 96,      /* expression_statement  */
  YYSYMBOL_selection_statement = 97,       /* selection_statement  */
  YYSYMBOL_iteration_statement = 98,       /* iteration_statement  */
  YYSYMBOL_expression = 99,                /* expression  */
  YYSYMBOL_postfix_expression = 100,       /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 101, /* argument_expression_list  */
  YYSYMBOL_unary_expression = 102,         /* unary_expression  */
  YYSYMBOL_multiplicative_expression = 103, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 104,      /* additive_expression  */
  YYSYMBOL_relational_expression = 105,    /* relational_expression  */
  YYSYMBOL_equality_expression = 106,      /* equality_expression  */
  YYSYMBOL_and_expression = 107,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 108,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 109,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 110,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 111,    /* logical_or_expression  */
  YYSYMBOL_assignment_expression = 112,    /* assignment_expression  */
  YYSYMBOL_primary_expression = 113,       /* primary_expression  */
  YYSYMBOL_assignment_operator = 114       /* assignment_operator  */
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
#define YYLAST   321

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  78
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  99
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  164

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
       2,     2,     2,     2,     2,     2,     2,     2,    75,     2,
      64,    65,    69,    71,    66,    72,     2,    70,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    62,
      73,    63,    74,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    76,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    67,    77,    68,     2,     2,     2,     2,
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
       0,    99,    99,   103,   104,   108,   109,   113,   114,   120,
     124,   125,   130,   139,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   156,   160,   161,   162,   163,   167,
     168,   172,   174,   178,   180,   181,   182,   186,   187,   192,
     193,   194,   195,   196,   200,   204,   205,   209,   210,   214,
     215,   216,   217,   221,   230,   232,   233,   236,   237,   241,
     242,   246,   247,   248,   255,   256,   257,   261,   262,   263,
     267,   268,   269,   270,   271,   275,   276,   277,   281,   282,
     286,   287,   291,   292,   296,   297,   301,   302,   306,   307,
     311,   312,   313,   314,   318,   319,   320,   321,   322,   323
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
  "')'", "','", "'{'", "'}'", "'*'", "'/'", "'+'", "'-'", "'<'", "'>'",
  "'&'", "'^'", "'|'", "$accept", "ROOT", "translation_unit",
  "external_declaration", "declaration_list", "declaration",
  "init_declarator", "function_definition", "declaration_specifiers",
  "type_specifier", "declarator", "direct_declarator", "parameter_list",
  "parameter_declaration", "compound_statement", "statement_list",
  "statement", "jump_statement", "expression_statement",
  "selection_statement", "iteration_statement", "expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
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

#define YYPACT_NINF (-96)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     262,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,     9,   262,   -96,   -96,   -96,   -32,   -96,   -96,   -96,
     -96,   -32,   -50,   -45,   -41,   -34,   -96,    39,    84,   -96,
     246,   -96,    39,    39,   -96,   -96,   -96,    39,    19,   -16,
     -53,   -31,    11,    49,   -33,   -37,   -26,    40,    41,   -96,
     -96,    -2,     0,   228,    43,    39,   -96,   -96,   120,   -96,
     -32,   -96,   156,   -96,   -96,   -96,   -96,   -96,    46,   -96,
     -96,   -32,    27,   -96,   -96,   -96,    47,   -96,   -96,    51,
     -96,   -96,   -96,   -96,   -96,   -96,    39,    39,    39,    39,
      39,    39,    39,    39,    39,    39,    39,    39,    39,    39,
      39,    39,    39,    39,    69,     1,    56,   -96,   -96,   192,
      60,   -96,   -96,   -96,   -96,   -96,   262,   -96,   -96,    29,
     -96,   -96,   -96,   -96,   -96,   -53,   -53,   -31,   -31,   -31,
     -31,    11,    11,    49,   -33,   -37,   -26,    40,    59,    62,
      64,     1,   -96,   -96,   -96,   -96,    39,   228,   228,    39,
     221,   -96,    95,   -96,    65,   228,    80,   228,    85,   -96,
     228,   -96,   -96,   -96
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    15,    16,    17,    18,    21,    22,    19,    20,    14,
      23,     0,     2,     3,     6,     5,     0,    13,     1,     4,
      25,     0,     0,    10,    24,     0,     9,     0,     0,    12,
       0,    26,     0,     0,    90,    91,    92,     0,    61,    64,
      67,    70,    75,    78,    80,    82,    84,    86,    88,    11,
      54,     0,     0,     0,     0,     0,    45,    33,     0,     7,
       0,    41,     0,    37,    39,    40,    42,    43,     0,    53,
      28,    32,     0,    29,    62,    63,     0,    57,    58,     0,
      95,    96,    97,    98,    99,    94,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    36,     8,     0,
      10,    34,    38,    46,    31,    27,     0,    93,    55,     0,
      59,    89,    65,    66,    64,    68,    69,    73,    74,    71,
      72,    76,    77,    79,    81,    83,    85,    87,     0,     0,
       0,     0,    44,    35,    30,    56,     0,     0,     0,     0,
       0,    60,    47,    49,     0,     0,     0,     0,     0,    51,
       0,    48,    50,    52
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -96,   -96,   -96,   137,   -96,   -20,   -96,   -96,   -25,   -96,
     -17,   -96,   -96,    34,   131,    97,   -51,   -96,   -95,   -96,
     -96,   -36,   -96,   -96,   -19,    12,   -57,    15,    63,    61,
      66,    81,    82,   -96,   -27,   -96,   -96
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    11,    12,    13,    58,    14,    22,    15,    16,    17,
      23,    24,    72,    73,    61,    62,    63,    64,    65,    66,
      67,    68,    38,   119,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    69,    50,    86
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      49,    76,   104,    60,    25,    71,    32,    33,    59,    18,
     141,   112,    26,    74,    75,    20,    87,    88,    27,   106,
      91,    92,    28,    30,    77,    78,    80,    81,    82,    83,
      84,    31,    21,    60,   127,   128,   129,   130,   108,    98,
      89,    90,    97,   110,    32,    33,   150,    85,    34,    35,
      36,    99,   120,   100,   114,   101,    32,    33,   112,   121,
      95,    96,   102,    56,   103,    37,   138,   139,   122,   123,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,    79,    93,    94,    34,    35,    36,    32,
      33,    71,   115,   116,   145,   146,   152,   153,    34,    35,
      36,   125,   126,    37,   159,   140,   161,   105,   113,   163,
     131,   132,   117,   154,   156,    37,   118,    51,   142,   151,
      52,    53,    54,    27,   147,    32,    33,   148,   149,   157,
     158,    34,    35,    36,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    55,   160,    56,   162,    37,    19,
     144,    28,    57,    51,    29,   109,    52,    53,    54,   134,
     133,    32,    33,     0,     0,   135,     0,    34,    35,    36,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      55,   136,    56,   137,    37,     0,     0,    28,   107,    51,
       0,     0,    52,    53,    54,     0,     0,    32,    33,     0,
       0,     0,     0,    34,    35,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    55,     0,    56,     0,
      37,     0,     0,    28,   111,    51,    32,    33,    52,    53,
      54,     0,     0,    32,    33,     0,     0,     0,     0,    34,
      35,    36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,     0,    56,     0,    37,     0,     0,    28,
     143,    51,     0,     0,    52,    53,    54,     0,    34,    35,
      36,     0,     0,     0,     0,    34,    35,    36,     0,     0,
       0,     0,     0,     0,     0,    37,   155,     0,    55,     0,
      56,     0,    37,     0,     0,    28,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,     0,     0,     0,     0,
       0,    70,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10
};

static const yytype_int16 yycheck[] =
{
      27,    37,    53,    28,    21,    30,     5,     6,    28,     0,
     105,    62,    62,    32,    33,    47,    69,    70,    63,    55,
       9,    10,    67,    64,     5,     6,    42,    43,    44,    45,
      46,    65,    64,    58,    91,    92,    93,    94,    58,    76,
      71,    72,    75,    60,     5,     6,   141,    63,    47,    48,
      49,    77,    79,    13,    71,    14,     5,     6,   109,    86,
      11,    12,    64,    62,    64,    64,   102,   103,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,    64,    73,    74,    47,    48,    49,     5,
       6,   116,    65,    66,    65,    66,   147,   148,    47,    48,
      49,    89,    90,    64,   155,    36,   157,    64,    62,   160,
      95,    96,    65,   149,   150,    64,    65,    33,    62,   146,
      36,    37,    38,    63,    65,     5,     6,    65,    64,    34,
      65,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    65,    62,    62,    64,    12,
     116,    67,    68,    33,    23,    58,    36,    37,    38,    98,
      97,     5,     6,    -1,    -1,    99,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,   100,    62,   101,    64,    -1,    -1,    67,    68,    33,
      -1,    -1,    36,    37,    38,    -1,    -1,     5,     6,    -1,
      -1,    -1,    -1,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,    62,    -1,
      64,    -1,    -1,    67,    68,    33,     5,     6,    36,    37,
      38,    -1,    -1,     5,     6,    -1,    -1,    -1,    -1,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    62,    -1,    64,    -1,    -1,    67,
      68,    33,    -1,    -1,    36,    37,    38,    -1,    47,    48,
      49,    -1,    -1,    -1,    -1,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    65,    -1,    60,    -1,
      62,    -1,    64,    -1,    -1,    67,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    -1,    -1,    -1,    -1,
      -1,    65,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    79,    80,    81,    83,    85,    86,    87,     0,    81,
      47,    64,    84,    88,    89,    88,    62,    63,    67,    92,
      64,    65,     5,     6,    47,    48,    49,    64,   100,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,    33,    36,    37,    38,    60,    62,    68,    82,    83,
      86,    92,    93,    94,    95,    96,    97,    98,    99,   112,
      65,    86,    90,    91,   102,   102,    99,     5,     6,    64,
      42,    43,    44,    45,    46,    63,   114,    69,    70,    71,
      72,     9,    10,    73,    74,    11,    12,    75,    76,    77,
      13,    14,    64,    64,    94,    64,    99,    68,    83,    93,
      88,    68,    94,    62,    88,    65,    66,    65,    65,   101,
     112,   112,   102,   102,   102,   103,   103,   104,   104,   104,
     104,   105,   105,   106,   107,   108,   109,   110,    99,    99,
      36,    96,    62,    68,    91,    65,    66,    65,    65,    64,
      96,   112,    94,    94,    99,    65,    99,    34,    65,    94,
      65,    94,    62,    94
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    78,    79,    80,    80,    81,    81,    82,    82,    83,
      84,    84,    85,    86,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    88,    89,    89,    89,    89,    90,
      90,    91,    91,    92,    92,    92,    92,    93,    93,    94,
      94,    94,    94,    94,    95,    96,    96,    97,    97,    98,
      98,    98,    98,    99,   100,   100,   100,   100,   100,   101,
     101,   102,   102,   102,   103,   103,   103,   104,   104,   104,
     105,   105,   105,   105,   105,   106,   106,   106,   107,   107,
     108,   108,   109,   109,   110,   110,   111,   111,   112,   112,
     113,   113,   113,   113,   114,   114,   114,   114,   114,   114
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     2,     3,
       1,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     1,
       3,     2,     1,     2,     3,     4,     3,     1,     2,     1,
       1,     1,     1,     1,     3,     1,     2,     5,     7,     5,
       7,     6,     7,     1,     1,     3,     4,     2,     2,     1,
       3,     1,     2,     2,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1
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
#line 99 "src/Parser.y"
                        { g_root = (yyvsp[0].block); }
#line 1329 "src/Parser.tab.cpp"
    break;

  case 3: /* translation_unit: external_declaration  */
#line 103 "src/Parser.y"
                               { (yyval.block) = (yyvsp[0].block); }
#line 1335 "src/Parser.tab.cpp"
    break;

  case 4: /* translation_unit: translation_unit external_declaration  */
#line 104 "src/Parser.y"
                                                { (yyval.block) = new TranslationUnit((yyvsp[0].block), (yyvsp[-1].block)); }
#line 1341 "src/Parser.tab.cpp"
    break;

  case 5: /* external_declaration: function_definition  */
#line 108 "src/Parser.y"
                              { (yyval.block) = (yyvsp[0].block);}
#line 1347 "src/Parser.tab.cpp"
    break;

  case 6: /* external_declaration: declaration  */
#line 109 "src/Parser.y"
                        { (yyval.block) = (yyvsp[0].block);}
#line 1353 "src/Parser.tab.cpp"
    break;

  case 7: /* declaration_list: declaration  */
#line 113 "src/Parser.y"
                      { std::vector<BlockPtr>* BlockList = new std::vector<BlockPtr>(); BlockList->push_back((yyvsp[0].block));  (yyval.list) = BlockList; }
#line 1359 "src/Parser.tab.cpp"
    break;

  case 8: /* declaration_list: declaration_list declaration  */
#line 114 "src/Parser.y"
                                       { (yyvsp[-1].list)->push_back((yyvsp[0].block)); (yyval.list) = (yyvsp[-1].list); }
#line 1365 "src/Parser.tab.cpp"
    break;

  case 9: /* declaration: declaration_specifiers init_declarator ';'  */
#line 120 "src/Parser.y"
                                                     { (yyval.block) = new Declaration(*(yyvsp[-2].string), (yyvsp[-1].block));}
#line 1371 "src/Parser.tab.cpp"
    break;

  case 10: /* init_declarator: declarator  */
#line 124 "src/Parser.y"
                     { (yyval.block) = new Init_Declarator((yyvsp[0].block));}
#line 1377 "src/Parser.tab.cpp"
    break;

  case 11: /* init_declarator: declarator '=' assignment_expression  */
#line 125 "src/Parser.y"
                                               { (yyval.block) = new Init_Declarator((yyvsp[-2].block), (yyvsp[0].block));}
#line 1383 "src/Parser.tab.cpp"
    break;

  case 12: /* function_definition: declaration_specifiers declarator compound_statement  */
#line 130 "src/Parser.y"
                                                               { (yyval.block) = new Function(*(yyvsp[-2].string), (yyvsp[-1].block), (yyvsp[0].block)); }
#line 1389 "src/Parser.tab.cpp"
    break;

  case 13: /* declaration_specifiers: type_specifier  */
#line 139 "src/Parser.y"
                         { (yyval.string) = (yyvsp[0].string);}
#line 1395 "src/Parser.tab.cpp"
    break;

  case 14: /* type_specifier: VOID  */
#line 143 "src/Parser.y"
                    { (yyval.string) = (yyvsp[0].string); }
#line 1401 "src/Parser.tab.cpp"
    break;

  case 15: /* type_specifier: CHAR  */
#line 144 "src/Parser.y"
                    { (yyval.string) = (yyvsp[0].string); }
#line 1407 "src/Parser.tab.cpp"
    break;

  case 16: /* type_specifier: SHORT  */
#line 145 "src/Parser.y"
                    { (yyval.string) = (yyvsp[0].string); }
#line 1413 "src/Parser.tab.cpp"
    break;

  case 17: /* type_specifier: INT  */
#line 146 "src/Parser.y"
                    { (yyval.string) = (yyvsp[0].string); }
#line 1419 "src/Parser.tab.cpp"
    break;

  case 18: /* type_specifier: LONG  */
#line 147 "src/Parser.y"
                    { (yyval.string) = (yyvsp[0].string); }
#line 1425 "src/Parser.tab.cpp"
    break;

  case 19: /* type_specifier: FLOAT  */
#line 148 "src/Parser.y"
                    { (yyval.string) = (yyvsp[0].string); }
#line 1431 "src/Parser.tab.cpp"
    break;

  case 20: /* type_specifier: DOUBLE  */
#line 149 "src/Parser.y"
                    { (yyval.string) = (yyvsp[0].string); }
#line 1437 "src/Parser.tab.cpp"
    break;

  case 21: /* type_specifier: SIGNED  */
#line 150 "src/Parser.y"
                    { (yyval.string) = (yyvsp[0].string); }
#line 1443 "src/Parser.tab.cpp"
    break;

  case 22: /* type_specifier: UNSIGNED  */
#line 151 "src/Parser.y"
                    { (yyval.string) = (yyvsp[0].string); }
#line 1449 "src/Parser.tab.cpp"
    break;

  case 23: /* type_specifier: TYPE_NAME  */
#line 152 "src/Parser.y"
                    { (yyval.string) = (yyvsp[0].string); }
#line 1455 "src/Parser.tab.cpp"
    break;

  case 24: /* declarator: direct_declarator  */
#line 156 "src/Parser.y"
                            { (yyval.block) = (yyvsp[0].block);}
#line 1461 "src/Parser.tab.cpp"
    break;

  case 25: /* direct_declarator: IDENTIFIER  */
#line 160 "src/Parser.y"
                     { (yyval.block) = new Declarator(*(yyvsp[0].string)); delete (yyvsp[0].string);}
#line 1467 "src/Parser.tab.cpp"
    break;

  case 26: /* direct_declarator: '(' declarator ')'  */
#line 161 "src/Parser.y"
                             { (yyval.block) = (yyvsp[-1].block); }
#line 1473 "src/Parser.tab.cpp"
    break;

  case 27: /* direct_declarator: direct_declarator '(' parameter_list ')'  */
#line 162 "src/Parser.y"
                                                   { (yyval.block) = new FunctionDeclarator((yyvsp[-3].block), (yyvsp[-1].list)); }
#line 1479 "src/Parser.tab.cpp"
    break;

  case 28: /* direct_declarator: direct_declarator '(' ')'  */
#line 163 "src/Parser.y"
                                    { (yyval.block) = (yyvsp[-2].block);}
#line 1485 "src/Parser.tab.cpp"
    break;

  case 29: /* parameter_list: parameter_declaration  */
#line 167 "src/Parser.y"
                                { std::vector<BlockPtr>* BlockList = new std::vector<BlockPtr>(); BlockList->push_back((yyvsp[0].block));  (yyval.list) = BlockList; }
#line 1491 "src/Parser.tab.cpp"
    break;

  case 30: /* parameter_list: parameter_list ',' parameter_declaration  */
#line 168 "src/Parser.y"
                                                   { (yyvsp[-2].list)->push_back((yyvsp[0].block)); (yyval.list) = (yyvsp[-2].list);}
#line 1497 "src/Parser.tab.cpp"
    break;

  case 31: /* parameter_declaration: declaration_specifiers declarator  */
#line 172 "src/Parser.y"
                                            { (yyval.block) = new ParameterDeclaration(*(yyvsp[-1].string), (yyvsp[0].block));}
#line 1503 "src/Parser.tab.cpp"
    break;

  case 32: /* parameter_declaration: declaration_specifiers  */
#line 174 "src/Parser.y"
                                 { (yyval.block) = new ParameterDeclaration(*(yyvsp[0].string));}
#line 1509 "src/Parser.tab.cpp"
    break;

  case 33: /* compound_statement: '{' '}'  */
#line 178 "src/Parser.y"
                  { (yyval.block) = new Expression("null"); }
#line 1515 "src/Parser.tab.cpp"
    break;

  case 34: /* compound_statement: '{' statement_list '}'  */
#line 180 "src/Parser.y"
                                 {(yyval.block) = new Compound_Statement((yyvsp[-1].list));}
#line 1521 "src/Parser.tab.cpp"
    break;

  case 35: /* compound_statement: '{' declaration_list statement_list '}'  */
#line 181 "src/Parser.y"
                                                  {(yyval.block) = new Compound_Statement((yyvsp[-2].list), (yyvsp[-1].list));}
#line 1527 "src/Parser.tab.cpp"
    break;

  case 36: /* compound_statement: '{' declaration_list '}'  */
#line 182 "src/Parser.y"
                                   {(yyval.block) = new Compound_Statement((yyvsp[-1].list));}
#line 1533 "src/Parser.tab.cpp"
    break;

  case 37: /* statement_list: statement  */
#line 186 "src/Parser.y"
                        { std::vector<BlockPtr>* BlockList = new std::vector<BlockPtr>(); BlockList->push_back((yyvsp[0].block));  (yyval.list) = BlockList; }
#line 1539 "src/Parser.tab.cpp"
    break;

  case 38: /* statement_list: statement_list statement  */
#line 187 "src/Parser.y"
                                   { (yyvsp[-1].list)->push_back((yyvsp[0].block)); (yyval.list) = (yyvsp[-1].list); }
#line 1545 "src/Parser.tab.cpp"
    break;

  case 39: /* statement: jump_statement  */
#line 192 "src/Parser.y"
                         {(yyval.block) = (yyvsp[0].block);}
#line 1551 "src/Parser.tab.cpp"
    break;

  case 40: /* statement: expression_statement  */
#line 193 "src/Parser.y"
                               { (yyval.block) = (yyvsp[0].block); }
#line 1557 "src/Parser.tab.cpp"
    break;

  case 41: /* statement: compound_statement  */
#line 194 "src/Parser.y"
                             { (yyval.block) = (yyvsp[0].block); }
#line 1563 "src/Parser.tab.cpp"
    break;

  case 42: /* statement: selection_statement  */
#line 195 "src/Parser.y"
                              { (yyval.block) = (yyvsp[0].block); }
#line 1569 "src/Parser.tab.cpp"
    break;

  case 43: /* statement: iteration_statement  */
#line 196 "src/Parser.y"
                              { (yyval.block) = (yyvsp[0].block); }
#line 1575 "src/Parser.tab.cpp"
    break;

  case 44: /* jump_statement: RETURN expression ';'  */
#line 200 "src/Parser.y"
                                {(yyval.block)= new jump_statement(*(yyvsp[-2].string),(yyvsp[-1].block)); delete (yyvsp[-2].string);}
#line 1581 "src/Parser.tab.cpp"
    break;

  case 45: /* expression_statement: ';'  */
#line 204 "src/Parser.y"
                { (yyval.block) = new Expression("null"); }
#line 1587 "src/Parser.tab.cpp"
    break;

  case 46: /* expression_statement: expression ';'  */
#line 205 "src/Parser.y"
                         { (yyval.block) = (yyvsp[-1].block); }
#line 1593 "src/Parser.tab.cpp"
    break;

  case 47: /* selection_statement: IF '(' expression ')' statement  */
#line 209 "src/Parser.y"
                                          { (yyval.block) = new IfElse((yyvsp[-2].block), (yyvsp[0].block));}
#line 1599 "src/Parser.tab.cpp"
    break;

  case 48: /* selection_statement: IF '(' expression ')' statement ELSE statement  */
#line 210 "src/Parser.y"
                                                         { (yyval.block) = new IfElse((yyvsp[-4].block), (yyvsp[-2].block), (yyvsp[0].block));}
#line 1605 "src/Parser.tab.cpp"
    break;

  case 49: /* iteration_statement: WHILE '(' expression ')' statement  */
#line 214 "src/Parser.y"
                                             { (yyval.block) = new While((yyvsp[-2].block), (yyvsp[0].block));}
#line 1611 "src/Parser.tab.cpp"
    break;

  case 50: /* iteration_statement: DO statement WHILE '(' expression ')' ';'  */
#line 215 "src/Parser.y"
                                                    { (yyval.block) = new While((yyvsp[-2].block), (yyvsp[-5].block));}
#line 1617 "src/Parser.tab.cpp"
    break;

  case 51: /* iteration_statement: FOR '(' expression_statement expression_statement ')' statement  */
#line 216 "src/Parser.y"
                                                                          { (yyval.block) = new For((yyvsp[-3].block), (yyvsp[-2].block), (yyvsp[0].block));}
#line 1623 "src/Parser.tab.cpp"
    break;

  case 52: /* iteration_statement: FOR '(' expression_statement expression_statement expression ')' statement  */
#line 217 "src/Parser.y"
                                                                                     { (yyval.block) = new For((yyvsp[-4].block), (yyvsp[-3].block), (yyvsp[-2].block), (yyvsp[0].block));}
#line 1629 "src/Parser.tab.cpp"
    break;

  case 53: /* expression: assignment_expression  */
#line 221 "src/Parser.y"
                                { (yyval.block) = (yyvsp[0].block); }
#line 1635 "src/Parser.tab.cpp"
    break;

  case 54: /* postfix_expression: primary_expression  */
#line 230 "src/Parser.y"
                             { (yyval.block) = (yyvsp[0].block);}
#line 1641 "src/Parser.tab.cpp"
    break;

  case 55: /* postfix_expression: postfix_expression '(' ')'  */
#line 232 "src/Parser.y"
                                     { (yyval.block) = new FunctionCall((yyvsp[-2].block));}
#line 1647 "src/Parser.tab.cpp"
    break;

  case 56: /* postfix_expression: postfix_expression '(' argument_expression_list ')'  */
#line 233 "src/Parser.y"
                                                              { (yyval.block) = new FunctionCall((yyvsp[-3].block), (yyvsp[-1].list));}
#line 1653 "src/Parser.tab.cpp"
    break;

  case 57: /* postfix_expression: postfix_expression INC_OP  */
#line 236 "src/Parser.y"
                                    { (yyval.block) = new Inc((yyvsp[-1].block));}
#line 1659 "src/Parser.tab.cpp"
    break;

  case 58: /* postfix_expression: postfix_expression DEC_OP  */
#line 237 "src/Parser.y"
                                    { (yyval.block) = new Dec((yyvsp[-1].block));}
#line 1665 "src/Parser.tab.cpp"
    break;

  case 59: /* argument_expression_list: assignment_expression  */
#line 241 "src/Parser.y"
                                { std::vector<BlockPtr>* BlockList = new std::vector<BlockPtr>(); BlockList->push_back((yyvsp[0].block));  (yyval.list) = BlockList; }
#line 1671 "src/Parser.tab.cpp"
    break;

  case 60: /* argument_expression_list: argument_expression_list ',' assignment_expression  */
#line 242 "src/Parser.y"
                                                             { (yyvsp[-2].list)->push_back((yyvsp[0].block)); (yyval.list) = (yyvsp[-2].list); }
#line 1677 "src/Parser.tab.cpp"
    break;

  case 61: /* unary_expression: postfix_expression  */
#line 246 "src/Parser.y"
                             { (yyval.block) = (yyvsp[0].block);}
#line 1683 "src/Parser.tab.cpp"
    break;

  case 62: /* unary_expression: INC_OP unary_expression  */
#line 247 "src/Parser.y"
                                  { (yyval.block) = new Inc((yyvsp[0].block));}
#line 1689 "src/Parser.tab.cpp"
    break;

  case 63: /* unary_expression: DEC_OP unary_expression  */
#line 248 "src/Parser.y"
                                  { (yyval.block) = new Dec((yyvsp[0].block));}
#line 1695 "src/Parser.tab.cpp"
    break;

  case 64: /* multiplicative_expression: unary_expression  */
#line 255 "src/Parser.y"
                           { (yyval.block) = (yyvsp[0].block);}
#line 1701 "src/Parser.tab.cpp"
    break;

  case 65: /* multiplicative_expression: multiplicative_expression '*' unary_expression  */
#line 256 "src/Parser.y"
                                                          { (yyval.block) = new Multiplication((yyvsp[-2].block), (yyvsp[0].block));}
#line 1707 "src/Parser.tab.cpp"
    break;

  case 66: /* multiplicative_expression: multiplicative_expression '/' unary_expression  */
#line 257 "src/Parser.y"
                                                         { (yyval.block) = new Division((yyvsp[-2].block), (yyvsp[0].block));}
#line 1713 "src/Parser.tab.cpp"
    break;

  case 67: /* additive_expression: multiplicative_expression  */
#line 261 "src/Parser.y"
                                    { (yyval.block) = (yyvsp[0].block);}
#line 1719 "src/Parser.tab.cpp"
    break;

  case 68: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 262 "src/Parser.y"
                                                            { (yyval.block) = new Addition((yyvsp[-2].block), (yyvsp[0].block));}
#line 1725 "src/Parser.tab.cpp"
    break;

  case 69: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 263 "src/Parser.y"
                                                            { (yyval.block) = new Subtraction((yyvsp[-2].block), (yyvsp[0].block));}
#line 1731 "src/Parser.tab.cpp"
    break;

  case 70: /* relational_expression: additive_expression  */
#line 267 "src/Parser.y"
                              { (yyval.block) = (yyvsp[0].block);}
#line 1737 "src/Parser.tab.cpp"
    break;

  case 71: /* relational_expression: relational_expression '<' additive_expression  */
#line 268 "src/Parser.y"
                                                        { (yyval.block) = new LessThan((yyvsp[-2].block), (yyvsp[0].block));}
#line 1743 "src/Parser.tab.cpp"
    break;

  case 72: /* relational_expression: relational_expression '>' additive_expression  */
#line 269 "src/Parser.y"
                                                        { (yyval.block) = new GreaterThan((yyvsp[-2].block), (yyvsp[0].block));}
#line 1749 "src/Parser.tab.cpp"
    break;

  case 73: /* relational_expression: relational_expression LE_OP additive_expression  */
#line 270 "src/Parser.y"
                                                          { (yyval.block) = new LessThanEqual((yyvsp[-2].block), (yyvsp[0].block));}
#line 1755 "src/Parser.tab.cpp"
    break;

  case 74: /* relational_expression: relational_expression GE_OP additive_expression  */
#line 271 "src/Parser.y"
                                                          { (yyval.block) = new GreaterThanEqual((yyvsp[-2].block), (yyvsp[0].block));}
#line 1761 "src/Parser.tab.cpp"
    break;

  case 75: /* equality_expression: relational_expression  */
#line 275 "src/Parser.y"
                                { (yyval.block) = (yyvsp[0].block);}
#line 1767 "src/Parser.tab.cpp"
    break;

  case 76: /* equality_expression: equality_expression EQ_OP relational_expression  */
#line 276 "src/Parser.y"
                                                          { (yyval.block) = new Equal((yyvsp[-2].block), (yyvsp[0].block));}
#line 1773 "src/Parser.tab.cpp"
    break;

  case 77: /* equality_expression: equality_expression NE_OP relational_expression  */
#line 277 "src/Parser.y"
                                                          { (yyval.block) = new NotEqual((yyvsp[-2].block), (yyvsp[0].block));}
#line 1779 "src/Parser.tab.cpp"
    break;

  case 78: /* and_expression: equality_expression  */
#line 281 "src/Parser.y"
                              { (yyval.block) = (yyvsp[0].block);}
#line 1785 "src/Parser.tab.cpp"
    break;

  case 79: /* and_expression: and_expression '&' equality_expression  */
#line 282 "src/Parser.y"
                                                 { (yyval.block) = new BitwiseAnd((yyvsp[-2].block), (yyvsp[0].block));}
#line 1791 "src/Parser.tab.cpp"
    break;

  case 80: /* exclusive_or_expression: and_expression  */
#line 286 "src/Parser.y"
                         { (yyval.block) = (yyvsp[0].block);}
#line 1797 "src/Parser.tab.cpp"
    break;

  case 81: /* exclusive_or_expression: exclusive_or_expression '^' and_expression  */
#line 287 "src/Parser.y"
                                                     { (yyval.block) = new BitwiseXor((yyvsp[-2].block), (yyvsp[0].block));}
#line 1803 "src/Parser.tab.cpp"
    break;

  case 82: /* inclusive_or_expression: exclusive_or_expression  */
#line 291 "src/Parser.y"
                                  { (yyval.block) = (yyvsp[0].block);}
#line 1809 "src/Parser.tab.cpp"
    break;

  case 83: /* inclusive_or_expression: inclusive_or_expression '|' exclusive_or_expression  */
#line 292 "src/Parser.y"
                                                              { (yyval.block) = new BitwiseOr((yyvsp[-2].block), (yyvsp[0].block));}
#line 1815 "src/Parser.tab.cpp"
    break;

  case 84: /* logical_and_expression: inclusive_or_expression  */
#line 296 "src/Parser.y"
                                  { (yyval.block) = (yyvsp[0].block);}
#line 1821 "src/Parser.tab.cpp"
    break;

  case 85: /* logical_and_expression: logical_and_expression AND_OP inclusive_or_expression  */
#line 297 "src/Parser.y"
                                                                { (yyval.block) = new LogicalAnd((yyvsp[-2].block), (yyvsp[0].block));}
#line 1827 "src/Parser.tab.cpp"
    break;

  case 86: /* logical_or_expression: logical_and_expression  */
#line 301 "src/Parser.y"
                                 { (yyval.block) = (yyvsp[0].block);}
#line 1833 "src/Parser.tab.cpp"
    break;

  case 87: /* logical_or_expression: logical_or_expression OR_OP logical_and_expression  */
#line 302 "src/Parser.y"
                                                             { (yyval.block) = new LogicalOr((yyvsp[-2].block), (yyvsp[0].block));}
#line 1839 "src/Parser.tab.cpp"
    break;

  case 88: /* assignment_expression: logical_or_expression  */
#line 306 "src/Parser.y"
                                { (yyval.block) = (yyvsp[0].block);}
#line 1845 "src/Parser.tab.cpp"
    break;

  case 89: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 307 "src/Parser.y"
                                                                     { (yyval.block) = new Assignment((yyvsp[-2].block), *(yyvsp[-1].string), (yyvsp[0].block));}
#line 1851 "src/Parser.tab.cpp"
    break;

  case 90: /* primary_expression: IDENTIFIER  */
#line 311 "src/Parser.y"
                     { (yyval.block) = new Expression(*(yyvsp[0].string)); delete (yyvsp[0].string);}
#line 1857 "src/Parser.tab.cpp"
    break;

  case 91: /* primary_expression: CONSTANT  */
#line 312 "src/Parser.y"
                   { (yyval.block) = new Expression(stoi(*(yyvsp[0].string))); delete (yyvsp[0].string);}
#line 1863 "src/Parser.tab.cpp"
    break;

  case 92: /* primary_expression: STRING_LITERAL  */
#line 313 "src/Parser.y"
                         { (yyval.block) = new Expression(*(yyvsp[0].string)); delete (yyvsp[0].string);}
#line 1869 "src/Parser.tab.cpp"
    break;

  case 93: /* primary_expression: '(' expression ')'  */
#line 314 "src/Parser.y"
                             { (yyval.block) = (yyvsp[-1].block); }
#line 1875 "src/Parser.tab.cpp"
    break;

  case 94: /* assignment_operator: '='  */
#line 318 "src/Parser.y"
               { (yyval.string) = new std::string("=");}
#line 1881 "src/Parser.tab.cpp"
    break;

  case 95: /* assignment_operator: MUL_ASSIGN  */
#line 319 "src/Parser.y"
                     { (yyval.string) = (yyvsp[0].string);}
#line 1887 "src/Parser.tab.cpp"
    break;

  case 96: /* assignment_operator: DIV_ASSIGN  */
#line 320 "src/Parser.y"
                     { (yyval.string) = (yyvsp[0].string);}
#line 1893 "src/Parser.tab.cpp"
    break;

  case 97: /* assignment_operator: MOD_ASSIGN  */
#line 321 "src/Parser.y"
                     { (yyval.string) = (yyvsp[0].string);}
#line 1899 "src/Parser.tab.cpp"
    break;

  case 98: /* assignment_operator: ADD_ASSIGN  */
#line 322 "src/Parser.y"
                     { (yyval.string) = (yyvsp[0].string);}
#line 1905 "src/Parser.tab.cpp"
    break;

  case 99: /* assignment_operator: SUB_ASSIGN  */
#line 323 "src/Parser.y"
                     { (yyval.string) = (yyvsp[0].string);}
#line 1911 "src/Parser.tab.cpp"
    break;


#line 1915 "src/Parser.tab.cpp"

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

#line 325 "src/Parser.y"


const Block *g_root;

const Block *parseAST() {
    g_root = 0;
    yyparse();
    return g_root;
}
