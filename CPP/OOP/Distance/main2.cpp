#include <iostream>
#include "Geometry.h"


int main()
{	
	
	Rectangle r;
	r.Init(0, 0, 100, 50);
	Point p;
	p.Init(60, 20);
	if (r.Contains(p))
	{
		std::cout << "r contains p\n";
	}
	else
	{
		std::cout << "doesn't contains p\n";
	}

	Size size;
	size.Init(100, 50);
	Rectangle r1;
	r1.Init(p, size);
	Rectangle r2 = r.IntersectWith(r1);
	r2.Print();
