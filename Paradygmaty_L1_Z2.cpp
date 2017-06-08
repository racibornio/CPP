#include <conio.h>
#include <iostream>
#include "stdafx.h"
#include <math.h>
#include <cstdlib>
#include <ctime>
#include "windows.h"

constexpr int elementsSum = 10;
int tab[elementsSum];
int temp = 0;

class Sorting
{
private:
	void generateNumbers();
	void sortNumbers();
	void displayGeneratedNumbers();

public:
	Sorting();
	void displaySortedNumbers();
	~Sorting();
};

int main()
{
	Sorting* gnomeSorting = new Sorting();
	gnomeSorting->displaySortedNumbers();
	delete gnomeSorting;
	
	for (int i = 0; i < elementsSum; i++)
	{
		std::cout << "Clear array - " << i << " = " << tab[i] << std::endl;
	}

	std::cout << "Press any key...";
	_getch();
	return 0;
}

Sorting::Sorting()
{
	srand(time(NULL));
	generateNumbers();
	sortNumbers();
}

Sorting::~Sorting()
{
	/*for (int i = 0; i < elementsSum; i++)
	{
		tab[i] = NULL;
	}*/
	std::cout << "The object has been removed and the memory released." << std::endl;
}

void Sorting::generateNumbers()
{
	//std::cout << "Please wait...generating random numbers is taking place..." << std::endl;
	for (int i = 0; i < elementsSum; i++)
	{
		tab[i] = rand()%100+i;
		//Sleep(1341);
		//std::cout << elementsSum - i << std::endl;
	}

	displayGeneratedNumbers();
}

void Sorting::displayGeneratedNumbers()
{
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
	//Sorting gnomeSorting = Sorting();
	//gnomeSorting.getNumbers();
	// gnomeSorting.sortNumbers();

	for (int i = 0; i < elementsSum; i++)
	{
		std::cout << "Sorted array - " << i << " = " << tab[i] << std::endl;
	}
}
