#include <iostream>
#include <conio.h>

using namespace std;
typedef unsigned int uint;
typedef unsigned long ulong;

uint fibonacci(uint wartosc);
void WyliczSilnieIteracyjnie(uint limit);
int WyliczSilnieRekursywnienie(uint limit);

int main(int argc, char** argv)
{
	WyliczSilnieIteracyjnie(1);
	WyliczSilnieIteracyjnie(1);
	WyliczSilnieRekursywnienie(1);

	cout << endl << "Wcisnij dowolny klawisz...";
	_getch();
	return 0;
}

uint fibonacci(uint wartosc)
{
	ulong pierwszy = 0;
	ulong drugi = 1;
	ulong kolejny = pierwszy + drugi;

	for (uint i = 0; i <= wartosc; i++)
	{
		if (i == 0)
		{
			kolejny = 0;
			cout << "Wyraz nr " << i << " wynosi " << kolejny << endl;
		}
		else if (i == 1)
		{
			kolejny = 1;
			cout << "Wyraz nr " << i << " wynosi " << kolejny << endl;
		}
		else
		{
			pierwszy = drugi;
			drugi = kolejny;
			kolejny = pierwszy + drugi;
			cout << "Wyraz nr " << i << " wynosi " << kolejny << endl;
		}
	}
	return kolejny;
}

void WyliczSilnieIteracyjnie(uint limit)
{
	int result = 0;
	if (limit == 1)
	{
		result = 1;
	}
	else
	{
		int i = 1;
		int odlicznik = 2;
		int iloczyn_posredni = i * odlicznik;
		while (odlicznik < limit)
		{
			odlicznik++;
			iloczyn_posredni *= odlicznik;
		};
		result = iloczyn_posredni;
	}
	cout << "Silnia dla " << limit << " wynosi " << result << endl;
}

int WyliczSilnieRekursywnienie(uint limit)
{
	if (limit == 1)
	{
		return 1;
	}
	int value = limit * WyliczSilnieRekursywnienie(limit - 1);
	return value;
}