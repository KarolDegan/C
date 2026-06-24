#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Lista.c"

Lista ale(int tam, int val){
    Lista l = NULL;
    while(tam>0){
        l = no(rand()%val,l); // 1º l = no(randval1, NULL) 2º l = no(randval2,no(randval1,NULL)) 
        tam --;
    }
    return l;    
}

int main(){
    srand(time(NULL));

    Lista A = ale(10,100);
    exibe(A);
    return 0;
}