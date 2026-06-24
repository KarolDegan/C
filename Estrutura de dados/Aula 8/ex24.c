#include <stdio.h>
#include <stdlib.h>
#include "Lista.c"

void replace(int x, int y, Lista L){
    if(L == NULL) abort();
    if(x == L->item) L->item = y;
    if(L->prox == NULL) return;
    return replace(x,y,L->prox); 
}

int main(){
    int x = 4;
    int y = 2;
    Lista H = no(4,no(2, no(17, no(44, no(92,NULL)))));
    Lista I = no(4,no(4,no(4, no(44, no(4,NULL)))));

    replace(x,y,H);
    replace(x,y,I);

    exibe(H);
    exibe(I);
}