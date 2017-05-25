#pragma once

class A
{
	int a = 0;
public:
	A() = default; //конструктор по умолчанию
	A()=delete; //отключает конструктор
	A(int a) :a(a) 
	{
	};
};
