#include "Header.h"
//3.	Lea el nombre y la edad de cualquier persona e imprima si y solo si la persona es menor de edad un mensaje que diga 'no puede votar'
void E3(void){
	system("cls");
	int e;
	char n [20];
	printf("Nombre \n");
	scanf("%s",n);
	printf("Edad \n");
	scanf("%d",&e);
	if (e<18){
		printf("No puede Votar");
	}else{
		printf("Su nombre es = %s \n",n);
		printf("Su edad es = %d \n",e);
	}
	system("pause");
	system("cls");
}
