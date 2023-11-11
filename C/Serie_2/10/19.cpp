#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Función para generar un número aleatorio entre min y max
int generarAleatorio(int min, int max)
{
    return min + rand() % (max + 1 - min);
}

int main()
{
    srand(time(0)); // Inicializar la semilla para la generación de números aleatorios

    float totalCompra = 0.0;
    printf("Introduce el total de la compra: ");
    scanf("%f", &totalCompra);

    int bolita = generarAleatorio(1, 5); // Generar un número aleatorio entre 1 y 5

    float descuento = 0.0;
    const char *color;
    switch (bolita)
    {
    case 1: // Bolita Negra
        descuento = 0.10;
        color = "Negro";
        break;
    case 2: // Bolita Verde
        descuento = 0.25;
        color = "Verde";
        break;
    case 3: // Bolita Amarilla
        descuento = 0.50;
        color = "Amarillo";
        break;
    case 4: // Bolita Azul
        descuento = 0.75;
        color = "Azul";
        break;
    case 5: // Bolita Roja
        descuento = 1.00;
        color = "Rojo";
        break;
    }

    printf("Sacaste una bolita de color %s, por lo que obtienes un descuento del %.0f%%\n", color, descuento * 100);

    float totalFinal = totalCompra * (1 - descuento);
    printf("El total después del descuento es: %.2f\n", totalFinal);

    return 0;
}
