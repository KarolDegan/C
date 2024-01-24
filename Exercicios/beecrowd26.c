#include<stdio.h>
int main (){

    int n, i, j, impar[5], par[5], qpar=0, qimpar=0;

    for(i=0;i<15;i++){

        scanf("%d", &n);

        if(n%2==0){
            par[qpar] = n;
            qpar++;
        }
        
        else{
            impar[qimpar] = n;
            qimpar++;
        }

        if(qpar == 5){

            for(j=0;j<5;j++)
                printf("par [%d] = %d\n", j, par[j]);

            qpar = 0;

        }

        if(qimpar == 5){

            for(j=0;j<5;j++)
                printf("impar [%d] = %d\n", j, impar[j]);
            
            qimpar = 0;

        }
    }
    for(i=0;i<qimpar;i++)
        printf("impar [%d] = %d\n", i, impar[i]);

    for(i=0;i<qpar;i++)
        printf("par [%d] = %d\n", i, par[i]);
        
}