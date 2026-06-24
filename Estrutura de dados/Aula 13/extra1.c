//Cria a função infixa(A), que exibe a forma parentesiada da expressão aritmetica representada pelo AB A.

#include <stdio.h>
#include <stdlib.h>
#include "arvorebusca.c"

void infix(Arv A){
    if(A == NULL) return;
    if (A->esq || A->dir ) printf("(");
    infix(A->esq);
    if (A->esq == A->dir){
        printf("%d", A->item);
    } else{
        printf("%c", A->item);
    }
    infix(A->dir);
    if (A->esq || A->dir ) printf(")");
}

int main(void){
    Arv A = arv(arv(arv(NULL,1,NULL),'+',arv(NULL,2,NULL)),'*',arv(arv(NULL,5,NULL),'-',arv(NULL,3,NULL)));

    infix(A);
    return 0;
}