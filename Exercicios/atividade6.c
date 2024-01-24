#include <stdio.h>
#include <string.h>
int main(){
    char frase[100];
    int i, tamanho;
    printf("\nDigite uma frase: ");
    gets(frase);
    tamanho = strlen(frase);
    printf("\nFrase invertida: ");
    for(i=tamanho-1; i>=0; i--){
        printf("%c",frase[i]);
    }
    return 0;
}