

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;
struct info_direccion{
	char direccion [30];
	char ciudad [20];
	char provincia [20];
};

struct empleado{
	char nombre [20];
	struct info_direccion dir_empleado;
	double salario;
}empleados[2];

int main(){
	for(int i=0; i<2; i++){
			fflush(stdin);
		cout<<"Digite su nombre: ";
		cin.getline(empleados[i].nombre, 20 ,'\n');
			fflush(stdin);
		cout<<"Digite su direccion: ";
		cin.getline(empleados[i].dir_empleado.direccion,30,'\n');
		fflush(stdin);
		cout<<"Ciudad: ";
		cin.getline(empleados[i].dir_empleado.ciudad, 20, '\n');
			fflush(stdin);
		cout<<"Provincia: ";
		cin.getline(empleados[i].dir_empleado.provincia,20,'\n');
			fflush(stdin);
		cout<<"Salario: ";
		cin>>empleados[i].salario;
		cout<<"\n";
			fflush(stdin);
	}
	
	for(int i=0;i<2;i++){
		cout<<"Nombre: "<<empleados[i].nombre<<endl;
		cout<<"Direccion: "<<empleados[i].dir_empleado.direccion<<endl;
		cout<<"Ciudad: "<<empleados[i].dir_empleado.ciudad<<endl;
		cout<<"Provincia: "<<empleados[i].dir_empleado.provincia<<endl;
		cout<<"Salario: "<<empleados[i].salario<<endl;
		cout<<"\n";
		
		
	}




	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
