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
//    int id;

//    id=VerId(fp);
    pelicula aCargar;
//    aCargar.id=id;
    printf("\nIngrese Titulo de la Pelicula: ");
    fflush(stdin);
    gets(aCargar.titulo);
    printf("\nIngrese Director/a: ");
    fflush(stdin);
    gets(aCargar.director);
    printf("\nIngrese anio de la pelicula: ");
    fflush(stdin);
    scanf("%d", &aCargar.anio);
//    aCargar.genero=elegirGenero();
    aCargar.estado=1;
//    printf(" \n Ingrese id de la pelicula : ");
//    scanf("%i",&aCargar.id);
    aCargar.id=retornarIDPeliculadesdeArchivo();
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
        fflush(stdin);
        scanf("%d", &genero);
    }
    return genero;
}

void MostrarGenero(int genero)
{
    if (genero==1)
    {
        printf("\n Genero : Accion/Aventura ");
    }
    else if (genero==2)
    {
        printf("\n Genero : Ciencia Ficcion ");
    }
    else if (genero==3)
    {
        printf("\n Genero : Comedia ");
    }
    else if (genero==4)
    {
        printf("\n Genero : Drama ");
    }
    else if (genero==5)
    {
        printf("\n Genero :  Musical");
    }
    else if (genero==6)
    {
        printf("\n Genero : Suspenso ");
    }

}

void mostrarPelicula(pelicula peli)///falta genero
{
    if (peli.estado!=0)
    {

        printf("\nTITULO: %s", peli.titulo);
        printf("\nAnio de la pelicula: %d", peli.anio);
        printf("\n ID de la Pelicula : %d",peli.id);
        printf("\nDirector/a: %s", peli.director);

    }

//    MostrarGenero(peli.genero);
    //printf("\n")
}

int retornarIDPeliculadesdeArchivo ()
{
    int id=0;
    int size;
    FILE* archi=fopen("IDpelicula.dat", "a+b");
    fclose(archi);
    archi=fopen("IDpelicula.dat", "r+b");
    if (archi!=NULL)
    {
        fseek(archi,0, SEEK_END);
        size=ftell(archi);
        if(size==0)
        {
            id++;
            fseek(archi,0,SEEK_SET);
            fwrite(&id,sizeof(int),1,archi);
        }
        else
        {
            fseek(archi,0,SEEK_SET);
            fread(&id, sizeof(int), 1, archi);
            id++;
            fseek(archi,0,SEEK_SET);
            fwrite(&id,sizeof(int),1,archi);
        }
        fclose(archi);
    }
    else
    {
        printf("\nERROR ID ARCHIVO");
    }
    return id;
}

