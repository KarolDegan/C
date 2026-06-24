#include <stdio.h>
#include <stdlib.h>
#include "arvorebusca.c"

void exibe_dec(Arv A){
    if(A == NULL) return;
    exibe_dec(A->dir);
    printf("%d ",A->item);
    exibe_dec(A->esq);
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

    exibe_dec(A);

    return 0;
}