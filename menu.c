#include "menu.h"
#include "listaUsuario.h"
#include "filapeli.h"

int MenuCargarPeliculas (int validos, nodoArbol* Raiz)
{
    //CargarVariasPeliculas(Raiz);

    return validos;
}


void menu1 ()
{
    nodoUsuario* nuevo=NULL;
    celda ada[6];
    int validos;
    //opciones();
    int num=-1;
    do
    {
        {
            opciones();
            printf("\nIngrese una opcion: ");
            fflush(stdin);
            scanf("%d", &num);
            system("cls");
        }
        switch (num)
        {
        case 1:
        {
            validos=IngresarPeliculas(ada,6);
            system("pause");
            system("cls");
            break;
        }
        case 2:
        {
            nuevo=agregarFinal(nuevo,crearNodoUsuario(datosUsuario()));
            system("pause");
            system("cls");
            break;
        }
        case 3:
        {

            nuevo=cargarFilaAUSU(nuevo, ingresarNombreUsuario(),ada,validos);
            system("pause");
            system("cls");

            break;
        }
        case 4:
        {
            borrarPeliculaArreglo(ada,validos,scanf("%d"));
            system("pause");
            system("cls");
            break;
        }
        case 5:
        {
            MostrarArregloPeliculas(ada, validos);
            system("pause");
            system("cls");
            break;
        }
        case 0:
        {
            break;
        }
        }
    }
    while(num!=0);
}


void opciones ()
{
    printf("\nOpcion 1: Agregar Pelicula ");
    printf("\nOpcion 2: Crear Usuario ");
    printf("\nOpcion 3: Crear Lista Reproduccion");
    printf("\nOpcion 4: Dar Baja Pelicula");
    printf("\nOpcion 5: Mostrar Catalogo Peliculas");
    printf("\nOpcion 0: Salir.");
}
