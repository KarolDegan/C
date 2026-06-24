#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mapeamento.c"

int main(void) {
   Valor w;
   Map I = NULL;
   insm(36,"Leo",&I); insm(15,"Ivo",&I); insm(42,"Eva",&I);    
   exibem(I);
   if( pertm(42,w,I) ) printf("Valor da chave 29: %s\n",w);
   else puts("Chave 29 inexistente!");
   if( pertm(10,w,I) ) printf("Valor: %s\n",w);
   else puts("Chave 10 inexistente!");
   return 0;
}