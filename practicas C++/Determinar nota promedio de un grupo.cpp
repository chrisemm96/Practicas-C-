//Hacer un programa que calcule la nota promedio de una clase
#include <iostream>
#include <stdlib.h>

using namespace std;
int main(){

float alumno_1, alumno_2, alumno_3, alumno_4, resultado = 0;

cout<<"Digite la nota del alumo 1: "; cin>>alumno_1;
cout<<"Digite la nota del alumo 2: "; cin>>alumno_2;
cout<<"Digite la nota del alumo 3: "; cin>>alumno_3;
cout<<"Digite la nota del alumo 4: "; cin>>alumno_4;

alumno_1 = 0;
alumno_2 = 0;
alumno_3 = 0;
alumno_4 =0;
resultado = (( alumno_1 + alumno_2 + alumno_3 + alumno_4) / (4));
cout<<" La nota media es:\n " <<resultado;
	
	system ("PAUSE"); return 0;
}
