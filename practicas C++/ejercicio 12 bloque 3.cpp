/* Hacer un menú que considere las siguientes opciones:

Caso 1: Cubo de un número
Caso 2: Número par o impar
caso 3: salir
*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
using namespace std;

int main(){
int numero, opc;

cout<<"1.Determinar el Cubo de un numero"<<endl;
cout<<"2.Determinar si el numero es par o impar"<<endl;
cout<<"Salir"<<endl;
cout<<"Opcion: ";
cin>>opc;

switch (opc){
	case 1:
		cout<<"Digite un numero: "; cin>>numero;
		numero= (pow (numero,3));
		cout<<"El cubo del numero es: "<<numero;
		break;
		
	case 2:
         cout<<"Dijite un numero: "; cin>>numero;
         if(numero%2==0){
         	cout<<"El numero es par"<<endl;
		 }
		 else{
		 	cout<<"El numero es impar"<<endl;
		 }
         break;
	        
	
	case 3: break;
}



	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
