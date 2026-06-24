#include "mapeamento.c"

void destroimr(Map *M){
    if(!(*M) ) return;
    Map n = *M;
    *M = n->prox;
    free(n);
    destroimr(&(*M));
}

int main(void) {
   Map I = NULL;
   insm(36,"Leo",&I); insm(15,"Ivo",&I); 
   insm(42,"Eva",&I); insm(29,"Ana",&I);
   exibem(I);
   destroimr(&I);
   exibem(I);
}
