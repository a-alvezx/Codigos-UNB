#include <stdio.h>

int main()
{
    float n1, n2, n3, mA;
    char name[50];
    printf ("Digite o nome do aluno: ");
    scanf ("%s", name);
    printf ("Digite as notas: ");
    scanf ("%f %f %f", &n1, &n2, &n3);
    printf ("===================\n");
    printf ("A situacao do aluno %s e: \n", name);
    mA = (n1 + n2 + n3)/3;

    if ( mA >= 7 ){
        printf ("Aprovado!");
    } else if ( mA < 7 && mA > 5){
        printf ("Recuperacao!");
    } else {
        printf ("Reproovado!");
    }
    return 0;
}
