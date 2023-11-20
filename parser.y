%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<errno.h>
#include "parser.tab.h"

int yylex(void);    // Declare the lexer function
void yyerror(char *s);
int yyparse(void);
extern FILE * yyin;

%}

%token REAL
%token ENTERO
%token BOOLEANO
%token CARACACTER
%token TABLA
%token CADENA
%token CONST
%token FCONST
%token TIPO
%token FTIPO
%token TUPLA
%token FTUPLA
%token VAR
%token FVAR
%token ES
%token ENT
%token SAL

%token SUMA
%token RESTA
%token MULTIPLICACION
%token DIVISION
%token DIV
%token VERDADERO
%token FALSO
%token MOD
%token NO
%token Y
%token O
%token MAYOR_IGUAL
%token MENOR_IGUAL
%token DISTINTO
%token MAYOR
%token MENOR

%token ALGORITMO
%token FALGORITMO
%token FUNCION
%token FFUNCION
%token ACCION
%token FACCION
%token SI
%token FSI
%token MIENTRAS
%token FMIENTRAS
%token PARA
%token FPARA
%token CONTINUAR
%token DE
%token HASTA
%token HACER
%token REF
%token DEV

%token COMENTARIO
%token PRECONDICION
%token POSTCONDICION

%token LITERAL_ENTERO
%token LITERAL_REAL
%token IDENTIFICADOR
%token LITERAL_CARACTER
%token LITERAL_CADENA
%token ASIGNACION
%token COMPOSICION
%token SEPARADOR
%token SUBRANGO
%token PUNTO
%token DEF_TIPO
%token ENTONCES
%token SI_NO_SI
%token CREACION_TIPO
%token INICIO_ARRAY
%token FIN_ARRAY
%token INICIO_LLAVE
%token FIN_LLAVE
%token PARENTESIS_APERTURA
%token PARENTESIS_CIERRE

%left CREACION_TIPO
%nonassoc MENOR_IGUAL MAYOR_IGUAL MAYOR MENOR IGUAL DISTINTO
%left SUMA RESTA 
%left MULTIPLICACION DIVISION DIV MOD
%left INICIO_ARRAY
%left SUBRANGO  
%left PUNTO
%left REF

%%

/* PROALG */
desc_algoritmo: 
        ALGORITMO IDENTIFICADOR COMPOSICION cabecera_alg bloque_alg FALGORITMO PUNTO 
;
cabecera_alg:
        decl_globales decl_a_f decl_ent_sal COMENTARIO 
;
bloque_alg:
        bloque COMENTARIO 
;
decl_globales:
        declaracion_tipo decl_globales
        | declaracion_cte decl_globales
        | /*Epsilon*/ 
;
decl_a_f:
        accion_d decl_a_f
        | funcion_d decl_a_f 
        | /*Epsilon*/ 
;
bloque:
        declaraciones instrucciones
;
declaraciones:
        declaracion_tipo declaraciones 
        | declaracion_cte declaraciones
        | declaracion_var declaraciones
        | /*Epsilon*/
;

/* DECLARACIONES */
declaracion_tipo:
        TIPO lista_d_tipo FTIPO COMPOSICION
;
declaracion_cte:
        CONST lista_d_cte FCONST COMPOSICION
;
declaracion_var:
        VAR lista_d_var FVAR COMPOSICION
;

/* TIPOS */
lista_d_tipo:
        IDENTIFICADOR CREACION_TIPO d_tipo COMPOSICION lista_d_tipo
        | /*Epsilon*/
;
d_tipo:
        TUPLA lista_campos FTUPLA
        | TABLA INICIO_ARRAY expresion_t SUBRANGO expresion_t FIN_ARRAY DE d_tipo
;
d_tipo:
        IDENTIFICADOR
        | expresion_t SUBRANGO expresion_t
        | REF d_tipo
        | tipo_base
;
expresion_t:
        expresion
        | LITERAL_CARACTER
;
lista_campos:
        IDENTIFICADOR DEF_TIPO d_tipo COMPOSICION lista_campos
        | /*Epsilon*/
;
tipo_base:
        ENTERO
        | BOOLEANO
        | CARACACTER
        | REAL
        | CADENA
;

/* CONSTANTES Y VARIABLES */
lista_d_cte:
        IDENTIFICADOR CREACION_TIPO ENTERO COMPOSICION lista_d_cte
        | IDENTIFICADOR CREACION_TIPO BOOLEANO COMPOSICION lista_d_cte
        | IDENTIFICADOR CREACION_TIPO CARACACTER COMPOSICION lista_d_cte
        | IDENTIFICADOR CREACION_TIPO REAL COMPOSICION lista_d_cte
        | IDENTIFICADOR CREACION_TIPO CADENA COMPOSICION lista_d_cte
        | /*Epsilon*/
;
lista_d_var:
        lista_id DEF_TIPO IDENTIFICADOR COMPOSICION lista_d_var
        | lista_id DEF_TIPO d_tipo COMPOSICION lista_d_var
        | /*Epsilon*/
;
lista_id:
        IDENTIFICADOR SEPARADOR lista_id
        | IDENTIFICADOR
;
decl_ent_sal:
        decl_ent
        | decl_ent decl_sal
        | decl_sal
;
decl_ent:
        ENT lista_d_var
;
decl_sal:
        SAL lista_d_var
;

/* EXPRESIONES */
expresion:
        exp_b
        | exp_a
        | funcion_ll
;
exp_b:
        exp_b Y exp_b
        | exp_b O exp_b
        | NO exp_b
        | IDENTIFICADOR
        | exp_b PUNTO exp_b
        | exp_b INICIO_ARRAY exp_b FIN_ARRAY
        | exp_b REF
        | VERDADERO
        | FALSO
;
exp_b:
        expresion MENOR expresion
        | expresion MAYOR expresion
        | expresion CREACION_TIPO expresion
        | expresion DISTINTO expresion
        | expresion MAYOR_IGUAL expresion
        | expresion MENOR_IGUAL expresion
        | PARENTESIS_APERTURA exp_b PARENTESIS_CIERRE
;


exp_a:
        exp_a SUMA exp_a
        | exp_a RESTA exp_a
        | exp_a MULTIPLICACION exp_a
        | exp_a DIVISION exp_a
        | exp_a MOD exp_a
;
exp_a:
        exp_a DIV exp_a
        | PARENTESIS_APERTURA exp_a PARENTESIS_CIERRE
        | IDENTIFICADOR
        | exp_a PUNTO exp_a
        | exp_a INICIO_ARRAY exp_a FIN_ARRAY
        | exp_a REF
        | LITERAL_REAL
        | LITERAL_ENTERO
        | RESTA exp_a
;


/* INSTRUCCIONES */
instrucciones:
        instruccion COMPOSICION instrucciones
        | instruccion
; 
instruccion:
        CONTINUAR
        | asignacion
        | alternativa
        | iteracion
        | accion_ll
;
asignacion:
        exp_a ASIGNACION exp_a
        | exp_b ASIGNACION exp_b
;
alternativa:
        SI expresion ENTONCES instrucciones lista_opciones FSI
;
lista_opciones:
        SI_NO_SI expresion ENTONCES instrucciones lista_opciones
        | /*Epsilon*/
;
iteracion:
        it_cota_fija
        | it_cota_exp
;
it_cota_exp:
        MIENTRAS expresion HACER instrucciones FMIENTRAS
;
it_cota_fija:
        PARA IDENTIFICADOR ASIGNACION expresion HASTA expresion HACER instruccion FPARA
;

/* ACCIONES Y FUNCIONES */
accion_d:
        ACCION a_cabecera bloque FACCION
;
funcion_d:
        FUNCION f_cabecera bloque DEV expresion FFUNCION
;
a_cabecera:
        IDENTIFICADOR PARENTESIS_APERTURA d_par_form PARENTESIS_CIERRE COMPOSICION
;
f_cabecera:
        IDENTIFICADOR PARENTESIS_APERTURA lista_d_var PARENTESIS_CIERRE DEV d_tipo COMPOSICION
;
d_par_form:
        d_p_form COMPOSICION d_par_form
        | /* Epsilon */
;
d_p_form:
        ENT lista_id DEF_TIPO d_tipo
        | SAL lista_id DEF_TIPO d_tipo
        | ES lista_id DEF_TIPO COMPOSICION d_tipo
;
accion_ll:
        IDENTIFICADOR PARENTESIS_APERTURA l_ll PARENTESIS_CIERRE
;
funcion_ll:
        IDENTIFICADOR PARENTESIS_APERTURA l_ll PARENTESIS_CIERRE
;
l_ll:
        expresion SEPARADOR l_ll
        | expresion
;

%%
    //CODIGO


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
    //Inicializar flex
    //yylex();
    yydebug = 1;
    
    // Copiar al fichero de salida
    yyparse();
    fclose(yyin);
    //yylex_destroy(); //Destruir scanner
    return 0;
}