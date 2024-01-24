#include <stdio.h>
#include <conio.h>
int main(){
    int produto = 1,q = 0, i, r;
    double n, media, soma;
    for (i=0;i<5;i++){
        printf("Digite um número: ");
        scanf("%lf", &n);
        soma += n;
        if (i == 0){
            r = n;
            while (r > 0){
                q +=1;
                r = r/10;
            }    
        }
        if (i<3)
            produto *= n;
    }
    media = soma/5;
    printf("Media: %lf",media);
    printf("\nProduto dos 3 primeiros: %d", produto);
    printf("\nQuantidade de digitos do 1º valor: %d", q);
    return 0;
}