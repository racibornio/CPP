//#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <conio.h>
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;
typedef unsigned int uint;
typedef unsigned long ulong;


uint fibonacci(uint wartosc)
{
	ulong pierwszy = 0;
	ulong drugi = 1;
	ulong kolejny = pierwszy + drugi;
	
	for(int i = 0; i <= wartosc; i++)
	{
		if (i == 0 || i == 1)
		{
			kolejny = 1;
			cout << "Wyraz nr " << i << " wynosi " << kolejny << endl;
		}

		pierwszy = drugi;
		drugi = kolejny;
		kolejny = pierwszy + drugi;
		cout << "Wyraz nr " << i << " wynosi " << kolejny << endl;
	}
}

int main(int argc, char** argv)
//int _tmain(int argc, _TCHAR* argv[])
{
	fibonacci(10);
	return 0;
}