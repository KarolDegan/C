#include<stdio.h>
int main(){

    int x,y;

    scanf("%d", &x);
    scanf("%d", &y);

    while (x!=0 && y != 0){

        if (x>0 && y>0)
            printf("primeiro\n");
        else if (x>0 && y<0)
            printf("quarto\n");
        else if (x<0 && y>0)
            printf("segundo\n");
        else if (x<0 && y<0)
            printf("terceiro\n");

        scanf("%d", &x);
        scanf("%d", &y);

    }

}