#include <stdio.h>
int prod(int n, int m){
    if (m == 0) return 0 ;
    else return n+ prod(n,m-1);
}

int main(void) {
   int n, m;
   printf("Num? ");
   scanf("%d",&n);
   printf("Num? ");
   scanf("%d",&m);
   printf("Produto = %d\n",prod(n,m));
   return 0;
}