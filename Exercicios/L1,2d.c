#include <stdio.h>
int main ()
{
    unsigned char ch;
    for (ch=0;ch<255;ch++)
        /*if (ch == 255) break;*/
        printf("\n%3d\t%02X\t%c",ch,ch,ch);
    return 0;
}