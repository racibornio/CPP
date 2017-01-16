#include "stdafx.h"
#include <iostream>
#include <conio.h>

void wypisz(int iLiczba);
void wypiszZReferencji(int & iLiczba);

int main()
{
	int mojaLiczba = 990;
	std::cout << "mojaLiczba = " << mojaLiczba << std::endl;
	wypisz(mojaLiczba);
	std::cout << "mojaLiczba = " << mojaLiczba << std::endl << std::endl;

	wypiszZReferencji(mojaLiczba);
	std::cout << "mojaLiczba = " << mojaLiczba << std::endl;

	std::cout << "WCISNIJ DOWOLNY KLAWISZ";
	_getch();
    return 0;
}

void wypisz(int iLiczba)
{
	std::cout << "Z funkcji :: Wartosc liczby wynosi " << iLiczba << std::endl;
	iLiczba += 10;
	std::cout << "Z funkcji :: Wartosc liczby wynosi " << iLiczba << std::endl;
}

void wypiszZReferencji(int & iLiczba)
{
	std::cout << "Wartosc liczby podanej do referencji to " << iLiczba << " a jej adres to " << &iLiczba << std::endl;
	iLiczba += 10;
	std::cout << "Wartosc liczby podanej do referencji po zwiekszeniu to " << iLiczba << " a jej adres to " << &iLiczba << std::endl;
}