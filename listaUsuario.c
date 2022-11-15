#include "listaUsuario.h"

nodoUsuario* iniclistaUsuario()
{
  return NULL;
}

nodoUsuario* crearNodoUsuario(Usuario nuevo)
{
  nodoUsuario* nuevonodo=(nodoUsuario*) malloc(sizeof(nodoUsuario));
  nuevonodo->sig=NULL;
  nuevonodo->ante=NULL;
  nuevonodo->lista=NULL;
  nuevonodo->usu=nuevo;
  return nuevonodo;
}
