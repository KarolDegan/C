#include <stdio.h>
#include <string.h>
int strpos (char s[], char c){
    int i = 0;
    while (s[i] != '\0' && s[i]!= c)
        i++;
    if (s[i]==c)
        return i;
    return -1;
}
int main(){
    char frase[100], c, i;
    printf("\nDigite uma frase: ");
    gets(frase);
    printf("\n Qual carcter deseja procurar?");
    c = getche();
    i = strpos(frase, c);
    if (i != -1)
        printf("\nCaracter na posição %d", i+1);
    else
        printf("\nCaracter não encontrado");
    return 0;
}
