#include<stdio.h>
#include<locale.h>
#include<Windows.h>


int main()
{
	WIN32_FIND_DATAA found;
	setlocale(LC_ALL, "rus");
	HANDLE findeResult = FindFirstFileA("D:\\*.bin", 
		&found);

	if (findeResult == INVALID_HANDLE_VALUE)
	{
		printf("Files not found\n");
		return 1;
	}
	printf("File found\n");
	return 0;
}
