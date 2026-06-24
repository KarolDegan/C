#include <stdio.h>
#include <ctype.h>
#include "pilha.c"

void inverte(char *e) {
    static char s[256];
    Pilha p = pilha(256);
    int j = 0;
    for (int i = 0; e[i]; i++) {
        
        if (isalpha(e[i])) {
            empilha(e[i], p);

        } else {

            while(!vaziap(p)){
                s[j++] = desempilha(p);
            }
            
            s[j++] = ' ';
            
        }
    }

    while (!vaziap(p)) {
        s[j++] = desempilha(p);
    }
    
    s[j] = '\0';
    destroip(&p);
    printf("%s", s);
}

int main(void) {
    char e[256];
    printf("Digite a string: ");

    gets(e);
    inverte(e);
    return 0;
}