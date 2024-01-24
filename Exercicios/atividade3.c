#include <stdio.h>
#define max 7
int main () {
    float temp[max], media=0;
    int i = 0, cont = 0;
    while (i<7){
    printf(" %d temperatura: ", i+1);
    scanf("%f",&temp[i]);
    media += temp[i];
    i+=1;
    }
    media = media/7;
    for(i=0;i<7;i++){
        if (temp[i]> media){
        cont+=1;
        }
    }
    printf("\nA temperatura media foi: %0.2f", media);
    printf("\nTeve %d dia(s) acima da media",cont);
    return 0;

}