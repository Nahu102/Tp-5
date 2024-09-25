#include <iostream>
#include <string.h>
using namespace std;
int main () {
	int opcion,saldo,deposito,dinero;
	int condicion,sin_condicion,linea;
	string cad;
	cad="----------------------------------------------------------------";
	while(sin_condicion=sin_condicion+condicion)
	{
	cout<<"opcion 1 Consultar saldo \n"<<"opcion 2 Depositar dinero \n"<<"opcion 3 Retirar dinero\n"<<"opcion 4 Salir\n";
	cout<<"\ningrese una opcion:";
	cin>>opcion;
	cout<<"\n";
	switch(opcion)
		{
		case 1:
		cout<<"su saldo es: "<<saldo;
		cout<<"\n"<<"\n"<<cad;
		cout<<"\n"<<"\n";
		break;
		case 2:
		cout<<"ingrese la cantidad de dinero que quiere depositar: ";
		cin>>deposito;
		saldo=deposito+saldo;
		cout<<"\n"<<cad;
		cout<<"\n";
		break;
		case 3:
		cout<<"ingrese la cantidad de dinero que quiere retirar: ";
		cin>>dinero;
		if(dinero<=saldo)
		{
			saldo=saldo-dinero;
		}
		else if(dinero>=saldo)
		{
			default:cout<<"\nno es posible realizar la seleccion por que usted quiere retirar una cantidad de dinero mayor a la que tiene su saldo\n";
		}
		cout<<"\n"<<cad; cout<<"\n";
		break;
		case 4:
		return 0;
		break;
		}
	}
}
