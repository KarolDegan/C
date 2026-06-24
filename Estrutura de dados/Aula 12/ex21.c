#include <stdio.h>
#include <stdlib.h>
#include "arvore.c"

Arv espelho(Arv A){
    if(A == NULL) return NULL;
    return arv(espelho(A->dir), A->item, espelho(A->esq));
}

int main(void){
   Arv I = arv(arv(arv(NULL,1,NULL),2,NULL),0,arv(arv(NULL,4,NULL),5,NULL));
   exibe(I,0);
   printf("------------\n");
   exibe(espelho(I),0);
   return 0;
}

