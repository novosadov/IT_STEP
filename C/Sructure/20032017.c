#include<stdio.h>
#include<locale.h>
#include<Windows.h>

#define KOLICHESTVO 1


// структуры

struct Book
{
	char name[50];
	char author[50];
	char genre[50];
	int year;
};

void zapolnenieStructure(struct Book books[], int kolichestvo);
void printStructure(struct Book books[], int kolichestvo);


int main()
{
	setlocale(LC_ALL, "rus");
	struct Book books[KOLICHESTVO];
	int kolichestvo = KOLICHESTVO;
	zapolnenieStructure(books, kolichestvo);
	system("cls");
	printStructure(books, kolichestvo);
	return 0;
}



void zapolnenieStructure(struct Book books[], int kolichestvo)
{

	for (int i = 0; i < kolichestvo; i++)
	{
		

		printf("Введите название книги\n");
		fgets(books[i].name, 50, stdin);

		printf("Введите автора книги\n");
		fgets(books[i].author, 50, stdin);

		printf("Введите жанр книги\n");
		fgets(books[i].genre, 50, stdin);

		printf("Введите год книги\n");
		scanf("%i", &books[i].year);

		char ch;
		do{
			ch = getchar();
		} while (ch != '\n' && ch != EOF);
	}
}



void printStructure(struct Book books[], int kolichestvo)
{
	for (int i = 0; i < kolichestvo; i++)
	{

		printf("Название %i книги:\t%s\n", i+1, books[i].name);
		printf("Автор %i книги:\t\t%s\n", i+1, books[i].author);
		printf("Жанр %i книги:\t\t%s\n",i+1, books[i].genre);
		printf("Год %i книги\t\t%i\n",i+1, books[i].year);
		printf("\n\n\n");
	}

}
