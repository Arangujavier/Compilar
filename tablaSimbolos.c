#include "tablaSimbolos.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

Simbolo tablaSimbolos[100];
int numSimbolos = 0;

bool estaIncluido(char *nombre) {
    for (int i = 0; i < numSimbolos; i++) {
        if (strcmp(tablaSimbolos[i].nombre, nombre) == 0) {
            return true;
        }
    }
    return false;
}

void agregarNombre(char *nombre/*, int tipo, int sid*/) {
    if (numSimbolos < TAMANO) {
        strcpy(tablaSimbolos[numSimbolos].nombre, nombre);
        tablaSimbolos[numSimbolos].tipo = -1;
        tablaSimbolos[numSimbolos].sid = -1;
        numSimbolos++;
    }
}

Simbolo *accederInfo(char *nombre) {
    for (int i = 0; i < numSimbolos; i++) {
        if (strcmp(tablaSimbolos[i].nombre, nombre) == 0) {
            return &tablaSimbolos[i];
        }
    }
    return NULL;
}

void actualizarInfo(char *nombre, int nuevoTipo, int nuevoSid) {
    printf("Actualizando %s\n", nombre);
    for (int i = 0; i < numSimbolos; i++) {
        if (strcmp(tablaSimbolos[i].nombre, nombre) == 0) {
            tablaSimbolos[i].tipo = nuevoTipo;
            tablaSimbolos[i].sid = nuevoSid;
            break;
        }
    }
}

void borrarNombre(char *nombre) {
    int posicion = -1;
    for (int i = 0; i < numSimbolos; i++) {
        if (strcmp(tablaSimbolos[i].nombre, nombre) == 0) {
            posicion = i;
            break;
        }
    }
    if (posicion != -1) {
        for (int i = posicion; i < numSimbolos - 1; i++) {
            tablaSimbolos[i] = tablaSimbolos[i + 1];
        }
        numSimbolos--;
    }
}

void mostrarTabla() {
    printf("TABLA DE SIMBOLOS:\n");
    for (int i = 0; i < numSimbolos; i++) {
        printf("Nombre: %s, Tipo: %d, SID: %d\n", tablaSimbolos[i].nombre, tablaSimbolos[i].tipo, tablaSimbolos[i].sid);
    }
}