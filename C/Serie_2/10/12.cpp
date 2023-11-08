#include <stdio.h>

int main()
{
    int temp, hum;

    printf("Dame la temperatura en Celsius: ");
    scanf("%d", &temp);

    printf("Dame la humedad en porcentaje: ");
    scanf("%d", &hum);

    if (temp == 25)
    {
        if (hum == 90)
        {
            printf("Debe usar: Pantalon largo y camisa.\n");
        }
        else
        {
            printf("No se encuentra una recomendacion para esta humedad en 25°C.\n");
        }
    }
    else if (temp == 10)
    {
        if (hum == 50)
        {
            printf("Debe usar: Pantalon de pana y chaleco.\n");
        }
        else
        {
            printf("No se encuentra una recomendacion para esta humedad en 10°C.\n");
        }
    }
    else if (temp == 2)
    {
        if (hum == 45)
        {
            printf("Recomendación: Pantalón, chaleco y abrigo\n");
        }
        else
        {
            printf("No se encuentra una recomendacion para esta humedad en 2°C.\n");
        }
    }
    else if (temp == 30)
    {
        if (hum == 85)
        {
            printf("Recomendación: Pantalón corto y camiseta\n");
        }
        else
        {
            printf("No se encuentra una recomendacion para esta humedad en 30°C.\n");
        }
    }
    else
    {
        printf("Recomendación no disponible para esta combinación de temperatura y humedad.\n");
    }

    return 0;
}