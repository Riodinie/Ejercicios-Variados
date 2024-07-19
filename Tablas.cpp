#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int x = 1, b = 1, c;

	do
	{
		c = x * b;

		if (x == 11)
		{
			x = 0;
			b++;
			c = 0;
			cout << "" << endl;
		}
		if (b == 6)
		{
			getch();
		}
		cout << b << " * " << x << " = " << c << endl;
		x++;
	} while (x != 100);
}
