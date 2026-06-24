#include <stdio.h>
#include <stdlib.h>
#include "arvore.c"

int folhas(Arv A){
    if (A == NULL) return 0;
    if (A->dir ==  A->esq) return 1;
    return folhas(A->esq) + folhas(A->dir);
}

int main(void){
   Arv I = arv(arv(NULL,2,NULL),1,arv(arv(NULL,9,NULL),3,arv(NULL,4,NULL)));
   exibe(I,0);
   printf("%d", folhas(I));
   return 0;
}