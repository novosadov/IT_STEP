#include<iostream>
#include"String.h"
#include"Student.h"
#include<memory>
#include<cstring>
#include"Stek.h"

//шаблоны

//void swap(int& a1, int& a2)
//{
//	int tmp = a1;
//	a1 = a2;
//	a2 = tmp;
//}
//
//void swap(double& a1, double& a2)
//{
//	double tmp = a1;
//	a1 = a2;
//	a2 = tmp;
//}
//
//void swap(String& s1, String& s2)
//{
//	String tmp = std::move(s1);
//	s1 = std::move(s2);
//	s2 = std::move(tmp);
//}
//
//void BubbleSort(String* arr, int count)
//{
//	for (int i = count - 1; i > 0; --i)
//	{
//		for (int j = 0; j < i; ++j)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				swap(arr[j], arr[j + 1]);
//			}
//		}
//	}
//}
//
//
//void BubbleSort(int* arr, int count)
//{
//	for (int i = count - 1; i > 0; --i)
//	{
//		for (int j = 0; j < i; ++j)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				swap(arr[j], arr[j + 1]);
//			}
//		}
//	}
//}
//
//template<class T>
//
//void BubbleSort(T* arr, int count)
//{
//	for (int i = count - 1; i > 0; --i)
//	{
//		for (int j = 0; j < i; ++j)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				swap(arr[j], arr[j + 1]);
//			}
//		}
//	}
//}

template<class T>
T const& max(T const& a, T const& b)
{
	return a > b ? a : b;
}

template<class T>
T const& max(T const& a, T const& b, T const& c)
{
	return max(max(a,b),c);
}

template<class T1, class T2>
bool Greater(T1 const& a, T2 const& b)
{
	return a > (T1)b;
}

bool Greater(int const& a, double const& b)
{
	return (double)a > b;
}

template<class T>
void BubbleSort(T* arr, int count)
{
	for (int i = count - 1; i > 0; --i)
	{
		for (int j = 0; j < i; ++j)
		{
			if (arr[j] > arr[j + 1])
			{
				// swap(arr[j], arr[j + 1]);
				T tmp = std::move(arr[j]);
				arr[j] = std::move(arr[j+1]);
				arr[j + 1] = std::move(tmp);
			}
		}
	}
}


template<class T>
T* Find(T* arr, int count, T const& elements)
{
	for (int i = 0; i < count; i++)
	{
		if (arr[i] == elements)
		{
			return arr+i;
		}

	}
	return nullptr;
}


//template<class T>
//T Average(T* arr, int count)
//{
//	T summ = 0;
//	for (int i = 0; i < count; i++)
//	{
//		summ += arr[i];
//	}
//	return summ / count;
//}

template<class T, int N>
class Array
{
private:
	

public:
	T m_array[N];
	Array();

	template<class T1, int N1>
	Array(const Array<T1, N1>& rhs)
	{
		for (int i = 0; i < max(N, N1); ++i)
		{
			m_array[i] = (T)rhs.m_array[i];
		}
	}

	T& operator[](int idx);
};


template<class T, int N>
Array<T, N>::Array()
{
	memset(m_array, 0, N);
}

template<class T, int N>
T& Array<T, N>::operator[](int idx)
{

}



int main()
{
	double arr1[] = { 4.3, 2.5, 45.3, 30.1, 4.2 };
	int arr2[] = { 4, 1, 10, 7, 8 };
	String arr3[] = { "dfgdf", "adasd", "ghgh", "bbf", "cdfd" };

	BubbleSort(arr1, 5);
	for (int i = 0; i < 5; ++i)
	{
		std::cout << arr1[i] << " ";
	}
	std::cout << "\n";
	BubbleSort(arr2, 5);
	for (int i = 0; i < 5; ++i)
	{
		std::cout << arr2[i] << " ";
	}
	std::cout << "\n";
	BubbleSort(arr3, 5);
	for (int i = 0; i < 5; ++i)
	{
		std::cout << arr3[i] << " ";
	}
	std::cout << "\n";

	Student arr4[] = { Student("Petrov", 5), Student("Ivanov", 7) };
	BubbleSort(arr4, 2);
	for (int i = 0; i < 2; i++)
	{
		arr4[i].Print();
	}

	/*std::cout << Average(arr3, 5) << "\n";*/

	Array<double, 10> arr8;
	Array<int, 11> arr9;
	

	return 0;


}
