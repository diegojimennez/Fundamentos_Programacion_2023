#include<stdio.h>

int main(){
	
	int n1,n2;
	printf("Dame un numero: ");
	scanf("%d",&n1);
	printf("Dame otro numero: ");
	scanf("%d",&n2);
	
	if(n1>n2){
		printf("El numero %d es mayor que %d",n1,n2);
	}
	else if(n2>n1){
		printf("El numero %d es mayor que %d",n2,n1);
	}
	else{
		printf("El numero %d es igual al numero %d",n2,n1);
	}
}
