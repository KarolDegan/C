#include<stdio.h>
void minmax (int v[], int n, int *a, int *b){
    int aux = 0 ,i, j;
    
    for(j=0;j<n;j++){
        for (i=0;i<n;i++){
            if (v[j]<v[i]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    *a = v[0];
    *b = v[n-1];
}
int main(){
    int numero, i, min=0, max=0;
    printf("Quantos valores deseja comparar?");
    scanf("%d", &numero);
    int vetor[numero];
    for(i=0;i<numero;i++){
        printf("Digite um numero inteiro: ");
        scanf("%d", &vetor[i]);
    }
    minmax(vetor,numero, &min, &max);
    for (i=0;i<numero;i++) {
        printf("%d", vetor[i]);
    }
    printf("\nMenor valor: %d \nMaior valor: %d", min, max);
}