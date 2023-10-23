#include<stdio.h>

int main(){
	
int calif;

printf("Dame tu calificacion de tipo entero: ");
scanf("%d",&calif);

switch(calif){
	
	case 0:
		case 1:
			case 2:
				case 3:
					case 4:
						case 5:
							printf("Reprobaste");
							break;
	case 6:
		printf("Panzaste");
		break;
	case 7:
		printf("Muy tibio");
		break;
	case 8:
		printf("Bien pero puedes mejorar");
		break;
	case 9:
		printf("Es tu obligacion");
		break;
	case 10:
		printf("Denle su titulo");
		break;
	default:
		printf("Calificacion incorrecta")	;
		break;
	
}
}

