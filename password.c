#include <stdio.h>
#include <unistd.h>
#include <termios.h>
#include <stdlib.h>
#include <string.h>

void password()
{
	char a[10],pass[10] = "clave";
	int i=0,flag=3;
	struct termios old, new;
	tcgetattr(0,&old);
	new=old;
	new.c_lflag=0;
	tcsetattr(0,TCSANOW,&new);
	do
		{
			system("clear");
			printf("ingrese su pass de 8 digitos(%d intentos)\n",flag);
			while(a[i]!=10)
				{
					a[i]=getchar();
					if((a[i]>96 && a[i]<123) || (a[i]>64 && a[i]<91) || (a[i]>47 && a[i]<58))
						{
							printf("*");
							i++;
						}
					if(a[i]==127)
						{
							flag++;
							a[i]=10;
						}
					if(i>10)
						{
							i=10;
						}
					if(i<0)
						{
							i=0;
						}
				}
			a[i]='\0';
			i=0;
			if(strcmp(pass,a)!=0) 
			{
				(flag=flag-1);
				
			}
			
			if(flag==0)
				{
					system("clear");
					tcsetattr(0, TCSANOW, &old);
					printf("Error: Cantidad maxima de intentos excedida");
					getchar();
					exit(1);
						
				}
		
		}
	while(strcmp(pass,a)!=0);
	tcsetattr(0, TCSANOW, &old);
	system("clear");
	printf("Bienvenido al sistema\n");
	getchar();
}
