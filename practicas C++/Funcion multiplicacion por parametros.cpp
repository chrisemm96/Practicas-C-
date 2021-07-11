/* Escriba una funcion llamada mult() que acepte dos numeros en punto
flotante como parametros, miltiplique estos dos nimeros y despliegue resultados.*/
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;
//Prototipos de funcion
void pedirDatos();
void mult (float x, float y);


float num1, num2;



int main(){
	pedirDatos();
	mult(num1,num2);

	


	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}

void pedirDatos(){
	cout<<"Digite dos numeros: ";
	cin>>num1>>num2;
		
}

void mult (float x, float y){
	float multiplicacion = x * y;
	
	cout<<"La multiplicacion es: "<<multiplicacion<<endl;
	
}
