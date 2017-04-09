#include <stdio.h>
#include <locale.h>


//Связь указателей и массивов
//Арифметические операции над указателями
//Имя массива == указатель на нулевой элемент
//&i[0] == указатель на нулевой элемент


int main()
{
	setlocale(LC_ALL, "rus");
	int i[3];
	int* pI = i;

	printf("&i: %p\n", i);
	printf("&i: %p\n", &i[0]);
	printf("&i: %p\n", &i);
	printf("pI: %p", pI);

	int array[5] = {1, 2, 3, 4, 5};
	int* last = &array[4];
	for (int* i = array; i != last; i++)
	{
		printf("%p\n", i);
	}
	printf("%p\n", array+1);
	printf("%i\n", *array);
	printf("%i\n\n", *(array+1));

	for (int i = 0; i <5; i++)
	{
		printf("%i\n", *(array + i));
	}

	return 0;
}
