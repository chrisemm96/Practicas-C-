//Ordenamiento por insercion

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;
int main(){

int numeros[]={4,2,3,1,5};
int i,pos,aux;
// algoritmo del ordenamiento por insercion
for(i=0;i<5;i++){
	pos = i;
	aux = numeros[i];
	while((pos>0)&&(numeros[pos-1]>aux)){
		numeros[pos]=numeros[pos-1];
		pos--;
		
	}
	numeros[pos] = aux;
}

cout<<"orden ascendente:\n";
for(i=0; i<5;i++){
	cout<<numeros[i]<<" ";
}
cout<<"\nOrden Descendente:\n";
for(i=4;i>=0;i--){
	cout<<numeros[i]<<" ";
}

	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
