#include <stdio.h>
#include <stdlib.h>
#include "arvore.c"

int iguais(Arv A, Arv B){
    if (A == B) return 1;
    if (A == NULL || B == NULL) return 0;
    if (A->item != B->item) return 0;
    return iguais(A->esq, B->esq) && iguais(A->dir, B->dir);
}

int main(void){
   Arv I = NULL;
   Arv D = NULL;
   printf("%d", iguais(D,I));
   return 0;
}