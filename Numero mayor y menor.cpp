#include <iostream>
using namespace std;

int main()
{
	int menor = 999, mayor = 0, numero = -99, repetidor = 0;
	cout << "Ingrese 10 números, para determinar mayor y menor:\n";
	for (int i = 1; i <= 10; i++)
	{
		cout << i << ":";
		cin >> numero;
		if (numero > mayor)
		{
			mayor = numero;
		}
		if (numero < menor)
		{
			menor = numero;
		}
	}
	cout << "El mayor número ingresado fue: " << mayor << endl;
	cout << "El menor número ingresado fue : " << menor << endl;
	return 0;
}
