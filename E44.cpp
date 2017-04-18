#include "Header.h"
/**44.	Dada una cantidad en bolívares, obtener la equivalencia en dólares, asumiendo que la unidad cambiaría es un dato desconocido.*/
void E44(void){
	system("cls");
	float bs,d;
	printf("Ingrese Bs \n");
	scanf("%f",&bs);
	/*Tasa de Dolar Today = 4300*/
	d = bs / 4300;
	printf("Dolares %0.2f \n",d);
	system("pause");
	system("cls");	
}
