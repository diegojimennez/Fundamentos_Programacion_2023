#include <stdio.h>
#include <string.h>

int main()
{
    char bin[6];
    printf("Ingrese un número bin de 5 bits: ");
    scanf("%s", bin);

    // Verificar si el número tiene 5 bits
    if (strlen(bin) != 5)
    {
        printf("El número bin debe tener exactamente 5 bits.\n");
        return 1; // Salir del programa con un código de error
    }

    // Complemento a uno: cambiar 0s a 1s y 1s a 0s
    for (int i = 0; i < 5; i++)
    {
        if (bin[i] == '0')
        {
            bin[i] = '1';
        }
        else if (bin[i] == '1')
        {
            bin[i] = '0';
        }
    }

    // Complemento a dos: sumar 1 al complemento a uno
    int acarreo = 1;
    for (int i = 4; i >= 0; i--)
    {
        if (bin[i] == '0' && acarreo == 1)
        {
            bin[i] = '1';
            acarreo = 0;
        }
        else if (bin[i] == '1' && acarreo == 1)
        {
            bin[i] = '0';
        }
    }

    printf("El complemento a dos es: %s\n", bin);

    return 0;
}