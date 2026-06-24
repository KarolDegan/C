#include <stdio.h>
#include <stdlib.h>
#include "Lista.c"

int pertence(int x, Lista L){
    if(L->prox == NULL) return 0;
    if (x == L->item) return 1;
    else return pertence(x,L->prox);  
}

int main(){
    int x = 3;
    Lista H = no(4,no(2,NULL));
    Lista I = no(3,no(1,no(5,NULL)));
    printf("H = "); exibe(H);
    printf("I = "); exibe(I);
    printf("pertence H: %d\n", pertence(x,H));
    printf("pertence I: %d", pertence(x,I));
}