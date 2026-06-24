#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Lista.c"

Lista rnd(int n, int m){
    if(n == 0) return NULL;
    return no(rand()%m, rnd(n-1,m));    
}

int main(){
    srand(time(NULL));

    Lista A = rnd(10,100);
    exibe(A);
    return 0;
}