
#include "tablacuadruplas.h"
#include <stdio.h>

void agregarCuadrupla(char* operador, char* arg1, char* arg2, char* resultado) {
    if (numCuadruplas < TAMANO_CUADRUPLAS) {
        cuadruplas[numCuadruplas].operador = strdup(operador);
        cuadruplas[numCuadruplas].arg1 = strdup(arg1);
        cuadruplas[numCuadruplas].arg2 = strdup(arg2);
        cuadruplas[numCuadruplas].resultado = strdup(resultado);
        numCuadruplas++;
    }
}

void mostrarCuadruplas() {
    printf("Cuadruplas generadas:\n");
    for (int i = 0; i < numCuadruplas; i++) {
        printf("%d: (%s, %s, %s, %s)\n", i, cuadruplas[i].operador, cuadruplas[i].arg1, cuadruplas[i].arg2, cuadruplas[i].resultado);
    }
}


