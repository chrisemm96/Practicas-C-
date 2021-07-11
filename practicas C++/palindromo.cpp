// Hacer un programa para saber si una palabra es un palindromo

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;

int main(){

	char palabra[1000];
	
	
	cout<<"digite una palabra: ";
	
	cin.getline(palabra,1000,'\n');
	
	strrev(palabra);
	
	cout<<palabra<<endl;


	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
