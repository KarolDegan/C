#include <stdio.h>
#include <stdlib.h>
#include "arvore.c"

void eoi(Arv A){
    if(A == NULL) return;
    eoi (A->dir);
    printf("%d", A->item);
    eoi(A->esq); 
}

int main(void){
   Arv I = arv(arv(NULL,2,arv(NULL,8,NULL)),1,arv(arv(arv(NULL,0,NULL),9,NULL),3,arv(NULL,4,NULL)));
   exibe(I,0);
   eoi(I);
   return 0;
}