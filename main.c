#include <stdio.h>
#include <unistd.h>
#include <termios.h>
#include <stdlib.h>
#include <string.h>
void password();


int main (){
	//ingreso
	password();
	
	//menu
	int secuencia;
	printf("Bem vindo manito\n");
	printf("Ingrese la secuencia de leds que desea implementar:\n");
	printf(" (1)Secuencia Auto Fantástico\n (2)Secuencia El Choque\n (3)Secuencia La Apilada\n (4)Secuencia La Carrera\n");
	printf(" (5)Secuencia \n (6)Secuencia \n (7)Secuencia \n (8)Secuencia \n");
	scanf("%d", &secuencia);
	
	//etapa selectora
	switch(secuencia){
		case 1: printf("Ejecutando Auto Fantástico\n");
		break;
		case 2: printf("Ejecutando El Choque\n");
		break;
		case 3: printf("Ejecutando La Apilada\n");
		break;
		case 4: printf("Ejecutando La Carrera\n");
		break;
		default: printf("Chau pa\n");
		}
	
	return 0;
	}
	

