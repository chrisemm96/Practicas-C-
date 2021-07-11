/*Defina una estructura que indique el tiempo empleado por un ciclista en
una etapa. La estructura debe tener tres campos: horas, minutos y segundos.
escriba un programa que dado n etapas calcule el tiempo total empleado en}
correr todas las etapas.*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;

struct Etapas{
		int horas;
		int minutos;
		int segundos;	
	}et[100];
	
int main(){
	int n_etapas, horasT=0, minutosT=0, segundosT=0;
	
	cout<<"Digite el numero de tapas: "; cin>>n_etapas;
	
	for(int i=0; i<n_etapas;i++){
		//Pidiendo los datos al usuario
		cout<<"Horas: ";cin>>et[i].horas;
		cout<<"minutos: ";cin>>et[i].minutos;
		cout<<"segundos: "; cin>>et[i].segundos;
		
		horasT += et[i].horas;
		minutosT += et[i].minutos;
		if(minutosT >= 60){
			minutosT -= 60;
			horasT++;
			
		}
		
		segundosT += et[i].segundos;
		if (segundosT >= 60){
			segundosT -=60;
			minutosT++;
			
		}
		cout<<"\n";
		
	}
	
	cout<<"\nTiempo total empleado\n";
	cout<<"Horas: "<<horasT<<endl;
	cout<<"Minutos totales: "<<minutosT<<endl;
	cout<<"Segundos totales: "<<segundosT<<endl;
	
		
	

	


	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
