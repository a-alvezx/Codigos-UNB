#include <stdio.h>

int main() {
    double precoNormal;
    double precoFinal;
    int condicao;

    printf("Digite o preco normal de etiqueta do produto: R$ ");
    scanf("%lf", &precoNormal);

    printf("\n--- Condicoes de Pagamento ---\n");
    printf("1: A vista em dinheiro (10%% de desconto)\n");
    printf("2: A vista no cartao (5%% de desconto)\n");
    printf("3: Em 3x no cartao (preco normal)\n");
    printf("4: Em 6x no cartao (10%% de juros)\n");
    printf("----------------------------------\n");
    printf("Digite o codigo da condicao (1 a 4): ");
    scanf("%d", &condicao);

    switch (condicao) {
        case 1:
            precoFinal = precoNormal * 0.90;
            printf("\nPagamento a vista em dinheiro.\n");
            printf("Valor final: R$ %.2lf\n", precoFinal);
            break;
        
        case 2:
            precoFinal = precoNormal * 0.95;
            printf("\nPagamento a vista no cartao.\n");
            printf("Valor final: R$ %.2lf\n", precoFinal);
            break;
            
        case 3:
            precoFinal = precoNormal;
            printf("\nPagamento em 3x no cartao.\n");
            printf("Valor total: R$ %.2lf (3x de R$ %.2lf)\n", precoFinal, precoFinal / 3.0);
            break;
            
        case 4:
            precoFinal = precoNormal * 1.10;
            printf("\nPagamento em 6x no cartao.\n");
            printf("Valor total: R$ %.2lf (6x de R$ %.2lf)\n", precoFinal, precoFinal / 6.0);
            break;
            
        default:
            printf("\nCodigo de pagamento invalido!\n");
            break;
    }

    return 0;
}
