/* Escriba un programa que lea dos numeros y determine cual de ellos es
 el mayor.*/
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;

int main(){
int n1,n2;

cout<<"Digite dos numeros: "; 
cin>>n1>>n2;

if(n1==n2){
	cout<<"Ambos numeros son iguales";
}
else if(n1>n2){
		cout<<"El mayor es: "<<n1;
	}
else{
	cout<<"El mayor es: "<<n2;
}

	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
