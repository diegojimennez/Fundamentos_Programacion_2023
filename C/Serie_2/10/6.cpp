#include <stdio.h>

int main()
{

    int num[3];
    int mayor, menor;

    for (int i = 0; i < 3; i++)
    {
        printf("Dame el %d numero: ", i + 1);
        scanf("%d", &num[i]);
    }

    mayor = menor = num[1];

    for (int i = 0; i < 3; i++)
    {
        if (num[i] > mayor)
        {
            mayor = num[i];
        }
        if (num[i] < menor)
        {
            menor = num[i];
        }
    }
    printf("El numero mayor es: %d\n", mayor);
    printf("El numero menor es: %d\n", menor);

    return 0;
}