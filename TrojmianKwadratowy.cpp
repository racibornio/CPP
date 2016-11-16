#include <iostream>
#include <conio.h>
#include <math.h>

void przyjmijWspolczynniki();
double wyliczDelte(double a, double b, double c);
double wyliczPierwszeMiejsceZerowe(double wynikDelty, double a, double b);
double wyliczDrugieMiejsceZerowe(double wynikDelty, double a, double b);
void wyliczWspolrzedneWierzcholka(double wynikDelty, double a, double b);
double a, b, c;

int main()
{
	przyjmijWspolczynniki();

	double wynikDelty = wyliczDelte(a, b, c);

	if (wynikDelty > 0)
	{
		double pierwszeMiejsce = wyliczPierwszeMiejsceZerowe(wynikDelty, a, b);
		double drugieMiejsce = wyliczDrugieMiejsceZerowe(wynikDelty, a, b);
		std::cout << "Mamy dwa miejsca zerowe: " << pierwszeMiejsce << " i " << drugieMiejsce << std::endl;
		wyliczWspolrzedneWierzcholka(wynikDelty, a, b);
	}
	else if (wynikDelty == 0)
	{
		double pierwszeMiejsce = wyliczPierwszeMiejsceZerowe(wynikDelty, a, b);
		std::cout << "Mamy jedno miejsce zerowe: " << pierwszeMiejsce << std::endl;
		wyliczWspolrzedneWierzcholka(wynikDelty, a, b);
	}
	else
	{
		std::cout << "Delta jest ujemna wiec funkcja nie ma miejsc zerowych w ciele liczb rzeczywistych." << std::endl;
	}

	std::cout << "Wcisnij dowolny klawisz aby zamknac okno..." << std::endl;
	_getch();
    return 0;
}

void przyjmijWspolczynniki()
{
	while (a == 0)
	{
		std::cout << "Podaj wartosc wspolczynnika A..." << std::endl;
		std::cin >> a;
	}

	while (b == 0)
	{
		std::cout << "Podaj wartosc wspolczynnika B..." << std::endl;
		std::cin >> b;
	}

	while (c == 0)
	{
		std::cout << "Podaj wartosc wspolczynnika C..." << std::endl;
		std::cin >> c;
	}
}

double wyliczDelte(double a, double b, double c)
{
	double delta = b * b - 4 * a * c;
	std::cout << "Delta wynosi " << delta << " a jej pierwiastek " << sqrt(delta) << std::endl;
	return delta;
}

double wyliczPierwszeMiejsceZerowe(double wynikDelty, double a, double b)
{
    double pierwszeMiejsceZerowe = ((-b - sqrt(wynikDelty)) / (2 * a));
    return pierwszeMiejsceZerowe;
}


double wyliczDrugieMiejsceZerowe(double wynikDelty, double a, double b)
{
	double drugieMiejsceZerowe = ((-b + sqrt(wynikDelty)) / (2 * a));
	return drugieMiejsceZerowe;
}

void wyliczWspolrzedneWierzcholka(double wynikDelty, double a, double b)
{
	double wspolrzednaX, wspolrzednaY;
	wspolrzednaX = (- b) / (2 * a);
	wspolrzednaY = (- wynikDelty) / (4 * a);
	std::cout << "Wspolrzedne wierzcholka paraboli: X = " << wspolrzednaX << ", Y = " << wspolrzednaY << std::endl;
}