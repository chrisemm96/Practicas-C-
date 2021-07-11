/*Escriba un programa que lea de la entrada estandar un caracter e indique
en la salida estandar si el caracter es una vocal minuscula o no.*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;

int main(){

char letra;

cout<<"Digite un caracter: ";
cin>>letra;

switch(letra){
	case 'a': cout<<"es una vocal minuscula"; break;
	case 'e': cout<<"es una vocal minuscula"; break;
	case 'i': cout<<"es una vocal minuscula"; break;
	case 'o': cout<<"es una vocal minuscula"; break;
	case 'u': cout<<"es una vocal minuscula"; break;
	default : cout<<"No es una vocal minuscula"; break;
		
}
	


	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
