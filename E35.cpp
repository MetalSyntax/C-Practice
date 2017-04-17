#include "Header.h"
/**35.	Dado a, b determinar el valor de la división entera y el resto de la división entera de a, b (utilizando los operadores de div. o Mod) 
Escribir "Insertar Valor A"
Leer A
Escribir "Insertar Valor B"
Leer B
C<-A/B
D<-A mod B 
Escribir "El valor de la division es:",C "Y el resto",D
*/
void E35(void){
	system("cls");
	int a,b,c,d;
	printf("Valor A \n");
	scanf("%d",&a);
	printf("Valor B \n");
	scanf("%d",&b);
	c = a/b;
	d = a%b;
	printf("El valor de la division es: %d \n Y el resto %d \n",c,d);
	system("pause");
	system("cls");
}
