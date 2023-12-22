#include "tablacuadruplas.h"
#include <stdio.h>

Cuadrupla tablaCuadruplas[100];
int numCuadruplas = 0;

void agregarCuadrupla(char* operador, char* operando1, char* operando2, char* resultado) {
    if (numCuadruplas < TAMANO_CUADRUPLAS) {
        tablaCuadruplas[numCuadruplas].operador = strdup(operador);
        tablaCuadruplas[numCuadruplas].operando1 = strdup(operando1);
        tablaCuadruplas[numCuadruplas].operando1 = strdup(operando2);
        tablaCuadruplas[numCuadruplas].resultado = strdup(resultado);
        numCuadruplas++;
    }
}

void mostrarTablaCuadruplas() {
    printf("TABLA DE CUADRUPLAS:\n");
    for (int i = 0; i < numCuadruplas; i++) {
        printf("%d: (%s, %s, %s, %s)\n", i, tablaCuadruplas[i].operador, tablaCuadruplas[i].operando1, tablaCuadruplas[i].operando2, tablaCuadruplas[i].resultado);
    }
}