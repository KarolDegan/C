#include <stdio.h>
#include "lista-ordem.c"

int oed(Lista L) {
    if(L == NULL || L->prox == NULL) return 1;
    if(L->item <= L->prox->item) return 0;
    return oed(L->prox); 
}

int main (void){
    Lista I = no(6,no(4,no(4,no(2,no(1,NULL)))));
    exibe(I);
    printf("%d", oed(I));
    return 0;
}