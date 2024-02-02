#include <stdio.h>

int main() {
    int num1, num2;
    int *ptrNum1, *ptrNum2;

    ptrNum1 = &num1;
    ptrNum2 = &num2;

    printf("Digite o valor para o primeiro número: ");
    scanf("%d", ptrNum1);

    printf("Digite o valor para o segundo número: ");
    scanf("%d", ptrNum2);

    *ptrNum1 = *ptrNum1 + *ptrNum2;
    *ptrNum2 = *ptrNum1 - *ptrNum2;
    *ptrNum1 = *ptrNum1 - *ptrNum2;

    printf("TROOOCAAAAAAAAAAAA!!:\n");
    printf("Primeiro número: %d\n", *ptrNum1);
    printf("Segundo número: %d\n", *ptrNum2);

    return 0;
}
