#include <stdio.h>
#include <locale.h>


void myStrCat(char* str1, char* str2);


int main()
{
	setlocale(LC_ALL, "rus");
	
	char greatingStart[] = "Hello, ";
	char greatingEnd[] = "! Nice to meet you.";
	char name[256];
	printf("Введите Ваше имя\n");
	fgets(name, 256, stdin);
	char result[1024] = " ";
	
	myStrCat(result, greatingStart);
	myStrCat(result, name);
	myStrCat(result, greatingEnd);

	printf("%s", result);

	return 0;
}




void myStrCat(char* str1, char* str2)
{
	while (*str1 != 0 && *str1 != '\n')
	{
		str1++;
	}

	while (*str2 != 0 && *str2 != '\n')
	{
		*str1 = *str2;
		str1++;
		str2++;
	}
}
