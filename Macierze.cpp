#include <iostream>
#include <conio.h>
#include "string"

void mnozenie2na1();
void mnozenie4na1();
void mnozenie2na2();

struct MatrixData
{
	int * matrix;
	int wiersze;
	int kolumny;
};

MatrixData createMatrix();
int * createMatrix(int size);
int * createMatrix(int size, int size2);
void deleteMatrix(int * matrix);
std::string getSeparator(int k, int kolumna);

int main()
{
	mnozenie2na1();
	mnozenie4na1();
	mnozenie2na2();
/*
	std::cout << "How many elements put to the matrix..." << std::endl;
	int matrixSize;
	std::cin >> matrixSize;
	int * mojaTablica = createMatrix(matrixSize);
	std::cout << "The matrix size is " << matrixSize << std::endl;
	std::cout << "The matrix is " << mojaTablica << std::endl;

	for (int i=0; i<matrixSize; i++)
	{
		std::cout << "Komorka nr [" << i << "] ma adres: " << &mojaTablica[i] << std::endl;
	}
*/
	MatrixData matrixNo1 = createMatrix();
	std::cout << matrixNo1.matrix << std::endl;
	std::cout << matrixNo1.wiersze << std::endl;
	std::cout << matrixNo1.kolumny << std::endl;

	_getch();
	return 0;
}

void mnozenie2na1()
{
	int macierz1[2] = { 1, 0 };
	int macierz2[2] = { 2, 1 };
	int mnoznik[2] = { 3, 1 };

	int macierzWynikowa[2];
	macierzWynikowa[0] = macierz1[0] * mnoznik[0] + macierz1[1] * mnoznik[1];
	macierzWynikowa[1] = macierz2[0] * mnoznik[0] + macierz2[1] * mnoznik[1];

	std::cout << "Mnozenie macierzy:" << std::endl;
	std::cout << "[" << macierz1[0] << " " << macierz1[1] << "]" << std::endl;
	std::cout << "[" << macierz2[0] << " " << macierz2[1] << "]" << std::endl;
	std::cout << "Przez macierz:" << std::endl;
	std::cout << "[" << mnoznik[0] << "]" << std::endl;
	std::cout << "[" << mnoznik[1] << "]" << std::endl;
	std::cout << "Daje macierz:" << std::endl;
	
	for (int i = 0; i < 2; i++)
	{
		std::cout << "[" << macierzWynikowa[i] << "]" << std::endl;
	}

	std::cout << std::endl;

}

void mnozenie4na1()
{
	int macierz[2][2] = { { -2, 1 },{ 1, 2 } };
	int mnoznik[2] = { 0, 4 };

	std::cout << "Mnozenie macierzy:" << std::endl;
	std::cout << "[" << macierz[0][0] << " " << macierz[0][1] << "]" << std::endl;
	std::cout << "[" << macierz[1][0] << " " << macierz[1][1] << "]" << std::endl;
	std::cout << "Przez macierz:" << std::endl;
	std::cout << "[" << mnoznik[0] << "]" << std::endl;
	std::cout << "[" << mnoznik[1] << "]" << std::endl;
	std::cout << "Daje macierz:" << std::endl;

	int macWynik[2];
	macWynik[0] = macierz[0][0] * mnoznik[0] + macierz[0][1] * mnoznik[1];
	macWynik[1] = macierz[1][0] * mnoznik[0] + macierz[1][1] * mnoznik[1];

	for (int i = 0; i < 2; i++)
	{
		std::cout << "[" << macWynik[i] << "]" << std::endl;
	}

	std::cout << std::endl;

}

void mnozenie2na2()
{
	int m1[2][2] = { { 2, 3 },{ 1, 4 } };
	int m2[2][2] = { { 3, 4 },{ 2, 0 } };
	int mR[2][2];
	mR[0][0] = m1[0][0] * m2[0][0] + m1[0][1] * m2[1][0];
	mR[0][1] = m1[0][0] * m2[0][1] + m1[0][1] * m2[1][1];
	mR[1][0] = m1[1][0] * m2[0][0] + m1[1][1] * m2[1][0];
	mR[1][1] = m1[1][0] * m2[0][1] + m1[1][1] * m2[1][1];

	std::cout << "Mnozenie macierzy:" << std::endl;
	std::cout << "[" << m1[0][0] << " " << m1[0][1] << "]" << std::endl;
	std::cout << "[" << m1[1][0] << " " << m1[1][1] << "]" << std::endl;
	std::cout << "przez macierz:" << std::endl;
	std::cout << "[" << m2[0][0] << " " << m2[0][1] << "]" << std::endl;
	std::cout << "[" << m2[1][0] << " " << m2[1][1] << "]" << std::endl;
	std::cout << "daje macierz wynikowa: " << std::endl;

	for (int i = 0; i<2; i++)
	{
		std::cout << "[" ;
		for (int j = 0; j < 2; j++)
		{
			std::cout << mR[i][j] << ((j < (2 - 1)) ? " " : "");
		}
		std::cout << "]" << std::endl;
	}

	std::cout << std::endl;
}

int * createMatrix(int size)
{
	int * matrix = new int[size];
	return matrix;
}

int * createMatrix(int size, int size2)
{
	int * matrix = new int[size * size2];
	return matrix;
}

void deleteMatrix(int * matrix)
{
	delete[] matrix;
}

MatrixData createMatrix()
{
	using namespace std;
	int w, k;
	cout << "Ile wierszy: " << endl;
	cin >> w;
	cout << "Ile kolumn: " << endl;
	cin >> k;
	int * matrix = new int[w * k];

	for (int wiersze = 0; wiersze < w; wiersze++)
	{
		for (int kolumny = 0; kolumny < k; kolumny++)
		{
			int rowoffset = wiersze * k;
			int matrixIndex = rowoffset + kolumny;
			cout << &matrix[matrixIndex] << getSeparator(k, kolumny);
		}
		cout << endl;
	}

	for (int wiersze = 0; wiersze < w; wiersze++)
	{
		for (int kolumny = 0; kolumny < k; kolumny++)
		{
			cout << "Podaj wartosc dla W[" << wiersze << "]:K[" << kolumny << "] ... ";
			int komorka;
			cin >> komorka;
			int rowoffset = wiersze * k;
			matrix[rowoffset + kolumny] = komorka;
			cout << "Komorka wynosi " << komorka << endl;
		}
	}

	for (int wiersze = 0; wiersze < w; wiersze++)
	{
		for (int kolumny = 0; kolumny < k; kolumny++)
		{
			int rawoffset = wiersze * k;
			cout << matrix[rawoffset + kolumny] << getSeparator(k, kolumny);
		}
		cout << endl;
	}

	MatrixData data = { matrix , w, k};
	return data;
}

std::string getSeparator(int k, int kolumna)
{
	std::string separatorAsString;
	if (kolumna == k - 1)
	{
		separatorAsString = "";
	}
	else
	{
		separatorAsString = ", ";
	}

	return separatorAsString;
}