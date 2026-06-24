#include <stdio.h>
#include <stdlib.h>
#include "arvore.c"

Arv clone(Arv A){
    if(A == NULL) return NULL;
    return arv(A->esq, A->item, A->dir);
}

int main(void){
   Arv I = arv(arv(NULL,2,NULL),1,arv(arv(arv(NULL,0,NULL),9,NULL),3,arv(NULL,4,NULL)));
   exibe(I,0);
   exibe(clone(I),0);
   return 0;
}