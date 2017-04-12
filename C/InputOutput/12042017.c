#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//ввод вывод данных
int main()
{
	setlocale(LC_ALL, "rus");

	FILE* file = fopen("c:\\windows\\system.ini", "r");   //открывает файл
	char*  buff = malloc(1024);
	while (fgets(buff, 1024, file))
	{
		printf(" %s\n", buff);
	}

	fclose(file); // закрывает файл

	return 0;
}
