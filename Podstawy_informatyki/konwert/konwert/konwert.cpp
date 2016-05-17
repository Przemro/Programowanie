// konwert.cpp : Defines the entry point for the console application.
// Zadaniem programu jest zamiana liczby zapisanej w systemie dziesietnym na liczbe w systemie binarnym
// Dziala tylko na liczbach dodanich

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a,j=31;
	char tab[32];

	cout << "Program przeliczajcy liczbe dziesietna na binarna,\nwynik jest wyswietlony w odwrotej kolejnosci" << endl;

	cout << "Podaj liczbe: ";
	cin >> a;

	for (int n = 0; n == 31; n++)	// Ustawienie znakow tabeli na 0
	{
		tab[n]=0;
	}

	for (int i = 0; i != a; i)	// Przeliczanie liczby z dziesietenj na binarna oraz zapis do tablicy
	{
		if (a%2==0)
		{
			a=a/2;
			cout << "0";
			tab[j]=0;
			j--;
		}
		else
		{
			a=a/2;
			cout << "1";
			tab[j]=1;
			j--;
		}
	}

	cout << endl;	// Wyœwietlenie tablicy od konca

	system("PAUSE");
	return 0;
}

