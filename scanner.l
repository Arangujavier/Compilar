%{
    /*
        DOCUMENTACION:
        https://www.youtube.com/watch?v=_zbIOMp63mo&ab_channel=UniversitatPolit%C3%A8cnicadeVal%C3%A8ncia-UPV
        https://www.youtube.com/watch?v=AyB7gVNor9U&ab_channel=EducacionOnLine

    */

    // DEFINICIONES: Declaraciones de nombres asociados a expresiones regulares
    //<nombre> <expresion_regular>
    //CIFRA [0-9]
    /*
        EXPRESIONES REGULARES:
            X Caracter X.
            . Cualquier caracter excepto una nueva línea.
            [xyz] Clase de caracteres. Casa con una 'x', una 'y', o una 'z'.
            [abj-o] (Subrango) Clase de caracteres que incluye un rango. Casara con una 'a', una 'b', o cualquier letra entre la 'j' y la 'o'.
            [^A-Z] (Negacion) Clase de caracteres negados. Casara con cualquier caracter excepto una letra mayuscula.
            r* (0 o mas veces) Cero o mas ocurrencias de la expresion regular r
            r+ (1 o mas veces) Una o mas ocurrencias de r.
            r|s (O logico) r o s.
            r? (0 o 1 veces) Cero o una ocurrencia de r.
            r{3,6} De 3 a 6 ocurrencias de r.
            {nombre} La expansion de la definicion nombre. Referencia a una expresión regular creada antes.
            \x  Si x es una 'a'(alerta), 'b'(retroceso), 'f'(salto de pagina), 'n'(fin de linea), 'r'(retorno de carro), 't'(tabulador) o 'v'(tabulacion vertical): Interpretacion tipica de ANSI-C.
                Si no, se toma 'x', esto es util para caracteres como parentisis, barras, etc que tienen significado en flex.
            "[xyz]\"fo" La cadena literal: '[xyz]"fo'
            rs (concatenacion) La expresion regular r seguida de la expresion regular s.
            <<EOF>> Fin de fichero.
    */
//Librerias
#include <stdio.h>
#include "parser.tab.h"
int yywrap() { return 1; } //Excepcion para compilar en MAC
%}


/*Opciones*/
%option yylineno
%option case-insensitive 

/*Alfabeto*/
LETRA               [a-z]|[A-Z]
CIFRA               [0-9]
       
/*Tokens*/
    /*Tipo de dato*/
REAL                real
ENTERO              entero
BOOLEANO            booleano
CARACTER            caracter
TABLA               tabla
CADENA              cadena
CONST               const
FCONST              fconst
TIPO                tipo
FTIPO               ftipo
TUPLA               tupla
FTUPLA              ftupla
VAR                 var
FVAR                fvar
ES                  "e/s"
ENT                 ent
SAL                 sal

    /*Operadores logicos*/
SUMA                "\+"   
RESTA               "\-"
MULTIPLICACION      "\*"
DIVISION            "\/"
DIV                 div
VERDADERO           verdadero
FALSO               falso
MOD                 mod
NO                  no
Y                   y
O                   o
MAYOR_IGUAL         ">="
MENOR_IGUAL         "<="
DISTINTO            "<>"
MAYOR               >
MENOR               <

    /*Estructuras*/
ALGORITMO           algoritmo
FALGORITMO          falgoritmo
FUNCION             funcion
FFUNCION            ffuncion
ACCION              accion
FACCION             faccion
SI                  si
FSI                 fsi
MIENTRAS            mientras
FMIENTRAS           fmientras
PARA                para
FPARA               fpara
CONTINUAR           continuar
DE                  de
HASTA               hasta
HACER               hacer
REF                 ref
DEV                 dev

    /*Comentarios*/
COMENTARIO          \{[^}]*\}
PRECONDICION        \{prec[^}]*\}
POSTCONDICION       \{post[^}]*\}

    /*Otros*/
LITERAL_REAL        ({SUMA}|{RESTA})?{CIFRA}+"."{CIFRA}+(E({SUMA}|{RESTA})?{CIFRA}+)?
LITERAL_ENTERO      ({SUMA}|{RESTA})?{CIFRA}+(E({SUMA}|{RESTA})?{CIFRA}+)?
IDENTIFICADOR       {LETRA}+({LETRA}|{CIFRA})*
LITERAL_CARACTER     \"([^\"])\"
LITERAL_CADENA      '([^'\n\\]|\\.|\\\n)*'
ASIGNACION          "\:=" 
COMPOSICION         "\;"
SEPARADOR           "\,"
SUBRANGO            "\.\."
PUNTO               "\."
DEF_TIPO            "\:"
ENTONCES            "\->"
SI_NO_SI            "\[\]"
CREACION_TIPO       "\="
INICIO_ARRAY        "\["
FIN_ARRAY           "\]"
INICIO_LLAVE        \{
CIERRE_LLAVE        \}
PARENTESIS_APERTURA "\("
PARENTESIS_CIERRE   "\)"



%%

    // REGLAS
    //Acciones a realizar sobre las definiciones
    //<patron> <accion>
    //  patron: Expresión regular
    //  accion: Codigo c a ejecutar
    //{CIFRA} { ECHO; }
    
    /*Comentario*/
{PRECONDICION}          { printf("[%d]: TOKEN: PRECONDICION, VALOR %s\n", yylineno, yytext); return COMENTARIO  ; }
{POSTCONDICION}         { printf("[%d]: TOKEN: POSTCONDICION, VALOR %s\n", yylineno, yytext); return COMENTARIO  ; }
{COMENTARIO}            { printf("[%d]: TOKEN: COMENTARIO, VALOR %s\n", yylineno, yytext); return COMENTARIO; }
{PUNTO}                 { printf("[%d]: TOKEN: PUNTO, VALOR %s\n", yylineno, yytext); return PUNTO; }


    /*Tipo de dato*/
{REAL}                  { printf("[%d]: TOKEN: TIPO DE DATO, VALOR %s\n", yylineno, yytext); yyval.tipo = real; return REAL;}
{ENTERO}                { printf("[%d]: TOKEN: TIPO DE DATO, VALOR %s\n", yylineno, yytext); return ENTERO;}
{BOOLEANO}              { printf("[%d]: TOKEN: TIPO DE DATO, VALOR %s\n", yylineno, yytext); return BOOLEANO;}
{CARACTER}              { printf("[%d]: TOKEN: TIPO DE DATO, VALOR %s\n", yylineno, yytext); return CARACACTER;}
{TABLA}                 { printf("[%d]: TOKEN: TIPO DE DATO, VALOR %s\n", yylineno, yytext); return TABLA;}
{CADENA}                { printf("[%d]: TOKEN: TIPO DE DATO, VALOR %s\n", yylineno, yytext); return CADENA;}
{CONST}                 { printf("[%d]: TOKEN: TIPO DE DATO, VALOR %s\n", yylineno, yytext); return CONST;}
{FCONST}                { printf("[%d]: TOKEN: TIPO DE DATO, VALOR %s\n", yylineno, yytext); return FCONST;}
{TIPO}                  { printf("[%d]: TOKEN: TIPO DE DATO, VALOR %s\n", yylineno, yytext); return TIPO;}
{FTIPO}                 { printf("[%d]: TOKEN: TIPO DE DATO, VALOR %s\n", yylineno, yytext); return FTIPO;}
{TUPLA}                 { printf("[%d]: TOKEN: TIPO DE DATO, VALOR %s\n", yylineno, yytext); return TUPLA;}
{FTUPLA}                { printf("[%d]: TOKEN: TIPO DE DATO, VALOR %s\n", yylineno, yytext); return FTUPLA;}
{VAR}                   { printf("[%d]: TOKEN: TIPO DE DATO, VALOR %s\n", yylineno, yytext); return VAR;}
{FVAR}                  {printf("[%d]: TOKEN: TIPO DE DATO, VALOR %s\n", yylineno, yytext); return FVAR;}
    /*Operador*/
{SUMA}                  { printf("[%d]: TOKEN: OPERADOR, VALOR %s\n", yylineno, yytext); return SUMA;}
{RESTA}                 { printf("[%d]: TOKEN: OPERADOR, VALOR %s\n", yylineno, yytext); return RESTA;}
{MULTIPLICACION}        { printf("[%d]: TOKEN: OPERADOR, VALOR %s\n", yylineno, yytext); return MULTIPLICACION;}
{DIV}                   { printf("[%d]: TOKEN: OPERADOR, VALOR %s\n", yylineno, yytext); return DIV;}
{VERDADERO}             { printf("[%d]: TOKEN: OPERADOR, VALOR %s\n", yylineno, yytext); return VERDADERO;}
{FALSO}                 { printf("[%d]: TOKEN: OPERADOR, VALOR %s\n", yylineno, yytext); return FALSO;}
{MOD}                   { printf("[%d]: TOKEN: OPERADOR, VALOR %s\n", yylineno, yytext); return MOD;}
{NO}                    { printf("[%d]: TOKEN: OPERADOR, VALOR %s\n", yylineno, yytext); return NO;}
{Y}                     { printf("[%d]: TOKEN: OPERADOR, VALOR %s\n", yylineno, yytext); return Y;}
{O}                     { printf("[%d]: TOKEN: OPERADOR, VALOR %s\n", yylineno, yytext); return O;} 
    
    /*Estructuras*/
{ALGORITMO}             { printf("[%d]: TOKEN: ESTRUCTURA, VALOR: %s\n", yylineno, yytext); return ALGORITMO;}
{FALGORITMO}            { printf("[%d]: TOKEN: ESTRUCTURA, VALOR: %s\n", yylineno, yytext); return FALGORITMO;}
{FUNCION}               { printf("[%d]: TOKEN: ESTRUCTURA, VALOR: %s\n", yylineno, yytext); return FUNCION;}
{FFUNCION}              { printf("[%d]: TOKEN: ESTRUCTURA, VALOR: %s\n", yylineno, yytext); return FFUNCION;}
{ACCION}                { printf("[%d]: TOKEN: ESTRUCTURA, VALOR: %s\n", yylineno, yytext); return ACCION;}
{FACCION}               { printf("[%d]: TOKEN: ESTRUCTURA, VALOR: %s\n", yylineno, yytext); return FACCION;}
{SI}                    { printf("[%d]: TOKEN: ESTRUCTURA, VALOR: %s\n", yylineno, yytext); return SI;}
{FSI}                   { printf("[%d]: TOKEN: ESTRUCTURA, VALOR: %s\n", yylineno, yytext); return FSI;}
{MIENTRAS}              { printf("[%d]: TOKEN: ESTRUCTURA, VALOR: %s\n", yylineno, yytext); return MIENTRAS;}
{FMIENTRAS}             { printf("[%d]: TOKEN: ESTRUCTURA, VALOR: %s\n", yylineno, yytext); return FMIENTRAS;}
{PARA}                  { printf("[%d]: TOKEN: ESTRUCTURA, VALOR: %s\n", yylineno, yytext); return PARA;}
{FPARA}                 { printf("[%d]: TOKEN: ESTRUCTURA, VALOR: %s\n", yylineno, yytext); return FPARA;}
{CONTINUAR}             { printf("[%d]: TOKEN: ESTRUCTURA, VALOR: %s\n", yylineno, yytext); return CONTINUAR;}
{DE}                    { printf("[%d]: TOKEN: ESTRUCTURA, VALOR: %s\n", yylineno, yytext); return DE;}
{HASTA}                 { printf("[%d]: TOKEN: ESTRUCTURA, VALOR: %s\n", yylineno, yytext); return HASTA;}
{HACER}                 { printf("[%d]: TOKEN: ESTRUCTURA, VALOR: %s\n", yylineno, yytext); return HACER;}
{REF}                   { printf("[%d]: TOKEN: ESTRUCTURA, VALOR: %s\n", yylineno, yytext); return REF;}
{DEV}                   { printf("[%d]: TOKEN: ESTRUCTURA, VALOR: %s\n", yylineno, yytext); return DEV;}
{ES}                    { printf("[%d]: TOKEN: ESTRUCTURA, VALOR: %s\n", yylineno, yytext); return ES;}
{ENT}                   { printf("[%d]: TOKEN: ESTRUCTURA, VALOR: %s\n", yylineno, yytext); return ENT;}
{SAL}                   { printf("[%d]: TOKEN: ESTRUCTURA, VALOR: %s\n", yylineno, yytext); return SAL;}
{PARENTESIS_APERTURA}   { printf("[%d]: TOKEN: ESTRUCTURA, VALOR: %s\n", yylineno, yytext); return PARENTESIS_APERTURA;}
{PARENTESIS_CIERRE}     { printf("[%d]: TOKEN: ESTRUCTURA, VALOR: %s\n", yylineno, yytext); return PARENTESIS_CIERRE;}

    /*Otros*/
{LITERAL_REAL}          { printf("[%d]: TOKEN: LITERAL REAL, VALOR %s\n", yylineno, yytext); yyval.ctype; return LITERAL_REAL;} 
{LITERAL_ENTERO}        { printf("[%d]: TOKEN: LITERAL ENTERO, VALOR %s\n", yylineno, yytext); return LITERAL_ENTERO;} 
{IDENTIFICADOR}         { printf("[%d]: TOKEN: IDENTIFICADOR, VALOR: %s\n", yylineno, yytext); return IDENTIFICADOR; }
{LITERAL_CARACTER}      { printf("[%d]: TOKEN: LITERAL CARACTER, VALOR: %s\n", yylineno, yytext); return LITERAL_CARACTER;}
{LITERAL_CADENA}        { printf("[%d]: TOKEN: LITERAL CADENA, VALOR: %s\n", yylineno, yytext); return LITERAL_CADENA;}
{ASIGNACION}            { printf("[%d]: TOKEN: ASIGNACION, VALOR: %s\n", yylineno, yytext);return ASIGNACION; }
{COMPOSICION}           { printf("[%d]: TOKEN: COMPOSICION, VALOR: %s\n", yylineno, yytext); return COMPOSICION; }
{SEPARADOR}             { printf("[%d]: TOKEN: SEPARADOR, VALOR: %s\n", yylineno, yytext); return SEPARADOR; }
{SUBRANGO}              { printf("[%d]: TOKEN: SUBRANGO, VALOR: %s\n", yylineno, yytext); return SUBRANGO; }
{DEF_TIPO}              { printf("[%d]: TOKEN: DEF_TIPO, VALOR: %s\n", yylineno, yytext); return DEF_TIPO; }
{ENTONCES}              { printf("[%d]: TOKEN: ENTONCES, VALOR: %s\n", yylineno, yytext); return ENTONCES; }
{SI_NO_SI}              { printf("[%d]: TOKEN: SI_NO_SI, VALOR: %s\n", yylineno, yytext); return SI_NO_SI;}
{CREACION_TIPO}         { printf("[%d]: TOKEN: CREACION_TIPO, VALOR: %s\n", yylineno, yytext); return CREACION_TIPO;}
{INICIO_ARRAY}          { printf("[%d]: TOKEN: INICIO_ARRAY, VALOR: %s\n", yylineno, yytext); return INICIO_ARRAY;}
{FIN_ARRAY}             { printf("[%d]: TOKEN: FIN_ARRAY, VALOR: %s\n", yylineno, yytext); return FIN_ARRAY; }
{MAYOR_IGUAL}           { printf("[%d]: TOKEN: MAYOR_IGUAL, VALOR: %s\n", yylineno, yytext); return MAYOR_IGUAL; }
{MENOR_IGUAL}           { printf("[%d]: TOKEN: MENOR_IGUAL, VALOR: %s\n", yylineno, yytext); return MENOR_IGUAL; }
{DISTINTO}              { printf("[%d]: TOKEN: DISTINTO, VALOR: %s\n", yylineno, yytext); return DISTINTO; }
{MAYOR}                 { printf("[%d]: TOKEN: MAYOR, VALOR: %s\n", yylineno, yytext); return MAYOR; }
{MENOR}                 { printf("[%d]: TOKEN: MENOR, VALOR: %s\n", yylineno, yytext); return MENOR; }

[ \n]                   {/*Ignorar*/}
[ \t]                   {/*Ignorar*/}
.                       {printf("[%d]: ERROR:\n\tCARACTER INVALIDO, VALOR: %s\n", yylineno, yytext);}

%%

