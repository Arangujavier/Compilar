

#ifndef TABLA_CUADRUPLAS_H
#define TABLA_CUADRUPLAS_H

#include "util.h"

#define TAMANO_CUADRUPLAS 1000

typedef struct {
    char* operador;
    char* arg1;
    char* arg2;
    char* resultado;
} Cuadrupla;


Cuadrupla cuadruplas[TAMANO_CUADRUPLAS];
int numCuadruplas = 0;
void agregarCuadrupla(char* operador, char* arg1, char* arg2, char* resultado);
void mostrarCuadruplas();

#endif