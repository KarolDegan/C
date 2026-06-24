#include <stdio.h>
#include <stdlib.h>
#include "Lista.c"

int count(int x, Lista L){
    if(L == NULL) return 0;
    if(L->prox == NULL) return (L->item == x ? 1 : 0);
    return (L->item == x ? 1 : 0) + count(x,L->prox);
}

int main(){
    int x = 4;
    Lista H = no(4,no(2, no(17, no(44, no(92,NULL)))));
    Lista I = no(4,no(4,no(4, no(44, no(0,NULL)))));

    printf("pertence H: %d\n", count(x,H));
    printf("pertence I: %d", count(x,I));
}