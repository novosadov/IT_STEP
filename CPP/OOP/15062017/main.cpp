#include<iostream>
#include"List.h"

int main()
{
	/*int arr[5] = { 2, 4, 1, 6, 7 };

	int* begin = arr;
	int* end = arr + 5;
	for (int* it = begin; it != end; ++it)
	{
		std::cout << *it << " ";
	}*/

	List list;
	list.insert(100, list.end());
	list.insert(101, list.begin());
	Iterator iter = list.begin();
	list.insert(102, ++iter);

	List list2 = {200, 201, 205, 208};

	for (Iterator it = list2.begin();
		it != list2.end(); ++it)
	{
		std::cout << *it << " ";
	}

	return 0;
}
