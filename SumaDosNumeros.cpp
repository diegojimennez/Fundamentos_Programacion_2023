// SUMA DE DOS NÚMEROS

#include<stdio.h>

int main(){
	//Declara los valores para almacenar los dos números
	float n1, n2;
	
	//Solicitar los números al usuario
	printf("Dame un numero: ");
	scanf("%f", &n1);
	
	printf("Dame otro numero: ");
	scanf("%f", &n2);
	
	//Se calcula la suma de los números
	float suma = n1 + n2;
	
	//Muestra el resultado
	printf("La suma de %.2f y %.2f es: %.2f", n1, n2, suma);
	
	return 0;
}
