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
	
	int tablicaStu[10];
	int maxValue = 0;

	for (int i=0; i<10; i++)
	{
		tablicaStu[i] = rand();
		std::cout << i << " jest " << tablicaStu[i] << std::endl;
		if (tablicaStu[i] > maxValue)
		{
			maxValue = tablicaStu[i];
		}
		
		
	}

	int minValue = tablicaStu[0];
	
	for (int i=0; i<10; i++)
	{
		if (tablicaStu[i] < minValue)
		{
			minValue = tablicaStu[i];
		}
	}

	std::sort(tablicaStu, tablicaStu + 9);
	std::cout << "Sorted array looks like this: " << std::endl;
	for (int i=0; i<10; i++)
	{
		std::cout << tablicaStu[i] << std::endl;
	}

	std::cout << "Wartosc max wyszla " << maxValue << std::endl;
	std::cout << "Wartosc min wyszla " << minValue << std::endl;
}
