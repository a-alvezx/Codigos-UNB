#include <stdio.h>

int main()
{
    int n1;
    printf ("Digite seu numero: ");
    scanf ("%d", &n1);
    printf ("O numero %d e: ", n1);
    
    if (n1 % 2 == 0){
        printf ("PAR");
    } else {
        printf ("IMPAR");
    }
    return 0;
}
