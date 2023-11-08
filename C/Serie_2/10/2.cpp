#include <stdio.h>

int main()
{

    float calif;

    printf("Dame tu calificacion: ");
    scanf("%f", &calif);

    switch ((int)calif)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        printf("No Aprobado.\n");
        break;

    case 5:
    case 6:
        printf("Aprobado.\n");
        break;

    case 7:
    case 8:
        printf("Notable.\n");
        break;

    case 9:
        printf("Sobresaliente.\n");
        break;

    case 10:
        printf("Excelente.\n");

    default:
        printf("Calificacion no valida.\n");
        break;
    }

    return 0;
}