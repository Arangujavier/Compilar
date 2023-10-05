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
LETRA       [a-z]|[A-Z]
CIFRA       [0-9]

/*Tokens*/
LITERAL_REAL        [\+|\-]?{CIFRA}+"."{CIFRA}+(E[\+|\-]?{CIFRA}+)?
LITERAL_ENTERO      [\+|\-]?{CIFRA}+
LITERAL_BOOLEANO    VERDADERO|FALSO
IDENTIFICADOR       {LETRA}+({LETRA}|{CIFRA})*
LITERAL_CARACTER     \"([^\"])\"
LITERAL_CADENA      '([^'\\]|\\')*'

%%
    // REGLAS
    //Acciones a realizar sobre las definiciones
    //<patron> <accion>
    //  patron: Expresión regular
    //  accion: Codigo c a ejecutar
    //{CIFRA} { ECHO; }
{LITERAL_REAL}          {printf("[%d]: TOKEN: LITERAL REAL, VALOR %s\n", yylineno, yytext);} 
{LITERAL_ENTERO}        {printf("[%d]: TOKEN: LITERAL ENTERO, VALOR %s\n", yylineno, yytext);} 
{LITERAL_BOOLEANO}      {printf("[%d]: TOKEN: LITERAL BOOLEANO, VALOR: %s\n", yylineno, yytext); }
{IDENTIFICADOR}         {printf("[%d]: TOKEN: IDENTIFICADOR, VALOR: %s\n", yylineno, yytext); }
{LITERAL_CARACTER}      {printf("[%d]: TOKEN: LITERAL CARACTER, VALOR: %s\n", yylineno, yytext);}
{LITERAL_CADENA}        {printf("[%d]: TOKEN: LITERAL CADENA, VALOR: %s\n", yylineno, yytext);}
[ \t\n]                 {/*Ignorar*/}
.                       {printf("[%d]: ERROR: CARACTER INVALIDO, VALOR: %s\n", yylineno, yytext);}

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
