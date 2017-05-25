#pragma once

class A
{
	int a = 0;
public:
	A() = default; //конструктор по умолчанию
//	A()=delete; //отключает конструктор
	A(int a) :a(a) 
	{
	};
};

class Logger  // пишет логи
{
private:
	static Logger* g_instance;
	Logger();

public:
	void Log(char const* msg); // выводит логи на консоль
	Logger(Logger const&) = delete;
	Logger& operator=(Logger&) = delete;

	static Logger* GetInstance();
};
