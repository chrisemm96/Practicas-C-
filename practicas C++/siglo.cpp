/*Hacer un programa que digite el siglo dependiendo del año digitado.
Ejemplo: 

año: 1896

siglo:19 */

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;

int main(){
float year = 0;
int siglo;

cout<<"Year: ";
cin>>year;

siglo = (year / 100) + 1;

cout<<"Century: "<<siglo<<endl;

	


	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
