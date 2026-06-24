#include <stdio.h>
#include <stdlib.h>
#include "arvorebusca.c"

void nested(Arv A){
    printf("(");
    if(A){
        nested(A->esq);
        printf("%d", A->item);
        nested(A->dir);
    }
    printf(")");
}

int main(void){
    Arv ed = arv(arv(arv(NULL,4,NULL),5,arv(NULL,6,NULL)),7,arv(arv(NULL,8,NULL),9,NULL));

    nested(ed);
    return 0;
}