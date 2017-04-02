#include "Header.h"

//5.	Lea dos números e imprima solo los positivos
void E5(void){
	system("cls");
	float n1,n2;
	printf("Ingrese un Numero \n");
	scanf("%f",&n1);
	printf("Otro Numero \n");
	scanf("%f",&n2);
	if (n1>0){
		printf("Primer Numero = %0.2f",n1);
	}
	if (n2>0){
		printf("Segundo Numero = %0.2f",n2);
	}
	system("pause");
	system("cls");
}
