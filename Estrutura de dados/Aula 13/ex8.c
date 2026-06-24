#include <stdio.h>
#include <stdlib.h>
#include "arvorebusca.c"

void ins_sr(Item x, Arv *A){
   if( *A == NULL ) *A = arv(NULL,x,NULL);
   else if( x < (*A)->item ) ins_sr(x,&(*A)->esq);
   else if(x > (*A)->item)ins_sr(x,&(*A)->dir);
}

int main(void) {
    Arv A = NULL;

    ins_sr(8, &A);
    ins_sr(3, &A);
    ins_sr(9, &A);
    ins_sr(2, &A);
    ins_sr(4, &A);
    ins_sr(6, &A);
    ins_sr(5, &A);

    exibe(A,0);

    // Tentativa de inserir duplicados
    ins_sr(5, &A);
    ins_sr(3, &A);

    printf("Árvore após inserções:\n");
    exibe(A, 0);

    return 0;
}