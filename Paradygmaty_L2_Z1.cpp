#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <string>
#include "stdafx.h"

using namespace std;

class Osoba
{
	private:
		string imie;
		string nazwisko;
		int wiek;
	public:
		void pokaz_dane();
		void pobierz_wartosci();
};

class Pracownik : Osoba
{
	private:
		string imie;
		string nazwisko;
		int wiek;
		string stanowisko;
	public:
		void pokaz_dane();
		void pobierz_wartosci();
};

class Student : Osoba
{
	private:
		string imie;
		string nazwisko;
		int wiek;
		int grupa;
	public:
		void pokaz_dane();
		void pobierz_wartosci();
};

void Pracownik::pobierz_wartosci()
{
	cout << "Podaj imie..." << endl;
	cin >> imie;
	cout << "Podaj nazwisko..." << endl;
	cin >> nazwisko;
	cout << "Podaj stanowisko..." << endl;
	cin >> stanowisko;
	cout << "Podaj wiek..." << endl;
	cin >> wiek;
}

void Student::pobierz_wartosci()
{
	cout << "Podaj imie..." << endl;
	cin >> imie;
	cout << "Podaj nazwisko..." << endl;
	cin >> nazwisko;
	cout << "Podaj grupe..." << endl;
	cin >> grupa;
	cout << "Podaj wiek..." << endl;
	cin >> wiek;
}

void Pracownik::pokaz_dane()
{
	cout << "Nazwisko: " << nazwisko << ", imie: " << imie << ", stanowisko: " << stanowisko << ", wiek: " << wiek << endl;
}

void Student::pokaz_dane()
{
	cout << "Nazwisko: " << nazwisko << ", imie: " << imie << ", grupa: " << grupa << ", wiek: " << wiek << endl;
}

int main()
{
	Pracownik pierwszyPracownik;
	Student pierwszyStudent;
	pierwszyPracownik.pobierz_wartosci();
	pierwszyPracownik.pokaz_dane();
	pierwszyStudent.pobierz_wartosci();
	pierwszyStudent.pokaz_dane();

	_getch();
    return 0;
}

