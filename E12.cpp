#include "Header.h"
//12.	lea el nombre y la edad de cualquier persona e imprima solo si la persona es mayor de edad, el nombre de la persona, de lo contrario, imprima un mensaje que diga 'no puede votar'
void E12(void){
	system("cls");
	char n [20]; int e;
	printf("Inserte Nombre \n");
	scanf("%s",&n);
	printf("Inserte Edad \n");
	scanf("%d",&e);
	if (e>=18){
		printf("Su nombr es = %s \n",n);
	} else {
		printf("No puede votar");
	}
	system("pause");
	system("cls");
}
