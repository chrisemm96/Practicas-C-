/*10. Escriba una funci� nombrada calc_a�os() que tenga un par�metro entero
que represente el n�mero total de d�as desde la fecha 1/1/2000 y par�metros
de referencia nombrados a�o, mes y d�a. La funci�n es calcular el a�o, mes y
 d�a actual para el n�mero dado de d�as que se le transmitan. Para este problema
 supongamos que cada a�o tiene 365  d�as y que cada mes tiene 30 d�as.*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;

void calc_anios(int, int&, int&, int&);

int main(){
int dias, anio = 2000, mes = 1, dia = 1;

cout<<"Digite el numero de dias: ";
cin>>dias;


calc_anios(dias,anio,mes, dia);


cout<<"\nFecha actual: "<<dia<<"-"<<mes<<"-"<<anio<<endl;




	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}

void calc_anios(int dias, int& anio,int& mes,int& dia){
	anio +=dias/365;
	dias %= 365;

mes += dias/30;
	dia += dias % 30;
	
	
}
