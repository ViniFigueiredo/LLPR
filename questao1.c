#include <stdio.h>


void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y, z;
    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &x, &y, &z);

    if (x > y) {
        troca(&x, &y);
    }
    if (x > z) {
        troca(&x, &z);
    }

    // Garanta que 'y' seja o segundo menor
    if (y > z) {
        troca(&y, &z);
    }

    // Exiba os valores ordenados
    printf("Valores ordenados: %d %d %d\n", x, y, z);

    return 0;
}
