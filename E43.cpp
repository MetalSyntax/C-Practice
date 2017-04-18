#include "Header.h"
/**43.	Realizar un algoritmo que calcule la edad de una persona.*/
void E43(void){
	system("cls");
	int an,aa,e;
	printf("Digite el anio de nacimiento \n");
	scanf("%d",&an);
	printf("Digite el anio actual \n");
	scanf("%d",&aa);
	e = aa - an;
	printf("Edad %d \n",e);
	system("pause");
	system("cls");	
}
