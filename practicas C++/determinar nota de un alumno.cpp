/*La calificacion final de un estudiante es la media ponderada de tres notas: 
la nota de practicas que cuenta un 30% del total, la nota teorica que cuenta un
60% y la nota de participacion que cuenta el 10% restante. Escriba un programa
que lea de la entrada estandar las tres notas de un alumno y escriba en la 
salida estandar su nota final. */
 
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;

int main(){

	float practica, teorica, participacion, resultado;
	
	cout<<"Digite la nota de practica: "; cin>>practica;
	cout<<"Digite la nota teorica: "; cin>>teorica;
	cout<<"Digite la nota participacion: "; cin>>participacion;

practica*= 0.30;
teorica*= 0.60;
participacion*= 0.10;

resultado = (practica + teorica + participacion);

	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
