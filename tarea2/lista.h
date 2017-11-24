
#ifndef __LISTA_H
#define __LISTA_H

#include <stdio.h>

struct nodo{
  int dato;
  struct nodo* sig;
};

typedef struct nodo* Lista;
typedef int Elemento;


Lista crearLista();

Lista anxLista(Lista lst, Elemento elem);

Lista insLista(Lista lst, Elemento elem, int pos);

Lista elimLista(Lista lst, int pos);

Elemento infoLista(Lista lst, int pos);

int longLista(Lista lst);

int vaciaLista(Lista lst);

#endif