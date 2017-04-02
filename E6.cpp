#include "Header.h"
//6.	Lea dos números calcule la suma e imprima la suma y los números leídos
void E6(void){
	system("cls");
	float n1,n2,n3;
	printf("Ingrese un Numero \n");
	scanf("%f",&n1);
	printf("Otro Numero \n");
	scanf("%f",&n2);
	n3=n1+n2;
	printf("La suma es = %0.2f",n3);
	system("pause");
	system("cls");
}
