#include "stdafx.h"
#include <iostream>
#include <conio.h>

void wyliczFunkcjeUzywajacFor();
void wyliczFunkcjeUzywajacWhile();
void wyliczFunkcjeUzywajacDoWhile();

int x = 0;
int y;

int main()
{
	wyliczFunkcjeUzywajacFor();
	wyliczFunkcjeUzywajacWhile();
	wyliczFunkcjeUzywajacDoWhile();

	std::cout << "WCISNIJ DOWOLNY KLAWISZ...";
	_getch();
    return 0;
}

void wyliczFunkcjeUzywajacFor()
{
	std::cout << "Wykonanie z petli for:" << std::endl;

	for (x = 0; x <= 10; ++x)
	{
		y = 3 * x;
		std::cout << y << std::endl;
	}

	x = 0;
}

void wyliczFunkcjeUzywajacWhile()
{
	std::cout << "Wykonanie z petli do/while:" << std::endl;

	do
	{
		y = 3 * x;
		std::cout << y << std::endl;
		++x;
	} while (x <= 10);

	x = 0;
}

void wyliczFunkcjeUzywajacDoWhile()
{
	std::cout << "Wykonanie z petli while:" << std::endl;
	
	while (x <= 10)
	{
		y = 3 * x;
		std::cout << y << std::endl;
		++x;
	}

	x = 0;
}