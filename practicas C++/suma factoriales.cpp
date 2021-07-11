//suma de factoriales
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main(){
	int numero, factorial = 1;
cout<<"Digite un numero: "; cin>>numero;

for(int i=1;i<=numero;i++){
factorial = factorial + i;
}

cout<<"\nEl factorail del numero es: "<<factorial<<endl;

	getch();
	system ("PAUSE"); return 0;
}
