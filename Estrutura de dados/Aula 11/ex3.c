#include <stdio.h>
#include "dicionario.c"

int main(void) {
   Dic D = dic(3);
   insd("bat", "morcego", D);
   insd("pig", "porco", D);
   insd("cat", "gato", D);
   insd("dog", "cachorro", D);
   insd("cow", "vaca", D);
   exibed(D);
   return 0;
}