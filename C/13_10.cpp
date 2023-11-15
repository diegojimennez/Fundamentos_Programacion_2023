#include <stdio.h>

typedef struct
{
    char nom[50];
    float cal;
} Estudiante;

int main()
{
    int n, i, suma = 0;
    float prom;

    printf("Introduce el número de estudiantes: ");
    scanf("%d", &n);

    Estudiante estudiantes[n];

    for (i = 0; i < n; i++)
    {
        printf("Introduce el nombre del estudiante %d: ", i + 1);
        scanf("%s", estudiantes[i].nom);
        printf("Introduce la calificación del estudiante %d: ", i + 1);
        scanf("%f", &estudiantes[i].cal);
        suma += estudiantes[i].cal;
    }

    prom = (float)suma / n;

    printf("El promedio de las calificaciones de los estudiantes es %.2f.\n", prom);

    return 0;
}