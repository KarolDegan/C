#include<stdio.h>

int main() {
    int X1, Y1, X2, Y2, x, y;
    scanf("%d %d %d %d", &X1,&Y1,&X2,&Y2);
    
    while (X1!=0 || Y1!=0 || X2!=0 || Y2!=0)
        {
            x = X1 - X2;
            y = Y1 - Y2;
            
            if (x<0)
                x = -x;
            if (y<0)
                y = -y;
            
            if (X1==X2 && Y1==Y2)
                printf("%d\n",0);
            else if (((X1==X2) || (Y1==Y2) || (x==y)))
                printf("%d\n",1);
            else
                printf("%d\n",2);
        scanf("%d %d %d %d", &X1,&Y1,&X2,&Y2);      
        }

    return 0;
}