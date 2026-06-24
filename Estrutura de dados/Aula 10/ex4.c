#include "mapeamento.c"

void remmr(Chave c, Map *m){
    if ( *m == NULL || c < (*m)->chave) return;
    if (c == (*m)->chave){
        Map n = *m;
        *m = n->prox;
        free(n);
    }
    else remmr(c,&(*m)->prox);
}

int main(void) {
   Map I = NULL;
   insm(36,"Leo",&I); insm(15,"Ivo",&I); 
   insm(42,"Eva",&I); insm(29,"Ana",&I);
   exibem(I);
   remmr(29,&I);
   exibem(I);   
   remmr(43,&I);
   exibem(I);      
   return 0;
}