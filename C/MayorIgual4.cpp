#include <stdio.h>

int main()
{

    /*Declarar variables*/
    float n1, n2, n3, n4;

    /*Solicitar Variables*/
    printf("Dame el primer numero: ");
    scanf("%f", &n1);
    printf("Dame el segundo numero: ");
    scanf("%f", &n2);
    printf("Dame el tercer numero: ");
    scanf("%f", &n3);
    printf("Dame el cuarto numero: ");
    scanf("%f", &n4);

    /*Inicia suponiendo que todos los numeros iguales*/
    if (n1 == n2 && n2 == n3 && n3 == n4)
    {
        printf("Los cuatro numeros son iguales.\n");
    }
    else
    {
        /*Suponemos que el primer número es el mayor*/
        int mayor = n1;

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

        printf("El numero mayor es: %d\n", mayor);
    }

    return 0;
}