#include <stdio.h>
#include <string.h>
void inv(char* s, int p, int u){
    if (p>=u) return ;
    char aux = s[p];
    s[p] = s[u];
    s[u] = aux;
    inv(s,p+1,u-1);
}

int main(){
    char s[] = "abacaxi";
    inv(s,0,strlen(s)-1);
    printf("%s", s);
}