#include "listaUsuario.h"

nodoUsuario* iniclistaUsuario()
{
    return NULL;
}


Usuario datosUsuario ()
{
    Usuario nuevo;
    printf("\nIngrese nombre del Usuario: ");
    fflush(stdin);
    gets(nuevo.nombre);
    return nuevo;
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

nodoUsuario* buscarUsuarioPorNombre (nodoUsuario* lista, char nombre[])
{
    nodoUsuario* rta=NULL;
    nodoUsuario* seguidora=lista;
    //if (lista!=NULL)

        while((seguidora!=NULL)&&(strcmpi(seguidora->usu.nombre, nombre)!=0))
        {
            seguidora=seguidora->sig;
        }
        if (strcmpi(seguidora->usu.nombre, nombre)==0)
        {
            rta=seguidora;
        }
    return rta;
}


nodoUsuario* cargarFilaAUSU (nodoUsuario* lista, char nombre[], celda ada[], int validos)
{
    nodoUsuario* usuario = buscarUsuarioPorNombre(lista, nombre);
    pelicula aCargar = elejirPelicula(ada, validos);
    agregaraFila(&usuario->lista,aCargar);
    return usuario;

}

pelicula elejirPelicula (celda ada[], int validos)
{
    pelicula retornada;
    int id=-1;
    MostrarArregloPeliculas(ada, validos);
    printf("\nSelecciona ID de la pelicula: ");
    scanf("%d", &id);
    retornada=buscarPeliculaArreglo(ada, validos, id);
    return retornada;

}

char ingresarNombreUsuario ()
{
    char nombre [20];
    printf("\nIngrese Nombre del Usuario ");
    fflush(stdin);
    gets(nombre);
    return nombre;
}
