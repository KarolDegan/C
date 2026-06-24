#include <stdio.h>
#include <stdlib.h>
#include "arvorebusca.c"

int maximo(Arv A){
    if(A == NULL) abort();
    if (A->dir == NULL) return A->item;
    return maximo(A->dir);
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

    printf("%d", maximo(A));

    return 0;
}