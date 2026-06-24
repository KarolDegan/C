#include <stdio.h>
#include <stdlib.h>
#include "arvorebusca.c"

int main(void) {
   int v[9] = {71,43,64,92,80,27,58,35,16};
   Arv A = NULL;
   for(int i=0; i<9; i++) ins(v[i],&A);
   emordem(A);
   puts("\nPara sair, digite um inteiro negativo!");
   while( 1 ) {
      int x;
      printf("\nItem a ser buscado? ");
      scanf("%d",&x);
      if( x<0 ) break;
      if( busca(x,A) ) puts("Encontrado!");
      else puts("Inexistente!"); 
   }
   return 0;
}