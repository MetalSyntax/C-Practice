#include "Header.h"
/**33.	Realizar el diseño de un algoritmo que permita: Ingresar el código del trabajor, Ingresar número de horas trabajadas, Ingresar el costo de la hora, 
Calcular el sueldo bruto semanal, Calcular el sueldo neto semanal, Imprimir el sueldo bruto y el sueldo neto, Respectivo (sueldo bruto menos el descuento del seguro de pensiones 11%)*/
void E33(void){
	system("cls");
	float c,nht,ch,d,sbs,sns;
	printf("Codigo del Trabajador \n");
	scanf("%f",&c);
	printf("Numero de horas trabajadas \n");
	scanf("%f",&nht);
	printf("Costo de la hora \n");
	scanf("%f",&ch);
	d = 0.11;
	sbs = nht*ch;
	sns = sbs-(sbs*d);
	printf("Sueldo bruto semanal %0.2f \n",sbs);
	printf("Sueldo neto semanal %0.2f \n",sns);
	system("pause");
	system("cls");
}
