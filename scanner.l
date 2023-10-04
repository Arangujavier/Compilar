%{
    /*
        DOCUMENTACION:
        https://www.youtube.com/watch?v=_zbIOMp63mo&ab_channel=UniversitatPolit%C3%A8cnicadeVal%C3%A8ncia-UPV

    */

    // DEFINICIONES: Declaraciones de nombres asociados a expresiones regulares
    //<nombre> <expresion_regular>
    //digito [0-9]
    /*
        EXPRESIONES REGULARES:
            X Caracter X.
            . Cualquier caracter excepto una nueva línea.
            [xyz] Clase de caracteres. Casa con una 'x', una 'y', o una 'z'.
            [abj-o] (Subrango) Clase de caracteres que incluye un rango. Casara con una 'a', una 'b', o cualquier letra entre la 'j' y la 'o'.
            [^A-Z] (Negacion) Clase de caracteres negados. Casara con cualquier caracter excepto una letra mayuscula.
            r* (0 o mas veces) Cero o mas ocurrencias de la expresion regular r
            r+ (1 o mas veces) Una o mas ocurrencias de r
            r|s (O logico) r o s
            EN DESARROLLO
    */
//Librerias
#include <stdio.h>
%}

DIGITO      [0-9]
SIGNO       [+-]
EXPONENCIAL [eE]  
LETRA       [a-z]|[A-Z]

LITERAL_REAL    {SIGNO}?{DIGITO}+"."{DIGITO}+({EXPONENCIAL}{SIGNO}?{DIGITO}+)?
LITERAL_ENTERO  {SIGNO}?{DIGITO}+
LETRA_DIGITO    {LETRA}|{DIGITO} 
IDENTIFICADOR   {LETRA}|{LETRA_DIGITO}*
LITERAL_BOOLEANO    VERDADERO|FALSO

%%
    // REGLAS
    //Acciones a realizar sobre las definiciones
    //<patron> <accion>
    //  patron: Expresión regular
    //  accion: Codigo c a ejecutar
    //{digito} { ECHO; }
{LITERAL_BOOLEANO} { printf("TOKEN: BOOL, VALOR: %s\n", yytext); }
[a-zA-Z_][a-zA-Z_0-9]* { printf("TOKEN: IDENTIFICADOR, VALOR: %s\n", yytext);}
[ \t\n] {}
{LITERAL_ENTERO}    {printf("TOKEN : LITERAL ENTERO, VALOR %s\n", yytext);} 
{LITERAL_REAL}  {printf("TOKEN : LITERAL REAL, VALOR %s\n", yytext);} 
. {printf("TOKEN : NO SE QUE ES ESTO, VALOR %s\n", yytext);}

%%
    //CODIGO
int main(int argc, char **argv) {
    if(argc != 2){
        printf("Introduce archivo!!!!!");
        return 1;
    }
    yyin=fopen(argv[1],"r");
    if(!yyin){
        printf("No se puede abrir el arvhivo");
        return 1;
    }
    
    yylex();
    fclose(yyin);
    return 0;
}
