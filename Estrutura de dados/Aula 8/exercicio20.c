#include <stdio.h>
#include <stdlib.h>
#include "Lista.c"

#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))

int minimum(Lista L){
    if(L == NULL) abort();
    if(L->prox == NULL) return L->item;
    return min(L->item, minimum(L->prox));
}

int main(){
    Lista H = no(4,no(2,NULL));
    Lista I = no(3,no(1,no(5, no(6, no(10,NULL)))));

    printf("menor H: %d\n", minimum(H));
    printf("menor I: %d\n", minimum(I));
}