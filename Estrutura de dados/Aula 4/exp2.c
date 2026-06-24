#include "fila.c"
#include "pilha.c"
#include <stdio.h>
#include <ctype.h>

int main(void){
    char s[256];
    Fila f = fila(256);
    Pilha p = pilha(256);

    printf("\nFrase?");
    gets(s);

    for(int i = 0; s[i]; i++){
        if(s[i] != ' '){
            enfileira(s[i],f);
            empilha(s[i],p);
        }
    }

    while (!vaziap(p) && desempilha(p) == desenfileira(f));
    if (vaziap(p)) puts("A frase é palindroma");
    else puts("A frase não é palindroma");

    destroif(&f);
    destroip(&p);
}