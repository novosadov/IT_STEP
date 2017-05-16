#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<direct.h> //Для создания папки
#include<Windows.h>

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
	char* fname = (char *)malloc(256);
	char* disk = (char *)malloc(50);
	char* folder = (char *)malloc(256);
	char* path = (char *)malloc(256);
	char* dir = (char *)malloc(256);
	char* dir2 = (char *)malloc(256);
	char* text = (char*)malloc(10240);

	WIN32_FIND_DATAA found;
	HANDLE findeResult;

	while (true)
	{
		int count = 0;
		enum Menu menu;
		printf("Select a menu item\n");
		printf("0 - Exit\n1 - Add recipe\n2 - Vie recipe\n3 - Edit recipe\n4 - Delete reciep\n");
		scanf("%i", &menu);
		clear();
		FILE* fp;
		switch (menu)
		{
		case Exit:
			return 0;
			break;

		case AddRecipe:
			printf("Enter name disk\n");
			fgets(disk, 50, stdin);

			printf("Enter name folder\n");
			fgets(folder, 256, stdin);

			printf("Enter name recipe\n");
			fgets(fname, 256, stdin);

			char* nameRecipe[256];
			strcpy(nameRecipe, fname);

			disk[strlen(disk) - 1] = '\0';
			folder[strlen(folder) - 1] = '\0';
			fname[strlen(fname) - 1] = '\0';

			strcpy(path, disk);
			strcat(path, ":\\");
			strcat(path, folder);
			strcat(fname, ".recipe");
			mkdir(path);
			strcpy(dir, path);
			strcat(dir, "\\");
			strcat(dir, fname);

			fp = fopen(dir, "wb");
			if (fp == NULL)
			{
				printf("Error.Ne udalos otkrit fail!\n");
				getch();
				return 0;
			}

			struct Recipe f;
			strcpy(f.name, &nameRecipe);
			printf("Enter date recipe\n");
			scanf("%s", &f.date);
			printf("Enter text recipe\n");
			scanf("%s", &f.text);
			printf("Enter reiting\n");
			scanf("%s", &f.reiting);
			clear();

			fwrite(&f, sizeof(struct Recipe), 1, fp);
			fclose(fp);
			count++;
			break;

		case VieRecipe:
			printf("Enter name disk\n");
			fgets(disk, 50, stdin);

			printf("Enter name folder\n");
			fgets(folder, 256, stdin);			

			disk[strlen(disk) - 1] = '\0';
			folder[strlen(folder) - 1] = '\0';				

			strcpy(path, disk);
			strcat(path, ":\\");
			strcat(path, folder);			
			mkdir(path);
			strcpy(dir, path);
			strcat(dir, "\\");
			strcpy(dir2, dir);
			strcat(dir2, "*.recipe");


			findeResult = FindFirstFileA(dir2,
				&found);

			if (findeResult == INVALID_HANDLE_VALUE)
			{
				printf("Files not found\n");
				return 1;
			}
			do
			{
				printf("Recipe: %s\n", found.cFileName);
			} while (FindNextFileA(findeResult, &found));
			
			FindClose(findeResult);

			printf("Enter name recipe\n");
			fgets(fname, 256, stdin);
			fname[strlen(fname) - 1] = '\0';
			strcat(fname, ".recipe");
			strcat(dir, fname);

			fp = fopen(dir, "rb");
			if (fp == NULL)
			{
				printf("Error.Ne udalos otkrit fail!\n");
				getch();
				return 0;
			}

			struct Recipe f2;
			fread(&f2, sizeof(struct Recipe), 1, fp);
			printf("Name recipe: \n\t%s", f2.name);
			printf("========================================================================\n");
			printf("Date recipe: \n\t%s\n", f2.date);
			printf("========================================================================\n");
			printf("Text recipe: \n\t%s\n", f2.text);
			printf("========================================================================\n");
			printf("Reiting: \n\t%s\n", f2.reiting);
			printf("========================================================================\n");

			fclose(fp);
			break;

		case EditRecipe:
			printf("Enter name disk\n");
			fgets(disk, 50, stdin);

			printf("Enter name folder\n");
			fgets(folder, 256, stdin);

			disk[strlen(disk) - 1] = '\0';
			folder[strlen(folder) - 1] = '\0';

			strcpy(path, disk);
			strcat(path, ":\\");
			strcat(path, folder);
			mkdir(path);
			strcpy(dir, path);
			strcat(dir, "\\");
			strcpy(dir2, dir);
			strcat(dir2, "*.recipe");


			findeResult = FindFirstFileA(dir2,
				&found);

			if (findeResult == INVALID_HANDLE_VALUE)
			{
				printf("Files not found\n");
				return 1;
			}
			do
			{
				printf("Recipe: %s\n", found.cFileName);
			} while (FindNextFileA(findeResult, &found));

			FindClose(findeResult);

			printf("Enter name recipe\n");
			fgets(fname, 256, stdin);
			fname[strlen(fname) - 1] = '\0';
			strcat(fname, ".recipe");
			strcat(dir, fname);

			fp = fopen(dir, "ab");
			if (fp == NULL)
			{
				printf("Error.Ne udalos otkrit fail!\n");
				getch();
				return 0;
			}

			struct Recipe f3;
			strcpy(f3.name, &nameRecipe);			
			printf("Enter text recipe\n");
			scanf("%s", &f3.text);			
			clear();

			fwrite(&f3, sizeof(struct Recipe), 1, fp);
			fclose(fp);
			break;

		case DelReciep:
			printf("Enter name disk\n");
			fgets(disk, 50, stdin);

			printf("Enter name folder\n");
			fgets(folder, 256, stdin);

			printf("Enter name recipe\n");
			fgets(fname, 256, stdin);

			disk[strlen(disk) - 1] = '\0';
			folder[strlen(folder) - 1] = '\0';
			fname[strlen(fname) - 1] = '\0';

			strcpy(path, disk);
			strcat(path, ":\\");
			strcat(path, folder);
			strcat(fname, ".recipe");
			mkdir(path);
			strcpy(dir, path);
			strcat(dir, "\\");
			strcat(dir, fname);

			if (fp == NULL)
			{
				printf("Error.Ne udalos otkrit fail!\n");
				getch();
				return 0;
			}
			if (remove(dir) == -1)
			{
				printf("error\n");
			}
			else
			{
				printf("Ura ydalili!!!\n");
			}
			break;

		default:
			printf("You have entered not right value...\n");
			break;
		}

	}
	free(fname);
	free(disk);
	free(folder);
	free(path);
	free(dir);
}


void clear()
{
	char ch;
	do {
		ch = getchar();
	} while (ch != '\n' && ch != EOF);
}
