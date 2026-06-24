#include <stdio.h>
#include <stdlib.h>
#include "arvore.c"

int soma(Arv A){
    if(A == NULL) return 0;
    return A->item + soma(A->esq) + soma(A->dir);
}

int main(void){
   Arv I = arv(arv(arv(NULL,7,NULL),2,NULL),1,arv(arv(NULL,9,NULL),3,arv(NULL,4,NULL)));
   printf("%d", soma(I));
   return 0;
}