#include <stdio.h>
#include <stdlib.h>
#include "arvore.c"

void emordem(Arv A){
    if(A == NULL) return;
    emordem (A->esq);
    printf("%d", A->item);
    emordem(A->dir);
}

int main(void){
   Arv I = arv(arv(NULL,2,arv(NULL,8,NULL)),1,arv(arv(arv(NULL,0,NULL),9,NULL),3,arv(NULL,4,NULL)));
   exibe(I,0);
   emordem(I);
   return 0;
}