#include <stdio.h>
#include <math.h>

int main()
{
    for (int i = 2; i <= 10; i++)
    {
        double power = pow(M_PI, i);
        double sqrt_power = sqrt(power);
        printf("Potencia %d de pi: %f, Raíz cuadrada: %f\n", i, power, sqrt_power);
    }
    return 0;
}