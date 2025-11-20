#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char frase[100];
    int i, totalVogais = 0;
    char letraTemp;

    printf("Digite uma frase completa: ");
    
    fgets(frase, 100, stdin); 


    for (i = 0; frase[i] != '\0'; i++) {
        
        letraTemp = toupper(frase[i]);

        if (letraTemp == 'A' || letraTemp == 'E' || letraTemp == 'I' || 
            letraTemp == 'O' || letraTemp == 'U') {
            
            totalVogais++;
            frase[i] = '_';
        }
    }

    printf("\nTotal de vogais: %d\n", totalVogais);
    printf("Frase modificada: %s\n", frase);

    return 0;
}