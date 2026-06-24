#include <stdio.h>

int rbsearch(int x, int v[], int p, int u) {
    if (p > u) // Verifica se o intervalo é inválido
        return 0;

    int m = (p + u) / 2; // Calcula o índice médio corretamente

    if (v[m] == x) // Verifica se o valor na posição m é igual a x
        return 1;
    else if (x < v[m]) // Se x for menor que o valor na posição m, procure na metade esquerda
        return rbsearch(x, v, p, m - 1);
    else // Caso contrário, procure na metade direita
        return rbsearch(x, v, m + 1, u);
}

int main() {
    int v[5] = {1, 3, 4, 6, 7}; //precisa estar ordenado
    printf("4: %d\n", rbsearch(4, v, 0, 4));
    printf("10: %d\n", rbsearch(10, v, 0, 4));
    return 0;
}