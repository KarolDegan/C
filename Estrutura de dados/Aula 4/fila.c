#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

#define avanca(i) (i = (i+1) % F->max)
//Tipo Fila
typedef char Itemf;
typedef struct fila {
    int max;
    int total;
    int inicio;
    int final;
    Itemf *item;
} *Fila;

//Criar Fila
Fila fila(int m) {
    Fila F = malloc(sizeof(struct fila));
    F->max = m;
    F->total = 0;
    F->inicio = 0;
    F->final = 0;
    F->item = malloc(m *sizeof (Itemf));
    return F;
}

//Teste fila vazia
int vaziaf (Fila F){
    return (F->total == 0);
}

//Teste fila cheia
int cheiaf(Fila F){
    return(F->total == F->max);
}

//Inserção item na fila
void enfileira(Itemf x, Fila F) {
    if( cheiaf(F) ) {
        puts("fila cheia!");
        abort();
    }
    F->item[F->final] = x;
    avanca(F->final);
    F->total++;
}

//Remoção de item em fila
Itemf desenfileira(Fila F) {
    if( vaziaf(F) ) {
        puts("fila vazia!");
        abort();
    }
    Itemf x = F->item[F->inicio];
    avanca(F->inicio);
    F->total--;
    return x;
}

//Destruição fila
void destroif(Fila *F) {
    free((*F)->item);
    free(*F);
    *F = NULL;
}