#include <stdio.h>
#include "Lista.c"
#include <stdlib.h>


int tam(Lista l){
    int t=0;
    while(l){
        t++;
        l=l->prox;
    }
    return t;
}

int main(){
    Lista I = no(3,no(1,no(5,NULL)));
    exibe(I);
    printf("Tamanho: %d",tam(I));
    return 0;
}