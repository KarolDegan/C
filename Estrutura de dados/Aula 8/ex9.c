#include <stdio.h>
#include <stdlib.h>
#include "Lista.c"

int maximo(Lista L){
    if(L == NULL) abort();
    int max = L->item;
    while(L){
        if(max<L->item) max = L->item;
        L = L->prox;
    }
    return max;
}

int main(){
    Lista H = no(4,no(2,no(7, no(1,NULL))));
    Lista I = no(3,no(1,no(5,NULL)));
    printf("H = "); exibe(H);
    printf("I = "); exibe(I);
    printf("Max H: %d", maximo(H));
    printf("Max I: %d", maximo(I));
}

