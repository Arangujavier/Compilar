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




/* First part of user prologue.  */
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#line 77 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_REAL = 3,                       /* REAL  */
  YYSYMBOL_ENTERO = 4,                     /* ENTERO  */
  YYSYMBOL_BOOLEANO = 5,                   /* BOOLEANO  */
  YYSYMBOL_CARACACTER = 6,                 /* CARACACTER  */
  YYSYMBOL_TABLA = 7,                      /* TABLA  */
  YYSYMBOL_CADENA = 8,                     /* CADENA  */
  YYSYMBOL_CONST = 9,                      /* CONST  */
  YYSYMBOL_FCONST = 10,                    /* FCONST  */
  YYSYMBOL_TIPO = 11,                      /* TIPO  */
  YYSYMBOL_FTIPO = 12,                     /* FTIPO  */
  YYSYMBOL_TUPLA = 13,                     /* TUPLA  */
  YYSYMBOL_FTUPLA = 14,                    /* FTUPLA  */
  YYSYMBOL_VAR = 15,                       /* VAR  */
  YYSYMBOL_FVAR = 16,                      /* FVAR  */
  YYSYMBOL_ES = 17,                        /* ES  */
  YYSYMBOL_ENT = 18,                       /* ENT  */
  YYSYMBOL_SAL = 19,                       /* SAL  */
  YYSYMBOL_SUMA = 20,                      /* SUMA  */
  YYSYMBOL_RESTA = 21,                     /* RESTA  */
  YYSYMBOL_MULTIPLICACION = 22,            /* MULTIPLICACION  */
  YYSYMBOL_DIVISION = 23,                  /* DIVISION  */
  YYSYMBOL_DIV = 24,                       /* DIV  */
  YYSYMBOL_VERDADERO = 25,                 /* VERDADERO  */
  YYSYMBOL_FALSO = 26,                     /* FALSO  */
  YYSYMBOL_MOD = 27,                       /* MOD  */
  YYSYMBOL_NO = 28,                        /* NO  */
  YYSYMBOL_Y = 29,                         /* Y  */
  YYSYMBOL_O = 30,                         /* O  */
  YYSYMBOL_MAYOR_IGUAL = 31,               /* MAYOR_IGUAL  */
  YYSYMBOL_MENOR_IGUAL = 32,               /* MENOR_IGUAL  */
  YYSYMBOL_DISTINTO = 33,                  /* DISTINTO  */
  YYSYMBOL_MAYOR = 34,                     /* MAYOR  */
  YYSYMBOL_MENOR = 35,                     /* MENOR  */
  YYSYMBOL_ALGORITMO = 36,                 /* ALGORITMO  */
  YYSYMBOL_FALGORITMO = 37,                /* FALGORITMO  */
  YYSYMBOL_FUNCION = 38,                   /* FUNCION  */
  YYSYMBOL_FFUNCION = 39,                  /* FFUNCION  */
  YYSYMBOL_ACCION = 40,                    /* ACCION  */
  YYSYMBOL_FACCION = 41,                   /* FACCION  */
  YYSYMBOL_SI = 42,                        /* SI  */
  YYSYMBOL_FSI = 43,                       /* FSI  */
  YYSYMBOL_MIENTRAS = 44,                  /* MIENTRAS  */
  YYSYMBOL_FMIENTRAS = 45,                 /* FMIENTRAS  */
  YYSYMBOL_PARA = 46,                      /* PARA  */
  YYSYMBOL_FPARA = 47,                     /* FPARA  */
  YYSYMBOL_CONTINUAR = 48,                 /* CONTINUAR  */
  YYSYMBOL_DE = 49,                        /* DE  */
  YYSYMBOL_HASTA = 50,                     /* HASTA  */
  YYSYMBOL_HACER = 51,                     /* HACER  */
  YYSYMBOL_REF = 52,                       /* REF  */
  YYSYMBOL_DEV = 53,                       /* DEV  */
  YYSYMBOL_COMENTARIO = 54,                /* COMENTARIO  */
  YYSYMBOL_PRECONDICION = 55,              /* PRECONDICION  */
  YYSYMBOL_POSTCONDICION = 56,             /* POSTCONDICION  */
  YYSYMBOL_LITERAL_ENTERO = 57,            /* LITERAL_ENTERO  */
  YYSYMBOL_LITERAL_REAL = 58,              /* LITERAL_REAL  */
  YYSYMBOL_IDENTIFICADOR = 59,             /* IDENTIFICADOR  */
  YYSYMBOL_LITERAL_CARACTER = 60,          /* LITERAL_CARACTER  */
  YYSYMBOL_LITERAL_CADENA = 61,            /* LITERAL_CADENA  */
  YYSYMBOL_ASIGNACION = 62,                /* ASIGNACION  */
  YYSYMBOL_COMPOSICION = 63,               /* COMPOSICION  */
  YYSYMBOL_SEPARADOR = 64,                 /* SEPARADOR  */
  YYSYMBOL_SUBRANGO = 65,                  /* SUBRANGO  */
  YYSYMBOL_PUNTO = 66,                     /* PUNTO  */
  YYSYMBOL_DEF_TIPO = 67,                  /* DEF_TIPO  */
  YYSYMBOL_ENTONCES = 68,                  /* ENTONCES  */
  YYSYMBOL_SI_NO_SI = 69,                  /* SI_NO_SI  */
  YYSYMBOL_CREACION_TIPO = 70,             /* CREACION_TIPO  */
  YYSYMBOL_INICIO_ARRAY = 71,              /* INICIO_ARRAY  */
  YYSYMBOL_FIN_ARRAY = 72,                 /* FIN_ARRAY  */
  YYSYMBOL_INICIO_LLAVE = 73,              /* INICIO_LLAVE  */
  YYSYMBOL_FIN_LLAVE = 74,                 /* FIN_LLAVE  */
  YYSYMBOL_PARENTESIS_APERTURA = 75,       /* PARENTESIS_APERTURA  */
  YYSYMBOL_PARENTESIS_CIERRE = 76,         /* PARENTESIS_CIERRE  */
  YYSYMBOL_YYACCEPT = 77,                  /* $accept  */
  YYSYMBOL_desc_algoritmo = 78,            /* desc_algoritmo  */
  YYSYMBOL_cabecera_alg = 79,              /* cabecera_alg  */
  YYSYMBOL_bloque_alg = 80,                /* bloque_alg  */
  YYSYMBOL_decl_globales = 81,             /* decl_globales  */
  YYSYMBOL_decl_a_f = 82,                  /* decl_a_f  */
  YYSYMBOL_bloque = 83,                    /* bloque  */
  YYSYMBOL_declaraciones = 84,             /* declaraciones  */
  YYSYMBOL_declaracion_tipo = 85,          /* declaracion_tipo  */
  YYSYMBOL_declaracion_cte = 86,           /* declaracion_cte  */
  YYSYMBOL_declaracion_var = 87,           /* declaracion_var  */
  YYSYMBOL_lista_d_tipo = 88,              /* lista_d_tipo  */
  YYSYMBOL_d_tipo = 89,                    /* d_tipo  */
  YYSYMBOL_expresion_t = 90,               /* expresion_t  */
  YYSYMBOL_lista_campos = 91,              /* lista_campos  */
  YYSYMBOL_tipo_base = 92,                 /* tipo_base  */
  YYSYMBOL_lista_d_cte = 93,               /* lista_d_cte  */
  YYSYMBOL_lista_d_var = 94,               /* lista_d_var  */
  YYSYMBOL_lista_id = 95,                  /* lista_id  */
  YYSYMBOL_decl_ent_sal = 96,              /* decl_ent_sal  */
  YYSYMBOL_decl_ent = 97,                  /* decl_ent  */
  YYSYMBOL_decl_sal = 98,                  /* decl_sal  */
  YYSYMBOL_expresion = 99,                 /* expresion  */
  YYSYMBOL_exp_a = 100,                    /* exp_a  */
  YYSYMBOL_exp_b = 101,                    /* exp_b  */
  YYSYMBOL_operando = 102,                 /* operando  */
  YYSYMBOL_instrucciones = 103,            /* instrucciones  */
  YYSYMBOL_instruccion = 104,              /* instruccion  */
  YYSYMBOL_asignacion = 105,               /* asignacion  */
  YYSYMBOL_alternativa = 106,              /* alternativa  */
  YYSYMBOL_lista_opciones = 107,           /* lista_opciones  */
  YYSYMBOL_iteracion = 108,                /* iteracion  */
  YYSYMBOL_it_cota_exp = 109,              /* it_cota_exp  */
  YYSYMBOL_it_cota_fija = 110,             /* it_cota_fija  */
  YYSYMBOL_accion_d = 111,                 /* accion_d  */
  YYSYMBOL_funcion_d = 112,                /* funcion_d  */
  YYSYMBOL_a_cabecera = 113,               /* a_cabecera  */
  YYSYMBOL_f_cabecera = 114,               /* f_cabecera  */
  YYSYMBOL_d_par_form = 115,               /* d_par_form  */
  YYSYMBOL_d_p_form = 116,                 /* d_p_form  */
  YYSYMBOL_accion_ll = 117,                /* accion_ll  */
  YYSYMBOL_funcion_ll = 118,               /* funcion_ll  */
  YYSYMBOL_l_ll = 119                      /* l_ll  */
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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   347

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  77
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  110
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  257

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   331


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    90,    90,    93,    96,    99,   100,   101,   104,   105,
     106,   109,   112,   113,   114,   115,   120,   123,   126,   131,
     132,   135,   136,   139,   140,   141,   142,   145,   146,   149,
     150,   153,   154,   155,   156,   157,   162,   163,   164,   165,
     166,   167,   170,   171,   172,   175,   176,   179,   180,   181,
     184,   187,   192,   193,   194,   197,   198,   199,   200,   201,
     204,   205,   206,   207,   208,   209,   212,   213,   214,   215,
     216,   217,   220,   221,   222,   223,   224,   225,   226,   229,
     230,   231,   232,   237,   238,   241,   242,   243,   244,   245,
     248,   251,   254,   255,   258,   259,   262,   265,   270,   273,
     276,   279,   282,   283,   286,   287,   288,   291,   294,   297,
     298
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
  "\"end of file\"", "error", "\"invalid token\"", "REAL", "ENTERO",
  "BOOLEANO", "CARACACTER", "TABLA", "CADENA", "CONST", "FCONST", "TIPO",
  "FTIPO", "TUPLA", "FTUPLA", "VAR", "FVAR", "ES", "ENT", "SAL", "SUMA",
  "RESTA", "MULTIPLICACION", "DIVISION", "DIV", "VERDADERO", "FALSO",
  "MOD", "NO", "Y", "O", "MAYOR_IGUAL", "MENOR_IGUAL", "DISTINTO", "MAYOR",
  "MENOR", "ALGORITMO", "FALGORITMO", "FUNCION", "FFUNCION", "ACCION",
  "FACCION", "SI", "FSI", "MIENTRAS", "FMIENTRAS", "PARA", "FPARA",
  "CONTINUAR", "DE", "HASTA", "HACER", "REF", "DEV", "COMENTARIO",
  "PRECONDICION", "POSTCONDICION", "LITERAL_ENTERO", "LITERAL_REAL",
  "IDENTIFICADOR", "LITERAL_CARACTER", "LITERAL_CADENA", "ASIGNACION",
  "COMPOSICION", "SEPARADOR", "SUBRANGO", "PUNTO", "DEF_TIPO", "ENTONCES",
  "SI_NO_SI", "CREACION_TIPO", "INICIO_ARRAY", "FIN_ARRAY", "INICIO_LLAVE",
  "FIN_LLAVE", "PARENTESIS_APERTURA", "PARENTESIS_CIERRE", "$accept",
  "desc_algoritmo", "cabecera_alg", "bloque_alg", "decl_globales",
  "decl_a_f", "bloque", "declaraciones", "declaracion_tipo",
  "declaracion_cte", "declaracion_var", "lista_d_tipo", "d_tipo",
  "expresion_t", "lista_campos", "tipo_base", "lista_d_cte", "lista_d_var",
  "lista_id", "decl_ent_sal", "decl_ent", "decl_sal", "expresion", "exp_a",
  "exp_b", "operando", "instrucciones", "instruccion", "asignacion",
  "alternativa", "lista_opciones", "iteracion", "it_cota_exp",
  "it_cota_fija", "accion_d", "funcion_d", "a_cabecera", "f_cabecera",
  "d_par_form", "d_p_form", "accion_ll", "funcion_ll", "l_ll", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-132)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-54)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -30,   -37,    35,    11,  -132,     5,    22,    39,    97,    49,
       5,     5,    24,   100,    37,   101,    61,   110,    94,   137,
      97,    97,    97,   102,   103,    -8,    49,    49,  -132,  -132,
     161,   107,   150,   109,   113,   158,   106,   114,  -132,   198,
     198,   134,  -132,   120,   132,  -132,   136,  -132,  -132,  -132,
    -132,  -132,  -132,  -132,  -132,  -132,   126,    97,   129,    97,
      61,    61,   151,   187,  -132,  -132,  -132,   148,   155,   168,
     169,   170,  -132,  -132,  -132,  -132,  -132,   149,  -132,   162,
     -12,  -132,  -132,   198,   150,  -132,  -132,   -35,  -132,   198,
     173,   188,  -132,    90,   293,    28,   -23,  -132,  -132,    61,
     191,   209,  -132,   183,   207,   212,   197,   198,  -132,   198,
     201,   198,   137,    61,   211,    50,   221,  -132,  -132,  -132,
    -132,    22,    22,    22,    22,    22,    13,   203,   251,  -132,
     -12,   293,   -23,    90,   157,  -132,   198,     3,   -10,    39,
      13,   198,   198,   198,   198,   198,   198,   -12,   -12,   -12,
     -12,   -12,   -12,   198,   198,  -132,  -132,   -31,   208,   137,
     137,   198,   217,   196,    90,   -23,    20,  -132,   202,   198,
      61,    61,    61,   204,   213,  -132,  -132,  -132,  -132,  -132,
    -132,   214,   150,  -132,     3,   210,  -132,  -132,  -132,  -132,
      90,    90,    90,    90,    90,    90,   293,   293,   293,   293,
     293,   293,   157,   157,    61,    61,   205,   238,   257,   198,
    -132,  -132,   232,   262,   231,   233,   252,   236,    50,    13,
     255,  -132,  -132,  -132,   198,   283,  -132,   198,  -132,   150,
    -132,   266,   150,   150,  -132,  -132,   258,   162,   271,  -132,
     277,   268,   150,  -132,  -132,   284,  -132,   137,   137,  -132,
    -132,   150,   205,   287,  -132,  -132,  -132
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     7,    41,    20,    15,    10,
       7,     7,     0,     0,     0,     0,    44,     0,     0,     0,
      15,    15,    15,     0,     0,     0,    10,    10,     5,     6,
       0,     0,     0,     0,    46,     0,     0,     0,     4,     0,
       0,     0,    85,    79,     0,    11,    84,    86,    87,    88,
      95,    94,    89,    12,    13,    14,     0,    15,     0,    15,
      44,    44,     0,    47,    49,     8,     9,     0,     0,     0,
       0,     0,    17,    34,    31,    32,    33,     0,    35,    30,
       0,    70,    71,     0,     0,    64,    63,    79,    28,     0,
       0,     0,    26,    27,    52,    53,    62,    54,    16,     0,
       0,     0,     2,    79,     0,     0,     0,     0,    82,     0,
       0,     0,     0,    44,     0,   103,     0,    50,    51,     3,
      48,    41,    41,    41,    41,    41,     0,     0,     0,    79,
       0,    65,    62,     0,    68,    25,     0,    52,    53,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    45,    18,    79,     0,     0,
       0,     0,   110,     0,    90,    80,     0,    83,     0,     0,
       0,     0,     0,     0,     0,    98,    39,    36,    37,    38,
      40,     0,     0,    21,     0,     0,    61,    78,    19,    24,
      76,    77,    75,    73,    72,    74,    55,    56,    57,    58,
      60,    59,    66,    67,    44,    44,    93,     0,     0,     0,
     107,    81,     0,     0,     0,     0,     0,     0,   103,     0,
       0,   108,    42,    43,     0,     0,    96,     0,   109,     0,
      99,     0,     0,     0,   100,   102,     0,    30,     0,    91,
       0,     0,     0,   104,   105,     0,    29,     0,     0,   101,
     106,     0,    93,     0,    22,    92,    97
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -132,  -132,  -132,  -132,   125,   112,    38,   123,    26,    54,
    -132,   199,   -83,  -123,    98,  -132,   200,   -53,   -95,  -132,
    -132,   273,   -27,   -47,   -68,   -19,  -110,    89,  -132,  -132,
      88,  -132,  -132,  -132,  -132,  -132,  -132,  -132,   124,  -132,
    -132,  -132,  -131
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     8,    17,     9,    25,    18,    19,    20,    21,
      22,    15,    90,    91,   128,    92,    13,    35,    36,    62,
      63,    64,    93,    94,    95,    96,    45,    46,    47,    48,
     225,    49,    50,    51,    26,    27,    59,    57,   173,   174,
      52,    97,   163
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,   135,   167,   181,   155,   185,     1,   117,   118,    80,
      60,    61,   104,   105,     6,   134,     7,   189,   158,   153,
     154,   138,     3,   147,   148,   149,   150,   151,   -23,   108,
     152,    10,   204,   131,    80,     4,    10,    10,    81,    82,
     136,    83,   137,   110,   136,    85,    86,   129,   111,   206,
     207,   141,   142,   143,   144,   145,   133,   153,   154,    11,
     168,   132,   133,   130,    11,    11,   187,   170,   171,   172,
      85,    86,   103,    88,     5,   214,   215,   216,   228,   186,
     162,    12,   164,   184,   166,   202,   203,    23,    89,    24,
     146,   165,   211,    44,    30,   114,   236,   116,    14,   220,
     196,   197,   198,   199,   200,   201,     6,    32,     7,   162,
      31,   132,    16,    33,   190,   191,   192,   193,   194,   195,
      34,   141,   142,   143,   144,   145,   133,   133,   132,   132,
     132,   132,   132,   132,   208,    28,    29,   252,    65,    66,
      44,    44,   213,    53,    54,    55,   241,    37,    38,   243,
     244,   222,   223,    73,    74,    75,    76,    77,    78,   250,
     146,    56,    58,    79,    67,    68,    69,    70,   254,    71,
      72,    80,    98,   101,   100,    81,    82,    99,    83,    39,
     102,    40,   162,    41,   108,    42,   153,   154,   -53,   -53,
     -53,   -53,   -53,   106,   109,   107,    43,   238,   110,   112,
     240,   113,    84,   111,   115,   119,    61,    85,    86,    87,
      88,   121,    73,    74,    75,    76,    77,    78,   122,    80,
     126,   127,    79,    81,    82,    89,    83,   -53,    44,    44,
      80,   123,   124,   125,    81,    82,   139,    83,   141,   142,
     143,   144,   145,   141,   142,   143,   144,   145,   141,   142,
     143,   144,   145,   140,   156,    85,    86,   103,   136,   161,
     129,    84,   175,   160,   169,   183,    85,    86,   157,    88,
     182,   205,   210,    89,   224,   159,   218,   146,   212,   219,
     217,   209,   146,   226,    89,   229,   221,   146,   141,   142,
     143,   144,   145,   141,   142,   143,   144,   145,   231,   234,
     232,   230,   141,   142,   143,   144,   145,   227,   141,   142,
     143,   144,   145,   147,   148,   149,   150,   151,   237,   233,
     152,   176,   177,   178,   179,   180,   239,   146,   248,   242,
     245,   249,   146,   251,   256,   246,   120,   253,   188,   247,
     255,   146,   235,     0,     0,     0,     0,   146
};

static const yytype_int16 yycheck[] =
{
      19,    84,   112,   126,    99,   136,    36,    60,    61,    21,
      18,    19,    39,    40,     9,    83,    11,   140,   101,    29,
      30,    89,    59,    20,    21,    22,    23,    24,    63,    52,
      27,     5,    63,    80,    21,     0,    10,    11,    25,    26,
      75,    28,    89,    66,    75,    57,    58,    59,    71,   159,
     160,    31,    32,    33,    34,    35,    83,    29,    30,     5,
     113,    80,    89,    75,    10,    11,    76,    17,    18,    19,
      57,    58,    59,    60,    63,   170,   171,   172,   209,    76,
     107,    59,   109,   130,   111,   153,   154,    38,    75,    40,
      70,   110,    72,   112,    70,    57,   219,    59,    59,   182,
     147,   148,   149,   150,   151,   152,     9,    70,    11,   136,
      10,   130,    15,    12,   141,   142,   143,   144,   145,   146,
      59,    31,    32,    33,    34,    35,   153,   154,   147,   148,
     149,   150,   151,   152,   161,    10,    11,   247,    26,    27,
     159,   160,   169,    20,    21,    22,   229,    37,    54,   232,
     233,   204,   205,     3,     4,     5,     6,     7,     8,   242,
      70,    59,    59,    13,     3,     4,     5,     6,   251,     8,
      63,    21,    63,    67,    16,    25,    26,    64,    28,    42,
      66,    44,   209,    46,    52,    48,    29,    30,    31,    32,
      33,    34,    35,    59,    62,    75,    59,   224,    66,    63,
     227,    75,    52,    71,    75,    54,    19,    57,    58,    59,
      60,    63,     3,     4,     5,     6,     7,     8,    63,    21,
      71,    59,    13,    25,    26,    75,    28,    70,   247,   248,
      21,    63,    63,    63,    25,    26,    63,    28,    31,    32,
      33,    34,    35,    31,    32,    33,    34,    35,    31,    32,
      33,    34,    35,    65,    63,    57,    58,    59,    75,    62,
      59,    52,    41,    51,    53,    14,    57,    58,    59,    60,
      67,    63,    76,    75,    69,    68,    63,    70,    76,    65,
      76,    64,    70,    45,    75,    53,    76,    70,    31,    32,
      33,    34,    35,    31,    32,    33,    34,    35,    67,    63,
      67,    39,    31,    32,    33,    34,    35,    50,    31,    32,
      33,    34,    35,    20,    21,    22,    23,    24,    63,    67,
      27,   121,   122,   123,   124,   125,    43,    70,    51,    63,
      72,    63,    70,    49,    47,   237,    63,   248,   139,    68,
     252,    70,   218,    -1,    -1,    -1,    -1,    70
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    36,    78,    59,     0,    63,     9,    11,    79,    81,
      85,    86,    59,    93,    59,    88,    15,    80,    83,    84,
      85,    86,    87,    38,    40,    82,   111,   112,    81,    81,
      70,    10,    70,    12,    59,    94,    95,    37,    54,    42,
      44,    46,    48,    59,   102,   103,   104,   105,   106,   108,
     109,   110,   117,    84,    84,    84,    59,   114,    59,   113,
      18,    19,    96,    97,    98,    82,    82,     3,     4,     5,
       6,     8,    63,     3,     4,     5,     6,     7,     8,    13,
      21,    25,    26,    28,    52,    57,    58,    59,    60,    75,
      89,    90,    92,    99,   100,   101,   102,   118,    63,    64,
      16,    67,    66,    59,    99,    99,    59,    75,    52,    62,
      66,    71,    63,    75,    83,    75,    83,    94,    94,    54,
      98,    63,    63,    63,    63,    63,    71,    59,    91,    59,
      75,   100,   102,    99,   101,    89,    75,   100,   101,    63,
      65,    31,    32,    33,    34,    35,    70,    20,    21,    22,
      23,    24,    27,    29,    30,    95,    63,    59,    89,    68,
      51,    62,    99,   119,    99,   102,    99,   103,    94,    53,
      17,    18,    19,   115,   116,    41,    93,    93,    93,    93,
      93,    90,    67,    14,   100,   119,    76,    76,    88,    90,
      99,    99,    99,    99,    99,    99,   100,   100,   100,   100,
     100,   100,   101,   101,    63,    63,   103,   103,    99,    64,
      76,    72,    76,    99,    95,    95,    95,    76,    63,    65,
      89,    76,    94,    94,    69,   107,    45,    50,   119,    53,
      39,    67,    67,    67,    63,   115,    90,    63,    99,    43,
      99,    89,    63,    89,    89,    72,    91,    68,    51,    63,
      89,    49,   103,   104,    89,   107,    47
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    77,    78,    79,    80,    81,    81,    81,    82,    82,
      82,    83,    84,    84,    84,    84,    85,    86,    87,    88,
      88,    89,    89,    89,    89,    89,    89,    90,    90,    91,
      91,    92,    92,    92,    92,    92,    93,    93,    93,    93,
      93,    93,    94,    94,    94,    95,    95,    96,    96,    96,
      97,    98,    99,    99,    99,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   102,
     102,   102,   102,   103,   103,   104,   104,   104,   104,   104,
     105,   106,   107,   107,   108,   108,   109,   110,   111,   112,
     113,   114,   115,   115,   116,   116,   116,   117,   118,   119,
     119
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     7,     4,     2,     2,     2,     0,     2,     2,
       0,     2,     2,     2,     2,     0,     4,     4,     4,     5,
       0,     3,     8,     1,     3,     2,     1,     1,     1,     5,
       0,     1,     1,     1,     1,     1,     5,     5,     5,     5,
       5,     0,     5,     5,     0,     3,     1,     1,     2,     1,
       2,     2,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     2,     3,     3,     2,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     1,
       3,     4,     2,     3,     1,     1,     1,     1,     1,     1,
       3,     6,     5,     0,     1,     1,     5,     9,     4,     6,
       5,     7,     3,     0,     4,     4,     5,     4,     4,     3,
       1
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

#line 1379 "parser.tab.c"

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

