//Cria a função posfixa(A), que exibe a forma da expressão aritmetica representada pelo AB A.

#include <stdio.h>
#include <stdlib.h>
#include "arvorebusca.c"

void posfixa(Arv A){
    if(A == NULL) return;
    posfixa(A->esq);
    posfixa(A->dir);
    if (A->esq == A->dir){
        printf("%d", A->item);
    } else{
        printf("%c", A->item);
    }
}

int main(void){
    Arv A = arv(arv(arv(NULL,1,NULL),'+',arv(NULL,2,NULL)),'*',arv(arv(NULL,5,NULL),'-',arv(NULL,3,NULL)));

    posfixa(A);
    return 0;
}