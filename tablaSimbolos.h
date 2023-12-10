
#ifndef TABLA_SIMBOLOS_H
#define TABLA_SIMBOLOS_H

#define MAX_SYMBOLS 1000

typedef struct {
    char nombre[256]; // Asumiendo que el nombre no excederá 255 caracteres
    int tipo;
    int sid; // Identificador único
} Simbolo;

void inicializarTablaSimbolos();
void agregarSimbolo(char *nombre, int tipo, int sid);
Simbolo *buscarSimbolo(char *nombre);
void mostrarTablaSimbolos();

#endif //TABLA_SIMBOLOS_H
