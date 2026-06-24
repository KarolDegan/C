#include <stdio.h>
#include <stdlib.h>
#include "Lista.c"

Lista interv(int n){
    Lista l = NULL;
    //n--; se os elementos começarem em zero
    while (n>0){ // n>=0
        l = no(n--,l);
    }
    return l;
}

int main(){
    int n = 5;
    exibe(interv(n));
}