#include <stdio.h>
#include <stdlib.h>
#include "arvorebusca.c"

int minimo(Arv A){
    if(A == NULL) abort();
    if (A->esq == NULL) return A->item;
    return minimo(A->esq);
}

int main(void) {
    Arv A = NULL;

    ins(6, &A);
    ins(3, &A);
    ins(9, &A);
    ins(2, &A);
    ins(4, &A);
    ins(8, &A);
    ins(5, &A);
    ins(17,&A);
    ins(16,&A);
    ins(22,&A);
    ins(20,&A);
    ins(21,&A);

    printf("%d", minimo(A));

    return 0;
}