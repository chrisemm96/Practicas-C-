//Hacer un programa que tome en cuenta la jerarquia de operaciones
#include <iostream>
#include <stdlib.h>

using namespace std;
int main(){
	float a,b,c,d, resultado = 0;
	cout<<"digite el valor de a: "; cin>>a;
	cout<<"digite el valor de b: "; cin>>b;
	cout<<"digite el valor de c: "; cin>>c;
	cout<<"digite el valor de d: "; cin>>d;
	
	resultado = a+(b/(c-d));
	
cout<<"\El resultado es: "<<resultado<<endl;
	
	system ("PAUSE"); return 0;
}
