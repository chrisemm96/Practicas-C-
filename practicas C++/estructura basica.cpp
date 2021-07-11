// Estructuras básicas en c++

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;
struct Persona{
	char nombre[20];
	int edad;

	
}
persona1 = {"Christian",24};

int main(){

cout<<"Nombre: ";
cin.getline(persona1.nombre,20,'\n');
cout<<"Edad: ";
cin>>persona1.edad;

cout<<"\nImprimiendo datos\n ";
cout<<"Nombre: "<<persona1.nombre<<endl;
cout<<"Edad: "<<persona1.edad<<endl;



	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
