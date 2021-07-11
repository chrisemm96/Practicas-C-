/* EScriba un programa que lea tres numeros y determine cual
de ellos es el mayor. */

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;

int main(){
int n1 = 0,n2 = 0,n3 = 0;

cout<<"Digite un numero: ";
cin>>n1;
cout<<"Digite otro numero: ";
cin>>n2;
cout<<"Digite un tercer numero: ";
cin>>n3;

if(n1>n2&&n3){
	cout<<"El numero mayor es: "<<n1;
}
	else if(n2>n1&&n3){
		cout<<"El numero mayor es: "<<n2;
	}
else{
	
	cout<<"el numero mayor es: "<<n3;
}

	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
