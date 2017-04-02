#include "Header.h"
/**23.	Para un salario bruto de hasta 75.000 Bs. no hay retención. Para un salario bruto de 75.000bs a 150.000bs el porcentaje de retención es de 5%. 
Para un salario bruto mayor a 150.000bs el porcentaje e retención es de 8%. Obtener el nombre del empleado, el salario bruto, el valor de la retención y el salario neto. 
Se debe leer el nombre y el salario bruto. Nota: valor de retención = salario bruto * porcentaje de retención, salario neto = salario bruto - valor de retención.*/
void E23(void){
	system("cls");
	char n[20];
	float prf,sb,vr,sn;
	sn =0;
	vr =0;
	printf("Nombre de un empleado \n");
	scanf("%s", n);
	printf("Salario Bruto \n");
	scanf ("%f", &sb);
	if (sb<75000){
		prf=0;
		vr=sb*prf;
		sn=sb-vr;
	} 
	if (sb>75000 && sb<150000){
		prf=0.05;
		vr=sb*prf;
		sn=sb-vr;
	}
	if (sb>150000){
		prf=0.08;
		vr=sb*prf;
		sn=sb-vr;
	}
	printf("Nombre: %s\n",n);
	printf("Salario Bruto: %0.2f \n",sb);
	printf("Valor de Retencion: %0.2f \n",vr);
	printf("Salario Neto %0.2f \n",sn);
	
	system("pause");
	system("cls");
}
