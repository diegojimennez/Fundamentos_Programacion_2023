#include <stdio.h>

int fibo(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}

int main()
{
    int n;

    printf("¿Cuantos numeros quieres de la serie de Fibonacci?\n");
    scanf("%d", &n);

    printf("Los primeros %d numeros de la serie de Fibonacci son:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", fibo(i));
    }

    return 0;
}