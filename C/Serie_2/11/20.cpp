#include <stdio.h>

int main()
{
    int suma = 0;

    for (int i = 1; i <= 100; i++)
    {
        suma += i;
    }

    printf("La suma del 1 al 100 es: %d\n", suma);

    return 0;
}