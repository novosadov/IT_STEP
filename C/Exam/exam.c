#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include <direct.h>

#define STRING_SIZE 50

/*
Разработать программу хранения рецептов.
При запуске программа показывает меню.
Меню:
1. Добавление рецепта
2. Просмотр рецепта
3. Редактирование рецепта
4. Удаление рецепта
5. Выход
Каждый рецепт должен содержать следующую информацию:
1. Дату создания рецепта
2. Имя рецепта
3. Текст рецепта
4. Рейтинг (от 1 до 10)
Пункт №1 спрашивает имя рецепта на английском языке (или транслите). Это имя в
последствии будет именем файла на файловой системе в котором будет лежать весь тест.
Расширение файла - *.recipe. Далее программа спрашивает текст рецепта и рейтинг.
Пункт №2 выводит список рецептов на файловой системе (файлы с маской *.recipe рядом
с приложением) у которых размер файла больше 0. Далее выводит на экран содержимое
рецепта (дата, имя, текст, рейтинг).
Пункт №3 выводит список рецептов на файловой системе (файлы с маской *.recipe рядом
с приложением) у которых размер файла больше 0. Затем программа спрашивает новый
текст рецепта, который заменит весь текущий текст.
Пункт №4 выводит список рецептов на файловой системе (файлы с маской *.recipe рядом
с приложением), затем спрашивает какой из тестов надо удалить и очищает файл (размер
0).
Пункт №5 – выход из программы.
Очистка файла: можно открыть файл в режиме "w" и закрыть.
*/


struct Recipe
{
	char name[256];
	char date[50];
	char text[1024];
	char reiting[10];
};




enum Menu
{
	AddRecipe = 1,
	VieRecipe,
	EditRecipe,
	DelReciep,
	Exit = 0,
};


void menu(struct Recipe recipe[]);
void clear();
void writeString(char* string, int offset, FILE* f);


int main()
{	
	struct Recipe* recipe = malloc(1024 * sizeof(struct Recipe*));
	
	
	printf(" ================ Book of recipes ================ \n\n");
	menu(recipe);

	free(recipe);	
	return 0; 
}


void menu(struct Recipe recipe[])
{

	
	
	while (true)
	{
		int count = 0;
		enum Menu menu;
		printf("Select a menu item\n");
		printf("0 - Exit\n1 - Add recipe\n2 - Vie recipe\n3 - Edit recipe\n4 - Delet reciep\n");
		scanf("%i", &menu);
		clear();
		switch (menu)
		{
		case Exit:
			return 0;
			break;
		case AddRecipe:
			printf("Enter name recipe\n");
			char* fname = (char *)malloc(256);
			fgets(fname, 256, stdin);	

			printf("Enter name disk\n");
			char* disk = (char *)malloc(50);
			fgets(disk, 50, stdin);

			printf("Enter name folder\n");
			char* folder = (char *)malloc(256);
			fgets(folder, 256, stdin);

			char* path = (char *)malloc(256);	
			disk[strlen(disk) - 1] = '\0';
			folder[strlen(folder) - 1] = '\0';
			strcpy(path, disk);
			strcat(path, ":\\");
			strcat(path, folder);			
			
			//*recipe[count].name = fname;			
			fname[strlen(fname) - 1] = '\0';
			strcat(fname, ".recipe");
			char* dir = (char *)malloc(256);
			mkdir(path);					
			strcpy(dir, path);	
			strcat(dir, "\\");
			strcat(dir, fname);
			
			FILE* fp = fopen(dir, "w");
			if (fp == NULL)
			{
				printf("Error.Ne udalos otkrit fail!");
				getch();
				return 0;
			}

			struct Recipe fio = {"recipe", "16.11.1980", "Text recipe",
				"*****" };
			fwrite(&fio, sizeof(struct Recipe),
				1, fp);

			fclose(fp);
			break;
		case VieRecipe:

			fp = fopen(dir, "r");
			
			struct Recipe fio2;
			fread(&fio2, sizeof(struct Recipe),
				1, fp);

			printf("%s\n", fio2.name);
			printf("%s\n", fio2.date);
			printf("%s\n", fio2.text);
			printf("%s\n", fio2.reiting);
			

			fclose(fp);
			break;
		case EditRecipe:
			printf("Edit Recipe\n");
			break;
		case DelReciep:
			printf("Del Recipe\n");
			break;
		default:
			printf("You have entered not right value...\n");
			break;
		}
		count ++;
	}
}




void writeString(char* string, int offset,	FILE* f)
{
	fseek(f, offset, SEEK_SET);
	fwrite(string, STRING_SIZE, 1, f);
}




void clear()
{
	char ch;
	do {
		ch = getchar();
	} while (ch != '\n' && ch != EOF);
}
