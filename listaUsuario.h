#ifndef LISTAUSUARIO_H_INCLUDED
#define LISTAUSUARIO_H_INCLUDED
#include "filapeli.h"
typedef struct
{
    char nombre[20];
    int id;

}Usuario;

typedef struct
{
    struct nodoUsuario* sig;
    struct nodoUsuario* ante;
    Usuario usu;
    filarepro lista;

}nodoUsuario;



#endif // LISTAUSUARIO_H_INCLUDED
