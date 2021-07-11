//Paso de parametros tipo matriz

//Elevar al cuadrado todos los elementros de una matriz

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;

void mostrarMatriz(int m[][3], int, int);
void calcularCuadrado( int m[][3],int,int);
void mostrarMatrizElevvada(int m[][3],int,int);

int main(){
	const int NFILAS = 2;
	const int NCOL = 3;
	int m[NFILAS][NCOL] = {{1,2,3},{4,5,6}};
	mostrarMatriz(m,NFILAS,NCOL);
	calcularCuadrado(m,NFILAS,NCOL);
	mostrarMatrizElevvada(m,NFILAS,NCOL);

	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}

void mostrarMatriz(int m[][3], int nfilas, int ncol){
	cout<<"Mostrando matriz original: \n";
	for(int i = 0; i<nfilas; i++ ){
		for( int j = 0; j<ncol; j++){
			cout<<m[i][j]<<" ";
		}
		cout<<"\n";
	    
	}
	
}

void calcularCuadrado( int m[][3],int nfilas,int ncol){
	for( int i = 0; i<nfilas; i++){
		for(int j=0; j<ncol; j++){
			m[i][j] *= m[i] [j];
		}
	}
}

void mostrarMatrizElevvada(int m[][3],int nfilas,int ncol){
	cout<<"\n\nMostrando matriz elevada al cuadrado: \n";
	for(int i = 0; i<nfilas; i++ ){
		for( int j = 0; j<ncol; j++){
			cout<<m[i][j]<<" ";
		}
		cout<<"\n";
	    
	}
}
