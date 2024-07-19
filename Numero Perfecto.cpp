#include <iostream>

using namespace std;

int main()
{
    int i, j, x;

    for (int i = 1; i <= 20; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = (i / 2); j >= 1; j--)
            {
                if (i % j == 0)
                {
                    x = x + j;
                }
            }
            if (x == i)
                cout << "Número Perfecto " << x << endl;
        }
        x = 0;
    }
    return 0;
}
