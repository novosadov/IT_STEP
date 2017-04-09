#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

//Указатели

//&a -адрес переменной а  
//int*  указатель



void getRandom(int* random);


int main()
{
	setlocale(LC_ALL, "rus");	
	int i = 5;
	srand(&i);
	getRandom(&i);
	printf("i: %i", i);

	return 0;
}


void getRandom(int* random)
{
	*random = rand();
}






int mainjtjjgh()
{
	setlocale(LC_ALL, "rus");
	int i = 5;
	int* pI1 = &i; //переменная с указателем на int int* pI
	int* pI2 = &i;
	printf("i = 0x%p\n", &i);
	printf("pI1 = 0x%p\n", pI1);
	printf("pI2 = 0x%p\n", pI2);

	printf("*pI1 = %i\n", *pI1); // получение значения
	printf("*pI2 = %i\n", *pI2);

	printf("i = %i\n", i);

	*pI1 = 100;
	printf("i = %i\n", i);
	printf("*pI2 = %i\n", *pI2);

	return 0;
}


int mainyhuerhr()
{
	setlocale(LC_ALL, "rus");
	int i = 5;
	int* pI1 = &i; 
	float f = 6;
	float* pF1 = &f;
	double d = 7;
	double* pD1 = &d;
	long l = 8;
	long* pL1 = &l;
	long long ll = 9;
	long long* pLL1 = &ll;
	
	
	printf("0x%p\n", pI1);	
	printf("0x%p\n", pF1);	
	printf("0x%p\n", pD1);
	printf("0x%p\n", pL1);	
	printf("0x%p\n\n", pLL1);
	
	printf("%i\n", *pI1); 
	printf("%f\n", *pF1);
	printf("%lf\n", *pD1);
	printf("%i\n", *pL1);
	printf("%i\n\n", *pLL1);

	printf("%i\n", sizeof(pI1));
	printf("%i\n", sizeof(pF1));
	printf("%i\n", sizeof(pD1));
	printf("%i\n", sizeof(pL1));
	printf("%i\n", sizeof(pLL1));

	return 0;
}



int main646844614()
{
	setlocale(LC_ALL, "rus");
	int i = 5;
	int* pI1 = &i; //переменная с указателем на int int* pI
	int* pI2 = &i;
	printf("0x%p\n", &i);
	printf("0x%p\n", pI1);
	printf("0x%p\n", pI2);

	printf("%i\n", *pI1); // получение значения


	return 0;
}
