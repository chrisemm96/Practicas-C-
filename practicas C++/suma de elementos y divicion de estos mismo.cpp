//Digite la siguiente expresion matematica como expresion de C++ 

#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main(){
	float a, b, c, d, resultado = 0;
	
	cout<<"digite el valor de a: ";
	cin>>a;
	cout<<"digite el valor de b: ";
	cin>>b;
	cout<<"digite el valor de c: ";
	cin>>c;
	cout<<"Digite el valor de d: ";
	cin>>d;
	
	resultado = (a+b)/(c+d);
	
	cout<<"El resultado es: "<<resultado<<endl;
	

	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
