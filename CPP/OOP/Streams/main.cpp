#include "Person.h"
#include "Employee.h"
#include "Student.h"

#include <fstream>
#include <iostream>

int main()
{
	/*std::ofstream file("D:\\example.txt", std::ios::out | std::ios::trunc);

	double d = 3.14;
	int a = 100500;
	char c = 'c';
	char str[] = "Hello world!";

	file << d << ' ' << a  << ' '<< c << ' ' << str;

	std::ifstream ifile("D:\\example.txt", std::ios::in);

	double d;
	int a;
	char c;
	char str[256];

	ifile >> d >> a >> c;
	ifile.read(str, 256);

	std::cout << d << ' ' << a << ' ' <<
	c << ' ' << str;

	std::ofstream file("D:\\example.txt", std::ios::out | std::ios::app);

	file << std::endl;

	file << "Knowledge is power" << std::endl;
	file << "C++ rulez" << std::endl;

	file.close();

	std::ifstream ifile("D:\\example.txt", std::ios::in);

	char buffer[1024];

	while (!ifile.eof())
	{
	ifile.getline(buffer, 1024);
	std::cout << buffer << std::endl;
	} */

	std::ofstream ofile("D:\\persons.txt", std::ios::out | std::ios::trunc);
	PersonList list;
	list.Add(new Student("Ivanov", 8));
	list.Add(new Employee("Johan", 10000));
	list.Add(new Person("Petrov"));
	list.SaveToStream(ofile);

	return 0;
}
