#include <stdio.h>
#include <stdlib.h>
#include "arvore.c"

Arv balanceada(int v[],int p, int u){ //n é o numero de itens na arvore
    if(p > u) return NULL;
    int meio = (p+u)/2;
    return arv(balanceada(v,p,meio-1), v[meio], balanceada(v,meio+1,u));
}

int main(void){
    int vetor[] = {1, 4, 5, 6, 7};
    exibe(balanceada(vetor,0,4),0);
    return 0;
}