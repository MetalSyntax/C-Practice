#include "Header.h"
/**20.	Lea un número y calcule e imprima su raíz cuadrada. Si el numero es negativo imprima el numero y un mensaje que diga 'tiene raíz imaginaria'*/
void E20(void){
	system("cls");
	float n,rc;
	printf ("Numero \n");
	scanf ("%f", &n);
	if (n<0){
		printf("La raiz es Imaginaria");
	} else {
		rc = sqrt(n);
		printf("Raiz Cuadrada %0.5f \n",rc);
	}
	system("pause");
	system("cls");
}
