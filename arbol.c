#include "arbol.h"

#include "structura.h"

nodoArbol* inicarbol()
{
    return NULL;
}

nodoArbol* crearNodoArbol(pelicula dato)
{
    nodoArbol* arbolito = (nodoArbol*)malloc(sizeof(nodoArbol));
    arbolito->dato=dato;
    arbolito->der=NULL;
    arbolito->izq=NULL;
    return arbolito;
}

nodoArbol* Insertar (nodoArbol* Raiz, pelicula peli)
{
    if(Raiz==NULL)
    {
        Raiz=crearNodoArbol(peli);
    }
    else
    {
     if (peli.id>Raiz->dato.id)
     {
         Raiz->der=Insertar(Raiz->der,peli);
     }
     else
     {
         Raiz->izq=Insertar(Raiz->izq,peli);
     }
    }

    return Raiz;
}


nodoArbol* CargarVariasPeliculas (nodoArbol* Raiz)
{
    char continuar='s';

    do
    {
        Raiz=Insertar(Raiz,cargarPelicula());
        printf("\n Desea seguir cargando Peliculas S/N ? ");
        fflush(stdin);
        scanf("%c",&continuar);
    }while(continuar=='s');

    return Raiz;
}

nodoArbol* BuscaPelicula( nodoArbol* Raiz, int id)
{
    nodoArbol* Buscado=NULL;

    if(Raiz!=NULL)
    {
        if (Raiz->dato.id==id){
            Buscado=Raiz;
        }
        else
        {
            if (id>Raiz->dato.id)
            {
                Buscado=BuscaPelicula(Raiz->der,id);
            }
            else
            {
                Buscado=BuscaPelicula(Raiz->izq,id);
            }
        }

    }

    return Buscado;
}


int CuentaPeliculas(nodoArbol* Raiz)
{
    int cont=0;

    if (Raiz!=NULL)
    {
        cont=1+CuentaPeliculas(Raiz->izq)+CuentaPeliculas(Raiz->der);


    }


    return cont;
}

void MostrarArbol (nodoArbol* Raiz)

{
    if(Raiz!=NULL)
    {
        mostrarPelicula(Raiz->dato);
        MostrarArbol(Raiz->izq);
        MostrarArbol(Raiz->der);
    }

}


int darIdPelicula (int id)
{
    FILE* archi = fopen("idpelicula.dat", "a+b");
    if (archi!=NULL)
    {

    }
}

