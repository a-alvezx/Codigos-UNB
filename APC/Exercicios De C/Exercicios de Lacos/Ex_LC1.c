#include <stdio.h>
#include <windows.h>
int main()
{
    int n1, i;
    printf ("Digite um numero: ");
    scanf ("%d",&n1);
    if (n1 > 2000){
        do{
            system("cls");
            printf ("Numero digitado e invalido!\n=Digite outro: ");
            scanf ("%d", &n1);
        } while (n1 > 2000);
    }
    for ( i = n1 ; i <= 2000 ; i++ ){
        if (i % 2 == 0){
            printf ("O numero %d e PAR \n", i);
        }
    }
    return 0;
}
