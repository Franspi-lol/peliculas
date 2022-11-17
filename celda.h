#ifndef CELDA_H_INCLUDED
#define CELDA_H_INCLUDED
#include "arbol.h"

typedef struct
{
    int genero;
    nodoArbol* Raiz;
} celda;

int IngresarPeliculas(celda ada[],int dimension);
int AgregarGenero(celda ada[], int genero,int validos);
int BuscarPosGenero (celda ada[],int genero, int validos);
int alta (celda ada[],int genero,pelicula peli,int validos);
void MostrarArregloPeliculas(celda ada[],int validos);
pelicula buscarPeliculaArreglo (celda ada[], int validos, int id);
void MostrarArregloPeliculasxGenero(celda ada[],int genero,int validos);
nodoArbol* borrarPeliculaArreglo (celda ada[], int validos, int id);


#endif // CELDA_H_INCLUDED
