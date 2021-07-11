//Paso de Parametros por Referencia

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;

void valNuevo(int&,int&);

int main(){
	int num1,num2;
	
    cout<<"Digite 2 nummeros: ";
    cin>>num1>>num2;
    
    valNuevo(num1,num2);

    cout<<"El nuevo valor del primer numero es: "<<num1<<endl;
    cout<<"El nuevo valor del segundo numero es: "<<num2<<endl;

	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}

void valNuevo(int& xnum,int& ynum){
	cout<<"El valor del primer numero es: "<<xnum<<endl;
	cout<<"El valor del segundo numero es: "<<ynum<<endl;
	
	xnum= 89;
	ynum= 45;
}
