//Crie a função zeros(A), que conta e devolve a quantidade de itens igual a 0 na AB A.

#include <stdio.h>
#include <stdlib.h>
#include "arvorebusca.c"

int zeros(Arv A){
    if(A == NULL) return 0;
    return !A->item + zeros(A->esq) + zeros(A->dir);
}

int main(void) {
    Arv A = NULL;

    ins(6, &A);
    ins(3, &A);
    ins(9, &A);
    ins(2, &A);
    ins(0, &A);
    ins(8, &A);
    ins(0, &A);
    ins(17,&A);
    ins(16,&A);
    ins(22,&A);
    ins(20,&A);
    ins(21,&A);

    printf("%d", zeros(A));

    return 0;
}