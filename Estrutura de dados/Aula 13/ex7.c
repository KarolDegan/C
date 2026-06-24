#include <stdio.h>
#include <stdlib.h>
#include "arvorebusca.c"

int main(void) {
   int v[9] = {71,43,64,92,80,27,58,35,16};
   Arv A = NULL;
   for(int i=0; i<9; i++) ins(v[i],&A);
   puts("Inicial");
   exibe(A,0);
   for(int i=0; i<9; i++) {
      printf("Depois de remover o item %d\n",v[i]);
      rem(v[i],&A);
      exibe(A,0);
      getchar();
   }
   return 0;
}
