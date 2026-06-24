#include <stdio.h>
#include <stdlib.h>
#include "Lista.c"

int in(int x, Lista L){
    if(L->prox == NULL) return 0;
    if (x == L->item) return 1;
    else return in(x,L->prox);
}

int main(){
    
}