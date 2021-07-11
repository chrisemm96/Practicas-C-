/* La sentencia if

if(cndicion){
intrucciones 1;

}
else{
Instrucciones 2;
}
*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;

int main(){
int numero, dato = 5;

cout<<"dijite un numero: ";
cin>>numero;

if(numero >= dato){
	cout<<"El numero es mayor o igual a 5";
	
}
	else{
		cout<<"El numero es menor 5";
	} 
	 


	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
