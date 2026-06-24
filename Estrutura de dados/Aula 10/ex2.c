#include "mapeamento.c"

void insmr(Chave c, Valor v, Map *I){
    if( *I==NULL || (*I)->chave >= c) *I = no_map(c, v, *I);
    if ( *I && c==(*I)->chave ) strcpy((*I)->valor,v);
    else insmr(c,v, &(*I)->prox);
}

int main(void){
    Map J = NULL;
    insmr(36,"Leo",&J);

    exibem(J);
    insmr(29,"Bia",&J);
    exibem(J);
    return 0;
}