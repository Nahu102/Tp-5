#include <iostream>
#include <string.h>
using namespace std;
int main () {
	int num=0;
	cout<<"¿quiere crear un triangulo o un cuadrado?\nIngrese 1 para el cuadrado y 2 para el triangulo: ";
	cin>>num;
	if(num<=1)
	{
		int num1,num2;
		cout<<"ingrese un valor para formar el cuadrado:";
		cin>>num1;
		num2=0; num2=num1;
		for(int i = 0; i < num2; ++i)// Ciclo para recorrer las filas
		{ 
        	for(int j = 0; j < num1; ++j)// Ciclo para recorrer las columnas
			{ 
        	cout <<"* ";
        	}
        cout<<endl; // Salto de línea después de cada fila
    	}
	}
	else if(num<=2)
	{
		int num3;
    	cout << "ingrese un numero para formar el triangulo: ";
    	cin >> num3;
    		for (int i=0;i<num3;++i)// Ciclo para recorrer las filas
			{ 
        		for (int j=0;j<=i;++j)// Ciclo para recorrer las columnas
				{ 
            	cout <<"* "; // Imprimir asterisco
				}
        	cout << endl; // Salto de línea después de cada fila
    		}
	}
	return 0;
}
