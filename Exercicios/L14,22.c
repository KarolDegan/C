#include <stdio.h>
#include <conio.h>
#define para_maiusculo(ch) ((ch>=65)&&(ch<=90))?(ch):(ch-(32))
int main (){
    char a, retorno;
    printf("digite uma letra: ");
    scanf("%c",&a);
    retorno = para_maiusculo(a);
    printf("%c",retorno);

}