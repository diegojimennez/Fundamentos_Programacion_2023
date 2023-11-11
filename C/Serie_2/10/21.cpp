#include <stdio.h>

int main()
{
    int numero;

    printf("Introduce un número entero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0 && numero % 5 == 0)
    {
        printf("El número %d es múltiplo de 2 y de 5.\n", numero);
    }
    else
    {
        printf("El número %d no es múltiplo de 2 y de 5.\n", numero);
    }

    return 0;
}