//Sumar enteros establecidos

#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main(){
int n, suma = 0;
cout<<"digite el numero de elementos: ";
cin>>n;
for (int i=1; i<=n;i++){
suma += i;

}
cout<<"\nLa suma es: "<<suma<<endl;


	getch();
	system ("PAUSE"); return 0;
}
