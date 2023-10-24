// in = cm, yd = m, ft = cm

#include<stdio.h>

int main(){
	float in, c, y, m, ft, cm;
	printf("Dame las pulgadas:\n");
	scanf("%f", &in);
	
	c = 2.54 * in;
	printf("%.2f pulgadas = %.2f centimetros.\n", in, c);
	
	printf("Dame las yardas:\n");
	scanf("%f", &y);
	
	m = 0.9144 * y;
	printf("%.2f yardas = %.2f metros.\n", y, m);
	
	printf("Dame los pies:\n");
	scanf("%f", & ft);
	
	cm = 30.48 * y;
	printf("%.2f pies = %.2f centimetros.\n", ft, cm);
		
	return 0;
}

