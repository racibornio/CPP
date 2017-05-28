#include <conio.h>
#include <iostream>
#include "stdafx.h"

void GetAgeTableOrdered();

int _tmain(int argc, _TCHAR* argv[])
{
	GetAgeTableOrdered(); 

	_getch();
	return 0;
}

void GetAgeTableOrdered()
{
	int Age[9] = {100, 4, 11, 2, 9, 15, 41, 8, 31};
	int Next[9];

	for (int i = 0; i < 9; i++)
	{
		std::cout << "i = " << i << " is " << Age[i] << std::endl;
	}

	int Minimum = Age[0];
	int TheLowestValueIndex = 0;
	for (int i = 0; i < 9; i++)
	{
		if (Age[i] < Minimum)
		{
			Minimum = Age[i];
			TheLowestValueIndex = i;
		}
	}
	std::cout << "The minimum is " << Minimum << " and its index is " << TheLowestValueIndex << std::endl;
	
	int AlfaInterval = Age[1] - Minimum;
	int BetaInterval = 0;
	int NextValue = 0;
	for (int i = 1; i < 9; i++)
	{
		if (((Age[i] - Minimum) < AlfaInterval) && ((Age[i] - Minimum) > 0))
		{
			BetaInterval = Age[i];
		}
		else
		{
			BetaInterval = AlfaInterval;
		}
		NextValue = BetaInterval + Minimum;
	}
	int NextValueIndex = 0;
	for (int i = 1; i < 9; i++)
	{
		if (Age[i] == NextValue)
		{
			NextValueIndex = i;
		}
	}
	std::cout << "Next interval = " << BetaInterval << std::endl;
	std::cout << "The value of next is " << NextValue << ", exists in " << NextValueIndex << std::endl;
	Next[0] = TheLowestValueIndex;
	Next[1] = NextValueIndex;


	for (int i = 0; i < 9; i++)
	{
		std::cout << "The Next[" << i << "] keeps Age[] index no. " << Next[i] << ", value is " << Age[Next[i]] << std::endl;
	}
}