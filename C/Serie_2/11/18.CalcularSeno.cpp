#include <stdio.h>
#include <math.h>

double Seno(double x, int n)
{

    double seno = 0.0;
    int i, j, signo;

    for (i = 0, j = 1, signo = 1; i < n; i++, j += 2, signo *= -1)
    {
        double termino = pow(x, j) / tgamma(j + i);
        seno += signo * termino;
    }

    return seno;
}

int main()
{

    double x;
    int n;

    printf("Dame el valor de x en radianes: ");
    scanf("%lf", &x);

    printf("Dame el numero en terminos para la aproximacion: ");
    scanf("%d", &n);

    double res = Seno(x, n);

    printf("El numero aproximado de sen(%.2lf) con %d terminos es: %.10lf\n", x, n, res);

    return 0;
}