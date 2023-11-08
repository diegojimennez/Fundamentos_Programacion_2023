#include <stdio.h>

int main()
{
    int n1, n2, n3, n4;

    printf("Dame el primer numero: ");
    scanf("%d", &n1);
    printf("Dame el segundo numero: ");
    scanf("%d", &n2);
    printf("Dame el tercer numero: ");
    scanf("%d", &n3);
    printf("Dame el cuarto numero: ");
    scanf("%d", &n4);

    int men = n1;

    if (n2 < men)
    {
        men = n2;
    }
    if (n3 < men)
    {
        men = n3;
    }
    if (n4 < men)
    {
        men = n4;
    }
    if (n1 == n2 && n2 == n3 && n3 == n4)
    {
        printf("Todos los numeros son iguales.\n");
    }
    else
    {
        printf("El numero menor es: %d\n", men);
    }

    return 0;
}