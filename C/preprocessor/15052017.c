#include<stdio.h>
#include<locale.h>

//Препроцессор
#define MAX(a,b) (a > b ? (printf("%c = %i\n", #a,a)):(printf("%c = %i\n", #b,b)))

void main()
{
	setlocale(LC_ALL, "rus");
	int x = 2;
	int y = 3;
	int c = MAX(x, y);
	
}
