#include <stdio.h>
#include <math.h>

int main()
{
    int op;
    double a;

    printf("Seleccione la figura para calcular el área:\n");
    printf("1. Triángulo\n");
    printf("2. Rectángulo\n");
    printf("3. Círculo\n");
    printf("Ingrese el número de la figura: ");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        double base, altura;
        printf("Ingrese la base del triángulo: ");
        scanf("%lf", &base);
        printf("Ingrese la altura del triángulo: ");
        scanf("%lf", &altura);
        a = 0.5 * base * altura;
        printf("El área del triángulo es: %.2lf\n", a);
        break;
    case 2:
        double ancho, largo;
        printf("Ingrese el ancho del rectángulo: ");
        scanf("%lf", &ancho);
        printf("Ingrese el largo del rectángulo: ");
        scanf("%lf", &largo);
        a = ancho * largo;
        printf("El área del rectángulo es: %.2lf\n", a);
        break;
    case 3:
        double radio;
        printf("Ingrese el radio del círculo: ");
        scanf("%lf", &radio);
        a = M_PI * pow(radio, 2);
        printf("El área del círculo es: %.2lf\n", a);
        break;
    default:
        printf("Opción no válida. Por favor, seleccione una figura válida (1-3).\n");
        break;
    }

    return 0;
}
