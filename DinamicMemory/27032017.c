#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<Windows.h>

#define BOOKS_COUNT 3
#define BOOKS_SIZE 2000
//Динамическая память


int main()
{
	setlocale(LC_ALL, "rus");	

	char** books = malloc(10 * sizeof(char*));
	for (int i = 0; i < BOOKS_COUNT; i++)
	{
		*(books + i) = malloc(2000 * sizeof(char));
	}
		

	for (int i = 0; i < BOOKS_COUNT; i++)
	{
		printf("Book #%i:\n", i + 1);
		fgets( *(books + i), BOOKS_SIZE, stdin);
		printf("\n");
	}


	printf("==============Library================");

	for (int i = 0; i < BOOKS_COUNT; i++)
	{
		printf("Book #%i:\n", i + 1);
		printf("%s", *(books + i));

	}


	for (int i = 0; i < BOOKS_COUNT; i++)
	{
		free(*(books + i));
	}
	free(books);

	system("pause");

	
	/*int mb = 10*1024*1024;
	int number = 0;
	while (true)
	{
		int* k = malloc(mb);	
		number++;
		if (k == NULL)
		{
			break;
		}		
	}
	printf("Съедено %i mb\n", number  * 1024/100 );
	Sleep(1000);*/
	

	
	//int* k = malloc(4); //выделить 4 байта памяти (возвращает указатель)
	//free(k); //освобождает память

	//char* ch = malloc(10000000);
	//
	//free(ch);
	/*int mb = 0;
	printf("Введите количество мегобайт которые необходимо выделить\n");
	scanf("%i", &mb);
	mb = mb * 1024*1024;
	int* k = malloc(mb);
	system("pause");
	free(k);*/

	return 0;
}
