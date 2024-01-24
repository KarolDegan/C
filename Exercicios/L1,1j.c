#include <stdio.h>
int main()
{
    int i = 0x0F0F;
    if (!i==~i)
    printf("\n VDD");
    else
    printf("\nFalso");
}