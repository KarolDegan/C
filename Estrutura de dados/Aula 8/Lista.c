#include <stdio.h>
#include <stdlib.h>


//TIPO LISTA
typedef int Item;
typedef struct no {
   Item item;
   struct no *prox;
} *Lista;


//CRIAÇÂO NÓ -----------------------------------------------------------------------------

Lista no(Item x, Lista p) {
   Lista n = malloc(sizeof(struct no));
   n->item = x;
   n->prox = p;
   return n;
}


// EXIBE-----------------------------------------------------------------------------

void exibe(Lista L) {
    printf("[");
    while(L) {
      printf("%d",L->item);
      if(L->prox) printf(",");
      L = L->prox;
   }
   printf("]\n");
}

//TAMANHO -----------------------------------------------------------------------------

int tamanho(Lista L) {
   int t = 0;
   while( L ) {
      t++;
      L = L->prox;
   }
   return t; 
}


//Lista aleatória

Lista aleatoria(int n, int m) {
   Lista L = NULL;
   while( n>0 ) {
      L = no(rand()%m, L);
      n--;
   }
   return L;
}

//ANEXA -----------------------------------------------------------------------------

void anexa(Lista *A, Lista B) {
   if( !B ) return;
   while( *A )
      A = &(*A)->prox;
   *A = B;
}

//DESTROI-----------------------------------------------------------------------------

void destroi(Lista *L) {
   while( *L ) {
      Lista n = *L;
      *L = n->prox;
      free(n);
   }
}
