#include <stdio.h>
#include <stdlib.h>
#include "Lista.c"

int last(Lista L){
    if(L == NULL) abort();
    if(L->prox == NULL) return L->item;
    return last(L->prox);
}

int main(){
    Lista H = no(4,no(2,NULL));
    Lista I = no(3,no(1,no(5, no(6, no(10,NULL)))));

    printf("ultimo H: %d\n", last(H));
    printf("ultimo I: %d\n", last(I));
}