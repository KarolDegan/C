#include <stdio.h>
#include <stdlib.h>
#include "Lista.c"

int sum(Lista L){
    if(L == NULL) abort();
    if(L->prox == NULL) return L->item;
    return L->item + sum(L->prox);
}

int main(){
    Lista H = no(4,no(2,NULL));
    Lista I = no(3,no(1,no(5, no(6, no(10,NULL)))));

    printf("Soma H: %d", sum(H));
    printf("Soma I: %d", sum(I));
}