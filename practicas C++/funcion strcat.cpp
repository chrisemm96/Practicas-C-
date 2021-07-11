//Añadir o concatenar una cadena con otra - Funcion strcat()

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;
int main(){

char cad1[] = "Esta es una cadena ";
char cad2[] = "de ejemplo";
char cad3[30];

strcpy(cad3,cad1); //cad3= "Esto es una cadena"

strcat(cad3,cad2);//cad3 = "esto es una cadena de ejemplo"

cout<<cad3<<endl;

	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
