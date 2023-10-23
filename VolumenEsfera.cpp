// Volumen Esfera

#include <stdio.h>
#include <math.h>

int main()
{
	// Declarar radio de esfera
	double r;

	// Solicitar radio
	printf("Dame el radio de la esfera: \n");
	scanf("%lf", &r);

	// Calcular volumen
	double v = (4.0 / 3.0) * M_PI * pow(r, 3);

	// Mostrar el resultado
	printf("El volumen de la esfera es: %.2lf", v);

	return 0;
}
