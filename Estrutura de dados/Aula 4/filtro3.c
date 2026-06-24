#include <stdio.h>
#include <ctype.h>
#include "fila.c"

//filtro sem tamanho prévio

int main(void){
    char resp;
    int x;
    int aux;
    int cont = 0;
    Fila f = fila(256);

    
    do{
        printf("\nNumeros para análise: ");
        scanf("%d", &x);
        enfileira(x, f);

        printf("\nDeseja fornecer mais números? S/N ");
        scanf(" %c", &resp);

        cont++;

    } while(resp != 'N');

    for(int i = 0; i < cont; i++){
        aux = desenfileira(f);
        if(aux >= 0) enfileira(aux,f);
    }

    while(!vaziaf(f)) {
        printf("%d ", desenfileira(f));
    }

    destroif(&f);
}