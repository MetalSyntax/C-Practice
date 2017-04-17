#include "Header.h"
/**31.	Realizar un algoritmo que permita ingresar la hora, minutos y segundos y que indique cuantos segundos son.   */
void E31(void){
	system("cls");
	int h,m,s,nh,nm,ns;
	printf("Ingrese la Hora \n");
	scanf("%d",&h);
	printf("Ingrese Los Minutos \n");
	scanf("%d",&m);
	printf("Ingrese Los Segundos \n");
	scanf("%d",&s);
	nh = h * 3600;
	nm = m * 60;
	ns = nh + nm + s;
	printf("Segundos %d",ns);
	system("pause");
	system("cls");
}
