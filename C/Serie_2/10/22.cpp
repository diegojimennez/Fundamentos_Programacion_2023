#include <stdio.h>
#include <string.h>

int main()
{
    char mes[10];
    int año;
    int bisiesto = 0;

    printf("Introduce el nombre o número del mes: ");
    scanf("%s", mes);

    printf("Introduce el año: ");
    scanf("%d", &año);

    if (año % 4 == 0)
    {
        if (año % 100 != 0 || año % 400 == 0)
        {
            bisiesto = 1;
        }
    }

    if (strcmp(mes, "Febrero") == 0 || strcmp(mes, "2") == 0)
    {
        if (bisiesto)
        {
            printf("Febrero tiene 29 días en un año bisiesto.\n");
        }
        else
        {
            printf("Febrero tiene 28 días en un año no bisiesto.\n");
        }
    }
    else if (strcmp(mes, "Abril") == 0 || strcmp(mes, "Junio") == 0 || strcmp(mes, "Septiembre") == 0 || strcmp(mes, "Noviembre") == 0 || strcmp(mes, "4") == 0 || strcmp(mes, "6") == 0 || strcmp(mes, "9") == 0 || strcmp(mes, "11") == 0)
    {
        printf("%s tiene 30 días.\n", mes);
    }
    else
    {
        printf("%s tiene 31 días.\n", mes);
    }

    return 0;
}