#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "pilha.c"

int main(void) {
    Pilha P = pilha(5);
    char s[11];
    char *copia;

    for (int i = 1; i <= 3; i++) {
        printf("? ");
        gets(s);
        copia = strdup(s);
        empilha(copia, P);
    }

    while (!vaziap(P)) {
        printf("%s\n", desempilha(P));
    }


    while (!vaziap(P)) {
        free(desempilha(P));
    }

    return 0;
}