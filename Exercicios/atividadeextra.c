#include <stdio.h>

void carrega(int v[], int n){
    int i;
    printf("\nPreenchendo valores do Vetor: ");
    for (i=0;i<n;i++){
        printf("\nvalor %d: ", i+1);
        scanf("%d", &*(v+i));
    }
}

int main(){
    int tamanho, i;
    printf("Tamanho do vetor: ");
    scanf("%d", &tamanho);
    int vetor[tamanho];
    carrega(vetor, tamanho);

    for(i=0;i<tamanho;i++){
        printf("\n %d", vetor[i]);
    }
}