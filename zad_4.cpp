#include <conio.h>
#include <iostream>
#include <math.h>

//prototyp dla laborki 4., zadania 1., podpunktu a)
void oblicz_odleglosc();
//prototyp dla laborki 4., zadania 1., podpunktu b)
void oblicz_odleglosc(int x1, int y1, int x2, int y2);
//prototyp dla laborki 4., zadania 1., podpunktu c)
void oblicz_odleglosc(int x1, int y1, int x2, int y2, float * wynik);
//prototyp dla laborki 4., zadania 1., podpunktu d)
void oblicz_odleglosc(int x1, int y1, int x2, int y2, float & wynik);
//prototyp dla laborki 4., zadania 1., podpunktu e)
float oblicz_odleglosc_do_return(float x1, float y1, float x2, float y2);

int main()
{
	
	float wynik = 0;
	oblicz_odleglosc();
	oblicz_odleglosc(0, 0, 10, 10);
	oblicz_odleglosc(0, 0, 10 , 10, &wynik);
	wynik = 0;
	oblicz_odleglosc(0, 0, 20, 20, wynik);
	float zwroconaWartosc = oblicz_odleglosc_do_return(1.5, 1.5, 3.2, 3.2);
	std::cout << "Po zwroceniu wynik to " << zwroconaWartosc << std::endl;
	

	std::cout << "Press any key to terminate...";
	_getch();
	return 0;
}

//definicja dla laborki 4., zadania 1., podpunktu a)
void oblicz_odleglosc()
{
	std::cout << "Wpisz po kolei wartosci dla wspolrzednych punktu pierwszego i drugiego (X, Y)" << std::endl;
	int x1, x2, y1, y2;
	std::cout << "x1=";
	std::cin >> x1;
	std::cout << "y1=";
	std::cin >> y1;
	std::cout << "x2=";
	std::cin >> x2;
	std::cout << "y2=";
	std::cin >> y2;
	float d = sqrt( pow(x2-x1, 2.0) + pow(y2-y1, 2.0)  );
	std::cout << "Odleglosc wynosi " << d << std::endl;
}

//definicja dla laborki 4., zadania 1., podpunktu b)
void oblicz_odleglosc(int x1, int y1, int x2, int y2)
{
	std::cout << "Wyliczam odleglosc z wartosci przekazanych funkcji jako argumenty:" << std::endl;
	float d = sqrt( pow(x2-x1, 2.0) + ( pow(y2-y1, 2.0) ) );
	std::cout << d << std::endl;	
}

//definicja dla laborki 4., zadania 1., podpunktu c)
void oblicz_odleglosc(int x1, int y1, int x2, int y2, float * wynik)
{
	std::cout << "Wyliczam odleglosc z wartosci przekazanych funkcji jako argumenty i do wskaznika:" << std::endl;
	*wynik = sqrt(pow(x2 - x1, 2.0) + (pow(y2 - y1, 2.0)));
	std::cout << *wynik << std::endl;
}

//definicja dla laborki 4., zadania 1., podpunktu d)
void oblicz_odleglosc(int x1, int y1, int x2, int y2, float &wynik)
{
	std::cout << "Wyliczam odleglosc z wartosci przekazanych funkcji jako argumenty i do referencji:" << std::endl;
	wynik = sqrt(pow(x2 - x1, 2.0) + (pow(y2 - y1, 2.0)));
	std::cout << wynik << std::endl;
}

//definicja dla laborki 4., zadania 1., podpunktu e)
float oblicz_odleglosc_do_return(float x1, float y1, float x2, float y2)
{
	float d = sqrt(pow(x2 - x1, 2.0) + (pow(y2 - y1, 2.0)));
	return d;
}