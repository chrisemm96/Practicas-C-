/* realice un programa que solicite de la entrada estandar un entero del 1 al 10
y muestre en la salida estandar su tabla de multiplicar. */

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;

int main(){
	int numero;
	do{
	
	cout<<"Digite un numero entero entre el 1 al 10: ";cin>>numero;
}while((numero<1)||(numero>10));

for(int i = 1;i<=20; i++){
	
	cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
}



	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
