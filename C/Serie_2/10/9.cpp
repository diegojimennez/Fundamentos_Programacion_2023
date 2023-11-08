#include <stdio.h>

int main()
{
    int n1, n2, n3;

    printf("Dame el primer numero: ");
    scanf("%d", &n1);
    printf("Dame el segundo numero: ");
    scanf("%d", &n2);
    printf("Dame el tercer numero: ");
    scanf("%d", &n3);

    if (n1 == n2 && n2 == n3)
    {
        printf("Los numeros son iguales.\n");
    }
    else
    {
        printf("Los numeros no son iguales.\n");
    }

    return 0;
}