#include <stdio.h>
char par(int n){
   if (n<=1) return n;
   return par(n-2);
}

int main(void) {
   int n;
   printf("Num? ");
   scanf("%d",&n);
   if(par(n)) printf("Impar");
   else printf("Par");
   return 0;
}