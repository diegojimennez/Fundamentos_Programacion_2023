#include <stdio.h>

int main()
{
    int numero, i, esPrimo = 1;

    printf("Introduce un número entero: ");
    scanf("%d", &numero);

    for (i = 2; i <= numero / 2; i++)
    {
        if (numero % i == 0)
        {
            esPrimo = 0;
            break;
        }
    }

    if (esPrimo && numero != 1)
    {
        printf("%d es un número primo.\n", numero);
    }
    else
    {
        printf("%d no es un número primo.\n", numero);
    }

    return 0;
}