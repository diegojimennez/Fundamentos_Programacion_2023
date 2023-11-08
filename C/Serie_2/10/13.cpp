#include <stdio.h>

int main()
{
    int num;

    printf("Dame un numero entero: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("El número %d es par.\n", num);
    }
    else
    {
        printf("El número %d es impar.\n", num);
    }

    return 0;
}