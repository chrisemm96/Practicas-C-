/*Escriba un progrrama que lea valores enteros hasta que se introduzaca 
un valor en el rango de [20 - 30] o se introduzaca el valor 0. El programa debe
entregar la suma de los valores mayores a 0 introduidos.*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;

int main(){
	int numero, suma = 0;
	
	do{
		cout<<"Digite un numero: ";cin>>numero;
		
		if(numero >0){
			suma += numero;
		}
		
	}while(((numero<20)||(numero>30)&&(numero!= 0)));
	
	
	cout<<"\nLa suma es: "<<suma<<endl;
	



	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
