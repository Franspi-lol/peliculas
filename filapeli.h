#ifndef FILAPELI_H_INCLUDED
#define FILAPELI_H_INCLUDED
#include "structura.h"
typedef struct
{
    struct nodoLista* sig;
    pelicula dato;

}nodoLista;

typedef struct
{
    struct nodoLista* cabecera;
    struct nodoLista* cola;

}filarepro;

#endif // FILAPELI_H_INCLUDED
