/*13. realiza una función que tome como parárametros un vector de números y su 
tamaño y cambie el signo de los elementos del vector.*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;

void pedirDatos();
void cambiarSignos(int vec[],int);
void mostrarVector(int vec[], int);

int vec[100], tam;

int main(){
	pedirDatos();
	cambiarSignos(vec,tam);
	mostrarVector(vec,tam);
	




	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}

void pedirDatos(){
	cout<<"Digite el tamanio del vector: ";
	cin>>tam;
	
	for(int i=0;i<tam;i++){
		cout<<i+1<<". Digite un numero: ";
		cin>>vec[i];
		
	}
	
}

void cambiarSignos(int vec[], int tam){
	for(int i=0;i<tam;i++){
		vec[i] *= -1;
	}
	
}

void mostrarVector(int vec[],int tam){
	cout<<"\nMostrando los elementos del vector con signo cambiado\n";
	for(int i=0; i<tam;i++){
		cout<<vec[i]<<" ";
	}
}
