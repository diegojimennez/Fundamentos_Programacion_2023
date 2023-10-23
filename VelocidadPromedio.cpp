// Velocidad Promedio

#include<stdio.h>

int main(){
	//Declarar la distancia y tiempo
	float d, t;
	
	//Solicitar distancia recorrida y tiempo
	printf("Dame la distancia en km: \n");
	scanf("%f", &d);
	
	printf("Dame el tiempo transcurrido en horas: \n");
	scanf("%f", &t);
	
	//Calcular velocidad promedio
	float vp = d / t;
	
	//Mostrar resultado
	printf("La velocidad promedio es: %.2f km/h. \n", vp);
	
	return 0;
}

