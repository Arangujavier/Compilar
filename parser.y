%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
%}

%token INT FLOAT CHAR BOOLEANO PUNTO_COMA IGUAL  
%token ALGORITMO FALGORITMO IDENTIFICADOR DECL COMENTARIO 
%token TIPO CONST VAR TABLA CADENA FCONST FTIPO TUPLA FTUPLA FVAR ES ENT SAL
%%

/* PROALG */
desc_algoritmo: 
        ALGORITMO IDENTIFICADOR ; cabecera_alg bloque_alg falgoritmo PUNTO 
;
cabecera_alg:
        decl_globales decl_a_f decl_ent_sal COMENTARIO 
;
bloque_alg:
        COMENTARIO 
;
decl_globales:
        declaracion_tipo decl_globales
        | declaracion_const decl_globales
        | /*Epsilon*/ 
;
declaf:
        accion_d declaf
        | funcion_d declaf 
        |/*Epsilon*/ 
;
bloque:
        declaraciones instrucciones
;
declaraciones:
        declaracion_tipo declaraciones 
        | declaracion_const declaraciones
        | declaracion_var declaraciones
;

/* DECLARACIONES */
declaracion_tipo:
        TIPO lista_dtipo FTIPO
;
declaracion_cte:
        CONST lista_d_cte FCONST
;
declaracion_var:
        VAR lista_d_var FVAR
;

/* TIPOS */
lista_d_tipo:
        IDENTIFICADOR IGUAL d_tipo PUNTO_COMA lista_d_tipo
        | /*Epsilon */
;
d_tipo:
        TUPLA lista_campos FTUPLA
        | TABLA INICIO_ARRAY FIN_ARRAY DE d_tipo
;
d_tipo:
        IDENTIFICADOR
        | expresion_t
        | REF
        | TIPO_BASE
;
expresion_t:
        IDENTIFICADOR DEF_TIPO d_tipo PUNTO_COMA lista_campos
        | /* Epsilon */

/* CONSTANTES Y VARIABLES */
lista_d_cte:
        IDENTIFICADOR IGUAL literal PUNTO_COMA lista_d_cte
        | /* Epsilon */
;
lista_d_var:
        lista_id DEF_TIPO IDENTIFICADOR PUNTO_COMAlista_d_var
        | lista_id DEF_TIPO d_tipo PUNTO_COMA lista_d_var
        | /* Epsilon */
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
        exp_a OP_SUMA exp_a
        | exp_a OP_RESTA exp_a
        | exp_a OP_MULTIPLICACION exp_a
        | exp_a OP_DIVISION exp_a
        | exp_a OP_MOD exp_a
;
exp_a:
        exp_a OP_DIV exp_a
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
;
operando:
        IDENTIFICADOR
        | operando PUNTO operando
        | operando INICIO_ARRAY expresion FIN_ARRAY
        | operando REF
;

/* INSTRUCCIONES */
instrucciones:
        instrucciones PUNTO_COMA instrucciones
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
        PARA IDENTIFICADOR ASIGNACION expresion HASTA expresion HACER instruccion fpara
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
