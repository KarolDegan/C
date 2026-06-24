#include <stdio.h>
#include <stdlib.h>
#include "Lista.c"

void anex(Lista * a, Lista b){
    if(!b) return ;
    while(*a){
        a = &(*a)->prox; //o endereço do conteudo de prox
    }
    *a = b;
}


int main(void) {
   Lista H = no(4,no(2,NULL));
   Lista I = no(3,no(1,no(5,NULL)));
   printf("H = "); exibe(H);
   printf("I = "); exibe(I);
   printf("Pressione enter");
   getchar();
   anex(&H,I);
   printf("H = "); exibe(H);
   printf("I = "); exibe(I);
   return 0;
}

