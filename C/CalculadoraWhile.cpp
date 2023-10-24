/*CALCULADORA*/

#include <stdio.h>
#include <math.h>

main()
{

    float n1, n2;
    int op;
    printf("Dame un numero: ");
    scanf("%f", &n1);
    printf("Dame otro numero: ");
    scanf("%f", &n2);

    do
    {

        printf("\nElige una operacion:\n ");
        printf("1. sumar\n");
        printf("2. restar\n");
        printf("3. multiplicar\n");
        printf("4. dividir\n");
        printf("5. modulo\n");
        printf("6. valor absoluto (Se tomara el primer numero)\n");
        printf("7. raiz cuadrada (se tomara el primer numero)\n");
        printf("8. potencia (primer numero elevado al segundo )\n");
        printf("9. salir\n");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("LA suma es %.3f", n1 + n2);
            break;
        case 2:
            printf("LA resta es %.3f", n1 - n2);
            break;
        case 3:
            printf("LA multiplicacion es %.3f", n1 * n2);
            break;
        case 4:
            while (n2 == 0)
            {
                printf("No se puede dividir entre 0\n");
                printf("Dame otro numero: ");
                scanf("%f", &n2);
            }
            printf("LA division es %.3f", n1 / n2);
            break;
        case 5:
            printf("El modulo es %d", (int)n1 % (int)n2);
            break;
        case 6:
            if (n1 < 0)
                n1 = -1 * n1;
            printf("El valor absoluto es %.3f", n1);
            break;
        case 7:
            while (n1 < 0)
            {
                printf("Dame un valor positivo");
                printf("Dame un numero: ");
                scanf("%f", &n1);
            }
            printf("La raiz del numero es %.3f", sqrt(n1));
            break;
        case 8:
            printf("La potencia es %.3f", pow(n1, n2));
            break;
        case 9:
            printf("adios   :)");
            break;
        }

    } while (op < 9);
}