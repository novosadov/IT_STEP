#include <stdio.h>
#include <locale.h>

void printString(char* str);
void changeCase(char* str);

enum Vibor
{
	Big = 1,
	Small
};

int main()
{
	setlocale(LC_ALL, "rus");
	
	char str[] = "Hello World";
	printString(str);	
	changeCase(str);		
	printString(str);

	return 0;
}


void  printString(char *str)
{
	printf("%s\n", str);
}


void changeCase(char* str)
{

	enum Vibor vibor;
	printf("Выберите какие вы хотите буквы\n");
	printf("1 - большие\n2 - маленькие\n");
	scanf("%i", &vibor);
	switch (vibor)
	{
	case Big:

		for (int i = 0; i < '0'; i++)
		{
			if (*(str + i) >= 'a'&& *(str + i) <= 'z')
			{
				char c = str[i];
				c = c - 32;
				str[i] = c;
			}
			else
			{
				continue;
			}
		}
		break;
	case Small:
		for (int i = 0; i < '0'; i++)
		{
			if (*(str + i) >= 'A'&& *(str + i) <= 'Z')
			{
				char c = str[i];
				c = c + 32;
				str[i] = c;
			}
			else
			{
				continue;
			}
		}
		break;
	default:
		printf("Введите верное значение\n");
		break;
	}
	
}
