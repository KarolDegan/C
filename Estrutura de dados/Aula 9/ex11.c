#include <stdio.h>
#include "lista-ordem.c"

int osc(Lista L) {
    if(L == NULL || L->prox == NULL) return 1;
    if(L->item>L->prox->item) return 0;
    return osc(L->prox);   
}

int main (void){
    Lista I = no(3,no(3,no(4,no(4,no(5,NULL)))));
    exibe(I);
    printf("%d", osc(I));
    return 0;
}