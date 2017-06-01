#include <conio.h>
#include <iostream>
#include "stdafx.h"

void sortArrayByGnomeSorting();

int main()
{
	sortArrayByGnomeSorting();

	_getch();
    return 0;
}

void sortArrayByGnomeSorting()
{
	constexpr int elementsSum = 10;
	int tab[elementsSum];
	int temp = 0;

	for (int i = 0; i < 10; i++)
	{
		std::cout << "Give a value for cell no. " << i << "...";
		std::cin >> tab[i];
	}

	for (int i = 0; i < elementsSum; i++)
	{
		std::cout << "Given array - " << i << " = " << tab[i] << std::endl;
	}

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

	for (int i = 0; i < elementsSum; i++)
	{
		std::cout << "Sorted array - " << i << " = " << tab[i] << std::endl;
	}
}