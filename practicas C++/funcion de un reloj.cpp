/*9. Escriba una función nombrada tiempo() que enga un parámetro en número
entero llamado totalseg y tres parámetros de referencia enteros nombrada horas, min 
y seg. la función es convertir el número de segundos transmitido en un número
equivalente de horas, minutos y segundos.*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;

void tiempo(int, int&,int&,int&);

int main(){
	int totalSeg, horas, min, seg;
	
	cout<<"Digite el numero total de segundos: ";
	cin>>totalSeg;
	
	tiempo(totalSeg, horas, min, seg);
	
	cout<<"\nTiempo equivalente a la cantidad de segundos digitados: "<<endl;
	cout<<"Horas: "<<horas<<endl;
	cout<<"Minutos: "<<min<<endl;
	cout<<"Segundo: "<<seg<<endl;


	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}


void tiempo(int totalSeg,int& horas,int& min,int& seg){
	horas = totalSeg/3600;
	totalSeg %=3600;
	min = totalSeg / 60;
	seg = totalSeg % 60;
	
	
	
}
