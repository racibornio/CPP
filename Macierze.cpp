#include <iostream>
#include <conio.h>

int main()
{
	int macierz1[2] = {1, 0};
	int macierz2[2] = {2, 1};
	int mnoznik[2] = {3, 1};

	int macierzWynikowa[2];
	macierzWynikowa[0] = macierz1[0] * mnoznik[0] + macierz1[1] * mnoznik[1];
	macierzWynikowa[1] = macierz2[0] * mnoznik[0] + macierz2[1] * mnoznik[1];

	for (int i = 0; i < 2; i++)
	{
		std::cout << "Macierz wynikowa w komorce " << i << " ma wartosc " << macierzWynikowa[i] << std::endl;
	}

	int macierz[2][2] = { {1, 0}, {2, 1} };
	for (int i=0; i<2; i++)
	{
		for (int j = 0; j < 2; ++j)
		{
			std::cout << macierz[i][j];
		}
		std::cout << std::endl;
	}

	int macWynik[2];
	macWynik[0] = macierz[0][0] * mnoznik[0] + macierz[0][1] * mnoznik[1];
	macWynik[1] = macierz[1][0] * mnoznik[0] + macierz[1][1] * mnoznik[1];
	
	for (int i = 0; i < 2; i++)
	{
		std::cout << "Na miejscu " << i << " dostajemy: " << macWynik[i] << std::endl;
	}

	int m1[2][2] = { {2, 3}, {1, 4} };
	int m2[2][2] = { {3, 4}, {2, 0} };
	int mR[2][2];
	mR[0][0] = m1[0][0] * m2[0][0] + m1[0][1] * m2[1][0];
	mR[0][1] = m1[0][0] * m2[0][1] + m1[0][1] * m2[1][1];
	mR[1][0] = m1[1][0] * m2[0][0] + m1[1][1] * m2[1][0];
	mR[1][1] = m1[1][0] * m2[0][1] + m1[1][1] * m2[1][1];

	std::cout << "Macierz wynikowa: " << std::endl;
	for (int i=0; i<2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			std::cout << mR[i][j];
		}
		std::cout << std::endl;
	}

	_getch();
	return 0;
}

