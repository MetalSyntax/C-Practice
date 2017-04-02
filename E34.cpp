#include "Header.h"
/**34.	Escribir un algoritmo que determine si un año es bisiesto. Un año es bisiesto si es múltiplo de 4 (por ejemplo 1984). 
Los años múltiplos de 100 no son bisiestos, salvo si ellos son también múltiplos de 400 (2000 es bisiesto, pero;  1800 no lo es).**/
void E34(void){
	system("cls");
	int a;
	printf("Ingrese el anio \n");
	scanf("%d", &a);
	if (a % 4 == 0 && (a % 100 != 0 || a % 400 == 0)){
		printf ("El anio %d es bisiesto \n",a);
	} else {
		printf ("El anio %d no es bisiesto \n",a);
	}
	system("pause");
	system("cls");
}
