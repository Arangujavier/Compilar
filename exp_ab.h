#ifndef CB_EXP_A_B_H
#define CB_EXP_A_B_H

#include "tablaSimbolos.h"
#include "tablaCuadruplas.h"
#define TRUE 1
#define FALSE 0
#define TIPOENTERO 1
#define TIPOBOOLEANO 2
#define TIPOCARACTER 3
#define TIPOREAL 4
#define TIPOCADENA 5
#define SUMAENT 6
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


/**
 *
 * @return: devuelve una estructura exp_a_b
 */
exp_ab* new_exp_ab();

/**
 *
 * @return: devuelve una estructura exp_a_b para manejar aritméticos
 */
exp_ab* new_exp_a();

/**
 *
 * @return: devuelve una estructura exp_a_b para manejar booleanos
 */
exp_ab* new_exp_b(); 	

/**
 *
 * Convierte a aritmetico
 */
void set_arithmetic(exp_ab *ex);

/**
 *
 * Convierte a booleano
 */
void set_boolean(exp_ab *ex);

/**
 *
 * @return: TRUE si es una estructura para expresiones aritméticas
 */
int is_arithmetic();

/**
 *
 * @return: TRUE si es una estructura para expresiones booleanas
 */
int is_boolean(); 	
#endif