#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

//ввод вывод данных
int main()
{
	setlocale(LC_ALL, "rus");

	FILE* file = fopen("c:\\windows\\system.ini", "r");   //открывает файл

	fseek(file, -25, SEEK_END);      //переместить вконец файла и отступить 25 от конца файла
//	fseek(file, 25, SEEK_SET);       //переместить вначало файла и отступить 25 от начала
//	fseek(file, 25, SEEK_CUR);       //ни куда не перемещает пропускает  по 25 байтов


	char*  buff = malloc(256);
	while (fgets(buff, 256, file))
	{
		printf(" %s\n", buff);
	}

	fclose(file); // закрывает файл

	return 0;
}
