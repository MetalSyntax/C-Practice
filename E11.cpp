#include "Header.h"
/*11.	Leer el nombre de un empleado, el salario básico por hora y el número de horas trabajadas durante la semana. Calcular el salario neto, teniendo en cuenta que si el numero de 
horas trabajadas durante la semana es mayor de 48, esas horas de mas se consideran horas extras y tienen un 35% de recargo. Imprima el nombre del empleado y el salario neto*/
void E11(void){
	system("cls");
	char n [20];
	float sbph, ndht, sn;
	printf("Nombre \n");
	scanf("%s",n);
	printf("Salario basico por Hora \n");
	scanf("%f",&sbph);
	printf("Hora trabajadas \n");
	scanf("%f",&ndht);
	if (ndht<48){
		sn=sbph*ndht;
	}
	if (ndht>48){
		sn=(sbph*ndht)*1.35;
	}
	printf("Salario Neto es = %0.0f \n",sn);
	system("pause");
	system("cls");
}
