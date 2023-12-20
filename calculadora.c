#include <stdio.h>

float deducaodependente(float dependentes);
float deducaoinss(float salario);
float impostoreal(float salarioreduzido);

int main() {
    float salariodigitado;
    int DependentesDigitados;
    float deduzidoinss;
    float deduzidodependente;
    float salarioreal;

    printf("Digite o seu salário: ");
    scanf("%f", &salariodigitado);

    printf("Digite o número de dependentes: ");
    scanf("%d", &DependentesDigitados);

    salarioreal = salariodigitado - deducaoinss(salariodigitado) - deducaodependente(DependentesDigitados);

    if (impostoreal(salarioreal) == 0){
        printf("Você está isento de impostos\n");
    }
    else{
    printf("O imposto a ser cobrado será de %.2f Reais\n", impostoreal(salarioreal));
}
    return 0;
}
//função que calcula os dependentes
float deducaodependente(float dependentes) {
    float ValorDependente = dependentes * 189.59;
    return ValorDependente;
}
//função que calcula salario do inss
float deducaoinss(float salario) {
    float deduzido;

    if (salario <= 1320) {
        deduzido = salario * 0.075;
    } else if (salario > 1320.01 || salario <= 2571.29) {
        deduzido = salario * 0.09;
    } else if (salario > 2571.30 || salario <= 3856.94) {
        deduzido = salario * 0.12;
    } else if (salario > 3856.95 || salario <= 7507.49) {
        deduzido = salario * 0.14;
    } else {
        deduzido = 1051.0486;
    }

    return deduzido;
}
//função que pega o salário deduzido e aplica o imposto
float impostoreal(float salarioreduzido) {
    float deduzido;

    if (salarioreduzido <= 2112.00) {
        deduzido = 0;
    } else if (salarioreduzido >= 2112.01|| salarioreduzido <= 2826.65) {
        deduzido = 158.40;
    } else if (salarioreduzido > 2826.66 || salarioreduzido <= 3751.05) {
        deduzido = 370.40;
    } else if (salarioreduzido > 3751.06 || salarioreduzido <= 4664.68) {
        deduzido = 651.73;
    } else {
        deduzido = 884.96;
    }

    return deduzido;
}
