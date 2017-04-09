#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#define SIZE_ARRAY 10



//Указатель на функцию
//getPprocAdress(); получить адресс функции



int main()
{
	setlocale(LC_ALL, "rus");
	HMODULE dll = LoadLibraryA("c:\\windows\\system32\\user32.dll");


	int(*pA)(HWND, LPCTSTR, LPCSTR, UINT);//указатель на функцию
	pA = (int(*)(HWND, LPCTSTR, LPCSTR, UINT))GetProcAddress(dll, "MessageBoxA");



	pA(NULL,"text text text","title title title", MB_OKCANCEL);

	return 0;
}







//Связь указателей и массивов
//int const* array - константный массив
//int const* size - константный размер
//int const* const array - константный указатель на константный массив
//int const* const size - константный указатель на константный size


// изменяет константный тип на не константный *((int*)array) = 10;     (int*)




/*
void fillRand(int* array, int* size);
void printArray(int* array, int* size);
int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int array[SIZE_ARRAY];
	int size = SIZE_ARRAY;
	fillRand(&array, &size);
	printArray(&array, &size);
	return 0;
}
void fillRand(int* array, int* size)
{
	for (int i = 0; i < *size; i++)
	{
		*(array+i) = rand() % 100;
	}
}
void printArray(int* array, int* size)
{
	for (int i = 0; i < *size; i++)
	{
		printf("%i ", *(array+i));
	}
	printf("\n");
}
*/
