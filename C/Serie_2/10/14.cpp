#include <stdio.h>

int main()
{
    int num[5];
    int op;
    int res;

    printf("Dame los cinco numeros separados por espacios:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }

    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");
    printf("Elige una opcion:\n");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        res = 0;
        for (int i = 0; i < 5; i++)
        {
            res += num[i];
        }
        printf("La suma de los numeros es: %d\n", res);
        break;
    case 2:
        res = num[0];
        for (int i = 0; i < 5; i++)
        {
            res -= num[i];
        }
        printf("La resta de los numeros es: %d\n", res);
        break;
    case 3:
        res = 1;
        for (int i = 0; i < 5; i++)
        {
            res *= num[i];
        }
        printf("La multiplicacion de los numeros es: %d\n", res);
        break;
    case 4:
        res = num[0];
        for (int i = 1; i < 5; i++)
        {
            if (num[i] == 0)
            {
                printf("ERROR. No se puede dividir entre cero.\n");
                return 1;
            }
            res /= num[i];
        }
        printf("La division de los numeros es: %d\n", res);
        break;
    default:
        printf("opcion no valida.\n");
        break;
    }

    return 0;
}