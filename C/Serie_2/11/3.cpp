#include <stdio.h>

// Función para calcular la serie de Fibonacci hasta n
void fibonacci(int n)
{
    int a = 0, b = 1, c;

    printf("Serie de Fibonacci hasta %d:\n", n);
    printf("%d, %d, ", a, b);

    while (a + b <= n)
    {
        c = a + b;
        printf("%d, ", c);
        a = b;
        b = c;
    }

    printf("\n");
}

int main()
{
    int numero;

    // Solicitar al usuario el número hasta el cual se desea calcular la serie de Fibonacci
    printf("Ingrese un número para calcular la serie de Fibonacci: ");
    scanf("%d", &numero);

    // Verificar si el número ingresado es válido
    if (numero < 0)
    {
        printf("Por favor, ingrese un número no negativo.\n");
        return 1; // Salir del programa con un código de error
    }

    // Calcular y mostrar la serie de Fibonacci hasta el número dado
    fibonacci(numero);

    return 0;
}