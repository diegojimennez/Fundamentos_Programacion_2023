#include <stdio.h>
#include <math.h>

int main()
{
    double capital, tasa, interes;
    int ano;

    printf("Introduce el capital invertido: ");
    scanf("%lf", &capital);

    printf("Introduce la tasa de interés (en decimal, por ejemplo, 0.05 para 5%%): ");
    scanf("%lf", &tasa);

    printf("Año\tInterés Compuesto\n");

    for (ano = 1; ano <= 30; ano++)
    {
        interes = capital * pow((1 + tasa), ano);
        printf("%d\t%.2lf\n", ano, interes);
    }

    return 0;
}