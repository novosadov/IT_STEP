#include <stdbool.h>
#include <Windows.h>
#include<stdio.h>


#define LOG_FN_START(arg) printf("[%d] %s\n", time(0),\
#arg " start"); //Решётка превращает значение в строку, то есть #arg == "arg"

#define LOG_FN_FINISH(arg) printf("[%d] %s\n", time(0),\
__FUNCTION__ " end"); //То же что и решётка превращвет значение в строку


void foo();
void foo1();

void foo()
{
	LOG_FN_START(foo)
	Sleep(1000);
	foo1();
	LOG_FN_FINISH(foo)
}

void foo1()
{
	LOG_FN_START(foo1)
	Sleep(1000);
	LOG_FN_FINISH(foo1)
}

int main()
{
	LOG_FN_START(main)
	foo();
	LOG_FN_FINISH(main)
}
