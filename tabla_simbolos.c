#include "tabla_simbolos.h"
#include <stdlib.h>
// FUNCIONES
void crearLista(Lista *elemento)
{
    elemento->contador = 1;
    elemento->inicio = NULL;
    elemento->final = NULL;
}

bool comprobarTipo(Celda celda, char* nombre)
{
    switch (celda->tipo)
    {
    case 0:
        if (celda->variable->nombre == nombre){
            return true;}
        break;
    case 1:
        if (celda->constante->nombre == nombre){
            return true;
        }
    default:
        break;
    }
}