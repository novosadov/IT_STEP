#include<iostream>

#include<locale.h>

struct Point
{
	int x;
	int y;
};


void main()
{
	int a = 100;
	double b = 20.5;

	int& refa = a;
	double& refb = b;
	std::cout << a << " " << refa << "\n";

	Point p = { 3,5 };
	Point& refp = p;
	refp.x = 6;

	int* pa1 = new int();
	delete pa1;

	char* pc = new char[10];
	delete[] pc;
}
