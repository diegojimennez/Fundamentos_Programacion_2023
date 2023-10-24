#include <stdio.h>

int main()
{

    /*Declarar las variables*/
    float n[5], res; /*Array para almacenar los números*/
    int op;

    /*Solicitar las variables*/
    for (int i = 0; i < 5; i++)
    {
        printf("Dame el numero %d: ", i + 1);
        scanf("%f", &n[i]);
    }

    /*Menú de operaciones*/
    printf("\nOpciones:\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");
    printf("Dame tu opcion: ");
    scanf("%d", &op);

    /*Realizar las operaciones*/
    switch (op)
    {
    case 1:
        res = 0;
        for (int i = 0; i < 5; i++)
        {
            res += n[i];
        }
        printf("La suma es: %.2f\n", res);

        break;

    case 2:
        res = n[0];
        for (int i = 1; i < 5; i++)
        {
            res -= n[i];
        }
        printf("La resta es: %.2f\n", res);

        break;

    case 3:
        res = 1;
        for (int i = 0; i < 5; i++)
        {
            res *= n[i];
        }
        printf("La multiplicacion es: %.2f\n", res);

        break;

    case 4:
        res = n[0];
        for (int i = 0; i < 5; i++)
        {
            if (n[i] == 0)
            {
                printf("Dividir entre cero no es posible.\n");
                return 1;
            }

            res /= n[i];
        }

        printf("La division es: %.2f\n", res);

        break;

    default:
        printf("Opcion no valida.\n");
        break;
    }

    return 0;
}