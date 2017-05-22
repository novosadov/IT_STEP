#include<iostream>
#include<locale.h>

//using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");

	std::cout << "What is your name?" << "\n";
	char name[20];
	std::cin >> name;
	std::cout << "Hello, " << name << "\n";
}
