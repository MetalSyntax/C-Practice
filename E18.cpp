#include "Header.h"
/**18.	Lea un numero e imprima el numero y el valor absoluto del mismo*/
void E18(void){
	system("cls");
	int n, va;
	va = 0;
	printf("Ingrese Numero \n");
	scanf("%d", &n);
	va = abs(n);
	printf("El valor adsoluto es = %d \n",n);
	system("pause");
	system("cls");
}
