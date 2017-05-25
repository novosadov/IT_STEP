#include"Example.h"

Logger* Logger::g_instance = 0;
Logger* Logger::GetInstance()
{
	if (!g_instance)
	{
		g_instance = new Logger();
	}
	return g_instance;
}
