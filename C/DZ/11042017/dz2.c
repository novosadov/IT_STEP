#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Переписать предыдущую программу с использованием битовых полей.

struct numFlags
{
	unsigned char b0 : 1;
	unsigned char b1 : 1;
	unsigned char b2 : 1;
	unsigned char b3 : 1;
	unsigned char b4 : 1;
	unsigned char b5 : 1;
	unsigned char b6 : 1;
	unsigned char b7 : 1;
};

union Num
{
	char num;
	struct numFlags numFlags;
};



void main()
{
	setlocale(LC_ALL, "rus");
	union Num num;
	int chislo;
	printf("Введите число которое надо преобразовать\n");
	scanf("%i", &chislo);

	num.num = chislo;

	printf("%i", num.numFlags.b7);
	printf("%i", num.numFlags.b6);
	printf("%i", num.numFlags.b5);
	printf("%i", num.numFlags.b4);
	printf("%i", num.numFlags.b3);
	printf("%i", num.numFlags.b2);
	printf("%i", num.numFlags.b1);
	printf("%i", num.numFlags.b0);

}
