#include <stdio.h>
#include <stdlib.h>
#include "arvorebusca.c"

int main(void){
    Arv r = arv(NULL,5,NULL);
    Arv d = arv(NULL,0,arv(arv(arv(NULL,6,NULL),8,NULL),9,arv(NULL,11,NULL)));
    Arv e = arv(arv(arv(NULL,2,arv(NULL,3,NULL)),5,NULL),6,NULL);
    Arv ed = arv(arv(arv(NULL,4,NULL),5,arv(NULL,6,NULL)),7,arv(arv(NULL,8,NULL),9,NULL));

    exibe(ed,0);
    remraiz(&ed);
    printf("------------------------\n");
    exibe(ed,0);

    return 0;
}