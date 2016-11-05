// project_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int drugieZadanie();
int trzecieZadanie();
int czwarteZadanie();

int _tmain(int argc, _TCHAR* argv[])
{
	float a, b, pole;
	cout << "Witaj w programie obliczajacym pole prostokata!" << endl;
	cout << "Podaj dlugosc boku A: ";
	cin >> a;
	cout << "Podaj dlugosc boku B: ";
	cin >> b;
	pole = a * b;
	cout << fixed; //flaga
	cout << setprecision(2); //ustawienie precyzji
	cout << "Pole prostokata o boku A = " << a << " i boku B = " << b;
	cout << " wynosi " << pole << "." << endl << endl;

	trzecieZadanie();

	czwarteZadanie();

	char wybor;
	cout << "Czy chcesz wyswietlic drugie zadanie?" << endl;
	cin >> wybor;

	if (wybor == 'y' || wybor == 'Y')
	{
		drugieZadanie();
	}

	cout << "WCISNIJ DOWOLNY KLAWISZ...";
	_getch();
	return 0;
}

int drugieZadanie()
{
	cout << "Drugie zadanie" << endl;
	int a, b;
	float pole;
	printf("Witaj w drugim wariancie programu obliczajacego pole prostokata!");
	printf("\nPodaj dlugosc boku A: ");
	scanf_s("%ld", &a);
	printf("\nPodaj dlugosc boku B: ");
	scanf_s("%ld", &b);
	pole = a*b;
	printf("\nPole prostokata o boku A = %ld i boku B = %ld wynosi %10.2E", a, b, pole);
	cout << "WCISNIJ DOWOLNY KLAWISZ...";
	return 0;
}

int trzecieZadanie()
{
	cout << "Witaj w zadaniu trzecim!" << endl;
	float pi = 3.14;
	cout << "Oto wartosc liczby PI: " << pi << " a jej pierwiastek kwadratowy to: " << sqrt(pi) << endl << endl;
	return 0;
}

int czwarteZadanie()
{
	cout << "Witaj w zadaniu czwartym!" << endl;
	float x, y;
	cout << "Podaj wartosc dla X: ";
	cin >> x;
	cout << "Podaj wartosc dla Y: ";
	cin >> y;
	float suma = x + y, roznica = y - x, iloczyn = x * y, iloraz = y / x;
	cout << "Suma " << x << " i " << y << " wynosi " << suma << endl;
	cout << "Roznica " << x << " i " << y << " wynosi " << roznica << endl;
	cout << "Iloczyn " << x << " i " << y << " wynosi " << iloczyn << endl;
	cout << "Iloraz " << x << " i " << y << " wynosi " << iloraz << endl;

	return 0;
}
