#include <conio.h>
#include <iostream>
#include "stdafx.h"

void findOccurences();
void findPattern();

int _tmain(int argc, _TCHAR* argv[])
{
	//findOccurences();
	findPattern();
	_getch();
	return 0;
}

void findOccurences()
{
	char wantedLetter;
	std::cout << "Type a letter...";
	std::cin >> wantedLetter;

	char myTable[15] = { 'd', 'e', 'e', 'h', 'a', 'j', 'y', 'r', 'y', 'n', 'l', 'w', 'q', 'd', 'x' };
	short sumOfOccurences = 0;
	for (int i = 0; i < 15; i++)
	{
		if (myTable[i] == wantedLetter)
		{
			std::cout << "Index " << i << " contains given letter." << std::endl;
			sumOfOccurences++;
		}
	}
	std::cout << "Total sum of occurences is " << sumOfOccurences << std::endl;
}

void findPattern()
{
	char firstLetter, secondLetter, thirdLetter;
	
	std::cout << "Give first letter...";
	std::cin >> firstLetter;
	std::cout << "Give second letter...";
	std::cin >> secondLetter;
	std::cout << "Give third letter...";
	std::cin >> thirdLetter;

	char sourceArray[15] = { 'd', 'e', 'e', 'h', 'a', 'j', 'y', 'r', 'y', 'n', 'l', 'w', 'q', 'd', 'x' };
	
	for (int i = 0; i < 13; i++)
	{
		if (sourceArray[i] == firstLetter)
		{
			if (sourceArray[i + 1] == secondLetter)
			{
				if (sourceArray[i + 2] == thirdLetter)
				{
					std::cout << "Given pattern starts on " << i << " and ends on " << i + 2 << std::endl;
					break;
				}
			}
		}
	}
}
