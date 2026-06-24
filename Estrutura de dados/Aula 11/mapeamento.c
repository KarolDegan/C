#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//O tipo Map
typedef int Chave;
typedef char Valor[22];
typedef struct map {
   Chave chave;
   Valor valor;
   struct map *prox;
} *Map;

//Criação do nó de mapeamento
Map no_map(Chave c, Valor v, Map p) {
   Map n = malloc(sizeof(struct map));
   n->chave = c;
   strcpy(n->valor,v);//eu não posso só atribuir a string com n->valor = v
   n->prox = p;
   return n;
}

//Inserção em mapeamento
void insm(Chave c, Valor v, Map *M) {
   while( *M && c>(*M)->chave ) 
      M = &(*M)->prox;
   if( *M && c==(*M)->chave )
      strcpy((*M)->valor,v); //se já existe valor, substituo
   else *M = no_map(c,v,*M); // se não eu crio o nó
}

//Exibição de mapeamneto
void exibem(Map M) {
   printf("[");
   while( M ) {
      printf("(%s,%s)",M->chave,M->valor);
      if( M->prox ) printf(",");
      M = M->prox;
   }
   printf("]\n");
}

//Remoção em mapeamento
void remm(Chave c, Map *M) {
   while( *M && c>(*M)->chave ) 
      M = &(*M)->prox;
   if( *M==NULL || c!=(*M)->chave ) return;
   Map n = *M;
   *M = n->prox;
   free(n);
}

//Pertinencia em mapeamento
int pertm(Chave c, Valor v, Map M) {
   while( M && c>M->chave ) 
      M = M->prox;
   if( M && c==M->chave ) 
      strcpy(v,M->valor);
   return (M && c==M->chave);
}

//Destruição mapeamento
void destroim(Map *M){
    while(M){
        Map n = *M;
        *M = n->prox;
        free(n);
    }
}