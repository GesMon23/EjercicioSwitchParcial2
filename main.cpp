//Construir un programa que capture un deporte cualesquiera y despliegue dos implementos deportivos apropiados.
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	char opcion;
	printf("INGRESE EL DEPORTE QUE PRACTICA\n");
	printf("1. FUTBOL\n");
	printf("2. KARATE\n");
	printf("3. TENIS\n");
	printf("4. BASQUETBALL\n");
	printf("5. ESGRIMA\n");
	cin>>opcion;
	switch(opcion){
		case'1':
			printf("LOS IMPLEMENTOS NECESARIOS SON: \nMEDIAS\nBOTINES");
		break;
		case'2':
			printf("LOS IMPLEMENTOS NECESARIOS SON: \nUNIFORME\nGUANTES");
		break;
		case'3':
			printf("LOS IMPLEMENTOS NECESARIOS SON: \nRAQUETA\nPANTALON CORTO");
		break;
		case'4':
			printf("LOS IMPLEMENTOS NECESARIOS SON: \nZAPATOS TENNIS\n PANTALON CORTO");
		break;
		case'5':
			printf("LOS IMPLEMENTOS NECESARIOS SON: \nCARETA\nMEDIAS ");
		break;
		default: printf("INGRESE UNA OPCION VALIDA");
	}
	system("pause");
}
