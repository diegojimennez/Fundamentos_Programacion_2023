#include <stdio.h>

int main()
{
    int num[5];
    int op;
    int res;

    printf("Dame cinco numeros separados por espacios: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }

    printf("\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicación\n");
    printf("4. División\n");
    printf("Elija una opción:\n");
    scanf("%d", &op);

    if (op == 1)
    {
        res = 0;
        for (int i = 0; i < 5; i++)
        {
            res += num[i];
        }
        printf("La suma de los números es: %d\n", res);
    }
    else if (op == 2)
    {
        res = num[0];
        for (int i = 1; i < 5; i++)
        {
            res -= num[i];
        }
        printf("La resta de los números es: %d\n", res);
    }
    else if (op == 3)
    {
        res = 1;
        for (int i = 0; i < 5; i++)
        {
            res *= num[i];
        }
        printf("La multiplicación de los números es: %d\n", res);
    }
    else if (op == 4)
    {
        res = num[0];
        for (int i = 1; i < 5; i++)
        {
            if (num[i] == 0)
            {
                printf("Error: No se puede dividir por cero.\n");
                return 1;
            }
            res /= num[i];
        }
        printf("La división de los números es: %d\n", res);
    }
    else
    {
        printf("Opción no válida. Por favor, elija una opción válida (1-4).\n");
    }

    return 0;
}