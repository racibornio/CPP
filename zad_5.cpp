#include <iostream>
#include <math.h>
#include <cstdlib>
#include <algorithm>
#include <conio.h>
#include <ctime>

void fulfillTable(int table[]);
void findMinimum(int table[]);
void findMaximum(int table[]);
void clearTable(int table[]);
void sortTable(int table[]);
void findCertainElement(int table[]);

int main()
{
	int table[100];
		
	//first part - fulfill the table with random values and display it
	fulfillTable(table);
	//second part - find min value
	findMinimum(table);
	//third part - find max value
	findMaximum(table);
	//fourth part - sort the content
	sortTable(table);
	//fifth part - check if certain number exists and return its index if so
	findCertainElement(table);
	//last part - clear the table
	clearTable(table);

	_getch();
	return 0;
}

void fulfillTable(int table[])
{
	for (int i = 0; i < 100; i++)
	{
		table[i] = rand() % 200 + 1;
		std::cout << i << " place has value " << table[i] << std::endl;
	}
}

void findMinimum(int table[])
{
	int minValue = table[0];
	for (int i=0; i < 100; i++)
	{
		if (table[i] < minValue)
		{
			minValue = table[i];
		}
	}
	std::cout << "The minimum is " << minValue << std::endl;
}

void findMaximum(int table[])
{
	int maxValue = 0;
	for (int i = 0; i < 100; i++)
	{
		if (table[i] > maxValue)
		{
			maxValue = table[i];
		}
	}
	std::cout << "The maximum is " << maxValue << std::endl;
}

void clearTable(int table[])
{
	for (int i = 0; i < 100; i++)
	{
		table[i] = 0;
	}
}

void sortTable(int table[])
{
	std::sort(table, table + 100);
	std::cout << "Sorted array looks like this: " << std::endl;
	for (int i = 0; i < 100; i++)
	{
		std::cout << i + 1 << " = " << table[i] << std::endl;
	}
}

void findCertainElement(int table[])
{
	int sampleNumber = rand() % 200 + 1;
	int indexOfCertainElement = NULL;
	for (int i = 0; i < 100; i++)
	{
		if (table[i] == sampleNumber)
		{
			indexOfCertainElement = i;
			std::cout << "Random value " << sampleNumber << " exists in the table and its index is " << i << std::endl;
			break;
		}
		else
		{
			std::cout << "Unfortunatelly random value " << sampleNumber << " has not been found in the table." << std::endl;
			break;
		}
	}
}