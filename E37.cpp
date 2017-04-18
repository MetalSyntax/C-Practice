#include "Header.h"
/**37.	Dado la duración (en minutos) de una llamada telefónica, calcular su costo, de la siguiente manera: Hasta 5 min. el costo es 0.90. 
Por encima de 5 min. el costo es 0.90+0.20 por cada minuto adicional a los 5 primeros min. */
void E37(void){
	system("cls");
	float m,c;
	printf("Minutos");
	scanf("%f",&m);
	if (m<5){
	c = m*0.90;
	}
	if (m>5){
	c = (5*0.90) + (0.20)*(m-5);
	}
	printf("Costo de llamada %0.2f \n",c);
	system("pause");
	system("cls");
}
