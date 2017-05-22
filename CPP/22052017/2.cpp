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
}
