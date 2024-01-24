#include <stdio.h>
#include <conio.h>
int main (){
    unsigned char ch;
    int ce=0,cc=0,lmai=0,lmin=0,d=0;
    do{
        ch = getche();
        if (ch >= 0 && ch <= 31 || ch == 127)
            cc ++;
        else if (ch>=48 && ch <= 57)
            d++;
        else if (ch>=65 && ch <=90)
            lmai++;
        else if (ch>=97 && ch<=122)
            lmin++;
        else if (ch>=128 && ch<=255)
            ce++;
    } while(ch!=27);
    printf("\n%d caracteres estendidos",ce);
    printf("\n%d caracteres de controle", cc);
    printf("\n%d Letras maiusculas", lmai);
    printf("\n%d Letras minusculas", lmin);
    printf("\n%d Dígitos", d);
}