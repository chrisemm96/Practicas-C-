/*9. Escriba una funci�n nombrada tiempo() que enga un par�metro en n�mero
entero llamado totalseg y tres par�metros de referencia enteros nombrada horas, min 
y seg. la funci�n es convertir el n�mero de segundos transmitido en un n�mero
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
