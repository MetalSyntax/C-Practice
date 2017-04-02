#include "Header.h"
/**19.	Leer el nombre de un empleado, su salario básico por hora y el número de horas trabajadas en el mes. 
Calcular su salario mensual e imprimir tanto el nombre como su salario mensual. Nota: salario mensual = salario básico por hora * número de horas trabajadas en el mes.*/
void E19(void){
	system("cls");
	char n[20];
	float sbh, nht,sm;
	printf("Nombre \n");
	scanf("%s", n);
	printf("Salario basico por hora \n");
	scanf("%f",&sbh);
	printf("Numero de horas trabajadas en el mes \n");
	scanf("%f", &nht);
	sm = sbh*nht;
	printf("Salario mensual %0.2f \n",sm);
	system("pause");
	system("cls");
}
