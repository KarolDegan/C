#include <stdio.h>
#include <stdlib.h>
#include "Lista.c"

Lista inversa(Lista L){
    Lista I = NULL;
    while(L){
        I = no(L->item, I);
        L = L->prox;
    }
    return I;
}

int main(){
    Lista H = no(4,no(2,NULL));
    Lista I = no(3,no(1,no(5,NULL)));
    printf("H = "); exibe(inversa(H));
    printf("I = "); exibe(inversa(I));
}