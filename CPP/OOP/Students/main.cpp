#include <iostream>
#include "Student.h"
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

void PrintMaxRaiting(Student s1, Student s2)
{
	std::cout << (s1.GetRating() < s2.GetRating() ?
		s2.GetRating() : s1.GetRating()) << "\n";
}

Student Create(Group& g, char const* name)
{
	Student s(g, name, 0);
	return s;
}

int main()
{
	A a1(100);
	B b(a1);

	Group g;
	Student s1(g, "Ivanov", 6);
	Student s2 = s1;
	s2.SetName("Petrov");
	s2.SetRating(5);
	s1.Print();
	s2.Print();

	PrintMaxRaiting(s1, s2);

	Student s4 = Create(g, "Sidorov");
	s4.Print();

	return 0;
}
