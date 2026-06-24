#include "mapeamento.c"

/*Função de hash
int hash(int c, int m) {
   return (c % m);
}*/

//Chaves alfanumericas
unsigned hash(char *c, int m) {
   unsigned s = 0;
   for(int i=0; c[i]; i++)
      s += (i+1)*c[i];
   return (s % m);
}

//O tipo Dicionario  é um vetor de ponteiro de mapeamentos
typedef struct dic {
   int tam;
   Map *vet;
} *Dic;

//Criação de Dicionário
Dic dic(int m) {
   Dic d = malloc(sizeof(struct dic));
   d->tam = m;
   d->vet = malloc(m*sizeof(Map));
   for(int i=0; i<m; i++) d->vet[i] = NULL; //Nullo para todas as posições
   return d;
}

//Inserção em dicionário
void insd(Chave c, Valor v, Dic d) {
   insm(c, v, &d->vet[hash(c,d->tam)]);
}

//Remoção em dicionário
void remd(Chave c, Dic d) {
   remm(c, &d->vet[hash(c,d->tam)]);
}

//Pertinência em dicionário
int pertd(Chave c, Valor v, Dic d) {
   return pertm(c, v, d->vet[hash(c,d->tam)]);
}

//Exibição de dicionário
void exibed(Dic d) {
   for(int i=0; i<d->tam; i++) {
      printf("%d: ", i);
      exibem(d->vet[i]);
   }
}

//Destruição mapeamento
void destroid(Dic *d) {
   for(int i=0; i<(*d)->tam; i++)
      destroim(&(*d)->vet[i]);
   free(*d);
   *d = NULL;
}

