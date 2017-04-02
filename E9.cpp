#include "Header.h"
/*9.	Lea un número y calcule e imprima el cuadrado del número y su raíz cuadrada. 
Si el numero es negativo imprima el numero, el cuadrado del numero y un mensaje que diga 'tiene raíz imaginaria'*/
void E9 (void){
	system("cls");
	float n1,rc,cn;
	printf("Ingrese un Numero \n");
	scanf("%f",&n1);
	cn=pow(n1,2);
	printf("El cuadrado del numero es = %0.2f \n",cn);
	if (n1<0){
		printf("La raiz es Negativa \n");
	} else {
		rc=sqrt(n1);
		printf("Su raiz es = %0.2f \n",rc);
	}
	system("pause");
	system("cls");
}
