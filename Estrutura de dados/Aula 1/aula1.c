#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int item;
    struct no *prox;
} *Lista;

int main() {
    Lista L;
    L = malloc(sizeof(struct no));
    L->item = 15;   //(*L).item = 15
    L->prox = malloc(sizeof(struct no));
    L->prox->item = 30;
    L->prox->prox = malloc(sizeof(struct no));
    L->prox->prox->item = 2;
    L->prox->prox->prox = NULL;
    
}