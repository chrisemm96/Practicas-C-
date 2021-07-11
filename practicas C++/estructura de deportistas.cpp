/*Hacer un arreglo de estructura llamada atleta para N atletas que contenga 
los siguientes campos: nombre, pais, numero_medallas. Y devuelva los datos
(Nombre,pais) del atleta que ha ganado el mayor numero de medallas. */

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;
struct atleta{
	char nombre[100];
	char pais[50];
	int numero_medallas;
}atle[100];

int main(){
int n_atletas,posM=0,posm=0;
int mayor=0,menor=999999;

cout<<"Digite el numero de atletas: ";
cin>>n_atletas;

for(int i=0; i<n_atletas; i++){
	fflush(stdin);
	cout<<"Digite el nombre del atleta: ";
	cin.getline(atle[i].nombre,100,'\n');
	cout<<"Digite el pais del atleta: ";
	cin.getline(atle[i].pais,50,'\n');
	cout<<"Digite el numero de medallas del atleta: ";
	cin>>atle[i].numero_medallas;
	
	if(atle[i].numero_medallas>mayor){
		mayor = atle[i].numero_medallas;
		posM = i;
		
	}
	if(atle[i].numero_medallas<menor){
		menor = atle[i].numero_medallas;
		posm=i;
	}
	
	
	cout<<"\n";
}
cout<<"\n.La informacion del medallista es:\n ";
cout<<"El nombre del atleta es: "<<atle[posM].nombre<<endl;
cout<<"El Pais del atleta es: "<<atle[posM].pais<<endl;

	


	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
