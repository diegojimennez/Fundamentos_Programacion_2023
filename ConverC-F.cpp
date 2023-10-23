// Conversion C a F

#include<stdio.h>

int main(){
	//Declarar la variable de los gragos Celsius
	float c;
	
	//Solicitar la temperatura grados Celsius
	printf("Dame la temperatura en grados Celsius: \n");
	scanf("%f", &c);
	
	//Realizar conversion
	float f = (c * (9 / 5)) + 32;
	
	//Mostrar resultados
	printf("%.2f grados Celsius, equivalen a %.2f grados Fahrenheit.", c, f);
	
	return 0;
}

