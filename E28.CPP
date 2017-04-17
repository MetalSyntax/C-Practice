#include "Header.h"
/**28.	Averiguar si dado dos números, uno es divisor de otro. */
void E28(void){
	system("cls");
	int n1,n2;
	printf("Dividendo \n");
	scanf("%d",&n1);
	printf("Divisor \n");
	scanf("%d",&n2);
	if (n1 % n2 == 0){
		printf("%d es divisor de %d \n",n2,n1);
	} else {
		printf("No es Divisor \n");
	}
	system("pause");
	system("cls");
}
