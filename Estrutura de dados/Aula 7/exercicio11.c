#include <stdio.h>

int rlsearch(int x, int v[], int n){
    if(n==0) return 0;
    if(v[n-1] == x) return 1;
    return rlsearch(x,v,n-1);
}

int main(){
    int v[5] = {3,6,7,4,1};
    printf("4: %d\n", rlsearch(4,v,5));
    printf("10: %d\n", rlsearch(10,v,5));
}