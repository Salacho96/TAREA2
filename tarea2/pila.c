#include "pila.h"

Pila crearPila(){
    return crearLista();
}

Pila push(Pila pil, Elemento elem){
    Pila tmp = pil;

    if(vaciaPila(pil))
        tmp = anxLista(pil, elem);
    else
        tmp = insLista(pil, elem, 1);

    return tmp;
}

Pila pop(Pila pil){
    return elimLista(pil, 1);
}

Elemento peek(Pila pil){
    return infoLista(pil, 1);
}

int vaciaPila(Pila pil){
    return vaciaLista(pil);
}
