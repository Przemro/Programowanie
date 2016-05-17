#include <stdio.h>
#include <iostream>

using namespace std;

int main ()
{
	int a;
	cout << "Program przeliczajcy liczbe dziesietna na binarna" << endl;

	cout << "Podaj liczbe: ";
	cin >> a;

	for (int i = 1; i != a; i)
	{

		if (a%2==0)
		{
			a=a/2;
			cout << "0";
		}
		else
		{
			a=a/2;
			cout << "1";
		}

	}
	cout << endl;
	system("PAUSE");
	return 0;
}