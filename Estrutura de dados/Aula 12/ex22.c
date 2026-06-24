#include <stdio.h>
#include <stdlib.h>
#include "arvore.c"

int espelho(Arv A, Arv B){
    if (A == B) return 1;
    if (A == NULL || B == NULL) return 0;
    if (A->item != B->item) return 0;
    return espelho(A->esq, B->dir) && espelho(A->dir, B->esq);
}

int main(void){
   Arv I = arv(arv(arv(NULL,1,NULL),2,NULL),0,arv(arv(NULL,4,NULL),5,NULL));
   Arv D = arv(arv(NULL,5,arv(NULL,4,NULL)),0,arv(NULL,2,arv(NULL,1,NULL)));
   printf("%d", espelho(I,D));
   return 0;
}