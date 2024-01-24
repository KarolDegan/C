#include<stdio.h>
int main(){

    int v, i;
    int n[10];

    scanf("%d", &v);

    n[0] = v;

    for(i=1;i<10;i++){
        n[i] = 2*n[i-1];
    }

    for (i=0;i<10;i++)
        printf("N[%d] = %d\n", i, n[i]);


}