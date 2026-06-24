#include <stdio.h>
#include <stdlib.h>
#include "Lista.c"

Lista intervalo(int p, int u){
    Lista i = NULL;
    if (p>u) return i;
    while(p<=u){
        i = no(u--,i); //Quando estou apenas criando uma lista com itens que não são de outra
    }                //eu não preciso avançar a lista para l->prox 
    return i;
}

int main(){

    exibe(intervalo(4,12));
}