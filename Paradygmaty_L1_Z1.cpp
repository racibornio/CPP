#include <conio.h>
#include <iostream>
#include "stdafx.h"
#include <math.h>

constexpr int elementsSum = 10;
int tab[elementsSum];
int temp = 0;

class Sorting
{
private:
	void getNumbers();
	void sortNumbers();

public:
	void displaySortedNumbers();
};

int main()
{
	Sorting gnomeSorting = Sorting();
	gnomeSorting.displaySortedNumbers();

	std::cout << "Press any key...";
	_getch();
    return 0;
}

void Sorting::getNumbers()
{
	for (int i = 0; i < elementsSum; i++)
	{
		std::cout << "Give a value for cell no. " << i << "...";
		std::cin >> tab[i];
	}

	for (int i = 0; i < elementsSum; i++)
	{
		std::cout << "Given array - " << i << " = " << tab[i] << std::endl;
	}
}

void Sorting::sortNumbers()
{
	for (int runs = 0; runs < elementsSum; runs++)
	{

		for (int i = 0; i < elementsSum - 1; i++)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				temp = 0;
			}
		}
	}
}

void Sorting::displaySortedNumbers()
{
	Sorting gnomeSorting = Sorting();
	gnomeSorting.getNumbers();
	gnomeSorting.sortNumbers();

	for (int i = 0; i < elementsSum; i++)
	{
		std::cout << "Sorted array - " << i << " = " << tab[i] << std::endl;
	}
}
