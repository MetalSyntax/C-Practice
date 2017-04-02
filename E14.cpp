#include "Header.h"
//14.	Lea el nombre, la edad, el sexo y el estado civil de cualquier persona e imprima solo si la persona es un hombre soltero mayor de edad, el nombre de la persona.
void E14(void){
	system("cls");
	char n [20]; int e,s,ec;
	printf("Inserte Nombre \n");
	scanf("%s",&n);
	printf("Inserte Edad \n");
	scanf("%d",&e);
	printf("Inserte Sexo 1-Hombre 2-Mujer \n");
	scanf("%d",&s);
	printf("Inserte Estado Civil 1-Soltero 2-Casado \n");
	scanf("%d",&ec);
	if(s==1 && e>18 && ec==1){
		printf("Su nombre es = %s \n",n);
	} else{
		
	}
	system("pause");
	system("cls");
}
