//EXIBE
void exibe(int v[],int n){
    printf("{");
    for(int i = 0; i<n; i++){
        printf("%d", v[i]);
        if(i<n-1) printf(",");
    }
    printf("}\n");
}

//TROCA
void troca(int v[], int i, int j) {
   int x = v[i];
   v[i] = v[j];
   v[j] = x;
}
//BSORT
void bsort(int v[], int n) {
   for(int i=1; i<=n; i++)
      for(int j=0; j<n-i; j++)
         if( v[j]>v[j+1] )
            troca(v,j,j+1);
}
//EMPURRA
void empurra(int v[], int u) {
    if(u==0) return;
    printf("-----descida---------\n");
    exibe(v,4);
    printf("------------------\n");
    empurra(v,u-1);
    if (v[u]<v[u-1]){
        int aux = v[u];
        v[u] = v[u-1];
        v[u-1] = aux;
    }
    exibe(v,4);
}

//INTERCALA
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

//MSORT
void ms(int v[], int p, int u) {
   if( p==u ) return;
   int m = (p+u)/2;
   ms(v,p,m);
   ms(v,m+1,u);
   intercala(v,p,m,u);
}

void msort(int v[], int n) {
   ms(v,0,n-1);
}

