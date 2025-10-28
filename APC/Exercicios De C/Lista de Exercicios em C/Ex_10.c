#include <stdio.h>

int main() {
    double baseCalculo;
    double impostoDevido;

    printf("Digite a base de calculo mensal (salario): R$ ");
    scanf("%lf", &baseCalculo);

    if (baseCalculo <= 2259.20) {
        impostoDevido = 0.0;
        
    } else if (baseCalculo <= 2826.65) {
        impostoDevido = (baseCalculo * 0.075) - 169.44;
        
    } else if (baseCalculo <= 3751.05) {
        impostoDevido = (baseCalculo * 0.15) - 381.44;
        
    } else if (baseCalculo <= 4664.68) {
        impostoDevido = (baseCalculo * 0.225) - 662.77;
        
    } else {
        impostoDevido = (baseCalculo * 0.275) - 896.00;
    }

    if (impostoDevido < 0.0) {
        impostoDevido = 0.0;
    }

    printf("\nImposto de Renda devido: R$ %.2lf\n", impostoDevido);

    return 0;
}