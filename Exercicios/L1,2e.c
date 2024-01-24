#include <stdio.h>
int main ()
{
    unsigned int mascara = 0x8000;
    int valor;

    printf("\nDigite um valor: ");
    scanf("%d", &valor);
    while (mascara)//todo numero != de 0 é vdd
    {
        printf("%d",(valor & mascara)? 1:0);
        mascara >>= 1;
    }
    return 0;
}