#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int tab[32], z, e = 0, a = 1, c = 0, d = 0, s1[8];
    float b = 0.5, f = 0.00, l = 0.00, s2[23];

	for (int i = 32; i > 0; i--)
	{
		cin >> tab[i];
	}

	z = tab[32];
	for (int i = 24; i <= 31; i++)  // Liczymy ceche
	{
        s1[c] = tab[i] * a;
        a = a * 2;
        c++;
	}

	for (int j = 0; j <= 7; j++)
	{
		e = e + s1[j];
	}
	cout << "Cecha = " << e << endl;

	for (int k = 23; k > 0; k--)   // Liczymy mantyse
	{
        s2[d] = tab[k] * b;
        b = b / 2;
        d++;
	}

	for (int m = 0; m <= 22; m++)
	{
		f = f + s2[m];
	}
	cout << "Mantysa = " << f << endl;

    l = f * pow(2,e-127);

	if (z == 0)
	{
		cout << "Liczba to: " << l << endl;
	}
	else
	{
		cout << "Liczba to: " << l * -1 << endl;
	}

	return 0;
}
