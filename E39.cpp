#include "Header.h"
/**39.	Un vendedor recibe un sueldo base más un 10% extra por comisión de sus ventas, 
el vendedor desea saber cuánto dinero obtendrá por concepto de comisiones por las tres ventas que realiza en el mes 
y el total que recibirá en el mes tomando en cuenta su sueldo base y comisiones.*/
void E39(void){
	system("cls");
	float sb,c1,c2,c3,t,c;
	printf("Sueldo Base \n");
	scanf ("%f",&sb);
	printf("Venta: 1 \n");
	scanf("%f",&c1);
	printf("Venta: 2 \n");
	scanf("%f",&c2);
	printf("Venta: 3 \n");
	scanf("%f",&c3);
	c = (c1+c2+c3)*0.10;
	t = sb + c;
	printf("Comision %f",c);
	printf("Total del Mes %0.2f",t);
	system("pause");
	system("cls");	
}
