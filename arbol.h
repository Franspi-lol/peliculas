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
nodoArbol* BuscaPelicula( nodoArbol* Raiz, int id);
int CuentaPeliculas(nodoArbol* Raiz);
nodoArbol * NMD (nodoArbol * nodo);
nodoArbol * NMI (nodoArbol * nodo);
nodoArbol * borrarNodoPelicula(nodoArbol * nodo, int id);


#endif // ARBOL_H_INCLUDED
