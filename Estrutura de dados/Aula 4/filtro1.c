#include <stdio.h>
#include <ctype.h>
#include "fila.c"

//filtro pedindo quantida para usuário

int main(void){
    int n;
    int x;
    int aux;
    Fila f = fila(256);

    printf("Quantas números?");
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        printf("%d numero: ", i+1);
        scanf("%d", &x);
        enfileira(x,f);
    }
    for(int i = 0; i < n; i++){
        aux = desenfileira(f);
        if(aux >= 0) enfileira(aux,f);
    }

    while(!vaziaf(f)) {
        printf("%d ", desenfileira(f));
    }

    destroif(&f);
}