/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    REAL = 258,                    /* REAL  */
    ENTERO = 259,                  /* ENTERO  */
    BOOLEANO = 260,                /* BOOLEANO  */
    CARACACTER = 261,              /* CARACACTER  */
    TABLA = 262,                   /* TABLA  */
    CADENA = 263,                  /* CADENA  */
    CONST = 264,                   /* CONST  */
    FCONST = 265,                  /* FCONST  */
    TIPO = 266,                    /* TIPO  */
    FTIPO = 267,                   /* FTIPO  */
    TUPLA = 268,                   /* TUPLA  */
    FTUPLA = 269,                  /* FTUPLA  */
    VAR = 270,                     /* VAR  */
    FVAR = 271,                    /* FVAR  */
    ES = 272,                      /* ES  */
    ENT = 273,                     /* ENT  */
    SAL = 274,                     /* SAL  */
    SUMA = 275,                    /* SUMA  */
    RESTA = 276,                   /* RESTA  */
    MULTIPLICACION = 277,          /* MULTIPLICACION  */
    DIVISION = 278,                /* DIVISION  */
    DIV = 279,                     /* DIV  */
    VERDADERO = 280,               /* VERDADERO  */
    FALSO = 281,                   /* FALSO  */
    MOD = 282,                     /* MOD  */
    NO = 283,                      /* NO  */
    Y = 284,                       /* Y  */
    O = 285,                       /* O  */
    MAYOR_IGUAL = 286,             /* MAYOR_IGUAL  */
    MENOR_IGUAL = 287,             /* MENOR_IGUAL  */
    DISTINTO = 288,                /* DISTINTO  */
    MAYOR = 289,                   /* MAYOR  */
    MENOR = 290,                   /* MENOR  */
    ALGORITMO = 291,               /* ALGORITMO  */
    FALGORITMO = 292,              /* FALGORITMO  */
    FUNCION = 293,                 /* FUNCION  */
    FFUNCION = 294,                /* FFUNCION  */
    ACCION = 295,                  /* ACCION  */
    FACCION = 296,                 /* FACCION  */
    SI = 297,                      /* SI  */
    FSI = 298,                     /* FSI  */
    MIENTRAS = 299,                /* MIENTRAS  */
    FMIENTRAS = 300,               /* FMIENTRAS  */
    PARA = 301,                    /* PARA  */
    FPARA = 302,                   /* FPARA  */
    CONTINUAR = 303,               /* CONTINUAR  */
    DE = 304,                      /* DE  */
    HASTA = 305,                   /* HASTA  */
    HACER = 306,                   /* HACER  */
    REF = 307,                     /* REF  */
    DEV = 308,                     /* DEV  */
    COMENTARIO = 309,              /* COMENTARIO  */
    PRECONDICION = 310,            /* PRECONDICION  */
    POSTCONDICION = 311,           /* POSTCONDICION  */
    LITERAL_ENTERO = 312,          /* LITERAL_ENTERO  */
    LITERAL_REAL = 313,            /* LITERAL_REAL  */
    IDENTIFICADOR = 314,           /* IDENTIFICADOR  */
    LITERAL_CARACTER = 315,        /* LITERAL_CARACTER  */
    LITERAL_CADENA = 316,          /* LITERAL_CADENA  */
    ASIGNACION = 317,              /* ASIGNACION  */
    COMPOSICION = 318,             /* COMPOSICION  */
    SEPARADOR = 319,               /* SEPARADOR  */
    SUBRANGO = 320,                /* SUBRANGO  */
    PUNTO = 321,                   /* PUNTO  */
    DEF_TIPO = 322,                /* DEF_TIPO  */
    ENTONCES = 323,                /* ENTONCES  */
    SI_NO_SI = 324,                /* SI_NO_SI  */
    CREACION_TIPO = 325,           /* CREACION_TIPO  */
    INICIO_ARRAY = 326,            /* INICIO_ARRAY  */
    FIN_ARRAY = 327,               /* FIN_ARRAY  */
    INICIO_LLAVE = 328,            /* INICIO_LLAVE  */
    FIN_LLAVE = 329,               /* FIN_LLAVE  */
    PARENTESIS_APERTURA = 330,     /* PARENTESIS_APERTURA  */
    PARENTESIS_CIERRE = 331        /* PARENTESIS_CIERRE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
