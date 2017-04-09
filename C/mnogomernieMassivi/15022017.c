#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

#define ROW 2
#define COLUMN 5

//Многомерные массивы

void vvodznacheniya(int array[2][5], int rowCount, int columnCount);
void vivodMassiva(int array[2][5], int rowCount, int columnCount);

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int array[ROW][COLUMN];
	int rowCount = ROW;
	int columnCount = COLUMN;
	vvodznacheniya(array[2][5], rowCount, columnCount);
	vivodMassiva(array[2][5], rowCount, columnCount);
	
	return 0;
}


void vvodznacheniya(int array[2][5], int rowCount, int columnCount)
{
	for (int i = 0; i < rowCount; i++)
	{
		for (int j = 0; j < columnCount; j++)
		{
			printf("Введите значение %i строки %i колонки\n", i + 1, j + 1);
			scanf("%i", &array[i][j]);
		}
	}
}


void vivodMassiva(int array[2][5], int rowCount, int columnCount)
{
	for (int i = 0; i < rowCount; i++)
	{
		for (int j = 0; j < columnCount; j++)
		{
			printf("%i\t", array[i][j]);
		}
		printf("\n");
	}
}
