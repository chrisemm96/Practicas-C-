/*Mostrar los meses del año, pidiendole al usuario un número entre (1 - 12),
y mostrar el mes al que corresponde.*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;

int main(){

int numero;

cout<<"Ingrese el mes en numero: ";
cin>>numero;

switch(numero){
	case 1: cout<<"Enero"; break;
	case 2: cout<<"Febrero"; break;
	case 3: cout<<"Marzo"; break;
	case 4: cout<<"Abril"; break;
	case 5: cout<<"Mayo"; break;
	case 6: cout<<"Junio"; break;
	case 7: cout<<"Julio"; break;
	case 8: cout<<"Agosto"; break;
	case 9: cout<<"Septiembre"; break;
	case 10: cout<<"Octobre"; break;
	case 11: cout<<"Noviembre"; break;
	case 12: cout<<"Diciembre"; break;
}


	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
