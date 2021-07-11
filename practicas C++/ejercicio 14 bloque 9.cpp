/*14. Realiza una función que tome como parámetros un vector de enteros y 
su tamaño e imprima un vector con los elementos impares del vector recibido.*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;

void pedirDatos();
void encImpar(int vec[],int);


int vec[100],tam,impar;

int main(){
pedirDatos();
encImpar(vec,tam);




	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}

void pedirDatos(){
	cout<<"Digite el tamanio de la vector: ",
	cin>>tam;
	for(int i=0; i<tam;i++){
		cout<<i+1<<". Digite un numero: ";
		cin>>vec[i];
	}
	
	
}

void encImpar(int vec[], int tam){
	int vecImpar[100];
	int j=0;
	for(int i=0; i<tam; i++){
		if(vec[i]%2!=0){
			vecImpar[j] = vec[i];
			j++;
			
		}
	}
	
	cout<<"\nNumeros impares: "<<endl;
	for(int i=0; i<j;i++){
		cout<<vecImpar[i]<<" ";
	}
	
}
