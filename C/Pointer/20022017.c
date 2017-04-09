#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

//Указатели

//&a -адрес переменной а  
//int*  указатель

void getData(int* t1, int* t2, int* t3, int* t4, int* t5);
void printData(int* t1, int* t2, int* t3, int* t4, int* t5);

int main()
{
	setlocale(LC_ALL, "rus");
	int t1 = 0;
	int t2 = 0;
	int t3 = 0;
	int t4 = 0;
	int t5 = 0;
	
	getData(&t1, &t2, &t3, &t4, &t5);
	printData(&t1, &t2, &t3, &t4, &t5);

	return 0;
}

void getData(int* t1, int* t2, int* t3, int* t4, int* t5)
{
		printf("Введите 1 значение\n");
		scanf("%i", t1);
		printf("Введите 2 значение\n");
		scanf("%i", t2);
		printf("Введите 3 значение\n");
		scanf("%i", t3);
		printf("Введите 4 значение\n");
		scanf("%i", t4);
		printf("Введите 5 значение\n");
		scanf("%i", t5);

}


void printData(int* t1, int* t2, int* t3, int* t4, int* t5)
{
	printf("t1 = %i\n", *t1);
	printf("t2 = %i\n", *t2);
	printf("t3 = %i\n", *t3);
	printf("t4 = %i\n", *t4);
	printf("t5 = %i\n", *t5);

}
