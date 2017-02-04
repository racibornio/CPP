#include <iostream>
#include <math.h>
#include <cstdlib>
#include <algorithm>

void creatingSortingAndSearchingMinAndMax();

int main()
{
	creatingSortingAndSearchingMinAndMax();
	return 0;
}

void creatingSortingAndSearchingMinAndMax()
{
	int firstTableSize = 100;
	int tablicaStu[firstTableSize];
	int maxValue = 0;

	for (int i=0; i < firstTableSize; i++)
	{
		tablicaStu[i] = rand() * i;
		std::cout << i << " jest " << tablicaStu[i] << std::endl;
		if (tablicaStu[i] > maxValue)
		{
			maxValue = tablicaStu[i];
		}		
	}

	int minValue = tablicaStu[0];
	
	for (int i=0; i < firstTableSize; i++)
	{
		if (tablicaStu[i] < minValue)
		{
			minValue = tablicaStu[i];
		}
	}

	std::sort(tablicaStu, tablicaStu + 100);
	std::cout << "Sorted array looks like this: " << std::endl;
	for (int i=0; i < firstTableSize; i++)
	{
		std::cout << i+1  << " = " << tablicaStu[i] << std::endl;
	}

	std::cout << "Wartosc min wyszla " << minValue << std::endl;
	std::cout << "Wartosc max wyszla " << maxValue << std::endl;
}
