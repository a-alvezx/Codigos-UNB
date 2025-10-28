#include <stdio.h>

int main() {
    int v1, v2, v3;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &v1);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &v2);

    printf("Digite o terceiro valor inteiro: ");
    scanf("%d", &v3);

    if (v1 == v2 || v1 == v3 || v2 == v3) {
        printf("Erro: Os valores devem ser diferentes.\n");
    } else {
        printf("Valores em ordem decrescente: ");

        if (v1 > v2 && v1 > v3) {
            if (v2 > v3) {
                printf("%d, %d, %d\n", v1, v2, v3);
            } else {
                printf("%d, %d, %d\n", v1, v3, v2);
            }
        }
        else if (v2 > v1 && v2 > v3) {
            if (v1 > v3) {
                printf("%d, %d, %d\n", v2, v1, v3);
            } else {
                printf("%d, %d, %d\n", v2, v3, v1);
            }
        }
        else {
            if (v1 > v2) {
                printf("%d, %d, %d\n", v3, v1, v2);
            } else {
                printf("%d, %d, %d\n", v3, v2, v1);
            }
        }
    }

    return 0;
}