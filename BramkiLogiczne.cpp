#include "stdafx.h"
#include <conio.h>
#include <iostream>

void countOperators();
void postulaty();

int main()
{
	countOperators();
	postulaty();
	_getch();
    return 0;
}

void countOperators()
{
	short a = 2;
	short b = 2;
	short c = 2;
	bool castedA;
	bool castedB;

	 while ((a != 0) && (a != 1))
	 {
		 std::cout << "Enter a: ";
		 std::cin >> a;
		 castedA = (bool) a;
	 }

	while ((b != 0) && (b != 1))
	{
		std::cout << "Enter b: ";
		std::cin >> b;
		castedB = (bool)b;
	}

	std::cout << "a=" << castedA << " !a=" << !castedA << std::endl;
	std::cout << "b=" << castedB << " !b=" << !castedB << std::endl;
	std::cout << "a=" << castedA << " i b=" << castedB << " OR=" << (castedA | castedB) << std::endl;
	std::cout << "a=" << castedA << " i b=" << castedB << " AND=" << (castedA & castedB) << std::endl;
	std::cout << "a=" << castedA << " i b=" << castedB << " NOR=" << !(castedA | castedB) << std::endl;
	std::cout << "a=" << castedA << " i b=" << castedB << " NAND=" << !(castedA & castedB) << std::endl;
	((a == true && b == false) || (a == false && b == true)) ? std::cout << "a=" << castedA << " i b=" << castedB << " XOR=1" << std::endl : std::cout << "a=" << castedA << " i b=" << castedB << " XOR=0" << std::endl;
	std::cout << std::endl;
}

void postulaty()
{
	short a = 2;
	short b = 2;
	short c = 2;
	bool castedA;
	bool castedB;
	bool castedC;

	while ((a != 0) && (a != 1))
	{
		std::cout << "Enter a: ";
		std::cin >> a;
		castedA = (bool)a;
	}

	while ((b != 0) && (b != 1))
	{
		std::cout << "Enter b: ";
		std::cin >> b;
		castedB = (bool)b;
	}

	while ((c != 0) && (c != 1))
	{
		std::cout << "Enter c: ";
		std::cin >> c;
		castedC = (bool)c;
	}

	std::cout << "A*(B+C) = " << (castedA & (castedB | castedC)) << " tozsame z (A*B)+(A*C) = " << ((castedA & castedB) | (castedA & castedC)) << std::endl;
}