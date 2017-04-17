#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>


int main()
{
	setlocale(LC_ALL, "rus");

	FILE* file = fopen("d:\\book1.book", "r");
		
	char*  buff = malloc(256);	

	while (fgets(buff, 256, file))
	{		
		char* ch;
		ch = strchr(buff, '\n');

		if (ch != NULL)
		{
			*ch = '\0';
		}
		else
		{
			break;
		}

		printf(" %s\n", buff);
	}

	fclose(file); 
	free(buff);

	return 0;
}
