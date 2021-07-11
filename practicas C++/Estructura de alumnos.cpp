/*Hacer una estructura llamada alumno, en la cual se tendran los siguientes campos:
Nombre, edad, promedio, pedir datos al usuario para 3 alumnos, comprobar
cual de los 3 tiene mejor promedio y posteriormente imprimir los datos del alumno.*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;
struct alumno{
	char nombre[50];
	int edad;
	float promedio;
	
}alum[100];

int main(){
	int n_alumnos,posM = 0,posm = 0;
	float mayor = 0, menor = 9;
	cout<<"Digite el numero de alumnos: ";
	cin>>n_alumnos;
	
	for(int i=0;i<n_alumnos;i++){
		fflush(stdin);
		cout<<"\nDigite el nombre del alumno: ";
		cin.getline(alum[i].nombre,50,'\n');
		cout<<"Digite la edad del alumno: ";
		cin>>alum[i].edad;
		cout<<"Digite el promedio del alumno: ";
		cin>>alum[i].promedio;
		
		if (alum[i].promedio>mayor){
			mayor = alum[i].promedio;
			posM=i;
			
		}
		if(alum[i].promedio<menor){
			menor=alum[i].promedio;
			posm=i;
		}
		
		cout<<"\n";
		
	}
	
	cout<<"\n.:Datos del mayor promedio.\n";
	cout<<"Nombre :"<<alum[posM].nombre<<endl;
	cout<<"Edad: "<<alum[posM].edad<<endl;
	cout<<"promedio: "<<alum[posM].promedio<<endl;
	

	
		
	


	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
