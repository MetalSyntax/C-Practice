#include "Header.h"
/**27.	Diseñar un algoritmo que permita ingresar un valor inicial y luego un valor final, para luego calcular el valor central de los números */
void E27(void){
	system("cls");
	float n1,n2,n3;
	printf("Valor Incial \n");
	scanf("%f",&n1);
	printf("Valor Final \n");
	scanf("%f",&n2);
	n3 = (n1+n2)/2;
	printf("Valor Central %f \n",n3);
	system("pause");
	system("cls");
}
