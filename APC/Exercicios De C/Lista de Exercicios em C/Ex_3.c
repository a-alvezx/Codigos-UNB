#include <stdio.h>

int main() {
    int x, y, z;

    printf("Digite o valor do primeiro lado: ");
    scanf("%d", &x);

    printf("Digite o valor do segundo lado: ");
    scanf("%d", &y);

    printf("Digite o valor do terceiro lado: ");
    scanf("%d", &z);

    if ((x < y + z) && (y < x + z) && (z < x + y)) {
        
        printf("Os valores formam um triangulo do tipo: ");

        if (x == y && y == z) {
            printf("Equilatero");
        } else if (x == y || y == z || x == z) {
            printf("Isosceles");
        } else {
            printf("Escaleno");
        }

    } else {
        printf("Os valores nao formam um triangulo.\n");
    }

    return 0;
}