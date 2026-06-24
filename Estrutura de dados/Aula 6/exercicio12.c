#include <stdio.h>
int resto(int m, int n){
    if(m<n) return m;
    return resto(m-n, n);
}

int main(void) {
   int n, m;
   printf("Num? ");
   scanf("%d",&n);
   printf("Num? ");
   scanf("%d",&m);
   printf("Resto = %d\n",resto(n,m));
   return 0;
}