#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mapeamento.c"

int main(void) {
   Map I = NULL;
   insm(36,"Leo",&I); insm(15,"Ivo",&I); 
   insm(42,"Eva",&I); insm(29,"Ana",&I);
   exibem(I);
   remm(29,&I);
   exibem(I);   
   remm(42,&I);
   exibem(I);      
   return 0;
}