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
  YYSYMBOL_MUL_ASSIGN = 40,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 41,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 42,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 43,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 44,                /* SUB_ASSIGN  */
  YYSYMBOL_IDENTIFIER = 45,                /* IDENTIFIER  */
  YYSYMBOL_CONSTANT = 46,                  /* CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 47,            /* STRING_LITERAL  */
  YYSYMBOL_CHAR = 48,                      /* CHAR  */
  YYSYMBOL_SHORT = 49,                     /* SHORT  */
  YYSYMBOL_INT = 50,                       /* INT  */
  YYSYMBOL_LONG = 51,                      /* LONG  */
  YYSYMBOL_SIGNED = 52,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 53,                  /* UNSIGNED  */
  YYSYMBOL_FLOAT = 54,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 55,                    /* DOUBLE  */
  YYSYMBOL_VOID = 56,                      /* VOID  */
  YYSYMBOL_TYPE_NAME = 57,                 /* TYPE_NAME  */
  YYSYMBOL_RETURN = 58,                    /* RETURN  */
  YYSYMBOL_CONTINUE = 59,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 60,                     /* BREAK  */
  YYSYMBOL_LOWER_THAN_ELSE = 61,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_62_ = 62,                       /* ';'  */
  YYSYMBOL_63_ = 63,                       /* '='  */
  YYSYMBOL_64_ = 64,                       /* '{'  */
  YYSYMBOL_65_ = 65,                       /* '}'  */
  YYSYMBOL_66_ = 66,                       /* ','  */
  YYSYMBOL_67_ = 67,                       /* '*'  */
  YYSYMBOL_68_ = 68,                       /* '('  */
  YYSYMBOL_69_ = 69,                       /* ')'  */
  YYSYMBOL_70_ = 70,                       /* '['  */
  YYSYMBOL_71_ = 71,                       /* ']'  */
  YYSYMBOL_72_ = 72,                       /* ':'  */
  YYSYMBOL_73_ = 73,                       /* '&'  */
  YYSYMBOL_74_ = 74,                       /* '+'  */
  YYSYMBOL_75_ = 75,                       /* '-'  */
  YYSYMBOL_76_ = 76,                       /* '~'  */
  YYSYMBOL_77_ = 77,                       /* '!'  */
  YYSYMBOL_78_ = 78,                       /* '/'  */
  YYSYMBOL_79_ = 79,                       /* '%'  */
  YYSYMBOL_80_ = 80,                       /* '<'  */
  YYSYMBOL_81_ = 81,                       /* '>'  */
  YYSYMBOL_82_ = 82,                       /* '^'  */
  YYSYMBOL_83_ = 83,                       /* '|'  */
  YYSYMBOL_YYACCEPT = 84,                  /* $accept  */
  YYSYMBOL_ROOT = 85,                      /* ROOT  */
  YYSYMBOL_translation_unit = 86,          /* translation_unit  */
  YYSYMBOL_external_declaration = 87,      /* external_declaration  */
  YYSYMBOL_declaration_list = 88,          /* declaration_list  */
  YYSYMBOL_declaration = 89,               /* declaration  */
  YYSYMBOL_init_declarator = 90,           /* init_declarator  */
  YYSYMBOL_initializer = 91,               /* initializer  */
  YYSYMBOL_initializer_list = 92,          /* initializer_list  */
  YYSYMBOL_function_definition = 93,       /* function_definition  */
  YYSYMBOL_declaration_specifiers = 94,    /* declaration_specifiers  */
  YYSYMBOL_type_specifier = 95,            /* type_specifier  */
  YYSYMBOL_declarator = 96,                /* declarator  */
  YYSYMBOL_direct_declarator = 97,         /* direct_declarator  */
  YYSYMBOL_parameter_list = 98,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 99,     /* parameter_declaration  */
  YYSYMBOL_compound_statement = 100,       /* compound_statement  */
  YYSYMBOL_statement_list = 101,           /* statement_list  */
  YYSYMBOL_statement = 102,                /* statement  */
  YYSYMBOL_labeled_statement = 103,        /* labeled_statement  */
  YYSYMBOL_jump_statement = 104,           /* jump_statement  */
  YYSYMBOL_expression_statement = 105,     /* expression_statement  */
  YYSYMBOL_selection_statement = 106,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 107,      /* iteration_statement  */
  YYSYMBOL_expression = 108,               /* expression  */
  YYSYMBOL_postfix_expression = 109,       /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 110, /* argument_expression_list  */
  YYSYMBOL_unary_expression = 111,         /* unary_expression  */
  YYSYMBOL_unary_operator = 112,           /* unary_operator  */
  YYSYMBOL_multiplicative_expression = 113, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 114,      /* additive_expression  */
  YYSYMBOL_shift_expression = 115,         /* shift_expression  */
  YYSYMBOL_relational_expression = 116,    /* relational_expression  */
  YYSYMBOL_equality_expression = 117,      /* equality_expression  */
  YYSYMBOL_and_expression = 118,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 119,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 120,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 121,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 122,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 123,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 124,    /* assignment_expression  */
  YYSYMBOL_constant_expression = 125,      /* constant_expression  */
  YYSYMBOL_enum_specifier = 126,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 127,          /* enumerator_list  */
  YYSYMBOL_enumerator = 128,               /* enumerator  */
  YYSYMBOL_primary_expression = 129        /* primary_expression  */
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
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   672

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  84
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  134
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  240

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
       2,     2,     2,    77,     2,     2,     2,    79,    73,     2,
      68,    69,    67,    74,    66,    75,     2,    78,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    72,    62,
      80,    63,    81,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    70,     2,    71,    82,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    64,    83,    65,    76,     2,     2,     2,
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
       0,   110,   110,   114,   115,   119,   120,   124,   125,   131,
     132,   133,   138,   139,   143,   144,   150,   151,   155,   164,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     182,   186,   187,   188,   189,   190,   192,   198,   199,   203,
     205,   209,   211,   212,   213,   217,   218,   223,   224,   225,
     226,   227,   228,   233,   235,   239,   240,   241,   242,   246,
     247,   251,   252,   253,   257,   258,   259,   260,   264,   268,
     269,   270,   271,   272,   273,   277,   278,   282,   283,   284,
     285,   286,   287,   291,   292,   293,   294,   295,   296,   300,
     301,   302,   303,   307,   308,   309,   313,   314,   315,   320,
     321,   322,   323,   324,   328,   329,   330,   334,   335,   339,
     340,   344,   345,   349,   350,   354,   355,   359,   364,   366,
     367,   368,   369,   370,   371,   376,   385,   386,   391,   392,
     396,   397,   401,   402,   404
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
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "IDENTIFIER", "CONSTANT", "STRING_LITERAL", "CHAR", "SHORT", "INT",
  "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "VOID", "TYPE_NAME",
  "RETURN", "CONTINUE", "BREAK", "LOWER_THAN_ELSE", "';'", "'='", "'{'",
  "'}'", "','", "'*'", "'('", "')'", "'['", "']'", "':'", "'&'", "'+'",
  "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "$accept",
  "ROOT", "translation_unit", "external_declaration", "declaration_list",
  "declaration", "init_declarator", "initializer", "initializer_list",
  "function_definition", "declaration_specifiers", "type_specifier",
  "declarator", "direct_declarator", "parameter_list",
  "parameter_declaration", "compound_statement", "statement_list",
  "statement", "labeled_statement", "jump_statement",
  "expression_statement", "selection_statement", "iteration_statement",
  "expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "constant_expression", "enum_specifier",
  "enumerator_list", "enumerator", "primary_expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-139)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     108,   -21,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,
    -139,  -139,    40,   108,  -139,  -139,  -139,   -10,  -139,   -20,
     -23,     1,  -139,  -139,  -139,     8,   -10,    -6,   -12,   -38,
    -139,     1,    15,    23,    32,    -1,  -139,  -139,    54,  -139,
     425,   149,  -139,   180,   562,     2,  -139,   562,  -139,     1,
    -139,   595,   562,   562,  -139,  -139,   425,  -139,   562,  -139,
    -139,  -139,  -139,  -139,  -139,     6,   -15,   562,   -29,    -3,
      73,    -2,    72,    55,    45,    46,   117,   118,  -139,  -139,
    -139,   562,    61,    66,    68,    74,   375,    75,   469,    79,
      82,  -139,  -139,   215,  -139,   -10,  -139,   281,  -139,  -139,
    -139,  -139,  -139,  -139,    83,  -139,  -139,   -10,   -32,  -139,
    -139,    -5,  -139,  -139,  -139,  -139,   411,  -139,  -139,  -139,
    -139,    28,    77,  -139,  -139,   502,   562,   562,   562,   562,
     562,   562,   562,  -139,   562,   562,   562,   562,   562,   562,
     562,   562,   562,   562,   562,   562,   562,   562,   562,   562,
     562,   562,    94,   375,   562,   562,   562,   111,   518,  -139,
      87,  -139,  -139,  -139,  -139,   328,  -139,  -139,  -139,  -139,
     245,  -139,  -139,   100,  -139,   425,  -139,  -139,   -30,  -139,
      80,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,
     -29,   -29,    -3,    -3,    73,    73,    73,    73,    -2,    -2,
      72,    55,    45,    46,   117,   375,  -139,   101,   102,   103,
     105,   518,  -139,  -139,  -139,  -139,  -139,   562,  -139,  -139,
    -139,   375,   375,   375,   562,   551,  -139,   140,  -139,  -139,
     106,   375,   107,   375,   121,  -139,   375,  -139,  -139,  -139
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    21,    22,    23,    24,    27,    28,    25,    26,
      20,    29,     0,     2,     3,     6,     5,     0,    19,     0,
       0,     0,     1,     4,    31,     0,     0,     0,    12,    30,
      10,     0,     0,    12,   130,     0,   128,    32,     0,     9,
       0,     0,    18,     0,     0,     0,    11,     0,   126,     0,
      33,     0,     0,     0,   132,   133,     0,    84,     0,    83,
      85,    86,    87,    88,    13,    77,    89,     0,    93,    96,
      99,   104,   107,   109,   111,   113,   115,   117,   118,    14,
      69,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    59,    41,     0,     7,     0,    49,     0,    45,    52,
      47,    48,    50,    51,     0,    68,    35,    40,     0,    37,
      89,     0,   127,   125,   131,   129,     0,    81,    78,    79,
      16,     0,     0,    73,    74,     0,     0,     0,     0,     0,
       0,     0,     0,    80,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    58,
       0,    56,    57,    44,     8,     0,    42,    46,    60,    39,
       0,    34,    36,     0,    15,     0,   134,    71,     0,    75,
       0,   120,   121,   122,   123,   124,   119,    90,    91,    92,
      94,    95,    97,    98,   102,   103,   100,   101,   105,   106,
     108,   110,   112,   114,   116,     0,    54,     0,     0,     0,
       0,     0,    55,    43,    38,    82,    17,     0,    72,    70,
      53,     0,     0,     0,     0,     0,    76,    61,    63,    64,
       0,     0,     0,     0,     0,    66,     0,    62,    65,    67
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -139,  -139,  -139,   166,  -139,   -18,   168,   -51,  -139,  -139,
     -39,    76,   -11,  -139,  -139,    19,   162,    98,   -83,  -139,
    -139,  -138,  -139,  -139,   -57,  -139,  -139,   -34,  -139,   -19,
     -14,   -81,   -25,    49,    62,    44,    65,    88,   175,   -26,
     -40,   131,  -139,   196,   189,  -139
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    12,    13,    14,    93,    15,    27,    64,   121,    16,
      17,    18,    33,    29,   108,   109,    96,    97,    98,    99,
     100,   101,   102,   103,   104,    65,   178,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
     105,   114,    19,    35,    36,    80
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      79,   122,    95,   157,   107,   120,    28,   141,   142,   151,
     110,   123,   124,   110,   167,    38,    79,   117,   118,   119,
     211,   113,    24,    94,    20,   127,   128,   129,   130,   131,
      43,   160,    44,   133,   170,    24,   217,   171,   134,   218,
      22,    31,    30,    21,    25,    26,    34,   110,   132,   135,
     136,    40,    41,    37,    95,   113,    39,    25,    26,   122,
     194,   195,   196,   197,    48,    49,   172,   112,    49,   180,
     206,   137,   138,   225,   125,   164,   126,    46,   143,   144,
     139,   140,   167,   145,   146,   179,    40,   181,   182,   183,
     184,   185,   186,   174,   175,    47,   169,   207,   208,   209,
     187,   188,   189,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   190,   191,
     198,   199,   220,    50,   216,   192,   193,   148,   147,   149,
     150,   107,   151,   153,   154,    79,   155,     1,   227,   228,
     229,   161,   156,   158,   162,   168,   176,   210,   235,   212,
     237,   219,    51,   239,    52,    53,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,   205,   230,   232,   215,
     221,   222,   223,   224,   233,   234,   236,   226,     1,    23,
      81,    82,    83,   238,    84,    85,    86,    87,    32,   214,
      42,   165,   173,   202,    54,    55,   200,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    88,    89,    90,
     201,    91,   152,    41,    92,   203,    57,    58,    51,   111,
      52,    53,    59,    60,    61,    62,    63,    45,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,   115,   204,
       0,     0,     0,     0,     1,     0,    81,    82,    83,   106,
      84,    85,    86,    87,     0,     0,     0,     0,     0,     0,
      54,    55,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    88,    89,    90,     0,    91,     0,    41,
     163,     0,    57,    58,    51,     0,    52,    53,    59,    60,
      61,    62,    63,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,    82,    83,     0,    84,    85,    86,    87,
       0,     0,     0,     0,     0,     0,    54,    55,     0,     0,
       0,    51,     0,    52,    53,     0,     0,     0,     0,    88,
      89,    90,     0,    91,     0,    41,   166,     0,    57,    58,
       0,     0,     0,     0,    59,    60,    61,    62,    63,    81,
      82,    83,     0,    84,    85,    86,    87,     0,     0,     0,
       0,     0,     0,    54,    55,     0,     0,     0,    51,     0,
      52,    53,     0,     0,     0,     0,    88,    89,    90,     0,
      91,     0,    41,   213,     0,    57,    58,     0,     0,     0,
       0,    59,    60,    61,    62,    63,    81,    82,    83,     0,
      84,    85,    86,    87,    51,     0,    52,    53,     0,     0,
      54,    55,     0,     0,     0,     0,     0,     0,    51,     0,
      52,    53,     0,    88,    89,    90,     0,    91,     0,    41,
       0,     0,    57,    58,     0,     0,     0,     0,    59,    60,
      61,    62,    63,     0,     0,     0,    54,    55,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,     0,
      54,    55,    51,     0,    52,    53,     0,     0,    57,    58,
       0,     0,     0,     0,    59,    60,    61,    62,    63,    56,
       0,     0,    57,    58,     0,     0,     0,     0,    59,    60,
      61,    62,    63,     0,     0,    51,     0,    52,    53,     0,
       0,     0,     0,     0,    54,    55,     0,     0,     0,     0,
       0,    51,     0,    52,    53,     0,     0,     0,     0,     0,
       0,   159,     0,     0,     0,     0,    57,    58,     0,     0,
       0,     0,    59,    60,    61,    62,    63,    54,    55,     0,
       0,     0,     0,     0,    51,     0,    52,    53,     0,     0,
       0,     0,     0,    54,    55,    51,     0,    52,    53,    57,
      58,   177,     0,     0,     0,    59,    60,    61,    62,    63,
      91,     0,     0,     0,     0,    57,    58,     0,     0,     0,
       0,    59,    60,    61,    62,    63,    54,    55,    51,     0,
      52,    53,     0,     0,     0,     0,     0,    54,    55,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    57,    58,
     231,     0,     0,     0,    59,    60,    61,    62,    63,    57,
      58,     0,     0,     0,     0,    59,    60,    61,    62,    63,
      54,    55,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    57,   116,     0,     0,     0,     0,    59,    60,
      61,    62,    63
};

static const yytype_int16 yycheck[] =
{
      40,    58,    41,    86,    43,    56,    17,     9,    10,    14,
      44,     5,     6,    47,    97,    26,    56,    51,    52,    53,
     158,    47,    45,    41,    45,    40,    41,    42,    43,    44,
      68,    88,    70,    67,    66,    45,    66,    69,    67,    69,
       0,    64,    62,    64,    67,    68,    45,    81,    63,    78,
      79,    63,    64,    45,    93,    81,    62,    67,    68,   116,
     141,   142,   143,   144,    65,    66,    71,    65,    66,   126,
     153,    74,    75,   211,    68,    93,    70,    62,    80,    81,
       7,     8,   165,    11,    12,   125,    63,   127,   128,   129,
     130,   131,   132,    65,    66,    63,   107,   154,   155,   156,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   137,   138,
     145,   146,   205,    69,   175,   139,   140,    82,    73,    83,
      13,   170,    14,    72,    68,   175,    68,    29,   221,   222,
     223,    62,    68,    68,    62,    62,    69,    36,   231,    62,
     233,    71,     3,   236,     5,     6,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    72,   224,   225,    69,
      69,    69,    69,    68,    34,    69,    69,   217,    29,    13,
      31,    32,    33,    62,    35,    36,    37,    38,    20,   170,
      28,    93,   116,   149,    45,    46,   147,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
     148,    62,    81,    64,    65,   150,    67,    68,     3,    44,
       5,     6,    73,    74,    75,    76,    77,    31,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    49,   151,
      -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    69,
      35,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    -1,    64,
      65,    -1,    67,    68,     3,    -1,     5,     6,    73,    74,
      75,    76,    77,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    -1,    35,    36,    37,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,
      -1,     3,    -1,     5,     6,    -1,    -1,    -1,    -1,    58,
      59,    60,    -1,    62,    -1,    64,    65,    -1,    67,    68,
      -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,    31,
      32,    33,    -1,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    -1,    -1,    -1,     3,    -1,
       5,     6,    -1,    -1,    -1,    -1,    58,    59,    60,    -1,
      62,    -1,    64,    65,    -1,    67,    68,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    31,    32,    33,    -1,
      35,    36,    37,    38,     3,    -1,     5,     6,    -1,    -1,
      45,    46,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
       5,     6,    -1,    58,    59,    60,    -1,    62,    -1,    64,
      -1,    -1,    67,    68,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    -1,    -1,    -1,    45,    46,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      45,    46,     3,    -1,     5,     6,    -1,    -1,    67,    68,
      -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,    64,
      -1,    -1,    67,    68,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    -1,    -1,     3,    -1,     5,     6,    -1,
      -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,
      -1,     3,    -1,     5,     6,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    67,    68,    -1,    -1,
      -1,    -1,    73,    74,    75,    76,    77,    45,    46,    -1,
      -1,    -1,    -1,    -1,     3,    -1,     5,     6,    -1,    -1,
      -1,    -1,    -1,    45,    46,     3,    -1,     5,     6,    67,
      68,    69,    -1,    -1,    -1,    73,    74,    75,    76,    77,
      62,    -1,    -1,    -1,    -1,    67,    68,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    45,    46,     3,    -1,
       5,     6,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,
      69,    -1,    -1,    -1,    73,    74,    75,    76,    77,    67,
      68,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,
      45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    68,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    77
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    29,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    85,    86,    87,    89,    93,    94,    95,   126,
      45,    64,     0,    87,    45,    67,    68,    90,    96,    97,
      62,    64,    90,    96,    45,   127,   128,    45,    96,    62,
      63,    64,   100,    68,    70,   127,    62,    63,    65,    66,
      69,     3,     5,     6,    45,    46,    64,    67,    68,    73,
      74,    75,    76,    77,    91,   109,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     129,    31,    32,    33,    35,    36,    37,    38,    58,    59,
      60,    62,    65,    88,    89,    94,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   124,    69,    94,    98,    99,
     111,   122,    65,   123,   125,   128,    68,   111,   111,   111,
      91,    92,   108,     5,     6,    68,    70,    40,    41,    42,
      43,    44,    63,   111,    67,    78,    79,    74,    75,     7,
       8,     9,    10,    80,    81,    11,    12,    73,    82,    83,
      13,    14,   125,    72,    68,    68,    68,   102,    68,    62,
     108,    62,    62,    65,    89,   101,    65,   102,    62,    96,
      66,    69,    71,    95,    65,    66,    69,    69,   110,   124,
     108,   124,   124,   124,   124,   124,   124,   111,   111,   111,
     113,   113,   114,   114,   115,   115,   115,   115,   116,   116,
     117,   118,   119,   120,   121,    72,   102,   108,   108,   108,
      36,   105,    62,    65,    99,    69,    91,    66,    69,    71,
     102,    69,    69,    69,    68,   105,   124,   102,   102,   102,
     108,    69,   108,    34,    69,   102,    69,   102,    62,   102
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    84,    85,    86,    86,    87,    87,    88,    88,    89,
      89,    89,    90,    90,    91,    91,    92,    92,    93,    94,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      96,    97,    97,    97,    97,    97,    97,    98,    98,    99,
      99,   100,   100,   100,   100,   101,   101,   102,   102,   102,
     102,   102,   102,   103,   103,   104,   104,   104,   104,   105,
     105,   106,   106,   106,   107,   107,   107,   107,   108,   109,
     109,   109,   109,   109,   109,   110,   110,   111,   111,   111,
     111,   111,   111,   112,   112,   112,   112,   112,   112,   113,
     113,   113,   113,   114,   114,   114,   115,   115,   115,   116,
     116,   116,   116,   116,   117,   117,   117,   118,   118,   119,
     119,   120,   120,   121,   121,   122,   122,   123,   124,   124,
     124,   124,   124,   124,   124,   125,   126,   126,   127,   127,
     128,   128,   129,   129,   129
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     2,     3,
       2,     4,     1,     3,     1,     3,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     3,     4,     3,     4,     1,     3,     2,
       1,     2,     3,     4,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     4,     3,     3,     2,     2,     2,     1,
       2,     5,     7,     5,     5,     7,     6,     7,     1,     1,
       4,     3,     4,     2,     2,     1,     3,     1,     2,     2,
       2,     2,     4,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     1,     3,
       3,     3,     3,     3,     3,     1,     4,     5,     1,     3,
       1,     3,     1,     1,     3
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
#line 110 "src/Parser.y"
                        { g_root = (yyvsp[0].block); }
#line 1452 "src/Parser.tab.cpp"
    break;

  case 3: /* translation_unit: external_declaration  */
#line 114 "src/Parser.y"
                               { (yyval.block) = (yyvsp[0].block); }
#line 1458 "src/Parser.tab.cpp"
    break;

  case 4: /* translation_unit: translation_unit external_declaration  */
#line 115 "src/Parser.y"
                                                { (yyval.block) = new TranslationUnit((yyvsp[0].block), (yyvsp[-1].block)); }
#line 1464 "src/Parser.tab.cpp"
    break;

  case 5: /* external_declaration: function_definition  */
#line 119 "src/Parser.y"
                              { (yyval.block) = (yyvsp[0].block);}
#line 1470 "src/Parser.tab.cpp"
    break;

  case 6: /* external_declaration: declaration  */
#line 120 "src/Parser.y"
                        { (yyval.block) = (yyvsp[0].block);}
#line 1476 "src/Parser.tab.cpp"
    break;

  case 7: /* declaration_list: declaration  */
#line 124 "src/Parser.y"
                      { std::vector<BlockPtr>* BlockList = new std::vector<BlockPtr>(); BlockList->push_back((yyvsp[0].block));  (yyval.list) = BlockList; }
#line 1482 "src/Parser.tab.cpp"
    break;

  case 8: /* declaration_list: declaration_list declaration  */
#line 125 "src/Parser.y"
                                       { (yyvsp[-1].list)->push_back((yyvsp[0].block)); (yyval.list) = (yyvsp[-1].list); }
#line 1488 "src/Parser.tab.cpp"
    break;

  case 9: /* declaration: declaration_specifiers init_declarator ';'  */
#line 131 "src/Parser.y"
                                                     { (yyval.block) = new Declaration(*(yyvsp[-2].string), (yyvsp[-1].block));}
#line 1494 "src/Parser.tab.cpp"
    break;

  case 10: /* declaration: enum_specifier ';'  */
#line 132 "src/Parser.y"
                             { (yyval.block) = (yyvsp[-1].block);}
#line 1500 "src/Parser.tab.cpp"
    break;

  case 11: /* declaration: ENUM IDENTIFIER init_declarator ';'  */
#line 133 "src/Parser.y"
                                              { (yyval.block) = new Declaration("int", (yyvsp[-1].block));}
#line 1506 "src/Parser.tab.cpp"
    break;

  case 12: /* init_declarator: declarator  */
#line 138 "src/Parser.y"
                     { (yyval.block) = new Init_Declarator((yyvsp[0].block));}
#line 1512 "src/Parser.tab.cpp"
    break;

  case 13: /* init_declarator: declarator '=' initializer  */
#line 139 "src/Parser.y"
                                     { (yyval.block) = new Init_Declarator((yyvsp[-2].block), (yyvsp[0].block));}
#line 1518 "src/Parser.tab.cpp"
    break;

  case 14: /* initializer: assignment_expression  */
#line 143 "src/Parser.y"
                                { (yyval.block) = (yyvsp[0].block);}
#line 1524 "src/Parser.tab.cpp"
    break;

  case 15: /* initializer: '{' initializer_list '}'  */
#line 144 "src/Parser.y"
                                   { (yyval.block) = new ArrayInitializer((yyvsp[-1].list));}
#line 1530 "src/Parser.tab.cpp"
    break;

  case 16: /* initializer_list: initializer  */
#line 150 "src/Parser.y"
                      { std::vector<BlockPtr>* BlockList = new std::vector<BlockPtr>(); BlockList->push_back((yyvsp[0].block));  (yyval.list) = BlockList; }
#line 1536 "src/Parser.tab.cpp"
    break;

  case 17: /* initializer_list: initializer_list ',' initializer  */
#line 151 "src/Parser.y"
                                           { (yyvsp[-2].list)->push_back((yyvsp[0].block)); (yyval.list) = (yyvsp[-2].list); }
#line 1542 "src/Parser.tab.cpp"
    break;

  case 18: /* function_definition: declaration_specifiers declarator compound_statement  */
#line 155 "src/Parser.y"
                                                               { (yyval.block) = new Function(*(yyvsp[-2].string), (yyvsp[-1].block), (yyvsp[0].block)); }
#line 1548 "src/Parser.tab.cpp"
    break;

  case 19: /* declaration_specifiers: type_specifier  */
#line 164 "src/Parser.y"
                         { (yyval.string) = (yyvsp[0].string);}
#line 1554 "src/Parser.tab.cpp"
    break;

  case 20: /* type_specifier: VOID  */
#line 168 "src/Parser.y"
                    { (yyval.string) = (yyvsp[0].string); }
#line 1560 "src/Parser.tab.cpp"
    break;

  case 21: /* type_specifier: CHAR  */
#line 169 "src/Parser.y"
                    { (yyval.string) = (yyvsp[0].string); }
#line 1566 "src/Parser.tab.cpp"
    break;

  case 22: /* type_specifier: SHORT  */
#line 170 "src/Parser.y"
                    { (yyval.string) = (yyvsp[0].string); }
#line 1572 "src/Parser.tab.cpp"
    break;

  case 23: /* type_specifier: INT  */
#line 171 "src/Parser.y"
                    { (yyval.string) = (yyvsp[0].string); }
#line 1578 "src/Parser.tab.cpp"
    break;

  case 24: /* type_specifier: LONG  */
#line 172 "src/Parser.y"
                    { (yyval.string) = (yyvsp[0].string); }
#line 1584 "src/Parser.tab.cpp"
    break;

  case 25: /* type_specifier: FLOAT  */
#line 173 "src/Parser.y"
                    { (yyval.string) = (yyvsp[0].string); }
#line 1590 "src/Parser.tab.cpp"
    break;

  case 26: /* type_specifier: DOUBLE  */
#line 174 "src/Parser.y"
                    { (yyval.string) = (yyvsp[0].string); }
#line 1596 "src/Parser.tab.cpp"
    break;

  case 27: /* type_specifier: SIGNED  */
#line 175 "src/Parser.y"
                    { (yyval.string) = (yyvsp[0].string); }
#line 1602 "src/Parser.tab.cpp"
    break;

  case 28: /* type_specifier: UNSIGNED  */
#line 176 "src/Parser.y"
                    { (yyval.string) = (yyvsp[0].string); }
#line 1608 "src/Parser.tab.cpp"
    break;

  case 29: /* type_specifier: TYPE_NAME  */
#line 177 "src/Parser.y"
                    { (yyval.string) = (yyvsp[0].string); }
#line 1614 "src/Parser.tab.cpp"
    break;

  case 30: /* declarator: direct_declarator  */
#line 182 "src/Parser.y"
                            { (yyval.block) = (yyvsp[0].block);}
#line 1620 "src/Parser.tab.cpp"
    break;

  case 31: /* direct_declarator: IDENTIFIER  */
#line 186 "src/Parser.y"
                     { (yyval.block) = new Declarator(*(yyvsp[0].string)); delete (yyvsp[0].string);}
#line 1626 "src/Parser.tab.cpp"
    break;

  case 32: /* direct_declarator: '*' IDENTIFIER  */
#line 187 "src/Parser.y"
                         { (yyval.block) = new Declarator(*(yyvsp[0].string)); delete (yyvsp[0].string);}
#line 1632 "src/Parser.tab.cpp"
    break;

  case 33: /* direct_declarator: '(' declarator ')'  */
#line 188 "src/Parser.y"
                             { (yyval.block) = (yyvsp[-1].block); }
#line 1638 "src/Parser.tab.cpp"
    break;

  case 34: /* direct_declarator: direct_declarator '(' parameter_list ')'  */
#line 189 "src/Parser.y"
                                                   { (yyval.block) = new FunctionDeclarator((yyvsp[-3].block), (yyvsp[-1].list)); }
#line 1644 "src/Parser.tab.cpp"
    break;

  case 35: /* direct_declarator: direct_declarator '(' ')'  */
#line 190 "src/Parser.y"
                                    { (yyval.block) = new FunctionDeclarator((yyvsp[-2].block));}
#line 1650 "src/Parser.tab.cpp"
    break;

  case 36: /* direct_declarator: direct_declarator '[' logical_or_expression ']'  */
#line 192 "src/Parser.y"
                                                          { (yyval.block) = new ArrayDeclarator((yyvsp[-3].block), (yyvsp[-1].block));}
#line 1656 "src/Parser.tab.cpp"
    break;

  case 37: /* parameter_list: parameter_declaration  */
#line 198 "src/Parser.y"
                                { std::vector<BlockPtr>* BlockList = new std::vector<BlockPtr>(); BlockList->push_back((yyvsp[0].block));  (yyval.list) = BlockList; }
#line 1662 "src/Parser.tab.cpp"
    break;

  case 38: /* parameter_list: parameter_list ',' parameter_declaration  */
#line 199 "src/Parser.y"
                                                   { (yyvsp[-2].list)->push_back((yyvsp[0].block)); (yyval.list) = (yyvsp[-2].list);}
#line 1668 "src/Parser.tab.cpp"
    break;

  case 39: /* parameter_declaration: declaration_specifiers declarator  */
#line 203 "src/Parser.y"
                                            { (yyval.block) = new ParameterDeclaration(*(yyvsp[-1].string), (yyvsp[0].block));}
#line 1674 "src/Parser.tab.cpp"
    break;

  case 40: /* parameter_declaration: declaration_specifiers  */
#line 205 "src/Parser.y"
                                 { (yyval.block) = new ParameterDeclaration(*(yyvsp[0].string));}
#line 1680 "src/Parser.tab.cpp"
    break;

  case 41: /* compound_statement: '{' '}'  */
#line 209 "src/Parser.y"
                  { (yyval.block) = new Expression("null"); }
#line 1686 "src/Parser.tab.cpp"
    break;

  case 42: /* compound_statement: '{' statement_list '}'  */
#line 211 "src/Parser.y"
                                 {(yyval.block) = new Compound_Statement((yyvsp[-1].list),"slist");}
#line 1692 "src/Parser.tab.cpp"
    break;

  case 43: /* compound_statement: '{' declaration_list statement_list '}'  */
#line 212 "src/Parser.y"
                                                  {(yyval.block) = new Compound_Statement((yyvsp[-2].list), (yyvsp[-1].list));}
#line 1698 "src/Parser.tab.cpp"
    break;

  case 44: /* compound_statement: '{' declaration_list '}'  */
#line 213 "src/Parser.y"
                                   {(yyval.block) = new Compound_Statement((yyvsp[-1].list),"dlist");}
#line 1704 "src/Parser.tab.cpp"
    break;

  case 45: /* statement_list: statement  */
#line 217 "src/Parser.y"
                        { std::vector<BlockPtr>* BlockList = new std::vector<BlockPtr>(); BlockList->push_back((yyvsp[0].block));  (yyval.list) = BlockList; }
#line 1710 "src/Parser.tab.cpp"
    break;

  case 46: /* statement_list: statement_list statement  */
#line 218 "src/Parser.y"
                                   { (yyvsp[-1].list)->push_back((yyvsp[0].block)); (yyval.list) = (yyvsp[-1].list); }
#line 1716 "src/Parser.tab.cpp"
    break;

  case 47: /* statement: jump_statement  */
#line 223 "src/Parser.y"
                         {(yyval.block) = (yyvsp[0].block);}
#line 1722 "src/Parser.tab.cpp"
    break;

  case 48: /* statement: expression_statement  */
#line 224 "src/Parser.y"
                               { (yyval.block) = (yyvsp[0].block); }
#line 1728 "src/Parser.tab.cpp"
    break;

  case 49: /* statement: compound_statement  */
#line 225 "src/Parser.y"
                             { (yyval.block) = (yyvsp[0].block); }
#line 1734 "src/Parser.tab.cpp"
    break;

  case 50: /* statement: selection_statement  */
#line 226 "src/Parser.y"
                              { (yyval.block) = (yyvsp[0].block); }
#line 1740 "src/Parser.tab.cpp"
    break;

  case 51: /* statement: iteration_statement  */
#line 227 "src/Parser.y"
                              { (yyval.block) = (yyvsp[0].block); }
#line 1746 "src/Parser.tab.cpp"
    break;

  case 52: /* statement: labeled_statement  */
#line 228 "src/Parser.y"
                            { (yyval.block) = (yyvsp[0].block); }
#line 1752 "src/Parser.tab.cpp"
    break;

  case 53: /* labeled_statement: CASE constant_expression ':' statement  */
#line 233 "src/Parser.y"
                                                        { (yyval.block) = new Case((yyvsp[-2].block), (yyvsp[0].block));}
#line 1758 "src/Parser.tab.cpp"
    break;

  case 54: /* labeled_statement: DEFAULT ':' statement  */
#line 235 "src/Parser.y"
                                { (yyval.block) = new Case((yyvsp[0].block));}
#line 1764 "src/Parser.tab.cpp"
    break;

  case 55: /* jump_statement: RETURN expression ';'  */
#line 239 "src/Parser.y"
                                { std::cout << "here"; (yyval.block)= new JumpStatement(*(yyvsp[-2].string),(yyvsp[-1].block)); delete (yyvsp[-2].string);}
#line 1770 "src/Parser.tab.cpp"
    break;

  case 56: /* jump_statement: CONTINUE ';'  */
#line 240 "src/Parser.y"
                        { (yyval.block) = new JumpStatement(*(yyvsp[-1].string)); delete (yyvsp[-1].string);}
#line 1776 "src/Parser.tab.cpp"
    break;

  case 57: /* jump_statement: BREAK ';'  */
#line 241 "src/Parser.y"
                        { (yyval.block) = new JumpStatement(*(yyvsp[-1].string)); delete (yyvsp[-1].string);}
#line 1782 "src/Parser.tab.cpp"
    break;

  case 58: /* jump_statement: RETURN ';'  */
#line 242 "src/Parser.y"
                        { (yyval.block) = new JumpStatement(*(yyvsp[-1].string)); delete (yyvsp[-1].string);}
#line 1788 "src/Parser.tab.cpp"
    break;

  case 59: /* expression_statement: ';'  */
#line 246 "src/Parser.y"
                { (yyval.block) = new Expression("null"); }
#line 1794 "src/Parser.tab.cpp"
    break;

  case 60: /* expression_statement: expression ';'  */
#line 247 "src/Parser.y"
                         { (yyval.block) = (yyvsp[-1].block); }
#line 1800 "src/Parser.tab.cpp"
    break;

  case 61: /* selection_statement: IF '(' expression ')' statement  */
#line 251 "src/Parser.y"
                                          { (yyval.block) = new IfElse((yyvsp[-2].block), (yyvsp[0].block));}
#line 1806 "src/Parser.tab.cpp"
    break;

  case 62: /* selection_statement: IF '(' expression ')' statement ELSE statement  */
#line 252 "src/Parser.y"
                                                         { (yyval.block) = new IfElse((yyvsp[-4].block), (yyvsp[-2].block), (yyvsp[0].block));}
#line 1812 "src/Parser.tab.cpp"
    break;

  case 63: /* selection_statement: SWITCH '(' expression ')' statement  */
#line 253 "src/Parser.y"
                                                { (yyval.block) = new Switch((yyvsp[-2].block), (yyvsp[0].block));}
#line 1818 "src/Parser.tab.cpp"
    break;

  case 64: /* iteration_statement: WHILE '(' expression ')' statement  */
#line 257 "src/Parser.y"
                                             { (yyval.block) = new While((yyvsp[-2].block), (yyvsp[0].block));}
#line 1824 "src/Parser.tab.cpp"
    break;

  case 65: /* iteration_statement: DO statement WHILE '(' expression ')' ';'  */
#line 258 "src/Parser.y"
                                                    { (yyval.block) = new While((yyvsp[-2].block), (yyvsp[-5].block));}
#line 1830 "src/Parser.tab.cpp"
    break;

  case 66: /* iteration_statement: FOR '(' expression_statement expression_statement ')' statement  */
#line 259 "src/Parser.y"
                                                                          { (yyval.block) = new For((yyvsp[-3].block), (yyvsp[-2].block), (yyvsp[0].block));}
#line 1836 "src/Parser.tab.cpp"
    break;

  case 67: /* iteration_statement: FOR '(' expression_statement expression_statement expression ')' statement  */
#line 260 "src/Parser.y"
                                                                                     { (yyval.block) = new For((yyvsp[-4].block), (yyvsp[-3].block), (yyvsp[-2].block), (yyvsp[0].block));}
#line 1842 "src/Parser.tab.cpp"
    break;

  case 68: /* expression: assignment_expression  */
#line 264 "src/Parser.y"
                                { (yyval.block) = (yyvsp[0].block); }
#line 1848 "src/Parser.tab.cpp"
    break;

  case 69: /* postfix_expression: primary_expression  */
#line 268 "src/Parser.y"
                             { (yyval.block) = (yyvsp[0].block);}
#line 1854 "src/Parser.tab.cpp"
    break;

  case 70: /* postfix_expression: postfix_expression '[' expression ']'  */
#line 269 "src/Parser.y"
                                                { (yyval.block) = new ArrayExpression((yyvsp[-3].block), (yyvsp[-1].block));}
#line 1860 "src/Parser.tab.cpp"
    break;

  case 71: /* postfix_expression: postfix_expression '(' ')'  */
#line 270 "src/Parser.y"
                                     { (yyval.block) = new FunctionCall((yyvsp[-2].block));}
#line 1866 "src/Parser.tab.cpp"
    break;

  case 72: /* postfix_expression: postfix_expression '(' argument_expression_list ')'  */
#line 271 "src/Parser.y"
                                                              { (yyval.block) = new FunctionCall((yyvsp[-3].block), (yyvsp[-1].list));}
#line 1872 "src/Parser.tab.cpp"
    break;

  case 73: /* postfix_expression: postfix_expression INC_OP  */
#line 272 "src/Parser.y"
                                    { (yyval.block) = new Inc((yyvsp[-1].block));}
#line 1878 "src/Parser.tab.cpp"
    break;

  case 74: /* postfix_expression: postfix_expression DEC_OP  */
#line 273 "src/Parser.y"
                                    { (yyval.block) = new Dec((yyvsp[-1].block));}
#line 1884 "src/Parser.tab.cpp"
    break;

  case 75: /* argument_expression_list: assignment_expression  */
#line 277 "src/Parser.y"
                                { std::vector<BlockPtr>* BlockList = new std::vector<BlockPtr>(); BlockList->push_back((yyvsp[0].block));  (yyval.list) = BlockList; }
#line 1890 "src/Parser.tab.cpp"
    break;

  case 76: /* argument_expression_list: argument_expression_list ',' assignment_expression  */
#line 278 "src/Parser.y"
                                                             { (yyvsp[-2].list)->push_back((yyvsp[0].block)); (yyval.list) = (yyvsp[-2].list); }
#line 1896 "src/Parser.tab.cpp"
    break;

  case 77: /* unary_expression: postfix_expression  */
#line 282 "src/Parser.y"
                             { (yyval.block) = (yyvsp[0].block);}
#line 1902 "src/Parser.tab.cpp"
    break;

  case 78: /* unary_expression: INC_OP unary_expression  */
#line 283 "src/Parser.y"
                                  { (yyval.block) = new Inc((yyvsp[0].block));}
#line 1908 "src/Parser.tab.cpp"
    break;

  case 79: /* unary_expression: DEC_OP unary_expression  */
#line 284 "src/Parser.y"
                                  { (yyval.block) = new Dec((yyvsp[0].block));}
#line 1914 "src/Parser.tab.cpp"
    break;

  case 80: /* unary_expression: unary_operator unary_expression  */
#line 285 "src/Parser.y"
                                          { (yyval.block) = new UnaryOperator(*(yyvsp[-1].string), (yyvsp[0].block));}
#line 1920 "src/Parser.tab.cpp"
    break;

  case 81: /* unary_expression: SIZEOF unary_expression  */
#line 286 "src/Parser.y"
                                  { (yyval.block) = new SizeOf((yyvsp[0].block));}
#line 1926 "src/Parser.tab.cpp"
    break;

  case 82: /* unary_expression: SIZEOF '(' type_specifier ')'  */
#line 287 "src/Parser.y"
                                        { (yyval.block) = new SizeOf(*(yyvsp[-1].string));}
#line 1932 "src/Parser.tab.cpp"
    break;

  case 83: /* unary_operator: '&'  */
#line 291 "src/Parser.y"
              { (yyval.string) = new std::string("&");}
#line 1938 "src/Parser.tab.cpp"
    break;

  case 84: /* unary_operator: '*'  */
#line 292 "src/Parser.y"
              { (yyval.string) = new std::string("*");}
#line 1944 "src/Parser.tab.cpp"
    break;

  case 85: /* unary_operator: '+'  */
#line 293 "src/Parser.y"
              { (yyval.string) = new std::string("+");}
#line 1950 "src/Parser.tab.cpp"
    break;

  case 86: /* unary_operator: '-'  */
#line 294 "src/Parser.y"
              { (yyval.string) = new std::string("-");}
#line 1956 "src/Parser.tab.cpp"
    break;

  case 87: /* unary_operator: '~'  */
#line 295 "src/Parser.y"
              { (yyval.string) = new std::string("~");}
#line 1962 "src/Parser.tab.cpp"
    break;

  case 88: /* unary_operator: '!'  */
#line 296 "src/Parser.y"
              { (yyval.string) = new std::string("!");}
#line 1968 "src/Parser.tab.cpp"
    break;

  case 89: /* multiplicative_expression: unary_expression  */
#line 300 "src/Parser.y"
                           { (yyval.block) = (yyvsp[0].block);}
#line 1974 "src/Parser.tab.cpp"
    break;

  case 90: /* multiplicative_expression: multiplicative_expression '*' unary_expression  */
#line 301 "src/Parser.y"
                                                          { (yyval.block) = new Multiplication((yyvsp[-2].block), (yyvsp[0].block));}
#line 1980 "src/Parser.tab.cpp"
    break;

  case 91: /* multiplicative_expression: multiplicative_expression '/' unary_expression  */
#line 302 "src/Parser.y"
                                                         { (yyval.block) = new Division((yyvsp[-2].block), (yyvsp[0].block));}
#line 1986 "src/Parser.tab.cpp"
    break;

  case 92: /* multiplicative_expression: multiplicative_expression '%' unary_expression  */
#line 303 "src/Parser.y"
                                                         { (yyval.block) = new Modulo((yyvsp[-2].block), (yyvsp[0].block));}
#line 1992 "src/Parser.tab.cpp"
    break;

  case 93: /* additive_expression: multiplicative_expression  */
#line 307 "src/Parser.y"
                                    { (yyval.block) = (yyvsp[0].block);}
#line 1998 "src/Parser.tab.cpp"
    break;

  case 94: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 308 "src/Parser.y"
                                                            { (yyval.block) = new Addition((yyvsp[-2].block), (yyvsp[0].block));}
#line 2004 "src/Parser.tab.cpp"
    break;

  case 95: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 309 "src/Parser.y"
                                                            { (yyval.block) = new Subtraction((yyvsp[-2].block), (yyvsp[0].block));}
#line 2010 "src/Parser.tab.cpp"
    break;

  case 96: /* shift_expression: additive_expression  */
#line 313 "src/Parser.y"
                              { (yyval.block) = (yyvsp[0].block);}
#line 2016 "src/Parser.tab.cpp"
    break;

  case 97: /* shift_expression: shift_expression LEFT_OP additive_expression  */
#line 314 "src/Parser.y"
                                                       { (yyval.block) = new LeftShift((yyvsp[-2].block), (yyvsp[0].block));}
#line 2022 "src/Parser.tab.cpp"
    break;

  case 98: /* shift_expression: shift_expression RIGHT_OP additive_expression  */
#line 315 "src/Parser.y"
                                                        { (yyval.block) = new RightShift((yyvsp[-2].block), (yyvsp[0].block));}
#line 2028 "src/Parser.tab.cpp"
    break;

  case 99: /* relational_expression: shift_expression  */
#line 320 "src/Parser.y"
                           { (yyval.block) = (yyvsp[0].block);}
#line 2034 "src/Parser.tab.cpp"
    break;

  case 100: /* relational_expression: relational_expression '<' shift_expression  */
#line 321 "src/Parser.y"
                                                     { (yyval.block) = new LessThan((yyvsp[-2].block), (yyvsp[0].block));}
#line 2040 "src/Parser.tab.cpp"
    break;

  case 101: /* relational_expression: relational_expression '>' shift_expression  */
#line 322 "src/Parser.y"
                                                     { (yyval.block) = new GreaterThan((yyvsp[-2].block), (yyvsp[0].block));}
#line 2046 "src/Parser.tab.cpp"
    break;

  case 102: /* relational_expression: relational_expression LE_OP shift_expression  */
#line 323 "src/Parser.y"
                                                       { (yyval.block) = new LessThanEqual((yyvsp[-2].block), (yyvsp[0].block));}
#line 2052 "src/Parser.tab.cpp"
    break;

  case 103: /* relational_expression: relational_expression GE_OP shift_expression  */
#line 324 "src/Parser.y"
                                                       { (yyval.block) = new GreaterThanEqual((yyvsp[-2].block), (yyvsp[0].block));}
#line 2058 "src/Parser.tab.cpp"
    break;

  case 104: /* equality_expression: relational_expression  */
#line 328 "src/Parser.y"
                                { (yyval.block) = (yyvsp[0].block);}
#line 2064 "src/Parser.tab.cpp"
    break;

  case 105: /* equality_expression: equality_expression EQ_OP relational_expression  */
#line 329 "src/Parser.y"
                                                          { (yyval.block) = new Equal((yyvsp[-2].block), (yyvsp[0].block));}
#line 2070 "src/Parser.tab.cpp"
    break;

  case 106: /* equality_expression: equality_expression NE_OP relational_expression  */
#line 330 "src/Parser.y"
                                                          { (yyval.block) = new NotEqual((yyvsp[-2].block), (yyvsp[0].block));}
#line 2076 "src/Parser.tab.cpp"
    break;

  case 107: /* and_expression: equality_expression  */
#line 334 "src/Parser.y"
                              { (yyval.block) = (yyvsp[0].block);}
#line 2082 "src/Parser.tab.cpp"
    break;

  case 108: /* and_expression: and_expression '&' equality_expression  */
#line 335 "src/Parser.y"
                                                 { (yyval.block) = new BitwiseAnd((yyvsp[-2].block), (yyvsp[0].block));}
#line 2088 "src/Parser.tab.cpp"
    break;

  case 109: /* exclusive_or_expression: and_expression  */
#line 339 "src/Parser.y"
                         { (yyval.block) = (yyvsp[0].block);}
#line 2094 "src/Parser.tab.cpp"
    break;

  case 110: /* exclusive_or_expression: exclusive_or_expression '^' and_expression  */
#line 340 "src/Parser.y"
                                                     { (yyval.block) = new BitwiseXor((yyvsp[-2].block), (yyvsp[0].block));}
#line 2100 "src/Parser.tab.cpp"
    break;

  case 111: /* inclusive_or_expression: exclusive_or_expression  */
#line 344 "src/Parser.y"
                                  { (yyval.block) = (yyvsp[0].block);}
#line 2106 "src/Parser.tab.cpp"
    break;

  case 112: /* inclusive_or_expression: inclusive_or_expression '|' exclusive_or_expression  */
#line 345 "src/Parser.y"
                                                              { (yyval.block) = new BitwiseOr((yyvsp[-2].block), (yyvsp[0].block));}
#line 2112 "src/Parser.tab.cpp"
    break;

  case 113: /* logical_and_expression: inclusive_or_expression  */
#line 349 "src/Parser.y"
                                  { (yyval.block) = (yyvsp[0].block);}
#line 2118 "src/Parser.tab.cpp"
    break;

  case 114: /* logical_and_expression: logical_and_expression AND_OP inclusive_or_expression  */
#line 350 "src/Parser.y"
                                                                { (yyval.block) = new LogicalAnd((yyvsp[-2].block), (yyvsp[0].block));}
#line 2124 "src/Parser.tab.cpp"
    break;

  case 115: /* logical_or_expression: logical_and_expression  */
#line 354 "src/Parser.y"
                                 { (yyval.block) = (yyvsp[0].block);}
#line 2130 "src/Parser.tab.cpp"
    break;

  case 116: /* logical_or_expression: logical_or_expression OR_OP logical_and_expression  */
#line 355 "src/Parser.y"
                                                             { (yyval.block) = new LogicalOr((yyvsp[-2].block), (yyvsp[0].block));}
#line 2136 "src/Parser.tab.cpp"
    break;

  case 117: /* conditional_expression: logical_or_expression  */
#line 359 "src/Parser.y"
                                { (yyval.block) = (yyvsp[0].block);}
#line 2142 "src/Parser.tab.cpp"
    break;

  case 118: /* assignment_expression: conditional_expression  */
#line 364 "src/Parser.y"
                                 { (yyval.block) = (yyvsp[0].block);}
#line 2148 "src/Parser.tab.cpp"
    break;

  case 119: /* assignment_expression: unary_expression '=' assignment_expression  */
#line 366 "src/Parser.y"
                                                     { (yyval.block) = new Assignment((yyvsp[-2].block), "=", (yyvsp[0].block));}
#line 2154 "src/Parser.tab.cpp"
    break;

  case 120: /* assignment_expression: unary_expression MUL_ASSIGN assignment_expression  */
#line 367 "src/Parser.y"
                                                            { (yyval.block) = new Assignment((yyvsp[-2].block), "*=", new Multiplication((yyvsp[-2].block), (yyvsp[0].block)));}
#line 2160 "src/Parser.tab.cpp"
    break;

  case 121: /* assignment_expression: unary_expression DIV_ASSIGN assignment_expression  */
#line 368 "src/Parser.y"
                                                            { (yyval.block) = new Assignment((yyvsp[-2].block), "/=", new Division((yyvsp[-2].block), (yyvsp[0].block)));}
#line 2166 "src/Parser.tab.cpp"
    break;

  case 122: /* assignment_expression: unary_expression MOD_ASSIGN assignment_expression  */
#line 369 "src/Parser.y"
                                                            { (yyval.block) = new Assignment((yyvsp[-2].block), "%=", new Modulo((yyvsp[-2].block), (yyvsp[0].block)));}
#line 2172 "src/Parser.tab.cpp"
    break;

  case 123: /* assignment_expression: unary_expression ADD_ASSIGN assignment_expression  */
#line 370 "src/Parser.y"
                                                            { (yyval.block) = new Assignment((yyvsp[-2].block), "+=", new Addition((yyvsp[-2].block), (yyvsp[0].block)));}
#line 2178 "src/Parser.tab.cpp"
    break;

  case 124: /* assignment_expression: unary_expression SUB_ASSIGN assignment_expression  */
#line 371 "src/Parser.y"
                                                            { (yyval.block) = new Assignment((yyvsp[-2].block), "-=", new Subtraction((yyvsp[-2].block), (yyvsp[0].block)));}
#line 2184 "src/Parser.tab.cpp"
    break;

  case 125: /* constant_expression: conditional_expression  */
#line 376 "src/Parser.y"
                                 { (yyval.block) = (yyvsp[0].block);}
#line 2190 "src/Parser.tab.cpp"
    break;

  case 126: /* enum_specifier: ENUM '{' enumerator_list '}'  */
#line 385 "src/Parser.y"
                                       { (yyval.block) = new EnumSpecifier((yyvsp[-1].list));}
#line 2196 "src/Parser.tab.cpp"
    break;

  case 127: /* enum_specifier: ENUM IDENTIFIER '{' enumerator_list '}'  */
#line 386 "src/Parser.y"
                                                  { (yyval.block) = new EnumSpecifier((yyvsp[-1].list));}
#line 2202 "src/Parser.tab.cpp"
    break;

  case 128: /* enumerator_list: enumerator  */
#line 391 "src/Parser.y"
                     { std::vector<BlockPtr>* BlockList = new std::vector<BlockPtr>(); BlockList->push_back((yyvsp[0].block));  (yyval.list) = BlockList;}
#line 2208 "src/Parser.tab.cpp"
    break;

  case 129: /* enumerator_list: enumerator_list ',' enumerator  */
#line 392 "src/Parser.y"
                                         { (yyvsp[-2].list)->push_back((yyvsp[0].block)); (yyval.list) = (yyvsp[-2].list);}
#line 2214 "src/Parser.tab.cpp"
    break;

  case 130: /* enumerator: IDENTIFIER  */
#line 396 "src/Parser.y"
                     { (yyval.block) = new Enumerator(*(yyvsp[0].string));}
#line 2220 "src/Parser.tab.cpp"
    break;

  case 131: /* enumerator: IDENTIFIER '=' constant_expression  */
#line 397 "src/Parser.y"
                                             { (yyval.block) = new Enumerator(*(yyvsp[-2].string), (yyvsp[0].block));}
#line 2226 "src/Parser.tab.cpp"
    break;

  case 132: /* primary_expression: IDENTIFIER  */
#line 401 "src/Parser.y"
                     { (yyval.block) = new Expression(*(yyvsp[0].string)); delete (yyvsp[0].string);}
#line 2232 "src/Parser.tab.cpp"
    break;

  case 133: /* primary_expression: CONSTANT  */
#line 402 "src/Parser.y"
                   { (yyval.block) = new Expression(stoi(*(yyvsp[0].string))); delete (yyvsp[0].string);}
#line 2238 "src/Parser.tab.cpp"
    break;

  case 134: /* primary_expression: '(' expression ')'  */
#line 404 "src/Parser.y"
                             { (yyval.block) = (yyvsp[-1].block); }
#line 2244 "src/Parser.tab.cpp"
    break;


#line 2248 "src/Parser.tab.cpp"

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

#line 416 "src/Parser.y"


const Block *g_root;

const Block *parseAST() {
    g_root = 0;
    yyparse();
    return g_root;
}
