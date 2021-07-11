/* Utilizar las 2 estructuras del problema 5, pero ahora pedir los datos
 para N alumnos, y calcular cual de todos tiene el mejor promedio, e imprimir
 sus datos. */
 
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;
struct promedio{
	float nota1;
	float nota2;
	float nota3;
	 float promedio2;
};

struct alumno{
	char nombre [20];
	char sexo[10];
	int edad;
	struct promedio prom;
}alum[1000];

int main(){
	float promedio;
	int alumnos=0;
	int posM = 0, posm = 0;
	int mayor = 0, menor = 9999;
	
	cout<<"Digite el numero de alumnos: ";
	cin>>alumnos;
	
	for(int i=0;i<alumnos;i++){
	fflush(stdin);
		
		cout<<"digite el nombre del alumno: ";
    cin.getline(alum[i].nombre,20,'\n');
    
    cout<<"Digite la edad del alumno: ";
    cin>>alum[i].edad;
    
    	fflush(stdin);
    	
    cout<<"Digite el sexo del alumno: ";
    cin.getline(alum[i].sexo,10,'\n');
    
    cout<<"\n.:Notas del alumno:\n";
    cout<<"Nota 1: ";
    cin>>alum[i].prom.nota1;
    
    cout<<"Nota 2: ";
    cin>>alum[i].prom.nota2;
    
    cout<<"Nota 3: ";
    cin>>alum[i].prom.nota3;
    
    promedio = (alum[i].prom.nota1 + alum[i].prom.nota2 + alum[i].prom.nota3)/3;
    alum[i].prom.promedio2 = promedio;
    
    if(alum[i].prom.promedio2 > mayor){
    	mayor = alum[i].prom.promedio2;
    	posM = i;
    	
    	
    	if (alum[i].prom.promedio2 < menor){
    		menor = alum[i].prom.promedio2;
    		posm = i;
    		
		}
    	
	}
	cout<<"\n";
    
	}
	cout<<"\nEl mejor promedio es del alumno:\n ";
	cout<<"El nombre del alumno es: "<<alum[posM].nombre<<endl;
	cout<<"La edad del alumno es : "<<alum[posM].edad<<endl;
	cout<<"El sexo del alumno: "<<alum[posM].sexo<<endl;
	cout<<"El promedio es: "<<alum[posM].prom.promedio2;
	
	
	

	


	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
