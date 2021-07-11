//Calcular la multiplicacion de un Arreglo de numeross
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main(){

int numero[]={1,4,6,7,3};

int multiplicacion = 1;

for(int i=0;i<5;i++){

multiplicacion*=numero[i];

}
cout<<"La multiplicacion de los elementos del vector es: "<<multiplicacion<<endl;


	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
