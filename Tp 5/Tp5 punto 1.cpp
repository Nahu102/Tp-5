#include <iostream>
using namespace std;
int main () {
	int valor1;
	float factorial=1;
	cout<<"ingrese un numero entero no negativo:";
	cin>>valor1;
	for(int i=1;i<=valor1;i++)
	{
	factorial=factorial*i;
	}
	cout<<factorial;
	return 0;
}
