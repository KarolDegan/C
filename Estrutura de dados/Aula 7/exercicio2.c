#include <stdio.h>

void exibe(int v[], int n) {
    printf("{");
    for (int i = 0; i < n; i++) {
        printf("%d", v[i]);
        if (i < n - 1) {
            printf(",");
        }
    }
    printf("}\n");
}

void empurra(int v[], int u) {
    if(u==0) return;
    empurra(v,u-1);
    if (v[u]<v[u-1]){
        int aux = v[u];
        v[u] = v[u-1];
        v[u-1] = aux;
    }
    exibe(v,4);
}

int main() {
    int v[9] = {51, 82, 38, 99, 75, 19, 69, 46, 27};
    empurra(v, 8);
    exibe(v, 9);
    return 0;
}