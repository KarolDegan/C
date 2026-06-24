#include <stdio.h>
#include "lista-ordem.c"

void exibe_rd(Lista L){
    if(L == NULL) return;
    printf("%d\n", L->item);
    exibe_rec(L->prox);
}

int main(void) {
   Lista I = no(1,no(4,no(7,NULL)));
   exibe_rd(I);
   return 0;
}