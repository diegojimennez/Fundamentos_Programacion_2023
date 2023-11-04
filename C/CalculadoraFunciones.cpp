#include <stdio.h>

float suma(float a, float b)
{
    return a + b;
}

float resta(float a, float b)
{
    return a - b;
}

float multiplicacion(float a, float b)
{
    return a * b;
}

float division(float a, float b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        printf("No se puede dividir entre cero.\n");
        return 0.0;
    }
}

int main()
{
    float n1, n2;
    char op;

    printf("Dame la operacion:\n");
    scanf("%f %c %f", &n1, &op, &n2);

    switch (op)
    {
    case '+':
        printf("Resultado: %.2f\n", suma(n1, n2));
        break;
    case '-':
        printf("Resultado: %.2f\n", resta(n1, n2));
        break;
    case '*':
        printf("Resultado: %.2f\n", multiplicacion(n1, n2));
        break;
    case '/':
        printf("Resultado: %.2f\n", division(n1, n2));
        break;
    default:
        printf("Operador no válido.\n");
    }

    return 0;
}