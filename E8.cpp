#include "Header.h"
//8.	Lea dos números e imprima ambos números solo si son de diferente signo y distintos de cero
void E8(void){
	system("cls");
	float n1,n2;
	printf("Ingrese un Numero \n");
	scanf("%f",&n1);
	printf("Otro Numero \n");
	scanf("%f",&n2);
	if ((n1>0 && n2<0) || (n1<0 && n2>0)){
		printf("N1 = %0.2f",n1);
		printf("N2 = %0.2f",n2);
	}
	system("pause");
	system("cls");
}
