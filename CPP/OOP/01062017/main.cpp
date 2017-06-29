#include "Stek.h"
#include<cstring>
#include<iostream>


int main()
{
	Stack stack;
	try
	{
		stack.Push(1);
		stack.Push(2);
		int a = stack.Pop();
		a = stack.Pop();
		a = stack.Pop();
		std::cout << "1\n";
	}
	catch (char* message)
	{
		std::cout << message<<std::endl;
	}

	catch (std::size_t count)
	{
		std::cout << count << std::endl;
	}

	catch (StackException& ex)
	{
		std::cout << "Stack throwed exception\n" <<
			"count = " << ex.GetCount() << "\n";
	}
	return 0;
}
