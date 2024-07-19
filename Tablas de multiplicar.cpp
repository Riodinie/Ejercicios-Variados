#include <iostream>
using namespace std;

int main()
{
    int numero;
    cout << "Introdusca el número de la tabla de multiplicar que desea ver:" << endl;
    cin >> numero;

    for (int a = 1; a <= 12; a++)
    {

        cout << numero << " x " << a << "=" << a * numero << endl;
    }

    return 0;
}
