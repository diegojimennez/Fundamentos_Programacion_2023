#include <stdio.h>

int main()
{

    /*Declarar las variables*/
    int n1, n2, n3;

    /*Pedir las variables*/
    printf("Dame el primer numero: ");
    scanf("%d", &n1);
    printf("Dame el segundo numero: ");
    scanf("%d", &n2);
    printf("Dame el tercer numero: ");
    scanf("%d", &n3);

    /*En caso de que no sean diferentes*/
    if (n1 == n2 && n2 == n3 && n1 == n3)
    {
        printf("los numeros son igulaes.\n");
    }
    else
    {
        int mayor, menor;

        /*Suponiendo que el primer numero es el mayor y el menor
        inicialmente*/
        mayor = menor = n1;

        if (n2 > mayor)
        {
            mayor = n2;
        }
        if (n2 < menor)
        {
            menor = n2;
        }
        if (n3 > mayor)
        {
            mayor = n3;
        }
        if (n3 < menor)
        {
            menor = n3;
        }

        printf("El numero mayor es: %d\n", mayor);
        printf("El numero menor es: %d\n", menor);
    }

    return 0;
}