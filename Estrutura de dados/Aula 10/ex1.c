#include "mapeamento.c"
int main(void){
    Map I = NULL;
    insm(36,"Leo",&I);
    insm(15,"Ivo",&I);
    insm(42,"Eva",&I);
    insm(29,"Ana",&I);
    exibem(I);
    insm(29,"Bia",&I);
    exibem(I);
    return 0;
}
