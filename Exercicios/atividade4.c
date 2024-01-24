#include <stdio.h>
#include <stdlib.h>
int main(){
    float A[10][3], media=0, compara = 0; int i, j;
    for(i=0;i<10;i++){
        for(j=0;j<2;j++){
            printf("Aluno %d - Nota %d: ", i+1, j+1);
            scanf("%f",&A[i][j]);
        }
        A[i][2] = (A[i][0] + A[i][1])/2;
        media +=  A[i][2];
    }
    media = media/10;
    for(i=0;i<10;i++){
        printf("\n ");
        for(j=0; j<3; j++)
            printf("%.2f \t",A[i][j]);
    }
    printf("\nA media e: %.2f", media);
    for (i=0;i<10;i++){
        compara = A[i][2];
        if (compara > media)
            printf("\nAluno %d tem %.2f de média: esta Acima da Media", i+1, A[i][2]);
        if (compara == media)
            printf("\nAluno %d tem %.2f de média: esta na Media", i+1, A[i][2]);
        if(compara < media){
            printf("\nAluno %d tem %.2f de média: esta Abaixo da Media", i+1, A[i][2]);
        }
    }
}