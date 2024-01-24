#include<stdio.h>

int main() {
    int l;

    while (scanf("%d", &l) != EOF) {
        int v[l], i, maior;

        for (i = 0; i < l; i++)
            scanf("%d", &v[i]);

        maior = v[0];
        for (i = 1; i < l; i++) {
            if (v[i] > maior) {
                maior = v[i];
            }
        }

        if (maior < 10)
            printf("1\n");
        else if (maior > 20)
            printf("3\n");
        else
            printf("2\n");
    }

    return 0;
}