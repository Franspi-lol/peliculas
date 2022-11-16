#ifndef LISTAUSUARIO_H_INCLUDED
#define LISTAUSUARIO_H_INCLUDED
#include "filapeli.h"
#include "arbol.h"
typedef struct
{
    char nombre[20];
    int id;
    int estado; ///0/1

}Usuario;

typedef struct
{
    struct nodoUsuario* sig;
    struct nodoUsuario* ante;
    Usuario usu;
    filarepro lista;

}nodoUsuario;

nodoUsuario* iniclistaUsuario();
nodoUsuario* crearNodoUsuario(Usuario nuevo);

nodoUsuario* agregarFinal (nodoUsuario* lista, nodoUsuario* nuevonodo);
nodoUsuario* buscarUltimo (nodoUsuario* lista);

#endif // LISTAUSUARIO_H_INCLUDED
