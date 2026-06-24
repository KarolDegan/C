#include <stdio.h>
int sd(int n){
    if (n<10) return n;
    return n%10 + sd(n/10);
}

int main(){
    int n;
    printf("Num?");
    scanf("%d", &n);
    printf("Soma dos Dígitos: %d", sd(n));
    return 0;
}