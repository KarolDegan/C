#include <stdio.h>
#include <stdlib.h>
#include "arvore.c"

int main(void) {
   Arv I = arv(arv(NULL,2,NULL),1,arv(NULL,3,arv(NULL,4,NULL)));
   exibe(I,0);
   return 0;
}