//Ejemplo encontrar el mayor de 2 numeros

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;

//Prototipo de funcion
int encontrarMax(int x, int y);
 

int main(){
	int n1,n2;
	int mayor;
	
	cout<<"Digite 2 numeros: ";
	cin>>n1>>n2;

mayor=encontrarMax(n1,n2);

cout<<"El mayor de los dos numeros es: "<<mayor<<endl;


	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}

//definicion de fucion
int encontrarMax(int x, int y){
	int numeroMax;
	
	if(x>y){
		numeroMax = x;
	}
	else{
		numeroMax = y;
		
	}
	
	return numeroMax;
	
}
