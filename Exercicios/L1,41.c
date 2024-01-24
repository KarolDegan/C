#include <stdio.h>
#include <conio.h>
#define bissexto(ano) (((ano%4==0)&&(ano%100 != 0))|| (ano%400==0))? (1):(0)
int main(){
    int a, retorno;
    printf("Digite ano: ");
    scanf("\n%d",&a);
    retorno = bissexto(a);
    if (retorno)
        printf("Ano bissexto!");
    else
        printf("Não é Ano bissexto!");
        
}