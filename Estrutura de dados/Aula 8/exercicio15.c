#include <stdio.h>
#include <stdlib.h>
#include "Lista.c"

Lista clone(Lista L){
    if (L==NULL) return NULL;
    return no(L->item,clone(L->prox));
    /*
        Lista I(variável aponta para 1º) (3,endereço2º) (1,endereço3º) (5,NULL)

        Lista clone(1º){
        Falso I guarda o endereço do 1ºnó
        no(3,clone(I apontando para o 2ºnó

        Lista clone(2º)
        Falso I guarda o endereço do 2ºnó
        no(3,no(1, clone(I apontando para o 3ºnó

        Lista clone(3º)
        Falso I guarda o endereço do 3ºnó
        return no(L->item,clone(L->prox)); no(3,no(1, no ( 5, clone(I agora é NULL

        Lista clone(NULL)
        VDD e retorna o NULL  no(L->item,clone(L->prox)); no(3,no(1, no ( 5, NULL
        
    */
}

int main(){
    Lista H = no(4,no(2,NULL));
    Lista I = no(3,no(1,no(5,NULL)));
    printf("H = "); exibe(clone(H));
    printf("I = "); exibe(clone(I));
}