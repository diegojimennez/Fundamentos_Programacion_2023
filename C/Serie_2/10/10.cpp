#include <stdio.h>

int main()
{
    char l1, l2, l3;

    printf("Dame la primera letra: ");
    scanf(" %c", &l1);
    printf("Dame la segunda letra: ");
    scanf(" %c", &l2);
    printf("Dame la tercera letra: ");
    scanf(" %c", &l3);

    if (l1 == l2 || l2 == l3 || l1 == l3)
    {
        printf("Al menos hay dos letras iguales.\n");
    }
    else
    {
        printf("No hay ninguna letra igual.\n");
    }

    return 0;
}