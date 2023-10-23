// ÁREA DE UN TRIANGULO

#include<stdio.h>

int main(){
	//Declarar las variables de base y altuara
	float b,h;
	
	//Solicitar las variables
	printf("¿Cual es la base del triangulo?\n");
	scanf("%f", &b);
	
	printf("¿Cual es la altura del triangulo?\n");
	scanf("%f", &h);
	
	//Calcular el área 
	float a = (b * h) / 2;
	
	//Mostrar resultado
	printf("El area del triangulo es: %.2f", a);
	
	return 0;
}
