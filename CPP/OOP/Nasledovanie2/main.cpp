
#include "Student.h"
#include "String.h"
#include <iostream>

class A
{
public:
	void MethodA()
	{
		std::cout << "method A\n";
	}
public:
	void MethodC()
	{
		MethodA();
		std::cout << "method C\n";
	}
};

class B : public A
{
public:
	void MethodB()
	{
		std::cout << "method B\n";
		MethodC();
	}
};

struct C : public B
{

};

struct D : C
{

};

int main()
{
	Student student;

	return 0;
}
