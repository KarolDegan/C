#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "arvore.c"

Arv aleatoria(Item n){
    if(n==0) return NULL;
    int m = rand()%n;
    return arv(aleatoria(m), rand()%10,aleatoria(n-1-m));
}

int main(void){
   srand(time(NULL));
   exibe(aleatoria(9),0);
   return 0;
}
