#include <stdio.h>

int main()
{
    printf ("\xC9");
    for (int i = 0; i<=4; i++){
        printf ("\xCd");
    }
    printf ("\xBB");

    for (int i = 0; i<2 ; i++){
        printf ("\n");
        printf ("\xBA     \xBA");
    }
    printf ("\n");
    printf ("\xC8");
    for (int i = 0;i<=4;i++){
        printf ("\xCD");
    }
    printf ("\xBC");
    return 0;
}
