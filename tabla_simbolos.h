#ifndef TABLA_SIMBOLOS_H
#define TABLA_SIMBOLOS_H

typedef struct variable{
    int tipo;
    char* nombre;
}Variable;

typedef struct constante{
    int tipo;
    char* nombre;
    int entero;
    float real;
    char* caracteres;
}Constante;

typedef struct celda
{
    int tipo;
    Variable *variable;
    Constante *constante;
    struct Celda *siguiente;
}Celda;

typedef struct lista
{
    int contador;
    Celda *inicio;
    Celda *final;
}Lista;

// FUNCIONES
void crearLista(Lista);
bool comprobarTipo(Celda, char*);
#endif