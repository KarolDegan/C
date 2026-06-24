#include <stdio.h>
#include "lista-ordem.c"

void exibe_ri(Lista L){
    if(L == NULL) return;
    exibe_rec(L->prox);
    printf("%d\n", L->item);
}

int main(void) {
   Lista I = no(1,no(4,no(7,NULL)));
   exibe_ri(I);
   return 0;
}