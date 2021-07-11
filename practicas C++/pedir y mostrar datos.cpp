/*Realice un programa que lea de la entrada los siguientes datos
de una persona: 

Edad: dato tipo entero.
Sexo: dato de tipo caracter.
Altura en metros: dato de tipo real.

Tras leer los datos, el programa debe mostrarlos en la salida estandar*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main(){
int edad;
char sexo [10];
float altura;
cout<<"Digite su edad: ";cin>>edad;
cout<<"Digite su sexo: ";cin>>sexo;
cout<<"Digite su altura: ";cin>>altura;
cout<<"Edad: "<<edad<<endl;
cout<<"Altura en metros: "<<altura<<endl;
	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
