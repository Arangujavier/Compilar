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

/*
DECLARACIONES EN C:
        Definir tipos y variables utilizadas en las acciones. Puede también usar comandos 
        del preprocesador para definir macros que se utilicen ahí, y utilizar #include para
        incluir archivos de cabecera que realicen cualquiera de estas cosas.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "parser.tab.h"
#include "tablaSimbolos.h"
#include "tablaCuadruplas.h"
#include "exp_ab.h"

int yylex(void);    // Declare the lexer function
void yyerror(char *s);
int yylex(void);
int yyparse(void);

extern FILE * yyin;
quad *qt;


/*
DECLARACIONES DE BISON:
        declaran los nombres de los símbolos terminales y no terminales, y también podrían 
        describir la precedencia de operadores y los tipos de datos de los valores semánticos
        de varios símbolos.
*/

#line 104 "parser.tab.c"

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
  YYSYMBOL_ENTERO = 3,                     /* ENTERO  */
  YYSYMBOL_REAL = 4,                       /* REAL  */
  YYSYMBOL_BOOLEANO = 5,                   /* BOOLEANO  */
  YYSYMBOL_CARACACTER = 6,                 /* CARACACTER  */
  YYSYMBOL_CADENA = 7,                     /* CADENA  */
  YYSYMBOL_TABLA = 8,                      /* TABLA  */
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
  YYSYMBOL_IGUAL = 77,                     /* IGUAL  */
  YYSYMBOL_YYACCEPT = 78,                  /* $accept  */
  YYSYMBOL_desc_algoritmo = 79,            /* desc_algoritmo  */
  YYSYMBOL_cabecera_alg = 80,              /* cabecera_alg  */
  YYSYMBOL_bloque_alg = 81,                /* bloque_alg  */
  YYSYMBOL_decl_globales = 82,             /* decl_globales  */
  YYSYMBOL_decl_a_f = 83,                  /* decl_a_f  */
  YYSYMBOL_bloque = 84,                    /* bloque  */
  YYSYMBOL_declaraciones = 85,             /* declaraciones  */
  YYSYMBOL_declaracion_tipo = 86,          /* declaracion_tipo  */
  YYSYMBOL_declaracion_cte = 87,           /* declaracion_cte  */
  YYSYMBOL_declaracion_var = 88,           /* declaracion_var  */
  YYSYMBOL_lista_d_tipo = 89,              /* lista_d_tipo  */
  YYSYMBOL_d_tipo = 90,                    /* d_tipo  */
  YYSYMBOL_expresion_t = 91,               /* expresion_t  */
  YYSYMBOL_lista_campos = 92,              /* lista_campos  */
  YYSYMBOL_tipo_base = 93,                 /* tipo_base  */
  YYSYMBOL_lista_d_cte = 94,               /* lista_d_cte  */
  YYSYMBOL_lista_d_var = 95,               /* lista_d_var  */
  YYSYMBOL_lista_id = 96,                  /* lista_id  */
  YYSYMBOL_decl_ent_sal = 97,              /* decl_ent_sal  */
  YYSYMBOL_decl_ent = 98,                  /* decl_ent  */
  YYSYMBOL_decl_sal = 99,                  /* decl_sal  */
  YYSYMBOL_expresion = 100,                /* expresion  */
  YYSYMBOL_exp = 101,                      /* exp  */
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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   394

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  78
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  112
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  255

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   332


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
      75,    76,    77
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   159,   159,   162,   165,   168,   169,   170,   173,   174,
     175,   178,   181,   182,   183,   184,   189,   192,   195,   200,
     201,   204,   205,   208,   209,   210,   211,   214,   215,   218,
     219,   222,   223,   224,   225,   226,   231,   232,   233,   234,
     235,   236,   239,   260,   263,   273,   281,   282,   283,   286,
     289,   295,   302,   306,   325,   326,   327,   328,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     356,   375,   376,   377,   378,   384,   385,   388,   389,   390,
     391,   392,   395,   421,   424,   425,   428,   429,   432,   435,
     440,   443,   446,   449,   452,   453,   456,   457,   458,   461,
     464,   467,   468
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
  "\"end of file\"", "error", "\"invalid token\"", "ENTERO", "REAL",
  "BOOLEANO", "CARACACTER", "CADENA", "TABLA", "CONST", "FCONST", "TIPO",
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
  "FIN_LLAVE", "PARENTESIS_APERTURA", "PARENTESIS_CIERRE", "IGUAL",
  "$accept", "desc_algoritmo", "cabecera_alg", "bloque_alg",
  "decl_globales", "decl_a_f", "bloque", "declaraciones",
  "declaracion_tipo", "declaracion_cte", "declaracion_var", "lista_d_tipo",
  "d_tipo", "expresion_t", "lista_campos", "tipo_base", "lista_d_cte",
  "lista_d_var", "lista_id", "decl_ent_sal", "decl_ent", "decl_sal",
  "expresion", "exp", "operando", "instrucciones", "instruccion",
  "asignacion", "alternativa", "lista_opciones", "iteracion",
  "it_cota_exp", "it_cota_fija", "accion_d", "funcion_d", "a_cabecera",
  "f_cabecera", "d_par_form", "d_p_form", "accion_ll", "funcion_ll",
  "l_ll", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-126)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-24)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -24,   -28,    40,    -3,  -126,    56,    10,    13,    75,   -13,
      56,    56,    32,    90,    47,    94,    59,    73,    72,   -16,
      75,    75,    75,    69,    71,    31,   -13,   -13,  -126,  -126,
     157,    68,    16,    76,    80,   120,    83,    81,  -126,    30,
      30,    96,  -126,    82,    61,  -126,   102,  -126,  -126,  -126,
    -126,  -126,  -126,  -126,  -126,  -126,    91,    75,   103,    75,
      59,    59,   123,   160,  -126,  -126,  -126,   117,   118,   119,
     121,   122,  -126,  -126,  -126,  -126,  -126,  -126,   129,   142,
      36,  -126,  -126,    36,    16,  -126,  -126,    -4,  -126,    36,
     139,   146,  -126,  -126,   255,  -126,  -126,    59,   149,    16,
    -126,   152,   162,   163,   166,    30,  -126,    36,   180,    30,
     -16,    59,   187,   135,   200,  -126,  -126,  -126,  -126,    10,
      10,    10,    10,    10,   -12,   175,   231,  -126,    85,   255,
    -126,    30,   186,    13,   -12,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,  -126,  -126,
    -126,    36,    36,    36,  -126,  -126,   183,   -16,   -16,    30,
     184,   171,   255,  -126,   -37,   176,  -126,   173,    30,    59,
      59,    59,   177,   188,  -126,  -126,  -126,  -126,  -126,  -126,
     190,    16,  -126,   182,  -126,  -126,  -126,    85,    85,    67,
      67,    67,    67,   255,   255,   271,   271,   271,   271,   271,
     -19,   323,   202,    59,   192,   218,   214,    30,  -126,  -126,
     212,   227,   203,   204,   213,   206,   135,   -12,   220,  -126,
    -126,  -126,    30,   224,  -126,    30,  -126,    16,  -126,   233,
      16,    16,  -126,  -126,   209,   142,   229,  -126,   248,   245,
      16,  -126,  -126,   260,  -126,   -16,   -16,  -126,  -126,    16,
     192,   263,  -126,  -126,  -126
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     7,    41,    20,    15,    10,
       7,     7,     0,     0,     0,     0,    43,     0,     0,    84,
      15,    15,    15,     0,     0,     0,    10,    10,     5,     6,
       0,     0,     0,     0,    45,     0,     0,     0,     4,     0,
       0,     0,    87,    80,     0,    11,    86,    88,    89,    90,
      97,    96,    91,    12,    13,    14,     0,    15,     0,    15,
      43,    43,     0,    46,    48,     8,     9,     0,     0,     0,
       0,     0,    17,    31,    34,    32,    33,    35,     0,    30,
       0,    61,    62,     0,     0,    78,    77,    57,    28,     0,
       0,     0,    26,    27,    51,    52,    16,     0,     0,     0,
       2,    57,     0,     0,     0,     0,    83,     0,    84,     0,
      84,    43,     0,   105,     0,    49,    50,     3,    47,    41,
      41,    41,    41,    41,     0,     0,     0,    57,    79,    56,
      25,     0,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    60,    70,
      71,     0,     0,     0,    44,    18,     0,    84,    84,     0,
     112,     0,    92,    80,    81,     0,    85,     0,     0,     0,
       0,     0,     0,     0,   100,    36,    39,    37,    38,    40,
       0,     0,    21,     0,    69,    19,    24,    53,    72,    73,
      74,    76,    75,    54,    55,    67,    68,    66,    64,    63,
      58,    65,     0,    43,    95,     0,     0,     0,   109,    82,
       0,     0,     0,     0,     0,     0,   105,     0,     0,   110,
      59,    42,     0,     0,    98,     0,   111,     0,   101,     0,
       0,     0,   102,   104,     0,    30,     0,    93,     0,     0,
       0,   106,   107,     0,    29,    84,    84,   103,   108,     0,
      95,     0,    22,    94,    99
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -126,  -126,  -126,  -126,    24,    51,    26,   154,    93,   111,
    -126,   178,   -82,  -116,    79,  -126,    50,   -57,   -90,  -126,
    -126,   252,   -39,    52,   208,  -105,    74,  -126,  -126,    77,
    -126,  -126,  -126,  -126,  -126,  -126,  -126,   101,  -126,  -126,
    -126,  -125
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     8,    17,     9,    25,    18,    19,    20,    21,
      22,    15,    90,    91,   126,    92,    13,    35,    36,    62,
      63,    64,    93,    94,    44,    45,    46,    47,    48,   223,
      49,    50,    51,    26,    27,    59,    57,   172,   173,    52,
      95,   161
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     102,   103,   130,   115,   116,   166,   183,   154,   180,    80,
     141,   142,     1,    81,    82,   106,    83,   156,   186,    73,
      74,    75,    76,    77,    78,    23,    39,    24,    40,    79,
      41,     3,    42,   148,    28,    29,   109,    80,   149,   150,
       4,    81,    82,    43,    83,    85,    86,   101,    88,    60,
      61,    80,   204,   205,   167,    81,    82,    80,    83,   -23,
       5,    81,    82,    89,    83,     6,   160,     7,    84,    12,
     165,   131,    14,    85,    86,    87,    88,    65,    66,   212,
     213,   214,   226,   112,     6,   114,     7,    85,    86,   101,
      16,    89,   160,    85,    86,   127,   141,   142,    10,   218,
      31,   234,    30,    10,    10,    89,    33,   137,   138,   139,
      37,    89,   140,   106,   141,   142,    11,    32,    34,   148,
     206,    11,    11,   107,   149,   150,    38,   108,    56,   211,
      58,    72,   128,   151,   109,   129,    98,   148,   153,    96,
     250,   132,   149,   150,    97,   239,   221,   100,   241,   242,
      99,   151,   169,   170,   171,   104,   153,   105,   248,   162,
      67,    68,    69,    70,    71,   110,   111,   252,   160,   175,
     176,   177,   178,   179,    53,    54,    55,   117,   113,    61,
     119,   120,   121,   236,   122,   123,   238,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     124,   125,   133,   200,   201,   202,   135,   136,   137,   138,
     139,   134,   155,   140,   158,   141,   142,   143,   144,   145,
     146,   147,   135,   136,   137,   138,   139,   131,   159,   140,
     157,   141,   142,   143,   144,   145,   146,   147,   148,   163,
     168,   174,   181,   149,   150,   182,   203,   208,   207,   210,
     209,   216,   151,   215,   148,   217,   152,   153,   219,   149,
     150,   222,   184,   224,   225,   227,   228,   237,   151,   232,
     229,   230,   152,   153,   220,   135,   136,   137,   138,   139,
     231,   243,   140,   235,   141,   142,   143,   144,   145,   146,
     147,   135,   136,   137,   138,   139,   240,   245,   140,   246,
     141,   142,   -24,   -24,   -24,   -24,   -24,   148,   247,   249,
     254,   185,   149,   150,   244,   118,   164,   233,     0,     0,
     251,   151,     0,   148,     0,   152,   153,   253,   149,   150,
       0,     0,     0,     0,     0,     0,     0,   151,     0,     0,
       0,     0,   153,   135,   136,   137,   138,   139,     0,     0,
     140,     0,   141,   142,   143,   144,   145,   146,   147,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   148,     0,     0,     0,     0,
     149,   150,     0,     0,     0,     0,     0,     0,     0,   151,
       0,     0,     0,     0,   153
};

static const yytype_int16 yycheck[] =
{
      39,    40,    84,    60,    61,   110,   131,    97,   124,    21,
      29,    30,    36,    25,    26,    52,    28,    99,   134,     3,
       4,     5,     6,     7,     8,    38,    42,    40,    44,    13,
      46,    59,    48,    52,    10,    11,    73,    21,    57,    58,
       0,    25,    26,    59,    28,    57,    58,    59,    60,    18,
      19,    21,   157,   158,   111,    25,    26,    21,    28,    63,
      63,    25,    26,    75,    28,     9,   105,    11,    52,    59,
     109,    75,    59,    57,    58,    59,    60,    26,    27,   169,
     170,   171,   207,    57,     9,    59,    11,    57,    58,    59,
      15,    75,   131,    57,    58,    59,    29,    30,     5,   181,
      10,   217,    70,    10,    11,    75,    12,    22,    23,    24,
      37,    75,    27,    52,    29,    30,     5,    70,    59,    52,
     159,    10,    11,    62,    57,    58,    54,    66,    59,   168,
      59,    63,    80,    66,    73,    83,    16,    52,    71,    63,
     245,    89,    57,    58,    64,   227,   203,    66,   230,   231,
      67,    66,    17,    18,    19,    59,    71,    75,   240,   107,
       3,     4,     5,     6,     7,    63,    75,   249,   207,   119,
     120,   121,   122,   123,    20,    21,    22,    54,    75,    19,
      63,    63,    63,   222,    63,    63,   225,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
      71,    59,    63,   151,   152,   153,    20,    21,    22,    23,
      24,    65,    63,    27,    51,    29,    30,    31,    32,    33,
      34,    35,    20,    21,    22,    23,    24,    75,    62,    27,
      68,    29,    30,    31,    32,    33,    34,    35,    52,    59,
      53,    41,    67,    57,    58,    14,    63,    76,    64,    76,
      74,    63,    66,    76,    52,    65,    70,    71,    76,    57,
      58,    69,    76,    45,    50,    53,    39,    43,    66,    63,
      67,    67,    70,    71,    72,    20,    21,    22,    23,    24,
      67,    72,    27,    63,    29,    30,    31,    32,    33,    34,
      35,    20,    21,    22,    23,    24,    63,    68,    27,    51,
      29,    30,    31,    32,    33,    34,    35,    52,    63,    49,
      47,   133,    57,    58,   235,    63,   108,   216,    -1,    -1,
     246,    66,    -1,    52,    -1,    70,    71,   250,    57,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,
      -1,    -1,    71,    20,    21,    22,    23,    24,    -1,    -1,
      27,    -1,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    71
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    36,    79,    59,     0,    63,     9,    11,    80,    82,
      86,    87,    59,    94,    59,    89,    15,    81,    84,    85,
      86,    87,    88,    38,    40,    83,   111,   112,    82,    82,
      70,    10,    70,    12,    59,    95,    96,    37,    54,    42,
      44,    46,    48,    59,   102,   103,   104,   105,   106,   108,
     109,   110,   117,    85,    85,    85,    59,   114,    59,   113,
      18,    19,    97,    98,    99,    83,    83,     3,     4,     5,
       6,     7,    63,     3,     4,     5,     6,     7,     8,    13,
      21,    25,    26,    28,    52,    57,    58,    59,    60,    75,
      90,    91,    93,   100,   101,   118,    63,    64,    16,    67,
      66,    59,   100,   100,    59,    75,    52,    62,    66,    73,
      63,    75,    84,    75,    84,    95,    95,    54,    99,    63,
      63,    63,    63,    63,    71,    59,    92,    59,   101,   101,
      90,    75,   101,    63,    65,    20,    21,    22,    23,    24,
      27,    29,    30,    31,    32,    33,    34,    35,    52,    57,
      58,    66,    70,    71,    96,    63,    90,    68,    51,    62,
     100,   119,   101,    59,   102,   100,   103,    95,    53,    17,
      18,    19,   115,   116,    41,    94,    94,    94,    94,    94,
      91,    67,    14,   119,    76,    89,    91,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,    63,   103,   103,   100,    64,    76,    74,
      76,   100,    96,    96,    96,    76,    63,    65,    90,    76,
      72,    95,    69,   107,    45,    50,   119,    53,    39,    67,
      67,    67,    63,   115,    91,    63,   100,    43,   100,    90,
      63,    90,    90,    72,    92,    68,    51,    63,    90,    49,
     103,   104,    90,   107,    47
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    78,    79,    80,    81,    82,    82,    82,    83,    83,
      83,    84,    85,    85,    85,    85,    86,    87,    88,    89,
      89,    90,    90,    90,    90,    90,    90,    91,    91,    92,
      92,    93,    93,    93,    93,    93,    94,    94,    94,    94,
      94,    94,    95,    95,    96,    96,    97,    97,    97,    98,
      99,   100,   100,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     102,   102,   102,   102,   102,   103,   103,   104,   104,   104,
     104,   104,   105,   106,   107,   107,   108,   108,   109,   110,
     111,   112,   113,   114,   115,   115,   116,   116,   116,   117,
     118,   119,   119
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     7,     4,     2,     2,     2,     0,     2,     2,
       0,     2,     2,     2,     2,     0,     4,     4,     4,     5,
       0,     3,     8,     1,     3,     2,     1,     1,     1,     5,
       0,     1,     1,     1,     1,     1,     5,     5,     5,     5,
       5,     0,     5,     0,     3,     1,     1,     2,     1,     2,
       2,     1,     1,     3,     3,     3,     2,     1,     3,     4,
       2,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     3,     3,     3,     3,     3,     1,     1,     2,
       1,     3,     4,     2,     0,     3,     1,     1,     1,     1,
       1,     1,     3,     6,     5,     0,     1,     1,     5,     9,
       4,     6,     5,     7,     3,     0,     4,     4,     5,     4,
       4,     3,     1
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
  case 31: /* tipo_base: ENTERO  */
#line 222 "parser.y"
               { (yyval.tipo) = 0;}
#line 1419 "parser.tab.c"
    break;

  case 32: /* tipo_base: BOOLEANO  */
#line 223 "parser.y"
                   { (yyval.tipo) = 1;}
#line 1425 "parser.tab.c"
    break;

  case 33: /* tipo_base: CARACACTER  */
#line 224 "parser.y"
                     { (yyval.tipo) = 2;}
#line 1431 "parser.tab.c"
    break;

  case 34: /* tipo_base: REAL  */
#line 225 "parser.y"
               { (yyval.tipo) = 3;}
#line 1437 "parser.tab.c"
    break;

  case 35: /* tipo_base: CADENA  */
#line 226 "parser.y"
                 { (yyval.tipo) = 4;}
#line 1443 "parser.tab.c"
    break;

  case 42: /* lista_d_var: lista_id DEF_TIPO d_tipo COMPOSICION lista_d_var  */
#line 239 "parser.y"
                                                          {
            // Recorro la lista de variables separada por , para asignar el tipo en la tabla de simbolos
            char * cadena;
            char * identificador;
            cadena = strdup((yyvsp[-4].identificador));
            identificador = strtok(cadena, ",");
            printf("DEBUG - Tipo a asignar: %d\n", (yyvsp[-2].tipo));
            while(identificador != NULL){
                Simbolo *simbolo = accederInfo(identificador);
                if(simbolo->sid != -1){
                    int id = simbolo->sid;
                    actualizarInfo(identificador, (yyvsp[-2].tipo), id); //El id se actualiza cuando no debe, si hay tiempo corregir
                }
                else{
               
                    actualizarInfo(identificador, (yyvsp[-2].tipo), generarId()); //El id se actualiza cuando no debe, si hay tiempo corregir
                }
                
                identificador = strtok(NULL,",");
            }
        }
#line 1469 "parser.tab.c"
    break;

  case 44: /* lista_id: IDENTIFICADOR SEPARADOR lista_id  */
#line 263 "parser.y"
                                         { /*¿POR QUE IDENTIFICADOR CONTIENE VARIOS IDENTIFICADORES?*/
            char * lista_id[50];
            char * identificador;
            identificador = strtok((yyvsp[-2].literal_cadena), ",");
            agregarNombre(identificador);
            strcpy(lista_id, (yyvsp[0].identificador));
            strcat(lista_id,",");
            strcat(lista_id,identificador);
            strcpy((yyval.identificador),lista_id);
        }
#line 1484 "parser.tab.c"
    break;

  case 45: /* lista_id: IDENTIFICADOR  */
#line 273 "parser.y"
                        { /*FUNCIONA*/
            char* cadena = (yyvsp[0].literal_cadena); // Cadena donde almaceno los datos a tratar
            //cadena[strlen(cadena)-1] = '\0'; // Elimino el ultimo caracter, ya que siempre es basura
            agregarNombre(cadena); // Añado el nombre del identificador a la tabla de simbolos
            (yyval.identificador) = strdup(cadena); // Añado el nombre de la cadena a la lista de de identificadores
        }
#line 1495 "parser.tab.c"
    break;

  case 51: /* expresion: exp  */
#line 295 "parser.y"
        {
      #ifdef _DEBUG
      printf("EXPRESION ARITMETICA BOOLEANA\n");
      #endif

      (yyval.paraExp) = (yyvsp[0].paraExp);
        }
#line 1507 "parser.tab.c"
    break;

  case 57: /* exp: IDENTIFICADOR  */
#line 328 "parser.y"
                       {
            if(!estaIncluido((yyvsp[0].literal_cadena))) {
                yyerror("Identificador no declarado");
            }}
#line 1516 "parser.tab.c"
    break;

  case 80: /* operando: IDENTIFICADOR  */
#line 356 "parser.y"
                  {

        if(estaIncluido((yyvsp[0].literal_cadena))) {

            Simbolo *s = accederInfo((yyvsp[0].literal_cadena));

            if(s->tipo == TIPOREAL || s->tipo == TIPOENTERO) {
                //$$ = new_exp_a();
                //$$->s = s;
            }
            else if(s->tipo == TIPOBOOLEANO) {
                //$$ = new_exp_b();
                //$$->s = s;
            }
        }
        else {
            yyerror("ID NO EXISTE EN LA TABLA DE SIMBOLOS");
        }
    }
#line 1540 "parser.tab.c"
    break;

  case 92: /* asignacion: operando ASIGNACION exp  */
#line 396 "parser.y"
        {

        if(es_aritmetico((yyvsp[-2].paraExp)) && es_aritmetico((yyvsp[0].paraExp)))
        {

                if((yyvsp[-2].paraExp)->s->tipo == (yyvsp[0].paraExp)->s->tipo)
                {        
                gen(&qt, ASIGNA, (yyvsp[0].paraExp)->s->sid, -1, (yyvsp[-2].paraExp)->s->sid);
                } 
        else if((yyvsp[-2].paraExp)->s->tipo == TIPOENTERO && (yyvsp[0].paraExp)->s->tipo == TIPOREAL)
        {
                printf("TIPOREAL A TIPOENTERO\n");
                gen(&qt, REA2INT, (yyvsp[0].paraExp)->s->sid, -1, (yyvsp[-2].paraExp)->s->sid);
        }
        else if((yyvsp[-2].paraExp)->s->tipo == TIPOREAL && (yyvsp[0].paraExp)->s->tipo == TIPOENTERO)
        {
                printf(" TIPOENTERO A TIPOREAL\n");
                gen(&qt, INT2REA, (yyvsp[0].paraExp)->s->sid, -1, (yyvsp[-2].paraExp)->s->sid);
        }  
        }

                printf("Asignacion: Variable: |%s| := |%s|\n", (yyvsp[-2].paraExp), (yyvsp[0].paraExp));
        }
#line 1568 "parser.tab.c"
    break;


#line 1572 "parser.tab.c"

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

#line 471 "parser.y"



void yyerror(char *s) {
    fprintf(stderr, "Error: %s\n", s);
}


int main (int argc, char **argv ) {
    if(argc != 2){
        printf("Introduce archivo!!!!!");
        return 1;
    }
    // Cambio entrada estandar para que apunte a un fichero
    yyin=fopen(argv[1],"r");
    if(!yyin){
        printf("No se puede abrir el archivo");
        return 1;
    }
    //yydebug = 1;
    
    // Copiar al fichero de salida
    yyparse();
    fclose(yyin);

    // Mostrar contenido de las distintas tablas
    mostrarTablaSimbolos();
    return 0;
}
