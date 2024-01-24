#include <stdio.h>
#include <conio.h>
int main (){
    double a, b, c, aux=0;
    printf("Digite 3 números:\n ");
    scanf("\n%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    if (c <= a){
        aux = c;
        c = a;
        a = aux;
    }
    aux = 0;
    if (c<=b){
        aux = c;
        c = b;
        b = aux;
    }
    aux = 0;
    if(b< a){
        aux = b;
        b = a;
        a = aux;
    }
    printf("\na: %0.2lf\nb: %0.2lf\nc: %0.2lf", a, b, c);
    return 0;
}