#include <stdio.h>

double factorial(int n)
{
    double fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

double taylor_series_exp(double x, int n)
{
    double sum = 1;
    for (int i = n; i > 0; i--)
    {
        sum = 1 + x * sum / i;
    }
    return sum;
}

int main()
{
    double x = 1.0;
    int n = 10;
    double result = taylor_series_exp(x, n);
    printf("e^%f = %f\n", x, result);
    return 0;
}