#include <stdio.h>
#include "lista-ordem.c"

void ins_rec(Item x, Lista *L){
    if( *L==NULL || (*L)->item >= x){
        *L = no(x,*L);
    } 
    else return ins_rec(x,L = &(*L)->prox);
}

int main(void) {
   Lista I = NULL;
   ins_rec(4,&I);
   ins_rec(1,&I);
   ins_rec(3,&I);
   ins_rec(5,&I);
   ins_rec(2,&I);
   ins_rec(2,&I);
   exibe(I);
   ins_rec(0,&I);
   exibe(I);
   return 0;
}