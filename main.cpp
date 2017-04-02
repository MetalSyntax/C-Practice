#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#include <math.h>
#include <windows.h>
#include "Header.h" //Cabecera Personalizada

using namespace std;

int main(void) {
	system("cls");
	int m;

	do{
		cout<<"Bienvenido"<<endl;
		cout<<"1. Ejercicio E1"<<endl;
		cout<<"2. Ejercicio E2"<<endl;
		cout<<"3. Ejercicio E3"<<endl;
		cout<<"4. Ejercicio E4"<<endl;
		cout<<"5. Ejercicio E5"<<endl;
		cout<<"6. Ejercicio E6"<<endl;
		cout<<"7. Ejercicio E7"<<endl;
		cout<<"8. Ejercicio E8"<<endl;
		cout<<"9. Ejercicio E9"<<endl;
		cout<<"10. Ejercicio E10"<<endl;
		cout<<"11. Ejercicio E11"<<endl;
		cout<<"12. Ejercicio E12"<<endl;
		cout<<"13. Ejercicio E13"<<endl;
		cout<<"14. Ejercicio E14"<<endl;
		cout<<"15. Ejercicio E15"<<endl;
		cout<<"16. Ejercicio E16"<<endl;
		cout<<"17. Ejercicio E17"<<endl;
		cout<<"18. Ejercicio E18"<<endl;
		cout<<"19. Ejercicio E19"<<endl;
		cout<<"20. Ejercicio E20"<<endl;
		cout<<"21. Ejercicio E21"<<endl;
		cout<<"22. Ejercicio E22"<<endl;
		cout<<"23. Ejercicio E23"<<endl;
		cout<<"24. Ejercicio E24"<<endl;
		cout<<"34. Ejercicio E24"<<endl;
		cout<<"256. Salir"<<endl;
		cout<<"Seleccione el ejemplo a Ejecutar"<<endl;
		cin>>m;
		switch (m){
		case 1: E1();
		break;
		case 2: E2();
		break;
		case 3: E3();
		break;
		case 4: E4();
		break;
		case 5: E5();
		break;
		case 6: E6();
		break;
		case 7: E7();
		break;
		case 8: E8();
		break;
		case 9: E9();
		break;
		case 10: E10();
		break;
		case 11: E11();
		break;
		case 12: E12();
		break;
		case 13: E13();
		break;
		case 14: E14();
		break;
		case 15: E15();
		break;
		case 16: E16();
		break;
		case 17: E17();
		break;
		case 18: E18();
		break;
		case 19: E19();
		break;
		case 20: E20();
		break;
		case 21: E21();
		break;
		case 22: E22();
		break;
		case 23: E23();
		break;
		case 24: E24();
		break;
		case 34: E34();
		break;
		default:;
		}
	} while (m != 256);
	system("cls");
	printf("Gracias, Vuelva Pronto \n");
	Sleep(1000);
	return 0;
}
