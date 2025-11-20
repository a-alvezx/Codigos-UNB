#include <stdio.h>
#include <ctype.h> 

int main() {
    char texto[100];
    int i = 0;
    int j = 0;
    int contador = 0;

    printf("Digite uma string: ");
    gets(texto);

    while (texto[i] != '\0') {

        texto[i] = toupper(texto[i]);

        if (texto[i] != 'C') {
            texto[j] = texto[i];
            j++;
        } else {
            contador++;
        }
        i++;
    }

    texto[j] = '\0'; 

    printf("Texto final: %s\n", texto);
    printf("Caracteres removidos: %d\n", contador);

    return 0;
}