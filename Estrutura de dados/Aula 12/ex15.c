#include <stdio.h>
#include <stdlib.h>
#include "arvore.c"

void posordem(Arv A){
    if(A == NULL) return;
    posordem (A->esq);
    posordem(A->dir);
    printf("%d", A->item);
}

int main(void){
   Arv I = arv(arv(NULL,2,arv(NULL,8,NULL)),1,arv(arv(arv(NULL,0,NULL),9,NULL),3,arv(NULL,4,NULL)));
   exibe(I,0);
   posordem(I);
   return 0;
}