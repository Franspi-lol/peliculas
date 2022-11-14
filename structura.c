#include "structura.h"
#include "arbol.h"

//int VerId (FILE* fp)
//{
//    int id;
//
//
//    return id;
//}


pelicula cargarPelicula()///No recibir ID por Parametro
{
    int id;

//    id=VerId(fp);
    pelicula aCargar;
    aCargar.id=id;
    printf("\nIngrese Titulo de la Pelicula: ");
    fflush(stdin);
    gets(aCargar.titulo);
    printf("\nIngrese Director/a: ");
    fflush(stdin);
    gets(aCargar.director);
    printf("\nIngrese anio de la pelicula: ");
    fflush(stdin);
    scanf("%d", &aCargar.anio);
    aCargar.genero=elegirGenero();
    aCargar.estado=1;

    return aCargar;
}

void listaGeneros()
{
    printf("\nLos generos son: ");
    printf("\n1-Accion/Aventura\n2-Ciencia Ficcion\n3-Comedia\n4-Drama\n5-Musical\n6-Suspenso\n");
}

int elegirGenero()
{
    int genero=0;
    while((genero>6)||(genero<=0))
    {
        printf("\nIngrese un genero de la siguiente lista (de 1 a 6)");
        listaGeneros();
        scanf("%d", &genero);
    }
    return genero;
}

void mostrarPelicula(pelicula peli)///falta genero
{
    printf("\nTITULO: %s", peli.titulo);
    printf("\nAnio de la pelicula: %d", peli.anio);
    printf("\nDirector/a: %s", peli.director);
    if (peli.genero==1)
    {
        printf("\n Genero : Accion/Aventura ");
    }
    else if (peli.genero==2)
    {
        printf("\n Genero : Ciencia Ficcion ");
    }
     else if (peli.genero==3)
    {
        printf("\n Genero : Comedia ");
    }
     else if (peli.genero==4)
    {
        printf("\n Genero : Drama ");
    }
     else if (peli.genero==5)
    {
        printf("\n Genero :  Musical");
    }
     else if (peli.genero==6)
    {
        printf("\n Genero : Suspenso ");
    }

    //printf("\n")
}
