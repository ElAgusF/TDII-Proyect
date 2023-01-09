#include <stdio.h>

int main (){
	
	//menu
	int secuencia;
	printf("Bem vindo manito\n");
	printf("Ingrese la secuencia de leds que desea implementar:\n");
	printf(" (1)Secuencia Auto Fantástico\n (2)Secuencia El Choque\n (3)Secuencia La Apilada\n (4)Secuencia La Carrera\n");
	printf(" (5)Secuencia \n (6)Secuencia \n (7)Secuencia \n (8)Secuencia \n");
	scanf("%d", &secuencia);
	
	//etapa selectora
	switch(secuencia){
		case 1: printf("Ejecutando Auto Fantástico");
		break;
		case 2: printf("Ejecutando El Choque");
		break;
		case 3: printf("Ejecutando La Apilada");
		break;
		case 4: printf("Ejecutando La Carrera");
		break;
		default: printf("Chau pa");
		}
	
	return 0;
	}
