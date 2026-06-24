#include <stdio.h>
int qd(int n){
    if (n<2) return 1;
    return 1 + qd(n/2);
}

int main(void) {
   int n;
   printf("Num? ");
   scanf("%d",&n);
   printf("Quantidade de bits: %d", qd(n));
   return 0;
}