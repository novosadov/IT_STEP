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

class Logger   //Создаёт логи (надо дописать код)
{
private:
	static Logger* g_instance;
	Logger() = default;
public:
	void Log(char const*);
	
	Logger(Logger const&) = delete;
	Logger& operator=(Logger&) = delete;

	static Logger* GetInstance();
};
