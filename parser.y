%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

%%

/* PROALG */
desc_algoritmo: 
        ALGORITMO IDENTIFICADOR PUNTO_COMA cabecera_alg bloque_alg FALGORITMO PUNTO 
;
cabecera_alg:
        decl_globales decl_a_f decl_ent_sal COMENTARIO 
;
bloque_alg:
        bloque COMENTARIO 
;
decl_globales:
        declaracion_tipo decl_globales
        | declaracion_const decl_globales
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
        | declaracion_const declaraciones
        | declaracion_var declaraciones
        | /*Epsilon*/
;

/* DECLARACIONES */
declaracion_tipo:
        TIPO lista_dtipo FTIPO PUNTO_COMA
;
declaracion_cte:
        CONST lista_d_cte FCONST PUNTO_COMA
;
declaracion_var:
        VAR lista_d_var FVAR PUNTO_COMA
;

/* TIPOS */
lista_d_tipo:
        IDENTIFICADOR IGUAL d_tipo PUNTO_COMA lista_d_tipo
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
        IDENTIFICADOR DEF_TIPO d_tipo PUNTO_COMA lista_campos
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
        IDENTIFICADOR IGUAL ENTERO PUNTO_COMA lista_d_cte
        | IDENTIFICADOR IGUAL BOOLEANO PUNTO_COMA lista_d_cte
        | IDENTIFICADOR IGUAL CARACACTER PUNTO_COMA lista_d_cte
        | IDENTIFICADOR IGUAL REAL PUNTO_COMA lista_d_cte
        | IDENTIFICADOR IGUAL CADENA PUNTO_COMA lista_d_cte
        | /*Epsilon*/
;
lista_d_var:
        lista_id DEF_TIPO IDENTIFICADOR PUNTO_COMA lista_d_var
        | lista_id DEF_TIPO d_tipo PUNTO_COMA lista_d_var
        | /*Epsilon*/
;
lista_id:
        IDENTIFICADOR SEPARADOR lista_id
        | IDENTIFICADOR
;
decl_ent_sal:
        decl_ent
        | decl_ent decl_salida
        | decl_salida
;
decl_ent:
        ENT lista_d_var
;
decl_sal:
        SAL lista_d_var
;

/* EXPRESIONES */
expresion:
        exp_a
        | exp_b
        | funcion_ll
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
        | operando
        | LITERAL_REAL
        | LITERAL_ENTERO
        | RESTA exp_a
;
exp_b:
        exp_b Y exp_b
        | exp_b O exp_b
        | NO exp_b
        | operando
        | VERDADERO
        | FALSO
;
exp_b:
        expresion MENOR expresion
        | expresion MAYOR expresion
        | expresion IGUAL expresion
        | expresion DISTINTO expresion
        | expresion MAYOR_IGUAL expresion
        | expresion MENOR_IGUAL expresion
        | PARENTESIS_APERTURA expresion PARENTESIS_CIERRE
;
operando:
        IDENTIFICADOR
        | operando PUNTO operando
        | operando INICIO_ARRAY expresion FIN_ARRAY
        | operando REF
;

/* INSTRUCCIONES */
instrucciones:
        instruccion PUNTO_COMA instrucciones
        | instruccion
; 
instruccion
        CONTINUAR
        | asignacion
        | alternativa
        | iteracion
        | accion_ll
;
asignacion:
        operando ASIGNACION expresion
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
        IDENTIFICADOR PARENTESIS_APERTURA d_par_form PARENTESIS_CIERRE PUNTO_COMA
;
f_cabecera:
        IDENTIFICADOR PARENTESIS_APERTURA lista_d_var PARENTESIS_CIERRE DEV d_tipo PUNTO_COMA
;
d_par_form:
        d_p_form PUNTO_COMA d_par_form
        | /* Epsilon */
;
d_p_form:
        ENT lista_id DEF_TIPO d_tipo
        | SAL lista_id DEF_TIPO d_tipo
        | ES lista_id DEF_TIPO PUNTO_COMA d_tipo
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
