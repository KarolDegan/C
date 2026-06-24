#include <stdio.h>
#include "lista-ordem.c"

int oec(Lista L) {
    if(L == NULL || L->prox == NULL) return 1;
    if(L->item >= L->prox->item) return 0;
    return oec(L->prox);  
}

int main (void){
    Lista I = no(1,no(3,no(4,no(5,no(6,NULL)))));
    exibe(I);
    printf("%d", oec(I));
    return 0;
}