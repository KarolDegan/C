#include <stdio.h>
#include <stdlib.h>
typedef int Item;

typedef struct no {
    Item item;
    struct no *prox;
}* Lista;

Lista no(Item x, Lista p){
    Lista n = malloc(sizeof(struct no));
    n->item = x;
    n->prox = p;
    return n;
}

void exibe(Lista L) {
   while( L != NULL ) {
      printf("%d\n",L->item);
      L = L->prox;
   }
}

void exibe(Lista L) {
    printf("[");
    while(L) {
      printf("%d\n",L->item);
      if(L->prox) printf(",");
      L = L->prox;
   }
   printf("]");
}




int main(){
    Lista I = no(3,no(5,no(4,NULL)));

    exibe(I);
}