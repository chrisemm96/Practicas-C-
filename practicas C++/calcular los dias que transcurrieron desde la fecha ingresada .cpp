/*10. Escriba una funció nombrada calc_años() que tenga un parámetro entero
que represente el número total de días desde la fecha 1/1/2000 y parámetros
de referencia nombrados año, mes y día. La función es calcular el año, mes y
 día actual para el número dado de días que se le transmitan. Para este problema
 supongamos que cada año tiene 365  días y que cada mes tiene 30 días.*/

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
