#include "Header.h"
/**24.	Diseñar un algoritmo, que permita ingresar el dividendo y el divisor y que luego calcule el residuo y el cociente de dicha división. */
void E24(void){
	system("cls");
	int n1,n2,c,r;
	printf ("Numero 1 \n");
	scanf ("%d", &n1);
	printf ("Numero 2 \n");
	scanf ("%d", &n2);
	if (n2>0){
		c = n1/n2;
		r = n1%n2;
		printf("Residuo %d \n",r);
		printf("Cociente %d \n",c);
	}
	system("pause");
	system("cls");
}
