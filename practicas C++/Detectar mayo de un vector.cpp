/* Desarrolle un programa que lea la entrada estandar un vector de enteros
y determine el mayor elemento del vector*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main(){
int numeros [100], n, mayor=0;

cout<<"Digite el numero de elementos de arreglo: ";
cin>>n;
for(int i=0; i<n; i++){
	cout<<i+1<<". Digite un numero: "; //1. Digite un numero:
	cin>>numeros[i];
	
	//1 2 4 10 5
	if(numeros[i]> mayor){
		mayor=numeros[i];//1
	}
}

cout<<"El mayor elemento del vector es: "<<mayor<<endl;
	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
