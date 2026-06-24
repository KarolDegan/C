#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "pilha.c"
//Expressões booleanas

//Para Posfixa
char *posfixa(char *e){
    static char s[256];
    int j = 0;
    Pilha p = pilha(256);
    for(int i = 0; e[i]; i++){
        if(isalpha(e[i])) s[j++] = e[i];
        else if (strchr("!&|",e[i])) empilha(e[i],p);
        else if(e[i] == ')') s[j++] = desempilha(p);
    }
    s[j] = '\0';
    destroip(&p);
    return s;
}

//Valor da Posfixa
int valor(char *e){
    Pilha p = pilha(256);
    for(int i = 0; e[i]; i++){
        if(isalpha(e[i])){
            if(e[i] == 'f' || e[i] == 'F') empilha(0,p);
            else empilha (1,p);
        }
        else if(e[i] == '!') empilha(!desempilha(p), p);
        else if(strchr("&|",e[i])){
            int y = desempilha(p);
            int x = desempilha(p);
            switch(e[i]){
                case '&': 
                    (x&y)?empilha(1,p):empilha(0,p);
                    break;
                case '|': 
                    (x|y)?empilha(1,p):empilha(0,p);
                    break;
            }
        }
    }
    int r = topo(p);
    destroip(&p);
    return r;

}
//Calcular o Fatorial
//int fatorial(n){
//    if (n<=1) return 1;
//    else return f(n-1)*n;
//}

//Programa Principal
int main(void){
    char e[256];
    printf("Infixa?");
    gets(e);
    printf("Pósfixa: %s", posfixa(e));
    printf("\nValor: %d", valor(posfixa(e)));
}