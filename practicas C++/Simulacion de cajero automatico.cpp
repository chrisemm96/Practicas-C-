/*Haer un programa que simule un cajero automático co  un saldo inicial  de 1000 dólares*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;

int main(){
	int saldo_inicial = 1000, opc;
	float extra, saldo = 0, retiro;
	
	cout<<"\tBienvenido a su cajero automatico"<<endl;
	cout<<"1. Ingresar dinero en cuenta"<<endl;
	cout<<"2. Retirar efetivo de la cuenta"<<endl;
	cout<<"3.Salir"<<endl;
	cout<<"Opcion:\n";
	cin>>opc;
	
	
	switch(opc){
		case 1:
			cout<<"Digite la cantidad de dinero a ingresar: ";
			cin>>extra;
			saldo = saldo_inicial + extra;
			cout<<"Dinero en cuenta: "<<saldo;break;
			
		case 2:
			cout<<"digite una cantidad de dinero que va retirar: ";
			cin>>retiro;
			
			if(retiro> saldo_inicial){
				cout<<"No tiene la cantidad suficiente en la cuenta";
			}
			else{
				saldo = saldo_inicial - retiro;
				cout<<"Dinero en cuenta: "<<saldo;
			
			}
			break;
		case 3: break;
	
	
	}



	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
