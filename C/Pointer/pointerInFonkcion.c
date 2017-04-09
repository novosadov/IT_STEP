#include <stdio.h>
#include <locale.h>



//Указатель на функции

typedef int MyInt;                             // аналог define
typedef void(*SortType)(int*, int);


void foo(void(*func1)(), void(*func2)(), void(*func3)());  // Принимает указатель на функции
void func1();
void func2();
void func3();

int main()
{
	setlocale(LC_ALL, "rus");
	foo(*func1, *func2, *func3);

	return 0;
}



void foo(void(*func1)(), void(*func2)(), void(*func3)())
{
	func1();
	func2();
	func3();
}


void func1()
{
	printf("Func1\n");
}

void func2()
{
	printf("Func2\n");
}


void func3()
{
	printf("Func3\n");
}
