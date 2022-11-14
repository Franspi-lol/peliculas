#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "structura.h"
#include "arbol.h"
#include "filapeli.h"



int main()
{

    //pelicula dato;
    nodoArbol* Raiz=inicarbol();
    Raiz=CargarVariasPeliculas(Raiz);

    MostrarArbol(Raiz);

//
//    dato=cargarPelicula();
//    mostrarPelicula(dato);



    return 0;
}
