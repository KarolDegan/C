#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        int a, b, resp = 0;
        char l;

        scanf("%d %c %d", &a, &l, &b);

        if (a == b)
            resp = a * b;
        else {
            if (l >= 'A' && l <= 'Z') // maiusculo
                resp = b - a;
            if (l >= 'a' && l <= 'z') // minusculo
                resp = a + b;
        }

        printf("%d\n", resp);
    }

    return 0;
}