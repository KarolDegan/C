#include <stdio.h>

void exibe(int v[],int n){
    printf("{");
    for(int i = 0; i<n; i++){
        printf("%d", v[i]);
        if(i<n-1) printf(",");
    }
    printf("}\n");
}

void empurra(int v[], int u) {
    if(u==0) return;
    empurra(v,u-1);
    if (v[u]<v[u-1]){
        int aux = v[u];
        v[u] = v[u-1];
        v[u-1] = aux;
    }
}

void bsort(int v[], int n) {
   for(int i=1; i<=n; i++)
      for(int j=0; j<n-i; j++)
         if( v[j]>v[j+1] ){
            int aux = v[j];
            v[j] = v[j+1];
            v[j+1] = aux;
         }
}

void bsr(int v[], int n){
    if(n==0) return;
    empurra(v,n);
    bsr(v,n-1);
    printf("voltas---");
}

int main(void) {
   int v[9] = {51,82,38,99,75,19,69,46,27};
   bsr(v,9);
   exibe(v,9);
   return 0;
}