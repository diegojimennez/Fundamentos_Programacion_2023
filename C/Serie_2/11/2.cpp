#include <stdio.h>

int main()
{
    int base, potencia, resultado = 1, i;

    printf("Introduce la base: ");
    scanf("%d", &base);

    printf("Introduce la potencia: ");
    scanf("%d", &potencia);

    for (i = 0; i < potencia; i++)
    {
        resultado *= base;
    }

    printf("%d elevado a la potencia %d es %d.\n", base, potencia, resultado);

    return 0;
}