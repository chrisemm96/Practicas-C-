/*Escribe un programa que lea de la entrada estándar tres números. Después
debe leer un cuarto numero e indicar si el número coincide con alguno de los
introducidos con anterioridad.*/
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;

int main(){
	int a,b,c,d;
	cout<< "Ingrese un numero: ";
	cin>>a;
	cout<< "Ingrese un numero: ";
	cin>>b;
	cout<< "Ingrese un numero: ";
	cin>>c;
	cout<<"\nIngrese un cuarto numero: ";
	cin>>d;
	if (d==a){
		cout<<d<<" concide con "<<a<<endl;
	};
	if ( d==b){
		cout<<d<<" Coincide con "<<d<<endl;
	}
	else if ( d==c){
		cout<<d<<" Coincide con "<<c<<endl;
	}
	else {
		cout<<"No coinciden"<<endl;
	};
	



	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
