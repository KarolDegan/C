#include<stdio.h>
int main(){

    int l, r, soma;

    scanf("%d %d", &l, &r);

    while(l!=0 || r!=0){

        soma = l + r;
        printf("%d\n", soma);

        scanf("%d %d", &l, &r);
    }

}