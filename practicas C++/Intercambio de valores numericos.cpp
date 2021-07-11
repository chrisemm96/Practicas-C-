//Intercambiar valores 
#include <iostream>
#include <stdlib.h>

using namespace std;
int main(){

int x,y,aux;
cout<<"digite el valor de x: "; cin>>x;
cout<<"digite el valor de y: "; cin>>y;
aux = x;
x = y;
y = aux;
cout<<"\nEl nuevo valor de x es: "<<x<<endl;
cout<<"\nEl nuevo valor de y es: "<<y<<endl;
	
	system ("PAUSE"); return 0;
}
