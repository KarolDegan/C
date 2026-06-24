#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "arvore.c"

Arv balanceada(Item n){ //n é o numero de itens na arvore
    if(n==0) return NULL;
    return arv(balanceada((n-1)/2), rand()%10,balanceada(n/2));
}

int main(void) {
   srand(time(NULL));
   exibe(balanceada(9),0);
   return 0;
}