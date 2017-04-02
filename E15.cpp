#include "Header.h"
//15.	Lea dos números, calcule la suma de los números e imprima los números leídos y solo si la suma es negativa imprímala también
void E15(void){
	system("cls");
	float n1,n2,s;
	printf("Ingrese un Numero \n");
	scanf("%f",&n1);
	printf("Otro Numero \n");
	scanf("%f",&n2);
	s = n1 + n2;
	printf("La Suma es = %0.2f \n",s);
	system("pause");
	system("cls");
}
