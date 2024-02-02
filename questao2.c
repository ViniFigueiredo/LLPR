#include <stdio.h>
#include <string.h>

void removerVogais(char *entrada) {
    char *saida = entrada;

    while (*entrada != '\0') {
        if (*entrada != 'a' && *entrada != 'e' && *entrada != 'i' && *entrada != 'o' && *entrada != 'u' &&
            *entrada != 'A' && *entrada != 'E' && *entrada != 'I' && *entrada != 'O' && *entrada != 'U') {
            *saida = *entrada;
            saida++;
        }
        entrada++;
    }

    *saida = '\0';
}

int main() {
    char original[100], semVogais[100];

    printf("Digite uma string: ");
    fgets(original, sizeof(original), stdin);

    removerVogais(original);

    printf("String Original: %s", original);
    printf("String sem Vogais: %s", original);

    return 0;
}
