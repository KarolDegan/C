//Balanceada (m,n) que cria uma arvore balanceada contendo todos os inteiros de m até n exemplo: balanceada(5,9)

#include <stdio.h>
#include <stdlib.h>
#include "arvore.c"

Arv balanceada2(int m, int n){
    if(m>n) return NULL;
    return arv(balanceada2(m,((m+n)/2)-1),(m+n)/2, balanceada2(((m+n)/2) + 1, n));
}

int main(void){
    exibe(balanceada2(4,10),0);
}