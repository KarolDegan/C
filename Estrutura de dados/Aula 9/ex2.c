#include <stdio.h>
#include "lista-ordem.c"

void ins_isr(Item x, Lista *L){
    while(*L && (*L)->item < x)
        L = &(*L) ->prox;
    if(x != (*L)->item) *L = no(x,*L);
}

int main(void) {
   Lista I = no(1,no(4,no(7,NULL)));
   ins_isr(4,&I);
   ins_isr(1,&I);
   ins_isr(3,&I);
   ins_isr(5,&I);
   ins_isr(2,&I);
   ins_isr(2,&I);
   exibe(I);
   return 0;
}
