#include "Header.h"
//4.	Lea el nombre y la edad de cualquier persona e imprima solo si la persona es mayor de edad, el nombre de la persona
void E4(void){
	system("cls");
	int e;
	char n [20];
	printf("Nombre \n");
	scanf("%s", n);
	printf("Edad \n");
	scanf("%d", &e);
	if (e>18){
		printf("Nombre = %s \n",n);
	}else{
		
	}
	system("pause");
	system("cls");
}
