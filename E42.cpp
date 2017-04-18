#include "Header.h"
/**42.	Un maestro desea saber qué porcentaje de hombres y que porcentaje de mujeres hay en un grupo de estudiantes.*/
void E42(void){
	system("cls");
	float h,m,ph,pm,t;
	printf("Ingrese Hombres");
	scanf("%f",&h);
	printf("Ingrese Mujeres");
	scanf("%f",&m);
	t = h + m;
	ph = h/t*100;
	pm = m/t*100;
	printf("Porcentaje de Hombres %0.2f \n Porcentaje de Mujeres %0.2f \n",ph,pm);
	system("pause");
	system("cls");	
}
