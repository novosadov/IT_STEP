#include<stdio.h>
#include<locale.h>
#include<Windows.h>
#include<stdbool.h>


int main()
{
	WIN32_FIND_DATAA found;
	setlocale(LC_ALL, "rus");
	HANDLE findeResult = FindFirstFileA("D:\\*.*", 
		&found);

	if (findeResult == INVALID_HANDLE_VALUE)
	{
		printf("Files not found\n");
		return 1;
	}

	do
	{
		if (strcmp(found.cFileName,".")==0||
			strcmp(found.cFileName, "..")==0)
		{
			continue;
		} 
		
		bool isDirectory = 
			found.dwFileAttributes &
			FILE_ATTRIBUTE_DIRECTORY;
		printf("%d ", isDirectory);
		printf("File found %s\n", found.cFileName);
	} while (FindNextFileA(findeResult, &found));
	

	FindClose(findeResult);

	return 0;
}
