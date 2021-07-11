/* desarrolla un programa que determine si una matriz es simetrica o no. Una matriz 
es si,etrica si es cuadrada y si es igual  a su matriz transpuesta-

|8 1 3|       |8 1 3|
|1 7 4| -->   |1 7 4|
|3 4 9|       |3 4 9|
*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main(){

int numeros [100][100], filas, columnas;
char band = 'F';
cout<<"Digite el numerp de filas: ";
cin>>filas;
cout<<"Digite el numero de columnas: ";
cin>>columnas;

for(int i=0; i<filas; i++){
	for(int j=0; j<columnas; j++){
		cout<<"digite un numero ["<<i<<"]["<<j<<"]: ";
		cin>>numeros[i][j];
		
	}
}

if (filas==columnas){
	for ( int i=0; i<filas; i++){
		for ( int j=0; j<columnas; j++){
			if(numeros[i][j] == numeros[j][i]){
				band = 'V';
			}
		}
	}
}

if (band == 'V'){
	cout<<"La matriz essimetrica";
	
}
else{
	cout<<"La matriz no es simetrica";
	
}

	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
