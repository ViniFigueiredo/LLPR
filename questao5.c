#include <stdio.h>

int main() {
    float valor;
    float *ptrValor;

    ptrValor = &valor;

    printf("Digite um valor real: ");
    scanf("%f", ptrValor);

    printf("Valor original: %.2f\n", valor);

    *ptrValor *= 2;

    printf("Dobro: %.2f\n", *ptrValor);

    return 0;
}
