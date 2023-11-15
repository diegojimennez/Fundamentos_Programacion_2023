#include <stdio.h>

int main()
{
    int litros;
    float costo = 0;

    printf("Introduce la cantidad de litros de agua gastados: ");
    scanf("%d", &litros);

    if (litros > 200)
    {
        costo += (litros - 200) * 30;
        litros = 200;
    }

    if (litros > 50)
    {
        costo += (litros - 50) * 10;
    }

    if (costo < 1000)
    {
        costo = 1000;
    }

    printf("El costo del agua para este mes es %.2f pesos.\n", costo);

    return 0;
}