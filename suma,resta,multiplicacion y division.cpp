#include <iostream>

using namespace std;

int main()
{

    float n1, n2, suma = 0, resta = 0, multiplicacion = 0, division = 0;

    cout << "Digita dos números para hayar su suma,resta,multiplicacion y division.\n"
         << endl;

    cout << "Dijite el primer número:" << endl;

    cin >> n1;

    cout << "Dijite el segundo número:" << endl;

    cin >> n2;

    suma = n1 + n2;

    resta = n1 - n2;

    multiplicacion = n1 * n2;

    division = n1 / n2;

    cout << "El resultado de la suma es = " << suma << endl;

    cout << "El resultado de la resta es = " << resta << endl;

    cout << "El resultado de la multiplicacion es = " << multiplicacion << endl;

    cout << "El resultado de la division es = " << division << endl;

    return 0;
}
