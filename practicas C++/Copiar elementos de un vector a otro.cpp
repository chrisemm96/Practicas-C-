/* Pedir al usuario una cadena de caracteres, almacenarla en un arreglo y copiar
 todo su contenido hacia otro arreglo de caracteres. */
 
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;
int main(){

char letra[10000];
char letra2[10000];

cout<<"digite los caracteres que desea: ";
cin.getline(letra,10000);

strcpy(letra2, letra);

cout<<letra<<endl;
cout<<letra2<<endl;

	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
