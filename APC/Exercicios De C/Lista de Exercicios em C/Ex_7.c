#include <stdio.h>

int main() {
    double peso, altura, imc;

    printf("Digite o seu peso: ");
    scanf("%lf", &peso);

    printf("Digite a sua altura: ");
    scanf("%lf", &altura);

    if (altura > 0) {
        imc = peso / (altura * altura);

        printf("\nSeu IMC e: %.2lf\n", imc);
        printf("Condição: ");

        if (imc < 18.5) {
            printf("Abaixo do peso\n");
        } else if (imc < 25) {
            printf("Peso normal\n");
        } else if (imc < 30) {
            printf("Acima do peso\n");
        } else if (imc <= 40) {
            printf("Obeso\n");
        } else {
            printf("Obesidade grave\n");
        }

    } else {
        printf("Altura invalida. Nao e posstvel calcular o IMC.\n");
    }

    return 0;
}