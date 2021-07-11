/* Hacer una etructura llamada corredor, en la cual se tendran los siguientes
campos: Nombre, edad, sexo, club, pedir datos para un corredor, y asignarle
una cattegoria de competicion:
-Juvenil <= 18 años
-señor <= 40 años
veterano > 40 años
Posteriormente imprimir todos los datos del corredor, incluida su categoria 
de competicion. */

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;
struct corredor{
	char nombre [20];
	int edad;
	char sexo[10];
	char club [20];
}c1;

int main(){
char categoria[20];
cout<<"Nombre: ";
cin.getline(c1.nombre,20,'\n');
cout<<"Edad: ";
cin>>c1.edad;
fflush(stdin);
cout<<"Sexo: ";
cin.getline(c1.sexo,10,'\n');
cout<<"Club :";
cin.getline(c1.club,20,'\n');

if(c1.edad <=18){
	strcpy(categoria,"juvenil");
}
else if (c1.edad <= 40){
	strcpy(categoria,"Senior");
}
else{
	strcpy(categoria,"Veterano");
}
cout<<"\nDatos del corredor: "<<endl;
cout<<"Nombre: "<<c1.nombre<<endl;
cout<<"Edad: "<<c1.edad<<endl;
cout<<"sexo: "<<c1.sexo<<endl;
cout<<"Club: "<<c1.club<<endl;
cout<<"Categoria: "<<categoria<<endl;



	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
