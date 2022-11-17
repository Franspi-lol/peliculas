#ifndef FILAPELI_H_INCLUDED
#define FILAPELI_H_INCLUDED
#include "structura.h"
//#include "listaUsuario.h"
typedef struct
{
    struct nodoFilaa* sig;
    pelicula dato;

}nodoFila;

typedef struct
{
    struct nodoFila* cabecera;
    struct nodoFila* cola;

}filarepro;

filarepro inicfilareproduccion();
nodoFila* inicnodoFila ();
nodoFila* crearNodoFila(pelicula seleccionada);
filarepro agregaraFila(filarepro fila, pelicula agregar);
nodoFila* agregarFinalFila (nodoFila* lista, nodoFila* nuevonodo);
nodoFila* buscarUltimoFila (nodoFila* lista);

#endif // FILAPELI_H_INCLUDED
