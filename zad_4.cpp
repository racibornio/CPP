#include <iostream>
#include <math.h>

void getCordsAndCountField();
void getCordsByValueAndCountField(int x1, int y1, int x2, int y2);

int main()
{
 	getCordsAndCountField();   
	getCordsByValueAndCountField(32, 423, 234 , 345);
	
	return 0;
}

void getCordsAndCountField()
{
	std::cout << "Count by getting values." << std::endl;
	int x1, x2, y1, y2;
	std::cout << "Enter values..." << std::endl;
	std::cin >> x1;
	std::cin >> y1;
	std::cin >> x2;
	std::cin >> y2;
	float d = sqrt( pow(x2-x1, 2.0) + pow(y2-y1, 2.0)  );
	std::cout << d << std::endl;
}

void getCordsByValueAndCountField(int x1, int y1, int x2, int y2)
{
	std::cout << "Count by passing values." << std::endl;
	float d = sqrt( pow(x2-x1, 2.0) + ( pow(y2-y1, 2.0) ) );
	std::cout << d << std::endl;	
}
