#include <stdio.h>
#include <string.h>
#include <ctype.h>
int pal(char* s, int p, int u){
    if (p >=u) return 1;
    else if (isspace(s[p])) return pal(s, p + 1, u);
    else if (isspace(s[u])) return pal(s, p, u - 1);
    else if (s[p] == s[u]) return pal(s,p+1,u-1);
    else return 0; 
}

int main(){
    char s[] = "a man a plan a canal panama";
    pal(s,0,strlen(s)-1)?printf("Palindroma"): printf("Nao e palindroma");
    
}