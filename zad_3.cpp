#include "stdafx.h"
#include <iostream>
#include <conio.h>

void wyliczFunkcjeUzywajacFor();
void wyliczFunkcjeUzywajacWhile();
void wyliczFunkcjeUzywajacDoWhile();
void tabliczkaMnozeniaDoStuDlaFor();
void tabliczkaMnozeniaDoStuDlaWhile();

int x = 0;
int y;

int main()
{
	wyliczFunkcjeUzywajacFor();
	wyliczFunkcjeUzywajacWhile();
	wyliczFunkcjeUzywajacDoWhile();
	tabliczkaMnozeniaDoStuDlaFor();
	tabliczkaMnozeniaDoStuDlaWhile();

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

void tabliczkaMnozeniaDoStuDlaFor()
{
	for (int i=1; i<=10; i++)
	{
		for (int j=1; j <= 10; j++)
		{
			std::cout << i << "x" << j << "=" << i*j << " ";
			if (j == 10)
			{
				std::cout << std::endl;
			}
		}
	}
	std::cout << std::endl;
}

void tabliczkaMnozeniaDoStuDlaWhile()
{
	int i = 1, j = 1;
	while (i <= 10)
	{
		while (j <= 10)
		{
			std::cout << i << "x" << j << "=" << i*j << " ";
			
			if (j == 10)
			{
				std::cout << std::endl;
			}
			j++;
		}

		j = 1;
		i++;
	}
}