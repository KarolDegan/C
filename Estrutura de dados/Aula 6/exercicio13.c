#include <stdio.h>
int q(int n){
    if (n ==1) return 1;
    return q(n-1) + (2*n-1);
}

int main(){
    int n;
    printf("Num?");
    scanf("%d", &n);
    printf("Quadrado: %d", q(n));

}