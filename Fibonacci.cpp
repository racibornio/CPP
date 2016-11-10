#include <iostream>
#include <conio.h>

using namespace std;
typedef unsigned int uint;
typedef unsigned long ulong;

uint fibonacci(uint wartosc)
{
	ulong pierwszy = 0;
	ulong drugi = 1;
	ulong kolejny = pierwszy + drugi;
	
	for(uint i = 0; i <= wartosc; i++)
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

int main(int argc, char** argv)
{
	fibonacci(10);
	cout << endl << "Wcisnij dowolny klawisz...";
	_getch();
	return 0;
}