#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//ввод вывод данных
int main()
{
	setlocale(LC_ALL, "rus");

	FILE* file = fopen("c:\\windows\\system.ini", "r");   //открывает файл

	fseek(file, -25, SEEK_END);      //переместить вконец файла и отступить 25 от конца файла

	char*  buff = malloc(256);
	while (fgets(buff, 256, file))
	{
		printf(" %s\n", buff);
	}

	fclose(file); // закрывает файл

	return 0;
}
