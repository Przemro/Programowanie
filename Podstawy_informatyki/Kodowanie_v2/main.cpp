#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, a = 1, b = 0, c = 0;
	string bin;

	cin >> bin;
	n = bin.length();

	for (int i = n - 1; i >= 0; i--, a = a * 2)    // Zmiana na dziesiêtny
	{
		b = b + (bin[i] - '0') * a; // Wartoœæ b jest wynikiem przeliczenia liczby binarnej na dziesiêtn¹
	}
	cout << "Wartosc dziesietna to: " << b << endl; // Wyswietlenie wartosci dziesietnej

	while (b != 0)   // Zamiana na szesnastkowy
	{
		if (b % 16 < 10)
		{
			bin[c] = b % 16 + '0';
		}
		else
		{
			bin[c] = b % 16 - 10 + 'A';
		}
		b = b / 16;
		c++;
	}

    cout << "Wartosc szesnastkowa to: ";    // Wyswietlenie wartosci szesnastkowej
	for (int i = c - 1; i >= 0; i--)
	{
		cout << bin[i];
	}
	cout << endl;
	return 0;
}
