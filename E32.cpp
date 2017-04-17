#include "Header.h"
/**32.	Diseñar un algoritmo que permita ingresar la hora, minutos y segundos y que calcule la hora en el siguiente segundo ("0=< H =<23", "0=< M =<59" "0=< S=<59"). */
void E32(void){
	system("cls");
	int h,m,s;
	printf("Hora \n");
	scanf("%d",&h);
	printf("Minutos \n");
	scanf("%d",&m);
	printf("Segundos \n");
	scanf("%d",&s);
	s=s+1;
	if (s>59){
	s=0;
	}
	m=m+1;
	if (m>59){
	m=0;
	}
	h=h+1;
	if (h>23){
	h=0;
	}
	printf("%d : %d : %d \n",h,m,s);
	system("pause");
	system("cls");
}
