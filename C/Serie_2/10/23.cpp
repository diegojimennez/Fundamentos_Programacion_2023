#include <stdio.h>

int main()
{
    int opcion;
    float cantidad, resultado;
    float dolar_a_peso = 20.0, peso_a_dolar = 0.05, peso_a_euro = 0.04, euro_a_peso = 25.0, dolar_a_euro = 0.88, euro_a_dolar = 1.14;

    printf("Selecciona una opción de conversión:\n");
    printf("1. Dólares a pesos\n");
    printf("2. Pesos a dólares\n");
    printf("3. Pesos a euros\n");
    printf("4. Euros a pesos\n");
    printf("5. Dólares a euros\n");
    printf("6. Euros a dólares\n");
    scanf("%d", &opcion);

    printf("Introduce la cantidad que deseas convertir: ");
    scanf("%f", &cantidad);

    switch (opcion)
    {
    case 1:
        resultado = cantidad * dolar_a_peso;
        printf("%.2f dólares son %.2f pesos.\n", cantidad, resultado);
        break;
    case 2:
        resultado = cantidad * peso_a_dolar;
        printf("%.2f pesos son %.2f dólares.\n", cantidad, resultado);
        break;
    case 3:
        resultado = cantidad * peso_a_euro;
        printf("%.2f pesos son %.2f euros.\n", cantidad, resultado);
        break;
    case 4:
        resultado = cantidad * euro_a_peso;
        printf("%.2f euros son %.2f pesos.\n", cantidad, resultado);
        break;
    case 5:
        resultado = cantidad * dolar_a_euro;
        printf("%.2f dólares son %.2f euros.\n", cantidad, resultado);
        break;
    case 6:
        resultado = cantidad * euro_a_dolar;
        printf("%.2f euros son %.2f dólares.\n", cantidad, resultado);
        break;
    default:
        printf("Opción no válida.\n");
    }

    return 0;
}