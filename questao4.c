#include <stdio.h>

void invertedor(int *num) {
    int reversed = 0, digit;

    while (*num != 0) {
        digit = *num % 10;
        reversed = reversed * 10 + digit;
        *num /= 10;
    }

    *num = reversed;
}

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    invertedor(&numero);

    printf("Número invertido: %d\n", numero);

    return 0;
}
