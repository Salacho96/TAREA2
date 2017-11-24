#ifndef __PILA_H
#define __PILA_H

#include <stdio.h>
#include "lista.h"


typedef Lista Pila;


Pila crearPila();

Pila push(Pila pil, Elemento elem);

Pila pop(Pila pil);

Elemento peek(Pila pil);

int vaciaPila(Pila pil);

#endif
