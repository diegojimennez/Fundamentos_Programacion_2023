#include <stdio.h>

int main()
{
    int tempBaja, tempAlta, incremento;
    float fahrenheit, centigrados;

    printf("Introduce la temperatura más baja en grados Centígrados: ");
    scanf("%d", &tempBaja);

    printf("Introduce la temperatura más alta en grados Centígrados: ");
    scanf("%d", &tempAlta);

    printf("Introduce el incremento de temperatura: ");
    scanf("%d", &incremento);

    printf("\nCentígrados\tFahrenheit\n");

    for (centigrados = tempBaja; centigrados <= tempAlta; centigrados += incremento)
    {
        fahrenheit = ((9.0 / 5.0) * centigrados) + 32;
        printf("%6.2f\t\t%6.2f\n", centigrados, fahrenheit);
    }

    return 0;
}