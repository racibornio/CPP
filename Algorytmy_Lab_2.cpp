#include <conio.h>
#include <iostream>
#include "stdafx.h"

void sortArrayByGnomeSorting();
void sortArrayByInsertionSorting();

int main()
{
	sortArrayByGnomeSorting();
	sortArrayByInsertionSorting();

	_getch();
	return 0;
}

void sortArrayByGnomeSorting()
{
	constexpr int elementsSum = 10;
	int tab[elementsSum];
	int temp = 0;

	for (int i = 0; i < elementsSum; i++)
	{
		std::cout << "Give a value for cell no. " << i << "...";
		std::cin >> tab[i];
	}

	for (int i = 0; i < elementsSum; i++)
	{
		std::cout << "Given array - " << i << " = " << tab[i] << std::endl;
	}

	int indexToStart = 0;
	while (indexToStart < elementsSum - 1)
	{
		if (tab[indexToStart] > tab[indexToStart + 1])
		{
			temp = tab[indexToStart];
			tab[indexToStart] = tab[indexToStart + 1];
			tab[indexToStart + 1] = temp;
			indexToStart = 0;
		}
		else
		{
			indexToStart++;
		}	
	}

	for (int i = 0; i < elementsSum; i++)
	{
		std::cout << "Sorted array - " << i << " = " << tab[i] << std::endl;
	}
}

void sortArrayByInsertionSorting()
{
	constexpr int elementsSum = 14;
	int tab[elementsSum] = { 5342, 426554, 54, 5213, 6, 4, 2, 65, 652, 53, 2222, 14, 594302, 54830 };
	int temp = 0;

	for (int i = 0; i < elementsSum; i++)
	{
		std::cout << "Given array - " << i << " = " << tab[i] << std::endl;
	}

	for (int iterator = 0; iterator < elementsSum - 1; iterator++)
	{
		for (int restIterator = iterator + 1; restIterator < elementsSum; restIterator++)
		{
			if (tab[iterator] > tab[restIterator])
			{
				temp = tab[iterator];
				tab[iterator] = tab[restIterator];
				tab[restIterator] = temp;
			}
		}
	}

	for (int i = 0; i < elementsSum; i++)
	{
		std::cout << "Sorted array - " << i << " = " << tab[i] << std::endl;
	}
}