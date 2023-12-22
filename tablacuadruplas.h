#ifndef TABLA_CUADRUPLAS_H
#define TABLA_CUADRUPLAS_H

#define TAMANO_CUADRUPLAS 1000

typedef struct {
    char* operador;     // Operacion a realizar
    char* operando1;    // Valor 1
    char* operando2;    // Valor 2
    char* resultado;    // Resultado de la operacion    
} Cuadrupla;

void agregarCuadrupla(char* operador, char* arg1, char* arg2, char* resultado);
void mostrarTablaCuadruplas();

#endif