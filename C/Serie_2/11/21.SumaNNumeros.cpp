#include <stdio.h>

int main()
{
    int n;
    int suma = 0;
    long long mult = 1;

    printf("Hasta que numero quieres: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("El numero tiene que ser positivo.");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            suma += i;
            mult *= i;
        }

        printf("La suma de los primeros %d numero es: %d\n", n, suma);
        printf("La multiplicacion de los primeros %d numeros es: %lld\n", n, mult);
    }

    return 0;
}