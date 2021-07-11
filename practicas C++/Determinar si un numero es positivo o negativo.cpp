//Comprobar si un numero digitado por el usuario es positivo o negativo.

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;

int main(){
	float numero;
	
	cout<<"Digite un numero: ";
	cin>>numero;
	
	if(numero < 0){
		cout<<"El numero es negativo";
		
	}
	
	else if(numero >= 1){
		cout<<"El numero es positivo";
	}
	else{
		cout<<"el numero es cero";
	}

	


	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
