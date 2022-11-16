#include "listaUsuario.h"

nodoUsuario* iniclistaUsuario()
{
    return NULL;
}



nodoUsuario* crearNodoUsuario(Usuario nuevo)
{
    nodoUsuario* nuevonodo=(nodoUsuario*) malloc(sizeof(nodoUsuario));
    nuevonodo->sig=NULL;
    nuevonodo->ante=NULL;

    nuevonodo->usu=nuevo;
    nuevonodo->lista=inicfilareproduccion();
    return nuevonodo;
}

nodoUsuario* agregarFinal (nodoUsuario* lista, nodoUsuario* nuevonodo)
{
    nodoUsuario* ulti=NULL;
    if(lista==NULL)
    {
        lista=nuevonodo;

    }
    else
    {
        ulti=buscarUltimo(lista);
        ulti->sig=nuevonodo;
        nuevonodo->ante=ulti;
    }
    return lista;
}

nodoUsuario* buscarUltimo (nodoUsuario* lista)
{
    nodoUsuario* rta=lista;
    if (lista!=NULL)
    {
        while (rta->sig!=NULL)
        {
            rta=rta->sig;
        }
    }
    return rta;
}

