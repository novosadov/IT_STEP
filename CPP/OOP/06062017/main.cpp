#include "String.h"
#include <iostream>
#include "Student.h"

//String&& s4 = s1 + s2; - rvalue ссылка

void swap(String& s1, String& s2)
{
	String tmp = std::move(s1);
	s1 = std::move(s2);
	s2 = std::move(tmp);
}

void BubbleSort(String* arr, int count)
{
	for (int i = count-1; i > 0; --i)
	{
		for (int j = 0; j< i; ++j)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

int main()
{

	Student st1("Ivanov", 5.0);
	Student st2 = st1;
	st1.Print();
	st2.Print();

	/*String arr[] = { "qwe","ejhgy","fgu","ghey","vcdgh" };
	BubbleSort(arr, 5);
	for (int i = 0; i < 5; i++)
	{
		std::cout << arr[i] << "\n";
	}	*/

	/*String s1 = "aaaa";
	String s2 = "bbbb";*/
	/*String&& s3 = s1 + s2;
	std::cout << "s3 = " << s3 << "\n";
	String s4;
	s4 = s3 + s1;
	std::cout << s1 << " " << s2 << " " <<
		s3 << " " << s4 << "\n";*/
	/*swap(s1, s2);
	std::cout << s1 << " " << s2 << "\n";*/

	return 0;
}
