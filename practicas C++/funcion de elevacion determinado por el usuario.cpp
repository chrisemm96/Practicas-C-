/* Escriba una funcion nombrada funpot () que eleve un numero entero que
se le transmita a una potencia en numero entero positivo y despliegue el resultado.
El numero emtero positivo deber� ser el segundo valor transmitido a la funcion*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;
// Prototipo de funciones
void pedirDatos();
void funpot(int x, int y);

int numero, exponente;


int main(){
pedirDatos();
funpot(numero, exponente);
	


	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}

void pedirDatos(){
	cout<<"Digite un numero; ";
	cin>>numero;
	cout<<"Digite el exponente de elevacion: ";
	cin>>exponente;
	
	
}

void funpot(int x, int y){
	long resultado=1;
	for(int i=1; i<=y;i++){
		resultado *= x;
	}
	
	cout<<"El resultado es: "<<resultado<<endl;
	
}
