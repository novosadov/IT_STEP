#include <iostream>
#include "Student.h"
#include"Example.h"
#include"Distance.h"
#include"String.h"


// Конструкторы

//class A
//{
//	const int a;
//
//public:
//	A(int a) :
//		a(a)
//	{
//	}
//};
//
//A ga(1);
//
//class B
//{
//	A& a;
//public:
//	B() :
//		a(ga)
//	{
//	}
//
//	B(A& a) :
//		a(a)
//	{
//	}
//};

void PrintMaxRaiting(Student s1, Student s2)
{
	std::cout << (s1.GetRating() < s2.GetRating() ?
		s2.GetRating() : s1.GetRating()) << "\n";
}

/*Student Create(Group& g, char const* name)
{
	Student s(g, name, 0);
	return s;
} */

int main()
{
	/*
	A a1(100);
	B b(a1);

	Group g;
	Student s1(g, "Ivanov", 6);
	Student s2(g);
	s2 = s1;
	s2.SetName("Petrov");
	
	s1.Print();
	s2.Print();	
	*/

	//Group g;
	//Student s1(g, "Ivanov", 6);
	//Student s2 = s1;
	//Student s3(s1);

	//std::cout << "count = " << Student::GetStudentCount() << "\n";

	//s2.SetName("Petrov");
	//s2.SetRating(5);
	//s1.Print();
	//s2.Print();

	//PrintMaxRaiting(s1, s2);
	//Student* s5;

	//{
	//	std::cout << "count = " << Student::GetStudentCount() << "\n";
	//	s5 = new Student(g);
	//	Student s4 = Create(g, "Sidorov");
	//	s4.Print();
	//	std::cout << "count = " << Student::GetStudentCount() << "\n";
	//}
	//std::cout << "count = " << Student::GetStudentCount() << "\n";
	//delete s5;
	//std::cout << "count = " << Student::GetStudentCount() << "\n";

	//A a(1);
	//Logger::GetInstance()->Log("hello");
	//Logger::GetInstance()->Log("world");

	/*Distance d1(1, 2);
	Distance d2(2, 3);
	Distance d3 = d1 + d2;
	d3++;
	Distance d4 = ++d3;
	d3.Print();
	d4.Print();*/
/*
	Distance d1, d2;
	std::cout << "Enter first: ";
	std::cin >> d1;
	std::cout << "Enter second: ";
	std::cin >> d2;
	Distance summ = d1 + d2;	
	std::cout << "Summ: " << summ << "\n";*/

	String s1 = "Hello.";

	char s2[10];
	strcpy(s2, s1);
	std::cout << s2;

	String s3;
	std::cin >> s3;
	String s5 = s1 + s3;
	std::cout << s5;

	return 0;
}
