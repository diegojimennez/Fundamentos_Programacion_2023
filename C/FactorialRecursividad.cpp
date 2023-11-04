#include <stdio.h>

long long fact(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int main()
{
    int n;

    printf("Dame un numero para calcular su factorial: ");
    scanf("%d", &n);

    printf("El Factorial de %d es: %lld\n", n, fact(n));

    return 0;
}