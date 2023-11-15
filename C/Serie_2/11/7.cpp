#include <stdio.h>

int main()
{
    int casilla;
    double granos = 1, total = 0;

    printf("Casilla\tGranos\tTotal\n");

    for (casilla = 1; casilla <= 64; casilla++)
    {
        printf("%d\t%.0lf\t%.0lf\n", casilla, granos, total);
        total += granos;
        granos *= 2;
    }

    printf("El numero total de granos de trigo es: %.0lf.\n", total);

    return 0;
}