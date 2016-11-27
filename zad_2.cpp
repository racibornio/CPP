#include <iostream>
#include <cmath>

double a, b, c;
void pobierzDlugosciBokow();
bool sprawdzCzyProstokatny();
double wybierzNajwieksza();

int main()
{
    pobierzDlugosciBokow();
    std::cout << "a=" << a << ", b=" << b << ", c=" << c << std::endl;
    sprawdzCzyProstokatny();
    std::cout << "Najwieksza liczba to " << wybierzNajwieksza() << std::endl;
    return 0;
}

void pobierzDlugosciBokow()
{
    using namespace std;

    while(a==0)
    {
        cout << "Podaj dlugosc boku A: ";
        cin >> a;
    }

    while(b==0)
    {
        cout << "Podaj dlugosc boku B: ";
        cin >> b;
    }

    while(c==0)
    {
        cout << "Podaj dlugosc boku C: ";
        cin >> c;
    }

    

}

bool sprawdzCzyProstokatny()
{
    using namespace std;

    if (a*a == (b*b) + (c*c))
    {
        cout << "Trojkat jest prostokatny dla a=" << a << " jako przeciwprotokatnej." << endl;
        return true;
    }
    else if (b*b == (a*a) + (c*c))
    {
        cout << "Trojkat jest prostokatny dla b=" << b << " jako przeciwprostokatnej." << endl;
        return true;
    }
    else if (c*c == (a*a) + (b*b))
    {
        cout << "Trojkat jest prostokatny dla c=" << c << " jako przeciwprostokatnej." << endl;
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
    double najwieksza;

    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }   
}
