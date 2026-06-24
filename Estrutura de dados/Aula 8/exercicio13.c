#include <stdio.h>
#include <stdlib.h>
#include "Lista.c"

int tam(Lista L){
    if(L == NULL) abort();
    if(L->prox == NULL) return 1;
    return 1 + tam(L->prox);
}

int main(){
    Lista H = no(4,no(2,NULL));
    Lista I = no(3,no(1,no(5, no(6, no(88,NULL)))));

    printf("Tamanho: %d", tam(H));
    printf("Tamanho: %d", tam(I));
}