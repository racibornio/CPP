#include <conio.h>
#include <iostream>
#include "stdafx.h"

class TrojmianKwadratowy
{
private:
	int a = 0, b = 0, c = 0;
	int liczbaPierwiastkow = 0;
	double pierwszeMiejsceZerowe = 0, drugieMiejsceZerowe = 0;

public:
	void podaj_wspolczynniki();
	void oblicz_pierwiastki();
	void wyswietl_wynik();
};

int main()
{
	TrojmianKwadratowy WyliczTrojmian = TrojmianKwadratowy();
	WyliczTrojmian.podaj_wspolczynniki();
	WyliczTrojmian.oblicz_pierwiastki();
	WyliczTrojmian.wyswietl_wynik();
	_getch();
    return 0;
}

void TrojmianKwadratowy::podaj_wspolczynniki()
{
	while (a == 0)
	{
		std::cout << "Podaj a:..." << std::endl;
		std::cin >> a;
	}
	while (b == 0)
	{
		std::cout << "Podaj b:..." << std::endl;
		std::cin >> b;
	}
	while (c == 0)
	{
		std::cout << "Podaj c:..." << std::endl;
		std::cin >> c;
	}
}

void TrojmianKwadratowy::oblicz_pierwiastki()
{
	int delta = b * b - 4 * a * c;
	if (delta > 0)
	{
		liczbaPierwiastkow = 2;
	}
	else if (delta == 0)
	{
		liczbaPierwiastkow = 1;
	}

	switch (liczbaPierwiastkow)
	{
	case 1 : 
		pierwszeMiejsceZerowe = (-b - sqrt(delta)) / 2 * a;
		break;
	case 2 :
		pierwszeMiejsceZerowe = (-b - sqrt(delta)) / 2 * a;
		drugieMiejsceZerowe = (-b + sqrt(delta)) / 2 * a;
		break;
	default:
		pierwszeMiejsceZerowe = 0;
		drugieMiejsceZerowe = 0;
		break;
	}
}

void TrojmianKwadratowy::wyswietl_wynik()
{
	if (liczbaPierwiastkow == 2)
	{
		std::cout << "Pierwsze miejsce zerowe to " << pierwszeMiejsceZerowe << " a drugie to " << drugieMiejsceZerowe << std::endl;
	}
	else if (liczbaPierwiastkow == 1)
	{
		std::cout << "Miejsce zerowe to " << pierwszeMiejsceZerowe << std::endl;
	}
	else if (liczbaPierwiastkow == 0)
	{
		std::cout << "Brak pierwiastkow w ciele liczb rzeczywistych." << std::endl;
	}
}