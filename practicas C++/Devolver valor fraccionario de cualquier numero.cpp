/* Escriba un programa en C++ que devuelva la parte fraccionaria de cualquier 
numero introducido por el usuario. Por ejemplo, si se introduce el numero "256.879"
deberia desplegarse el numero 0.879. */

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;
void pedirDatos();
void numero(float x, int y);
float num1;
int num2;

int main(){
pedirDatos();
numero(num1,num2);
	


	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}

void pedirDatos(){
	cout<<"digite un numero con coma decimal: ";
	cin>>num1;
	num2=num1;
	
}

void numero(float x, int y){
	float resta = num1 - num2;
	cout<<"La parte fraccionaria es: "<<resta<<endl;
	
}

