#include <stdio.h>

int main()
{
    int n[5];
    int orden = 1;

    printf("Dame los numeros separados por espacios:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &n[i]);
    }
    for (int i = 1; i < 5; i++)
    {
        if (n[i] < n[i - 1])
        {
            orden = 0;
            break;
        }
    }
    if (orden)
    {
        printf("Los numeros estan bien ordenados.\n");
    }
    else
    {
        printf("Los numero no estan ordenados.\n");
    }

    return 0;
}