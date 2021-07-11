/*Realice un programa que solicite al usuario que piense en un numero
entero entre el 1 yel 100. El programa debe generar un numero
aleatorio en ese mismo rango (1-100), e indicarle al usuario si el numero que
digito es mayor o menor al numero aleatorio, asi hasta que lo adivine. y por
ultumo mostrarle el numero de intentos que le llevo.

variable= limite_nferior + rand() % (limite_superior + 1 - limite_inferior);
 */

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
using namespace std;
int main(){
	int numero, dato, contador= 0;
	srand(time(NULL));//Generar un numero aleatorio;
	dato= 1 + rand()&(100);
do{
	cout<<"Digite un numero: "; cin>>numero;
	if(numero>dato){
		cout<<"\nDigite un numero menor\n";
	}
	if(numero<dato){
		cout<<"\nDigite un numero mayor\n";
	}
	contador++;
	
}while(numero!= dato);

cout<<"\nFELICIDADES ADIVINASTE EL NUMERO\n";
cout<<"Numero de intentos: "<<contador<<endl;
	getch();
	system ("PAUSE"); return 0;
}
