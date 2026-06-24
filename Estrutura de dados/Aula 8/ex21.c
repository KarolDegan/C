#include <stdio.h>
#include <stdlib.h>
#include "Lista.c"

int sorted(Lista L){
    if (L == NULL) abort();

    if (L->prox == NULL) return 1;

    if (L->item > L->prox->item) return 0; 
    
    return sorted(L->prox);
}

int main(){
    
    Lista H = no(4,no(2, no(17, no(44, no(92,NULL)))));
    Lista I = no(1,no(3,no(5, no(6, no(10,NULL)))));

    printf("H = %d\n", sorted(H));
    printf("I = %d\n", sorted(I));
}