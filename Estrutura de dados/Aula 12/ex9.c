#include <stdio.h>
#include <stdlib.h>
#include "arvore.c"

int max(int x, int y){
    if (x>y) return x;
    return y;
}

int altura(Arv A){
    if(!A) return 0;
    return 1 + max(altura(A->esq),altura(A->dir));
}

int main(void){
   Arv I = arv(arv(NULL,2,NULL),1,arv(arv(arv(NULL,0,NULL),9,NULL),3,arv(NULL,4,NULL)));
   exibe(I,0);
   printf("%d", altura(I));
   return 0;
}