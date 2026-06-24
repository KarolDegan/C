#include <stdio.h>
#include "dicionario.c"

int main(void) {
   Dic D = dic(5);
   insd(59, "Bia", D);
   insd(48, "Eva", D);
   insd(25, "Ivo", D);
   insd(17, "Ana", D);
   insd(83, "Leo", D);
   exibed(D);
   remd(83,D);
   destroid(&D);
   insd(45, "Leo", D);
   exibed(D);
   return 0;
}
