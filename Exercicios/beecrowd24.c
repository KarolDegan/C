#include<stdio.h>
int main (){

    int n, i, j, aux, q=1, numero;

    scanf("%d", &n);

    int vetor[n];

    for(i=0;i<n;i++)
        scanf("%d", &vetor[i]);
    
    for(j=0;j<n;j++) {
        for(i=0;i<n;i++){
            if(vetor[j]<vetor[i]){
                aux = vetor[j];
                vetor[j] = vetor[i];
                vetor[i] = aux;
            }
        }
    }

    for (i = 0; i < n; i++) {
        numero = vetor[i];
        if (i < n - 1 && vetor[i] == vetor[i + 1]) {
            q++;
        } else {
            printf("%d aparece %d vez(es)\n", numero, q);
            q = 1;
        }
    }            

}