#include "Header.h"
/**41.	Un estudiante desea saber cuál será su calificación final en la materia de Algoritmos. Dicha calificación se compone de los siguientes porcentajes:
55% del promedio de sus tres calificaciones parciales.
30% de la calificación del examen final. 
15% de la calificación de un trabajo final.
*/
void E41(void){
	system("cls");
	float c1,c2,c3,ef,tf,p,nf;
	printf("Ingrese calificacion 1 \n");
	scanf("%f",&c1);
	printf("Ingrese calificacion 2 \n");
	scanf("%f",&c2);
	printf("Ingrese calificacion 3 \n");
	scanf("%f",&c3);
	printf("Ingrese examen final \n");
	scanf("%f",&ef);
	printf("Ingrese trabajo final \n");
	scanf("%f",&tf);
	p = (c1+c2+c3)/3 *0.55;
	ef = ef * 0.30;
	tf = tf * 0.15;
	nf = p + ef + tf;
	printf("Promedio de calificaciones parciales %0.2f \n",p);
	printf("Examen Final %0.2f \n",ef);
	printf("Trabajo Final %0.2f \n",tf);
	printf("Nota Final %0.2f \n",nf);
	system("pause");
	system("cls");	
}
