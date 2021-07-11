//longitud de una cadena de caracteres - funcion strlen()

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;
int main(){
	char palabra[]=100000;
	int longitud=0;
	 longitud = strlen (palabra);
	 
	 cout<<"Numero de elementos de la cadena es: "<<longitud<<endl;


	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
