/*Realice un programa que calcule y muestre en la salida estandar la suma de
los cuadrados de los 10 primeros enteros mayores a cero.*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;

int main(){
int suma = 0, cuadrado;


for(int i=1;i<=10;i++){
cuadrado = i*i;
suma += cuadrado;


}

cout<<"El resultado de la suma es: "<<suma<<endl;



	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
