#include <stdio.h>
#include <stdlib.h>
#include "arvore.c"

int pertence(Item x, Arv A){
    if(A == NULL) return 0;
    if(A->item == x) return 1;
    return pertence(x,A->esq) || pertence(x,A->dir);
}

int main(void){
   Arv I = arv(arv(NULL,2,NULL),1,arv(arv(arv(NULL,0,NULL),9,NULL),3,arv(NULL,4,NULL)));
   printf("%d", pertence(5,I));
   return 0;
}