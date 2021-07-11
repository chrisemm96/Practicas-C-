/*Escribe un programa que lea de la entrada estandar un vector de numeros y
muestre en la salida estandar los numeros del vector con sus indices asociados*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main(){
int numero [100],n,x,g;
do {
	
cout<<"Digite el numero de elementos que va a tener el arreglo: ";
cin>>n;
for (int i=0; i<n;i++){
cout<<"Digite un numero: ";
cin>>numero[i];//Guardando todos los elementos del vector.

}
//Ahora vamos a mostrar los elementos con sus indices asociados.
for(int i=0;i<n; i++){
	cout<<i<< "->"<<numero[i]<<endl;
}
	cout<<"\nDesea ingresar otros numeros presiona 1\ Deseas revisar algun numero ingresado presiona cualquier otro digito: ";
    cin>>x;
	} while (x==1);
cout<<"deseas revisar algun numero guardado: ";
cin>>g;
cout<<numero[g];

	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
