/* Realice un programa que lea de la entrada est�ndar los siguientes datos de una persona:
 Edad: dato de tipo entero.
 Sexo: dato de tipo car�cter.
 Altura en metros: dato de tipo real.
Tras leer los datos, el programa debe mostrarlos en la salida est�ndar.
*/

#include <iostream>

using namespace std;

int main (){
	
	int edad;
	char sexo[10];
	float altura;
	
	cout<<"Ingrese edad:" ;cin>>edad;
	cout<<"Ingrese sexo:" ;cin>>sexo;
	cout<<"Ingrese altura:" ;cin>>altura;
	
cout<<"\nedad:"<<edad<<endl;
cout<<"sexo:"<<sexo<<endl;
cout<<"altura:"<<altura<<endl;

return 0;

}
