// Comparar cadenas - Funcion strcmp()

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;
int main(){
//avion - becerro strcmp diferencia cual es mayour por letras

char palabra1[] = "becerro";
char palabra2[] = "avion";

if(strcmp(palabra1,palabra2) >0){
	cout<<"Ambas cadenas son iguales:";
	
}


	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
