#include <iostream>
#include <cmath>
#include <conio.h>

double aa, bb, cc;
void pobierzDlugosciBokow();
bool sprawdzCzyProstokatny();
double wybierzNajwieksza();

// prototypy dla funkcji modu³u wyliczaj¹cego trójmian kwadratowy
void przyjmijWspolczynniki();
double wyliczDelte(double a, double b, double c);
double wyliczPierwszeMiejsceZerowe(double wynikDelty, double a, double b);
double wyliczDrugieMiejsceZerowe(double wynikDelty, double a, double b);
void wyliczWspolrzedneWierzcholka(double wynikDelty, double a, double b);
void obliczMiejscaZeroweDlaDeltyDodatniej(double wynikDelty);
void obliczMiejsceZeroweDlaDeltyZerowej(double wynikDelty);
void wyswietlInformacjeDlaDeltyUjemnej();
double a, b, c;
int iloscMiejscZerowych;

int main()
{
    pobierzDlugosciBokow();
    std::cout << "a=" << aa << ", b=" << bb << ", c=" << cc << std::endl;
    sprawdzCzyProstokatny();
    std::cout << "Najwieksza liczba to " << wybierzNajwieksza() << std::endl;

	// wyliczenie trójmianu kwadratowego
	przyjmijWspolczynniki();

	double wynikDelty = wyliczDelte(a, b, c);
	if (wynikDelty > 0)
	{
		obliczMiejscaZeroweDlaDeltyDodatniej(wynikDelty);
		iloscMiejscZerowych = 2;
	}
	else if (wynikDelty == 0)
	{
		obliczMiejsceZeroweDlaDeltyZerowej(wynikDelty);
		iloscMiejscZerowych = 1;
	}
	else
	{
		wyswietlInformacjeDlaDeltyUjemnej();
		iloscMiejscZerowych = 0;
	}

	switch (iloscMiejscZerowych)
	{
	case 2:
		std::cout << "Funkcja ma dwa pierwiastki rzeczywiste." << std::endl;
		break;
	case 1:
		std::cout << "Funkcja ma jeden pierwiastek rzeczywisty." << std::endl;
		break;
	case 0:
		std::cout << "Funkcja nie ma pierwiastkow rzeczywistych." << std::endl;
		break;
	default:
		std::cout << "Funkcja ma nieokreslona liczbe pierwiastkow rzeczywistych." << std::endl;
		break;
	}

	std::cout << std::endl << "WCISNIJ DOWOLNY KLAWISZ...";
	_getch();
    return 0;
}

void pobierzDlugosciBokow()
{
    using namespace std;

    while(aa <= 0)
    {
        cout << "Podaj dlugosc boku A: ";
        cin >> aa;
    }

    while(bb <= 0)
    {
        cout << "Podaj dlugosc boku B: ";
        cin >> bb;
    }

    while(cc <= 0)
    {
        cout << "Podaj dlugosc boku C: ";
        cin >> cc;
    }
}

bool sprawdzCzyProstokatny()
{
    using namespace std;

    if (aa*aa == (bb*bb) + (cc*cc))
    {
        cout << "Trojkat jest prostokatny dla a=" << aa << " jako przeciwprotokatnej." << endl;
        return true;
    }
    else if (bb*bb == (aa*aa) + (cc*cc))
    {
        cout << "Trojkat jest prostokatny dla b=" << bb << " jako przeciwprostokatnej." << endl;
        return true;
    }
    else if (cc*cc == (aa*aa) + (bb*bb))
    {
        cout << "Trojkat jest prostokatny dla c=" << cc << " jako przeciwprostokatnej." << endl;
        return true;
    }
    else
    {
        cout << "To nie jest trojkat prostokatny." << endl;
        return false;
    }
}

double wybierzNajwieksza()
{
    using namespace std;

    if (aa > bb && aa > cc)
    {
        return aa;
    }
    else if (bb > aa && bb > cc)
    {
        return bb;
    }
    else
    {
        return cc;
    }   
}

// definicje dla funkcji modu³u wyliczaj¹cego trójmian kwadratowy

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
	std::cout << "Delta wynosi " << delta << std::endl;
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
	wspolrzednaX = (-b) / (2 * a);
	wspolrzednaY = (-wynikDelty) / (4 * a);
	std::cout << "Wspolrzedne wierzcholka paraboli: X = " << wspolrzednaX << ", Y = " << wspolrzednaY << std::endl;
}

void obliczMiejscaZeroweDlaDeltyDodatniej(double wynikDelty)
{
	double pierwszeMiejsce = wyliczPierwszeMiejsceZerowe(wynikDelty, a, b);
	double drugieMiejsce = wyliczDrugieMiejsceZerowe(wynikDelty, a, b);
	std::cout << "Mamy dwa miejsca zerowe: " << pierwszeMiejsce << " i " << drugieMiejsce << std::endl;
	wyliczWspolrzedneWierzcholka(wynikDelty, a, b);
}

void obliczMiejsceZeroweDlaDeltyZerowej(double wynikDelty)
{
	double pierwszeMiejsce = wyliczPierwszeMiejsceZerowe(wynikDelty, a, b);
	std::cout << "Mamy jedno miejsce zerowe: " << pierwszeMiejsce << std::endl;
	wyliczWspolrzedneWierzcholka(wynikDelty, a, b);
}

void wyswietlInformacjeDlaDeltyUjemnej()
{
	std::cout << "Delta jest ujemna wiec funkcja nie ma miejsc zerowych w ciele liczb rzeczywistych." << std::endl;
}