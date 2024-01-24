#include <stdio.h>

int main() {
    int b, n, i, d, c, v;

    scanf("%d %d", &b, &n);

    while (b != 0 && n != 0) {
        int r[b];
        
        for (i = 0; i < b; i++)
            scanf("%d", &r[i]);

        // Processar as debêntures
        for (i = 0; i < n; i++) {
            scanf("%d %d %d", &d, &c, &v);

            // Verificar se o banco devedor é igual ao banco credor
            while (d == c)
                scanf("%d", &c);

            // Decrementar o saldo do banco devedor e incrementar o saldo do banco credor
            r[d - 1] -= v;
            r[c - 1] += v;
        }

        // Verificar se todos os saldos são não negativos
        char resultado = 'S';
        for (i = 0; i < b; i++) {
            if (r[i] < 0) {
                resultado = 'N';
                break;
            }
        }

        printf("%c\n", resultado);

        // Ler próxima entrada
        scanf("%d %d", &b, &n);
    }

    return 0;
}