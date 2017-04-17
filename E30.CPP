#include "Header.h"
/**30.	Realizar un algoritmo que permita ingresar un número determinado de segundos y lo convierta en horas, minutos y segundos.*/
void E30(void){
	system("cls");
	int n,s,m,h;
	printf("Numero de Segundos: \n");
	scanf("%d",&n);
	h = n/3600;
	m = ((n-h*3600)/60);
	s = n - (h*3600 + m*60);
	printf("H = %d \n M = %d \n S = %d \n",h,m,s);
	system("pause");
	system("cls");
}
