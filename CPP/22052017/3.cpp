#include<iostream>
#include "ArrayUtils.h"
#include<locale.h>

struct Point
{
	int x;
	int y;
};


void main()
{
	int* pA = new int[10];
	for (int i = 0; i < 10; i++)
	{
		pA[i] = i;
	}
	for (int i = 0; i < 10; i++)
	{
		std::cout << pA[i] << " ";
	}
	delete[] pA;
	std::cout << "\n";

}
