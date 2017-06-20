
#include <iostream>

class A
{
public:
	void MethodA()
	{
		std::cout << "method A\n";
	}
};

class B : public A
{
public:
	void MethodB()
	{
		std::cout << "method B\n";
	}
};


int main()
{
	A a;
	a.MethodA();

	B b;
	b.MethodA();
	b.MethodB();

	return 0;
}
