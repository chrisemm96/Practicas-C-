/* crear una cadena que tenga la siguiente frase "Hola que tal", luego crear otra cadena para
 preguntarle al usuario su nombre al final de la primera cadena y mostrar el mensaje completo "Hola
 que tal (NombreDelUsuario)"*/
 
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;
int main(){
char palabra1[] = "Hola que tal ";
char palabra2[1000];
char palabra3[1000];

cout<<"Introduzca su nombre: ";

cin.getline(palabra2,10000,'\n');

strcpy(palabra2,palabra3);

strcat(palabra3,palabra1);

cout<<palabra3<<endl;


	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
