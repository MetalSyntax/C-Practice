#include "Header.h"
//13.	lea el nombre, la edad y el sexo de cualquier persona e imprima, solo si la persona es de sexo masculino y mayor de edad, el nombre de la persona.
void E13(void){
	system("cls");
	char n [20]; int e,s;
	printf("Inserte Nombre \n");
	scanf("%s",&n);
	printf("Inserte Edad \n");
	scanf("%d",&e);
	printf("Inserte Sexo 1-Hombre 2-Mujer \n");
	scanf("%d",&s);
	if(s==1 && e>=18){
		printf("Su nombre es = %s \n",n);
	} else{
		
	}
	system("pause");
	system("cls");
}
