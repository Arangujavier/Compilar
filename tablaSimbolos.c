
#include "tablaSimbolos.h"
#include <string.h>
#include <stdio.h>

static Simbolo tablaSimbolos[MAX_SYMBOLS];
static int indiceSimbolo = 0;

void inicializarTablaSimbolos() {
    memset(tablaSimbolos, 0, sizeof(tablaSimbolos));
    indiceSimbolo = 0;
}

void agregarSimbolo(char *nombre, int tipo, int sid) {
    if (indiceSimbolo < MAX_SYMBOLS) {
        strncpy(tablaSimbolos[indiceSimbolo].nombre, nombre, 255);
        tablaSimbolos[indiceSimbolo].tipo = tipo;
        tablaSimbolos[indiceSimbolo].sid = sid;
        indiceSimbolo++;
    }
}

Simbolo *buscarSimbolo(char *nombre) {
    for (int i = 0; i < indiceSimbolo; i++) {
        if (strcmp(tablaSimbolos[i].nombre, nombre) == 0) {
            return &tablaSimbolos[i];
        }
    }
    return NULL;
}

void mostrarTablaSimbolos() {
    for (int i = 0; i < indiceSimbolo; i++) {
        printf("Nombre: %s, Tipo: %d, SID: %d\n", tablaSimbolos[i].nombre, tablaSimbolos[i].tipo, tablaSimbolos[i].sid);
    }
}
