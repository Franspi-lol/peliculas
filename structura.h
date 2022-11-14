#ifndef STRUCTURA_H_INCLUDED
#define STRUCTURA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>


typedef struct
{
    int id;
    char titulo[20];
    char director[20];
    int anio;
    int genero;///id del genero para evitar escribir mal
    int estado;///1 por default, 0 es desactivado.
} pelicula;



/*id de generos:
1-Accion/Aventura
2-Ciencia Ficcion
3-Comedia
4-Drama
5-Musical
6-Suspenso
 */

pelicula cargarPelicula();
void listaGeneros();
int elegirGenero();
void mostrarPelicula(pelicula peli);




#endif // STRUCTURA_H_INCLUDED
