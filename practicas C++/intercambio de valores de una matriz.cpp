/* realice un programa que lea una matriz de 3*3 y cree su matriz trranspuesta.
la matriz transpuesta es aquella en la que la columna i era la fola i de a matriz original.

|1 2 3|      |1 4 7|
|4 5 6|  --> |2 5 8|
|7 8 9|      | 3 6 9|
*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main(){
	int  numeros[3][3];
	 for (int i=0; i<3; i++){
	 	for (int j=0; j<3; j++){
	 		cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
	 		cin>>numeros[i][j];
	 		
		 }
	 }
cout<<"Matriz original\n";
for(int i=0; i<3; i++){
	for(int j=0; j<3; j++){
		cout<< numeros [i][j]<<" ";
		
	}
	cout<<"\n";
}

cout<<"\nMatriz transpuesta\n";
for(int i=0; i<3; i++){
	for(int j=0; j<3; j++){
		cout<< numeros[j][i]<<" ";
	}
	cout<<"\n";
}



	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
