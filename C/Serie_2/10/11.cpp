#include <stdio.h>

int main()
{

    /*Declarar las variables*/
    int temp, hum;

    /*Solicitar las variables*/
    printf("Dame la temperatura en Celsius: ");
    scanf("%d", &temp);

    printf("Dame la humedad en porcentaje: ");
    scanf("%d", &hum);

    /*Utilizar switch para aconsejar que ropa usar*/
    switch (temp)
    {
    case 25:
        switch (hum)
        {
        case 90:
            printf("Debe usar: Pantalon largo y camisa.\n");
            break;
        default:
            printf("No se encuentra una recomendacion para esta humedad en 25°C.\n");
            break;
        }
        break;
    case 10:
        switch (hum)
        {
        case 50:
            printf("Debe usar: Pantalon de pana y chaleco.\n");
            break;
        default:
            printf("No se encuentra una recomendacion para esta humedad en 10°C.\n");
            break;
        }
        break;
    case 2:
        switch (hum)
        {
        case 45:
            printf("Debe usar: Pantalon, chaleco y abrigo.\n");
            break;
        default:
            printf("No se encuentra una recomendacion para esta humedad en 2°C.\n");
            break;
        }
        break;
    case 30:
        switch (hum)
        {
        case 85:
            printf("Debe usar: Pantalon corto y camiseta.\n");
            break;
        default:
            printf("No se encuentra una recomendacion para esta humedad en 30°C.\n");
            break;
        }
        break;
    default:
        printf("No se encuentra una recomendacion para esta temperatura.\n");
        break;
    }

    return 0;
}