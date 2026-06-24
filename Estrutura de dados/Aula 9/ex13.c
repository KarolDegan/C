#include <stdio.h>
#include "lista-ordem.c"

int osd(Lista L) {
    if(L == NULL || L->prox == NULL) return 1;
    if(L->item < L->prox->item) return 0;
    return osd(L->prox); 
}

int main (void){
    Lista I = no(6,no(5,no(4,no(2,no(1,NULL)))));
    exibe(I);
    printf("%d", osd(I));
    return 0;
}