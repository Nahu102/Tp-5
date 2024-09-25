#include <iostream>
#include <string.h>
using namespace std;
int main () {
	int espacio,vendedores,num1,num2,num3;
	cout<<"ingrese la cantidad de vendedores:";
	cin>>vendedores;
	for(int i=1;i<=vendedores;i++)
	{
	cout<<"\n ingrese un nombre para el vendedor:";
	string num1; cin>>num1;
	cout<<"ingreses la cantidad de ventas del vendedor:";
	string num2; cin>>num2;
	cout<<"\n"<<num1<<":"<<num2<<" ventas\n";
	}
	return 0;
}
