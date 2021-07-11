/* Hacer un programa que pida al usuario que digite una cadena de caracteres, luego
verificar la longitud de la cadena y si esta superada a 10 caracteres mostrarla
en pantalla, caso cotrario no mostrarla.*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;
int main(){
char palabra [100];
char band = 'F';
int longitud = 0;


cout<<"Digite una palabra mayor a 10 digitos: ";
cin.getline(palabra,100,'\n');

longitud = strlen(palabra);

if (longitud > 10){
	band = 'V';
	if (band == 'V'){
	
		cout<<palabra<<endl;
	}
	
}
else{
	cout<<endl;
}

	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
