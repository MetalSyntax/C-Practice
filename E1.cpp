#include "Header.h"

//1.	Lea el nombre y la edad de cualquier persona e imprima la edad
void E1(void){
	system("cls");
	int e;
	char n[20];
	printf("Nombre \n");
	scanf("%s",n);
	printf("Edad \n");
	scanf("%d",&e);
	printf("Su edad es = %d",e);
	system("pause");
	system("cls");
}
