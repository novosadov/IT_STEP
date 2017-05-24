#include <iostream>

// Конструкторы

class A
{
	const int a;

public:
	A(int a) :
		a(a)
	{
	}
};

A ga(1);

class B
{
	A& a;
public:
	B() :
		a(ga)
	{
	}

	B(A& a) :
		a(a)
	{
	}
};

int main()
{
	A a1(100);
	B b(a1);

	return 0;
}
