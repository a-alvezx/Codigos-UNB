#include <stdio.h>

int main() {
    double horasTrabalhadas, valorHora;
    double salarioSemanal;
    
    double horasRegulares, horasExtras50, horasExtras100;

    printf("Digite o numero total de horas trabalhadas na semana: ");
    scanf("%lf", &horasTrabalhadas);

    printf("Digite o valor da hora de trabalho: R$ ");
    scanf("%lf", &valorHora);

    if (horasTrabalhadas < 0 || valorHora < 0) {
        printf("Valores invalidos.\n");
        return 1;
    }

    if (horasTrabalhadas <= 40.0) {
        salarioSemanal = horasTrabalhadas * valorHora;
        
    } else if (horasTrabalhadas <= 60.0) {

        horasRegulares = 40.0;
        horasExtras50 = horasTrabalhadas - 40.0;
        
        salarioSemanal = (horasRegulares * valorHora) + 
                         (horasExtras50 * (valorHora * 1.5));
                         
    } else {
        
        horasRegulares = 40.0;
        horasExtras50 = 20.0; 
        horasExtras100 = horasTrabalhadas - 60.0; 
        
        salarioSemanal = (horasRegulares * valorHora) + 
                         (horasExtras50 * (valorHora * 1.5)) +
                         (horasExtras100 * (valorHora * 2.0));
    }

    printf("\nO salario semanal e: R$ %.2lf\n", salarioSemanal);

    return 0;
}