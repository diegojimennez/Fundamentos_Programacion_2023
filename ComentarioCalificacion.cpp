#include<stdio.h>

int main(){
	
	float calif;

	printf("Dame tu calificacion: ");
	scanf("%f",&calif);

	if(calif<0 || calif>10){
		printf("Calificacion incorrecta");
	}

	if(calif>0 && calif<6){
		printf("Reprobaste ve ahorrando para un puesto de carnitas");
	}
	if(calif>=6 && calif<7){
		printf("Panzaste, apenitas");
	}
	if(calif>=7 && calif<8){
		printf("Regular, muy tibio");
	}
	if(calif>=8 && calif<9){
		printf("Bueno pero puedes mejorar");
	}
	if(calif>=9 && calif<10){
		printf("es tu obligacion");
	}
	if(calif==10){
		printf("Denle su titulo");
	}
	
	return 0;

}
