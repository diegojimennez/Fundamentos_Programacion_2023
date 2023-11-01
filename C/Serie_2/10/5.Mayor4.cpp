#include <stdio.h>

float n1, n2, n3, n4;

int main()
{
    printf("Dame el numero: ");
    scanf("%f", &n1);
    printf("Dame el numero: ");
    scanf("%f", &n2);
    printf("Dame el numero: ");
    scanf("%f", &n3);
    printf("Dame el numero: ");
    scanf("%f", &n4);

    float mayor = n1;

    if (n2 > mayor)
    {
        mayor = n2;
    }
    if (n3 > mayor)
    {
        mayor = n3;
    }
    if (n4 > mayor)
    {
        mayor = n4;
    }
    if (n1 == n2 && n2 == n3 && n3 == n4)
    {
        printf("Los numeros son iguales.\n");
    }
    else
    {
        printf("El numero mayor es: %.2f\n", mayor);
    }

    return 0;
}