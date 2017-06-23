#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "stdafx.h"

class StudentEdukacja
{
	friend class Sortowanie;
private:
	int numer_indeksu;
};

class Sortowanie
{
public:
	void utworz_studentow();
	void sortuj_studentow();
	const static int elementsSum = 10;
	StudentEdukacja grupa[elementsSum];
};

void Sortowanie::utworz_studentow()
{
	srand(time(NULL));
	for (int i = 0; i < elementsSum; i++)
	{
		grupa[i].numer_indeksu = rand() % 100;
	}
	
	for (int i = 0; i < elementsSum; i++)
	{
		std::cout << "Numer indeksu studenta " << i << " to " << grupa[i].numer_indeksu << std::endl;
	}
}

void Sortowanie::sortuj_studentow()
{
	int temp = 0;
	for (int runs = 0; runs < elementsSum; runs++)
	{
		for (int i = 0; i < elementsSum - 1; i++)
		{
			if (grupa[i].numer_indeksu > grupa[i + 1].numer_indeksu)
			{
				temp = grupa[i].numer_indeksu;
				grupa[i].numer_indeksu = grupa[i + 1].numer_indeksu;
				grupa[i + 1].numer_indeksu = temp;
				temp = 0;
			}
		}
	}

	for (int i = 0; i < elementsSum; i++)
	{
		std::cout << "Po posortowaniu numer indeksu studenta " << i << " to " << grupa[i].numer_indeksu << std::endl;
	}
}

int main()
{
	Sortowanie studenci;
	studenci.utworz_studentow();
	studenci.sortuj_studentow();
	_getch();
    return 0;
}