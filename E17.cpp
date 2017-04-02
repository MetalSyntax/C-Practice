#include "Header.h"
/*17.	Lea dos números y calcule el cociente de dividir el primero por el segundo, imprima el cociente. 
Si el segundo es cero no ejecute el cálculo e imprima un mensaje que diga: 'la división no es posible'*/
void E17(void){
	system("cls");
	float n1,n2,d;
	printf("Numero 1 \n");
	scanf("%f", &n1);
	printf("Numero 2 \n");
	scanf("%f", &n2);
	if (n2==0){
		printf("La Division no es Posible \n");
	} else {
		d=n1/n2;
		printf("Cociente = %0.2f \n",d);
	}
	system("pause");
	system("cls");
}
