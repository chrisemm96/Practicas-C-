/*hacer un programa para rellenar una matriz pidiendo al usuario el numero de filas
 y columnas, posteriormente mostrar la matriz en pantalla*/
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main(){
int numero[100][100], filas, columnas;
cout<<"Digite el nunmero de filas: ";
cin>>filas;
cout<<"Digite el numero de columnas: ";
cin>>columnas;
//almacenandoelementos en la matiz
for(int i=0;i<filas;i++){
	for(int j=0;j<columnas;j++){
		cout<<"digite un numero ["<<i<<"]["<<j<<"]: ";
		cin>>numero[i][j];
	}
}
//mostrando la matriz
for(int i=0;i<filas;i++){
	for(int j=0; j<columnas;j++
	){
		cout<<numero[i][j];
	}
	cout<<"\n";
}
	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
