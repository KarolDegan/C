#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "arvore.c"

int main (void){
    srand(time(NULL));
    Arv A = completa(3);
    exibe(A,0);
    return 0;
}