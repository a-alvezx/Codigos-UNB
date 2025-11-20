#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    int i, tamanho;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tamanho = strlen(palavra);

    printf("A palavra invertida eh: ");

    for (i = tamanho - 1; i >= 0; i--) {
        printf("%c", palavra[i]);
    }
    printf("\n");

    return 0;
}