/*Plantilas de Funcion.

Ejemplo: Sacar el valor absoluto de un numero*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;

//Prototipo de funcion.

template <class TIPOD>
void mostrarAbs(TIPOD numero);

int main(){
int num1 = 4;
	float num2 = 56.67;
	double num3 = 123.5678;
	
	mostrarAbs(num1);
	mostrarAbs(num2);
	mostrarAbs(num3);
	
	


	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}

template <class TIPOD>
void mostrarAbs(TIPOD numero){
	
	if (numero<0){
		numero = numero * -1;
	}
	cout<<"El valor absoluto del numero es: "<<numero<<endl;
}

