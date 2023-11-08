#include <stdio.h>

int main()
{
    int filas, columnas;
    int numero_buscar;

    printf("Ingrese el número de filas y columnas del arreglo bidimensional: ");
    scanf("%d %d", &filas, &columnas);

    int arreglo[filas][columnas];

    printf("Ingrese los elementos del arreglo bidimensional:\n");
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            scanf("%d", &arreglo[i][j]);
        }
    }

    printf("Ingrese el número que desea buscar: ");
    scanf("%d", &numero_buscar);

    int encontrado = 0; // Variable para indicar si se encontró el número

    // Recorremos el arreglo para buscar el número
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            if (arreglo[i][j] == numero_buscar)
            {
                printf("El número %d se encuentra en la posición (%d, %d) del arreglo.\n", numero_buscar, i, j);
                encontrado = 1; // Indicamos que se encontró el número
            }
        }
    }

    if (!encontrado)
    {
        printf("El número %d no se encuentra en el arreglo.\n", numero_buscar);
    }

    return 0;
}