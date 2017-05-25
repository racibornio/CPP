#include <conio.h>
#include <iostream>
#include "stdafx.h"
#include <math.h>

const float PI = 3.14;

class kolo
{
private:
	double promien;
	double pole, obwod;
	void podaj_promien();
	void obliczaj();
	void pokaz_wyniki();
public:
	void przetwarzaj();
};

int _tmain(int argc, _TCHAR* argv[])
{
	kolo k1, k2;
	k1.przetwarzaj();
	k2.przetwarzaj();

	_getch();
	return 0;
}

void kolo::podaj_promien()
{
	printf("Podaj promien:");
	scanf_s("%lf", &promien);
}

void kolo::obliczaj()
{
	pole = PI*pow(promien,2.0);
	obwod = 2 * PI*promien;
}

void kolo::pokaz_wyniki()
{
	printf("\n Parametry kola: ");
	printf("\n Promien = %.31E", promien);
	printf("\n Pole = %.31E", pole);
	printf("\n Obwod = %.31E\n\n", obwod);
}

void kolo::przetwarzaj()
{
	podaj_promien();
	obliczaj();
	pokaz_wyniki();
}