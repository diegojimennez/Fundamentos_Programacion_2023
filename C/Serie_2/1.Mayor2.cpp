#include <stdio.h>

int main()
{

    float n1, n2;

    /*Solicitar los números*/
    printf("Dame el primer numero:\n");
    scanf("%f", &n1);
    printf("Dame el segundo numero:\n");
    scanf("%f", &n2);

    if (n1 > n2)
    {
        printf("El numero %.2f es mayor que %.2f.\n", n1, n2);
    }
    else if (n2 > n1)
    {
        printf("El nuemro %.2f es mayor que %.2f.\n", n2, n1);
    }
    else
    {
        printf("los numeros %.2f y %.2f son iguales.\n", n1, n2);
    }

    return 0;
}