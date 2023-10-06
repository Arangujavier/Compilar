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
int yywrap() { return 1; } //Excepcion para compilar en MAC
%}
/*Opciones*/
%option yylineno
%option case-insensitive 

/*Alfabeto*/
LETRA               [a-z]|[A-Z]
CIFRA               [0-9]
       
/*Palabras reservadas*/
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

    /*Operadores logicos*/
SUMA                "\+"
RESTA               "\-"
MULTIPLICACION      "\*"
DIV                 div
VERDADERO           verdadero
FALSO               falso
MOD                 mod
NO                  no
Y                   y
O                   o

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
ES                  "e/s"
ENT                 ent
SAL                 sal

    /*Tokens*/
LITERAL_REAL        [+|-]?{CIFRA}+"."{CIFRA}+(E[\+|\-]?{CIFRA}+)?
LITERAL_ENTERO      [+|-]?{CIFRA}+
IDENTIFICADOR       {LETRA}+({LETRA}|{CIFRA})*
LITERAL_CARACTER     \"([^\"])\"
LITERAL_CADENA      '([^'\\]|\\')*'
ASIGNACION          "\:=" 
COMPOSICION         "\;"
SEPARADOR           "\,"
SUBRANGO            "\."
DEF_TIPO            "\:"
ENTONCES            "\->"
SI_NO_SI            "\[\]"
CREACION_TIPO       "\="
INICIO_ARRAY        "\["
FIN_ARRAY           "\]"
INICIO_LLAVE        \{
CIERRE_LLAVE        \}
MAYOR_IGUAL         ">="
MENOR_IGUAL         "<="
DISTINTO            "!="
MAYOR               >
MENOR               <
PARENTESIS_APERTURA "\("
PARENTESIS_CIERRE   "\)"


/*Comentarios*/
COMENTARIO          \{[^}]*\}
PRECONDICION        \{prec:[^}]*\}
POSTCONDICION       \{post:[^}]*\}

%%
    // REGLAS
    //Acciones a realizar sobre las definiciones
    //<patron> <accion>
    //  patron: Expresión regular
    //  accion: Codigo c a ejecutar
    //{CIFRA} { ECHO; }
    
    /*Comentario*/
{PRECONDICION}          { printf("[%d]: TOKEN: PRECONDICION, VALOR %s\n", yylineno, yytext);}
{POSTCONDICION}         { printf("[%d]: TOKEN: POSTCONDICION, VALOR %s\n", yylineno, yytext);}
{COMENTARIO}            { printf("[%d]: TOKEN: COMENTARIO, VALOR %s\n", yylineno, yytext);}

    /*Tipo de dato*/
{REAL}|{ENTERO}|{BOOLEANO}|{CARACTER}|{TABLA}|{CADENA}|{CONST}|{FCONST}|{TIPO}|{FTIPO}|{TUPLA}|{FTUPLA}|{VAR}|{FVAR} {
    printf("[%d]: TOKEN: TIPO DE DATO, VALOR %s\n", yylineno, yytext);}
    /*Operador*/
{SUMA}|{RESTA}|{MULTIPLICACION}|{DIV}|{VERDADERO}|{FALSO}|{MOD}|{NO}|{Y}|{O} {
    printf("[%d]: TOKEN: OPERADOR, VALOR %s\n", yylineno, yytext);}
    /*Estructuras*/
{ALGORITMO}|{FALGORITMO}|{FUNCION}|{FFUNCION}|{ACCION}|{FACCION}|{SI}|{FSI}|{MIENTRAS}|{FMIENTRAS}|{PARA}|{FPARA}|{CONTINUAR}|{DE}|{HASTA}|{HACER}|{REF}|{DEV}|{ES}|{ENT}|{SAL}|{PARENTESIS_APERTURA}|{PARENTESIS_CIERRE} {
    printf("[%d]: TOKEN: ESTRUCTURA, VALOR: %s\n", yylineno, yytext);}

    /*Otros*/
{LITERAL_REAL}          { printf("[%d]: TOKEN: LITERAL REAL, VALOR %s\n", yylineno, yytext);} 
{LITERAL_ENTERO}        { printf("[%d]: TOKEN: LITERAL ENTERO, VALOR %s\n", yylineno, yytext);} 
{IDENTIFICADOR}         { printf("[%d]: TOKEN: IDENTIFICADOR, VALOR: %s\n", yylineno, yytext); }
{LITERAL_CARACTER}      { printf("[%d]: TOKEN: LITERAL CARACTER, VALOR: %s\n", yylineno, yytext);}
{LITERAL_CADENA}        { printf("[%d]: TOKEN: LITERAL CADENA, VALOR: %s\n", yylineno, yytext);}
{ASIGNACION}            { printf("[%d]: TOKEN: ASIGNACION, VALOR: %s\n", yylineno, yytext); }
{COMPOSICION}           { printf("[%d]: TOKEN: COMPOSICION, VALOR: %s\n", yylineno, yytext); }
{SEPARADOR}             { printf("[%d]: TOKEN: SEPARADOR, VALOR: %s\n", yylineno, yytext); }
{SUBRANGO}              { printf("[%d]: TOKEN: SUBRANGO, VALOR: %s\n", yylineno, yytext); }
{DEF_TIPO}              { printf("[%d]: TOKEN: DEF_TIPO, VALOR: %s\n", yylineno, yytext); }
{ENTONCES}              { printf("[%d]: TOKEN: ENTONCES, VALOR: %s\n", yylineno, yytext); }
{SI_NO_SI}              { printf("[%d]: TOKEN: SI_NO_SI, VALOR: %s\n", yylineno, yytext); }
{CREACION_TIPO}         { printf("[%d]: TOKEN: CREACION_TIPO, VALOR: %s\n", yylineno, yytext); }
{INICIO_ARRAY}          { printf("[%d]: TOKEN: INICIO_ARRAY, VALOR: %s\n", yylineno, yytext); }
{FIN_ARRAY}             { printf("[%d]: TOKEN: FIN_ARRAY, VALOR: %s\n", yylineno, yytext); }
{INICIO_LLAVE}          { printf("[%d]: TOKEN: INICIO_LLAVE, VALOR: %s\n", yylineno, yytext); }
{CIERRE_LLAVE}          { printf("[%d]: TOKEN: CIERRE_LLAVE, VALOR: %s\n", yylineno, yytext); }
{MAYOR_IGUAL}           { printf("[%d]: TOKEN: MAYOR_IGUAL, VALOR: %s\n", yylineno, yytext); }
{MENOR_IGUAL}           { printf("[%d]: TOKEN: MENOR_IGUAL, VALOR: %s\n", yylineno, yytext); }
{DISTINTO}              { printf("[%d]: TOKEN: DISTINTO, VALOR: %s\n", yylineno, yytext); }
{MAYOR}                 { printf("[%d]: TOKEN: MAYOR, VALOR: %s\n", yylineno, yytext); }
{MENOR}                 { printf("[%d]: TOKEN: MENOR, VALOR: %s\n", yylineno, yytext); }

[ \n]                   {/*Ignorar*/}
[ \t]                   {/*Ignorar*/}
.                       {printf("[%d]: ERROR:\n\tCARACTER INVALIDO, VALOR: %s\n", yylineno, yytext);}

%%
    //CODIGO
int main(int argc, char **argv) {
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
    
    // Copiar al fichero de salida
    yylex();
    fclose(yyin);
    return 0;
}
