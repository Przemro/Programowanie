// ConsoleApplication2.cpp : Defines the entry point for the console application.
// Zamiana liczby binarnej na liczbe dziesietna oraz szesnastkow� z zawarciem liczb ujemnych

#include "stdafx.h"
#include <iostream>
#include <math.h>	// Dodanie biblioteki matematycznej

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int tab [16],a,sum [16],b=0,s=0;

	for (int i = 0; i <= 15; i++)	// Ustawienie wszystkich znak�w tabeli na 0
	{
		tab [i] = 0;
		sum [i] = 0;
	}

	cout << endl << "Podaj liczbe od konca, reszte miejsc uzupelnij zerami." << endl;
	cout << "Ostatnia liczba odpowiada za znak, 1 to liczba ujemna 0 to liczba dodatnia." << endl;

	for (int i = 14; i >= 0; i--)	// Zapisanie podanej liczby binarnej "od ty�u" w tabeli
	{
		cin >> a;
		tab[i] = a;
	}
	cout << "Podaj ostatnia liczbe";
	cin >> tab[15];


	cout << "Wynik to" << endl;

	for (int i = 15; i >= 0; i--)	// Zamiana liczby binarnej na dziesi�tn� oraz zapisanie wynik�w do tabel
	{
		sum [i]=tab[i]*pow(2,b);	// Wykorzystanie funkcji pot�gi z bibloteki matematycznej
		b++;
	}

	for (int i = 0; i < 15; i++)	// Dodanie wynik�w zamiany liczby do siebie
	{
		s = s + sum [i];
	}

	cout << s << endl;	// Wy�wietlenie ostatecznego wyniku

	system ("PAUSE");
	return 0;
}