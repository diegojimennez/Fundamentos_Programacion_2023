#include <stdio.h>

int factorial(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int combinatoria(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
    int n = 6;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            printf("  ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", combinatoria(i, j));
        }
        printf("\n");
    }
    return 0;
}