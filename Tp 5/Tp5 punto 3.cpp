#include <iostream>
using namespace std;
int main () {
    int num1;
    cout<<"Introduce un numero entero positivo:";
    cin>>num1;
    for (int i = 1; i <= num1; ++i)// Ciclo para recorrer los números desde 1 hasta n
	{
        for (int j = 1; j <= num1; ++j)// Ciclo para recorrer los multiplicadores desde 1 hasta n
		{
        cout<<i*j<<"\t"; // Mostrar la multiplicación del numero actual por el multiplicador actual
        }
        cout<<endl; // Salto de línea después de cada fila
    }
    return 0;
}
