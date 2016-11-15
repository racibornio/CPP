#include <iostream>
#include <conio.h>

int delta(int a, int b, int c);

int main()
{
	int wynikDelty = delta(3, 4, 5);
	std::cout << "Delta wynosi " << wynikDelty << std::endl;
	if (wynikDelty > 0)
	{
		std::cout << "Mamy dwa miejsca zerowe" << std::endl;
	}
	else if (wynikDelty == 0)
	{
		std::cout << "Mamy jedno miejsce zerowe" << std::endl;
	}
	else
	{
		std::cout << "Delta jest ujemna a wiec nie ma miejsc zerowych." << std::endl;
	}

	_getch();
    return 0;
}

int delta(int a, int b, int c)
{
	int delta = b * b - 4 * a * c;
	return delta;
}
