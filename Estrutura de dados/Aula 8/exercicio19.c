#include <stdio.h>
#include <stdlib.h>
#include "Lista.c"

int nth(int n, Lista L){
    if (n<1 || L==NULL) abort();
    if(n==1) return L->item;
    return nth(n-1,L->prox);
}

int main(){
    int n = 4;
    Lista H = no(4,no(2, no(17, no(44, no(92,NULL)))));
    Lista I = no(3,no(1,no(5, no(6, no(10,NULL)))));
    printf("H = %d", nth(n,H));
    printf("I = %d", nth(n,I));
}