#include<stdio.h>
int main() {
 
    int N, i, res;
    
    scanf("%d", &N);
    while (N<2 || N>1000)
        scanf("%d", &N);
    
    for(i=1;i<=10;i++){
        res = i*N;
        printf("%d x %d = %d\n", i, N, res);
    }
 
    return 0;
}