//Copiar el contenido de una cadena a otra- funcion strcpy()

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;
int main(){

char nombre[] = "Christian";
char nombre2[20];

strcpy(nombre2,nombre);
cout<<nombre2<<endl;


	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
