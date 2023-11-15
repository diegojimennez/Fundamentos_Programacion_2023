#include <stdio.h>

long long factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int num;
    printf("Introduce un número: ");
    scanf("%d", &num);
    if (num < 0)
        printf("Error! El factorial de un número negativo no existe.");
    else
        printf("El factorial de %d es: %lld\n", num, factorial(num));
    return 0;
}