#include <iostream>
#include <math.h>
#include <cstdlib>
#include <algorithm>

void zadNoOne_creatingSortingAndSearchingMinAndMax();

int main()
{
	zadNoOne_creatingSortingAndSearchingMinAndMax();
	return 0;
}

void zadNoOne_creatingSortingAndSearchingMinAndMax()
{
	int firstTableSize = 100;
	int tablicaStu[firstTableSize];
	int maxValue = 0;

	//create table and find max value
	for (int i=0; i < firstTableSize; i++)
	{
		tablicaStu[i] = rand();
		std::cout << i << " place has value " << tablicaStu[i] << std::endl;
		if (tablicaStu[i] > maxValue)
		{
			maxValue = tablicaStu[i];
		}		
	}

	int minValue = tablicaStu[0];
	
	//find minimum
	for (int i=0; i < firstTableSize; i++)
	{
		if (tablicaStu[i] < minValue)
		{
			minValue = tablicaStu[i];
		}
	}

	//sort table
	std::sort(tablicaStu, tablicaStu + 100);
	std::cout << "Sorted array looks like this: " << std::endl;
	for (int i=0; i < firstTableSize; i++)
	{
		std::cout << i+1  << " = " << tablicaStu[i] << std::endl;
	}

	std::cout << "Wartosc min wyszla " << minValue << std::endl;
	std::cout << "Wartosc max wyszla " << maxValue << std::endl;

}
