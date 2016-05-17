// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int tab[32], s, e = 0, l1, l2, f = 0, a = -1, b = 2, s1[8], s2[23];

	for (int i = 32; i > 0; i--)
	{
		cin >> tab[i];
	}

	s = tab[32];

	for (int i = 23; i >= 30; i++)
	{
		if (i == 23)
		{
			for (int j = 0; j < 8; j++)
			{
				b = b - 1;
				s1[j] = tab[i] * b;
			}

		}
		else
		{
			b = 2;
			for (int j = 1; j < 8; j++)
			{
				s1[j] = tab[i] * b;
				b = b * 2;
			}
		}

	}
	for (int i = 0; i < 8; i++)
	{
		e = e + s1[i];
	}

	for (int i = 22; i >= 0; i--)
	{
		for (int j = 0; j > -23; j--)
		{
			a = a * j;
			s2[i] = tab[i] * (2 * a);
		}
	}
	for (int i = 0; i < 22; i++)
	{
		f = f + s1[i];
	}

	for (int j = 7; j > 0; j--)
	{
		l1 = pow(-1,j)*1.f * pow(2,e-127);
		l2 = f * pow(2,e-127);
	}

	if (s == 0)
	{
		cout << l1 << "," << l2 << endl;
	}
	else
	{
		cout << l1 << "," << l2 << endl;
	}
	system ("PAUSE");
	return 0;
}

