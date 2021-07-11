/*Escriba una funcion llamada al_cuadrado() que calcule el cuadrado del 
valor que se le transmite y despliegue el resultado. La funcion debera ser
capaz de elevar al cuadrado numeros flotantes.*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;
//Prototipo de Funciones
void pedirDatos();
void potencia(float x, float y);

float num1, num2;

int main(){
pedirDatos();
potencia(num1 , num2);
	


	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}

void pedirDatos(){
	cout<<"Digite un numero: ";
	cin>>num1;
	num2=num1;
	
}

void potencia(float x, float y){
	float elevacion = x*y;
	
	cout<<"La elevacion al cuadrado del numero es: "<<elevacion<<endl;
	
}
