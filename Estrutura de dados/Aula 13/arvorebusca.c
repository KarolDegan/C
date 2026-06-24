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

//Inserção
void ins(Item x, Arv *A) {
   if( *A == NULL ) *A = arv(NULL,x,NULL);
   else if( x <= (*A)->item ) ins(x,&(*A)->esq);
   else ins(x,&(*A)->dir);
}

//Busca em árvore de busca binária
int busca(Item x, Arv A) {
   if( A == NULL ) return 0;
   if( x == A->item ) return 1;
   if( x < A->item ) return busca(x,A->esq);
   else return busca(x,A->dir);
}

//Remoção do item máximo
Item remmax(Arv *A) {
   if( *A == NULL ) abort();
   if( (*A)->dir == NULL ) {
      Arv n = *A;
      Item x = n->item;
      *A = n->esq;
      free(n);
      return x;
   }
   return remmax(&(*A)->dir);
}

//Remoção da raiz de uma árvore de busca binária
void remraiz(Arv *A) {
   if( *A == NULL ) abort();
   Arv n = *A;
   if( n->esq == NULL ) *A = n->dir;
   else if( n->dir == NULL ) *A = n->esq;
   else n->item = remmax(&n->esq);
   if( n != *A ) free(n);
}

//Remoção em árvore de busca binária
void rem(Item x, Arv *A) {
   if( *A == NULL ) return;
   if( x == (*A)->item ) remraiz(A);
   else if( x < (*A)->item ) rem(x,&(*A)->esq);
   else rem(x,&(*A)->dir);
}

//preordem
void preordem(Arv A){
    if(A == NULL) return;
    printf("%d", A->item);
    preordem (A->esq);
    preordem(A->dir);
}

//emordem
void emordem(Arv A){
    if(A == NULL) return;
    emordem (A->esq);
    printf("%d", A->item);
    emordem(A->dir);
}

//posordem
void posordem(Arv A){
    if(A == NULL) return;
    posordem (A->esq);
    posordem(A->dir);
    printf("%d", A->item);
}
