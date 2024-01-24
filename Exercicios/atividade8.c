#include <stdio.h>
void ordena(int *a,int *b){
    if (*a>*b){
        int aux = *a;
        *a = *b;
        *b = aux;
    }

}
int main (){
    int primeiro, segundo;
    printf("Digite Primeiro número: \n");
    scanf("%d", &primeiro);
    printf("Digite Segunto número: \n");
    scanf("%d", &segundo);
    ordena(&primeiro,&segundo);
    printf("Menor: %d, Maior: %d", primeiro, segundo);
    return 0;

}