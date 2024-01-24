#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char frase[100];
    int i=0, q=0;
    printf ("\nDigite uma frase: ");
    gets(frase);
    while (frase[i] !='\0'){
        if(frase[i] == ' ')
            q++;
        i++;
    }
    q++;
    printf("\n A frase '%s' tem %d palavras", frase, q);
    return 0;
}