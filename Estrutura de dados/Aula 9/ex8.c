#include <stdio.h>
#include "lista-ordem.c"

void rem_todo(Item x, Lista *L) {
    
    while (*L != NULL && (*L)->item < x) {
        L = &(*L)->prox;
    }
    while (*L != NULL && (*L)->item == x) {
        Lista n = *L;
        *L = (*L)->prox;
        free(n);
    }
}

int main (void){
    Lista I = NULL;
    ins(4,&I); ins(1,&I);ins(4,&I); ins(3,&I); ins(5,&I); ins(2,&I);ins(4,&I);
    exibe(I);
    rem_todo(4,&I);
    exibe(I);
    return 0;
}