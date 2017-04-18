#include "Header.h"
/**40.	Una tienda ofrece un descuento del 15% sobre el total de la compra y un cliente desea saber cuánto deberá pagar finalmente por su compra.*/
void E40(void){
	system("cls");
	float c,ct;
	printf("Ingrese total de la compra \n");
	scanf("%f",&c);
	ct = c - c*0.15;
	printf("Total a pagar %0.2f \n",ct);
	system("pause");
	system("cls");	
}
