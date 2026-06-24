#include <stdlib.h>
#include <stdio.h>

void exibe(int v[],int n){
    printf("{");
    for(int i = 0; i<n; i++){
        printf("%d", v[i]);
        if(i<n-1) printf(",");
    }
    printf("}\n");
}

void preenche(int v[], int n, int s) {
   srand(s); // definida em stdlib.h
   for(int i=0; i<n; i++) v[i] = rand()%1000;
}

int main(){
    int v[5];
    int semente = 58;
    preenche(v,5,semente);
    exibe(v,5);
}