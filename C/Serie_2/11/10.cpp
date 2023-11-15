#include <stdio.h>
#include <math.h>

int main()
{
    double x, inicio, fin, incremento;

    printf("Introduce el valor inicial de x: ");
    scanf("%lf", &inicio);

    printf("Introduce el valor final de x: ");
    scanf("%lf", &fin);

    printf("Introduce el incremento de x: ");
    scanf("%lf", &incremento);

    printf("\nx\tsen(x)\n");

    for (x = inicio; x <= fin; x += incremento)
    {
        printf("%.2lf\t%.2lf\n", x, sin(x));
    }

    return 0;
}