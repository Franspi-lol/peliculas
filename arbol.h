#ifndef ARBOL_H_INCLUDED
#define ARBOL_H_INCLUDED
#include "structura.h"
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
typedef struct
{
    pelicula dato;
    struct nodoArbol* der;
    struct nodoArbol* izq;
}nodoArbol;



nodoArbol* inicarbol();
nodoArbol* crearNodoArbol (pelicula dato);
nodoArbol* Insertar (nodoArbol* Raiz, pelicula dato);
nodoArbol* CargarVariasPeliculas (nodoArbol* Raiz);
void MostrarArbol (nodoArbol* Raiz);


#endif // ARBOL_H_INCLUDED
