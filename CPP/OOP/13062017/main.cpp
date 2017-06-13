#include <iostream>
#include "DynArray.h"

int main()
{
	DynArray<int> d = { 200, 300, 100 };

	DynArray<int> d1 = d * 5;
	std::cout << d1.GetCount() << "\n";

	/*int arr[] = { 5, 6, 7, 8 };
	for (int el : arr)
	{
		std::cout << el << " ";
	}*/

	return 0;
}
