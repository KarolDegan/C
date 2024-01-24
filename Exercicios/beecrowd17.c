#include<stdio.h>
int main() {
 
    int X, Y, soma=0, aux,p;
    
    scanf("%d", &X);
    scanf("%d", &Y);
    
    if (X>Y)
        {aux=X;
        X=Y;
        Y=aux;}  
    
    p = X+1;
   
    while (p<Y){
        if(p%2 != 0)
            soma += p; 
        p++;
    }
    printf("%d\n",soma);
 
    return 0;
}