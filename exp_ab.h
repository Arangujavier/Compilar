#ifndef CB_EXP_A_B_H
#define CB_EXP_A_B_H

#include "tablaSimbolos.h"
#include "tablaCuadruplas.h"
#define TRUE 1
#define FALSE 0
#define TIPOENTERO 0
#define TIPOBOOLEANO 2
#define TIPOCARACTER 3
#define TIPOREAL 4
#define TIPOCADENA 5
#define ASIGNA 19
#define INT2REA 20
#define REA2INT 21



/* Estructura exp_a_b, para las expresiones que pueden ser aritméticas o booleanas */
typedef struct exp_ab
{
	int ar;
	int bol;
	Simbolo *s;
} exp_ab;


exp_ab* new_exp_ab();
exp_ab* new_exp_a();
exp_ab* new_exp_b(); 	
void set_aritmetico(exp_ab *ex);
void set_boolean(exp_ab *ex);
int es_aritmetico();
int es_boolenao(); 	
#endif