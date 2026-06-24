#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "modulos.c"

///PROGRAMA PARA COMPARAÇÂO
int main(void) {
   int v[100000];
   double t, b, m;
   puts("     n bsort msort");
   for(int n=1e4; n<=1e5; n+=1e4) {
      preenche(v,n,1);
      t = clock();                     // definida em time.h
      bsort(v,n);
      b = difftime(time(NULL), t); // tempo do bsort
      preenche(v,n,1);
      t = clock();
      msort(v,n);
      m = difftime(time(NULL), t);  // tempo do bsort
      printf("%6d %5.1f %5.1f\n",n,b,m);
   }
   return 0;
}