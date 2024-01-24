#include<stdio.h>
#include<math.h>
float distancia(int x1, int y1, int x2, int y2){
    float r;
    r = sqrt((pow(x2-x1,2)+pow(y2-y1,2)));
    return r;
}
typedef struct{
    int x;
    int y;
}pontos;

int main(){
    float resposta;
    pontos primeiro, segundo;
    printf("DISTANCIA ENTRE DOIS PONTOS");

    printf("\nCordenadas Primeiro ponto: \nX: ");
    scanf("%d", &primeiro.x);
    printf("Y: ");
    scanf("%d", &primeiro.y);

    printf("Cordenadas Segundo ponto: \nX: ");
    scanf("%d", &segundo.x);
    printf("Y: ");
    scanf("%d", &segundo.y);

    resposta = distancia(primeiro.x, primeiro.y, segundo.x, segundo.y);
    printf("Distancia: %.2f", resposta);
}