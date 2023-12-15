/*
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
*/
//void agregarNombre(char *nombre/*, int tipo, int sid*/) {
 /*   if (numSimbolos < TAMANO) {
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

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define TAMANO 1000

typedef struct {
    char nombre[50];   // Nombre de la variable
    int tipo;          // Tipo de la variable
    int sid;           // Identificador de la variable
} Simbolo;

Simbolo tabla[TAMANO];
int numSimbolos = 0;

// Determinar si un nombre está incluido en la tabla.
bool estaIncluido(char *nombre) {
    for(int i = 0; i < numSimbolos; i++) {
        if(strcmp(tabla[i].nombre, nombre) == 0) {
            return true;
        }
    }
    return false;
}

// Añadir un nuevo nombre a la tabla.
void agregarNombre(char *nombre) {
    if (numSimbolos < TAMANO && !estaIncluido(nombre)) {
        strcpy(tabla[numSimbolos].nombre, nombre);
        tabla[numSimbolos].tipo = 0;  // Tipo por defecto
        tabla[numSimbolos].sid = 0;   // SID por defecto
        numSimbolos++;
    }
}


// Acceder a la información asociada a un nombre.
Simbolo *accederInfo(char *nombre) {
    for(int i = 0; i < numSimbolos; i++) {
        if(strcmp(tabla[i].nombre, nombre) == 0) {
            return &tabla[i];
        }
    }
    return NULL;
}

// Añadir información a la ya existente sobre un nombre.
void actualizarInfo(char *nombre, int nuevoTipo, int nuevoSid) {
    Simbolo *simbolo = accederInfo(nombre);
    if(simbolo != NULL) {
        simbolo->tipo = nuevoTipo;
        simbolo->sid = nuevoSid;
    }
}

// Borrar un nombre de la tabla.
void borrarNombre(char *nombre) {
    int i;
    for(i = 0; i < numSimbolos; i++) {
        if(strcmp(tabla[i].nombre, nombre) == 0) {
            break;
        }
    }
    if(i < numSimbolos) { // Si se encontró el nombre
        for(int j = i; j < numSimbolos - 1; j++) {
            tabla[j] = tabla[j + 1];
        }
        numSimbolos--;
    }
}

// Muestra el contenido de la tabla de símbolos
void mostrarTabla() {
    for(int i = 0; i < numSimbolos; i++) {
        printf("Nombre: %s, Tipo: %d, SID: %d\\n", tabla[i].nombre, tabla[i].tipo, tabla[i].sid);
    }
}
