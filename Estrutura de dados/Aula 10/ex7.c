#include "mapeamento.c"

void destroim(Map *M){
    while(*M){
        Map n = *M;
        *M = n->prox;
        free(n);
    }
}

int main(void) {
   Map I = NULL;
   insm(36,"Leo",&I); insm(15,"Ivo",&I); 
   insm(42,"Eva",&I); insm(29,"Ana",&I);
   exibem(I);
   destroim(&I);
   exibem(I);
}
