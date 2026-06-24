#include <stdio.h>
#include <stdlib.h>
#include "Lista.c"

int ultimo(Lista L){
    if (L == NULL) abort();
    if (L->prox == NULL) return L->item;
    else return ultimo(L->prox);
}

int main(){
    Lista H = no(4,no(2,NULL));
    Lista I = no(3,no(1,no(5,NULL)));
    printf("H = "); exibe(H);
    printf("I = "); exibe(I);
    printf("ultimo H: %d\n", ultimo(H));
    printf("ultimo I: %d", ultimo(I));
}