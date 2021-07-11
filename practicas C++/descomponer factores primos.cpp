//Hacer un programa que descomponga factores primos
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main(){
int numero;
int x;

do{
	cout<<"Digite un numero: ";


	cin>>numero;

	cout<<"\nDescomponiendo en factores primos: ";
	for(int i=2;numero>1;i++){
		while(numero%i==0){
			cout<<i<<" ";
			numero /= i;
		}

		}
			cout<<"\nDesea ingresar otro numero presiona 1: ";
cin>>x;
	} while (x==1);

	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
