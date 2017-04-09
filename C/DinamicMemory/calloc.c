#include<stdio.h>
#include<locale.h>




int main()
{
	setlocale(LC_ALL, "rus");

	char* elements = calloc(5, 10);
	elements[0] = 'H';
	elements[1] = 'e';
	elements[2] = 'l';
	elements[3] = 'l';
	elements[4] = 'o';
	printf("%s\n", elements);


	return 0;
}
