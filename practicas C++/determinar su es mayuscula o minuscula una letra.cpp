/* Escriba un programa que lea de la entrada estandar un caracter e indique en la
salida estandar si el caracter es una vocal minuscula, vocal mayuscula o no es una vocal*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;

int main(){
char letra;

cout<<"Digite una letra: ";
cin>>letra;

switch(letra){
	case 'a':
	case 'e': 
	case 'i': 
	case 'o': 
	case 'u': cout<<"Es una vocal minuscula"; break;
	case 'A': 
	case 'E':
	case 'I': 
	case 'O':
	case 'U': cout<<"Es una vocal mayuscula"; break;
	default: cout<<"El caracter no es una vocal"; break;
}

	

	


	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
