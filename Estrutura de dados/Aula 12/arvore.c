#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Tipo arvore
typedef int Item;
typedef struct arv {
   struct arv *esq;
   Item item;
   struct arv *dir;
} *Arv;

//Criação de nó
Arv arv(Arv e, Item x, Arv d) {
   Arv n = malloc(sizeof(struct arv));
   n->esq  = e;
   n->item = x;
   n->dir  = d;
   return n;
}

//Exibição de arvore binária
void exibe(Arv A,int n) {
   if( A==NULL ) return;
   exibe(A->dir,n+1);
   printf("%*s%d\n",3*n,"",A->item);
   exibe(A->esq,n+1);
}

//Criação de Arvore binário completa aleatória
Arv completa(int h) {
   if( h==0 ) return NULL;
   return arv(completa(h-1), rand()%100, completa(h-1));
}

//Arvore Balanceada


//Destroi Arvore
