#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int palpite, numeroMagico, tentativas = 0;

    srand(time(NULL));

    numeroMagico = rand() % 501;

    printf("=== JOGO DO NUMERO MAGICO ===\n");
    printf("Tente adivinhar o número entre 0 e 500.\n\n");

    do {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);
        
        tentativas++;

        if (palpite > numeroMagico) {
            printf("-> A tentativa (%d) e MAIOR que o numero magico.\n\n", palpite);
        } else if (palpite < numeroMagico) {
            printf("-> A tentativa (%d) e MENOR que o numero magico.\n\n", palpite);
        }

    } while (palpite != numeroMagico);

    printf("\n--------------------------------------------------\n");
    printf("PARABENS! Voce acertou o numero: %d\n", numeroMagico);
    printf("Total de tentativas: %d\n", tentativas);
    printf("Classificacao: ");

    if (tentativas <= 3) {
        printf("MUITO SORTUDO\n");
    } else if (tentativas >= 4 && tentativas <= 6) {
        printf("SORTUDO\n");
    } else if (tentativas >= 7 && tentativas <= 20) {
        printf("NORMAL\n");
    } else {
        printf("TENTE NOVAMENTE\n"); 
    }
    printf("--------------------------------------------------\n");

    return 0;
}