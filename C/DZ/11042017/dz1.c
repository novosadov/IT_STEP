#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*Написать функцию перевода строкового представления двоичного числа(например,
	«0001 0101») в целое десятичное(21) и функцию, которая производит обратное
	преобразование с использованием битовых опираций.*/


void  transformation(int number);

void main()
{
	setlocale(LC_ALL, "rus");
	int number = 0;
	transformation(number);

}


void  transformation(int number)
{
	printf("Введите число которое необходимо перевести в двоичное\n");
	scanf("%i", &number);
	printf("Число %i = ", number);
	for (int i = 7; i >= 0; i--)
	{
		printf("%i", (number & (1 << i)) ? 1 : 0);
	}
	printf("\n");
}
