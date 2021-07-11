/* Escriba u programa que solicite una edad (un entero) e indique en la
 salida estandar si la edad introducida esta en el rando [18 - 25]*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;

int main(){
int edad;

cout<<"Digite su edad: ";
cin>>edad;

if((edad>=18)&&(edad<=25)){
	
	cout<<"Su edad esta en el rango de 18 - 25";
}
else{
	cout<<"Su edad no esta en dicho rango";
}

	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
