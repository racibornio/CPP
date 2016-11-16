#include <iostream>
#include <conio.h>
#include <math.h>

int wyliczDelte(int a, int b, int c);
int wyliczPierwszeMiejsceZerowe(int wynikDelty, int a, int b);
int wyliczDrugieMiejsceZerowe(int wynikDelty, int a, int b);
void wyliczWspolrzedneWierzcholka(int wynikDelty, int a, int b);
int a, b, c;

int main()
{
	a = -3, b = 4, c = 5;

	int wynikDelty = wyliczDelte(a, b, c);

	std::cout << "Delta wynosi " << wynikDelty << std::endl;
	if (wynikDelty > 0)
	{
		std::cout << "Mamy dwa miejsca zerowe" << std::endl;
		int pierwszeMiejsce = wyliczPierwszeMiejsceZerowe(wynikDelty, a, b);
		int drugieMiejsce = wyliczDrugieMiejsceZerowe(wynikDelty, a, b);
		std::cout << "Miejsca zerowe to " << pierwszeMiejsce << " i " << drugieMiejsce << std::endl;
		wyliczWspolrzedneWierzcholka(wynikDelty, a, b);
	}
	else if (wynikDelty == 0)
	{
		std::cout << "Mamy jedno miejsce zerowe" << std::endl;
		int pierwszeMiejsce = wyliczPierwszeMiejsceZerowe(wynikDelty, a, b);
		std::cout << "Miejsce zerowe to " << pierwszeMiejsce << std::endl;
		wyliczWspolrzedneWierzcholka(wynikDelty, a, b);
	}
	else
	{
		std::cout << "Delta jest ujemna a wiec nie ma miejsc zerowych." << std::endl;
	}

	_getch();
    return 0;
}

int wyliczDelte(int a, int b, int c)
{
	int delta = b * b - 4 * a * c;
	return delta;
}

int wyliczPierwszeMiejsceZerowe(int wynikDelty, int a, int b)
{
    int pierwszeMiejsceZerowe = ((-b - sqrt(wynikDelty)) / 2 * a);
    return pierwszeMiejsceZerowe;
}


int wyliczDrugieMiejsceZerowe(int wynikDelty, int a, int b)
{
	int drugieMiejsceZerowe = ((-b + sqrt(wynikDelty)) / 2 * a);
	return drugieMiejsceZerowe;
};

void wyliczWspolrzedneWierzcholka(int wynikDelty, int a, int b)
{
	int wspolrzednaX, wspolrzednaY;
	wspolrzednaX = (- b) / (2 * a);
	wspolrzednaY = (- wynikDelty) / (4 * a);
	std::cout << "Wspolrzedne wierzcholka paraboli: X = " << wspolrzednaX << ", Y = " << wspolrzednaY << std::endl;
};
