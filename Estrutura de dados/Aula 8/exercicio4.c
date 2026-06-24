#include <stdio.h>
#include "Lista.c"
#include <stdlib.h>


int som(Lista l){
    int s=0;
    while(l){
        s += l->item;
        l=l->prox;
    }
    return s;
}

int main(){
    Lista I = no(3,no(1,no(5,NULL)));
    exibe(I);
    printf("Tamanho: %d",som(I));
    return 0;
}