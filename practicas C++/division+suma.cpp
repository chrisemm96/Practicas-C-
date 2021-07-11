#include <iostream>
#include <stdlib.h>

using namespace std;
int main(){
float a,b, resultado = 0;
cout<<"digite el valor de a: "; cin>>a;
cout<<"digite el valor de b: "; cin>>b;

resultado = (a/b) + 1;
cout.precision(2);
cout<<"\nEl resultado es: "<<resultado<<endl;

	system ("PAUSE"); return 0;
}
