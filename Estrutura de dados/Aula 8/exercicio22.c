#include <stdio.h>
#include <stdlib.h>
#include "Lista.c"

int equal(Lista a, Lista b) {
    // Se ambas as listas são nulas, elas são iguais
    if (a == NULL && b == NULL) 
        return 1;
    
    // Se apenas uma das listas é nula ou os itens atuais são diferentes, elas são diferentes
    if (a == NULL || b == NULL || a->item != b->item) 
        return 0;
    
    // Verifica recursivamente o restante das listas
    return equal(a->prox, b->prox);
}


int main(){
    
    Lista H = no(4,no(2, no(17, no(44, no(92,NULL)))));
    Lista I = no(4,no(2,no(17, no(44, no(92,NULL)))));
    printf("Iguais? %d\n", equal(H,I));
}