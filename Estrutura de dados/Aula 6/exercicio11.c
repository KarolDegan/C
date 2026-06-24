#include <stdio.h>
int quoc(int m, int n){
    if (m<n) return 0;
    return 1 + quoc(m-n,n);
}

int main(void) {
   int n, m;
   printf("Num? ");
   scanf("%d",&n);
   printf("Num? ");
   scanf("%d",&m);
   printf("Quociente = %d\n",quoc(n,m));
   return 0;
}