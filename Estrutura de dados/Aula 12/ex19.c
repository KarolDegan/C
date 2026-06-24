#include <stdio.h>
#include <stdlib.h>
#include "arvore.c"

int conta(Item x, Arv A){
    if(A==NULL) return 0;
    return (A->item == x ? 1 : 0) + conta(x,A->esq) + conta(x,A->dir);
}

int main(void){
   Arv I = arv(arv(NULL,1,arv(NULL,8,NULL)),1,arv(arv(arv(NULL,0,NULL),9,NULL),3,arv(NULL,1,NULL)));
   printf("%d", conta(5,I));
   return 0;
}