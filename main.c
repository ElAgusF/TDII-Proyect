//declaracion de librerias
#include <stdio.h>
#include <unistd.h>
#include <termios.h>
#include <stdlib.h>
#include <string.h>
#include <wiringPi.h>

//funciones externas
void password();

//declaracion leds
int LEDS [7] = {5,6,26,27,28,29,25}


int main (){

	//setup de wiringPi y declaracion de salidas
	wiringPiSeup();
	for(int i =0; i < 7 ; i++){
		pinMode(LEDS[i], OUTPUT);
	}

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
		case 1:
			system("clear");
			printf("Ejecutando Auto Fantástico\n");
			while(1){
				for(int i=0; i < 7; i++){
					digitalWrite(LEDS[i],HIGH);
					delay(50);
					digitalWrite(LEDS[i],LOW);
				}
				for(int i=7; i > -1; i--){
					digitalWrite(LEDS[i],HIGH);
					delay(50);
					digitalWrite(LEDS[i],LOW);
				}
			}
		break;
		case 2: 
			system("clear");
			printf("Ejecutando El Choque\n");
			while(1){
				int j=7;
				for(int i=0; i < 4;i++){
					digitalWrite(LEDS[i],HIGH);
					digitalWrite(LEDS[j],HIGH);
					delay(100);
					digitalWrite(LEDS[i],LOW);
					digitalWrite(LEDS[j--],LOW);
				}
				j=5;
				for(int i=2;i>0;i--){
					digitalWrite(LEDS[i],HIGH);
					digitalWrite(LEDS[j],HIGH);
					delay(100);
					digitalWrite(LEDS[i],LOW);
					digitalWrite(LEDS[j++],LOW);	
				}
			}
		break;
		case 3: 
			system("clear");
			printf("Ejecutando La Apilada\n");
			while(1){
				int count=0;
				for(int j = 7; j > -1 ; j--){
	
					for(int i = 0;i<7; i++){
		
						digitalWrite(LEDS[i],HIGH);
						delay(250);
			
						if(i>j)
						{
							//printf("deja prendidos %i leds\n",7-i);
							break;
						}
						else
						{
							digitalWrite(LEDS[i],LOW);
							delay(125);
						}
		
					}
			
					digitalWrite(LEDS[j],HIGH);
					count++;
					delay(250);
				}
			}
		break;
		case 4: 
			system("clear");
			printf("Ejecutando La Carrera\n");
			while(1){
				for(int i=0; i < 3; i++){
					digitalWrite(LEDS[i], HIGH);
					delay(250);
					digitalWrite(LEDS[i], LOW);
				}
				int j=0;
				for(int = 0; i < 3; i++){
					digitalWrite(LEDS[i+3],HIGH);
					digitalWrite(LEDS[i+j],HIGH);
					delay(125);
					digitalWrite(LEDS[i+j++],LOW);
					digitalWrite(LEDS[i+j],HIGH);
					delay(125);
					digitalWrite(LEDS[i+3],LOW);
					digitalWrite(LEDS[i+j],LOW);
				}
			}
		break;
		default: 
			system("clear");
			printf("Adios\n");
		}
	
	return 0;
	}
	

