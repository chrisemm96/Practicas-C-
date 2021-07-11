/*Escribe un programa que lea de la entrada estandar dos numeros y muestre
en la salida estanda su suma, resta, multiplicacion y division*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main(){
	
	int n1, n2, suma = 0, resta= 0, multiplicacion=0, division=0;
	cout<<"Digite un numero: ";
	cin>>n1;
	cout<<"Digite otro numero: ";
	cin>>n2;
	
	suma= n1+n2;
	resta = n1-n2;
	multiplicacion= n1*n2;
	division=n1/n2;
	
	cout<<"\nLa suma es:"<<suma<<endl;
	cout<<"\nLa resta es:"<<resta<<endl;
	cout<<"\nLa multiplicacion es: "<<multiplicacion<<endl;
	cout<<"\nLa divicion es: "<<division<<endl;
	
	 

	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
