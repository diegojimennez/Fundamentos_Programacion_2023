/*Division sin el 0*/

#include <stdio.h>

int main()
{

    float num, dem;

    printf("Ingresa el numerador:\n");
    scanf("%f", &num);

    printf("Ingresa el denominador:\n");
    scanf("%f", &dem);

    if (dem != 0)
    {

        float res = (float)num / dem;

        printf("El resultado es: %.2f\n", res);
    }
    else
    {

        printf("No es posible dividir entre 0.");
    }

    return 0;
}