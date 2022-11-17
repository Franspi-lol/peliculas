#include "celda.h"

int IngresarPeliculas(celda ada[],int dimension)
{
    pelicula peli;
    char salir='s';
   int validos=0;
    while(salir=='s')
    {
        peli=cargarPelicula();
        peli.genero=elegirGenero();
        //peli.id=id++;
        validos=alta(ada,peli.genero,peli,validos);
        printf("\nDesea continuar S/N? ");
        fflush(stdin);
        scanf("%c",&salir);
    }
return validos;
}
int AgregarGenero(celda ada[], int genero,int validos)
{
    ada[validos].genero=genero;

      ada[validos].Raiz=inicarbol();
      validos++;


    return validos;
}
int BuscarPosGenero (celda ada[],int genero, int validos)
{
    int rta=-1;
    int i=0;

    while ((i<validos)&&(ada[i].genero!=genero))
    {

        i++;
    }
    if (ada[i].genero==genero)
        {
            rta=i;
        }

return rta;
}

int alta (celda ada[],int genero,pelicula peli,int validos)
{


    nodoArbol* Arbol=crearNodoArbol(peli);
    int pos=BuscarPosGenero (ada,genero,validos);
    printf("POS: %d", pos);
    if (pos==-1)
    {
        validos=AgregarGenero(ada,genero,validos);
        pos=validos-1;

    }

//    ada[pos].Raiz=Arbol;
    //ada[pos].Raiz=inicarbol();
    ada[pos].Raiz=InsertarNodoArbol(ada[pos].Raiz,Arbol);
    return validos;

}
void MostrarArregloPeliculas(celda ada[],int validos)
{
    int i=0;
    printf(" \n TODOS LOS GENEROS");

    while(i<validos)
    {
        printf("\n ");
        printf("---------------------------");
        MostrarGenero(ada[i].Raiz->dato.genero);
        MostrarArbol(ada[i].Raiz);
        printf("\n");
        printf("---------------------------");
        printf("\n ");
        i++;

    }
    if (validos==0)
        {

            printf(" \n El catalogo de peliculas esta vacio");

        }

}

pelicula buscarPeliculaArreglo (celda ada[], int validos, int id)
{
    nodoArbol* aux=NULL;
    nodoArbol* rta=NULL;
    int contador=0;
    while (contador<validos)
    {
        aux=BuscaPelicula(ada[contador].Raiz, id);
        contador++;
        if(aux->dato.id==id)
        {
            rta=aux;
        }
    }
    return rta->dato;

}

void MostrarArregloPeliculasxGenero(celda ada[],int genero,int validos)
{
    int i=0;

    int pos=BuscarPosGenero;


    if(pos==-1)
    {
        printf("\n No se encuentran Peliculas de dicho genero.\n");


    }
    else
    {
        printf("\n ");
        printf("---------------------------");
        MostrarGenero(ada[pos].Raiz->dato.genero);
        MostrarArbol(ada[pos].Raiz);
        printf("\n");
        printf("---------------------------");
        printf("\n ");

    }


}

nodoArbol* borrarPeliculaArreglo (celda ada[], int validos, int id)
{
    nodoArbol* aux=NULL;
    nodoArbol* rta=NULL;
    int contador=0;
    while (contador<validos)
    {
        aux=BuscaPelicula(ada[contador].Raiz, id);
        contador++;
        if(aux->dato.id==id)
        {
            rta=aux;
            rta->dato.estado=0;
        }
    }
    return rta;

}
