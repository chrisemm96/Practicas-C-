/* Pedir al usuario que digite 2 cadenas de caracteres, e indicar si ambas cadenas 
son iguales, en caso de no serlo indicar cual es la mayor alfabeticamente. */

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;
int main(){

char palabra1[1000];
char palabra2[1000];



cout<<"Digite una palabra: ";
cin.getline(palabra1,1000);
cout<<"Digite otra palabra: ";
cin.getline(palabra2,1000);

if(strcmp(palabra1,palabra2)==0){
	cout<<"Las palabras son similares"<<endl;
	

if else (strcmp(palabra1,palabra2)<0){

		cout<<palabra1<<" Es mayor a "<<palabra2<<endl;
	
	
}

}
else {
	cout<<palabra2<<" es mayor a "<<palabra1<<endl;
}
	




	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
