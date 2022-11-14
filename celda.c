#include "celda.h"


int AgregarGenero(celda ada[], int genero,int validos)
{
    if(ada[validos].genero==genero)
    {
      ada[validos].Raiz=inicarbol();
      validos++;
    }

    return validos;
}
int BuscarPosGenero (celda ada[],int genero [], int validos)
{
    int rta=-1;
    int i=0;

    while ((i<validos)&&(rta==-1))
    {
        if (ada[i].genero==genero)
        {
            rta=i;
        }
        i++;
    }

return rta;
}

int alta (celda ada[],int genero,pelicula peli,int validos)
{

    nodoArbol* Raiz=crearNodoArbol(peli);
    int pos=BuscarPosGenero (ada,genero,validos);
    if (pos==-1)
    {
        validos=AgregarGenero(ada,genero,validos);
        pos=validos-1;

    }
    ada[pos].Raiz=Insertar(ada[pos].Raiz,peli);
    return validos;

}



int PasarArbol2Arreglo(celda ada [], nodoArbol* Raiz, int validos)
{





}

