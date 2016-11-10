#include <iostream>
#include <cstdlib>
#include <math.h>
#include <conio.h>

using namespace std;

	void iloczyn_skalarny() {
		int wektor_1[] = {2, 1, 0, 2, 2};
		int wektor_2[] = {1, -1, 2, 2, 4};
		int iloczyn[5];

		for (int i=0; i<5; i++) {
			iloczyn[i] = wektor_1[i] * wektor_2[i];
		}

		for (int i=0; i<5; i++) {
			cout << "Miejsce nr " << i << " to " << iloczyn[i] << endl;
		}

	}

	int dlugosc_wektora(int a, int b, int c, int d, int e) {
		double dl;

		dl = sqrt(a*a + b*b + c*c + d*d + e*e);
		cout << "Dlugosc wektora to " << dl << endl;
		return dl;
	}

	int dlugosc_wektora(int a, int b, int c, int d) {
		double dl;

		dl = sqrt(a*a + b*b + c*c + d*d);
		cout << "Dlugosc wektora to " << dl << endl;
		return dl;
	}

	int dlugosc_wektora(int a, int b, int c) {
		double dl;

		dl = sqrt(a*a + b*b + c*c);
		cout << "Dlugosc wektora to " << dl << endl;
		return dl;
	}

	int dlugosc_wektora(int a, int b) {
		double dl;

		dl = sqrt(a*a + b*b);
		cout << "Dlugosc wektora to " << dl << endl;
		return dl;
	}

int main(int argc, char** argv) {

	iloczyn_skalarny();
	dlugosc_wektora(2, 1, 0, 2, 2);
	dlugosc_wektora(2, 1, 0, 2);
	dlugosc_wektora(2, 1, 0);
	dlugosc_wektora(2, 1);

	int macierz[2][2] = {{2, 1}, {3, -3}};

	for (int i=0; i<2; i++) {
		for (int j=0; j<2; j++) {
			cout << "i=" << i << ", j=" << j << " to " << macierz[i][j] << endl;
		}
	}

	cout << endl << "Wcisnij dowolny klawisz...";
	_getch();

	return EXIT_SUCCESS;
}
