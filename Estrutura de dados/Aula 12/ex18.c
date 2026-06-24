#include <stdio.h>
#include <stdlib.h>
#include "arvore.c"

void destroi(Arv *A){
    if(*A == NULL) return;
    destroi(&(*A)->esq);
    destroi(&(*A)->dir);
    free(*A);
    *A = NULL;
}

int main(void){
   Arv I = arv(arv(NULL,2,arv(NULL,8,NULL)),1,arv(arv(arv(NULL,0,NULL),9,NULL),3,arv(NULL,4,NULL)));
   destroi(&I);
   return 0;
}