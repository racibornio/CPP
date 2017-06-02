#include <conio.h>
#include <iostream>
#include "stdafx.h"

void sortArrayByGnomeSorting();
void sortArrayByInsertionSorting();

int main()
{
	//sortArrayByGnomeSorting();
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

void sortArrayByInsertionSorting()
{
	constexpr int elementsSum = 3;
	int tab[elementsSum] = {3, 2, 1};
	int temp = 0;

	for (int i = 0; i < elementsSum; i++)
	{
		std::cout << "Given array - " << i << " = " << tab[i] << std::endl;
	}

	for (int i = 0; i < elementsSum - 1; i++)
	{
		temp = tab[i];
		for (int j = elementsSum; j > 0; j--)
		{
			if (tab[i] > tab[i + 1])
			{
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
		}
	}


	for (int i = 0; i < elementsSum; i++)
	{
		std::cout << "Sorted array - " << i << " = " << tab[i] << std::endl;
	}
}