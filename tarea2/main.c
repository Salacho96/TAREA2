#include "pila.h"
#include <stdio.h>

int main(){
  Pila pil;
  pil = crearPila();
  pil = push(pil, 3);
  pil = push(pil, 12);
  pil = push(pil, 8);
  pil = push(pil, 2);
  
  printf("Imprimiendo\n");

  while(!vaciaPila(pil)){
    printf("%d ", peek(pil));
    pil = pop(pil);
  }

  printf("\n");
}
