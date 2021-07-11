//escriba un programa que cacule el valor de: 2^1+2^2+2^3.....+2^n.
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main(){
int suma = 0, elevacion = 0, n;
cout<<"Digite el numero de elementos a sumar: ";cin>>n;
for(int i= 1;1<=n;i++){
elevacion = pow(2,i);
suma += elevacion;

}

cout<<"\nLa suma total es:"<<suma<<endl;


	system ("PAUSE"); return 0;
}
