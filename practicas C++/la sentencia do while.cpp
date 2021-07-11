/* La sentencia do while

  do{
  conjunto de instrucciones;
}
while(expresion logica) */

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;

int main(){
	int i;
	i=1;
	
	do{
		cout<<i<<endl;
		i++;//aumenta el itarador de uno en uno
		
	}while(i<=10);




	cout<<"\n";
	getch();
	system ("PAUSE"); return 0;
}
