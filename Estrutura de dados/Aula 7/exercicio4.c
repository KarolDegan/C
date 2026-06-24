#include <stdio.h>
#include <stdlib.h>

void exibe(int v[],int n){
    printf("{");
    for(int i = 0; i<n; i++){
        printf("%d", v[i]);
        if(i<n-1) printf(",");
    }
    printf("}\n");
}

void intercala(int v[], int p, int m, int u) {
   int *w = malloc((u-p+1)*sizeof(int));
   int i=p, j=m+1, k=0;
   while( i<=m && j<=u )
      w[k++] = (v[i]<v[j]) ? v[i++] : v[j++];
   while( i<=m ) w[k++] = v[i++];
   while( j<=u ) w[k++] = v[j++];
   for(k=0; k<=u-p; k++) v[p+k] = w[k];
   free(w);
}

int main(void) {
    int v[8] = {31,48,60,80,19,27,52,75};
    intercala(v,0,3,7); // u-p/2 = 3
    exibe(v,8);
    int w[9] = {10,82,27,38,41,53,99,60,75};
    intercala(w,0,1,8); // dei a média errada ou dividi os blocos em tamanhos diferentes
    exibe(w,9);
    return 0;
}