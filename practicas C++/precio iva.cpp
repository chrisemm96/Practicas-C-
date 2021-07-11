#include <iostream>
#include <stdlib.h>

using namespace std;
int main(){
	float producto = 0, multiplicacion = 0, suma = 0;
	float IVA = .20;


	cout<<"\nIntroducir valor de producto: ";
	cin>>producto;
	multiplicacion = producto * IVA;
	cout<<" \nIVA: "<<multiplicacion<<endl;
	suma = producto + (multiplicacion = producto * IVA);
	cout<<" \nValor de producto con IVA: "<<suma<<endl;
	
	
	system ("PAUSE"); return 0;
}
