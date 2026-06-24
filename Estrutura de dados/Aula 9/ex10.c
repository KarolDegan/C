#include <stdio.h>
#include "lista-ordem.c"

int pert_rec(Item x, Lista L) {
    if(L == NULL || L->item > x) return 0;
    if(L->item == x) return 1;
    return pert_rec(x,L->prox);
}

int main (void){
    Lista I = NULL;
    ins(4,&I); ins(1,&I);ins(4,&I); ins(3,&I); ins(5,&I); ins(6,&I);
    exibe(I);
    printf("%d", pert_rec(2,I));
    return 0;
}