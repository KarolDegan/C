#include "mapeamento.c"

int pertmr(Chave c, Valor v, Map m){
    if(m == NULL || c < m->chave) return 0;
    if(c == m->chave){
      strcpy(v,m->valor);
      return 1;  
    } 
    return pertmr(c,v,m->prox);
}

int main(void) {
   Valor w;
   Map I = NULL;
   insm(36,"Leo",&I); insm(15,"Ivo",&I); insm(42,"Eva",&I);    
   exibem(I);
   if( pertmr(42,w,I) ) printf("Valor da chave 29: %s\n",w);
   else puts("Chave 29 inexistente!");
   if( pertmr(10,w,I) ) printf("Valor: %s\n",w);
   else puts("Chave 10 inexistente!");
   return 0;
}