#include "Header.h"
/**29.	Diseñar un algoritmo que permita determinar si un numero ingresado desde el teclado es un numero par o impar */
void E29(void){
	system("cls");
	int n;
	printf("Numero:\n");
	scanf("%d", &n);
	if (n % 2 == 0) {
		printf("Es par \n");
	} else {
		printf("Es impar \n");
	}
	system("pause");
	system("cls");
}
