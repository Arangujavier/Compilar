#ifndef TABLA_SIMBOLOS_H
#define TABLA_SIMBOLOS_H

#include <stdbool.h>

#define TAMANO 1000

typedef struct {
    char nombre[50];   // Nombre de la variable
    int tipo;           // Tipo de la variable
    int sid;            // Identificador de la variable ¿Para que?
} Simbolo;

bool estaIncluido(char *nombre);                                  // Determinar si un nombre esta incluido en la tabla.
void agregarNombre(char *nombre, int tipo, int sid);              // Añadir un nuevo nombre a la tabla.
Simbolo *accederInfo(char *nombre);                               // Acceder a la información asociada a un nombre.
void actualizarInfo(char *nombre, int nuevoTipo, int nuevoSid);   // Añadir información a la ya existente sobre un nombre.
void borrarNombre(char *nombre);                                  // Borrar un nombre
void mostrarTabla();                                              // Muestra el contenido de la tabla de simbolos                        

#endif