#include <stdio.h>
#include <stdlib.h>
#include "arvorebusca.c"

void rem_todos(Item x, Arv *A){
    if( *A == NULL) return;
    if( x < (*A)->item ) rem_todos(x,&(*A)->esq);
    else if(x > (*A)->item) rem_todos(x,&(*A)->dir);
    else{
        remraiz(A);
        rem_todos(x, A);
    }
}

int main(void) {
    Arv A = NULL;

    ins(5, &A);
    ins(3, &A);
    ins(9, &A);
    ins(2, &A);
    ins(8, &A);
    ins(6, &A);
    ins(8, &A);

    exibe(A,0);
    printf("---------------\n");
    rem_todos(8,&A);
    exibe(A,0);

    return 0;
}