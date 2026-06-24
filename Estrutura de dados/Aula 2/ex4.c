#include <stdio.h>
#include "pilha.c"

int bal(char s[]){
    Pilha p = pilha(256);
    for(int i = 0; s[i]; i++){
        switch(s[i]){
            case '(': empilha(')', p); break;
            case '[': empilha(']',p); break;
            case '{' : empilha('}',p); break;
            default:
                if (vaziap(p) || (s[i] != desempilha(p))){
                    destroip(&p);
                    return 0;
                } 
        }
    }
    int r = vaziap(p);
    destroip(&p);
    return r;
}

int main(void){
    char e[513];
    //while(1){
        printf("EXP?");
        gets(e);
        printf("balanceada: %s\n", bal(e)?"sim":"nao");
   // }
}