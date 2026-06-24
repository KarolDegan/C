//Cria a função prefixa(A), que exibe a forma parentesiada da expressão aritmetica representada pelo AB A.

#include <stdio.h>
#include <stdlib.h>
#include "arvorebusca.c"

void prefixa(Arv A){
    if(A == NULL) return;
    if (A->esq == A->dir){
        printf("%d", A->item);
    } else{
        printf("%c", A->item);
    }
    prefixa(A->esq);
    prefixa(A->dir);
}

int main(void){
    Arv A = arv(arv(arv(NULL,1,NULL),'+',arv(NULL,2,NULL)),'*',arv(arv(NULL,5,NULL),'-',arv(NULL,3,NULL)));

    prefixa(A);
    return 0;
}