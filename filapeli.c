#include "filapeli.h"
nodoFila* inicnodoFila ()
{
    return NULL;
}


filarepro inicfilareproduccion()
{
    filarepro aux;
    aux.cabecera=NULL;
    aux.cola=NULL;
    return aux;
}

nodoFila* crearNodoFila(pelicula seleccionada)
{
    nodoFila* nuevo=(nodoFila*) malloc(sizeof(nodoFila));
    nuevo->sig=NULL;
    nuevo->dato=seleccionada;
    return nuevo;
}


void agregaraFila(filarepro* fila, pelicula agregar)
{
    nodoFila* nuevo= crearNodoFila(agregar);
    if (fila->cabecera==NULL)
    {
        fila->cabecera=nuevo;
        fila->cola=nuevo;
    }
    else
    {
        fila->cabecera=agregarFinalFila(fila->cabecera, nuevo);
        fila->cola;
    }
}

nodoFila* agregarFinalFila (nodoFila* lista, nodoFila* nuevonodo)
{
    if (lista==NULL)
    {
        lista=nuevonodo;
    }
    else
    {
        nodoFila* ultimo=buscarUltimoFila(lista);
        ultimo->sig=nuevonodo;

    }
    return lista;
}

nodoFila* buscarUltimoFila (nodoFila* lista)
{
    nodoFila* rta=lista;
    if (lista!=NULL)
    {
        while (rta->sig!=NULL)
        {
            rta=rta->sig;
        }
    }
    return rta;
}
