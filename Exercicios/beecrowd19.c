#include <stdio.h>
int main() {
     int vetor[5], maior=0, p, i, j;
    
    for(i=0;i<5;i++){
        scanf("%d", &vetor[i]);
        
        while(vetor[i]<0)
            scanf("%d", &vetor[i]);
        
        for(j=0; j<i; j++)
            
            while(vetor[j] == vetor[i])
                scanf("%d", &vetor[i]);
            
        if(maior<vetor[i]){
            maior = vetor[i];
            p = i+1;
        }
            
    }
    
    printf("%d\n", maior);
    printf("%d\n", p);
    return 0;
}