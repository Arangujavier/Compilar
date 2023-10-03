%{
//Librerias
#include <stdio.h>
%}

DIGITO   [0-9]
SIGNO    [+-]
E        [eE]

LITERAL_REAL    {SIGNO}?{DIGITO}+"."{DIGITO}+({E}{SIGNO}?{DIGITO}+)?
LITERAL_ENTERO  {SIGNO}?{DIGITO}+
MINUSCULA   [a-z]
MAYUSCULA   [A-Z]
LETRA   {MAYUSCULA}|{MINUSCULA}
LETRA_DIGITO    {LETRA}|{DIGITO} 
IDENTIFICADOR   {LETRA}|{LETRA_DIGITO}*
LITERAL_BOOLEANO    VERDADERO|FALSO

%%

{LITERAL_BOOLEANO} { printf("TOKEN: BOOL, VALOR: %s\n", yytext); }
{DIGITO}       { printf("TOKEN: NUMERO, VALOR: %s\n", yytext); }
[a-zA-Z_][a-zA-Z_0-9]* { printf("TOKEN: IDENTIFICADOR, VALOR: %s\n", yytext);}
[ \t\n] {}
. {printf("TOKEN : NO SE QUE ES ESTO, VALOR %s\n", yytext);}


{LITERAL_ENTERO}    {printf("TOKEN : LITERAL ENTERO, VALOR %s\n", yytext);} 
{LITERAL_REAL}  {printf("TOKEN : LITERAL REAL, VALOR %s\n", yytext);} 


%%
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
