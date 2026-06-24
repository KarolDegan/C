#include <stdio.h>
#include <stdlib.h>
#include "arvore.c"

int nos(Arv A){
    if( A == NULL) return 0;
    return 1 + nos(A->esq) + nos(A->dir);
}

int main(void){
   Arv I = arv(arv(arv(NULL,7,NULL),2,NULL),1,arv(arv(NULL,9,NULL),3,arv(NULL,4,NULL)));
   printf("%d", nos(I));
   return 0;
}