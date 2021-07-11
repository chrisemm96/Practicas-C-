/*Paso de parámetro de tipo vector

Parámetros de la función:
   oid nombreDeFuncion(tio nombreArreglo[], in tamañoArreglo)
   
   Llamada a la función
     nombreDeFuncion(nombreArreglo, tamañoArreglo)
     
     */
     
     //Cuadrado de los elemntos del vector

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;

void cuadrado(int vec[], int);
void muestra(int vec[], int);

int main(){
	const int TAM = 5;
	int vec[TAM] = {1,2,3,4,5};
	
	cuadrado(vec,TAM);
	muestra(vec,TAM);


	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}

void cuadrado(int vec[], int tam){
	for(int i = 0;i<tam;i++){
		vec[i] *= vec[i]; 
		
	}
	
}

void muestra(int vec[], int tam){
	for(int i= 0;i<tam;i++){
		cout<<vec[i]<<" ";
	}
	
}
