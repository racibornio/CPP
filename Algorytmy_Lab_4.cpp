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
	int Minimum_index = 0;
	for (int i = 0; i < 9; i++)
	{
		if (Age[i] < Minimum)
		{
			Minimum = Age[i];
			Minimum_index = i;
		}
	}
	std::cout << "Minimum value: " << Minimum << ", index : " << Minimum_index << std::endl;
	Next[0] = Minimum_index;
	// -> gdzieœ st¹d for
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
	}
	NextValue = BetaInterval + Minimum;
	std::cout << "NextValue: " << NextValue << std::endl;

	int NextValueIndex = 0;
	for (int i = 1; i < 9; i++)
	{
		if (Age[i] == NextValue)
		{
			NextValueIndex = i;
		}
	}
	std::cout << "Next: " << NextValue << ", NextIndex: " << NextValueIndex << std::endl;
	Next[Minimum_index] = NextValueIndex;
	std::cout << "Next[0]: " << Next[0] << ", Next[Minimum_index]: " << Next[Minimum_index] << std::endl;
	/*
	Next[1] = NextValueIndex;


	for (int i = 0; i < 9; i++)
	{

		std::cout << "The Next[" << i << "] keeps Age[] index no. " << Next[i] << ", value is " << Age[Next[i]] << std::endl;
	}
	*/
}
