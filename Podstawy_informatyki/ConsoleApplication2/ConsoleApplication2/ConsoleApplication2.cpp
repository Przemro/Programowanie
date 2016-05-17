// ConsoleApplication2.cpp : Defines the entry point for the console application.
// Zamiana liczby binarnej na liczbe dziesietna, bez liczb ujemnych

#include "stdafx.h"
#include <iostream>
#include <math.h>	// Dodanie biblioteki matematycznej

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int tab [16],a,sum [16],b=0,s=0;

	for (int i = 0; i <= 15; i++)	// Ustawienie wszystkich znaków tabeli na 0
	{
		tab [i] = 0;
		sum [i] = 0;
	}

	cout << endl << "Podaj liczbe od konca, reszte miejsc uzupelnij zerami" << endl;

	for (int i = 15; i >= 0; i--)	// Zapisanie podanej liczby binarnej "od ty³u" w tabeli
	{
		cin >> a;
		tab[i] = a;
	}

	cout << "Wynik to" << endl;

	for (int i = 15; i >= 0; i--)	// Zamiana liczby binarnej na dziesiêtn¹ oraz zapisanie wyników do tabel
	{
		sum [i]=tab[i]*pow(2,b);	// Wykorzystanie funkcji potêgi z bibloteki matematycznej
		b++;
	}

	for (int i = 0; i < 15; i++)	// Dodanie wyników zamiany liczby do siebie
	{
		s = s + sum [i];
	}

	cout << s << endl;	// Wyœwietlenie ostatecznego wyniku

	system ("PAUSE");
	return 0;
}