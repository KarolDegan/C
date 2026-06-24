#include <stdio.h>
#include "pilha.c"

int main(void){
    int n, x;
    printf("Quantos Numeros: ");
    scanf("%d",&n);
    Pilha a = pilha(n);
    Pilha b = pilha (n);
    for (int i =1; i<= n ; i++){
        printf("%d Numero: ", i);
        scanf("%d",&x);
        
        while (!vaziap(a) && x<topo(a)) empilha(desempilha(a),b);

        if(vaziap(a) || x != topo(a)) empilha(x,a);

        while(!vaziap(b)) empilha(desempilha(b),a);
    }

    printf("Decrescente: \n");
    while (!vaziap(a)) printf("%d\n",desempilha(a));

    destroip(&a);
    destroip(&b);
    return 0;
}