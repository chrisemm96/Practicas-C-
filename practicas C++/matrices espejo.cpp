/*realiza un programa que defina dos vectores de caracteres y despues almacene
 el contenido de ambos vectores en un nuevo vector, situando en primer lugar los elementos
 del primer vector seguido por los elementos del segundo vector. Muestre el contenido
 del nuevo vector en la salida estandar*/
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main(){
	char letras1[]= {'a','b','c','d','e'};
	char letras2[]= {'f','g','h','i','j'};
	char letras3 [10];
	//copiando los elementos de letras1 hacie letras3
	for(int i=0;i<5;i++){
		letras3[i]= letras1[i];
		
		// copiando los elements de letras2 hacia letras3
		for(int i=5;i<10;i++){
			letras3[i]= letras2[i-5];
		}
		
		//mostrar el nuevo vecyor
		for(int i=0;i<10;i++){
			cout<<letras3[i]<<endl;
		}
		
	}


	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
