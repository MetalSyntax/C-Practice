#include "Header.h"
//16.	Lea el nombre la edad, el sexo y el estado civil de cualquier persona e imprima, 
//solo si la persona es hombre o mujer menor de edad o es hombre casado de cualquier edad, el nombre de la persona y un mensaje que diga 'usted no se manda'
void E16(void){
	system("cls");
	char n[20];
	int e,s,ec;
	printf("Ingrese Nombre \n");
	scanf("%s", n);
	printf("Ingrese Edad \n");
	scanf("%d", &e);
	printf("Sexo 1=Hombre 2=Mujer \n");
	scanf("%d",&s);
	printf("Estado Civil 1=Soltero 2=Casado \n");
	scanf("%d", &ec);
	if ((e<18) || (s==1 && ec==2)){
		printf ("Nombre = %s \n",n);
		printf ("Usted No Se manda \n");
	} else {
		
	}
	system("pause");
	system("cls");
}
