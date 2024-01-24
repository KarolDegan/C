#include <stdio.h>
#include <conio.h>
int main (){
    unsigned char a;
    a = getche();
    while (a != 27){
        if (0<= a && a <= 31 || a == 127)
            printf("\nCaracter de controle");
        if (a >=32 && a <= 126)
            if (a>=65 && a<=90)
            printf("\nCaracter Alfabético maiúsculo");
            else if (a>=48 && a<=57)
            printf("\nCaracter numérico");
            else if (a>=97 && a<= 122)
            printf("\nCaracter Alfabético minúsculo");
            else
            printf("\nCaracter de pontuação");
        a = getche();
        
    }
    return 0;
}