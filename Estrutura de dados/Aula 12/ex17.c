#include <stdio.h>
#include <stdlib.h>
#include "arvore.c"

void poda(Arv *A){
    if((*A) == NULL) return;
    if((*A)->esq == (*A)->dir){
        free(*A);
        *A = NULL;
    }
    else{
        poda(&(*A)->esq);
        poda(&(*A)->dir);
    }
}

int main(void){
   Arv I = arv(arv(NULL,2,arv(NULL,8,NULL)),1,arv(arv(arv(NULL,0,NULL),9,NULL),3,arv(NULL,4,NULL)));
   exibe(I,0);
   poda(&I);
   exibe(I,0);
   return 0;
}