#include <stdio.h>

int main()
{

    float cal;

    printf("Dame tu calificacion: ");
    scanf("%f", &cal);

    if (cal >= 0 && cal < 5)
    {
        printf("No Aprobado.\n");
    }
    else if (cal >= 5 && cal < 7)
    {
        printf("Aprobado.\n");
    }
    else if (cal >= 7 && cal < 9)
    {
        printf("Notable.\n");
    }
    else if (cal >= 9 && cal < 10)
    {
        printf("Sobresaliente.\n");
    }
    else if (cal == 10)
    {
        printf("Excelente.\n");
    }
    else
    {
        printf("Calificacion No Valida.\n");
    }

    return 0;
}